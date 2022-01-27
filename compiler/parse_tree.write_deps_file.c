/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version 13.05, configured for x86_64-apple-darwin12.3.0.
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


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.options_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1904 "write_deps_file.m"
struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s {
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17;
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20;
#line 1910 "write_deps_file.m"
  MR_bool parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded;
#line 1926 "write_deps_file.m"
  jmp_buf parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0;
#line 1926 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30;
#line 1926 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46;
#line 1926 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47;
#line 1927 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_28_28;
#line 1927 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_28_28;
#line 1927 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_46_46;
#line 1904 "write_deps_file.m"
};


#line 167 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 170 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;

#line 173 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

#line 176 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 179 "parse_tree.write_deps_file.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 182 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 185 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 1542 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 1542 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1542 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 1542 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
#line 1542 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5);

#line 1535 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
#line 1535 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_5,
#line 1535 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_6,
#line 1535 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8);

#line 1507 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1505__1_3_p_0_1(
#line 1507 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1507 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1507 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1505 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1505__1_3_p_0(
#line 1505 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5,
#line 1505 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_15,
#line 1505 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_16);

#line 1507 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__foreign_modules__1507__1_2_f_0(
#line 1507 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_15,
#line 1507 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_18,
#line 1507 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_19);

#line 1147 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1147__1_5_p_0(
#line 1147 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1147 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_115,
#line 1147 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__HeadVar__3_116);

#line 1097 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1097__1_2_p_0(
#line 1097 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1097 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_88);

#line 957 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__write_foreign_dependency_for_il__957__1_2_f_0(
#line 957 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 957 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_63);

#line 789 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__submodules__789__1_3_p_0(
#line 789 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 789 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Str_7,
#line 789 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_10);

#line 2242 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2242__1_1_f_0(
#line 2242 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_16);

#line 585 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__585__1_7_p_0(
#line 585 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 585 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_41,
#line 585 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImportedModules_119,
#line 585 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ForeignImportExt_123,
#line 585 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_583);

#line 541 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__541__1_3_p_0(
#line 541 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_13,
#line 541 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_571,
#line 541 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_572);

#line 265 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__265__1_7_p_0(
#line 265 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 265 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_14,
#line 265 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__NestedDeps_21,
#line 265 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_41,
#line 265 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_305);

#line 2358 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
#line 2358 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym1_4,
#line 2358 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym2_5,
#line 2358 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Result_6);

#line 2267 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
#line 2267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 2267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 2267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 2267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_4,
#line 2267 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
#line 2267 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6);

#line 2217 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
#line 2217 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_4,
#line 2217 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 2217 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__FileName_6);

#line 2127 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
#line 2127 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_17,
#line 2127 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_18,
#line 2127 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_19,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_20,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ExeFileName_21,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_22,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_25,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LibFileName_26,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__JarFileName_28,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DepFileName_29,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DvFileName_30);

#line 2114 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
#line 2114 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 2114 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_9,
#line 2114 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 2114 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_11,
#line 2114 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5);

#line 2096 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
#line 2096 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2096 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2096 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2096 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 2091 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
#line 2091 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 2091 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 2091 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 2091 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_10);

#line 1926 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
#line 1926 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1927 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
#line 1927 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1926 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
#line 1926 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1926 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
#line 1926 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1904 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_14,
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_15,
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_16,
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_17,
#line 1904 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_18,
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_20,
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_21,
#line 1904 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
#line 1904 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
#line 1904 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24);

#line 1861 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
#line 1861 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_11,
#line 1861 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12,
#line 1861 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_13,
#line 1861 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_14,
#line 1861 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_15,
#line 1861 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_16,
#line 1861 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DepFileName_17,
#line 1861 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DvFileName_18);

#line 1623 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
#line 1623 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_19,
#line 1623 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_20,
#line 1623 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_21,
#line 1623 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_22,
#line 1623 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_23,
#line 1623 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
#line 1623 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_25,
#line 1623 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_26,
#line 1623 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
#line 1623 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
#line 1623 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
#line 1623 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
#line 1623 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
#line 1623 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__JarFileName_32,
#line 1623 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LibFileName_33,
#line 1623 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34);

#line 1567 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
#line 1567 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1567 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1567 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1567 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1567 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12);

#line 1505 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0_1(
#line 1505 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1505 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1505 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1501 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0(
#line 1501 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_4,
#line 1501 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5);

#line 1478 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
#line 1478 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1478 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_2,
#line 1478 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3);

#line 1147 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
#line 1147 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1147 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1147 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
#line 1147 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
#line 1147 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

#line 1097 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
#line 1097 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1097 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 1078 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
#line 1078 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1078 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1078 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1075 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
#line 1075 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1075 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1075 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1075 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 1053 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
#line 1053 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1053 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1053 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1053 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1053 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12);

#line 981 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
#line 981 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 981 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 981 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 981 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Ext_10);

#line 957 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0_1(
#line 957 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 957 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 913 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0(
#line 913 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 913 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 913 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 913 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__AllDeps_12,
#line 913 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImports_13,
#line 913 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignLang_14);

#line 887 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
#line 887 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 887 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_2,
#line 887 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_3);

#line 873 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
#line 873 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 873 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 873 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 873 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4);

#line 859 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
#line 859 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 859 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_2,
#line 859 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 859 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_4,
#line 859 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_5);

#line 840 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 840 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__3_3,
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4);

#line 833 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
#line 833 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 833 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2);

#line 811 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
#line 811 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 811 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_10,
#line 811 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Prefix_11,
#line 811 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_12,
#line 811 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Basis_13,
#line 811 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_14);

#line 800 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
#line 800 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 800 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 800 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 800 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4);

#line 789 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0_1(
#line 789 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 789 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 782 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0(
#line 782 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 782 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules0_5);

#line 2242 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0_1(
#line 2242 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2242 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 678 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_7(
#line 678 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 678 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 678 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 678 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 602 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_6(
#line 602 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 602 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 602 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 602 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 585 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_5(
#line 585 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 585 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 585 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 585 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 541 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_4(
#line 541 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 541 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 541 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 367 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_3(
#line 367 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 367 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 345 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_2(
#line 345 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 345 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 265 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_1(
#line 265 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 265 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 265 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 265 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[122][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[3][10];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[3][5];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[6][6];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[1][11];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][9];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[3][1];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[1][8];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[122][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ".java_date")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) ".il_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) ".dir/*.\044O")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ".pic_s_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ".s_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ".c_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ".trans_opt_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) ".optdate")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) " endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "\t\100:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) ".dll")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) ".il")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) ".class")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) ".java")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) ".pic_s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) ".s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) ".pic_o")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) ".\044O")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) ".c")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[10])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "endif\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) " \044(ALL_MLLIBS)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "\tdone\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "\t\t} || exit 1; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044(INSTALL_INT_DIR)\"/*.\044\044ext \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "\t\t\t{ [ -d \"\044\044dir\" ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(LN_S) .. \"\044\044dir\" || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "\t\trm -rf \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "\t\tdir=\"\044(INSTALL_INT_DIR)/Mercury/\044\044{ext}s\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "; do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\t\"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[28])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044(INSTALL_GRADE_INT_DIR)\"/*.\044\044ext \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) "\t\t\t{ [ -d \"\044\044dir\" ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(LN_S) .. \"\044\044dir\" || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) "\t\trm -rf \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "\t\tdir=\"\044(INSTALL_GRADE_INT_DIR)/Mercury/\044\044{ext}s\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) "; do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "\tdone\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[25])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INC_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) ".mhs); do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[25])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "\t\t} && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_INT_DIR)/Mercury/mihs; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \044(INSTALL_INT_DIR)/Mercury/mihs ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mihs || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \044(INSTALL_INT_DIR)/Mercury/mihs\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_GRADE_INC_SUBDIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) "\t\t} && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[59])))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \044(INSTALL_GRADE_INC_SUBDIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \044(INSTALL_GRADE_INC_SUBDIR) ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \044(INSTALL_GRADE_INC_SUBDIR) || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \044(INSTALL_GRADE_INC_SUBDIR)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[64])))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[65])))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_String) "\tdone\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_GRADE_INC_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[68])))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[69])))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_String) ".mihs); do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[70])))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_String) ".all_trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 73 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[72])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_String) ".all_opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 75 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[74])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_String) ".all_int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 77 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[76])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) ((MR_String) ".all_ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 79 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[78])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_String) ".classes"))
  },
  /* row 81 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[80])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) ((MR_String) ".javas"))
  },
  /* row 83 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[82])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_String) ".ils")),
    ((MR_Box) ((MR_String) ".ils"))
  },
  /* row 85 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[84])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[83])))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 87 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[86])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[85])))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 89 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[88])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[87])))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 91 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[90])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[89])))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 93 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[92])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[91])))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_String) ".check")),
    ((MR_Box) ((MR_String) ".errs"))
  },
  /* row 95 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[94])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs) | xargs rm -f\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_String) " :")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_String) ".fact_tables =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) ".fact_tables.cs =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) ".fact_tables.os =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) ".fact_tables:%=\044(cs_subdir)%.c)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) " : ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) " : mercury.sn\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_String) "\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_String) "=")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) ".cs)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLLIBS_DEP))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS)))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_String) "ifeq (\044(findstring il,\044(GRADE)),il)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_String) ".foreign_dlls)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) " ifeq (\044(findstring java,\044(GRADE)),java)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) ".classes)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_String) "else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_String) " else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_String) " endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_String) " \044(ALL_MLLIBS)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_String) ")\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_String) ".classes) | xargs rm -f\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0])),
    ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0])),
    ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[1])),
    ((MR_Box) (parse_tree__write_deps_file__referenced_dlls_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[2])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_1)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "mercury_dotnet"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "mercury_il"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "mercury"))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 1736 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 1744 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0
  }
};

#line 1752 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

#line 1761 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1770 "parse_tree.write_deps_file.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1779 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__write_deps_file__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0
  }
};

#line 1787 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1542 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 1542 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1542 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 1542 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
#line 1542 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5)
#line 1542 "write_deps_file.m"
{
#line 1547 "write_deps_file.m"
  while (MR_TRUE)
#line 1547 "write_deps_file.m"
    {
#line 1547 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 1547 "write_deps_file.m"
      {
#line 1547 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 1547 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1547 "write_deps_file.m"
          *parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4;
#line 1547 "write_deps_file.m"
        else
#line 1549 "write_deps_file.m"
          {
#line 1549 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_47_47 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 1549 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_49_49;
#line 1549 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1549 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1549 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleImports_17;
#line 1549 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FactDeps_18;
#line 1549 "write_deps_file.m"
            MR_Integer parse_tree__write_deps_file__NumFactDeps_19;
#line 1549 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleList_20;
#line 1549 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__NewLinkObjs_22;
#line 1549 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_25_25;
#line 1549 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;
#line 1550 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv0_V_25_25;
#line 1550 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_16_16;
#line 1553 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_28_28;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_29_29;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_30_30;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_31_31;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_32_32;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_33_33;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_34_34;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_35_35;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_36_36;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_37_37;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_38_38;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_39_39;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_40_40;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_41_41;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_42_42;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_43_43;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_44_44;
#line 1553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_45_45;
#line 1553 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_46_46;

#line 1550 "write_deps_file.m"
            {
#line 1550 "write_deps_file.m"
              mercury__map__lookup_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_47_47, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__HeadVar__2_2, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__conv0_V_25_25);
            }
#line 1550 "write_deps_file.m"
            parse_tree__write_deps_file__V_25_25 = ((MR_Word) parse_tree__write_deps_file__conv0_V_25_25);
#line 1550 "write_deps_file.m"
            parse_tree__write_deps_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_25_25, (MR_Integer) 0)));
#line 1550 "write_deps_file.m"
            parse_tree__write_deps_file__ModuleImports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_25_25, (MR_Integer) 1)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 0)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 1)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 2)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 3)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 4)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 5)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 6)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 7)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 8)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 9)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__FactDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 10)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 11)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 12)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 13)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 14)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 15)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 16)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 17)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 18)));
#line 1553 "write_deps_file.m"
            parse_tree__write_deps_file__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 19)));
#line 1944 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1554 "write_deps_file.m"
            {
#line 1554 "write_deps_file.m"
              mercury__list__length_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_49_49, parse_tree__write_deps_file__FactDeps_18, &parse_tree__write_deps_file__NumFactDeps_19);
            }
#line 1555 "write_deps_file.m"
            {
#line 1555 "write_deps_file.m"
              mercury__list__duplicate_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_47_47, parse_tree__write_deps_file__NumFactDeps_19, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__ModuleList_20);
            }
#line 1556 "write_deps_file.m"
            {
#line 1556 "write_deps_file.m"
              mercury__assoc_list__from_corresponding_lists_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_49_49, parse_tree__write_deps_file__TypeCtorInfo_47_47, parse_tree__write_deps_file__FactDeps_18, parse_tree__write_deps_file__ModuleList_20, &parse_tree__write_deps_file__NewLinkObjs_22);
            }
#line 1562 "write_deps_file.m"
            {
#line 1562 "write_deps_file.m"
              mercury__list__append_3_p_1((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], parse_tree__write_deps_file__NewLinkObjs_22, parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4, &parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26);
            }
#line 1563 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 1563 "write_deps_file.m"
            {
#line 1563 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__1__tmp_copy_1 = parse_tree__write_deps_file__Modules_12;
#line 1563 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0__tmp_copy_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;

#line 1563 "write_deps_file.m"
              parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0__tmp_copy_4;
#line 1563 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__1_1 = parse_tree__write_deps_file__HeadVar__1__tmp_copy_1;
#line 1563 "write_deps_file.m"
            }
#line 1563 "write_deps_file.m"
            continue;
#line 1549 "write_deps_file.m"
          }
#line 1547 "write_deps_file.m"
      }
#line 1547 "write_deps_file.m"
      break;
#line 1547 "write_deps_file.m"
    }
#line 1542 "write_deps_file.m"
}

#line 1535 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
#line 1535 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_5,
#line 1535 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_6,
#line 1535 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8)
#line 1535 "write_deps_file.m"
{
#line 1538 "write_deps_file.m"
  {
#line 1538 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1538 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs0_9;

#line 1539 "write_deps_file.m"
    {
#line 1539 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(parse_tree__write_deps_file__Modules_5, parse_tree__write_deps_file__DepsMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_deps_file__ExtraLinkObjs0_9);
    }
#line 1540 "write_deps_file.m"
    {
#line 1540 "write_deps_file.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], parse_tree__write_deps_file__ExtraLinkObjs0_9, parse_tree__write_deps_file__ExtraLinkObjs_8);
#line 1540 "write_deps_file.m"
      return;
    }
#line 1538 "write_deps_file.m"
  }
#line 1535 "write_deps_file.m"
}

#line 1507 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1505__1_3_p_0_1(
#line 1507 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1507 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1507 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1507 "write_deps_file.m"
{
#line 1507 "write_deps_file.m"
  {
#line 1507 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1507 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1507 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv1_HeadVar__3_19;

#line 1507 "write_deps_file.m"
    {
#line 1507 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__func__foreign_modules__1507__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_HeadVar__3_19);
    }
#line 1507 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1507 "write_deps_file.m"
      {
#line 1507 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_HeadVar__3_19));
#line 1507 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1507 "write_deps_file.m"
      }
#line 1507 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1507 "write_deps_file.m"
  }
#line 1507 "write_deps_file.m"
}

#line 1505 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1505__1_3_p_0(
#line 1505 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5,
#line 1505 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_15,
#line 1505 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_16)
#line 1505 "write_deps_file.m"
{
#line 1505 "write_deps_file.m"
  {
#line 1505 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1505 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_23_23;
#line 1505 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeInfo_24_24;
#line 1505 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_33_57;
#line 1505 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LangList_10;
#line 1505 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_17_17;
#line 1505 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_32;
#line 1505 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Langs_33;
#line 1505 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_34_34;
#line 1505 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_35_35;
#line 1523 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_V_34_34;
#line 1523 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_31_31;
#line 1524 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_36_36;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_37_37;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_38_38;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_40_40;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_41_41;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_42_42;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_44_44;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_45_45;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_46_46;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_47_47;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_48_48;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_49_49;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_51_51;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 1524 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 1524 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_54_54;

#line 1523 "write_deps_file.m"
    {
#line 1523 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_5, ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_15)), &parse_tree__write_deps_file__conv0_V_34_34);
    }
#line 1523 "write_deps_file.m"
    parse_tree__write_deps_file__V_34_34 = ((MR_Word) parse_tree__write_deps_file__conv0_V_34_34);
#line 1523 "write_deps_file.m"
    parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_34_34, (MR_Integer) 0)));
#line 1523 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_34_34, (MR_Integer) 1)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 0)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 1)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 2)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 3)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 4)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 5)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 6)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 7)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 8)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 9)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 10)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 11)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 12)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 13)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 14)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 15)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 16)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 17)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 18)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 19)));
#line 1524 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 1524 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1524 "write_deps_file.m"
      {
#line 1524 "write_deps_file.m"
        parse_tree__write_deps_file__Langs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, (MR_Integer) 0)));
#line 2206 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_33_57 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 1525 "write_deps_file.m"
        {
#line 1525 "write_deps_file.m"
          parse_tree__write_deps_file__LangList_10 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_33_57, parse_tree__write_deps_file__Langs_33);
        }
#line 2213 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_23_23 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 2215 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeInfo_24_24 = (MR_Word) &parse_tree__write_deps_file_scalar_common_2[0];
#line 1507 "write_deps_file.m"
        {
#line 1507 "write_deps_file.m"
          parse_tree__write_deps_file__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1507 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[5]));
#line 1507 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 1) = ((MR_Box) (parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1505__1_3_p_0_1));
#line 1507 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1507 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 3) = ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_15));
#line 1507 "write_deps_file.m"
        }
#line 1507 "write_deps_file.m"
        {
#line 1507 "write_deps_file.m"
          *parse_tree__write_deps_file__HeadVar__3_16 = mercury__list__filter_map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__TypeInfo_24_24, parse_tree__write_deps_file__V_17_17, parse_tree__write_deps_file__LangList_10);
        }
#line 1507 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1524 "write_deps_file.m"
      }
#line 1505 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1505 "write_deps_file.m"
  }
#line 1505 "write_deps_file.m"
}

#line 1507 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__foreign_modules__1507__1_2_f_0(
#line 1507 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_15,
#line 1507 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_18,
#line 1507 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_19)
#line 1507 "write_deps_file.m"
{
#line 1507 "write_deps_file.m"
  {
#line 1507 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1507 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__NewM_12;
#line 1507 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Ext_13;

#line 1508 "write_deps_file.m"
    {
#line 1508 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(parse_tree__write_deps_file__HeadVar__1_15, parse_tree__write_deps_file__HeadVar__2_18, &parse_tree__write_deps_file__NewM_12);
    }
#line 1507 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1507 "write_deps_file.m"
      {
#line 1509 "write_deps_file.m"
        {
#line 1509 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(parse_tree__write_deps_file__HeadVar__2_18, &parse_tree__write_deps_file__Ext_13);
        }
#line 1507 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 1507 "write_deps_file.m"
          {
#line 1507 "write_deps_file.m"
            {
#line 1507 "write_deps_file.m"
              MR_Word base;
#line 1507 "write_deps_file.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1507 "write_deps_file.m"
              *parse_tree__write_deps_file__HeadVar__3_19 = base;
#line 1507 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__write_deps_file__NewM_12));
#line 1507 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__write_deps_file__Ext_13));
#line 1507 "write_deps_file.m"
            }
#line 1507 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1507 "write_deps_file.m"
          }
#line 1507 "write_deps_file.m"
      }
#line 1507 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1507 "write_deps_file.m"
  }
#line 1507 "write_deps_file.m"
}

#line 1147 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1147__1_5_p_0(
#line 1147 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1147 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_115,
#line 1147 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__HeadVar__3_116)
#line 1147 "write_deps_file.m"
{
#line 1147 "write_deps_file.m"
  {
#line 1147 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1147 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__F0_44;
#line 1147 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__M_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_115, (MR_Integer) 0)));
#line 1147 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__E_461 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_115, (MR_Integer) 1)));

#line 1148 "write_deps_file.m"
    {
#line 1148 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__M_460, parse_tree__write_deps_file__E_461, (MR_Integer) 0, &parse_tree__write_deps_file__F0_44);
    }
#line 1149 "write_deps_file.m"
    {
#line 1149 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_116 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", parse_tree__write_deps_file__F0_44);
    }
#line 1147 "write_deps_file.m"
  }
#line 1147 "write_deps_file.m"
}

#line 1097 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1097__1_2_p_0(
#line 1097 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1097 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_88)
#line 1097 "write_deps_file.m"
{
#line 1097 "write_deps_file.m"
  {
#line 1097 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1097 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_25;
#line 1097 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_89_89;
#line 1097 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_90_90;
#line 1099 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_V_89_89;
#line 1099 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_24_24;
#line 1100 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_464_464;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_465_465;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_466_466;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_467_467;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_468_468;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_469_469;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_470_470;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_471_471;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_472_472;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_473_473;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_474_474;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_475_475;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_476_476;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_477_477;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_478_478;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_479_479;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_480_480;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_481_481;
#line 1100 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_482_482;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_26_26;
#line 1100 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_27_27;

#line 1099 "write_deps_file.m"
    {
#line 1099 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_88)), &parse_tree__write_deps_file__conv0_V_89_89);
    }
#line 1099 "write_deps_file.m"
    parse_tree__write_deps_file__V_89_89 = ((MR_Word) parse_tree__write_deps_file__conv0_V_89_89);
#line 1099 "write_deps_file.m"
    parse_tree__write_deps_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_89_89, (MR_Integer) 0)));
#line 1099 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_89_89, (MR_Integer) 1)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_464_464 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 0)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_465_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 1)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_466_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 2)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_467_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 3)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_468_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 4)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_469_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 5)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 6)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 7)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 8)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 9)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 10)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_474_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 11)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 12)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 13)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_477_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 14)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_478_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 15)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_479_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 16)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_480_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 17)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_481_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 18)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__V_482_482 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_25, (MR_Integer) 19)));
#line 1100 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__V_90_90)) == (MR_mktag((MR_Integer) 1)));
#line 1100 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1100 "write_deps_file.m"
      {
#line 1100 "write_deps_file.m"
        parse_tree__write_deps_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, (MR_Integer) 0)));
#line 1100 "write_deps_file.m"
        parse_tree__write_deps_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, (MR_Integer) 1)));
#line 1100 "write_deps_file.m"
      }
#line 1097 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1097 "write_deps_file.m"
  }
#line 1097 "write_deps_file.m"
}

#line 957 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__write_foreign_dependency_for_il__957__1_2_f_0(
#line 957 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 957 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_63)
#line 957 "write_deps_file.m"
{
#line 957 "write_deps_file.m"
  {
#line 957 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 957 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HeadVar__3_64;

#line 957 "write_deps_file.m"
    {
#line 957 "write_deps_file.m"
      return parse_tree__write_deps_file__HeadVar__3_64 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(parse_tree__write_deps_file__HeadVar__2_63, parse_tree__write_deps_file__ModuleName_11);
    }
#line 957 "write_deps_file.m"
    return parse_tree__write_deps_file__HeadVar__3_64;
#line 957 "write_deps_file.m"
  }
#line 957 "write_deps_file.m"
}

#line 789 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__submodules__789__1_3_p_0(
#line 789 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 789 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Str_7,
#line 789 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_10)
#line 789 "write_deps_file.m"
{
#line 789 "write_deps_file.m"
  {
#line 789 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 789 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_13_13;

#line 790 "write_deps_file.m"
    {
#line 790 "write_deps_file.m"
      parse_tree__write_deps_file__V_13_13 = mdbcomp__prim_data__outermost_qualifier_1_f_0(parse_tree__write_deps_file__HeadVar__3_10);
    }
#line 790 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__Str_7, parse_tree__write_deps_file__V_13_13) == 0);
#line 789 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 789 "write_deps_file.m"
      {
#line 791 "write_deps_file.m"
        {
#line 791 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__write_deps_file__HeadVar__3_10, parse_tree__write_deps_file__Module_4);
        }
#line 791 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 789 "write_deps_file.m"
      }
#line 789 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 789 "write_deps_file.m"
  }
#line 789 "write_deps_file.m"
}

#line 2242 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2242__1_1_f_0(
#line 2242 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_16)
#line 2242 "write_deps_file.m"
{
#line 2242 "write_deps_file.m"
  {
#line 2242 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2242 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HeadVar__2_17;

#line 2243 "write_deps_file.m"
    {
#line 2243 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__HeadVar__1_16);
    }
#line 2242 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2244 "write_deps_file.m"
      {
#line 2242 "write_deps_file.m"
        parse_tree__write_deps_file__HeadVar__2_17 = (MR_Word) &parse_tree__write_deps_file_scalar_common_8[2];
#line 2244 "write_deps_file.m"
      }
#line 2242 "write_deps_file.m"
    else
#line 2247 "write_deps_file.m"
      {
#line 2247 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_19_19;

#line 2247 "write_deps_file.m"
        {
#line 2247 "write_deps_file.m"
          parse_tree__write_deps_file__V_19_19 = mdbcomp__prim_data__outermost_qualifier_1_f_0(parse_tree__write_deps_file__HeadVar__1_16);
        }
#line 2242 "write_deps_file.m"
        {
#line 2242 "write_deps_file.m"
          parse_tree__write_deps_file__HeadVar__2_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2242 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_17, 0) = ((MR_Box) (parse_tree__write_deps_file__V_19_19));
#line 2242 "write_deps_file.m"
        }
#line 2247 "write_deps_file.m"
      }
#line 2242 "write_deps_file.m"
    return parse_tree__write_deps_file__HeadVar__2_17;
#line 2242 "write_deps_file.m"
  }
#line 2242 "write_deps_file.m"
}

#line 585 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__585__1_7_p_0(
#line 585 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 585 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_41,
#line 585 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImportedModules_119,
#line 585 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ForeignImportExt_123,
#line 585 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_583)
#line 585 "write_deps_file.m"
{
#line 585 "write_deps_file.m"
  {
#line 585 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 587 "write_deps_file.m"
    {
#line 587 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_41, (MR_String) "\n\n");
    }
#line 588 "write_deps_file.m"
    {
#line 588 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__HeadVar__5_583);
    }
#line 589 "write_deps_file.m"
    {
#line 589 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_41, (MR_String) " : ");
    }
#line 590 "write_deps_file.m"
    {
#line 590 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ForeignImportedModules_119, parse_tree__write_deps_file__ForeignImportExt_123, parse_tree__write_deps_file__DepStream_41);
    }
#line 592 "write_deps_file.m"
    {
#line 592 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_41, (MR_String) "\n\n");
#line 592 "write_deps_file.m"
      return;
    }
#line 585 "write_deps_file.m"
  }
#line 585 "write_deps_file.m"
}

#line 541 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__541__1_3_p_0(
#line 541 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_13,
#line 541 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_571,
#line 541 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_572)
#line 541 "write_deps_file.m"
{
#line 541 "write_deps_file.m"
  {
#line 541 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 548 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_573_573;

#line 543 "write_deps_file.m"
    {
#line 543 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_572 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(parse_tree__write_deps_file__HeadVar__2_571, parse_tree__write_deps_file__SourceFileModuleName_13);
    }
#line 548 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) *parse_tree__write_deps_file__HeadVar__3_572)) == (MR_mktag((MR_Integer) 0)));
#line 548 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 548 "write_deps_file.m"
      {
#line 548 "write_deps_file.m"
        parse_tree__write_deps_file__V_573_573 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__write_deps_file__HeadVar__3_572, (MR_Integer) 0)));
#line 548 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__V_573_573, (MR_String) "mercury") == 0);
#line 548 "write_deps_file.m"
      }
#line 548 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 541 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 541 "write_deps_file.m"
  }
#line 541 "write_deps_file.m"
}

#line 265 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__265__1_7_p_0(
#line 265 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 265 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_14,
#line 265 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__NestedDeps_21,
#line 265 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_41,
#line 265 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_305)
#line 265 "write_deps_file.m"
{
#line 265 "write_deps_file.m"
  {
#line 265 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 265 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ExtName_79;
#line 265 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_310_310;
#line 265 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_313_313;

#line 266 "write_deps_file.m"
    {
#line 266 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__HeadVar__5_305, (MR_Integer) 1, &parse_tree__write_deps_file__ExtName_79);
    }
#line 268 "write_deps_file.m"
    {
#line 268 "write_deps_file.m"
      parse_tree__write_deps_file__V_313_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 0) = ((MR_Box) (parse_tree__write_deps_file__ExtName_79));
#line 268 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 268 "write_deps_file.m"
    }
#line 268 "write_deps_file.m"
    {
#line 268 "write_deps_file.m"
      parse_tree__write_deps_file__V_310_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_310_310, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 268 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_310_310, 1) = ((MR_Box) (parse_tree__write_deps_file__V_313_313));
#line 268 "write_deps_file.m"
    }
#line 268 "write_deps_file.m"
    {
#line 268 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_310_310);
    }
#line 269 "write_deps_file.m"
    {
#line 269 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__NestedDeps_21, parse_tree__write_deps_file__HeadVar__5_305, parse_tree__write_deps_file__DepStream_41);
#line 269 "write_deps_file.m"
      return;
    }
#line 265 "write_deps_file.m"
  }
#line 265 "write_deps_file.m"
}

#line 2358 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
#line 2358 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym1_4,
#line 2358 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym2_5,
#line 2358 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Result_6)
#line 2358 "write_deps_file.m"
{
#line 2361 "write_deps_file.m"
  {
#line 2361 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2361 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str1_7;
#line 2361 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str2_8;

#line 2362 "write_deps_file.m"
    {
#line 2362 "write_deps_file.m"
      parse_tree__write_deps_file__Str1_7 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym1_4);
    }
#line 2363 "write_deps_file.m"
    {
#line 2363 "write_deps_file.m"
      parse_tree__write_deps_file__Str2_8 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym2_5);
    }
#line 2364 "write_deps_file.m"
    {
#line 2364 "write_deps_file.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__write_deps_file__Result_6, parse_tree__write_deps_file__Str1_7, parse_tree__write_deps_file__Str2_8);
#line 2364 "write_deps_file.m"
      return;
    }
#line 2361 "write_deps_file.m"
  }
#line 2358 "write_deps_file.m"
}

#line 2267 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
#line 2267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 2267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 2267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 2267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_4,
#line 2267 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
#line 2267 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6)
#line 2267 "write_deps_file.m"
{
#line 2271 "write_deps_file.m"
  {
#line 2271 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 2271 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2271 "write_deps_file.m"
      {
#line 2271 "write_deps_file.m"
        *parse_tree__write_deps_file__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2271 "write_deps_file.m"
        *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2271 "write_deps_file.m"
      }
#line 2271 "write_deps_file.m"
    else
#line 2273 "write_deps_file.m"
      {
#line 2273 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Dep_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
#line 2273 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Deps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));
#line 2273 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2273 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;

#line 2274 "write_deps_file.m"
        {
#line 2274 "write_deps_file.m"
          parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__BuildOptFiles_2, parse_tree__write_deps_file__Deps_18, parse_tree__write_deps_file__IntermodDirs_4, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39, &parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40);
        }
#line 2870 "parse_tree.write_deps_file.c"
        if ((parse_tree__write_deps_file__BuildOptFiles_2 == (MR_Integer) 0))
#line 2872 "parse_tree.write_deps_file.c"
          {
#line 2874 "parse_tree.write_deps_file.c"
            MR_String parse_tree__write_deps_file__OptName_27;
#line 2876 "parse_tree.write_deps_file.c"
            MR_Word parse_tree__write_deps_file__Result2_28;
#line 2878 "parse_tree.write_deps_file.c"
            MR_String parse_tree__write_deps_file__TransOptName_31;
#line 2880 "parse_tree.write_deps_file.c"
            MR_Word parse_tree__write_deps_file__Result3_32;

#line 2296 "write_deps_file.m"
            {
#line 2296 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_27);
            }
#line 2298 "write_deps_file.m"
            {
#line 2298 "write_deps_file.m"
              libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_27, &parse_tree__write_deps_file__Result2_28);
            }
#line 2303 "write_deps_file.m"
            if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_28)) == (MR_mktag((MR_Integer) 1))))
#line 2304 "write_deps_file.m"
              *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2303 "write_deps_file.m"
            else
#line 2302 "write_deps_file.m"
              {
#line 2302 "write_deps_file.m"
                MR_Word base;
#line 2302 "write_deps_file.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2302 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2302 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2302 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2302 "write_deps_file.m"
              }
#line 2306 "write_deps_file.m"
            {
#line 2306 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_31);
            }
#line 2308 "write_deps_file.m"
            {
#line 2308 "write_deps_file.m"
              libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__TransOptName_31, &parse_tree__write_deps_file__Result3_32);
            }
#line 2313 "write_deps_file.m"
            if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result3_32)) == (MR_mktag((MR_Integer) 1))))
#line 2314 "write_deps_file.m"
              *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
#line 2313 "write_deps_file.m"
            else
#line 2312 "write_deps_file.m"
              {
#line 2312 "write_deps_file.m"
                MR_Word base;
#line 2312 "write_deps_file.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2312 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2312 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2312 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2312 "write_deps_file.m"
              }
#line 2943 "parse_tree.write_deps_file.c"
          }
#line 2945 "parse_tree.write_deps_file.c"
        else
#line 2947 "parse_tree.write_deps_file.c"
          {
#line 2949 "parse_tree.write_deps_file.c"
            MR_Word parse_tree__write_deps_file__Result1_23;

#line 2278 "write_deps_file.m"
            {
#line 2278 "write_deps_file.m"
              parse_tree__prog_io__search_for_module_source_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__Dep_17, &parse_tree__write_deps_file__Result1_23);
            }
#line 2957 "parse_tree.write_deps_file.c"
            if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_23)) == (MR_mktag((MR_Integer) 1))))
#line 2959 "parse_tree.write_deps_file.c"
              {
#line 2961 "parse_tree.write_deps_file.c"
                MR_String parse_tree__write_deps_file__OptName_59;
#line 2963 "parse_tree.write_deps_file.c"
                MR_Word parse_tree__write_deps_file__Result2_60;
#line 2965 "parse_tree.write_deps_file.c"
                MR_String parse_tree__write_deps_file__TransOptName_61;
#line 2967 "parse_tree.write_deps_file.c"
                MR_Word parse_tree__write_deps_file__Result3_62;

#line 2296 "write_deps_file.m"
                {
#line 2296 "write_deps_file.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_59);
                }
#line 2298 "write_deps_file.m"
                {
#line 2298 "write_deps_file.m"
                  libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_59, &parse_tree__write_deps_file__Result2_60);
                }
#line 2303 "write_deps_file.m"
                if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_60)) == (MR_mktag((MR_Integer) 1))))
#line 2304 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2303 "write_deps_file.m"
                else
#line 2302 "write_deps_file.m"
                  {
#line 2302 "write_deps_file.m"
                    MR_Word base;
#line 2302 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2302 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2302 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2302 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2302 "write_deps_file.m"
                  }
#line 2306 "write_deps_file.m"
                {
#line 2306 "write_deps_file.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_61);
                }
#line 2308 "write_deps_file.m"
                {
#line 2308 "write_deps_file.m"
                  libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__TransOptName_61, &parse_tree__write_deps_file__Result3_62);
                }
#line 2313 "write_deps_file.m"
                if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result3_62)) == (MR_mktag((MR_Integer) 1))))
#line 2314 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
#line 2313 "write_deps_file.m"
                else
#line 2312 "write_deps_file.m"
                  {
#line 2312 "write_deps_file.m"
                    MR_Word base;
#line 2312 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2312 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2312 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2312 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2312 "write_deps_file.m"
                  }
#line 3030 "parse_tree.write_deps_file.c"
              }
#line 3032 "parse_tree.write_deps_file.c"
            else
#line 3034 "parse_tree.write_deps_file.c"
              {
#line 2282 "write_deps_file.m"
                {
#line 2282 "write_deps_file.m"
                  MR_Word base;
#line 2282 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2282 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2282 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2282 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2282 "write_deps_file.m"
                }
#line 2283 "write_deps_file.m"
                {
#line 2283 "write_deps_file.m"
                  MR_Word base;
#line 2283 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2283 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2283 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2283 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2283 "write_deps_file.m"
                }
#line 2284 "write_deps_file.m"
                {
#line 2284 "write_deps_file.m"
                  mercury__io__seen_2_p_0();
#line 2284 "write_deps_file.m"
                  return;
                }
#line 3071 "parse_tree.write_deps_file.c"
              }
#line 3073 "parse_tree.write_deps_file.c"
          }
#line 2273 "write_deps_file.m"
      }
#line 2271 "write_deps_file.m"
  }
#line 2267 "write_deps_file.m"
}

#line 2217 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
#line 2217 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_4,
#line 2217 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 2217 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__FileName_6)
#line 2217 "write_deps_file.m"
{
#line 2219 "write_deps_file.m"
  {
#line 2219 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2219 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Deps_7;
#line 2219 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_9;
#line 2219 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileName_10;
#line 2220 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_Deps_7;
#line 2221 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_8_8;
#line 2225 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileBase_11;

#line 2220 "write_deps_file.m"
    {
#line 2220 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_4, ((MR_Box) (parse_tree__write_deps_file__ModuleName_5)), &parse_tree__write_deps_file__conv0_Deps_7);
    }
#line 2220 "write_deps_file.m"
    parse_tree__write_deps_file__Deps_7 = ((MR_Word) parse_tree__write_deps_file__conv0_Deps_7);
#line 2221 "write_deps_file.m"
    parse_tree__write_deps_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 0)));
#line 2221 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 1)));
#line 2222 "write_deps_file.m"
    {
#line 2222 "write_deps_file.m"
      parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(parse_tree__write_deps_file__ModuleImports_9, &parse_tree__write_deps_file__SourceFileName_10);
    }
#line 2223 "write_deps_file.m"
    {
#line 2223 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_10, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_11);
    }
#line 2225 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2224 "write_deps_file.m"
      *parse_tree__write_deps_file__FileName_6 = parse_tree__write_deps_file__SourceFileBase_11;
#line 2225 "write_deps_file.m"
    else
#line 2226 "write_deps_file.m"
      {
#line 2226 "write_deps_file.m"
        {
#line 2226 "write_deps_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_deps_file", (MR_String) "predicate \140parse_tree.write_deps_file.get_source_file\'/3", (MR_String) "source file name doesn\'t end in \140.m\'");
#line 2226 "write_deps_file.m"
          return;
        }
#line 2226 "write_deps_file.m"
      }
#line 2219 "write_deps_file.m"
  }
#line 2217 "write_deps_file.m"
}

#line 2127 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
#line 2127 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_17,
#line 2127 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_18,
#line 2127 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_19,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_20,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ExeFileName_21,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_22,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_25,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LibFileName_26,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__JarFileName_28,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DepFileName_29,
#line 2127 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DvFileName_30)
#line 2127 "write_deps_file.m"
{
#line 2135 "write_deps_file.m"
  {
#line 2135 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2135 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__CleanTargetName_32;
#line 2135 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__RealCleanTargetName_33;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_42_42;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_46_46;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_49_49;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_57_57;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_58_58;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_60_60;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_62_62;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_63_63;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_65_65;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_66_66;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_68_68;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_70_70;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_71_71;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_73_73;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_75_75;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_76_76;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_78_78;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_79_79;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_81_81;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_83_83;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_84_84;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_86_86;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_87_87;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_89_89;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_92_92;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_96_96;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_97_97;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_99_99;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_101_101;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_102_102;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_104_104;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_106_106;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_107_107;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_109_109;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_111_111;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_112_112;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_114_114;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_116_116;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_117_117;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_119_119;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_121_121;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_122_122;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_124_124;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_126_126;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_127_127;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_129_129;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_131_131;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_140_140;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_143_143;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_147_147;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_150_150;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_151_151;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_153_153;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_154_154;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_156_156;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_157_157;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_159_159;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_161_161;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_162_162;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_164_164;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_166_166;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_167_167;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_169_169;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_171_171;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_172_172;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_174_174;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_176_176;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_177_177;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_179_179;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_181_181;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_182_182;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_184_184;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_186_186;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_187_187;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_189_189;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_191_191;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_192_192;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_194_194;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_196_196;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_197_197;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_199_199;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_201_201;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_202_202;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_204_204;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_206_206;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_207_207;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_209_209;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_211_211;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_212_212;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_214_214;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_216_216;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_217_217;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_219_219;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_221_221;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_222_222;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_224_224;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_226_226;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_227_227;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_229_229;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_231_231;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_232_232;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_234_234;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_236_236;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_237_237;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_239_239;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_241_241;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_242_242;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_244_244;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_246_246;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_247_247;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_249_249;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_251_251;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_252_252;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_254_254;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_256_256;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_260_260;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_263_263;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_264_264;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_266_266;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_267_267;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_269_269;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_270_270;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_272_272;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_273_273;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_275_275;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_276_276;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_278_278;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_279_279;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_281_281;

#line 2144 "write_deps_file.m"
    {
#line 2144 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".clean", (MR_Integer) 1, &parse_tree__write_deps_file__CleanTargetName_32);
    }
#line 2147 "write_deps_file.m"
    parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96]);
#line 2147 "write_deps_file.m"
    {
#line 2147 "write_deps_file.m"
      parse_tree__write_deps_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2147 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2147 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2147 "write_deps_file.m"
    }
#line 2146 "write_deps_file.m"
    {
#line 2146 "write_deps_file.m"
      parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2146 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) ((MR_String) "clean_local : "));
#line 2146 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (parse_tree__write_deps_file__V_42_42));
#line 2146 "write_deps_file.m"
    }
#line 2146 "write_deps_file.m"
    {
#line 2146 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_39_39);
    }
#line 2168 "write_deps_file.m"
    {
#line 2168 "write_deps_file.m"
      parse_tree__write_deps_file__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])));
#line 2168 "write_deps_file.m"
    }
#line 2167 "write_deps_file.m"
    {
#line 2167 "write_deps_file.m"
      parse_tree__write_deps_file__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 1) = ((MR_Box) (parse_tree__write_deps_file__V_131_131));
#line 2167 "write_deps_file.m"
    }
#line 2167 "write_deps_file.m"
    {
#line 2167 "write_deps_file.m"
      parse_tree__write_deps_file__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_127_127, 0) = ((MR_Box) ((MR_String) ".errs) | xargs rm -f\n"));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_127_127, 1) = ((MR_Box) (parse_tree__write_deps_file__V_129_129));
#line 2167 "write_deps_file.m"
    }
#line 2167 "write_deps_file.m"
    {
#line 2167 "write_deps_file.m"
      parse_tree__write_deps_file__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 1) = ((MR_Box) (parse_tree__write_deps_file__V_127_127));
#line 2167 "write_deps_file.m"
    }
#line 2166 "write_deps_file.m"
    {
#line 2166 "write_deps_file.m"
      parse_tree__write_deps_file__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_124_124, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_124_124, 1) = ((MR_Box) (parse_tree__write_deps_file__V_126_126));
#line 2166 "write_deps_file.m"
    }
#line 2166 "write_deps_file.m"
    {
#line 2166 "write_deps_file.m"
      parse_tree__write_deps_file__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_122_122, 0) = ((MR_Box) ((MR_String) ".profs) | xargs rm -f\n"));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_122_122, 1) = ((MR_Box) (parse_tree__write_deps_file__V_124_124));
#line 2166 "write_deps_file.m"
    }
#line 2166 "write_deps_file.m"
    {
#line 2166 "write_deps_file.m"
      parse_tree__write_deps_file__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 1) = ((MR_Box) (parse_tree__write_deps_file__V_122_122));
#line 2166 "write_deps_file.m"
    }
#line 2165 "write_deps_file.m"
    {
#line 2165 "write_deps_file.m"
      parse_tree__write_deps_file__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2165 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_119_119, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2165 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_119_119, 1) = ((MR_Box) (parse_tree__write_deps_file__V_121_121));
#line 2165 "write_deps_file.m"
    }
#line 2165 "write_deps_file.m"
    {
#line 2165 "write_deps_file.m"
      parse_tree__write_deps_file__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2165 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 0) = ((MR_Box) ((MR_String) ".javas) | xargs rm -f\n"));
#line 2165 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 1) = ((MR_Box) (parse_tree__write_deps_file__V_119_119));
#line 2165 "write_deps_file.m"
    }
#line 2165 "write_deps_file.m"
    {
#line 2165 "write_deps_file.m"
      parse_tree__write_deps_file__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2165 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_116_116, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2165 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_116_116, 1) = ((MR_Box) (parse_tree__write_deps_file__V_117_117));
#line 2165 "write_deps_file.m"
    }
#line 2164 "write_deps_file.m"
    {
#line 2164 "write_deps_file.m"
      parse_tree__write_deps_file__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2164 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2164 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 1) = ((MR_Box) (parse_tree__write_deps_file__V_116_116));
#line 2164 "write_deps_file.m"
    }
#line 2164 "write_deps_file.m"
    {
#line 2164 "write_deps_file.m"
      parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2164 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) ((MR_String) ".ils) | xargs rm -f\n"));
#line 2164 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) (parse_tree__write_deps_file__V_114_114));
#line 2164 "write_deps_file.m"
    }
#line 2164 "write_deps_file.m"
    {
#line 2164 "write_deps_file.m"
      parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2164 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2164 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 2164 "write_deps_file.m"
    }
#line 2163 "write_deps_file.m"
    {
#line 2163 "write_deps_file.m"
      parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2163 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2163 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 2163 "write_deps_file.m"
    }
#line 2163 "write_deps_file.m"
    {
#line 2163 "write_deps_file.m"
      parse_tree__write_deps_file__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2163 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_107_107, 0) = ((MR_Box) ((MR_String) ".useds) | xargs rm -f\n"));
#line 2163 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_107_107, 1) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 2163 "write_deps_file.m"
    }
#line 2163 "write_deps_file.m"
    {
#line 2163 "write_deps_file.m"
      parse_tree__write_deps_file__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2163 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2163 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 1) = ((MR_Box) (parse_tree__write_deps_file__V_107_107));
#line 2163 "write_deps_file.m"
    }
#line 2162 "write_deps_file.m"
    {
#line 2162 "write_deps_file.m"
      parse_tree__write_deps_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2162 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2162 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 1) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 2162 "write_deps_file.m"
    }
#line 2162 "write_deps_file.m"
    {
#line 2162 "write_deps_file.m"
      parse_tree__write_deps_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2162 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 0) = ((MR_Box) ((MR_String) ".java_dates) | xargs rm -f\n"));
#line 2162 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 1) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 2162 "write_deps_file.m"
    }
#line 2162 "write_deps_file.m"
    {
#line 2162 "write_deps_file.m"
      parse_tree__write_deps_file__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2162 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2162 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 1) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 2162 "write_deps_file.m"
    }
#line 2161 "write_deps_file.m"
    {
#line 2161 "write_deps_file.m"
      parse_tree__write_deps_file__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2161 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2161 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 1) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 2161 "write_deps_file.m"
    }
#line 2161 "write_deps_file.m"
    {
#line 2161 "write_deps_file.m"
      parse_tree__write_deps_file__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2161 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_97_97, 0) = ((MR_Box) ((MR_String) ".il_dates) | xargs rm -f\n"));
#line 2161 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_97_97, 1) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 2161 "write_deps_file.m"
    }
#line 2161 "write_deps_file.m"
    {
#line 2161 "write_deps_file.m"
      parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2161 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2161 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_97_97));
#line 2161 "write_deps_file.m"
    }
#line 2160 "write_deps_file.m"
    {
#line 2160 "write_deps_file.m"
      parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2160 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2160 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 2160 "write_deps_file.m"
    }
#line 2160 "write_deps_file.m"
    {
#line 2160 "write_deps_file.m"
      parse_tree__write_deps_file__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2160 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 0) = ((MR_Box) ((MR_String) ".c_dates) | xargs rm -f\n"));
#line 2160 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 2160 "write_deps_file.m"
    }
#line 2160 "write_deps_file.m"
    {
#line 2160 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2160 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2160 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 2160 "write_deps_file.m"
    }
#line 2159 "write_deps_file.m"
    {
#line 2159 "write_deps_file.m"
      parse_tree__write_deps_file__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2159 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_89_89, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2159 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_89_89, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 2159 "write_deps_file.m"
    }
#line 2159 "write_deps_file.m"
    {
#line 2159 "write_deps_file.m"
      parse_tree__write_deps_file__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2159 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2159 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 1) = ((MR_Box) (parse_tree__write_deps_file__V_89_89));
#line 2159 "write_deps_file.m"
    }
#line 2158 "write_deps_file.m"
    {
#line 2158 "write_deps_file.m"
      parse_tree__write_deps_file__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2158 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 0) = ((MR_Box) (parse_tree__write_deps_file__InitPicObjFileName_24));
#line 2158 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 1) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 2158 "write_deps_file.m"
    }
#line 2158 "write_deps_file.m"
    {
#line 2158 "write_deps_file.m"
      parse_tree__write_deps_file__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2158 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 0) = ((MR_Box) ((MR_String) ".all_pic_os) "));
#line 2158 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 1) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 2158 "write_deps_file.m"
    }
#line 2158 "write_deps_file.m"
    {
#line 2158 "write_deps_file.m"
      parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2158 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2158 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 2158 "write_deps_file.m"
    }
#line 2157 "write_deps_file.m"
    {
#line 2157 "write_deps_file.m"
      parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2157 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2157 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 2157 "write_deps_file.m"
    }
#line 2156 "write_deps_file.m"
    {
#line 2156 "write_deps_file.m"
      parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2156 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2156 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 2156 "write_deps_file.m"
    }
#line 2156 "write_deps_file.m"
    {
#line 2156 "write_deps_file.m"
      parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2156 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_23));
#line 2156 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 2156 "write_deps_file.m"
    }
#line 2156 "write_deps_file.m"
    {
#line 2156 "write_deps_file.m"
      parse_tree__write_deps_file__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2156 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 0) = ((MR_Box) ((MR_String) ".all_os) "));
#line 2156 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 2156 "write_deps_file.m"
    }
#line 2156 "write_deps_file.m"
    {
#line 2156 "write_deps_file.m"
      parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2156 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2156 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_76_76));
#line 2156 "write_deps_file.m"
    }
#line 2155 "write_deps_file.m"
    {
#line 2155 "write_deps_file.m"
      parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2155 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2155 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 2155 "write_deps_file.m"
    }
#line 2155 "write_deps_file.m"
    {
#line 2155 "write_deps_file.m"
      parse_tree__write_deps_file__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2155 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 0) = ((MR_Box) ((MR_String) ".mihs) | xargs rm -f\n"));
#line 2155 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 2155 "write_deps_file.m"
    }
#line 2155 "write_deps_file.m"
    {
#line 2155 "write_deps_file.m"
      parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2155 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2155 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_71_71));
#line 2155 "write_deps_file.m"
    }
#line 2154 "write_deps_file.m"
    {
#line 2154 "write_deps_file.m"
      parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2154 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2154 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 1) = ((MR_Box) (parse_tree__write_deps_file__V_70_70));
#line 2154 "write_deps_file.m"
    }
#line 2153 "write_deps_file.m"
    {
#line 2153 "write_deps_file.m"
      parse_tree__write_deps_file__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2153 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2153 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 1) = ((MR_Box) (parse_tree__write_deps_file__V_68_68));
#line 2153 "write_deps_file.m"
    }
#line 2153 "write_deps_file.m"
    {
#line 2153 "write_deps_file.m"
      parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2153 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_22));
#line 2153 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_66_66));
#line 2153 "write_deps_file.m"
    }
#line 2153 "write_deps_file.m"
    {
#line 2153 "write_deps_file.m"
      parse_tree__write_deps_file__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2153 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 0) = ((MR_Box) ((MR_String) ".cs) "));
#line 2153 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 1) = ((MR_Box) (parse_tree__write_deps_file__V_65_65));
#line 2153 "write_deps_file.m"
    }
#line 2153 "write_deps_file.m"
    {
#line 2153 "write_deps_file.m"
      parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2153 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2153 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (parse_tree__write_deps_file__V_63_63));
#line 2153 "write_deps_file.m"
    }
#line 2152 "write_deps_file.m"
    {
#line 2152 "write_deps_file.m"
      parse_tree__write_deps_file__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2152 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2152 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 1) = ((MR_Box) (parse_tree__write_deps_file__V_62_62));
#line 2152 "write_deps_file.m"
    }
#line 2152 "write_deps_file.m"
    {
#line 2152 "write_deps_file.m"
      parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2152 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) ((MR_String) ".dirs) | xargs rm -rf \n"));
#line 2152 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_60_60));
#line 2152 "write_deps_file.m"
    }
#line 2152 "write_deps_file.m"
    {
#line 2152 "write_deps_file.m"
      parse_tree__write_deps_file__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2152 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2152 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 2152 "write_deps_file.m"
    }
#line 2151 "write_deps_file.m"
    {
#line 2151 "write_deps_file.m"
      parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2151 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2151 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_57_57));
#line 2151 "write_deps_file.m"
    }
#line 2151 "write_deps_file.m"
    {
#line 2151 "write_deps_file.m"
      parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2151 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) " :\n"));
#line 2151 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 2151 "write_deps_file.m"
    }
#line 2150 "write_deps_file.m"
    {
#line 2150 "write_deps_file.m"
      parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2150 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2150 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 2150 "write_deps_file.m"
    }
#line 2150 "write_deps_file.m"
    {
#line 2150 "write_deps_file.m"
      parse_tree__write_deps_file__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2150 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2150 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 2150 "write_deps_file.m"
    }
#line 2150 "write_deps_file.m"
    {
#line 2150 "write_deps_file.m"
      parse_tree__write_deps_file__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2150 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2150 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 1) = ((MR_Box) (parse_tree__write_deps_file__V_50_50));
#line 2150 "write_deps_file.m"
    }
#line 2149 "write_deps_file.m"
    {
#line 2149 "write_deps_file.m"
      parse_tree__write_deps_file__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2149 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_46_46, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2149 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_46_46, 1) = ((MR_Box) (parse_tree__write_deps_file__V_49_49));
#line 2149 "write_deps_file.m"
    }
#line 2149 "write_deps_file.m"
    {
#line 2149 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_46_46);
    }
#line 2172 "write_deps_file.m"
    {
#line 2172 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".realclean", (MR_Integer) 1, &parse_tree__write_deps_file__RealCleanTargetName_33);
    }
#line 2175 "write_deps_file.m"
    {
#line 2175 "write_deps_file.m"
      parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2175 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2175 "write_deps_file.m"
    }
#line 2174 "write_deps_file.m"
    {
#line 2174 "write_deps_file.m"
      parse_tree__write_deps_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) ((MR_String) "realclean_local : "));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 2174 "write_deps_file.m"
    }
#line 2174 "write_deps_file.m"
    {
#line 2174 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_140_140);
    }
#line 2202 "write_deps_file.m"
    {
#line 2202 "write_deps_file.m"
      parse_tree__write_deps_file__V_256_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2202 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2202 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[121])));
#line 2202 "write_deps_file.m"
    }
#line 2201 "write_deps_file.m"
    {
#line 2201 "write_deps_file.m"
      parse_tree__write_deps_file__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 1) = ((MR_Box) (parse_tree__write_deps_file__V_256_256));
#line 2201 "write_deps_file.m"
    }
#line 2201 "write_deps_file.m"
    {
#line 2201 "write_deps_file.m"
      parse_tree__write_deps_file__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 0) = ((MR_Box) ((MR_String) ".foreign_dlls) | xargs rm -f\n"));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 1) = ((MR_Box) (parse_tree__write_deps_file__V_254_254));
#line 2201 "write_deps_file.m"
    }
#line 2201 "write_deps_file.m"
    {
#line 2201 "write_deps_file.m"
      parse_tree__write_deps_file__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 1) = ((MR_Box) (parse_tree__write_deps_file__V_252_252));
#line 2201 "write_deps_file.m"
    }
#line 2200 "write_deps_file.m"
    {
#line 2200 "write_deps_file.m"
      parse_tree__write_deps_file__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 1) = ((MR_Box) (parse_tree__write_deps_file__V_251_251));
#line 2200 "write_deps_file.m"
    }
#line 2200 "write_deps_file.m"
    {
#line 2200 "write_deps_file.m"
      parse_tree__write_deps_file__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 0) = ((MR_Box) ((MR_String) ".dlls) | xargs rm -f\n"));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 1) = ((MR_Box) (parse_tree__write_deps_file__V_249_249));
#line 2200 "write_deps_file.m"
    }
#line 2200 "write_deps_file.m"
    {
#line 2200 "write_deps_file.m"
      parse_tree__write_deps_file__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 1) = ((MR_Box) (parse_tree__write_deps_file__V_247_247));
#line 2200 "write_deps_file.m"
    }
#line 2199 "write_deps_file.m"
    {
#line 2199 "write_deps_file.m"
      parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_246_246));
#line 2199 "write_deps_file.m"
    }
#line 2199 "write_deps_file.m"
    {
#line 2199 "write_deps_file.m"
      parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) ".all_mihs) | xargs rm -f\n"));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 2199 "write_deps_file.m"
    }
#line 2199 "write_deps_file.m"
    {
#line 2199 "write_deps_file.m"
      parse_tree__write_deps_file__V_241_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 2199 "write_deps_file.m"
    }
#line 2198 "write_deps_file.m"
    {
#line 2198 "write_deps_file.m"
      parse_tree__write_deps_file__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 1) = ((MR_Box) (parse_tree__write_deps_file__V_241_241));
#line 2198 "write_deps_file.m"
    }
#line 2198 "write_deps_file.m"
    {
#line 2198 "write_deps_file.m"
      parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) ((MR_String) ".all_mhs) | xargs rm -f\n"));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_239_239));
#line 2198 "write_deps_file.m"
    }
#line 2198 "write_deps_file.m"
    {
#line 2198 "write_deps_file.m"
      parse_tree__write_deps_file__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 2198 "write_deps_file.m"
    }
#line 2197 "write_deps_file.m"
    {
#line 2197 "write_deps_file.m"
      parse_tree__write_deps_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 1) = ((MR_Box) (parse_tree__write_deps_file__V_236_236));
#line 2197 "write_deps_file.m"
    }
#line 2197 "write_deps_file.m"
    {
#line 2197 "write_deps_file.m"
      parse_tree__write_deps_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 0) = ((MR_Box) ((MR_String) ".module_deps) | xargs rm -f\n"));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 1) = ((MR_Box) (parse_tree__write_deps_file__V_234_234));
#line 2197 "write_deps_file.m"
    }
#line 2197 "write_deps_file.m"
    {
#line 2197 "write_deps_file.m"
      parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (parse_tree__write_deps_file__V_232_232));
#line 2197 "write_deps_file.m"
    }
#line 2196 "write_deps_file.m"
    {
#line 2196 "write_deps_file.m"
      parse_tree__write_deps_file__V_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 2196 "write_deps_file.m"
    }
#line 2196 "write_deps_file.m"
    {
#line 2196 "write_deps_file.m"
      parse_tree__write_deps_file__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 0) = ((MR_Box) ((MR_String) ".ds) | xargs rm -f\n"));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 1) = ((MR_Box) (parse_tree__write_deps_file__V_229_229));
#line 2196 "write_deps_file.m"
    }
#line 2196 "write_deps_file.m"
    {
#line 2196 "write_deps_file.m"
      parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 2196 "write_deps_file.m"
    }
#line 2195 "write_deps_file.m"
    {
#line 2195 "write_deps_file.m"
      parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 2195 "write_deps_file.m"
    }
#line 2195 "write_deps_file.m"
    {
#line 2195 "write_deps_file.m"
      parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) ((MR_String) ".imdgs) | xargs rm -f\n"));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 2195 "write_deps_file.m"
    }
#line 2195 "write_deps_file.m"
    {
#line 2195 "write_deps_file.m"
      parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 2195 "write_deps_file.m"
    }
#line 2194 "write_deps_file.m"
    {
#line 2194 "write_deps_file.m"
      parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2194 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2194 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 2194 "write_deps_file.m"
    }
#line 2194 "write_deps_file.m"
    {
#line 2194 "write_deps_file.m"
      parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2194 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".requests) | xargs rm -f\n"));
#line 2194 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_219_219));
#line 2194 "write_deps_file.m"
    }
#line 2194 "write_deps_file.m"
    {
#line 2194 "write_deps_file.m"
      parse_tree__write_deps_file__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2194 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2194 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 1) = ((MR_Box) (parse_tree__write_deps_file__V_217_217));
#line 2194 "write_deps_file.m"
    }
#line 2193 "write_deps_file.m"
    {
#line 2193 "write_deps_file.m"
      parse_tree__write_deps_file__V_214_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2193 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2193 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 1) = ((MR_Box) (parse_tree__write_deps_file__V_216_216));
#line 2193 "write_deps_file.m"
    }
#line 2193 "write_deps_file.m"
    {
#line 2193 "write_deps_file.m"
      parse_tree__write_deps_file__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2193 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 0) = ((MR_Box) ((MR_String) ".analysiss) | xargs rm -f\n"));
#line 2193 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 1) = ((MR_Box) (parse_tree__write_deps_file__V_214_214));
#line 2193 "write_deps_file.m"
    }
#line 2193 "write_deps_file.m"
    {
#line 2193 "write_deps_file.m"
      parse_tree__write_deps_file__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2193 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2193 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 1) = ((MR_Box) (parse_tree__write_deps_file__V_212_212));
#line 2193 "write_deps_file.m"
    }
#line 2192 "write_deps_file.m"
    {
#line 2192 "write_deps_file.m"
      parse_tree__write_deps_file__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2192 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2192 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 1) = ((MR_Box) (parse_tree__write_deps_file__V_211_211));
#line 2192 "write_deps_file.m"
    }
#line 2192 "write_deps_file.m"
    {
#line 2192 "write_deps_file.m"
      parse_tree__write_deps_file__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2192 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 0) = ((MR_Box) ((MR_String) ".trans_opts) | xargs rm -f\n"));
#line 2192 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 1) = ((MR_Box) (parse_tree__write_deps_file__V_209_209));
#line 2192 "write_deps_file.m"
    }
#line 2192 "write_deps_file.m"
    {
#line 2192 "write_deps_file.m"
      parse_tree__write_deps_file__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2192 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2192 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 1) = ((MR_Box) (parse_tree__write_deps_file__V_207_207));
#line 2192 "write_deps_file.m"
    }
#line 2191 "write_deps_file.m"
    {
#line 2191 "write_deps_file.m"
      parse_tree__write_deps_file__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2191 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2191 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 1) = ((MR_Box) (parse_tree__write_deps_file__V_206_206));
#line 2191 "write_deps_file.m"
    }
#line 2191 "write_deps_file.m"
    {
#line 2191 "write_deps_file.m"
      parse_tree__write_deps_file__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2191 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 0) = ((MR_Box) ((MR_String) ".opts) | xargs rm -f\n"));
#line 2191 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 1) = ((MR_Box) (parse_tree__write_deps_file__V_204_204));
#line 2191 "write_deps_file.m"
    }
#line 2191 "write_deps_file.m"
    {
#line 2191 "write_deps_file.m"
      parse_tree__write_deps_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2191 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2191 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 1) = ((MR_Box) (parse_tree__write_deps_file__V_202_202));
#line 2191 "write_deps_file.m"
    }
#line 2190 "write_deps_file.m"
    {
#line 2190 "write_deps_file.m"
      parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2190 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2190 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__V_201_201));
#line 2190 "write_deps_file.m"
    }
#line 2190 "write_deps_file.m"
    {
#line 2190 "write_deps_file.m"
      parse_tree__write_deps_file__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2190 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 0) = ((MR_Box) ((MR_String) ".int3s) | xargs rm -f\n"));
#line 2190 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 1) = ((MR_Box) (parse_tree__write_deps_file__V_199_199));
#line 2190 "write_deps_file.m"
    }
#line 2190 "write_deps_file.m"
    {
#line 2190 "write_deps_file.m"
      parse_tree__write_deps_file__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2190 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2190 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 1) = ((MR_Box) (parse_tree__write_deps_file__V_197_197));
#line 2190 "write_deps_file.m"
    }
#line 2189 "write_deps_file.m"
    {
#line 2189 "write_deps_file.m"
      parse_tree__write_deps_file__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2189 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2189 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 1) = ((MR_Box) (parse_tree__write_deps_file__V_196_196));
#line 2189 "write_deps_file.m"
    }
#line 2189 "write_deps_file.m"
    {
#line 2189 "write_deps_file.m"
      parse_tree__write_deps_file__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2189 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 0) = ((MR_Box) ((MR_String) ".all_int0s) | xargs rm -f\n"));
#line 2189 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 1) = ((MR_Box) (parse_tree__write_deps_file__V_194_194));
#line 2189 "write_deps_file.m"
    }
#line 2189 "write_deps_file.m"
    {
#line 2189 "write_deps_file.m"
      parse_tree__write_deps_file__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2189 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2189 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 1) = ((MR_Box) (parse_tree__write_deps_file__V_192_192));
#line 2189 "write_deps_file.m"
    }
#line 2185 "write_deps_file.m"
    {
#line 2185 "write_deps_file.m"
      parse_tree__write_deps_file__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 1) = ((MR_Box) (parse_tree__write_deps_file__V_191_191));
#line 2185 "write_deps_file.m"
    }
#line 2185 "write_deps_file.m"
    {
#line 2185 "write_deps_file.m"
      parse_tree__write_deps_file__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 0) = ((MR_Box) ((MR_String) ".ints) | xargs rm -f\n"));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 1) = ((MR_Box) (parse_tree__write_deps_file__V_189_189));
#line 2185 "write_deps_file.m"
    }
#line 2185 "write_deps_file.m"
    {
#line 2185 "write_deps_file.m"
      parse_tree__write_deps_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 1) = ((MR_Box) (parse_tree__write_deps_file__V_187_187));
#line 2185 "write_deps_file.m"
    }
#line 2184 "write_deps_file.m"
    {
#line 2184 "write_deps_file.m"
      parse_tree__write_deps_file__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 1) = ((MR_Box) (parse_tree__write_deps_file__V_186_186));
#line 2184 "write_deps_file.m"
    }
#line 2184 "write_deps_file.m"
    {
#line 2184 "write_deps_file.m"
      parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) ((MR_String) ".trans_opt_dates) | xargs rm -f\n"));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (parse_tree__write_deps_file__V_184_184));
#line 2184 "write_deps_file.m"
    }
#line 2184 "write_deps_file.m"
    {
#line 2184 "write_deps_file.m"
      parse_tree__write_deps_file__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_181_181, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_181_181, 1) = ((MR_Box) (parse_tree__write_deps_file__V_182_182));
#line 2184 "write_deps_file.m"
    }
#line 2183 "write_deps_file.m"
    {
#line 2183 "write_deps_file.m"
      parse_tree__write_deps_file__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_179_179, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_179_179, 1) = ((MR_Box) (parse_tree__write_deps_file__V_181_181));
#line 2183 "write_deps_file.m"
    }
#line 2183 "write_deps_file.m"
    {
#line 2183 "write_deps_file.m"
      parse_tree__write_deps_file__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_177_177, 0) = ((MR_Box) ((MR_String) ".optdates) | xargs rm -f\n"));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_177_177, 1) = ((MR_Box) (parse_tree__write_deps_file__V_179_179));
#line 2183 "write_deps_file.m"
    }
#line 2183 "write_deps_file.m"
    {
#line 2183 "write_deps_file.m"
      parse_tree__write_deps_file__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 1) = ((MR_Box) (parse_tree__write_deps_file__V_177_177));
#line 2183 "write_deps_file.m"
    }
#line 2182 "write_deps_file.m"
    {
#line 2182 "write_deps_file.m"
      parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (parse_tree__write_deps_file__V_176_176));
#line 2182 "write_deps_file.m"
    }
#line 2182 "write_deps_file.m"
    {
#line 2182 "write_deps_file.m"
      parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) ".date3s) | xargs rm -f\n"));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 2182 "write_deps_file.m"
    }
#line 2182 "write_deps_file.m"
    {
#line 2182 "write_deps_file.m"
      parse_tree__write_deps_file__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 2182 "write_deps_file.m"
    }
#line 2181 "write_deps_file.m"
    {
#line 2181 "write_deps_file.m"
      parse_tree__write_deps_file__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 1) = ((MR_Box) (parse_tree__write_deps_file__V_171_171));
#line 2181 "write_deps_file.m"
    }
#line 2181 "write_deps_file.m"
    {
#line 2181 "write_deps_file.m"
      parse_tree__write_deps_file__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 0) = ((MR_Box) ((MR_String) ".date0s) | xargs rm -f\n"));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 1) = ((MR_Box) (parse_tree__write_deps_file__V_169_169));
#line 2181 "write_deps_file.m"
    }
#line 2181 "write_deps_file.m"
    {
#line 2181 "write_deps_file.m"
      parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_167_167));
#line 2181 "write_deps_file.m"
    }
#line 2180 "write_deps_file.m"
    {
#line 2180 "write_deps_file.m"
      parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 2180 "write_deps_file.m"
    }
#line 2180 "write_deps_file.m"
    {
#line 2180 "write_deps_file.m"
      parse_tree__write_deps_file__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 0) = ((MR_Box) ((MR_String) ".dates) | xargs rm -f\n"));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 2180 "write_deps_file.m"
    }
#line 2180 "write_deps_file.m"
    {
#line 2180 "write_deps_file.m"
      parse_tree__write_deps_file__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 1) = ((MR_Box) (parse_tree__write_deps_file__V_162_162));
#line 2180 "write_deps_file.m"
    }
#line 2179 "write_deps_file.m"
    {
#line 2179 "write_deps_file.m"
      parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_161_161));
#line 2179 "write_deps_file.m"
    }
#line 2179 "write_deps_file.m"
    {
#line 2179 "write_deps_file.m"
      parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 2179 "write_deps_file.m"
    }
#line 2179 "write_deps_file.m"
    {
#line 2179 "write_deps_file.m"
      parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 2179 "write_deps_file.m"
    }
#line 2179 "write_deps_file.m"
    {
#line 2179 "write_deps_file.m"
      parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) " : "));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 2179 "write_deps_file.m"
    }
#line 2178 "write_deps_file.m"
    {
#line 2178 "write_deps_file.m"
      parse_tree__write_deps_file__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 2178 "write_deps_file.m"
    }
#line 2178 "write_deps_file.m"
    {
#line 2178 "write_deps_file.m"
      parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_153_153));
#line 2178 "write_deps_file.m"
    }
#line 2178 "write_deps_file.m"
    {
#line 2178 "write_deps_file.m"
      parse_tree__write_deps_file__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 2178 "write_deps_file.m"
    }
#line 2177 "write_deps_file.m"
    {
#line 2177 "write_deps_file.m"
      parse_tree__write_deps_file__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2177 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2177 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 1) = ((MR_Box) (parse_tree__write_deps_file__V_150_150));
#line 2177 "write_deps_file.m"
    }
#line 2177 "write_deps_file.m"
    {
#line 2177 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_147_147);
    }
#line 2211 "write_deps_file.m"
    {
#line 2211 "write_deps_file.m"
      parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_30));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])));
#line 2211 "write_deps_file.m"
    }
#line 2211 "write_deps_file.m"
    {
#line 2211 "write_deps_file.m"
      parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) ((MR_String) " "));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 2211 "write_deps_file.m"
    }
#line 2210 "write_deps_file.m"
    {
#line 2210 "write_deps_file.m"
      parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_29));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 2210 "write_deps_file.m"
    }
#line 2210 "write_deps_file.m"
    {
#line 2210 "write_deps_file.m"
      parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) ((MR_String) " "));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (parse_tree__write_deps_file__V_278_278));
#line 2210 "write_deps_file.m"
    }
#line 2209 "write_deps_file.m"
    {
#line 2209 "write_deps_file.m"
      parse_tree__write_deps_file__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 0) = ((MR_Box) (parse_tree__write_deps_file__JarFileName_28));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 2209 "write_deps_file.m"
    }
#line 2209 "write_deps_file.m"
    {
#line 2209 "write_deps_file.m"
      parse_tree__write_deps_file__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 0) = ((MR_Box) ((MR_String) " "));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 1) = ((MR_Box) (parse_tree__write_deps_file__V_275_275));
#line 2209 "write_deps_file.m"
    }
#line 2208 "write_deps_file.m"
    {
#line 2208 "write_deps_file.m"
      parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibFileName_27));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_273_273));
#line 2208 "write_deps_file.m"
    }
#line 2208 "write_deps_file.m"
    {
#line 2208 "write_deps_file.m"
      parse_tree__write_deps_file__V_270_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 0) = ((MR_Box) ((MR_String) " "));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 2208 "write_deps_file.m"
    }
#line 2207 "write_deps_file.m"
    {
#line 2207 "write_deps_file.m"
      parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) (parse_tree__write_deps_file__LibFileName_26));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_270_270));
#line 2207 "write_deps_file.m"
    }
#line 2207 "write_deps_file.m"
    {
#line 2207 "write_deps_file.m"
      parse_tree__write_deps_file__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 0) = ((MR_Box) ((MR_String) " "));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 2207 "write_deps_file.m"
    }
#line 2206 "write_deps_file.m"
    {
#line 2206 "write_deps_file.m"
      parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_25));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_267_267));
#line 2206 "write_deps_file.m"
    }
#line 2206 "write_deps_file.m"
    {
#line 2206 "write_deps_file.m"
      parse_tree__write_deps_file__V_264_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 2206 "write_deps_file.m"
    }
#line 2205 "write_deps_file.m"
    {
#line 2205 "write_deps_file.m"
      parse_tree__write_deps_file__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2205 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 0) = ((MR_Box) (parse_tree__write_deps_file__ExeFileName_21));
#line 2205 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 1) = ((MR_Box) (parse_tree__write_deps_file__V_264_264));
#line 2205 "write_deps_file.m"
    }
#line 2204 "write_deps_file.m"
    {
#line 2204 "write_deps_file.m"
      parse_tree__write_deps_file__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2204 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 0) = ((MR_Box) ((MR_String) "\t-rm -f "));
#line 2204 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 1) = ((MR_Box) (parse_tree__write_deps_file__V_263_263));
#line 2204 "write_deps_file.m"
    }
#line 2204 "write_deps_file.m"
    {
#line 2204 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_260_260);
#line 2204 "write_deps_file.m"
      return;
    }
#line 2135 "write_deps_file.m"
  }
#line 2127 "write_deps_file.m"
}

#line 2114 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
#line 2114 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 2114 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_9,
#line 2114 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 2114 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_11,
#line 2114 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5)
#line 2114 "write_deps_file.m"
{
#line 2119 "write_deps_file.m"
  {
#line 2119 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2119 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Extension_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
#line 2119 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__VarExtension_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
#line 2119 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TargetName_15;
#line 2119 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_20_20;
#line 2119 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_23_23;
#line 2119 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_24_24;
#line 2119 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_26_26;
#line 2119 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_27_27;
#line 2119 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_29_29;
#line 2119 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_30_30;

#line 2120 "write_deps_file.m"
    {
#line 2120 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__Extension_12, (MR_Integer) 1, &parse_tree__write_deps_file__TargetName_15);
    }
#line 2124 "write_deps_file.m"
    {
#line 2124 "write_deps_file.m"
      parse_tree__write_deps_file__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2124 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_30_30, 0) = ((MR_Box) (parse_tree__write_deps_file__VarExtension_13));
#line 2124 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[120])));
#line 2124 "write_deps_file.m"
    }
#line 2124 "write_deps_file.m"
    {
#line 2124 "write_deps_file.m"
      parse_tree__write_deps_file__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2124 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_29_29, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_11));
#line 2124 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_29_29, 1) = ((MR_Box) (parse_tree__write_deps_file__V_30_30));
#line 2124 "write_deps_file.m"
    }
#line 2124 "write_deps_file.m"
    {
#line 2124 "write_deps_file.m"
      parse_tree__write_deps_file__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2124 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_27_27, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 2124 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_27_27, 1) = ((MR_Box) (parse_tree__write_deps_file__V_29_29));
#line 2124 "write_deps_file.m"
    }
#line 2123 "write_deps_file.m"
    {
#line 2123 "write_deps_file.m"
      parse_tree__write_deps_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2123 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_26_26, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
#line 2123 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_26_26, 1) = ((MR_Box) (parse_tree__write_deps_file__V_27_27));
#line 2123 "write_deps_file.m"
    }
#line 2123 "write_deps_file.m"
    {
#line 2123 "write_deps_file.m"
      parse_tree__write_deps_file__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2123 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_24_24, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2123 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_24_24, 1) = ((MR_Box) (parse_tree__write_deps_file__V_26_26));
#line 2123 "write_deps_file.m"
    }
#line 2123 "write_deps_file.m"
    {
#line 2123 "write_deps_file.m"
      parse_tree__write_deps_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2123 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_23_23, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
#line 2123 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_23_23, 1) = ((MR_Box) (parse_tree__write_deps_file__V_24_24));
#line 2123 "write_deps_file.m"
    }
#line 2122 "write_deps_file.m"
    {
#line 2122 "write_deps_file.m"
      parse_tree__write_deps_file__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2122 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_20_20, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2122 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_20_20, 1) = ((MR_Box) (parse_tree__write_deps_file__V_23_23));
#line 2122 "write_deps_file.m"
    }
#line 2122 "write_deps_file.m"
    {
#line 2122 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_9, parse_tree__write_deps_file__V_20_20);
#line 2122 "write_deps_file.m"
      return;
    }
#line 2119 "write_deps_file.m"
  }
#line 2114 "write_deps_file.m"
}

#line 2096 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
#line 2096 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2096 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2096 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2096 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2096 "write_deps_file.m"
{
#line 2096 "write_deps_file.m"
  {
#line 2096 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2096 "write_deps_file.m"
    {
#line 2096 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2096 "write_deps_file.m"
      return;
    }
#line 2096 "write_deps_file.m"
  }
#line 2096 "write_deps_file.m"
}

#line 2091 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
#line 2091 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 2091 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 2091 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 2091 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_10)
#line 2091 "write_deps_file.m"
{
#line 2095 "write_deps_file.m"
  {
#line 2095 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2095 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_14_14;
#line 2096 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13;

#line 2096 "write_deps_file.m"
    {
#line 2096 "write_deps_file.m"
      parse_tree__write_deps_file__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2096 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[2]));
#line 2096 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1));
#line 2096 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2096 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 2096 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_8));
#line 2096 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_9));
#line 2096 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 6) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_10));
#line 2096 "write_deps_file.m"
    }
#line 2096 "write_deps_file.m"
    {
#line 2096 "write_deps_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_14_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[95]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13);
    }
#line 2095 "write_deps_file.m"
  }
#line 2091 "write_deps_file.m"
}

#line 1926 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
#line 1926 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1926 "write_deps_file.m"
{
#line 1926 "write_deps_file.m"
  {
#line 1926 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1926 "write_deps_file.m"
    MR_builtin_longjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0, 1);
#line 1926 "write_deps_file.m"
  }
#line 1926 "write_deps_file.m"
}

#line 1927 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
#line 1927 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1927 "write_deps_file.m"
{
#line 1927 "write_deps_file.m"
  {
#line 1927 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1927 "write_deps_file.m"
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_28_28 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_28_28);
#line 1927 "write_deps_file.m"
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_46_46);
#line 1927 "write_deps_file.m"
    {
#line 1927 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(parse_tree__write_deps_file__env_ptr);
#line 1927 "write_deps_file.m"
      return;
    }
#line 1927 "write_deps_file.m"
  }
#line 1927 "write_deps_file.m"
}

#line 1926 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
#line 1926 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1926 "write_deps_file.m"
{
#line 1926 "write_deps_file.m"
  {
#line 1926 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1926 "write_deps_file.m"
    {
#line 1927 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46, (MR_Integer) 0)));
#line 1928 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__V_341_341;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_342_342;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_343_343;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_344_344;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_345_345;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_346_346;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_347_347;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_348_348;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_349_349;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_350_350;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_351_351;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_352_352;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_353_353;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_354_354;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_355_355;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_356_356;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_357_357;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_358_358;
#line 1928 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__V_359_359;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_31_31;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_32_32;

#line 1927 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46, (MR_Integer) 1)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_341_341 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 0)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 1)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 2)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 3)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 4)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 5)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 6)));
#line 1928 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 7)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 8)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 9)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 10)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 11)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 12)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 13)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 14)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 15)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 16)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 17)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 18)));
#line 1928 "write_deps_file.m"
      parse_tree__write_deps_file__V_359_359 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 19)));
#line 1928 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 1928 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1928 "write_deps_file.m"
        {
#line 1928 "write_deps_file.m"
          {
#line 1928 "write_deps_file.m"
            parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47, (MR_Integer) 0)));
#line 1928 "write_deps_file.m"
            parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47, (MR_Integer) 1)));
#line 1928 "write_deps_file.m"
          }
#line 1928 "write_deps_file.m"
          {
#line 1928 "write_deps_file.m"
            parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(parse_tree__write_deps_file__env_ptr);
#line 1928 "write_deps_file.m"
            return;
          }
#line 1928 "write_deps_file.m"
        }
#line 1926 "write_deps_file.m"
    }
#line 1926 "write_deps_file.m"
  }
#line 1926 "write_deps_file.m"
}

#line 1926 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
#line 1926 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1926 "write_deps_file.m"
{
#line 1926 "write_deps_file.m"
  {
#line 1926 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1926 "write_deps_file.m"
    if (MR_builtin_setjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0) == 0)
#line 1926 "write_deps_file.m"
      {
#line 1926 "write_deps_file.m"
        {
#line 1926 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_360_360;
#line 1926 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_361_361;

#line 1926 "write_deps_file.m"
          (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20 == (MR_Integer) 1);
#line 1926 "write_deps_file.m"
          if ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1926 "write_deps_file.m"
            {
#line 5289 "parse_tree.write_deps_file.c"
              parse_tree__write_deps_file__TypeCtorInfo_360_360 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 5291 "parse_tree.write_deps_file.c"
              parse_tree__write_deps_file__TypeCtorInfo_361_361 = (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0;
#line 1927 "write_deps_file.m"
              {
#line 1927 "write_deps_file.m"
                mercury__map__member_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_360_360, parse_tree__write_deps_file__TypeCtorInfo_361_361, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_28_28, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_46_46, parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3, parse_tree__write_deps_file__env_ptr);
              }
#line 1926 "write_deps_file.m"
            }
#line 1926 "write_deps_file.m"
        }
#line 1926 "write_deps_file.m"
        (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_FALSE;
#line 1926 "write_deps_file.m"
      }
#line 1926 "write_deps_file.m"
    else
#line 1926 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_TRUE;
#line 1926 "write_deps_file.m"
  }
#line 1926 "write_deps_file.m"
}

#line 1904 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_14,
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_15,
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_16,
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_17,
#line 1904 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_18,
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_20,
#line 1904 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_21,
#line 1904 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
#line 1904 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
#line 1904 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24)
#line 1904 "write_deps_file.m"
{
#line 1904 "write_deps_file.m"
  {
#line 1904 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s parse_tree__write_deps_file__env;

#line 1904 "write_deps_file.m"
    (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17 = parse_tree__write_deps_file__DepsMap_17;
#line 1904 "write_deps_file.m"
    (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20 = parse_tree__write_deps_file__Intermod_20;
#line 1910 "write_deps_file.m"
    {
#line 1910 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallIntsTargetName_26;
#line 1910 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__OptStr_27;
#line 1910 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__Int0Str_33;
#line 1910 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__MaybeInt0sVar_34;
#line 1910 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__TransOptStr_35;
#line 1910 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__DepStr_36;
#line 1910 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallOptsTargetName_37;
#line 1910 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallHdrsTargetName_38;
#line 1910 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_51_51;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_54_54;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_55_55;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_57_57;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_58_58;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_60_60;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_61_61;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_63_63;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_64_64;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_66_66;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_67_67;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_68_68;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_69_69;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_70_70;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_72_72;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_74_74;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_75_75;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_77_77;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_78_78;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_80_80;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_81_81;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_82_82;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_83_83;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_84_84;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_86_86;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_88_88;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_90_90;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_92_92;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_94_94;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_96_96;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_98_98;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_100_100;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_102_102;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_104_104;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_106_106;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_108_108;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_110_110;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_112_112;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_113_113;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_114_114;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_115_115;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_139_139;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_142_142;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_143_143;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_145_145;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_219_219;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_222_222;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_223_223;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_225_225;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_226_226;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_228_228;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_230_230;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_231_231;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_233_233;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_235_235;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_237_237;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_238_238;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_240_240;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_242_242;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_244_244;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_246_246;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_262_262;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_265_265;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_266_266;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_268_268;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_269_269;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_271_271;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_273_273;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_274_274;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_276_276;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_278_278;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_280_280;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_281_281;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_283_283;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_285_285;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_287_287;
#line 1910 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_289_289;

#line 1916 "write_deps_file.m"
      {
#line 1916 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_ints", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallIntsTargetName_26);
      }
#line 1921 "write_deps_file.m"
      if (((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20 == (MR_Integer) 0))
#line 1923 "write_deps_file.m"
        parse_tree__write_deps_file__OptStr_27 = (MR_String) "";
#line 1921 "write_deps_file.m"
      else
#line 1920 "write_deps_file.m"
        parse_tree__write_deps_file__OptStr_27 = (MR_String) " opt";
#line 1926 "write_deps_file.m"
      {
#line 1926 "write_deps_file.m"
        parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(&parse_tree__write_deps_file__env);
      }
#line 1934 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1932 "write_deps_file.m"
        {
#line 1932 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_49_49;

#line 1932 "write_deps_file.m"
          parse_tree__write_deps_file__Int0Str_33 = (MR_String) " int0";
#line 1933 "write_deps_file.m"
          {
#line 1933 "write_deps_file.m"
            parse_tree__write_deps_file__V_49_49 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_18, (MR_String) ".int0s) ");
          }
#line 1933 "write_deps_file.m"
          {
#line 1933 "write_deps_file.m"
            parse_tree__write_deps_file__MaybeInt0sVar_34 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_49_49);
          }
#line 1932 "write_deps_file.m"
        }
#line 1934 "write_deps_file.m"
      else
#line 1935 "write_deps_file.m"
        {
#line 1935 "write_deps_file.m"
          parse_tree__write_deps_file__Int0Str_33 = (MR_String) "";
#line 1936 "write_deps_file.m"
          parse_tree__write_deps_file__MaybeInt0sVar_34 = (MR_String) "";
#line 1935 "write_deps_file.m"
        }
#line 1941 "write_deps_file.m"
      if ((parse_tree__write_deps_file__TransOpt_21 == (MR_Integer) 0))
#line 1943 "write_deps_file.m"
        parse_tree__write_deps_file__TransOptStr_35 = (MR_String) "";
#line 1941 "write_deps_file.m"
      else
#line 1940 "write_deps_file.m"
        parse_tree__write_deps_file__TransOptStr_35 = (MR_String) " trans_opt";
#line 1948 "write_deps_file.m"
      if ((parse_tree__write_deps_file__MmcMakeDeps_19 == (MR_Integer) 0))
#line 1950 "write_deps_file.m"
        parse_tree__write_deps_file__DepStr_36 = (MR_String) "";
#line 1948 "write_deps_file.m"
      else
#line 1947 "write_deps_file.m"
        parse_tree__write_deps_file__DepStr_36 = (MR_String) " module_dep";
#line 1975 "write_deps_file.m"
      {
#line 1975 "write_deps_file.m"
        parse_tree__write_deps_file__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_115_115, 0) = ((MR_Box) (parse_tree__write_deps_file__DepStr_36));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[35])));
#line 1975 "write_deps_file.m"
      }
#line 1975 "write_deps_file.m"
      {
#line 1975 "write_deps_file.m"
        parse_tree__write_deps_file__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_35));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 1) = ((MR_Box) (parse_tree__write_deps_file__V_115_115));
#line 1975 "write_deps_file.m"
      }
#line 1975 "write_deps_file.m"
      {
#line 1975 "write_deps_file.m"
        parse_tree__write_deps_file__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 1) = ((MR_Box) (parse_tree__write_deps_file__V_114_114));
#line 1975 "write_deps_file.m"
      }
#line 1974 "write_deps_file.m"
      {
#line 1974 "write_deps_file.m"
        parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1974 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0Str_33));
#line 1974 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) (parse_tree__write_deps_file__V_113_113));
#line 1974 "write_deps_file.m"
      }
#line 1973 "write_deps_file.m"
      {
#line 1973 "write_deps_file.m"
        parse_tree__write_deps_file__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 0) = ((MR_Box) ((MR_String) "\tfor ext in int int2 int3"));
#line 1973 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 1) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 1973 "write_deps_file.m"
      }
#line 1972 "write_deps_file.m"
      {
#line 1972 "write_deps_file.m"
        parse_tree__write_deps_file__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_108_108, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
#line 1972 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_108_108, 1) = ((MR_Box) (parse_tree__write_deps_file__V_110_110));
#line 1972 "write_deps_file.m"
      }
#line 1971 "write_deps_file.m"
      {
#line 1971 "write_deps_file.m"
        parse_tree__write_deps_file__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1971 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n"));
#line 1971 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 1) = ((MR_Box) (parse_tree__write_deps_file__V_108_108));
#line 1971 "write_deps_file.m"
      }
#line 1970 "write_deps_file.m"
      {
#line 1970 "write_deps_file.m"
        parse_tree__write_deps_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1970 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n"));
#line 1970 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 1) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 1970 "write_deps_file.m"
      }
#line 1969 "write_deps_file.m"
      {
#line 1969 "write_deps_file.m"
        parse_tree__write_deps_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1969 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
#line 1969 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 1) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 1969 "write_deps_file.m"
      }
#line 1968 "write_deps_file.m"
      {
#line 1968 "write_deps_file.m"
        parse_tree__write_deps_file__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1968 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_100_100, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
#line 1968 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_100_100, 1) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 1968 "write_deps_file.m"
      }
#line 1967 "write_deps_file.m"
      {
#line 1967 "write_deps_file.m"
        parse_tree__write_deps_file__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1967 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
#line 1967 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 1) = ((MR_Box) (parse_tree__write_deps_file__V_100_100));
#line 1967 "write_deps_file.m"
      }
#line 1966 "write_deps_file.m"
      {
#line 1966 "write_deps_file.m"
        parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1966 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
#line 1966 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 1966 "write_deps_file.m"
      }
#line 1965 "write_deps_file.m"
      {
#line 1965 "write_deps_file.m"
        parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1965 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
#line 1965 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 1965 "write_deps_file.m"
      }
#line 1964 "write_deps_file.m"
      {
#line 1964 "write_deps_file.m"
        parse_tree__write_deps_file__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1964 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
#line 1964 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 1964 "write_deps_file.m"
      }
#line 1963 "write_deps_file.m"
      {
#line 1963 "write_deps_file.m"
        parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
#line 1963 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 1963 "write_deps_file.m"
      }
#line 1962 "write_deps_file.m"
      {
#line 1962 "write_deps_file.m"
        parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1962 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\\n"));
#line 1962 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1962 "write_deps_file.m"
      }
#line 1961 "write_deps_file.m"
      {
#line 1961 "write_deps_file.m"
        parse_tree__write_deps_file__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
#line 1961 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1961 "write_deps_file.m"
      }
#line 1961 "write_deps_file.m"
      {
#line 1961 "write_deps_file.m"
        parse_tree__write_deps_file__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
#line 1961 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 1) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 1961 "write_deps_file.m"
      }
#line 1961 "write_deps_file.m"
      {
#line 1961 "write_deps_file.m"
        parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
#line 1961 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 1961 "write_deps_file.m"
      }
#line 1960 "write_deps_file.m"
      {
#line 1960 "write_deps_file.m"
        parse_tree__write_deps_file__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1960 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_82_82, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 1960 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_82_82, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 1960 "write_deps_file.m"
      }
#line 1960 "write_deps_file.m"
      {
#line 1960 "write_deps_file.m"
        parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1960 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 1960 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_82_82));
#line 1960 "write_deps_file.m"
      }
#line 1960 "write_deps_file.m"
      {
#line 1960 "write_deps_file.m"
        parse_tree__write_deps_file__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1960 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_34));
#line 1960 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 1960 "write_deps_file.m"
      }
#line 1959 "write_deps_file.m"
      {
#line 1959 "write_deps_file.m"
        parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 1959 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 1959 "write_deps_file.m"
      }
#line 1959 "write_deps_file.m"
      {
#line 1959 "write_deps_file.m"
        parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1959 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 1959 "write_deps_file.m"
      }
#line 1959 "write_deps_file.m"
      {
#line 1959 "write_deps_file.m"
        parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
#line 1959 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_77_77));
#line 1959 "write_deps_file.m"
      }
#line 1959 "write_deps_file.m"
      {
#line 1959 "write_deps_file.m"
        parse_tree__write_deps_file__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1959 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 1959 "write_deps_file.m"
      }
#line 1958 "write_deps_file.m"
      {
#line 1958 "write_deps_file.m"
        parse_tree__write_deps_file__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1958 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 0) = ((MR_Box) ((MR_String) "\tfiles=\"\044("));
#line 1958 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 1) = ((MR_Box) (parse_tree__write_deps_file__V_74_74));
#line 1958 "write_deps_file.m"
      }
#line 1957 "write_deps_file.m"
      {
#line 1957 "write_deps_file.m"
        parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1957 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) ((MR_String) " install_lib_dirs\n"));
#line 1957 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_72_72));
#line 1957 "write_deps_file.m"
      }
#line 1957 "write_deps_file.m"
      {
#line 1957 "write_deps_file.m"
        parse_tree__write_deps_file__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1957 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_69_69, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
#line 1957 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_69_69, 1) = ((MR_Box) (parse_tree__write_deps_file__V_70_70));
#line 1957 "write_deps_file.m"
      }
#line 1956 "write_deps_file.m"
      {
#line 1956 "write_deps_file.m"
        parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1956 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 1956 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 1) = ((MR_Box) (parse_tree__write_deps_file__V_69_69));
#line 1956 "write_deps_file.m"
      }
#line 1956 "write_deps_file.m"
      {
#line 1956 "write_deps_file.m"
        parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1956 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 1956 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (parse_tree__write_deps_file__V_68_68));
#line 1956 "write_deps_file.m"
      }
#line 1956 "write_deps_file.m"
      {
#line 1956 "write_deps_file.m"
        parse_tree__write_deps_file__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1956 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_34));
#line 1956 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 1) = ((MR_Box) (parse_tree__write_deps_file__V_67_67));
#line 1956 "write_deps_file.m"
      }
#line 1956 "write_deps_file.m"
      {
#line 1956 "write_deps_file.m"
        parse_tree__write_deps_file__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1956 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_64_64, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 1956 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_64_64, 1) = ((MR_Box) (parse_tree__write_deps_file__V_66_66));
#line 1956 "write_deps_file.m"
      }
#line 1955 "write_deps_file.m"
      {
#line 1955 "write_deps_file.m"
        parse_tree__write_deps_file__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1955 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1955 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 1) = ((MR_Box) (parse_tree__write_deps_file__V_64_64));
#line 1955 "write_deps_file.m"
      }
#line 1955 "write_deps_file.m"
      {
#line 1955 "write_deps_file.m"
        parse_tree__write_deps_file__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1955 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
#line 1955 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 1) = ((MR_Box) (parse_tree__write_deps_file__V_63_63));
#line 1955 "write_deps_file.m"
      }
#line 1955 "write_deps_file.m"
      {
#line 1955 "write_deps_file.m"
        parse_tree__write_deps_file__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1955 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1955 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 1) = ((MR_Box) (parse_tree__write_deps_file__V_61_61));
#line 1955 "write_deps_file.m"
      }
#line 1955 "write_deps_file.m"
      {
#line 1955 "write_deps_file.m"
        parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1955 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1955 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_60_60));
#line 1955 "write_deps_file.m"
      }
#line 1954 "write_deps_file.m"
      {
#line 1954 "write_deps_file.m"
        parse_tree__write_deps_file__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
#line 1954 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 1954 "write_deps_file.m"
      }
#line 1954 "write_deps_file.m"
      {
#line 1954 "write_deps_file.m"
        parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1954 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_57_57));
#line 1954 "write_deps_file.m"
      }
#line 1954 "write_deps_file.m"
      {
#line 1954 "write_deps_file.m"
        parse_tree__write_deps_file__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_54_54, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
#line 1954 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_54_54, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 1954 "write_deps_file.m"
      }
#line 1953 "write_deps_file.m"
      {
#line 1953 "write_deps_file.m"
        parse_tree__write_deps_file__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1953 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 1) = ((MR_Box) (parse_tree__write_deps_file__V_54_54));
#line 1953 "write_deps_file.m"
      }
#line 1953 "write_deps_file.m"
      {
#line 1953 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_51_51);
      }
#line 1987 "write_deps_file.m"
      {
#line 1987 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_opts", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallOptsTargetName_37);
      }
#line 1990 "write_deps_file.m"
      {
#line 1990 "write_deps_file.m"
        parse_tree__write_deps_file__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1990 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_37));
#line 1990 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 1990 "write_deps_file.m"
      }
#line 1990 "write_deps_file.m"
      {
#line 1990 "write_deps_file.m"
        parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1990 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1990 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_145_145));
#line 1990 "write_deps_file.m"
      }
#line 1990 "write_deps_file.m"
      {
#line 1990 "write_deps_file.m"
        parse_tree__write_deps_file__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1990 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_37));
#line 1990 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 1990 "write_deps_file.m"
      }
#line 1989 "write_deps_file.m"
      {
#line 1989 "write_deps_file.m"
        parse_tree__write_deps_file__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1989 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_139_139, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1989 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_139_139, 1) = ((MR_Box) (parse_tree__write_deps_file__V_142_142));
#line 1989 "write_deps_file.m"
      }
#line 1989 "write_deps_file.m"
      {
#line 1989 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_139_139);
      }
#line 1993 "write_deps_file.m"
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20 == (MR_Integer) 0);
#line 1993 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1994 "write_deps_file.m"
        (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__TransOpt_21 == (MR_Integer) 0);
#line 1997 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1996 "write_deps_file.m"
        {
#line 1996 "write_deps_file.m"
          {
#line 1996 "write_deps_file.m"
            mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_15, (MR_String) "\n\t\100:\n\n");
          }
#line 1996 "write_deps_file.m"
        }
#line 1997 "write_deps_file.m"
      else
#line 1998 "write_deps_file.m"
        {
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_151_151;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_153_153;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_154_154;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_156_156;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_158_158;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_159_159;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_160_160;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_162_162;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_164_164;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_166_166;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_168_168;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_170_170;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_172_172;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_174_174;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_176_176;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_178_178;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_180_180;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_182_182;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_184_184;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_186_186;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_188_188;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_190_190;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_192_192;
#line 1998 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_193_193;

#line 2015 "write_deps_file.m"
          {
#line 2015 "write_deps_file.m"
            parse_tree__write_deps_file__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2015 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_193_193, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_35));
#line 2015 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_193_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[43])));
#line 2015 "write_deps_file.m"
          }
#line 2015 "write_deps_file.m"
          {
#line 2015 "write_deps_file.m"
            parse_tree__write_deps_file__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2015 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
#line 2015 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 1) = ((MR_Box) (parse_tree__write_deps_file__V_193_193));
#line 2015 "write_deps_file.m"
          }
#line 2014 "write_deps_file.m"
          {
#line 2014 "write_deps_file.m"
            parse_tree__write_deps_file__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2014 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 0) = ((MR_Box) ((MR_String) "\tfor ext in "));
#line 2014 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 1) = ((MR_Box) (parse_tree__write_deps_file__V_192_192));
#line 2014 "write_deps_file.m"
          }
#line 2013 "write_deps_file.m"
          {
#line 2013 "write_deps_file.m"
            parse_tree__write_deps_file__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2013 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
#line 2013 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 1) = ((MR_Box) (parse_tree__write_deps_file__V_190_190));
#line 2013 "write_deps_file.m"
          }
#line 2012 "write_deps_file.m"
          {
#line 2012 "write_deps_file.m"
            parse_tree__write_deps_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2012 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 0) = ((MR_Box) ((MR_String) " then we just use\n"));
#line 2012 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 1) = ((MR_Box) (parse_tree__write_deps_file__V_188_188));
#line 2012 "write_deps_file.m"
          }
#line 2011 "write_deps_file.m"
          {
#line 2011 "write_deps_file.m"
            parse_tree__write_deps_file__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2011 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails,"));
#line 2011 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 1) = ((MR_Box) (parse_tree__write_deps_file__V_186_186));
#line 2011 "write_deps_file.m"
          }
#line 2010 "write_deps_file.m"
          {
#line 2010 "write_deps_file.m"
            parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2010 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) ((MR_String) " \140--use-subdirs\' option\n"));
#line 2010 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (parse_tree__write_deps_file__V_184_184));
#line 2010 "write_deps_file.m"
          }
#line 2009 "write_deps_file.m"
          {
#line 2009 "write_deps_file.m"
            parse_tree__write_deps_file__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2009 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the"));
#line 2009 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 1) = ((MR_Box) (parse_tree__write_deps_file__V_182_182));
#line 2009 "write_deps_file.m"
          }
#line 2008 "write_deps_file.m"
          {
#line 2008 "write_deps_file.m"
            parse_tree__write_deps_file__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2008 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_178_178, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
#line 2008 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_178_178, 1) = ((MR_Box) (parse_tree__write_deps_file__V_180_180));
#line 2008 "write_deps_file.m"
          }
#line 2007 "write_deps_file.m"
          {
#line 2007 "write_deps_file.m"
            parse_tree__write_deps_file__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2007 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
#line 2007 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 1) = ((MR_Box) (parse_tree__write_deps_file__V_178_178));
#line 2007 "write_deps_file.m"
          }
#line 2006 "write_deps_file.m"
          {
#line 2006 "write_deps_file.m"
            parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2006 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
#line 2006 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (parse_tree__write_deps_file__V_176_176));
#line 2006 "write_deps_file.m"
          }
#line 2005 "write_deps_file.m"
          {
#line 2005 "write_deps_file.m"
            parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2005 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
#line 2005 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 2005 "write_deps_file.m"
          }
#line 2004 "write_deps_file.m"
          {
#line 2004 "write_deps_file.m"
            parse_tree__write_deps_file__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2004 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_170_170, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
#line 2004 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_170_170, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 2004 "write_deps_file.m"
          }
#line 2003 "write_deps_file.m"
          {
#line 2003 "write_deps_file.m"
            parse_tree__write_deps_file__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2003 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_168_168, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
#line 2003 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_168_168, 1) = ((MR_Box) (parse_tree__write_deps_file__V_170_170));
#line 2003 "write_deps_file.m"
          }
#line 2002 "write_deps_file.m"
          {
#line 2002 "write_deps_file.m"
            parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2002 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
#line 2002 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_168_168));
#line 2002 "write_deps_file.m"
          }
#line 2001 "write_deps_file.m"
          {
#line 2001 "write_deps_file.m"
            parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2001 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\\n"));
#line 2001 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 2001 "write_deps_file.m"
          }
#line 2000 "write_deps_file.m"
          {
#line 2000 "write_deps_file.m"
            parse_tree__write_deps_file__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2000 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
#line 2000 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 2000 "write_deps_file.m"
          }
#line 2000 "write_deps_file.m"
          {
#line 2000 "write_deps_file.m"
            parse_tree__write_deps_file__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2000 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_160_160, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
#line 2000 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_160_160, 1) = ((MR_Box) (parse_tree__write_deps_file__V_162_162));
#line 2000 "write_deps_file.m"
          }
#line 2000 "write_deps_file.m"
          {
#line 2000 "write_deps_file.m"
            parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2000 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2000 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_160_160));
#line 2000 "write_deps_file.m"
          }
#line 2000 "write_deps_file.m"
          {
#line 2000 "write_deps_file.m"
            parse_tree__write_deps_file__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2000 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_158_158, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2000 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_158_158, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 2000 "write_deps_file.m"
          }
#line 1999 "write_deps_file.m"
          {
#line 1999 "write_deps_file.m"
            parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1999 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) ((MR_String) "\tfiles=\""));
#line 1999 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_158_158));
#line 1999 "write_deps_file.m"
          }
#line 1999 "write_deps_file.m"
          {
#line 1999 "write_deps_file.m"
            parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1999 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
#line 1999 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 1999 "write_deps_file.m"
          }
#line 1999 "write_deps_file.m"
          {
#line 1999 "write_deps_file.m"
            parse_tree__write_deps_file__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1999 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 1999 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 1999 "write_deps_file.m"
          }
#line 1998 "write_deps_file.m"
          {
#line 1998 "write_deps_file.m"
            parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1998 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 1998 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_153_153));
#line 1998 "write_deps_file.m"
          }
#line 1998 "write_deps_file.m"
          {
#line 1998 "write_deps_file.m"
            mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_151_151);
          }
#line 1998 "write_deps_file.m"
        }
#line 2038 "write_deps_file.m"
      {
#line 2038 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallHdrsTargetName_38);
      }
#line 2048 "write_deps_file.m"
      {
#line 2048 "write_deps_file.m"
        parse_tree__write_deps_file__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2048 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2048 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[47])));
#line 2048 "write_deps_file.m"
      }
#line 2047 "write_deps_file.m"
      {
#line 2047 "write_deps_file.m"
        parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2047 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
#line 2047 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_246_246));
#line 2047 "write_deps_file.m"
      }
#line 2046 "write_deps_file.m"
      {
#line 2046 "write_deps_file.m"
        parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2046 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 2046 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 2046 "write_deps_file.m"
      }
#line 2045 "write_deps_file.m"
      {
#line 2045 "write_deps_file.m"
        parse_tree__write_deps_file__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2045 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 2045 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 2045 "write_deps_file.m"
      }
#line 2045 "write_deps_file.m"
      {
#line 2045 "write_deps_file.m"
        parse_tree__write_deps_file__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2045 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 0) = ((MR_Box) ((MR_String) ".mhs),)\n"));
#line 2045 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 1) = ((MR_Box) (parse_tree__write_deps_file__V_240_240));
#line 2045 "write_deps_file.m"
      }
#line 2045 "write_deps_file.m"
      {
#line 2045 "write_deps_file.m"
        parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2045 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2045 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_238_238));
#line 2045 "write_deps_file.m"
      }
#line 2044 "write_deps_file.m"
      {
#line 2044 "write_deps_file.m"
        parse_tree__write_deps_file__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2044 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
#line 2044 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 2044 "write_deps_file.m"
      }
#line 2043 "write_deps_file.m"
      {
#line 2043 "write_deps_file.m"
        parse_tree__write_deps_file__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2043 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 0) = ((MR_Box) ((MR_String) "install_lib_dirs\n"));
#line 2043 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 1) = ((MR_Box) (parse_tree__write_deps_file__V_235_235));
#line 2043 "write_deps_file.m"
      }
#line 2043 "write_deps_file.m"
      {
#line 2043 "write_deps_file.m"
        parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2043 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) ((MR_String) ".mhs) "));
#line 2043 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (parse_tree__write_deps_file__V_233_233));
#line 2043 "write_deps_file.m"
      }
#line 2043 "write_deps_file.m"
      {
#line 2043 "write_deps_file.m"
        parse_tree__write_deps_file__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2043 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2043 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 2043 "write_deps_file.m"
      }
#line 2042 "write_deps_file.m"
      {
#line 2042 "write_deps_file.m"
        parse_tree__write_deps_file__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2042 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2042 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 1) = ((MR_Box) (parse_tree__write_deps_file__V_230_230));
#line 2042 "write_deps_file.m"
      }
#line 2042 "write_deps_file.m"
      {
#line 2042 "write_deps_file.m"
        parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2042 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) ((MR_String) " : "));
#line 2042 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_228_228));
#line 2042 "write_deps_file.m"
      }
#line 2041 "write_deps_file.m"
      {
#line 2041 "write_deps_file.m"
        parse_tree__write_deps_file__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2041 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_38));
#line 2041 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 2041 "write_deps_file.m"
      }
#line 2041 "write_deps_file.m"
      {
#line 2041 "write_deps_file.m"
        parse_tree__write_deps_file__V_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2041 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2041 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 1) = ((MR_Box) (parse_tree__write_deps_file__V_225_225));
#line 2041 "write_deps_file.m"
      }
#line 2041 "write_deps_file.m"
      {
#line 2041 "write_deps_file.m"
        parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2041 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_38));
#line 2041 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_223_223));
#line 2041 "write_deps_file.m"
      }
#line 2040 "write_deps_file.m"
      {
#line 2040 "write_deps_file.m"
        parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2040 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2040 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 2040 "write_deps_file.m"
      }
#line 2040 "write_deps_file.m"
      {
#line 2040 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_219_219);
      }
#line 2054 "write_deps_file.m"
      {
#line 2054 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_grade_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39);
      }
#line 2065 "write_deps_file.m"
      {
#line 2065 "write_deps_file.m"
        parse_tree__write_deps_file__V_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2065 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_289_289, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2065 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_289_289, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[71])));
#line 2065 "write_deps_file.m"
      }
#line 2064 "write_deps_file.m"
      {
#line 2064 "write_deps_file.m"
        parse_tree__write_deps_file__V_287_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2064 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
#line 2064 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 1) = ((MR_Box) (parse_tree__write_deps_file__V_289_289));
#line 2064 "write_deps_file.m"
      }
#line 2063 "write_deps_file.m"
      {
#line 2063 "write_deps_file.m"
        parse_tree__write_deps_file__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2063 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 2063 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 1) = ((MR_Box) (parse_tree__write_deps_file__V_287_287));
#line 2063 "write_deps_file.m"
      }
#line 2062 "write_deps_file.m"
      {
#line 2062 "write_deps_file.m"
        parse_tree__write_deps_file__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 2062 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 1) = ((MR_Box) (parse_tree__write_deps_file__V_285_285));
#line 2062 "write_deps_file.m"
      }
#line 2062 "write_deps_file.m"
      {
#line 2062 "write_deps_file.m"
        parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) ((MR_String) ".mihs),)\n"));
#line 2062 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (parse_tree__write_deps_file__V_283_283));
#line 2062 "write_deps_file.m"
      }
#line 2062 "write_deps_file.m"
      {
#line 2062 "write_deps_file.m"
        parse_tree__write_deps_file__V_280_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2062 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 2062 "write_deps_file.m"
      }
#line 2061 "write_deps_file.m"
      {
#line 2061 "write_deps_file.m"
        parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
#line 2061 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (parse_tree__write_deps_file__V_280_280));
#line 2061 "write_deps_file.m"
      }
#line 2060 "write_deps_file.m"
      {
#line 2060 "write_deps_file.m"
        parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2060 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
#line 2060 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (parse_tree__write_deps_file__V_278_278));
#line 2060 "write_deps_file.m"
      }
#line 2060 "write_deps_file.m"
      {
#line 2060 "write_deps_file.m"
        parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2060 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) ((MR_String) ".mihs) "));
#line 2060 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 2060 "write_deps_file.m"
      }
#line 2060 "write_deps_file.m"
      {
#line 2060 "write_deps_file.m"
        parse_tree__write_deps_file__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2060 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2060 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 1) = ((MR_Box) (parse_tree__write_deps_file__V_274_274));
#line 2060 "write_deps_file.m"
      }
#line 2059 "write_deps_file.m"
      {
#line 2059 "write_deps_file.m"
        parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2059 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_273_273));
#line 2059 "write_deps_file.m"
      }
#line 2059 "write_deps_file.m"
      {
#line 2059 "write_deps_file.m"
        parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) ((MR_String) " : "));
#line 2059 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 2059 "write_deps_file.m"
      }
#line 2058 "write_deps_file.m"
      {
#line 2058 "write_deps_file.m"
        parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2058 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39));
#line 2058 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 2058 "write_deps_file.m"
      }
#line 2058 "write_deps_file.m"
      {
#line 2058 "write_deps_file.m"
        parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2058 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2058 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_268_268));
#line 2058 "write_deps_file.m"
      }
#line 2058 "write_deps_file.m"
      {
#line 2058 "write_deps_file.m"
        parse_tree__write_deps_file__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2058 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39));
#line 2058 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 2058 "write_deps_file.m"
      }
#line 2057 "write_deps_file.m"
      {
#line 2057 "write_deps_file.m"
        parse_tree__write_deps_file__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2057 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 1) = ((MR_Box) (parse_tree__write_deps_file__V_265_265));
#line 2057 "write_deps_file.m"
      }
#line 2057 "write_deps_file.m"
      {
#line 2057 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_262_262);
#line 2057 "write_deps_file.m"
        return;
      }
#line 1910 "write_deps_file.m"
    }
#line 1904 "write_deps_file.m"
  }
#line 1904 "write_deps_file.m"
}

#line 1861 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
#line 1861 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_11,
#line 1861 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12,
#line 1861 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_13,
#line 1861 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_14,
#line 1861 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_15,
#line 1861 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_16,
#line 1861 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DepFileName_17,
#line 1861 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DvFileName_18)
#line 1861 "write_deps_file.m"
{
#line 1867 "write_deps_file.m"
  {
#line 1867 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1867 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleFileName_20;
#line 1867 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ForceC2InitTarget_21;
#line 1867 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TmpInitCFileName_22;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_31_31;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_33_33;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_35_35;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_36_36;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_38_38;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_41_41;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_47_47;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 1867 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_67_67;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_70_70;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_72_72;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_74_74;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_75_75;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_77_77;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_78_78;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_80_80;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_81_81;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_83_83;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_85_85;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_87_87;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_88_88;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_90_90;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_95_95;

#line 1868 "write_deps_file.m"
    {
#line 1868 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dep", (MR_Integer) 1, parse_tree__write_deps_file__DepFileName_17);
    }
#line 1870 "write_deps_file.m"
    {
#line 1870 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dv", (MR_Integer) 1, parse_tree__write_deps_file__DvFileName_18);
    }
#line 1875 "write_deps_file.m"
    {
#line 1875 "write_deps_file.m"
      parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1875 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_43_43, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
#line 1875 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])));
#line 1875 "write_deps_file.m"
    }
#line 1874 "write_deps_file.m"
    {
#line 1874 "write_deps_file.m"
      parse_tree__write_deps_file__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_41_41, 0) = ((MR_Box) ((MR_String) "\techo > "));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_41_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 1874 "write_deps_file.m"
    }
#line 1874 "write_deps_file.m"
    {
#line 1874 "write_deps_file.m"
      parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (parse_tree__write_deps_file__V_41_41));
#line 1874 "write_deps_file.m"
    }
#line 1874 "write_deps_file.m"
    {
#line 1874 "write_deps_file.m"
      parse_tree__write_deps_file__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_38_38, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_38_38, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1874 "write_deps_file.m"
    }
#line 1874 "write_deps_file.m"
    {
#line 1874 "write_deps_file.m"
      parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) ((MR_String) " \044("));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_38_38));
#line 1874 "write_deps_file.m"
    }
#line 1874 "write_deps_file.m"
    {
#line 1874 "write_deps_file.m"
      parse_tree__write_deps_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, 0) = ((MR_Box) (*parse_tree__write_deps_file__DepFileName_17));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1874 "write_deps_file.m"
    }
#line 1874 "write_deps_file.m"
    {
#line 1874 "write_deps_file.m"
      parse_tree__write_deps_file__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_33_33, 0) = ((MR_Box) ((MR_String) " : "));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_33_33, 1) = ((MR_Box) (parse_tree__write_deps_file__V_35_35));
#line 1874 "write_deps_file.m"
    }
#line 1873 "write_deps_file.m"
    {
#line 1873 "write_deps_file.m"
      parse_tree__write_deps_file__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_31_31, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
#line 1873 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_31_31, 1) = ((MR_Box) (parse_tree__write_deps_file__V_33_33));
#line 1873 "write_deps_file.m"
    }
#line 1873 "write_deps_file.m"
    {
#line 1873 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_31_31);
    }
#line 1878 "write_deps_file.m"
    {
#line 1878 "write_deps_file.m"
      parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1878 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) " >> "));
#line 1878 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 1878 "write_deps_file.m"
    }
#line 1878 "write_deps_file.m"
    {
#line 1878 "write_deps_file.m"
      parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1878 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) ".cs)"));
#line 1878 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 1878 "write_deps_file.m"
    }
#line 1878 "write_deps_file.m"
    {
#line 1878 "write_deps_file.m"
      parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1878 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1878 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 1878 "write_deps_file.m"
    }
#line 1878 "write_deps_file.m"
    {
#line 1878 "write_deps_file.m"
      parse_tree__write_deps_file__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1878 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1878 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 1878 "write_deps_file.m"
    }
#line 1877 "write_deps_file.m"
    {
#line 1877 "write_deps_file.m"
      parse_tree__write_deps_file__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1877 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 0) = ((MR_Box) ((MR_String) "\t\044(MKLIBINIT) "));
#line 1877 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 1) = ((MR_Box) (parse_tree__write_deps_file__V_50_50));
#line 1877 "write_deps_file.m"
    }
#line 1877 "write_deps_file.m"
    {
#line 1877 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_47_47);
    }
#line 1885 "write_deps_file.m"
    {
#line 1885 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\t\044(EXTRA_INIT_COMMAND) >> ");
    }
#line 1886 "write_deps_file.m"
    {
#line 1886 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__InitFileName_16);
    }
#line 1887 "write_deps_file.m"
    {
#line 1887 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1892 "write_deps_file.m"
    {
#line 1892 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleFileName_20 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_13);
    }
#line 1893 "write_deps_file.m"
    {
#line 1893 "write_deps_file.m"
      parse_tree__write_deps_file__V_67_67 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleFileName_20, (MR_String) "_init");
    }
#line 1893 "write_deps_file.m"
    {
#line 1893 "write_deps_file.m"
      parse_tree__write_deps_file__ForceC2InitTarget_21 = mercury__string__f_43_43_2_f_0((MR_String) "force-", parse_tree__write_deps_file__V_67_67);
    }
#line 1894 "write_deps_file.m"
    {
#line 1894 "write_deps_file.m"
      parse_tree__write_deps_file__TmpInitCFileName_22 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__InitCFileName_15, (MR_String) ".tmp");
    }
#line 1901 "write_deps_file.m"
    {
#line 1901 "write_deps_file.m"
      parse_tree__write_deps_file__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1901 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_95_95, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
#line 1901 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])));
#line 1901 "write_deps_file.m"
    }
#line 1900 "write_deps_file.m"
    {
#line 1900 "write_deps_file.m"
      parse_tree__write_deps_file__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1900 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 0) = ((MR_Box) ((MR_String) "\t\100mercury_update_interface "));
#line 1900 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 1) = ((MR_Box) (parse_tree__write_deps_file__V_95_95));
#line 1900 "write_deps_file.m"
    }
#line 1900 "write_deps_file.m"
    {
#line 1900 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1900 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) ((MR_String) ".init_cs) \044(ALL_C2INITARGS)\n"));
#line 1900 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_93_93));
#line 1900 "write_deps_file.m"
    }
#line 1900 "write_deps_file.m"
    {
#line 1900 "write_deps_file.m"
      parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1900 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1900 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 1900 "write_deps_file.m"
    }
#line 1899 "write_deps_file.m"
    {
#line 1899 "write_deps_file.m"
      parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1899 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) " \044("));
#line 1899 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1899 "write_deps_file.m"
    }
#line 1899 "write_deps_file.m"
    {
#line 1899 "write_deps_file.m"
      parse_tree__write_deps_file__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1899 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpInitCFileName_22));
#line 1899 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1899 "write_deps_file.m"
    }
#line 1898 "write_deps_file.m"
    {
#line 1898 "write_deps_file.m"
      parse_tree__write_deps_file__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1898 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 0) = ((MR_Box) ((MR_String) "--init-c-file "));
#line 1898 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 1) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 1898 "write_deps_file.m"
    }
#line 1897 "write_deps_file.m"
    {
#line 1897 "write_deps_file.m"
      parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1897 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) ((MR_String) "\t\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) "));
#line 1897 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_85_85));
#line 1897 "write_deps_file.m"
    }
#line 1897 "write_deps_file.m"
    {
#line 1897 "write_deps_file.m"
      parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1897 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
#line 1897 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 1897 "write_deps_file.m"
    }
#line 1897 "write_deps_file.m"
    {
#line 1897 "write_deps_file.m"
      parse_tree__write_deps_file__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1897 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1897 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 1897 "write_deps_file.m"
    }
#line 1897 "write_deps_file.m"
    {
#line 1897 "write_deps_file.m"
      parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1897 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) ((MR_String) " \044("));
#line 1897 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 1897 "write_deps_file.m"
    }
#line 1897 "write_deps_file.m"
    {
#line 1897 "write_deps_file.m"
      parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1897 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
#line 1897 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 1897 "write_deps_file.m"
    }
#line 1897 "write_deps_file.m"
    {
#line 1897 "write_deps_file.m"
      parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1897 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) ((MR_String) " : "));
#line 1897 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_77_77));
#line 1897 "write_deps_file.m"
    }
#line 1896 "write_deps_file.m"
    {
#line 1896 "write_deps_file.m"
      parse_tree__write_deps_file__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1896 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
#line 1896 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 1896 "write_deps_file.m"
    }
#line 1896 "write_deps_file.m"
    {
#line 1896 "write_deps_file.m"
      parse_tree__write_deps_file__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1896 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 0) = ((MR_Box) ((MR_String) " :\n\n"));
#line 1896 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 1) = ((MR_Box) (parse_tree__write_deps_file__V_74_74));
#line 1896 "write_deps_file.m"
    }
#line 1895 "write_deps_file.m"
    {
#line 1895 "write_deps_file.m"
      parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1895 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
#line 1895 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_72_72));
#line 1895 "write_deps_file.m"
    }
#line 1895 "write_deps_file.m"
    {
#line 1895 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_70_70);
#line 1895 "write_deps_file.m"
      return;
    }
#line 1867 "write_deps_file.m"
  }
#line 1861 "write_deps_file.m"
}

#line 1623 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
#line 1623 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_19,
#line 1623 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_20,
#line 1623 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_21,
#line 1623 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_22,
#line 1623 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_23,
#line 1623 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
#line 1623 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_25,
#line 1623 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_26,
#line 1623 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
#line 1623 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
#line 1623 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
#line 1623 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
#line 1623 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
#line 1623 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__JarFileName_32,
#line 1623 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LibFileName_33,
#line 1623 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34)
#line 1623 "write_deps_file.m"
{
#line 1632 "write_deps_file.m"
  {
#line 1632 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Gmake_36;
#line 1632 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLLibsDepString_37;
#line 1632 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLObjsString_38;
#line 1632 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLPicObjsString_39;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IfIL_40;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ILMainRule_41;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IfJava2_42;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__JavaMainRule_43;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Else_44;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Else2_45;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__EndIf_46;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__EndIf2_47;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MainRule_48;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Target_49;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Rules_50;
#line 1632 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__LibTargetName_51;
#line 1632 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeSharedLibFileName_52;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__UseInstallName_53;
#line 1632 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InstallNameOpt_54;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__AllInts_55;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ILLibRule_56;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__JavaLibRule_57;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LibRule_58;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LibRules_59;
#line 1632 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ClassFiles_60;
#line 1632 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ListClassFiles_61;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_88_88;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_90_90;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_96_96;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_98_98;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_99_99;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_101_101;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_103_103;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_109_109;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_111_111;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_123_123;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_126_126;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_128_128;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_129_129;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_131_131;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_132_132;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_134_134;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_140_140;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_142_142;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_143_143;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_145_145;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_147_147;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_148_148;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_150_150;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_151_151;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_153_153;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_154_154;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_156_156;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_157_157;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_159_159;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_161_161;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_163_163;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_164_164;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_166_166;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_167_167;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_169_169;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_171_171;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_172_172;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_174_174;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_216_216;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_217_217;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_219_219;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_221_221;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_222_222;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_224_224;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_225_225;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_226_226;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_227_227;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_230_230;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_232_232;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_234_234;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_235_235;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_237_237;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_239_239;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_240_240;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_242_242;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_244_244;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_245_245;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_247_247;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_249_249;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_250_250;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_252_252;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_262_262;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_265_265;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_266_266;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_268_268;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_271_271;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_272_272;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_274_274;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_275_275;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_277_277;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_279_279;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_280_280;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_282_282;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_283_283;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_285_285;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_286_286;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_288_288;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_290_290;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_292_292;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_293_293;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_295_295;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_296_296;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_298_298;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_300_300;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_301_301;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_303_303;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_309_309;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_311_311;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_313_313;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_314_314;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_316_316;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_318_318;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_319_319;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_321_321;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_322_322;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_324_324;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_326_326;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_327_327;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_329_329;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_331_331;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_332_332;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_334_334;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_336_336;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_337_337;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_339_339;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_340_340;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_342_342;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_344_344;
#line 1632 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_349_349;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_351_351;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_353_353;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_355_355;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_357_357;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_358_358;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_360_360;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_362_362;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_363_363;
#line 1632 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_365_365;

#line 1638 "write_deps_file.m"
    {
#line 1638 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 114, &parse_tree__write_deps_file__Gmake_36);
    }
#line 1651 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Gmake_36 == (MR_Integer) 0))
#line 1652 "write_deps_file.m"
      {
#line 1653 "write_deps_file.m"
        parse_tree__write_deps_file__All_MLLibsDepString_37 = (MR_String) "\044(ALL_MLLIBS_DEP)";
#line 1654 "write_deps_file.m"
        parse_tree__write_deps_file__All_MLObjsString_38 = (MR_String) "\044(ALL_MLOBJS)";
#line 1655 "write_deps_file.m"
        parse_tree__write_deps_file__All_MLPicObjsString_39 = (MR_String) "\044(ALL_MLPICOBJS)";
#line 1652 "write_deps_file.m"
      }
#line 1651 "write_deps_file.m"
    else
#line 1640 "write_deps_file.m"
      {
#line 1640 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_65_65;
#line 1640 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_67_67;
#line 1640 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_71_71;
#line 1640 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_73_73;
#line 1640 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_77_77;
#line 1640 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_79_79;

#line 1641 "write_deps_file.m"
        {
#line 1641 "write_deps_file.m"
          parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1641 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1641 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])));
#line 1641 "write_deps_file.m"
        }
#line 1641 "write_deps_file.m"
        {
#line 1641 "write_deps_file.m"
          parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1641 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
#line 1641 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_67_67));
#line 1641 "write_deps_file.m"
        }
#line 1641 "write_deps_file.m"
        {
#line 1641 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_65_65, &parse_tree__write_deps_file__All_MLLibsDepString_37);
        }
#line 1644 "write_deps_file.m"
        {
#line 1644 "write_deps_file.m"
          parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1644 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1644 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[110])));
#line 1644 "write_deps_file.m"
        }
#line 1644 "write_deps_file.m"
        {
#line 1644 "write_deps_file.m"
          parse_tree__write_deps_file__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1644 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
#line 1644 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 1644 "write_deps_file.m"
        }
#line 1644 "write_deps_file.m"
        {
#line 1644 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_71_71, &parse_tree__write_deps_file__All_MLObjsString_38);
        }
#line 1648 "write_deps_file.m"
        {
#line 1648 "write_deps_file.m"
          parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1648 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1648 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[111])));
#line 1648 "write_deps_file.m"
        }
#line 1647 "write_deps_file.m"
        {
#line 1647 "write_deps_file.m"
          parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1647 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),\044(foreach \100,"));
#line 1647 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 1647 "write_deps_file.m"
        }
#line 1647 "write_deps_file.m"
        {
#line 1647 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_77_77, &parse_tree__write_deps_file__All_MLPicObjsString_39);
        }
#line 1640 "write_deps_file.m"
      }
#line 1669 "write_deps_file.m"
    {
#line 1669 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, parse_tree__write_deps_file__ExeFileName_31);
    }
#line 1672 "write_deps_file.m"
    parse_tree__write_deps_file__IfIL_40 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[112]);
#line 1675 "write_deps_file.m"
    {
#line 1675 "write_deps_file.m"
      parse_tree__write_deps_file__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1675 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_103_103, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1675 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[113])));
#line 1675 "write_deps_file.m"
    }
#line 1674 "write_deps_file.m"
    {
#line 1674 "write_deps_file.m"
      parse_tree__write_deps_file__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1674 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1674 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 1) = ((MR_Box) (parse_tree__write_deps_file__V_103_103));
#line 1674 "write_deps_file.m"
    }
#line 1674 "write_deps_file.m"
    {
#line 1674 "write_deps_file.m"
      parse_tree__write_deps_file__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1674 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 0) = ((MR_Box) ((MR_String) ".dlls) "));
#line 1674 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 1) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 1674 "write_deps_file.m"
    }
#line 1674 "write_deps_file.m"
    {
#line 1674 "write_deps_file.m"
      parse_tree__write_deps_file__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1674 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1674 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 1) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 1674 "write_deps_file.m"
    }
#line 1674 "write_deps_file.m"
    {
#line 1674 "write_deps_file.m"
      parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1674 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1674 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 1674 "write_deps_file.m"
    }
#line 1674 "write_deps_file.m"
    {
#line 1674 "write_deps_file.m"
      parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1674 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) ".exe : "));
#line 1674 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 1674 "write_deps_file.m"
    }
#line 1673 "write_deps_file.m"
    {
#line 1673 "write_deps_file.m"
      parse_tree__write_deps_file__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1673 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1673 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 1673 "write_deps_file.m"
    }
#line 1673 "write_deps_file.m"
    {
#line 1673 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1673 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) ((MR_String) ".exe\n"));
#line 1673 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_93_93));
#line 1673 "write_deps_file.m"
    }
#line 1673 "write_deps_file.m"
    {
#line 1673 "write_deps_file.m"
      parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1673 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1673 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 1673 "write_deps_file.m"
    }
#line 1673 "write_deps_file.m"
    {
#line 1673 "write_deps_file.m"
      parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1673 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) " : "));
#line 1673 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1673 "write_deps_file.m"
    }
#line 1673 "write_deps_file.m"
    {
#line 1673 "write_deps_file.m"
      parse_tree__write_deps_file__ILMainRule_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1673 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILMainRule_41, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1673 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILMainRule_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1673 "write_deps_file.m"
    }
#line 1676 "write_deps_file.m"
    parse_tree__write_deps_file__IfJava2_42 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[114]);
#line 1677 "write_deps_file.m"
    {
#line 1677 "write_deps_file.m"
      parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1677 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1677 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[115])));
#line 1677 "write_deps_file.m"
    }
#line 1677 "write_deps_file.m"
    {
#line 1677 "write_deps_file.m"
      parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1677 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1677 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 1677 "write_deps_file.m"
    }
#line 1677 "write_deps_file.m"
    {
#line 1677 "write_deps_file.m"
      parse_tree__write_deps_file__JavaMainRule_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1677 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_43, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1677 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_43, 1) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 1677 "write_deps_file.m"
    }
#line 1679 "write_deps_file.m"
    parse_tree__write_deps_file__Else_44 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[116]);
#line 1680 "write_deps_file.m"
    parse_tree__write_deps_file__Else2_45 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[117]);
#line 1681 "write_deps_file.m"
    parse_tree__write_deps_file__EndIf_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[10]);
#line 1682 "write_deps_file.m"
    parse_tree__write_deps_file__EndIf2_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[118]);
#line 1688 "write_deps_file.m"
    {
#line 1688 "write_deps_file.m"
      parse_tree__write_deps_file__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1688 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_134_134, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1688 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[24])));
#line 1688 "write_deps_file.m"
    }
#line 1688 "write_deps_file.m"
    {
#line 1688 "write_deps_file.m"
      parse_tree__write_deps_file__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1688 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_132_132, 0) = ((MR_Box) ((MR_String) " : "));
#line 1688 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_132_132, 1) = ((MR_Box) (parse_tree__write_deps_file__V_134_134));
#line 1688 "write_deps_file.m"
    }
#line 1687 "write_deps_file.m"
    {
#line 1687 "write_deps_file.m"
      parse_tree__write_deps_file__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1687 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1687 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 1) = ((MR_Box) (parse_tree__write_deps_file__V_132_132));
#line 1687 "write_deps_file.m"
    }
#line 1687 "write_deps_file.m"
    {
#line 1687 "write_deps_file.m"
      parse_tree__write_deps_file__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1687 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1687 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 1) = ((MR_Box) (parse_tree__write_deps_file__V_131_131));
#line 1687 "write_deps_file.m"
    }
#line 1687 "write_deps_file.m"
    {
#line 1687 "write_deps_file.m"
      parse_tree__write_deps_file__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1687 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_128_128, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1687 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_128_128, 1) = ((MR_Box) (parse_tree__write_deps_file__V_129_129));
#line 1687 "write_deps_file.m"
    }
#line 1686 "write_deps_file.m"
    {
#line 1686 "write_deps_file.m"
      parse_tree__write_deps_file__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1686 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1686 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 1) = ((MR_Box) (parse_tree__write_deps_file__V_128_128));
#line 1686 "write_deps_file.m"
    }
#line 1685 "write_deps_file.m"
    {
#line 1685 "write_deps_file.m"
      parse_tree__write_deps_file__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1685 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_123_123, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_EXE),)\n"));
#line 1685 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_123_123, 1) = ((MR_Box) (parse_tree__write_deps_file__V_126_126));
#line 1685 "write_deps_file.m"
    }
#line 1685 "write_deps_file.m"
    {
#line 1685 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_123_123);
    }
#line 1699 "write_deps_file.m"
    {
#line 1699 "write_deps_file.m"
      parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1699 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1699 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[119])));
#line 1699 "write_deps_file.m"
    }
#line 1699 "write_deps_file.m"
    {
#line 1699 "write_deps_file.m"
      parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1699 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1699 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 1699 "write_deps_file.m"
    }
#line 1699 "write_deps_file.m"
    {
#line 1699 "write_deps_file.m"
      parse_tree__write_deps_file__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1699 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1699 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 1699 "write_deps_file.m"
    }
#line 1698 "write_deps_file.m"
    {
#line 1698 "write_deps_file.m"
      parse_tree__write_deps_file__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1698 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
#line 1698 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 1) = ((MR_Box) (parse_tree__write_deps_file__V_171_171));
#line 1698 "write_deps_file.m"
    }
#line 1698 "write_deps_file.m"
    {
#line 1698 "write_deps_file.m"
      parse_tree__write_deps_file__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1698 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 0) = ((MR_Box) ((MR_String) " \\\n"));
#line 1698 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 1) = ((MR_Box) (parse_tree__write_deps_file__V_169_169));
#line 1698 "write_deps_file.m"
    }
#line 1697 "write_deps_file.m"
    {
#line 1697 "write_deps_file.m"
      parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1697 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
#line 1697 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_167_167));
#line 1697 "write_deps_file.m"
    }
#line 1697 "write_deps_file.m"
    {
#line 1697 "write_deps_file.m"
      parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1697 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
#line 1697 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 1697 "write_deps_file.m"
    }
#line 1697 "write_deps_file.m"
    {
#line 1697 "write_deps_file.m"
      parse_tree__write_deps_file__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1697 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_163_163, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1697 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_163_163, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 1697 "write_deps_file.m"
    }
#line 1696 "write_deps_file.m"
    {
#line 1696 "write_deps_file.m"
      parse_tree__write_deps_file__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 0) = ((MR_Box) ((MR_String) "\044(EXEFILE_OPT)"));
#line 1696 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 1) = ((MR_Box) (parse_tree__write_deps_file__V_163_163));
#line 1696 "write_deps_file.m"
    }
#line 1695 "write_deps_file.m"
    {
#line 1695 "write_deps_file.m"
      parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) ((MR_String) "\t\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) "));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_161_161));
#line 1695 "write_deps_file.m"
    }
#line 1695 "write_deps_file.m"
    {
#line 1695 "write_deps_file.m"
      parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 1695 "write_deps_file.m"
    }
#line 1695 "write_deps_file.m"
    {
#line 1695 "write_deps_file.m"
      parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 1695 "write_deps_file.m"
    }
#line 1695 "write_deps_file.m"
    {
#line 1695 "write_deps_file.m"
      parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) " "));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 1695 "write_deps_file.m"
    }
#line 1694 "write_deps_file.m"
    {
#line 1694 "write_deps_file.m"
      parse_tree__write_deps_file__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 1694 "write_deps_file.m"
    }
#line 1694 "write_deps_file.m"
    {
#line 1694 "write_deps_file.m"
      parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) ((MR_String) " "));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_153_153));
#line 1694 "write_deps_file.m"
    }
#line 1694 "write_deps_file.m"
    {
#line 1694 "write_deps_file.m"
      parse_tree__write_deps_file__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 1694 "write_deps_file.m"
    }
#line 1694 "write_deps_file.m"
    {
#line 1694 "write_deps_file.m"
      parse_tree__write_deps_file__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_148_148, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_148_148, 1) = ((MR_Box) (parse_tree__write_deps_file__V_150_150));
#line 1694 "write_deps_file.m"
    }
#line 1694 "write_deps_file.m"
    {
#line 1694 "write_deps_file.m"
      parse_tree__write_deps_file__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 1) = ((MR_Box) (parse_tree__write_deps_file__V_148_148));
#line 1694 "write_deps_file.m"
    }
#line 1693 "write_deps_file.m"
    {
#line 1693 "write_deps_file.m"
      parse_tree__write_deps_file__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 1) = ((MR_Box) (parse_tree__write_deps_file__V_147_147));
#line 1693 "write_deps_file.m"
    }
#line 1693 "write_deps_file.m"
    {
#line 1693 "write_deps_file.m"
      parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_145_145));
#line 1693 "write_deps_file.m"
    }
#line 1693 "write_deps_file.m"
    {
#line 1693 "write_deps_file.m"
      parse_tree__write_deps_file__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 1693 "write_deps_file.m"
    }
#line 1693 "write_deps_file.m"
    {
#line 1693 "write_deps_file.m"
      parse_tree__write_deps_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) : \044("));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 1) = ((MR_Box) (parse_tree__write_deps_file__V_142_142));
#line 1693 "write_deps_file.m"
    }
#line 1692 "write_deps_file.m"
    {
#line 1692 "write_deps_file.m"
      parse_tree__write_deps_file__MainRule_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1692 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_48, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1692 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_48, 1) = ((MR_Box) (parse_tree__write_deps_file__V_140_140));
#line 1692 "write_deps_file.m"
    }
#line 1701 "write_deps_file.m"
    {
#line 1701 "write_deps_file.m"
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_19, &parse_tree__write_deps_file__Target_49);
    }
#line 1707 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Gmake_36 == (MR_Integer) 0))
#line 1712 "write_deps_file.m"
      if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 2))
#line 1715 "write_deps_file.m"
        parse_tree__write_deps_file__Rules_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1712 "write_deps_file.m"
      else
#line 1712 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 5))
#line 1722 "write_deps_file.m"
          parse_tree__write_deps_file__Rules_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1712 "write_deps_file.m"
        else
#line 1712 "write_deps_file.m"
          if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 1))
#line 1711 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__ILMainRule_41;
#line 1712 "write_deps_file.m"
          else
#line 1712 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 3))
#line 1718 "write_deps_file.m"
              parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__JavaMainRule_43;
#line 1712 "write_deps_file.m"
            else
#line 1727 "write_deps_file.m"
              parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__MainRule_48;
#line 1707 "write_deps_file.m"
    else
#line 1703 "write_deps_file.m"
      {
#line 1703 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_369_369 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1703 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_178_178;
#line 1703 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_179_179;
#line 1703 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_180_180;
#line 1703 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_181_181;
#line 1703 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_182_182;
#line 1703 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_183_183;
#line 1703 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_184_184;

#line 1706 "write_deps_file.m"
        {
#line 1706 "write_deps_file.m"
          parse_tree__write_deps_file__V_184_184 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__EndIf2_47, parse_tree__write_deps_file__EndIf_46);
        }
#line 1705 "write_deps_file.m"
        {
#line 1705 "write_deps_file.m"
          parse_tree__write_deps_file__V_183_183 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__MainRule_48, parse_tree__write_deps_file__V_184_184);
        }
#line 1705 "write_deps_file.m"
        {
#line 1705 "write_deps_file.m"
          parse_tree__write_deps_file__V_182_182 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__Else2_45, parse_tree__write_deps_file__V_183_183);
        }
#line 1705 "write_deps_file.m"
        {
#line 1705 "write_deps_file.m"
          parse_tree__write_deps_file__V_181_181 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__JavaMainRule_43, parse_tree__write_deps_file__V_182_182);
        }
#line 1704 "write_deps_file.m"
        {
#line 1704 "write_deps_file.m"
          parse_tree__write_deps_file__V_180_180 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__IfJava2_42, parse_tree__write_deps_file__V_181_181);
        }
#line 1704 "write_deps_file.m"
        {
#line 1704 "write_deps_file.m"
          parse_tree__write_deps_file__V_179_179 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__Else_44, parse_tree__write_deps_file__V_180_180);
        }
#line 1704 "write_deps_file.m"
        {
#line 1704 "write_deps_file.m"
          parse_tree__write_deps_file__V_178_178 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__ILMainRule_41, parse_tree__write_deps_file__V_179_179);
        }
#line 1704 "write_deps_file.m"
        {
#line 1704 "write_deps_file.m"
          parse_tree__write_deps_file__Rules_50 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__IfIL_40, parse_tree__write_deps_file__V_178_178);
        }
#line 1703 "write_deps_file.m"
      }
#line 1730 "write_deps_file.m"
    {
#line 1730 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Rules_50);
    }
#line 1735 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Intermod_25 == (MR_Integer) 0))
#line 1737 "write_deps_file.m"
      *parse_tree__write_deps_file__MaybeOptsVar_28 = (MR_String) "";
#line 1735 "write_deps_file.m"
    else
#line 1733 "write_deps_file.m"
      {
#line 1733 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_187_187;

#line 1734 "write_deps_file.m"
        {
#line 1734 "write_deps_file.m"
          parse_tree__write_deps_file__V_187_187 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".opts) ");
        }
#line 1734 "write_deps_file.m"
        {
#line 1734 "write_deps_file.m"
          *parse_tree__write_deps_file__MaybeOptsVar_28 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_187_187);
        }
#line 1733 "write_deps_file.m"
      }
#line 1742 "write_deps_file.m"
    if ((parse_tree__write_deps_file__TransOpt_26 == (MR_Integer) 0))
#line 1744 "write_deps_file.m"
      *parse_tree__write_deps_file__MaybeTransOptsVar_29 = (MR_String) "";
#line 1742 "write_deps_file.m"
    else
#line 1740 "write_deps_file.m"
      {
#line 1740 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_190_190;

#line 1741 "write_deps_file.m"
        {
#line 1741 "write_deps_file.m"
          parse_tree__write_deps_file__V_190_190 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".trans_opts) ");
        }
#line 1741 "write_deps_file.m"
        {
#line 1741 "write_deps_file.m"
          *parse_tree__write_deps_file__MaybeTransOptsVar_29 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_190_190);
        }
#line 1740 "write_deps_file.m"
      }
#line 1749 "write_deps_file.m"
    if ((parse_tree__write_deps_file__MmcMakeDeps_27 == (MR_Integer) 0))
#line 1751 "write_deps_file.m"
      *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = (MR_String) "";
#line 1749 "write_deps_file.m"
    else
#line 1747 "write_deps_file.m"
      {
#line 1747 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_193_193;

#line 1748 "write_deps_file.m"
        {
#line 1748 "write_deps_file.m"
          parse_tree__write_deps_file__V_193_193 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".module_deps) ");
        }
#line 1748 "write_deps_file.m"
        {
#line 1748 "write_deps_file.m"
          *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_193_193);
        }
#line 1747 "write_deps_file.m"
      }
#line 1754 "write_deps_file.m"
    {
#line 1754 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, &parse_tree__write_deps_file__LibTargetName_51);
    }
#line 1756 "write_deps_file.m"
    {
#line 1756 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044A", (MR_Integer) 0, parse_tree__write_deps_file__LibFileName_33);
    }
#line 1758 "write_deps_file.m"
    {
#line 1758 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 0, parse_tree__write_deps_file__SharedLibFileName_34);
    }
#line 1760 "write_deps_file.m"
    {
#line 1760 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 1, &parse_tree__write_deps_file__MaybeSharedLibFileName_52);
    }
#line 1763 "write_deps_file.m"
    {
#line 1763 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) ".jar", (MR_Integer) 1, parse_tree__write_deps_file__JarFileName_32);
    }
#line 1768 "write_deps_file.m"
    {
#line 1768 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 613, &parse_tree__write_deps_file__UseInstallName_53);
    }
#line 1773 "write_deps_file.m"
    if ((parse_tree__write_deps_file__UseInstallName_53 == (MR_Integer) 0))
#line 1775 "write_deps_file.m"
      parse_tree__write_deps_file__InstallNameOpt_54 = (MR_String) "";
#line 1773 "write_deps_file.m"
    else
#line 1772 "write_deps_file.m"
      {
#line 1772 "write_deps_file.m"
        libs__file_util__get_install_name_option_3_p_0(parse_tree__write_deps_file__Globals_19, *parse_tree__write_deps_file__SharedLibFileName_34, &parse_tree__write_deps_file__InstallNameOpt_54);
      }
#line 1782 "write_deps_file.m"
    parse_tree__write_deps_file__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106]);
#line 1781 "write_deps_file.m"
    {
#line 1781 "write_deps_file.m"
      parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1781 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_23));
#line 1781 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1781 "write_deps_file.m"
    }
#line 1781 "write_deps_file.m"
    {
#line 1781 "write_deps_file.m"
      parse_tree__write_deps_file__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1781 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeTransOptsVar_29));
#line 1781 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 1781 "write_deps_file.m"
    }
#line 1780 "write_deps_file.m"
    {
#line 1780 "write_deps_file.m"
      parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1780 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeOptsVar_28));
#line 1780 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_225_225));
#line 1780 "write_deps_file.m"
    }
#line 1780 "write_deps_file.m"
    {
#line 1780 "write_deps_file.m"
      parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1780 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 1780 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 1780 "write_deps_file.m"
    }
#line 1780 "write_deps_file.m"
    {
#line 1780 "write_deps_file.m"
      parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1780 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1780 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 1780 "write_deps_file.m"
    }
#line 1779 "write_deps_file.m"
    {
#line 1779 "write_deps_file.m"
      parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1779 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1779 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 1779 "write_deps_file.m"
    }
#line 1779 "write_deps_file.m"
    {
#line 1779 "write_deps_file.m"
      parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1779 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".ints) "));
#line 1779 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_219_219));
#line 1779 "write_deps_file.m"
    }
#line 1779 "write_deps_file.m"
    {
#line 1779 "write_deps_file.m"
      parse_tree__write_deps_file__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1779 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1779 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 1) = ((MR_Box) (parse_tree__write_deps_file__V_217_217));
#line 1779 "write_deps_file.m"
    }
#line 1778 "write_deps_file.m"
    {
#line 1778 "write_deps_file.m"
      parse_tree__write_deps_file__AllInts_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1778 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_55, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1778 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_216_216));
#line 1778 "write_deps_file.m"
    }
#line 1786 "write_deps_file.m"
    {
#line 1786 "write_deps_file.m"
      parse_tree__write_deps_file__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1786 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 0) = ((MR_Box) ((MR_String) ".foreign_dlls) \\\n\t\t"));
#line 1786 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 1) = ((MR_Box) (parse_tree__write_deps_file__AllInts_55));
#line 1786 "write_deps_file.m"
    }
#line 1786 "write_deps_file.m"
    {
#line 1786 "write_deps_file.m"
      parse_tree__write_deps_file__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1786 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1786 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 1) = ((MR_Box) (parse_tree__write_deps_file__V_240_240));
#line 1786 "write_deps_file.m"
    }
#line 1785 "write_deps_file.m"
    {
#line 1785 "write_deps_file.m"
      parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1785 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1785 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_239_239));
#line 1785 "write_deps_file.m"
    }
#line 1785 "write_deps_file.m"
    {
#line 1785 "write_deps_file.m"
      parse_tree__write_deps_file__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1785 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 0) = ((MR_Box) ((MR_String) ".dlls) "));
#line 1785 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 1785 "write_deps_file.m"
    }
#line 1785 "write_deps_file.m"
    {
#line 1785 "write_deps_file.m"
      parse_tree__write_deps_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1785 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1785 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 1) = ((MR_Box) (parse_tree__write_deps_file__V_235_235));
#line 1785 "write_deps_file.m"
    }
#line 1785 "write_deps_file.m"
    {
#line 1785 "write_deps_file.m"
      parse_tree__write_deps_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1785 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1785 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 1) = ((MR_Box) (parse_tree__write_deps_file__V_234_234));
#line 1785 "write_deps_file.m"
    }
#line 1785 "write_deps_file.m"
    {
#line 1785 "write_deps_file.m"
      parse_tree__write_deps_file__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1785 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 0) = ((MR_Box) ((MR_String) " : "));
#line 1785 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 1) = ((MR_Box) (parse_tree__write_deps_file__V_232_232));
#line 1785 "write_deps_file.m"
    }
#line 1784 "write_deps_file.m"
    {
#line 1784 "write_deps_file.m"
      parse_tree__write_deps_file__ILLibRule_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1784 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILLibRule_56, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1784 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILLibRule_56, 1) = ((MR_Box) (parse_tree__write_deps_file__V_230_230));
#line 1784 "write_deps_file.m"
    }
#line 1790 "write_deps_file.m"
    {
#line 1790 "write_deps_file.m"
      parse_tree__write_deps_file__V_245_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1790 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 0) = ((MR_Box) ((MR_String) " \\\n\t\t"));
#line 1790 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 1) = ((MR_Box) (parse_tree__write_deps_file__AllInts_55));
#line 1790 "write_deps_file.m"
    }
#line 1790 "write_deps_file.m"
    {
#line 1790 "write_deps_file.m"
      parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1790 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1790 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_245_245));
#line 1790 "write_deps_file.m"
    }
#line 1790 "write_deps_file.m"
    {
#line 1790 "write_deps_file.m"
      parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1790 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) " : "));
#line 1790 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 1790 "write_deps_file.m"
    }
#line 1789 "write_deps_file.m"
    {
#line 1789 "write_deps_file.m"
      parse_tree__write_deps_file__JavaLibRule_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1789 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_57, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1789 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 1789 "write_deps_file.m"
    }
#line 1794 "write_deps_file.m"
    {
#line 1794 "write_deps_file.m"
      parse_tree__write_deps_file__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1794 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSharedLibFileName_52));
#line 1794 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 1) = ((MR_Box) (parse_tree__write_deps_file__V_245_245));
#line 1794 "write_deps_file.m"
    }
#line 1794 "write_deps_file.m"
    {
#line 1794 "write_deps_file.m"
      parse_tree__write_deps_file__V_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1794 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 0) = ((MR_Box) ((MR_String) " "));
#line 1794 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 1) = ((MR_Box) (parse_tree__write_deps_file__V_252_252));
#line 1794 "write_deps_file.m"
    }
#line 1794 "write_deps_file.m"
    {
#line 1794 "write_deps_file.m"
      parse_tree__write_deps_file__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1794 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1794 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 1) = ((MR_Box) (parse_tree__write_deps_file__V_250_250));
#line 1794 "write_deps_file.m"
    }
#line 1794 "write_deps_file.m"
    {
#line 1794 "write_deps_file.m"
      parse_tree__write_deps_file__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1794 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 0) = ((MR_Box) ((MR_String) " : "));
#line 1794 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 1) = ((MR_Box) (parse_tree__write_deps_file__V_249_249));
#line 1794 "write_deps_file.m"
    }
#line 1793 "write_deps_file.m"
    {
#line 1793 "write_deps_file.m"
      parse_tree__write_deps_file__LibRule_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1793 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_58, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1793 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_247_247));
#line 1793 "write_deps_file.m"
    }
#line 1803 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Gmake_36 == (MR_Integer) 0))
#line 1808 "write_deps_file.m"
      if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 2))
#line 1811 "write_deps_file.m"
        parse_tree__write_deps_file__LibRules_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1808 "write_deps_file.m"
      else
#line 1808 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 5))
#line 1818 "write_deps_file.m"
          parse_tree__write_deps_file__LibRules_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1808 "write_deps_file.m"
        else
#line 1808 "write_deps_file.m"
          if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 1))
#line 1807 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__ILLibRule_56;
#line 1808 "write_deps_file.m"
          else
#line 1808 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 3))
#line 1814 "write_deps_file.m"
              parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__JavaLibRule_57;
#line 1808 "write_deps_file.m"
            else
#line 1823 "write_deps_file.m"
              parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__LibRule_58;
#line 1803 "write_deps_file.m"
    else
#line 1799 "write_deps_file.m"
      {
#line 1799 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_370_370 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1799 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_255_255;
#line 1799 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_256_256;
#line 1799 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_257_257;
#line 1799 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_258_258;
#line 1799 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_259_259;
#line 1799 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_260_260;
#line 1799 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_261_261;

#line 1802 "write_deps_file.m"
        {
#line 1802 "write_deps_file.m"
          parse_tree__write_deps_file__V_261_261 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__EndIf2_47, parse_tree__write_deps_file__EndIf_46);
        }
#line 1801 "write_deps_file.m"
        {
#line 1801 "write_deps_file.m"
          parse_tree__write_deps_file__V_260_260 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__LibRule_58, parse_tree__write_deps_file__V_261_261);
        }
#line 1801 "write_deps_file.m"
        {
#line 1801 "write_deps_file.m"
          parse_tree__write_deps_file__V_259_259 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__Else2_45, parse_tree__write_deps_file__V_260_260);
        }
#line 1801 "write_deps_file.m"
        {
#line 1801 "write_deps_file.m"
          parse_tree__write_deps_file__V_258_258 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__JavaLibRule_57, parse_tree__write_deps_file__V_259_259);
        }
#line 1800 "write_deps_file.m"
        {
#line 1800 "write_deps_file.m"
          parse_tree__write_deps_file__V_257_257 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__IfJava2_42, parse_tree__write_deps_file__V_258_258);
        }
#line 1800 "write_deps_file.m"
        {
#line 1800 "write_deps_file.m"
          parse_tree__write_deps_file__V_256_256 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__Else_44, parse_tree__write_deps_file__V_257_257);
        }
#line 1800 "write_deps_file.m"
        {
#line 1800 "write_deps_file.m"
          parse_tree__write_deps_file__V_255_255 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__ILLibRule_56, parse_tree__write_deps_file__V_256_256);
        }
#line 1800 "write_deps_file.m"
        {
#line 1800 "write_deps_file.m"
          parse_tree__write_deps_file__LibRules_59 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__IfIL_40, parse_tree__write_deps_file__V_255_255);
        }
#line 1799 "write_deps_file.m"
      }
#line 1827 "write_deps_file.m"
    {
#line 1827 "write_deps_file.m"
      parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__LibRules_59));
#line 1827 "write_deps_file.m"
    }
#line 1827 "write_deps_file.m"
    {
#line 1827 "write_deps_file.m"
      parse_tree__write_deps_file__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 1827 "write_deps_file.m"
    }
#line 1826 "write_deps_file.m"
    {
#line 1826 "write_deps_file.m"
      parse_tree__write_deps_file__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 1) = ((MR_Box) (parse_tree__write_deps_file__V_265_265));
#line 1826 "write_deps_file.m"
    }
#line 1826 "write_deps_file.m"
    {
#line 1826 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_262_262);
    }
#line 1839 "write_deps_file.m"
    {
#line 1839 "write_deps_file.m"
      parse_tree__write_deps_file__V_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_303_303, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_303_303, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])));
#line 1839 "write_deps_file.m"
    }
#line 1839 "write_deps_file.m"
    {
#line 1839 "write_deps_file.m"
      parse_tree__write_deps_file__V_301_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 1) = ((MR_Box) (parse_tree__write_deps_file__V_303_303));
#line 1839 "write_deps_file.m"
    }
#line 1839 "write_deps_file.m"
    {
#line 1839 "write_deps_file.m"
      parse_tree__write_deps_file__V_300_300 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_300_300, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_300_300, 1) = ((MR_Box) (parse_tree__write_deps_file__V_301_301));
#line 1839 "write_deps_file.m"
    }
#line 1838 "write_deps_file.m"
    {
#line 1838 "write_deps_file.m"
      parse_tree__write_deps_file__V_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1838 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_298_298, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
#line 1838 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_298_298, 1) = ((MR_Box) (parse_tree__write_deps_file__V_300_300));
#line 1838 "write_deps_file.m"
    }
#line 1838 "write_deps_file.m"
    {
#line 1838 "write_deps_file.m"
      parse_tree__write_deps_file__V_296_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1838 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_296_296, 0) = ((MR_Box) ((MR_String) " \\\n"));
#line 1838 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_296_296, 1) = ((MR_Box) (parse_tree__write_deps_file__V_298_298));
#line 1838 "write_deps_file.m"
    }
#line 1837 "write_deps_file.m"
    {
#line 1837 "write_deps_file.m"
      parse_tree__write_deps_file__V_295_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1837 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_295_295, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
#line 1837 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_295_295, 1) = ((MR_Box) (parse_tree__write_deps_file__V_296_296));
#line 1837 "write_deps_file.m"
    }
#line 1837 "write_deps_file.m"
    {
#line 1837 "write_deps_file.m"
      parse_tree__write_deps_file__V_293_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1837 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_293_293, 0) = ((MR_Box) ((MR_String) " \044(ALL_LD_LIBFLAGS) -o "));
#line 1837 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_293_293, 1) = ((MR_Box) (parse_tree__write_deps_file__V_295_295));
#line 1837 "write_deps_file.m"
    }
#line 1837 "write_deps_file.m"
    {
#line 1837 "write_deps_file.m"
      parse_tree__write_deps_file__V_292_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1837 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 0) = ((MR_Box) (parse_tree__write_deps_file__InstallNameOpt_54));
#line 1837 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 1) = ((MR_Box) (parse_tree__write_deps_file__V_293_293));
#line 1837 "write_deps_file.m"
    }
#line 1836 "write_deps_file.m"
    {
#line 1836 "write_deps_file.m"
      parse_tree__write_deps_file__V_290_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1836 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 0) = ((MR_Box) ((MR_String) "-- "));
#line 1836 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 1) = ((MR_Box) (parse_tree__write_deps_file__V_292_292));
#line 1836 "write_deps_file.m"
    }
#line 1835 "write_deps_file.m"
    {
#line 1835 "write_deps_file.m"
      parse_tree__write_deps_file__V_288_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_288_288, 0) = ((MR_Box) ((MR_String) "\t\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) "));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_288_288, 1) = ((MR_Box) (parse_tree__write_deps_file__V_290_290));
#line 1835 "write_deps_file.m"
    }
#line 1835 "write_deps_file.m"
    {
#line 1835 "write_deps_file.m"
      parse_tree__write_deps_file__V_286_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 1) = ((MR_Box) (parse_tree__write_deps_file__V_288_288));
#line 1835 "write_deps_file.m"
    }
#line 1835 "write_deps_file.m"
    {
#line 1835 "write_deps_file.m"
      parse_tree__write_deps_file__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 1) = ((MR_Box) (parse_tree__write_deps_file__V_286_286));
#line 1835 "write_deps_file.m"
    }
#line 1835 "write_deps_file.m"
    {
#line 1835 "write_deps_file.m"
      parse_tree__write_deps_file__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 0) = ((MR_Box) ((MR_String) " "));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 1) = ((MR_Box) (parse_tree__write_deps_file__V_285_285));
#line 1835 "write_deps_file.m"
    }
#line 1834 "write_deps_file.m"
    {
#line 1834 "write_deps_file.m"
      parse_tree__write_deps_file__V_282_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1834 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
#line 1834 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 1) = ((MR_Box) (parse_tree__write_deps_file__V_283_283));
#line 1834 "write_deps_file.m"
    }
#line 1834 "write_deps_file.m"
    {
#line 1834 "write_deps_file.m"
      parse_tree__write_deps_file__V_280_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1834 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
#line 1834 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 1) = ((MR_Box) (parse_tree__write_deps_file__V_282_282));
#line 1834 "write_deps_file.m"
    }
#line 1834 "write_deps_file.m"
    {
#line 1834 "write_deps_file.m"
      parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1834 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1834 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_280_280));
#line 1834 "write_deps_file.m"
    }
#line 1833 "write_deps_file.m"
    {
#line 1833 "write_deps_file.m"
      parse_tree__write_deps_file__V_277_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1833 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1833 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 1833 "write_deps_file.m"
    }
#line 1833 "write_deps_file.m"
    {
#line 1833 "write_deps_file.m"
      parse_tree__write_deps_file__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1833 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1833 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 1) = ((MR_Box) (parse_tree__write_deps_file__V_277_277));
#line 1833 "write_deps_file.m"
    }
#line 1833 "write_deps_file.m"
    {
#line 1833 "write_deps_file.m"
      parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1833 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1833 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (parse_tree__write_deps_file__V_275_275));
#line 1833 "write_deps_file.m"
    }
#line 1833 "write_deps_file.m"
    {
#line 1833 "write_deps_file.m"
      parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1833 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1833 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_274_274));
#line 1833 "write_deps_file.m"
    }
#line 1832 "write_deps_file.m"
    {
#line 1832 "write_deps_file.m"
      parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1832 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
#line 1832 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 1832 "write_deps_file.m"
    }
#line 1831 "write_deps_file.m"
    {
#line 1831 "write_deps_file.m"
      parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1831 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_SHARED_LIB),\044A)\n"));
#line 1831 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 1831 "write_deps_file.m"
    }
#line 1831 "write_deps_file.m"
    {
#line 1831 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_268_268);
    }
#line 1850 "write_deps_file.m"
    {
#line 1850 "write_deps_file.m"
      parse_tree__write_deps_file__V_344_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1850 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1850 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1850 "write_deps_file.m"
    }
#line 1849 "write_deps_file.m"
    {
#line 1849 "write_deps_file.m"
      parse_tree__write_deps_file__V_342_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 0) = ((MR_Box) ((MR_String) "\t\044(RANLIB) \044(ALL_RANLIBFLAGS) "));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 1) = ((MR_Box) (parse_tree__write_deps_file__V_344_344));
#line 1849 "write_deps_file.m"
    }
#line 1849 "write_deps_file.m"
    {
#line 1849 "write_deps_file.m"
      parse_tree__write_deps_file__V_340_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 1) = ((MR_Box) (parse_tree__write_deps_file__V_342_342));
#line 1849 "write_deps_file.m"
    }
#line 1849 "write_deps_file.m"
    {
#line 1849 "write_deps_file.m"
      parse_tree__write_deps_file__V_339_339 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 1) = ((MR_Box) (parse_tree__write_deps_file__V_340_340));
#line 1849 "write_deps_file.m"
    }
#line 1849 "write_deps_file.m"
    {
#line 1849 "write_deps_file.m"
      parse_tree__write_deps_file__V_337_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 1) = ((MR_Box) (parse_tree__write_deps_file__V_339_339));
#line 1849 "write_deps_file.m"
    }
#line 1849 "write_deps_file.m"
    {
#line 1849 "write_deps_file.m"
      parse_tree__write_deps_file__V_336_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 1) = ((MR_Box) (parse_tree__write_deps_file__V_337_337));
#line 1849 "write_deps_file.m"
    }
#line 1848 "write_deps_file.m"
    {
#line 1848 "write_deps_file.m"
      parse_tree__write_deps_file__V_334_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1848 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 1) = ((MR_Box) (parse_tree__write_deps_file__V_336_336));
#line 1848 "write_deps_file.m"
    }
#line 1848 "write_deps_file.m"
    {
#line 1848 "write_deps_file.m"
      parse_tree__write_deps_file__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 0) = ((MR_Box) ((MR_String) " "));
#line 1848 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 1) = ((MR_Box) (parse_tree__write_deps_file__V_334_334));
#line 1848 "write_deps_file.m"
    }
#line 1848 "write_deps_file.m"
    {
#line 1848 "write_deps_file.m"
      parse_tree__write_deps_file__V_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1848 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 1) = ((MR_Box) (parse_tree__write_deps_file__V_332_332));
#line 1848 "write_deps_file.m"
    }
#line 1847 "write_deps_file.m"
    {
#line 1847 "write_deps_file.m"
      parse_tree__write_deps_file__V_329_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1847 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 0) = ((MR_Box) ((MR_String) "\t\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)"));
#line 1847 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 1) = ((MR_Box) (parse_tree__write_deps_file__V_331_331));
#line 1847 "write_deps_file.m"
    }
#line 1847 "write_deps_file.m"
    {
#line 1847 "write_deps_file.m"
      parse_tree__write_deps_file__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1847 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1847 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 1) = ((MR_Box) (parse_tree__write_deps_file__V_329_329));
#line 1847 "write_deps_file.m"
    }
#line 1847 "write_deps_file.m"
    {
#line 1847 "write_deps_file.m"
      parse_tree__write_deps_file__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1847 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1847 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 1) = ((MR_Box) (parse_tree__write_deps_file__V_327_327));
#line 1847 "write_deps_file.m"
    }
#line 1846 "write_deps_file.m"
    {
#line 1846 "write_deps_file.m"
      parse_tree__write_deps_file__V_324_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_324_324, 0) = ((MR_Box) ((MR_String) "\trm -f "));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_324_324, 1) = ((MR_Box) (parse_tree__write_deps_file__V_326_326));
#line 1846 "write_deps_file.m"
    }
#line 1846 "write_deps_file.m"
    {
#line 1846 "write_deps_file.m"
      parse_tree__write_deps_file__V_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 1) = ((MR_Box) (parse_tree__write_deps_file__V_324_324));
#line 1846 "write_deps_file.m"
    }
#line 1846 "write_deps_file.m"
    {
#line 1846 "write_deps_file.m"
      parse_tree__write_deps_file__V_321_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_321_321, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_321_321, 1) = ((MR_Box) (parse_tree__write_deps_file__V_322_322));
#line 1846 "write_deps_file.m"
    }
#line 1846 "write_deps_file.m"
    {
#line 1846 "write_deps_file.m"
      parse_tree__write_deps_file__V_319_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_319_319, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_319_319, 1) = ((MR_Box) (parse_tree__write_deps_file__V_321_321));
#line 1846 "write_deps_file.m"
    }
#line 1846 "write_deps_file.m"
    {
#line 1846 "write_deps_file.m"
      parse_tree__write_deps_file__V_318_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_318_318, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_318_318, 1) = ((MR_Box) (parse_tree__write_deps_file__V_319_319));
#line 1846 "write_deps_file.m"
    }
#line 1845 "write_deps_file.m"
    {
#line 1845 "write_deps_file.m"
      parse_tree__write_deps_file__V_316_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1845 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_316_316, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1845 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_316_316, 1) = ((MR_Box) (parse_tree__write_deps_file__V_318_318));
#line 1845 "write_deps_file.m"
    }
#line 1845 "write_deps_file.m"
    {
#line 1845 "write_deps_file.m"
      parse_tree__write_deps_file__V_314_314 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1845 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_314_314, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1845 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_314_314, 1) = ((MR_Box) (parse_tree__write_deps_file__V_316_316));
#line 1845 "write_deps_file.m"
    }
#line 1845 "write_deps_file.m"
    {
#line 1845 "write_deps_file.m"
      parse_tree__write_deps_file__V_313_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1845 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1845 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 1) = ((MR_Box) (parse_tree__write_deps_file__V_314_314));
#line 1845 "write_deps_file.m"
    }
#line 1845 "write_deps_file.m"
    {
#line 1845 "write_deps_file.m"
      parse_tree__write_deps_file__V_311_311 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1845 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_311_311, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1845 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_311_311, 1) = ((MR_Box) (parse_tree__write_deps_file__V_313_313));
#line 1845 "write_deps_file.m"
    }
#line 1844 "write_deps_file.m"
    {
#line 1844 "write_deps_file.m"
      parse_tree__write_deps_file__V_309_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1844 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_309_309, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1844 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_309_309, 1) = ((MR_Box) (parse_tree__write_deps_file__V_311_311));
#line 1844 "write_deps_file.m"
    }
#line 1844 "write_deps_file.m"
    {
#line 1844 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_309_309);
    }
#line 1853 "write_deps_file.m"
    {
#line 1853 "write_deps_file.m"
      parse_tree__write_deps_file__V_349_349 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".classes)");
    }
#line 1853 "write_deps_file.m"
    {
#line 1853 "write_deps_file.m"
      parse_tree__write_deps_file__ClassFiles_60 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_349_349);
    }
#line 1854 "write_deps_file.m"
    {
#line 1854 "write_deps_file.m"
      parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ClassFiles_60, &parse_tree__write_deps_file__ListClassFiles_61);
    }
#line 1857 "write_deps_file.m"
    {
#line 1857 "write_deps_file.m"
      parse_tree__write_deps_file__V_365_365 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1857 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 0) = ((MR_Box) (parse_tree__write_deps_file__ListClassFiles_61));
#line 1857 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1857 "write_deps_file.m"
    }
#line 1857 "write_deps_file.m"
    {
#line 1857 "write_deps_file.m"
      parse_tree__write_deps_file__V_363_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1857 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 0) = ((MR_Box) ((MR_String) " "));
#line 1857 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 1) = ((MR_Box) (parse_tree__write_deps_file__V_365_365));
#line 1857 "write_deps_file.m"
    }
#line 1857 "write_deps_file.m"
    {
#line 1857 "write_deps_file.m"
      parse_tree__write_deps_file__V_362_362 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1857 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_362_362, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1857 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_362_362, 1) = ((MR_Box) (parse_tree__write_deps_file__V_363_363));
#line 1857 "write_deps_file.m"
    }
#line 1856 "write_deps_file.m"
    {
#line 1856 "write_deps_file.m"
      parse_tree__write_deps_file__V_360_360 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1856 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 0) = ((MR_Box) ((MR_String) "\t\044(JAR) \044(JAR_CREATE_FLAGS) "));
#line 1856 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 1) = ((MR_Box) (parse_tree__write_deps_file__V_362_362));
#line 1856 "write_deps_file.m"
    }
#line 1856 "write_deps_file.m"
    {
#line 1856 "write_deps_file.m"
      parse_tree__write_deps_file__V_358_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1856 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 0) = ((MR_Box) ((MR_String) ".classes)\n"));
#line 1856 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 1) = ((MR_Box) (parse_tree__write_deps_file__V_360_360));
#line 1856 "write_deps_file.m"
    }
#line 1856 "write_deps_file.m"
    {
#line 1856 "write_deps_file.m"
      parse_tree__write_deps_file__V_357_357 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1856 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1856 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 1) = ((MR_Box) (parse_tree__write_deps_file__V_358_358));
#line 1856 "write_deps_file.m"
    }
#line 1856 "write_deps_file.m"
    {
#line 1856 "write_deps_file.m"
      parse_tree__write_deps_file__V_355_355 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1856 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1856 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 1) = ((MR_Box) (parse_tree__write_deps_file__V_357_357));
#line 1856 "write_deps_file.m"
    }
#line 1856 "write_deps_file.m"
    {
#line 1856 "write_deps_file.m"
      parse_tree__write_deps_file__V_353_353 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1856 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_353_353, 0) = ((MR_Box) ((MR_String) " : "));
#line 1856 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_353_353, 1) = ((MR_Box) (parse_tree__write_deps_file__V_355_355));
#line 1856 "write_deps_file.m"
    }
#line 1855 "write_deps_file.m"
    {
#line 1855 "write_deps_file.m"
      parse_tree__write_deps_file__V_351_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 1) = ((MR_Box) (parse_tree__write_deps_file__V_353_353));
#line 1855 "write_deps_file.m"
    }
#line 1855 "write_deps_file.m"
    {
#line 1855 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_351_351);
#line 1855 "write_deps_file.m"
      return;
    }
#line 1632 "write_deps_file.m"
  }
#line 1623 "write_deps_file.m"
}

#line 1567 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
#line 1567 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1567 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1567 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1567 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1567 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12)
#line 1567 "write_deps_file.m"
{
#line 1571 "write_deps_file.m"
  {
#line 1571 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Version_15;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_16;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitFileName_17;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitCFileName_18;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitObjFileName_19;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitPicObjFileName_20;
#line 1571 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Intermod_21;
#line 1571 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TransOpt_22;
#line 1571 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MmcMakeDeps_23;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeOptsVar_24;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeTransOptsVar_25;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_26;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ExeFileName_27;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__JarFileName_28;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__LibFileName_29;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SharedLibFileName_30;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DepFileName_31;
#line 1571 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DvFileName_32;

#line 1572 "write_deps_file.m"
    {
#line 1572 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependencies for module \140");
    }
#line 1574 "write_deps_file.m"
    {
#line 1574 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
#line 1575 "write_deps_file.m"
    {
#line 1575 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
#line 1576 "write_deps_file.m"
    {
#line 1576 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1577 "write_deps_file.m"
    {
#line 1577 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
#line 1579 "write_deps_file.m"
    {
#line 1579 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
#line 1580 "write_deps_file.m"
    {
#line 1580 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1582 "write_deps_file.m"
    {
#line 1582 "write_deps_file.m"
      mercury__library__version_1_p_0(&parse_tree__write_deps_file__Version_15);
    }
#line 1583 "write_deps_file.m"
    {
#line 1583 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
#line 1585 "write_deps_file.m"
    {
#line 1585 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
#line 1586 "write_deps_file.m"
    {
#line 1586 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
#line 1588 "write_deps_file.m"
    {
#line 1588 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_16);
    }
#line 1590 "write_deps_file.m"
    {
#line 1590 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) ".init", (MR_Integer) 0, &parse_tree__write_deps_file__InitFileName_17);
    }
#line 1592 "write_deps_file.m"
    {
#line 1592 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.c", (MR_Integer) 0, &parse_tree__write_deps_file__InitCFileName_18);
    }
#line 1594 "write_deps_file.m"
    {
#line 1594 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.\044O", (MR_Integer) 0, &parse_tree__write_deps_file__InitObjFileName_19);
    }
#line 1596 "write_deps_file.m"
    {
#line 1596 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.pic_o", (MR_Integer) 0, &parse_tree__write_deps_file__InitPicObjFileName_20);
    }
#line 1599 "write_deps_file.m"
    {
#line 1599 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 325, &parse_tree__write_deps_file__Intermod_21);
    }
#line 1600 "write_deps_file.m"
    {
#line 1600 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 329, &parse_tree__write_deps_file__TransOpt_22);
    }
#line 1601 "write_deps_file.m"
    {
#line 1601 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 113, &parse_tree__write_deps_file__MmcMakeDeps_23);
    }
#line 1604 "write_deps_file.m"
    {
#line 1604 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_16, parse_tree__write_deps_file__InitFileName_17, parse_tree__write_deps_file__InitObjFileName_19, parse_tree__write_deps_file__Intermod_21, parse_tree__write_deps_file__TransOpt_22, parse_tree__write_deps_file__MmcMakeDeps_23, &parse_tree__write_deps_file__MaybeOptsVar_24, &parse_tree__write_deps_file__MaybeTransOptsVar_25, &parse_tree__write_deps_file__MaybeModuleDepsVar_26, &parse_tree__write_deps_file__ExeFileName_27, &parse_tree__write_deps_file__JarFileName_28, &parse_tree__write_deps_file__LibFileName_29, &parse_tree__write_deps_file__SharedLibFileName_30);
    }
#line 1609 "write_deps_file.m"
    {
#line 1609 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_16, parse_tree__write_deps_file__InitCFileName_18, parse_tree__write_deps_file__InitFileName_17, &parse_tree__write_deps_file__DepFileName_31, &parse_tree__write_deps_file__DvFileName_32);
    }
#line 1612 "write_deps_file.m"
    {
#line 1612 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__DepsMap_11, parse_tree__write_deps_file__MakeVarName_16, parse_tree__write_deps_file__MmcMakeDeps_23, parse_tree__write_deps_file__Intermod_21, parse_tree__write_deps_file__TransOpt_22, parse_tree__write_deps_file__MaybeModuleDepsVar_26, parse_tree__write_deps_file__MaybeOptsVar_24, parse_tree__write_deps_file__MaybeTransOptsVar_25);
    }
#line 1615 "write_deps_file.m"
    {
#line 1615 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_16);
    }
#line 1617 "write_deps_file.m"
    {
#line 1617 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_16, parse_tree__write_deps_file__ExeFileName_27, parse_tree__write_deps_file__InitCFileName_18, parse_tree__write_deps_file__InitObjFileName_19, parse_tree__write_deps_file__InitPicObjFileName_20, parse_tree__write_deps_file__InitFileName_17, parse_tree__write_deps_file__LibFileName_29, parse_tree__write_deps_file__SharedLibFileName_30, parse_tree__write_deps_file__JarFileName_28, parse_tree__write_deps_file__DepFileName_31, parse_tree__write_deps_file__DvFileName_32);
#line 1617 "write_deps_file.m"
      return;
    }
#line 1571 "write_deps_file.m"
  }
#line 1567 "write_deps_file.m"
}

#line 1505 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0_1(
#line 1505 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1505 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1505 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1505 "write_deps_file.m"
{
#line 1505 "write_deps_file.m"
  {
#line 1505 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1505 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1505 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__3_16;

#line 1505 "write_deps_file.m"
    {
#line 1505 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1505__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv0_HeadVar__3_16);
    }
#line 1505 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1505 "write_deps_file.m"
      {
#line 1505 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__3_16));
#line 1505 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1505 "write_deps_file.m"
      }
#line 1505 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1505 "write_deps_file.m"
  }
#line 1505 "write_deps_file.m"
}

#line 1501 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0(
#line 1501 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_4,
#line 1501 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5)
#line 1501 "write_deps_file.m"
{
#line 1504 "write_deps_file.m"
  {
#line 1504 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1504 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModules_6;
#line 1504 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__P_7;
#line 1504 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModulesList_14;

#line 1505 "write_deps_file.m"
    {
#line 1505 "write_deps_file.m"
      parse_tree__write_deps_file__P_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1505 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[4]));
#line 1505 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 1) = ((MR_Box) (parse_tree__write_deps_file__foreign_modules_2_f_0_1));
#line 1505 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1505 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_5));
#line 1505 "write_deps_file.m"
    }
#line 1513 "write_deps_file.m"
    {
#line 1513 "write_deps_file.m"
      mercury__list__filter_map_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[1], parse_tree__write_deps_file__P_7, parse_tree__write_deps_file__Modules_4, &parse_tree__write_deps_file__ForeignModulesList_14);
    }
#line 1514 "write_deps_file.m"
    {
#line 1514 "write_deps_file.m"
      parse_tree__write_deps_file__ForeignModules_6 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[0], parse_tree__write_deps_file__ForeignModulesList_14);
    }
#line 1504 "write_deps_file.m"
    return parse_tree__write_deps_file__ForeignModules_6;
#line 1504 "write_deps_file.m"
  }
#line 1501 "write_deps_file.m"
}

#line 1478 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
#line 1478 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1478 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_2,
#line 1478 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3)
#line 1478 "write_deps_file.m"
{
#line 1481 "write_deps_file.m"
  {
#line 1481 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 1481 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1481 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1481 "write_deps_file.m"
    else
#line 1482 "write_deps_file.m"
      {
#line 1482 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1482 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Modules0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1482 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ModulesTail_9;
#line 1482 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ModuleImports_11;
#line 1482 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Error_14;
#line 1482 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_15_15;
#line 1484 "write_deps_file.m"
        MR_Box parse_tree__write_deps_file__conv0_V_15_15;
#line 1484 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_10_10;
#line 1485 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file___Items_12;
#line 1485 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file___Specs_13;

#line 1483 "write_deps_file.m"
        {
#line 1483 "write_deps_file.m"
          parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_6, parse_tree__write_deps_file__DepsMap_2, &parse_tree__write_deps_file__ModulesTail_9);
        }
#line 1484 "write_deps_file.m"
        {
#line 1484 "write_deps_file.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_2, ((MR_Box) (parse_tree__write_deps_file__Module_5)), &parse_tree__write_deps_file__conv0_V_15_15);
        }
#line 1484 "write_deps_file.m"
        parse_tree__write_deps_file__V_15_15 = ((MR_Word) parse_tree__write_deps_file__conv0_V_15_15);
#line 1484 "write_deps_file.m"
        parse_tree__write_deps_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_15_15, (MR_Integer) 0)));
#line 1484 "write_deps_file.m"
        parse_tree__write_deps_file__ModuleImports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_15_15, (MR_Integer) 1)));
#line 1485 "write_deps_file.m"
        {
#line 1485 "write_deps_file.m"
          parse_tree__module_imports__module_and_imports_get_results_4_p_0(parse_tree__write_deps_file__ModuleImports_11, &parse_tree__write_deps_file___Items_12, &parse_tree__write_deps_file___Specs_13, &parse_tree__write_deps_file__Error_14);
        }
#line 1489 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Error_14 == (MR_Integer) 2))
#line 1488 "write_deps_file.m"
          *parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__ModulesTail_9;
#line 1489 "write_deps_file.m"
        else
#line 1493 "write_deps_file.m"
          {
#line 1493 "write_deps_file.m"
            MR_Word base;
#line 1493 "write_deps_file.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "write_deps_file.m"
            *parse_tree__write_deps_file__HeadVar__3_3 = base;
#line 1493 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Module_5));
#line 1493 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__ModulesTail_9));
#line 1493 "write_deps_file.m"
          }
#line 1482 "write_deps_file.m"
      }
#line 1481 "write_deps_file.m"
  }
#line 1478 "write_deps_file.m"
}

#line 1147 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
#line 1147 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1147 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1147 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
#line 1147 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
#line 1147 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
#line 1147 "write_deps_file.m"
{
#line 1147 "write_deps_file.m"
  {
#line 1147 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1147 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__conv2_HeadVar__3_116;

#line 1147 "write_deps_file.m"
    {
#line 1147 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1147__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv2_HeadVar__3_116);
    }
#line 1147 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__3_116));
#line 1147 "write_deps_file.m"
  }
#line 1147 "write_deps_file.m"
}

#line 1097 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
#line 1097 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1097 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1097 "write_deps_file.m"
{
#line 1097 "write_deps_file.m"
  {
#line 1097 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1097 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 1097 "write_deps_file.m"
    {
#line 1097 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1097__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1097 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1097 "write_deps_file.m"
  }
#line 1097 "write_deps_file.m"
}

#line 1078 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
#line 1078 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1078 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1078 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1078 "write_deps_file.m"
{
#line 1078 "write_deps_file.m"
  {
#line 1078 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1078 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__conv1_FileName_6;

#line 1078 "write_deps_file.m"
    {
#line 1078 "write_deps_file.m"
      parse_tree__write_deps_file__get_source_file_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_FileName_6);
    }
#line 1078 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_FileName_6));
#line 1078 "write_deps_file.m"
  }
#line 1078 "write_deps_file.m"
}

#line 1075 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
#line 1075 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1075 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1075 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1075 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 1075 "write_deps_file.m"
{
#line 1075 "write_deps_file.m"
  {
#line 1075 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1075 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_Result_6;

#line 1075 "write_deps_file.m"
    {
#line 1075 "write_deps_file.m"
      parse_tree__write_deps_file__compare_module_names_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_Result_6);
    }
#line 1075 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_3 = ((MR_Box) (parse_tree__write_deps_file__conv0_Result_6));
#line 1075 "write_deps_file.m"
  }
#line 1075 "write_deps_file.m"
}

#line 1053 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
#line 1053 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1053 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1053 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1053 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1053 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12)
#line 1053 "write_deps_file.m"
{
#line 1057 "write_deps_file.m"
  {
#line 1057 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_483_483;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_490_490;
#line 1057 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
#line 1057 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Version_15;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules0_16;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules1_17;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_18;
#line 1057 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_19;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFiles0_20;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFiles_21;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModulesWithSubModules_22;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Target_28;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModulesAndExts_29;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModules_30;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Gmake_31;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Basis_33;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignBasis_35;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ParentBasis_37;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs_38;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MakeFileName_39;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignFileNames_45;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HighLevelCode_46;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_65_65;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_87_87;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_195_195;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_197_197;
#line 1057 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_199_199;
#line 1057 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_334_334;
#line 1152 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_121_121;

#line 1058 "write_deps_file.m"
    {
#line 1058 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependency variables for module \140");
    }
#line 1060 "write_deps_file.m"
    {
#line 1060 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
#line 1061 "write_deps_file.m"
    {
#line 1061 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
#line 1062 "write_deps_file.m"
    {
#line 1062 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1063 "write_deps_file.m"
    {
#line 1063 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
#line 1064 "write_deps_file.m"
    {
#line 1064 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
#line 1065 "write_deps_file.m"
    {
#line 1065 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1067 "write_deps_file.m"
    {
#line 1067 "write_deps_file.m"
      mercury__library__version_1_p_0(&parse_tree__write_deps_file__Version_15);
    }
#line 1068 "write_deps_file.m"
    {
#line 1068 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
#line 1070 "write_deps_file.m"
    {
#line 1070 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
#line 1071 "write_deps_file.m"
    {
#line 1071 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
#line 9874 "parse_tree.write_deps_file.c"
    parse_tree__write_deps_file__TypeCtorInfo_483_483 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 1073 "write_deps_file.m"
    {
#line 1073 "write_deps_file.m"
      mercury__map__keys_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_483_483, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules0_16);
    }
#line 1074 "write_deps_file.m"
    {
#line 1074 "write_deps_file.m"
      parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_16, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules1_17);
    }
#line 1075 "write_deps_file.m"
    {
#line 1075 "write_deps_file.m"
      mercury__list__sort_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_483_483, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[6], parse_tree__write_deps_file__Modules1_17, &parse_tree__write_deps_file__Modules_18);
    }
#line 1077 "write_deps_file.m"
    {
#line 1077 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1078 "write_deps_file.m"
    {
#line 1078 "write_deps_file.m"
      parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1078 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[3]));
#line 1078 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_2));
#line 1078 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1078 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_65_65, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
#line 1078 "write_deps_file.m"
    }
#line 9910 "parse_tree.write_deps_file.c"
    parse_tree__write_deps_file__TypeCtorInfo_490_490 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1078 "write_deps_file.m"
    {
#line 1078 "write_deps_file.m"
      mercury__list__map_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_483_483, parse_tree__write_deps_file__TypeCtorInfo_490_490, parse_tree__write_deps_file__V_65_65, parse_tree__write_deps_file__Modules_18, &parse_tree__write_deps_file__SourceFiles0_20);
    }
#line 1079 "write_deps_file.m"
    {
#line 1079 "write_deps_file.m"
      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_490_490, parse_tree__write_deps_file__SourceFiles0_20, &parse_tree__write_deps_file__SourceFiles_21);
    }
#line 1081 "write_deps_file.m"
    {
#line 1081 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1082 "write_deps_file.m"
    {
#line 1082 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ms =");
    }
#line 1083 "write_deps_file.m"
    {
#line 1083 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__SourceFiles_21, (MR_String) ".m", parse_tree__write_deps_file__DepStream_12);
    }
#line 1084 "write_deps_file.m"
    {
#line 1084 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1086 "write_deps_file.m"
    {
#line 1086 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1087 "write_deps_file.m"
    {
#line 1087 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".errs =");
    }
#line 1088 "write_deps_file.m"
    {
#line 1088 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__SourceFiles_21, (MR_String) ".err", parse_tree__write_deps_file__DepStream_12);
    }
#line 1089 "write_deps_file.m"
    {
#line 1089 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1091 "write_deps_file.m"
    {
#line 1091 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1092 "write_deps_file.m"
    {
#line 1092 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mods =");
    }
#line 1093 "write_deps_file.m"
    {
#line 1093 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1094 "write_deps_file.m"
    {
#line 1094 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1097 "write_deps_file.m"
    {
#line 1097 "write_deps_file.m"
      parse_tree__write_deps_file__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1097 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_87_87, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[2]));
#line 1097 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_87_87, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_3));
#line 1097 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1097 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_87_87, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
#line 1097 "write_deps_file.m"
    }
#line 1097 "write_deps_file.m"
    {
#line 1097 "write_deps_file.m"
      parse_tree__write_deps_file__ModulesWithSubModules_22 = mercury__list__filter_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_483_483, parse_tree__write_deps_file__V_87_87, parse_tree__write_deps_file__Modules_18);
    }
#line 1102 "write_deps_file.m"
    {
#line 1102 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1103 "write_deps_file.m"
    {
#line 1103 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".parent_mods =");
    }
#line 1104 "write_deps_file.m"
    {
#line 1104 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModulesWithSubModules_22, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1106 "write_deps_file.m"
    {
#line 1106 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1108 "write_deps_file.m"
    {
#line 1108 "write_deps_file.m"
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_8, &parse_tree__write_deps_file__Target_28);
    }
#line 1112 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Target_28 == (MR_Integer) 1))
#line 1111 "write_deps_file.m"
      {
#line 1111 "write_deps_file.m"
        parse_tree__write_deps_file__ForeignModulesAndExts_29 = parse_tree__write_deps_file__foreign_modules_2_f_0(parse_tree__write_deps_file__Modules_18, parse_tree__write_deps_file__DepsMap_11);
      }
#line 1112 "write_deps_file.m"
    else
#line 1119 "write_deps_file.m"
      parse_tree__write_deps_file__ForeignModulesAndExts_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1121 "write_deps_file.m"
    {
#line 1121 "write_deps_file.m"
      parse_tree__write_deps_file__ForeignModules_30 = mercury__assoc_list__keys_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_483_483, parse_tree__write_deps_file__TypeCtorInfo_490_490, parse_tree__write_deps_file__ForeignModulesAndExts_29);
    }
#line 1122 "write_deps_file.m"
    {
#line 1122 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1123 "write_deps_file.m"
    {
#line 1123 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign =");
    }
#line 1124 "write_deps_file.m"
    {
#line 1124 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ForeignModules_30, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1125 "write_deps_file.m"
    {
#line 1125 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
    }
#line 1127 "write_deps_file.m"
    {
#line 1127 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 114, &parse_tree__write_deps_file__Gmake_31);
    }
#line 1138 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Gmake_31 == (MR_Integer) 0))
#line 1139 "write_deps_file.m"
      {
#line 1140 "write_deps_file.m"
        parse_tree__write_deps_file__Basis_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1141 "write_deps_file.m"
        parse_tree__write_deps_file__ForeignBasis_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1142 "write_deps_file.m"
        parse_tree__write_deps_file__ParentBasis_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1139 "write_deps_file.m"
      }
#line 1138 "write_deps_file.m"
    else
#line 1129 "write_deps_file.m"
      {
#line 1129 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModsVarName_32;
#line 1129 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignVarName_34;
#line 1129 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ParentModsVarName_36;
#line 1129 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_107_107;
#line 1129 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_110_110;
#line 1129 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_113_113;

#line 1130 "write_deps_file.m"
        {
#line 1130 "write_deps_file.m"
          mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_19, (MR_String) ".mods", &parse_tree__write_deps_file__ModsVarName_32);
        }
#line 1131 "write_deps_file.m"
        {
#line 1131 "write_deps_file.m"
          parse_tree__write_deps_file__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1131 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_107_107, 0) = ((MR_Box) (parse_tree__write_deps_file__ModsVarName_32));
#line 1131 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_107_107, 1) = ((MR_Box) ((MR_String) ""));
#line 1131 "write_deps_file.m"
        }
#line 1131 "write_deps_file.m"
        {
#line 1131 "write_deps_file.m"
          parse_tree__write_deps_file__Basis_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_33, 0) = ((MR_Box) (parse_tree__write_deps_file__V_107_107));
#line 1131 "write_deps_file.m"
        }
#line 1133 "write_deps_file.m"
        {
#line 1133 "write_deps_file.m"
          mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_19, (MR_String) ".foreign", &parse_tree__write_deps_file__ForeignVarName_34);
        }
#line 1134 "write_deps_file.m"
        {
#line 1134 "write_deps_file.m"
          parse_tree__write_deps_file__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1134 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_110_110, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignVarName_34));
#line 1134 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_110_110, 1) = ((MR_Box) ((MR_String) ""));
#line 1134 "write_deps_file.m"
        }
#line 1134 "write_deps_file.m"
        {
#line 1134 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignBasis_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignBasis_35, 0) = ((MR_Box) (parse_tree__write_deps_file__V_110_110));
#line 1134 "write_deps_file.m"
        }
#line 1136 "write_deps_file.m"
        {
#line 1136 "write_deps_file.m"
          mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_19, (MR_String) ".parent_mods", &parse_tree__write_deps_file__ParentModsVarName_36);
        }
#line 1137 "write_deps_file.m"
        {
#line 1137 "write_deps_file.m"
          parse_tree__write_deps_file__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1137 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_113_113, 0) = ((MR_Box) (parse_tree__write_deps_file__ParentModsVarName_36));
#line 1137 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_113_113, 1) = ((MR_Box) ((MR_String) ""));
#line 1137 "write_deps_file.m"
        }
#line 1137 "write_deps_file.m"
        {
#line 1137 "write_deps_file.m"
          parse_tree__write_deps_file__ParentBasis_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ParentBasis_37, 0) = ((MR_Box) (parse_tree__write_deps_file__V_113_113));
#line 1137 "write_deps_file.m"
        }
#line 1129 "write_deps_file.m"
      }
#line 1145 "write_deps_file.m"
    {
#line 1145 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(parse_tree__write_deps_file__Modules_18, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__ExtraLinkObjs_38);
    }
#line 1147 "write_deps_file.m"
    {
#line 1147 "write_deps_file.m"
      parse_tree__write_deps_file__MakeFileName_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_39, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[0]));
#line 1147 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_39, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_4));
#line 1147 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1147 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_39, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_8));
#line 1147 "write_deps_file.m"
    }
#line 1152 "write_deps_file.m"
    {
#line 1152 "write_deps_file.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[0], parse_tree__write_deps_file__TypeCtorInfo_490_490, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__MakeFileName_39, parse_tree__write_deps_file__ForeignModulesAndExts_29, &parse_tree__write_deps_file__ForeignFileNames_45, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_121_121);
    }
#line 1156 "write_deps_file.m"
    {
#line 1156 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1157 "write_deps_file.m"
    {
#line 1157 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_cs = ");
    }
#line 1158 "write_deps_file.m"
    {
#line 1158 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__ForeignFileNames_45, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1159 "write_deps_file.m"
    {
#line 1159 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1162 "write_deps_file.m"
    {
#line 1162 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1163 "write_deps_file.m"
    {
#line 1163 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_dlls = ");
    }
#line 1164 "write_deps_file.m"
    {
#line 1164 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ForeignModules_30, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__ForeignBasis_35, parse_tree__write_deps_file__DepStream_12);
    }
#line 1166 "write_deps_file.m"
    {
#line 1166 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1168 "write_deps_file.m"
    {
#line 1168 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1169 "write_deps_file.m"
    {
#line 1169 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs = ");
    }
#line 1170 "write_deps_file.m"
    {
#line 1170 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(cs_subdir)", (MR_String) ".c", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1172 "write_deps_file.m"
    {
#line 1172 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1174 "write_deps_file.m"
    {
#line 1174 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1175 "write_deps_file.m"
    {
#line 1175 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".cs = \044(");
    }
#line 1176 "write_deps_file.m"
    {
#line 1176 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1177 "write_deps_file.m"
    {
#line 1177 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs) ");
    }
#line 1178 "write_deps_file.m"
    {
#line 1178 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ExtraLinkObjs_38, (MR_String) ".c", parse_tree__write_deps_file__DepStream_12);
    }
#line 1180 "write_deps_file.m"
    {
#line 1180 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1182 "write_deps_file.m"
    {
#line 1182 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1183 "write_deps_file.m"
    {
#line 1183 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dlls = ");
    }
#line 1184 "write_deps_file.m"
    {
#line 1184 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1186 "write_deps_file.m"
    {
#line 1186 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1188 "write_deps_file.m"
    {
#line 1188 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1189 "write_deps_file.m"
    {
#line 1189 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os = ");
    }
#line 1190 "write_deps_file.m"
    {
#line 1190 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(os_subdir)", (MR_String) ".\044O", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1192 "write_deps_file.m"
    {
#line 1192 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ExtraLinkObjs_38, (MR_String) ".\044O", parse_tree__write_deps_file__DepStream_12);
    }
#line 1194 "write_deps_file.m"
    {
#line 1194 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1196 "write_deps_file.m"
    {
#line 1196 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1197 "write_deps_file.m"
    {
#line 1197 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os = ");
    }
#line 1198 "write_deps_file.m"
    {
#line 1198 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(os_subdir)", (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1200 "write_deps_file.m"
    {
#line 1200 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ExtraLinkObjs_38, (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__DepStream_12);
    }
#line 1202 "write_deps_file.m"
    {
#line 1202 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1204 "write_deps_file.m"
    {
#line 1204 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1205 "write_deps_file.m"
    {
#line 1205 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".os = \044(");
    }
#line 1206 "write_deps_file.m"
    {
#line 1206 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1207 "write_deps_file.m"
    {
#line 1207 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os)\n");
    }
#line 1209 "write_deps_file.m"
    {
#line 1209 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1210 "write_deps_file.m"
    {
#line 1210 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".pic_os = \044(");
    }
#line 1211 "write_deps_file.m"
    {
#line 1211 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1212 "write_deps_file.m"
    {
#line 1212 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os)\n");
    }
#line 1223 "write_deps_file.m"
    {
#line 1223 "write_deps_file.m"
      parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_19));
#line 1223 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[108])));
#line 1223 "write_deps_file.m"
    }
#line 1223 "write_deps_file.m"
    {
#line 1223 "write_deps_file.m"
      parse_tree__write_deps_file__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 0) = ((MR_Box) ((MR_String) ".cs_or_ss =\044("));
#line 1223 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 1) = ((MR_Box) (parse_tree__write_deps_file__V_199_199));
#line 1223 "write_deps_file.m"
    }
#line 1222 "write_deps_file.m"
    {
#line 1222 "write_deps_file.m"
      parse_tree__write_deps_file__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_195_195, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_19));
#line 1222 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_195_195, 1) = ((MR_Box) (parse_tree__write_deps_file__V_197_197));
#line 1222 "write_deps_file.m"
    }
#line 1222 "write_deps_file.m"
    {
#line 1222 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_195_195);
    }
#line 1226 "write_deps_file.m"
    {
#line 1226 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1227 "write_deps_file.m"
    {
#line 1227 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".useds = ");
    }
#line 1228 "write_deps_file.m"
    {
#line 1228 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(useds_subdir)", (MR_String) ".used", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1230 "write_deps_file.m"
    {
#line 1230 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1232 "write_deps_file.m"
    {
#line 1232 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1233 "write_deps_file.m"
    {
#line 1233 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ils = ");
    }
#line 1234 "write_deps_file.m"
    {
#line 1234 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(ils_subdir)", (MR_String) ".il", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1236 "write_deps_file.m"
    {
#line 1236 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1238 "write_deps_file.m"
    {
#line 1238 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1239 "write_deps_file.m"
    {
#line 1239 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".javas = ");
    }
#line 1240 "write_deps_file.m"
    {
#line 1240 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(javas_subdir)", (MR_String) ".java", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1242 "write_deps_file.m"
    {
#line 1242 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1244 "write_deps_file.m"
    {
#line 1244 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1245 "write_deps_file.m"
    {
#line 1245 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".classes = ");
    }
#line 1246 "write_deps_file.m"
    {
#line 1246 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(classes_subdir)", (MR_String) ".class", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1248 "write_deps_file.m"
    {
#line 1248 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) " ");
    }
#line 1256 "write_deps_file.m"
    {
#line 1256 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(wildcard ");
    }
#line 1257 "write_deps_file.m"
    {
#line 1257 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(classes_subdir)", (MR_String) "\\\044\044*.class", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1259 "write_deps_file.m"
    {
#line 1259 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ")\n");
    }
#line 1261 "write_deps_file.m"
    {
#line 1261 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1262 "write_deps_file.m"
    {
#line 1262 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dirs = ");
    }
#line 1263 "write_deps_file.m"
    {
#line 1263 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1265 "write_deps_file.m"
    {
#line 1265 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1267 "write_deps_file.m"
    {
#line 1267 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1268 "write_deps_file.m"
    {
#line 1268 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dir_os = ");
    }
#line 1269 "write_deps_file.m"
    {
#line 1269 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir/*.\044O", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1271 "write_deps_file.m"
    {
#line 1271 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1273 "write_deps_file.m"
    {
#line 1273 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1274 "write_deps_file.m"
    {
#line 1274 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dates = ");
    }
#line 1275 "write_deps_file.m"
    {
#line 1275 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(dates_subdir)", (MR_String) ".date", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1277 "write_deps_file.m"
    {
#line 1277 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1279 "write_deps_file.m"
    {
#line 1279 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1280 "write_deps_file.m"
    {
#line 1280 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date0s = ");
    }
#line 1281 "write_deps_file.m"
    {
#line 1281 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(date0s_subdir)", (MR_String) ".date0", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1283 "write_deps_file.m"
    {
#line 1283 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1285 "write_deps_file.m"
    {
#line 1285 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1286 "write_deps_file.m"
    {
#line 1286 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date3s = ");
    }
#line 1287 "write_deps_file.m"
    {
#line 1287 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(date3s_subdir)", (MR_String) ".date3", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1289 "write_deps_file.m"
    {
#line 1289 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1291 "write_deps_file.m"
    {
#line 1291 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1292 "write_deps_file.m"
    {
#line 1292 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".optdates = ");
    }
#line 1293 "write_deps_file.m"
    {
#line 1293 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(optdates_subdir)", (MR_String) ".optdate", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1295 "write_deps_file.m"
    {
#line 1295 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1297 "write_deps_file.m"
    {
#line 1297 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1298 "write_deps_file.m"
    {
#line 1298 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opt_dates = ");
    }
#line 1299 "write_deps_file.m"
    {
#line 1299 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(trans_opt_dates_subdir)", (MR_String) ".trans_opt_date", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1301 "write_deps_file.m"
    {
#line 1301 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1303 "write_deps_file.m"
    {
#line 1303 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1304 "write_deps_file.m"
    {
#line 1304 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".c_dates = ");
    }
#line 1305 "write_deps_file.m"
    {
#line 1305 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(c_dates_subdir)", (MR_String) ".c_date", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1307 "write_deps_file.m"
    {
#line 1307 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1309 "write_deps_file.m"
    {
#line 1309 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1310 "write_deps_file.m"
    {
#line 1310 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".il_dates = ");
    }
#line 1311 "write_deps_file.m"
    {
#line 1311 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(il_dates_subdir)", (MR_String) ".il_date", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1313 "write_deps_file.m"
    {
#line 1313 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1315 "write_deps_file.m"
    {
#line 1315 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1316 "write_deps_file.m"
    {
#line 1316 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".java_dates = ");
    }
#line 1317 "write_deps_file.m"
    {
#line 1317 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(java_dates_subdir)", (MR_String) ".java_date", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1319 "write_deps_file.m"
    {
#line 1319 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1321 "write_deps_file.m"
    {
#line 1321 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1322 "write_deps_file.m"
    {
#line 1322 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ds = ");
    }
#line 1323 "write_deps_file.m"
    {
#line 1323 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(ds_subdir)", (MR_String) ".d", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1325 "write_deps_file.m"
    {
#line 1325 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1327 "write_deps_file.m"
    {
#line 1327 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1328 "write_deps_file.m"
    {
#line 1328 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".module_deps = ");
    }
#line 1329 "write_deps_file.m"
    {
#line 1329 "write_deps_file.m"
      parse_tree__write_deps_file__V_334_334 = make__make_module_dep_file_extension_0_f_0();
    }
#line 1329 "write_deps_file.m"
    {
#line 1329 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(module_deps_subdir)", parse_tree__write_deps_file__V_334_334, parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1332 "write_deps_file.m"
    {
#line 1332 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1334 "write_deps_file.m"
    {
#line 1334 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1335 "write_deps_file.m"
    {
#line 1335 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mihs = ");
    }
#line 1336 "write_deps_file.m"
    {
#line 1336 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 250, &parse_tree__write_deps_file__HighLevelCode_46);
    }
#line 1357 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HighLevelCode_46 == (MR_Integer) 0))
#line 1359 "write_deps_file.m"
      {
#line 1359 "write_deps_file.m"
      }
#line 1357 "write_deps_file.m"
    else
#line 1345 "write_deps_file.m"
      if ((parse_tree__write_deps_file__Target_28 == (MR_Integer) 0))
#line 1340 "write_deps_file.m"
        {
#line 1343 "write_deps_file.m"
          {
#line 1343 "write_deps_file.m"
            parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
          }
#line 1340 "write_deps_file.m"
        }
#line 1345 "write_deps_file.m"
      else
#line 1345 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Target_28 == (MR_Integer) 2))
#line 1349 "write_deps_file.m"
          {
#line 1349 "write_deps_file.m"
          }
#line 1345 "write_deps_file.m"
        else
#line 1345 "write_deps_file.m"
          if ((parse_tree__write_deps_file__Target_28 == (MR_Integer) 5))
#line 1351 "write_deps_file.m"
            {
#line 1351 "write_deps_file.m"
            }
#line 1345 "write_deps_file.m"
          else
#line 1345 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Target_28 == (MR_Integer) 1))
#line 1348 "write_deps_file.m"
              {
#line 1348 "write_deps_file.m"
              }
#line 1345 "write_deps_file.m"
            else
#line 1345 "write_deps_file.m"
              if ((parse_tree__write_deps_file__Target_28 == (MR_Integer) 3))
#line 1350 "write_deps_file.m"
                {
#line 1350 "write_deps_file.m"
                }
#line 1345 "write_deps_file.m"
              else
#line 1354 "write_deps_file.m"
                {
#line 1355 "write_deps_file.m"
                  {
#line 1355 "write_deps_file.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_deps_file", (MR_String) "predicate \140parse_tree.write_deps_file.generate_dv_file\'/7", (MR_String) "--highlevel-code with --target x86_64");
#line 1355 "write_deps_file.m"
                    return;
                  }
#line 1354 "write_deps_file.m"
                }
#line 1361 "write_deps_file.m"
    {
#line 1361 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1363 "write_deps_file.m"
    {
#line 1363 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1364 "write_deps_file.m"
    {
#line 1364 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mhs = ");
    }
#line 1371 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Target_28 == (MR_Integer) 2))
#line 1373 "write_deps_file.m"
      {
#line 1373 "write_deps_file.m"
      }
#line 1371 "write_deps_file.m"
    else
#line 1371 "write_deps_file.m"
      if ((parse_tree__write_deps_file__Target_28 == (MR_Integer) 5))
#line 1375 "write_deps_file.m"
        {
#line 1375 "write_deps_file.m"
        }
#line 1371 "write_deps_file.m"
      else
#line 1371 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Target_28 == (MR_Integer) 1))
#line 1372 "write_deps_file.m"
          {
#line 1372 "write_deps_file.m"
          }
#line 1371 "write_deps_file.m"
        else
#line 1371 "write_deps_file.m"
          if ((parse_tree__write_deps_file__Target_28 == (MR_Integer) 3))
#line 1374 "write_deps_file.m"
            {
#line 1374 "write_deps_file.m"
            }
#line 1371 "write_deps_file.m"
          else
#line 1368 "write_deps_file.m"
            {
#line 1369 "write_deps_file.m"
              {
#line 1369 "write_deps_file.m"
                parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
              }
#line 1368 "write_deps_file.m"
            }
#line 1378 "write_deps_file.m"
    {
#line 1378 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1386 "write_deps_file.m"
    {
#line 1386 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1387 "write_deps_file.m"
    {
#line 1387 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mihs = ");
    }
#line 1388 "write_deps_file.m"
    {
#line 1388 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1390 "write_deps_file.m"
    {
#line 1390 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1395 "write_deps_file.m"
    {
#line 1395 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1396 "write_deps_file.m"
    {
#line 1396 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mhs = ");
    }
#line 1397 "write_deps_file.m"
    {
#line 1397 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1399 "write_deps_file.m"
    {
#line 1399 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1401 "write_deps_file.m"
    {
#line 1401 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1402 "write_deps_file.m"
    {
#line 1402 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ints = ");
    }
#line 1403 "write_deps_file.m"
    {
#line 1403 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(ints_subdir)", (MR_String) ".int", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1405 "write_deps_file.m"
    {
#line 1405 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1406 "write_deps_file.m"
    {
#line 1406 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(int2s_subdir)", (MR_String) ".int2", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1408 "write_deps_file.m"
    {
#line 1408 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1415 "write_deps_file.m"
    {
#line 1415 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1416 "write_deps_file.m"
    {
#line 1416 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int0s = ");
    }
#line 1417 "write_deps_file.m"
    {
#line 1417 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModulesWithSubModules_22, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__ParentBasis_37, parse_tree__write_deps_file__DepStream_12);
    }
#line 1419 "write_deps_file.m"
    {
#line 1419 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1428 "write_deps_file.m"
    {
#line 1428 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1429 "write_deps_file.m"
    {
#line 1429 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_int0s = ");
    }
#line 1430 "write_deps_file.m"
    {
#line 1430 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1432 "write_deps_file.m"
    {
#line 1432 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1434 "write_deps_file.m"
    {
#line 1434 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1435 "write_deps_file.m"
    {
#line 1435 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int3s = ");
    }
#line 1436 "write_deps_file.m"
    {
#line 1436 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(int3s_subdir)", (MR_String) ".int3", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1438 "write_deps_file.m"
    {
#line 1438 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1440 "write_deps_file.m"
    {
#line 1440 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1441 "write_deps_file.m"
    {
#line 1441 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".opts = ");
    }
#line 1442 "write_deps_file.m"
    {
#line 1442 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(opts_subdir)", (MR_String) ".opt", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1444 "write_deps_file.m"
    {
#line 1444 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1446 "write_deps_file.m"
    {
#line 1446 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1447 "write_deps_file.m"
    {
#line 1447 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opts = ");
    }
#line 1448 "write_deps_file.m"
    {
#line 1448 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(trans_opts_subdir)", (MR_String) ".trans_opt", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1450 "write_deps_file.m"
    {
#line 1450 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1452 "write_deps_file.m"
    {
#line 1452 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1453 "write_deps_file.m"
    {
#line 1453 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".analysiss = ");
    }
#line 1454 "write_deps_file.m"
    {
#line 1454 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(analysiss_subdir)", (MR_String) ".analysis", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1456 "write_deps_file.m"
    {
#line 1456 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1458 "write_deps_file.m"
    {
#line 1458 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1459 "write_deps_file.m"
    {
#line 1459 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".requests = ");
    }
#line 1460 "write_deps_file.m"
    {
#line 1460 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(requests_subdir)", (MR_String) ".request", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1462 "write_deps_file.m"
    {
#line 1462 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1464 "write_deps_file.m"
    {
#line 1464 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1465 "write_deps_file.m"
    {
#line 1465 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".imdgs = ");
    }
#line 1466 "write_deps_file.m"
    {
#line 1466 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "\044(imdgs_subdir)", (MR_String) ".imdg", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1468 "write_deps_file.m"
    {
#line 1468 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1470 "write_deps_file.m"
    {
#line 1470 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_19);
    }
#line 1471 "write_deps_file.m"
    {
#line 1471 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".profs = ");
    }
#line 1472 "write_deps_file.m"
    {
#line 1472 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_18, (MR_String) "", (MR_String) ".prof", parse_tree__write_deps_file__Basis_33, parse_tree__write_deps_file__DepStream_12);
    }
#line 1474 "write_deps_file.m"
    {
#line 1474 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
#line 1474 "write_deps_file.m"
      return;
    }
#line 1057 "write_deps_file.m"
  }
#line 1053 "write_deps_file.m"
}

#line 981 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
#line 981 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 981 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 981 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 981 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Ext_10)
#line 981 "write_deps_file.m"
{
#line 984 "write_deps_file.m"
  {
#line 984 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 984 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleStr_12;
#line 984 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Target_13;
#line 984 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ShorthandTarget_14;

#line 985 "write_deps_file.m"
    {
#line 985 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__ModuleName_9, &parse_tree__write_deps_file__ModuleStr_12);
    }
#line 986 "write_deps_file.m"
    {
#line 986 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__Ext_10, (MR_Integer) 1, &parse_tree__write_deps_file__Target_13);
    }
#line 988 "write_deps_file.m"
    {
#line 988 "write_deps_file.m"
      parse_tree__write_deps_file__ShorthandTarget_14 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleStr_12, parse_tree__write_deps_file__Ext_10);
    }
#line 989 "write_deps_file.m"
    {
#line 989 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ".PHONY: ");
    }
#line 990 "write_deps_file.m"
    {
#line 990 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
#line 991 "write_deps_file.m"
    {
#line 991 "write_deps_file.m"
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
    }
#line 992 "write_deps_file.m"
    {
#line 992 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
#line 993 "write_deps_file.m"
    {
#line 993 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ": ");
    }
#line 994 "write_deps_file.m"
    {
#line 994 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Target_13);
    }
#line 995 "write_deps_file.m"
    {
#line 995 "write_deps_file.m"
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
#line 995 "write_deps_file.m"
      return;
    }
#line 984 "write_deps_file.m"
  }
#line 981 "write_deps_file.m"
}

#line 957 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0_1(
#line 957 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 957 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 957 "write_deps_file.m"
{
#line 957 "write_deps_file.m"
  {
#line 957 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 957 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 957 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__3_64;

#line 957 "write_deps_file.m"
    {
#line 957 "write_deps_file.m"
      parse_tree__write_deps_file__conv0_HeadVar__3_64 = parse_tree__write_deps_file__IntroducedFrom__func__write_foreign_dependency_for_il__957__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 957 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__3_64));
#line 957 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 957 "write_deps_file.m"
  }
#line 957 "write_deps_file.m"
}

#line 913 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0(
#line 913 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 913 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 913 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 913 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__AllDeps_12,
#line 913 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImports_13,
#line 913 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignLang_14)
#line 913 "write_deps_file.m"
{
#line 972 "write_deps_file.m"
  {
#line 972 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 972 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModuleName_16;
#line 972 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ForeignExt_17;

#line 920 "write_deps_file.m"
    {
#line 920 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(parse_tree__write_deps_file__ModuleName_11, parse_tree__write_deps_file__ForeignLang_14, &parse_tree__write_deps_file__ForeignModuleName_16);
    }
#line 921 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 922 "write_deps_file.m"
      {
#line 922 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(parse_tree__write_deps_file__ForeignLang_14, &parse_tree__write_deps_file__ForeignExt_17);
      }
#line 972 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 925 "write_deps_file.m"
      {
#line 925 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignModuleNameString_18;
#line 925 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignFileName_19;
#line 925 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IlFileName_20;
#line 925 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DllFileName_21;
#line 925 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignDllFileName_22;
#line 925 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_40_40;
#line 925 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_42_42;
#line 925 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_44_44;
#line 925 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_47_47;
#line 925 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_49_49;
#line 925 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_51_51;

#line 924 "write_deps_file.m"
        {
#line 924 "write_deps_file.m"
          parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ForeignModuleName_16, &parse_tree__write_deps_file__ForeignModuleNameString_18);
        }
#line 926 "write_deps_file.m"
        {
#line 926 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ForeignModuleName_16, parse_tree__write_deps_file__ForeignExt_17, (MR_Integer) 1, &parse_tree__write_deps_file__ForeignFileName_19);
        }
#line 928 "write_deps_file.m"
        {
#line 928 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ModuleName_11, (MR_String) ".il", (MR_Integer) 1, &parse_tree__write_deps_file__IlFileName_20);
        }
#line 930 "write_deps_file.m"
        {
#line 930 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ModuleName_11, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__DllFileName_21);
        }
#line 932 "write_deps_file.m"
        {
#line 932 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ForeignModuleName_16, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__ForeignDllFileName_22);
        }
#line 936 "write_deps_file.m"
        {
#line 936 "write_deps_file.m"
          parse_tree__write_deps_file__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_44_44, 0) = ((MR_Box) (parse_tree__write_deps_file__DllFileName_21));
#line 936 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 936 "write_deps_file.m"
        }
#line 936 "write_deps_file.m"
        {
#line 936 "write_deps_file.m"
          parse_tree__write_deps_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 0) = ((MR_Box) ((MR_String) " : "));
#line 936 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 1) = ((MR_Box) (parse_tree__write_deps_file__V_44_44));
#line 936 "write_deps_file.m"
        }
#line 935 "write_deps_file.m"
        {
#line 935 "write_deps_file.m"
          parse_tree__write_deps_file__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_40_40, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignDllFileName_22));
#line 935 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_40_40, 1) = ((MR_Box) (parse_tree__write_deps_file__V_42_42));
#line 935 "write_deps_file.m"
        }
#line 935 "write_deps_file.m"
        {
#line 935 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__V_40_40);
        }
#line 940 "write_deps_file.m"
        {
#line 940 "write_deps_file.m"
          mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_10);
        }
#line 943 "write_deps_file.m"
        {
#line 943 "write_deps_file.m"
          parse_tree__write_deps_file__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 0) = ((MR_Box) (parse_tree__write_deps_file__IlFileName_20));
#line 943 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])));
#line 943 "write_deps_file.m"
        }
#line 943 "write_deps_file.m"
        {
#line 943 "write_deps_file.m"
          parse_tree__write_deps_file__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 0) = ((MR_Box) ((MR_String) " : "));
#line 943 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 1) = ((MR_Box) (parse_tree__write_deps_file__V_51_51));
#line 943 "write_deps_file.m"
        }
#line 942 "write_deps_file.m"
        {
#line 942 "write_deps_file.m"
          parse_tree__write_deps_file__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignFileName_19));
#line 942 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 1) = ((MR_Box) (parse_tree__write_deps_file__V_49_49));
#line 942 "write_deps_file.m"
        }
#line 942 "write_deps_file.m"
        {
#line 942 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__V_47_47);
        }
#line 965 "write_deps_file.m"
        if ((parse_tree__write_deps_file__ForeignLang_14 == (MR_Integer) 0))
#line 966 "write_deps_file.m"
          {
#line 966 "write_deps_file.m"
          }
#line 965 "write_deps_file.m"
        else
#line 965 "write_deps_file.m"
          if ((parse_tree__write_deps_file__ForeignLang_14 == (MR_Integer) 1))
#line 946 "write_deps_file.m"
            {
#line 946 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__TypeCtorInfo_70_70;
#line 946 "write_deps_file.m"
              MR_String parse_tree__write_deps_file__Prefix_23;
#line 946 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__ForeignDeps_24;
#line 946 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__Deps_26;
#line 946 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_55_55;
#line 946 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_58_58;
#line 946 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_62_62;
#line 946 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_65_65;

#line 951 "write_deps_file.m"
              {
#line 951 "write_deps_file.m"
                parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignModuleNameString_18));
#line 951 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107])));
#line 951 "write_deps_file.m"
              }
#line 950 "write_deps_file.m"
              {
#line 950 "write_deps_file.m"
                parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "CSHARP_ASSEMBLY_REFS-"));
#line 950 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 950 "write_deps_file.m"
              }
#line 950 "write_deps_file.m"
              {
#line 950 "write_deps_file.m"
                mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__V_55_55);
              }
#line 952 "write_deps_file.m"
              {
#line 952 "write_deps_file.m"
                parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__ModuleName_11);
              }
#line 954 "write_deps_file.m"
              if (parse_tree__write_deps_file__succeeded)
#line 953 "write_deps_file.m"
                parse_tree__write_deps_file__Prefix_23 = (MR_String) "/addmodule:";
#line 954 "write_deps_file.m"
              else
#line 955 "write_deps_file.m"
                parse_tree__write_deps_file__Prefix_23 = (MR_String) "/r:";
#line 11508 "parse_tree.write_deps_file.c"
              parse_tree__write_deps_file__TypeCtorInfo_70_70 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 957 "write_deps_file.m"
              {
#line 957 "write_deps_file.m"
                parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 957 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
#line 957 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0_1));
#line 957 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 957 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_11));
#line 957 "write_deps_file.m"
              }
#line 957 "write_deps_file.m"
              {
#line 957 "write_deps_file.m"
                parse_tree__write_deps_file__ForeignDeps_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__TypeCtorInfo_70_70, parse_tree__write_deps_file__V_62_62, parse_tree__write_deps_file__ForeignImports_13);
              }
#line 961 "write_deps_file.m"
              {
#line 961 "write_deps_file.m"
                parse_tree__write_deps_file__Deps_26 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_70_70, parse_tree__write_deps_file__AllDeps_12, parse_tree__write_deps_file__ForeignDeps_24);
              }
#line 962 "write_deps_file.m"
              {
#line 962 "write_deps_file.m"
                parse_tree__write_deps_file__V_65_65 = parse_tree__write_deps_file__referenced_dlls_2_f_0(parse_tree__write_deps_file__ModuleName_11, parse_tree__write_deps_file__Deps_26);
              }
#line 962 "write_deps_file.m"
              {
#line 962 "write_deps_file.m"
                parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__V_65_65, parse_tree__write_deps_file__Prefix_23, parse_tree__write_deps_file__DepStream_10);
              }
#line 964 "write_deps_file.m"
              {
#line 964 "write_deps_file.m"
                mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_10);
#line 964 "write_deps_file.m"
                return;
              }
#line 946 "write_deps_file.m"
            }
#line 965 "write_deps_file.m"
          else
#line 965 "write_deps_file.m"
            if ((parse_tree__write_deps_file__ForeignLang_14 == (MR_Integer) 4))
#line 969 "write_deps_file.m"
              {
#line 969 "write_deps_file.m"
              }
#line 965 "write_deps_file.m"
            else
#line 965 "write_deps_file.m"
              if ((parse_tree__write_deps_file__ForeignLang_14 == (MR_Integer) 3))
#line 968 "write_deps_file.m"
                {
#line 968 "write_deps_file.m"
                }
#line 965 "write_deps_file.m"
              else
#line 967 "write_deps_file.m"
                {
#line 967 "write_deps_file.m"
                }
#line 925 "write_deps_file.m"
      }
#line 972 "write_deps_file.m"
    else
#line 969 "write_deps_file.m"
      {
#line 969 "write_deps_file.m"
      }
#line 972 "write_deps_file.m"
  }
#line 913 "write_deps_file.m"
}

#line 887 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
#line 887 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 887 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_2,
#line 887 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_3)
#line 887 "write_deps_file.m"
{
#line 890 "write_deps_file.m"
  while (MR_TRUE)
#line 890 "write_deps_file.m"
    {
#line 890 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 890 "write_deps_file.m"
      {
#line 890 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 890 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 890 "write_deps_file.m"
          {
#line 890 "write_deps_file.m"
          }
#line 890 "write_deps_file.m"
        else
#line 891 "write_deps_file.m"
          {
#line 891 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 891 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FileNames_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));

#line 892 "write_deps_file.m"
            {
#line 892 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_3, (MR_String) " \\\n\t");
            }
#line 893 "write_deps_file.m"
            {
#line 893 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_3, parse_tree__write_deps_file__FileName_11);
            }
#line 894 "write_deps_file.m"
            {
#line 894 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_3, parse_tree__write_deps_file__Suffix_2);
            }
#line 895 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 895 "write_deps_file.m"
            {
#line 895 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__1__tmp_copy_1 = parse_tree__write_deps_file__FileNames_12;

#line 895 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__1_1 = parse_tree__write_deps_file__HeadVar__1__tmp_copy_1;
#line 895 "write_deps_file.m"
            }
#line 895 "write_deps_file.m"
            continue;
#line 891 "write_deps_file.m"
          }
#line 890 "write_deps_file.m"
      }
#line 890 "write_deps_file.m"
      break;
#line 890 "write_deps_file.m"
    }
#line 887 "write_deps_file.m"
}

#line 873 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
#line 873 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 873 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 873 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 873 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4)
#line 873 "write_deps_file.m"
{
#line 877 "write_deps_file.m"
  while (MR_TRUE)
#line 877 "write_deps_file.m"
    {
#line 877 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 877 "write_deps_file.m"
      {
#line 877 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 877 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 877 "write_deps_file.m"
          {
#line 877 "write_deps_file.m"
          }
#line 877 "write_deps_file.m"
        else
#line 879 "write_deps_file.m"
          {
#line 879 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ExtraLink_14;
#line 879 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_15;
#line 879 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ExtraLinks_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 879 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_20;
#line 879 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));

#line 878 "write_deps_file.m"
            parse_tree__write_deps_file__ExtraLink_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_23_23, (MR_Integer) 0)));
#line 878 "write_deps_file.m"
            parse_tree__write_deps_file__Module_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_23_23, (MR_Integer) 1)));
#line 880 "write_deps_file.m"
            {
#line 880 "write_deps_file.m"
              parse_tree__file_names__extra_link_obj_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_15, parse_tree__write_deps_file__ExtraLink_14, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_20);
            }
#line 882 "write_deps_file.m"
            {
#line 882 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, (MR_String) " \\\n\t");
            }
#line 883 "write_deps_file.m"
            {
#line 883 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, parse_tree__write_deps_file__FileName_20);
            }
#line 884 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 884 "write_deps_file.m"
            {
#line 884 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__ExtraLinks_16;

#line 884 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 884 "write_deps_file.m"
            }
#line 884 "write_deps_file.m"
            continue;
#line 879 "write_deps_file.m"
          }
#line 877 "write_deps_file.m"
      }
#line 877 "write_deps_file.m"
      break;
#line 877 "write_deps_file.m"
    }
#line 873 "write_deps_file.m"
}

#line 859 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
#line 859 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 859 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_2,
#line 859 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 859 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_4,
#line 859 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_5)
#line 859 "write_deps_file.m"
{
#line 863 "write_deps_file.m"
  while (MR_TRUE)
#line 863 "write_deps_file.m"
    {
#line 863 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 863 "write_deps_file.m"
      {
#line 863 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 863 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 863 "write_deps_file.m"
          {
#line 863 "write_deps_file.m"
          }
#line 863 "write_deps_file.m"
        else
#line 865 "write_deps_file.m"
          {
#line 865 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FactTable_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
#line 865 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FactTables_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));
#line 865 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_22;

#line 866 "write_deps_file.m"
            {
#line 866 "write_deps_file.m"
              parse_tree__file_names__fact_table_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_2, parse_tree__write_deps_file__FactTable_17, parse_tree__write_deps_file__Suffix_4, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_22);
            }
#line 868 "write_deps_file.m"
            {
#line 868 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_5, (MR_String) " \\\n\t");
            }
#line 869 "write_deps_file.m"
            {
#line 869 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_5, parse_tree__write_deps_file__FileName_22);
            }
#line 870 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 870 "write_deps_file.m"
            {
#line 870 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__3__tmp_copy_3 = parse_tree__write_deps_file__FactTables_18;

#line 870 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__HeadVar__3__tmp_copy_3;
#line 870 "write_deps_file.m"
            }
#line 870 "write_deps_file.m"
            continue;
#line 865 "write_deps_file.m"
          }
#line 863 "write_deps_file.m"
      }
#line 863 "write_deps_file.m"
      break;
#line 863 "write_deps_file.m"
    }
#line 859 "write_deps_file.m"
}

#line 840 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 840 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__3_3,
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4)
#line 840 "write_deps_file.m"
{
#line 843 "write_deps_file.m"
  while (MR_TRUE)
#line 843 "write_deps_file.m"
    {
#line 843 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 843 "write_deps_file.m"
      {
#line 843 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 843 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 843 "write_deps_file.m"
          {
#line 843 "write_deps_file.m"
          }
#line 843 "write_deps_file.m"
        else
#line 845 "write_deps_file.m"
          {
#line 845 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));
#line 845 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 845 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_30;

#line 853 "write_deps_file.m"
            {
#line 853 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__Module_14, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__FileName_30);
            }
#line 855 "write_deps_file.m"
            {
#line 855 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__4_4, (MR_String) " \\\n\t");
            }
#line 856 "write_deps_file.m"
            {
#line 856 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__HeadVar__3_3);
            }
#line 857 "write_deps_file.m"
            {
#line 857 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__FileName_30);
            }
#line 847 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 847 "write_deps_file.m"
            {
#line 847 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__Modules_15;

#line 847 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 847 "write_deps_file.m"
            }
#line 847 "write_deps_file.m"
            continue;
#line 845 "write_deps_file.m"
          }
#line 843 "write_deps_file.m"
      }
#line 843 "write_deps_file.m"
      break;
#line 843 "write_deps_file.m"
    }
#line 840 "write_deps_file.m"
}

#line 833 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
#line 833 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 833 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2)
#line 833 "write_deps_file.m"
{
#line 836 "write_deps_file.m"
  {
#line 836 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 836 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 836 "write_deps_file.m"
      {
#line 836 "write_deps_file.m"
      }
#line 836 "write_deps_file.m"
    else
#line 837 "write_deps_file.m"
      {
#line 838 "write_deps_file.m"
        {
#line 838 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__2_2, (MR_String) " ");
#line 838 "write_deps_file.m"
          return;
        }
#line 837 "write_deps_file.m"
      }
#line 836 "write_deps_file.m"
  }
#line 833 "write_deps_file.m"
}

#line 811 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
#line 811 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 811 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_10,
#line 811 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Prefix_11,
#line 811 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_12,
#line 811 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Basis_13,
#line 811 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_14)
#line 811 "write_deps_file.m"
{
#line 818 "write_deps_file.m"
  {
#line 818 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 818 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Basis_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 830 "write_deps_file.m"
      {
#line 830 "write_deps_file.m"
        parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__Modules_10, parse_tree__write_deps_file__Suffix_12, parse_tree__write_deps_file__DepStream_14);
#line 830 "write_deps_file.m"
        return;
      }
#line 818 "write_deps_file.m"
    else
#line 818 "write_deps_file.m"
      {
#line 818 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__VarName_16;
#line 818 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OldSuffix_17;
#line 818 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_13, (MR_Integer) 0)));

#line 818 "write_deps_file.m"
        parse_tree__write_deps_file__VarName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_21_21, (MR_Integer) 0)));
#line 818 "write_deps_file.m"
        parse_tree__write_deps_file__OldSuffix_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_21_21, (MR_Integer) 1)));
#line 819 "write_deps_file.m"
        {
#line 819 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) "\044(");
        }
#line 820 "write_deps_file.m"
        {
#line 820 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__VarName_16);
        }
#line 821 "write_deps_file.m"
        {
#line 821 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) ":%");
        }
#line 822 "write_deps_file.m"
        {
#line 822 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__OldSuffix_17);
        }
#line 823 "write_deps_file.m"
        {
#line 823 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) "=");
        }
#line 824 "write_deps_file.m"
        {
#line 824 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__Prefix_11);
        }
#line 825 "write_deps_file.m"
        {
#line 825 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) "%");
        }
#line 826 "write_deps_file.m"
        {
#line 826 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__Suffix_12);
        }
#line 827 "write_deps_file.m"
        {
#line 827 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) ")");
#line 827 "write_deps_file.m"
          return;
        }
#line 818 "write_deps_file.m"
      }
#line 818 "write_deps_file.m"
  }
#line 811 "write_deps_file.m"
}

#line 800 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
#line 800 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 800 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 800 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 800 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4)
#line 800 "write_deps_file.m"
{
#line 803 "write_deps_file.m"
  while (MR_TRUE)
#line 803 "write_deps_file.m"
    {
#line 803 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 803 "write_deps_file.m"
      {
#line 803 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 803 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 803 "write_deps_file.m"
          {
#line 803 "write_deps_file.m"
          }
#line 803 "write_deps_file.m"
        else
#line 804 "write_deps_file.m"
          {
#line 804 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));
#line 804 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 804 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_19;

#line 805 "write_deps_file.m"
            {
#line 805 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_14, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_19);
            }
#line 807 "write_deps_file.m"
            {
#line 807 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, (MR_String) " \\\n\t");
            }
#line 808 "write_deps_file.m"
            {
#line 808 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, parse_tree__write_deps_file__FileName_19);
            }
#line 809 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 809 "write_deps_file.m"
            {
#line 809 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__Modules_15;

#line 809 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 809 "write_deps_file.m"
            }
#line 809 "write_deps_file.m"
            continue;
#line 804 "write_deps_file.m"
          }
#line 803 "write_deps_file.m"
      }
#line 803 "write_deps_file.m"
      break;
#line 803 "write_deps_file.m"
    }
#line 800 "write_deps_file.m"
}

#line 789 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0_1(
#line 789 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 789 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 789 "write_deps_file.m"
{
#line 789 "write_deps_file.m"
  {
#line 789 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 789 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 789 "write_deps_file.m"
    {
#line 789 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__submodules__789__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 789 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 789 "write_deps_file.m"
  }
#line 789 "write_deps_file.m"
}

#line 782 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0(
#line 782 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 782 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules0_5)
#line 782 "write_deps_file.m"
{
#line 794 "write_deps_file.m"
  {
#line 794 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__Module_4)) == (MR_mktag((MR_Integer) 0)));
#line 794 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_6;
#line 794 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str_7;

#line 786 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 786 "write_deps_file.m"
      {
#line 786 "write_deps_file.m"
        parse_tree__write_deps_file__Str_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_4, (MR_Integer) 0)));
#line 787 "write_deps_file.m"
        {
#line 787 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__Module_4);
        }
#line 787 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 786 "write_deps_file.m"
      }
#line 794 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 792 "write_deps_file.m"
      {
#line 792 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__P_8;

#line 789 "write_deps_file.m"
        {
#line 789 "write_deps_file.m"
          parse_tree__write_deps_file__P_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 789 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1]));
#line 789 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 1) = ((MR_Box) (parse_tree__write_deps_file__submodules_2_f_0_1));
#line 789 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 789 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 3) = ((MR_Box) (parse_tree__write_deps_file__Module_4));
#line 789 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 4) = ((MR_Box) (parse_tree__write_deps_file__Str_7));
#line 789 "write_deps_file.m"
        }
#line 793 "write_deps_file.m"
        {
#line 793 "write_deps_file.m"
          mercury__list__filter_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__write_deps_file__P_8, parse_tree__write_deps_file__Modules0_5, &parse_tree__write_deps_file__Modules_6);
        }
#line 792 "write_deps_file.m"
      }
#line 794 "write_deps_file.m"
    else
#line 795 "write_deps_file.m"
      parse_tree__write_deps_file__Modules_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 794 "write_deps_file.m"
    return parse_tree__write_deps_file__Modules_6;
#line 794 "write_deps_file.m"
  }
#line 782 "write_deps_file.m"
}

#line 75 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__get_opt_deps_8_p_0(
#line 75 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 75 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 75 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 75 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_4,
#line 75 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_5,
#line 75 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6)
#line 75 "write_deps_file.m"
{
#line 2320 "write_deps_file.m"
  {
#line 2320 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 2320 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2320 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2320 "write_deps_file.m"
    else
#line 2322 "write_deps_file.m"
      {
#line 2322 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Dep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
#line 2322 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Deps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));
#line 2322 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;

#line 2323 "write_deps_file.m"
        {
#line 2323 "write_deps_file.m"
          parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__BuildOptFiles_2, parse_tree__write_deps_file__Deps_19, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__Suffix_5, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35);
        }
#line 12281 "parse_tree.write_deps_file.c"
        if ((parse_tree__write_deps_file__BuildOptFiles_2 == (MR_Integer) 0))
#line 12283 "parse_tree.write_deps_file.c"
          {
#line 12285 "parse_tree.write_deps_file.c"
            MR_String parse_tree__write_deps_file__OptName_28;
#line 12287 "parse_tree.write_deps_file.c"
            MR_Word parse_tree__write_deps_file__Result2_29;

#line 2344 "write_deps_file.m"
            {
#line 2344 "write_deps_file.m"
              parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, parse_tree__write_deps_file__Suffix_5, &parse_tree__write_deps_file__OptName_28);
            }
#line 2345 "write_deps_file.m"
            {
#line 2345 "write_deps_file.m"
              libs__file_util__search_for_file_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_28, &parse_tree__write_deps_file__Result2_29);
            }
#line 2349 "write_deps_file.m"
            if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_29)) == (MR_mktag((MR_Integer) 1))))
#line 2350 "write_deps_file.m"
              *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
#line 2349 "write_deps_file.m"
            else
#line 2348 "write_deps_file.m"
              {
#line 2348 "write_deps_file.m"
                MR_Word base;
#line 2348 "write_deps_file.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2348 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2348 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2348 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2348 "write_deps_file.m"
              }
#line 12320 "parse_tree.write_deps_file.c"
          }
#line 12322 "parse_tree.write_deps_file.c"
        else
#line 12324 "parse_tree.write_deps_file.c"
          {
#line 12326 "parse_tree.write_deps_file.c"
            MR_Word parse_tree__write_deps_file__Result1_24;

#line 2327 "write_deps_file.m"
            {
#line 2327 "write_deps_file.m"
              parse_tree__prog_io__search_for_module_source_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__Result1_24);
            }
#line 12334 "parse_tree.write_deps_file.c"
            if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_24)) == (MR_mktag((MR_Integer) 1))))
#line 12336 "parse_tree.write_deps_file.c"
              {
#line 12338 "parse_tree.write_deps_file.c"
                MR_String parse_tree__write_deps_file__OptName_45;
#line 12340 "parse_tree.write_deps_file.c"
                MR_Word parse_tree__write_deps_file__Result2_46;

#line 2344 "write_deps_file.m"
                {
#line 2344 "write_deps_file.m"
                  parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, parse_tree__write_deps_file__Suffix_5, &parse_tree__write_deps_file__OptName_45);
                }
#line 2345 "write_deps_file.m"
                {
#line 2345 "write_deps_file.m"
                  libs__file_util__search_for_file_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_45, &parse_tree__write_deps_file__Result2_46);
                }
#line 2349 "write_deps_file.m"
                if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_46)) == (MR_mktag((MR_Integer) 1))))
#line 2350 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
#line 2349 "write_deps_file.m"
                else
#line 2348 "write_deps_file.m"
                  {
#line 2348 "write_deps_file.m"
                    MR_Word base;
#line 2348 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2348 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2348 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2348 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2348 "write_deps_file.m"
                  }
#line 12373 "parse_tree.write_deps_file.c"
              }
#line 12375 "parse_tree.write_deps_file.c"
            else
#line 12377 "parse_tree.write_deps_file.c"
              {
#line 2331 "write_deps_file.m"
                {
#line 2331 "write_deps_file.m"
                  MR_Word base;
#line 2331 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2331 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2331 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2331 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2331 "write_deps_file.m"
                }
#line 2333 "write_deps_file.m"
                {
#line 2333 "write_deps_file.m"
                  mercury__io__seen_2_p_0();
#line 2333 "write_deps_file.m"
                  return;
                }
#line 12400 "parse_tree.write_deps_file.c"
              }
#line 12402 "parse_tree.write_deps_file.c"
          }
#line 2322 "write_deps_file.m"
      }
#line 2320 "write_deps_file.m"
  }
#line 75 "write_deps_file.m"
}

#line 2242 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0_1(
#line 2242 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2242 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 2242 "write_deps_file.m"
{
#line 2242 "write_deps_file.m"
  {
#line 2242 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 2242 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 2242 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__2_17;

#line 2242 "write_deps_file.m"
    {
#line 2242 "write_deps_file.m"
      parse_tree__write_deps_file__conv0_HeadVar__2_17 = parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2242__1_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 2242 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__2_17));
#line 2242 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 2242 "write_deps_file.m"
  }
#line 2242 "write_deps_file.m"
}

#line 64 "write_deps_file.m"
MR_Word MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0(
#line 64 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 64 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepModules0_5)
#line 64 "write_deps_file.m"
{
#line 2231 "write_deps_file.m"
  {
#line 2231 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2231 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_6;
#line 2231 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepModules_7;

#line 2232 "write_deps_file.m"
    {
#line 2232 "write_deps_file.m"
      parse_tree__write_deps_file__DepModules_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2232 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepModules_7, 0) = ((MR_Box) (parse_tree__write_deps_file__Module_4));
#line 2232 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepModules_7, 1) = ((MR_Box) (parse_tree__write_deps_file__DepModules0_5));
#line 2232 "write_deps_file.m"
    }
#line 2236 "write_deps_file.m"
    {
#line 2236 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__Module_4);
    }
#line 2241 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2238 "write_deps_file.m"
      {
#line 2238 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_10_10;
#line 2238 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_13_13;

#line 2239 "write_deps_file.m"
        {
#line 2239 "write_deps_file.m"
          parse_tree__write_deps_file__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2239 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_13_13, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[1]));
#line 2239 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_13_13, 1) = ((MR_Box) (parse_tree__write_deps_file__DepModules_7));
#line 2239 "write_deps_file.m"
        }
#line 2238 "write_deps_file.m"
        {
#line 2238 "write_deps_file.m"
          parse_tree__write_deps_file__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2238 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_10_10, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[0]));
#line 2238 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_10_10, 1) = ((MR_Box) (parse_tree__write_deps_file__V_13_13));
#line 2238 "write_deps_file.m"
        }
#line 2238 "write_deps_file.m"
        {
#line 2238 "write_deps_file.m"
          parse_tree__write_deps_file__Modules_6 = mercury__list__remove_dups_1_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__write_deps_file__V_10_10);
        }
#line 2238 "write_deps_file.m"
      }
#line 2241 "write_deps_file.m"
    else
#line 2249 "write_deps_file.m"
      {
#line 2249 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_23_23 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 2249 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_20_20;

#line 2250 "write_deps_file.m"
        {
#line 2250 "write_deps_file.m"
          parse_tree__write_deps_file__V_20_20 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__TypeCtorInfo_23_23, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[5], parse_tree__write_deps_file__DepModules_7);
        }
#line 2250 "write_deps_file.m"
        {
#line 2250 "write_deps_file.m"
          parse_tree__write_deps_file__Modules_6 = mercury__list__remove_dups_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__V_20_20);
        }
#line 2249 "write_deps_file.m"
      }
#line 2231 "write_deps_file.m"
    return parse_tree__write_deps_file__Modules_6;
#line 2231 "write_deps_file.m"
  }
#line 64 "write_deps_file.m"
}

#line 51 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_dep_file_6_p_0(
#line 51 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 51 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_8,
#line 51 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 51 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_10)
#line 51 "write_deps_file.m"
{
#line 1027 "write_deps_file.m"
  {
#line 1027 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1027 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_12;
#line 1027 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DepFileName_13;
#line 1027 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepResult_14;

#line 1028 "write_deps_file.m"
    {
#line 1028 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 44, &parse_tree__write_deps_file__Verbose_12);
    }
#line 1029 "write_deps_file.m"
    {
#line 1029 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dep", (MR_Integer) 0, &parse_tree__write_deps_file__DepFileName_13);
    }
#line 1031 "write_deps_file.m"
    {
#line 1031 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
#line 1032 "write_deps_file.m"
    {
#line 1032 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DepFileName_13);
    }
#line 1033 "write_deps_file.m"
    {
#line 1033 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
#line 1034 "write_deps_file.m"
    {
#line 1034 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DepFileName_13, &parse_tree__write_deps_file__DepResult_14);
    }
#line 1041 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DepResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1042 "write_deps_file.m"
      {
#line 1042 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));
#line 1042 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
#line 1042 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DepMessage_18;
#line 1042 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_34_34;
#line 1042 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_36_36;
#line 1042 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_37_37;
#line 1042 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_39_39;

#line 1043 "write_deps_file.m"
        {
#line 1043 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
#line 1044 "write_deps_file.m"
        {
#line 1044 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
#line 1045 "write_deps_file.m"
        {
#line 1045 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
#line 1047 "write_deps_file.m"
        {
#line 1047 "write_deps_file.m"
          parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
#line 1047 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1047 "write_deps_file.m"
        }
#line 1046 "write_deps_file.m"
        {
#line 1046 "write_deps_file.m"
          parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 1046 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1046 "write_deps_file.m"
        }
#line 1046 "write_deps_file.m"
        {
#line 1046 "write_deps_file.m"
          parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_13));
#line 1046 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 1046 "write_deps_file.m"
        }
#line 1046 "write_deps_file.m"
        {
#line 1046 "write_deps_file.m"
          parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1046 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1046 "write_deps_file.m"
        }
#line 1046 "write_deps_file.m"
        {
#line 1046 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__DepMessage_18);
        }
#line 1048 "write_deps_file.m"
        {
#line 1048 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DepMessage_18);
#line 1048 "write_deps_file.m"
          return;
        }
#line 1042 "write_deps_file.m"
      }
#line 1041 "write_deps_file.m"
    else
#line 1036 "write_deps_file.m"
      {
#line 1036 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DepStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));

#line 1037 "write_deps_file.m"
        {
#line 1037 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dep_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DepStream_15);
        }
#line 1039 "write_deps_file.m"
        {
#line 1039 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_15);
        }
#line 1040 "write_deps_file.m"
        {
#line 1040 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
#line 1040 "write_deps_file.m"
          return;
        }
#line 1036 "write_deps_file.m"
      }
#line 1027 "write_deps_file.m"
  }
#line 51 "write_deps_file.m"
}

#line 45 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_dv_file_6_p_0(
#line 45 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 45 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_8,
#line 45 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 45 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_10)
#line 45 "write_deps_file.m"
{
#line 1000 "write_deps_file.m"
  {
#line 1000 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1000 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_12;
#line 1000 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DvFileName_13;
#line 1000 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DvResult_14;

#line 1001 "write_deps_file.m"
    {
#line 1001 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 44, &parse_tree__write_deps_file__Verbose_12);
    }
#line 1002 "write_deps_file.m"
    {
#line 1002 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dv", (MR_Integer) 0, &parse_tree__write_deps_file__DvFileName_13);
    }
#line 1004 "write_deps_file.m"
    {
#line 1004 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
#line 1005 "write_deps_file.m"
    {
#line 1005 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DvFileName_13);
    }
#line 1006 "write_deps_file.m"
    {
#line 1006 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
#line 1007 "write_deps_file.m"
    {
#line 1007 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DvFileName_13, &parse_tree__write_deps_file__DvResult_14);
    }
#line 1014 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DvResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1015 "write_deps_file.m"
      {
#line 1015 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));
#line 1015 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
#line 1015 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DvMessage_18;
#line 1015 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_34_34;
#line 1015 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_36_36;
#line 1015 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_37_37;
#line 1015 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_39_39;

#line 1016 "write_deps_file.m"
        {
#line 1016 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
#line 1017 "write_deps_file.m"
        {
#line 1017 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
#line 1018 "write_deps_file.m"
        {
#line 1018 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
#line 1020 "write_deps_file.m"
        {
#line 1020 "write_deps_file.m"
          parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
#line 1020 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1020 "write_deps_file.m"
        }
#line 1019 "write_deps_file.m"
        {
#line 1019 "write_deps_file.m"
          parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 1019 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1019 "write_deps_file.m"
        }
#line 1019 "write_deps_file.m"
        {
#line 1019 "write_deps_file.m"
          parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_13));
#line 1019 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 1019 "write_deps_file.m"
        }
#line 1019 "write_deps_file.m"
        {
#line 1019 "write_deps_file.m"
          parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1019 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1019 "write_deps_file.m"
        }
#line 1019 "write_deps_file.m"
        {
#line 1019 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__DvMessage_18);
        }
#line 1021 "write_deps_file.m"
        {
#line 1021 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DvMessage_18);
#line 1021 "write_deps_file.m"
          return;
        }
#line 1015 "write_deps_file.m"
      }
#line 1014 "write_deps_file.m"
    else
#line 1009 "write_deps_file.m"
      {
#line 1009 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DvStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));

#line 1010 "write_deps_file.m"
        {
#line 1010 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dv_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DvStream_15);
        }
#line 1012 "write_deps_file.m"
        {
#line 1012 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DvStream_15);
        }
#line 1013 "write_deps_file.m"
        {
#line 1013 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
#line 1013 "write_deps_file.m"
          return;
        }
#line 1009 "write_deps_file.m"
      }
#line 1000 "write_deps_file.m"
  }
#line 45 "write_deps_file.m"
}

#line 678 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_7(
#line 678 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 678 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 678 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 678 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 678 "write_deps_file.m"
{
#line 678 "write_deps_file.m"
  {
#line 678 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 678 "write_deps_file.m"
    {
#line 678 "write_deps_file.m"
      parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 678 "write_deps_file.m"
      return;
    }
#line 678 "write_deps_file.m"
  }
#line 678 "write_deps_file.m"
}

#line 602 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_6(
#line 602 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 602 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 602 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 602 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 602 "write_deps_file.m"
{
#line 602 "write_deps_file.m"
  {
#line 602 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 602 "write_deps_file.m"
    {
#line 602 "write_deps_file.m"
      parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 7))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 602 "write_deps_file.m"
      return;
    }
#line 602 "write_deps_file.m"
  }
#line 602 "write_deps_file.m"
}

#line 585 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_5(
#line 585 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 585 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 585 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 585 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 585 "write_deps_file.m"
{
#line 585 "write_deps_file.m"
  {
#line 585 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 585 "write_deps_file.m"
    {
#line 585 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__585__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 585 "write_deps_file.m"
      return;
    }
#line 585 "write_deps_file.m"
  }
#line 585 "write_deps_file.m"
}

#line 541 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_4(
#line 541 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 541 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 541 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 541 "write_deps_file.m"
{
#line 541 "write_deps_file.m"
  {
#line 541 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 541 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 541 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv3_HeadVar__3_572;

#line 541 "write_deps_file.m"
    {
#line 541 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__541__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv3_HeadVar__3_572);
    }
#line 541 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 541 "write_deps_file.m"
      {
#line 541 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv3_HeadVar__3_572));
#line 541 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 541 "write_deps_file.m"
      }
#line 541 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 541 "write_deps_file.m"
  }
#line 541 "write_deps_file.m"
}

#line 367 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_3(
#line 367 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 367 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 367 "write_deps_file.m"
{
#line 367 "write_deps_file.m"
  {
#line 367 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 367 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 367 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv2_HeadVar__2_2;

#line 367 "write_deps_file.m"
    {
#line 367 "write_deps_file.m"
      parse_tree__write_deps_file__conv2_HeadVar__2_2 = mdbcomp__prim_data__get_ancestors_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 367 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__2_2));
#line 367 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 367 "write_deps_file.m"
  }
#line 367 "write_deps_file.m"
}

#line 345 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_2(
#line 345 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 345 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 345 "write_deps_file.m"
{
#line 345 "write_deps_file.m"
  {
#line 345 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 345 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 345 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv1_HeadVar__2_2;

#line 345 "write_deps_file.m"
    {
#line 345 "write_deps_file.m"
      parse_tree__write_deps_file__conv1_HeadVar__2_2 = mdbcomp__prim_data__get_ancestors_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 345 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_HeadVar__2_2));
#line 345 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 345 "write_deps_file.m"
  }
#line 345 "write_deps_file.m"
}

#line 265 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_1(
#line 265 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 265 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 265 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 265 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 265 "write_deps_file.m"
{
#line 265 "write_deps_file.m"
  {
#line 265 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 265 "write_deps_file.m"
    {
#line 265 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__265__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 265 "write_deps_file.m"
      return;
    }
#line 265 "write_deps_file.m"
  }
#line 265 "write_deps_file.m"
}

#line 39 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0(
#line 39 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 39 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_8,
#line 39 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__AllDepsSet_9,
#line 39 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MaybeTransOptDeps_10)
#line 39 "write_deps_file.m"
{
#line 105 "write_deps_file.m"
  {
#line 105 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 105 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 0)));
#line 105 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFileModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 1)));
#line 105 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 2)));
#line 105 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ParentDeps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 3)));
#line 105 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IntDeps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 4)));
#line 105 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ImplDeps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 5)));
#line 105 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IndirectDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 6)));
#line 105 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__InclDeps_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 8)));
#line 105 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__NestedDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 9)));
#line 105 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__FactDeps0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 10)));
#line 105 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ContainsForeignCode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 11)));
#line 105 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignImports0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 12)));
#line 105 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Items_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 14)));
#line 105 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_32;
#line 105 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_33;
#line 105 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DependencyFileName_34;
#line 105 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TransOptDateFileName_35;
#line 105 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TmpDependencyFileName_36;
#line 105 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Result_37;
#line 105 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_152_152;
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Children_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 7)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___ContainsForeignExport_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 13)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Specs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 15)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Error_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 16)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Timestamps_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 17)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___HasMain_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 18)));
#line 106 "write_deps_file.m"
    MR_String parse_tree__write_deps_file___Dir_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 19)));

#line 112 "write_deps_file.m"
    {
#line 112 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 44, &parse_tree__write_deps_file__Verbose_32);
    }
#line 113 "write_deps_file.m"
    {
#line 113 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_14, &parse_tree__write_deps_file__MakeVarName_33);
    }
#line 114 "write_deps_file.m"
    {
#line 114 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".d", (MR_Integer) 0, &parse_tree__write_deps_file__DependencyFileName_34);
    }
#line 116 "write_deps_file.m"
    {
#line 116 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".trans_opt_date", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptDateFileName_35);
    }
#line 123 "write_deps_file.m"
    {
#line 123 "write_deps_file.m"
      parse_tree__write_deps_file__V_152_152 = mercury__dir__dirname_1_f_0(parse_tree__write_deps_file__DependencyFileName_34);
    }
#line 123 "write_deps_file.m"
    {
#line 123 "write_deps_file.m"
      mercury__io__make_temp_5_p_0(parse_tree__write_deps_file__V_152_152, (MR_String) "tmp_d", &parse_tree__write_deps_file__TmpDependencyFileName_36);
    }
#line 125 "write_deps_file.m"
    {
#line 125 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_32, (MR_String) "% Writing auto-dependency file \140");
    }
#line 126 "write_deps_file.m"
    {
#line 126 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_32, parse_tree__write_deps_file__DependencyFileName_34);
    }
#line 127 "write_deps_file.m"
    {
#line 127 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_32, (MR_String) "\'...");
    }
#line 128 "write_deps_file.m"
    {
#line 128 "write_deps_file.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_32);
    }
#line 129 "write_deps_file.m"
    {
#line 129 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__TmpDependencyFileName_36, &parse_tree__write_deps_file__Result_37);
    }
#line 139 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result_37)) == (MR_mktag((MR_Integer) 1))))
#line 131 "write_deps_file.m"
      {
#line 131 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result_37, (MR_Integer) 0)));
#line 131 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_39;
#line 131 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Message_40;
#line 131 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_839_839;
#line 131 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_841_841;
#line 131 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_842_842;
#line 131 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_844_844;

#line 132 "write_deps_file.m"
        {
#line 132 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_32, (MR_String) " failed.\n");
        }
#line 133 "write_deps_file.m"
        {
#line 133 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_32);
        }
#line 134 "write_deps_file.m"
        {
#line 134 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_38, &parse_tree__write_deps_file__IOErrorMessage_39);
        }
#line 136 "write_deps_file.m"
        {
#line 136 "write_deps_file.m"
          parse_tree__write_deps_file__V_844_844 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 136 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_844_844, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_39));
#line 136 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_844_844, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 136 "write_deps_file.m"
        }
#line 136 "write_deps_file.m"
        {
#line 136 "write_deps_file.m"
          parse_tree__write_deps_file__V_842_842 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 136 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_842_842, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 136 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_842_842, 1) = ((MR_Box) (parse_tree__write_deps_file__V_844_844));
#line 136 "write_deps_file.m"
        }
#line 135 "write_deps_file.m"
        {
#line 135 "write_deps_file.m"
          parse_tree__write_deps_file__V_841_841 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 135 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_841_841, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_36));
#line 135 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_841_841, 1) = ((MR_Box) (parse_tree__write_deps_file__V_842_842));
#line 135 "write_deps_file.m"
        }
#line 135 "write_deps_file.m"
        {
#line 135 "write_deps_file.m"
          parse_tree__write_deps_file__V_839_839 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 135 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_839_839, 0) = ((MR_Box) ((MR_String) "error opening temporary file \140"));
#line 135 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_839_839, 1) = ((MR_Box) (parse_tree__write_deps_file__V_841_841));
#line 135 "write_deps_file.m"
        }
#line 135 "write_deps_file.m"
        {
#line 135 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_839_839, &parse_tree__write_deps_file__Message_40);
        }
#line 138 "write_deps_file.m"
        {
#line 138 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_40);
#line 138 "write_deps_file.m"
          return;
        }
#line 131 "write_deps_file.m"
      }
#line 139 "write_deps_file.m"
    else
#line 140 "write_deps_file.m"
      {
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_869_869 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_870_870;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DepStream_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Result_37, (MR_Integer) 0)));
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDeps0_42;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDepsSet0_44;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDepsSet_45;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDepsSet0_46;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDepsSet1_47;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDepsSet_48;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDeps_49;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDeps_50;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__AllDeps_51;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__FactDeps_52;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ErrFileName_61;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OptDateFileName_62;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__CDateFileName_63;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__AsmDateFileName_64;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__PicAsmDateFileName_65;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ObjFileName_66;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ILDateFileName_67;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__JavaDateFileName_68;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__PicObjFileName_69;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int0FileName_70;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__UseOptFiles_82;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Intermod_83;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IntermodDirs_84;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__HighLevelCode_91;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__CompilationTarget_92;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__CFileName_93;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__HeaderFileName_94;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__HeaderFileName2_95;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ILFileName_96;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__JavaFileName_97;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModuleDepFileName_98;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DateFileName_99;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Date0FileName_100;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__HaveMap_101;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModuleArg_102;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Target_103;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__SignAssembly_104;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DllFileName_105;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ClassFileName_106;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__BeamFileName_107;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__SubModules_108;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LangSet_111;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImports_112;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImportedModules_119;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IntFileName_129;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int2FileName_130;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int3FileName_131;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OptFileName_132;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__TransOptFileName_133;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Date3FileName_134;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__UseSubdirs_135;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Result3_136;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_245_245;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_248_248;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_249_249;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_251_251;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_252_252;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_254_254;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_255_255;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_257_257;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_258_258;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_260_260;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_261_261;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_263_263;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_264_264;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_266_266;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_267_267;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_269_269;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_271_271;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_274_274;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_449_449;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_452_452;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_453_453;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_455_455;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_456_456;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_458_458;
#line 140 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_468_468;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_471_471;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_474_474;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_476_476;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_477_477;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_479_479;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_480_480;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_482_482;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_484_484;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_486_486;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_487_487;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_489_489;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_490_490;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_492_492;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_494_494;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_495_495;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_497_497;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_511_511;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_514_514;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_515_515;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_517_517;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_532_532;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_570_570;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_628_628;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_631_631;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_632_632;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_634_634;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_635_635;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_637_637;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_639_639;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_640_640;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_642_642;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_643_643;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_645_645;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_647_647;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_648_648;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_650_650;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_651_651;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_653_653;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_655_655;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_656_656;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_658_658;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_659_659;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_661_661;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_663_663;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_664_664;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_666_666;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_667_667;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_669_669;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_671_671;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_672_672;
#line 140 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_674_674;
#line 203 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__SourceFileBase_60;
#line 505 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_109_109;
#line 505 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_110_110;
#line 599 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_882_882;
#line 686 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_892_892;

#line 141 "write_deps_file.m"
        {
#line 141 "write_deps_file.m"
          mercury__list__append_3_p_1(parse_tree__write_deps_file__TypeCtorInfo_869_869, parse_tree__write_deps_file__IntDeps_16, parse_tree__write_deps_file__ImplDeps_17, &parse_tree__write_deps_file__LongDeps0_42);
        }
#line 143 "write_deps_file.m"
        {
#line 143 "write_deps_file.m"
          mercury__set__list_to_set_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, parse_tree__write_deps_file__LongDeps0_42, &parse_tree__write_deps_file__LongDepsSet0_44);
        }
#line 144 "write_deps_file.m"
        {
#line 144 "write_deps_file.m"
          mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, ((MR_Box) (parse_tree__write_deps_file__ModuleName_14)), parse_tree__write_deps_file__LongDepsSet0_44, &parse_tree__write_deps_file__LongDepsSet_45);
        }
#line 145 "write_deps_file.m"
        {
#line 145 "write_deps_file.m"
          mercury__set__list_to_set_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, parse_tree__write_deps_file__IndirectDeps_18, &parse_tree__write_deps_file__ShortDepsSet0_46);
        }
#line 146 "write_deps_file.m"
        {
#line 146 "write_deps_file.m"
          mercury__set__difference_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, parse_tree__write_deps_file__ShortDepsSet0_46, parse_tree__write_deps_file__LongDepsSet_45, &parse_tree__write_deps_file__ShortDepsSet1_47);
        }
#line 147 "write_deps_file.m"
        {
#line 147 "write_deps_file.m"
          mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, ((MR_Box) (parse_tree__write_deps_file__ModuleName_14)), parse_tree__write_deps_file__ShortDepsSet1_47, &parse_tree__write_deps_file__ShortDepsSet_48);
        }
#line 148 "write_deps_file.m"
        {
#line 148 "write_deps_file.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, parse_tree__write_deps_file__LongDepsSet_45, &parse_tree__write_deps_file__LongDeps_49);
        }
#line 149 "write_deps_file.m"
        {
#line 149 "write_deps_file.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, parse_tree__write_deps_file__ShortDepsSet_48, &parse_tree__write_deps_file__ShortDeps_50);
        }
#line 150 "write_deps_file.m"
        {
#line 150 "write_deps_file.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, parse_tree__write_deps_file__AllDepsSet_9, &parse_tree__write_deps_file__AllDeps_51);
        }
#line 13649 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_870_870 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 151 "write_deps_file.m"
        {
#line 151 "write_deps_file.m"
          mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__FactDeps0_22, &parse_tree__write_deps_file__FactDeps_52);
        }
#line 164 "write_deps_file.m"
        if ((parse_tree__write_deps_file__MaybeTransOptDeps_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 165 "write_deps_file.m"
          {
#line 165 "write_deps_file.m"
          }
#line 164 "write_deps_file.m"
        else
#line 154 "write_deps_file.m"
          {
#line 154 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptDeps_10, (MR_Integer) 0)));
#line 154 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDepsSet0_54;
#line 154 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDepsSet_55;
#line 154 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDateDeps_56;
#line 154 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_162_162;

#line 155 "write_deps_file.m"
            {
#line 155 "write_deps_file.m"
              mercury__set__list_to_set_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, parse_tree__write_deps_file__TransOptDeps0_53, &parse_tree__write_deps_file__TransOptDepsSet0_54);
            }
#line 156 "write_deps_file.m"
            {
#line 156 "write_deps_file.m"
              mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, parse_tree__write_deps_file__TransOptDepsSet0_54, parse_tree__write_deps_file__LongDepsSet_45, &parse_tree__write_deps_file__TransOptDepsSet_55);
            }
#line 157 "write_deps_file.m"
            {
#line 157 "write_deps_file.m"
              mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, parse_tree__write_deps_file__TransOptDepsSet_55, &parse_tree__write_deps_file__TransOptDateDeps_56);
            }
#line 161 "write_deps_file.m"
            {
#line 161 "write_deps_file.m"
              parse_tree__write_deps_file__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_35));
#line 161 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])));
#line 161 "write_deps_file.m"
            }
#line 161 "write_deps_file.m"
            {
#line 161 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_162_162);
            }
#line 162 "write_deps_file.m"
            {
#line 162 "write_deps_file.m"
              parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__TransOptDateDeps_56, (MR_String) ".trans_opt", parse_tree__write_deps_file__DepStream_41);
            }
#line 154 "write_deps_file.m"
          }
#line 197 "write_deps_file.m"
        if ((parse_tree__write_deps_file__FactDeps_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "write_deps_file.m"
          {
#line 198 "write_deps_file.m"
          }
#line 197 "write_deps_file.m"
        else
#line 169 "write_deps_file.m"
          {
#line 169 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__AssumeGmake_59;
#line 169 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_169_169;
#line 169 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_172_172;

#line 171 "write_deps_file.m"
            {
#line 171 "write_deps_file.m"
              parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_33));
#line 171 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])));
#line 171 "write_deps_file.m"
            }
#line 170 "write_deps_file.m"
            {
#line 170 "write_deps_file.m"
              parse_tree__write_deps_file__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 170 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 170 "write_deps_file.m"
            }
#line 170 "write_deps_file.m"
            {
#line 170 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_169_169);
            }
#line 172 "write_deps_file.m"
            {
#line 172 "write_deps_file.m"
              parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__FactDeps_52, (MR_String) "", parse_tree__write_deps_file__DepStream_41);
            }
#line 173 "write_deps_file.m"
            {
#line 173 "write_deps_file.m"
              mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_41);
            }
#line 174 "write_deps_file.m"
            {
#line 174 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 114, &parse_tree__write_deps_file__AssumeGmake_59);
            }
#line 185 "write_deps_file.m"
            if ((parse_tree__write_deps_file__AssumeGmake_59 == (MR_Integer) 0))
#line 186 "write_deps_file.m"
              {
#line 186 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_180_180;
#line 186 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_187_187;
#line 186 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_190_190;

#line 187 "write_deps_file.m"
                {
#line 187 "write_deps_file.m"
                  parse_tree__write_deps_file__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_33));
#line 187 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[100])));
#line 187 "write_deps_file.m"
                }
#line 187 "write_deps_file.m"
                {
#line 187 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_180_180);
                }
#line 189 "write_deps_file.m"
                {
#line 189 "write_deps_file.m"
                  parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__FactDeps_52, (MR_String) ".c", parse_tree__write_deps_file__DepStream_41);
                }
#line 191 "write_deps_file.m"
                {
#line 191 "write_deps_file.m"
                  parse_tree__write_deps_file__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_33));
#line 191 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[101])));
#line 191 "write_deps_file.m"
                }
#line 191 "write_deps_file.m"
                {
#line 191 "write_deps_file.m"
                  parse_tree__write_deps_file__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 191 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 1) = ((MR_Box) (parse_tree__write_deps_file__V_190_190));
#line 191 "write_deps_file.m"
                }
#line 191 "write_deps_file.m"
                {
#line 191 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_187_187);
                }
#line 193 "write_deps_file.m"
                {
#line 193 "write_deps_file.m"
                  parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__FactDeps_52, (MR_String) ".\044O", parse_tree__write_deps_file__DepStream_41);
                }
#line 195 "write_deps_file.m"
                {
#line 195 "write_deps_file.m"
                  mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_41);
                }
#line 186 "write_deps_file.m"
              }
#line 185 "write_deps_file.m"
            else
#line 176 "write_deps_file.m"
              {
#line 176 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_197_197;
#line 176 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_200_200;
#line 176 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_201_201;
#line 176 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_203_203;
#line 176 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_204_204;
#line 176 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_206_206;
#line 176 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_207_207;
#line 176 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_209_209;

#line 182 "write_deps_file.m"
                {
#line 182 "write_deps_file.m"
                  parse_tree__write_deps_file__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_33));
#line 182 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102])));
#line 182 "write_deps_file.m"
                }
#line 181 "write_deps_file.m"
                {
#line 181 "write_deps_file.m"
                  parse_tree__write_deps_file__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs = \044("));
#line 181 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 1) = ((MR_Box) (parse_tree__write_deps_file__V_209_209));
#line 181 "write_deps_file.m"
                }
#line 180 "write_deps_file.m"
                {
#line 180 "write_deps_file.m"
                  parse_tree__write_deps_file__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_33));
#line 180 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 1) = ((MR_Box) (parse_tree__write_deps_file__V_207_207));
#line 180 "write_deps_file.m"
                }
#line 179 "write_deps_file.m"
                {
#line 179 "write_deps_file.m"
                  parse_tree__write_deps_file__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 0) = ((MR_Box) ((MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)\n\n"));
#line 179 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 1) = ((MR_Box) (parse_tree__write_deps_file__V_206_206));
#line 179 "write_deps_file.m"
                }
#line 179 "write_deps_file.m"
                {
#line 179 "write_deps_file.m"
                  parse_tree__write_deps_file__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_33));
#line 179 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 1) = ((MR_Box) (parse_tree__write_deps_file__V_204_204));
#line 179 "write_deps_file.m"
                }
#line 178 "write_deps_file.m"
                {
#line 178 "write_deps_file.m"
                  parse_tree__write_deps_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 0) = ((MR_Box) ((MR_String) ".fact_tables.os = \044("));
#line 178 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 1) = ((MR_Box) (parse_tree__write_deps_file__V_203_203));
#line 178 "write_deps_file.m"
                }
#line 178 "write_deps_file.m"
                {
#line 178 "write_deps_file.m"
                  parse_tree__write_deps_file__V_200_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_200_200, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_33));
#line 178 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_200_200, 1) = ((MR_Box) (parse_tree__write_deps_file__V_201_201));
#line 178 "write_deps_file.m"
                }
#line 177 "write_deps_file.m"
                {
#line 177 "write_deps_file.m"
                  parse_tree__write_deps_file__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 177 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 1) = ((MR_Box) (parse_tree__write_deps_file__V_200_200));
#line 177 "write_deps_file.m"
                }
#line 177 "write_deps_file.m"
                {
#line 177 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_197_197);
                }
#line 176 "write_deps_file.m"
              }
#line 169 "write_deps_file.m"
          }
#line 201 "write_deps_file.m"
        {
#line 201 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_12, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_60);
        }
#line 203 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 202 "write_deps_file.m"
          {
#line 202 "write_deps_file.m"
            {
#line 202 "write_deps_file.m"
              parse_tree__write_deps_file__ErrFileName_61 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__SourceFileBase_60, (MR_String) ".err");
            }
#line 202 "write_deps_file.m"
          }
#line 203 "write_deps_file.m"
        else
#line 204 "write_deps_file.m"
          {
#line 204 "write_deps_file.m"
            {
#line 204 "write_deps_file.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_deps_file", (MR_String) "predicate \140parse_tree.write_deps_file.write_dependency_file\'/6", (MR_String) "source file doesn\'t end in \140.m\'");
#line 204 "write_deps_file.m"
              return;
            }
#line 204 "write_deps_file.m"
          }
#line 206 "write_deps_file.m"
        {
#line 206 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".optdate", (MR_Integer) 1, &parse_tree__write_deps_file__OptDateFileName_62);
        }
#line 208 "write_deps_file.m"
        {
#line 208 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".c_date", (MR_Integer) 1, &parse_tree__write_deps_file__CDateFileName_63);
        }
#line 210 "write_deps_file.m"
        {
#line 210 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".s_date", (MR_Integer) 1, &parse_tree__write_deps_file__AsmDateFileName_64);
        }
#line 212 "write_deps_file.m"
        {
#line 212 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".pic_s_date", (MR_Integer) 1, &parse_tree__write_deps_file__PicAsmDateFileName_65);
        }
#line 214 "write_deps_file.m"
        {
#line 214 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".\044O", (MR_Integer) 1, &parse_tree__write_deps_file__ObjFileName_66);
        }
#line 216 "write_deps_file.m"
        {
#line 216 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".il_date", (MR_Integer) 1, &parse_tree__write_deps_file__ILDateFileName_67);
        }
#line 218 "write_deps_file.m"
        {
#line 218 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".java_date", (MR_Integer) 1, &parse_tree__write_deps_file__JavaDateFileName_68);
        }
#line 222 "write_deps_file.m"
        {
#line 222 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".pic_o", (MR_Integer) 1, &parse_tree__write_deps_file__PicObjFileName_69);
        }
#line 224 "write_deps_file.m"
        {
#line 224 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int0", (MR_Integer) 1, &parse_tree__write_deps_file__Int0FileName_70);
        }
#line 233 "write_deps_file.m"
        {
#line 233 "write_deps_file.m"
          parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_68));
#line 233 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 233 "write_deps_file.m"
        }
#line 233 "write_deps_file.m"
        {
#line 233 "write_deps_file.m"
          parse_tree__write_deps_file__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 0) = ((MR_Box) ((MR_String) " "));
#line 233 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 233 "write_deps_file.m"
        }
#line 232 "write_deps_file.m"
        {
#line 232 "write_deps_file.m"
          parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) (parse_tree__write_deps_file__ILDateFileName_67));
#line 232 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_267_267));
#line 232 "write_deps_file.m"
        }
#line 232 "write_deps_file.m"
        {
#line 232 "write_deps_file.m"
          parse_tree__write_deps_file__V_264_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 0) = ((MR_Box) ((MR_String) " "));
#line 232 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 232 "write_deps_file.m"
        }
#line 231 "write_deps_file.m"
        {
#line 231 "write_deps_file.m"
          parse_tree__write_deps_file__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 0) = ((MR_Box) (parse_tree__write_deps_file__PicAsmDateFileName_65));
#line 231 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 1) = ((MR_Box) (parse_tree__write_deps_file__V_264_264));
#line 231 "write_deps_file.m"
        }
#line 231 "write_deps_file.m"
        {
#line 231 "write_deps_file.m"
          parse_tree__write_deps_file__V_261_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_261_261, 0) = ((MR_Box) ((MR_String) " "));
#line 231 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_261_261, 1) = ((MR_Box) (parse_tree__write_deps_file__V_263_263));
#line 231 "write_deps_file.m"
        }
#line 230 "write_deps_file.m"
        {
#line 230 "write_deps_file.m"
          parse_tree__write_deps_file__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 0) = ((MR_Box) (parse_tree__write_deps_file__AsmDateFileName_64));
#line 230 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 1) = ((MR_Box) (parse_tree__write_deps_file__V_261_261));
#line 230 "write_deps_file.m"
        }
#line 230 "write_deps_file.m"
        {
#line 230 "write_deps_file.m"
          parse_tree__write_deps_file__V_258_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_258_258, 0) = ((MR_Box) ((MR_String) " "));
#line 230 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_258_258, 1) = ((MR_Box) (parse_tree__write_deps_file__V_260_260));
#line 230 "write_deps_file.m"
        }
#line 229 "write_deps_file.m"
        {
#line 229 "write_deps_file.m"
          parse_tree__write_deps_file__V_257_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_257_257, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
#line 229 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_257_257, 1) = ((MR_Box) (parse_tree__write_deps_file__V_258_258));
#line 229 "write_deps_file.m"
        }
#line 229 "write_deps_file.m"
        {
#line 229 "write_deps_file.m"
          parse_tree__write_deps_file__V_255_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_255_255, 0) = ((MR_Box) ((MR_String) " "));
#line 229 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_255_255, 1) = ((MR_Box) (parse_tree__write_deps_file__V_257_257));
#line 229 "write_deps_file.m"
        }
#line 228 "write_deps_file.m"
        {
#line 228 "write_deps_file.m"
          parse_tree__write_deps_file__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_61));
#line 228 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 1) = ((MR_Box) (parse_tree__write_deps_file__V_255_255));
#line 228 "write_deps_file.m"
        }
#line 228 "write_deps_file.m"
        {
#line 228 "write_deps_file.m"
          parse_tree__write_deps_file__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 0) = ((MR_Box) ((MR_String) " "));
#line 228 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 1) = ((MR_Box) (parse_tree__write_deps_file__V_254_254));
#line 228 "write_deps_file.m"
        }
#line 227 "write_deps_file.m"
        {
#line 227 "write_deps_file.m"
          parse_tree__write_deps_file__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_35));
#line 227 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 1) = ((MR_Box) (parse_tree__write_deps_file__V_252_252));
#line 227 "write_deps_file.m"
        }
#line 227 "write_deps_file.m"
        {
#line 227 "write_deps_file.m"
          parse_tree__write_deps_file__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 0) = ((MR_Box) ((MR_String) " "));
#line 227 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 1) = ((MR_Box) (parse_tree__write_deps_file__V_251_251));
#line 227 "write_deps_file.m"
        }
#line 226 "write_deps_file.m"
        {
#line 226 "write_deps_file.m"
          parse_tree__write_deps_file__V_248_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_248_248, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
#line 226 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_248_248, 1) = ((MR_Box) (parse_tree__write_deps_file__V_249_249));
#line 226 "write_deps_file.m"
        }
#line 226 "write_deps_file.m"
        {
#line 226 "write_deps_file.m"
          parse_tree__write_deps_file__V_245_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 226 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 1) = ((MR_Box) (parse_tree__write_deps_file__V_248_248));
#line 226 "write_deps_file.m"
        }
#line 226 "write_deps_file.m"
        {
#line 226 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_245_245);
        }
#line 236 "write_deps_file.m"
        {
#line 236 "write_deps_file.m"
          parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 236 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "write_deps_file.m"
        }
#line 236 "write_deps_file.m"
        {
#line 236 "write_deps_file.m"
          parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) ((MR_String) " : "));
#line 236 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_274_274));
#line 236 "write_deps_file.m"
        }
#line 236 "write_deps_file.m"
        {
#line 236 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_271_271);
        }
#line 242 "write_deps_file.m"
        if ((parse_tree__write_deps_file__InclDeps_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 243 "write_deps_file.m"
          {
#line 243 "write_deps_file.m"
          }
#line 242 "write_deps_file.m"
        else
#line 240 "write_deps_file.m"
          {
#line 240 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_276_276;
#line 240 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_279_279;

#line 241 "write_deps_file.m"
            {
#line 241 "write_deps_file.m"
              parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_70));
#line 241 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "write_deps_file.m"
            }
#line 241 "write_deps_file.m"
            {
#line 241 "write_deps_file.m"
              parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) ((MR_String) " "));
#line 241 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 241 "write_deps_file.m"
            }
#line 241 "write_deps_file.m"
            {
#line 241 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_276_276);
            }
#line 240 "write_deps_file.m"
          }
#line 245 "write_deps_file.m"
        {
#line 245 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_15, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_41);
        }
#line 246 "write_deps_file.m"
        {
#line 246 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__LongDeps_49, (MR_String) ".int", parse_tree__write_deps_file__DepStream_41);
        }
#line 247 "write_deps_file.m"
        {
#line 247 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ShortDeps_50, (MR_String) ".int2", parse_tree__write_deps_file__DepStream_41);
        }
#line 263 "write_deps_file.m"
        if ((parse_tree__write_deps_file__NestedDeps_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 262 "write_deps_file.m"
          {
#line 262 "write_deps_file.m"
          }
#line 263 "write_deps_file.m"
        else
#line 264 "write_deps_file.m"
          {
#line 264 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Write_76;
#line 272 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_318_318;

#line 265 "write_deps_file.m"
            {
#line 265 "write_deps_file.m"
              parse_tree__write_deps_file__Write_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 265 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_76, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
#line 265 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_76, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_1));
#line 265 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 265 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_76, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 265 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_76, 4) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 265 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_76, 5) = ((MR_Box) (parse_tree__write_deps_file__NestedDeps_21));
#line 265 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_76, 6) = ((MR_Box) (parse_tree__write_deps_file__DepStream_41));
#line 265 "write_deps_file.m"
            }
#line 272 "write_deps_file.m"
            {
#line 272 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_870_870, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Write_76, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[9]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_318_318);
            }
#line 264 "write_deps_file.m"
          }
#line 284 "write_deps_file.m"
        if ((parse_tree__write_deps_file__FactDeps_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "write_deps_file.m"
          {
#line 285 "write_deps_file.m"
          }
#line 284 "write_deps_file.m"
        else
#line 275 "write_deps_file.m"
          {
#line 275 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_319_319;
#line 275 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_322_322;
#line 275 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_323_323;
#line 275 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_325_325;
#line 275 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_327_327;
#line 275 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_328_328;
#line 275 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_330_330;
#line 275 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_331_331;
#line 275 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_333_333;
#line 275 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_334_334;
#line 275 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_336_336;
#line 275 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_338_338;
#line 275 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_339_339;
#line 275 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_341_341;

#line 281 "write_deps_file.m"
            {
#line 281 "write_deps_file.m"
              parse_tree__write_deps_file__V_341_341 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_341_341, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_66));
#line 281 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_341_341, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])));
#line 281 "write_deps_file.m"
            }
#line 281 "write_deps_file.m"
            {
#line 281 "write_deps_file.m"
              parse_tree__write_deps_file__V_339_339 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs) : "));
#line 281 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 1) = ((MR_Box) (parse_tree__write_deps_file__V_341_341));
#line 281 "write_deps_file.m"
            }
#line 281 "write_deps_file.m"
            {
#line 281 "write_deps_file.m"
              parse_tree__write_deps_file__V_338_338 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_338_338, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_33));
#line 281 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_338_338, 1) = ((MR_Box) (parse_tree__write_deps_file__V_339_339));
#line 281 "write_deps_file.m"
            }
#line 280 "write_deps_file.m"
            {
#line 280 "write_deps_file.m"
              parse_tree__write_deps_file__V_336_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 0) = ((MR_Box) ((MR_String) "\044("));
#line 280 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 1) = ((MR_Box) (parse_tree__write_deps_file__V_338_338));
#line 280 "write_deps_file.m"
            }
#line 280 "write_deps_file.m"
            {
#line 280 "write_deps_file.m"
              parse_tree__write_deps_file__V_334_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 280 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 1) = ((MR_Box) (parse_tree__write_deps_file__V_336_336));
#line 280 "write_deps_file.m"
            }
#line 279 "write_deps_file.m"
            {
#line 279 "write_deps_file.m"
              parse_tree__write_deps_file__V_333_333 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_333_333, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 279 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_333_333, 1) = ((MR_Box) (parse_tree__write_deps_file__V_334_334));
#line 279 "write_deps_file.m"
            }
#line 279 "write_deps_file.m"
            {
#line 279 "write_deps_file.m"
              parse_tree__write_deps_file__V_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 0) = ((MR_Box) ((MR_String) ".fact_tables) "));
#line 279 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 1) = ((MR_Box) (parse_tree__write_deps_file__V_333_333));
#line 279 "write_deps_file.m"
            }
#line 278 "write_deps_file.m"
            {
#line 278 "write_deps_file.m"
              parse_tree__write_deps_file__V_330_330 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_330_330, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_33));
#line 278 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_330_330, 1) = ((MR_Box) (parse_tree__write_deps_file__V_331_331));
#line 278 "write_deps_file.m"
            }
#line 278 "write_deps_file.m"
            {
#line 278 "write_deps_file.m"
              parse_tree__write_deps_file__V_328_328 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_328_328, 0) = ((MR_Box) ((MR_String) ".fact_tables.os) : \044("));
#line 278 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_328_328, 1) = ((MR_Box) (parse_tree__write_deps_file__V_330_330));
#line 278 "write_deps_file.m"
            }
#line 278 "write_deps_file.m"
            {
#line 278 "write_deps_file.m"
              parse_tree__write_deps_file__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_33));
#line 278 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 1) = ((MR_Box) (parse_tree__write_deps_file__V_328_328));
#line 278 "write_deps_file.m"
            }
#line 277 "write_deps_file.m"
            {
#line 277 "write_deps_file.m"
              parse_tree__write_deps_file__V_325_325 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_325_325, 0) = ((MR_Box) ((MR_String) "\044("));
#line 277 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_325_325, 1) = ((MR_Box) (parse_tree__write_deps_file__V_327_327));
#line 277 "write_deps_file.m"
            }
#line 277 "write_deps_file.m"
            {
#line 277 "write_deps_file.m"
              parse_tree__write_deps_file__V_323_323 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_323_323, 0) = ((MR_Box) ((MR_String) ".fact_tables)\n\n"));
#line 277 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_323_323, 1) = ((MR_Box) (parse_tree__write_deps_file__V_325_325));
#line 277 "write_deps_file.m"
            }
#line 277 "write_deps_file.m"
            {
#line 277 "write_deps_file.m"
              parse_tree__write_deps_file__V_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_33));
#line 277 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 1) = ((MR_Box) (parse_tree__write_deps_file__V_323_323));
#line 277 "write_deps_file.m"
            }
#line 276 "write_deps_file.m"
            {
#line 276 "write_deps_file.m"
              parse_tree__write_deps_file__V_319_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_319_319, 0) = ((MR_Box) ((MR_String) " \\\n\t\044("));
#line 276 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_319_319, 1) = ((MR_Box) (parse_tree__write_deps_file__V_322_322));
#line 276 "write_deps_file.m"
            }
#line 276 "write_deps_file.m"
            {
#line 276 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_319_319);
            }
#line 275 "write_deps_file.m"
          }
#line 288 "write_deps_file.m"
        {
#line 288 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 327, &parse_tree__write_deps_file__UseOptFiles_82);
        }
#line 289 "write_deps_file.m"
        {
#line 289 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 325, &parse_tree__write_deps_file__Intermod_83);
        }
#line 291 "write_deps_file.m"
        {
#line 291 "write_deps_file.m"
          libs__globals__lookup_accumulating_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 642, &parse_tree__write_deps_file__IntermodDirs_84);
        }
#line 301 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Intermod_83 == (MR_Integer) 0))
#line 302 "write_deps_file.m"
          {
#line 302 "write_deps_file.m"
          }
#line 301 "write_deps_file.m"
        else
#line 298 "write_deps_file.m"
          {
#line 298 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_348_348;
#line 298 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_351_351;

#line 299 "write_deps_file.m"
            {
#line 299 "write_deps_file.m"
              parse_tree__write_deps_file__V_351_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_66));
#line 299 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 299 "write_deps_file.m"
            }
#line 299 "write_deps_file.m"
            {
#line 299 "write_deps_file.m"
              parse_tree__write_deps_file__V_348_348 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_348_348, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 299 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_348_348, 1) = ((MR_Box) (parse_tree__write_deps_file__V_351_351));
#line 299 "write_deps_file.m"
            }
#line 299 "write_deps_file.m"
            {
#line 299 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_348_348);
            }
#line 300 "write_deps_file.m"
            {
#line 300 "write_deps_file.m"
              parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__AllDeps_51, (MR_String) ".mh", parse_tree__write_deps_file__DepStream_41);
            }
#line 298 "write_deps_file.m"
          }
#line 305 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Intermod_83 == (MR_Integer) 1);
#line 306 "write_deps_file.m"
        if (!(parse_tree__write_deps_file__succeeded))
#line 306 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseOptFiles_82 == (MR_Integer) 1);
#line 373 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 318 "write_deps_file.m"
          {
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOpt_85;
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__UseTransOpt_86;
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_357_357;
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_360_360;
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_361_361;
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_363_363;
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_364_364;
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_366_366;
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_367_367;
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_369_369;
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_370_370;
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_372_372;
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_373_373;
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_375_375;
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_376_376;
#line 318 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_378_378;

#line 316 "write_deps_file.m"
            {
#line 316 "write_deps_file.m"
              parse_tree__write_deps_file__V_378_378 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_378_378, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_68));
#line 316 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_378_378, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 316 "write_deps_file.m"
            }
#line 316 "write_deps_file.m"
            {
#line 316 "write_deps_file.m"
              parse_tree__write_deps_file__V_376_376 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_376_376, 0) = ((MR_Box) ((MR_String) " "));
#line 316 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_376_376, 1) = ((MR_Box) (parse_tree__write_deps_file__V_378_378));
#line 316 "write_deps_file.m"
            }
#line 315 "write_deps_file.m"
            {
#line 315 "write_deps_file.m"
              parse_tree__write_deps_file__V_375_375 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_375_375, 0) = ((MR_Box) (parse_tree__write_deps_file__ILDateFileName_67));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_375_375, 1) = ((MR_Box) (parse_tree__write_deps_file__V_376_376));
#line 315 "write_deps_file.m"
            }
#line 315 "write_deps_file.m"
            {
#line 315 "write_deps_file.m"
              parse_tree__write_deps_file__V_373_373 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_373_373, 0) = ((MR_Box) ((MR_String) " "));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_373_373, 1) = ((MR_Box) (parse_tree__write_deps_file__V_375_375));
#line 315 "write_deps_file.m"
            }
#line 314 "write_deps_file.m"
            {
#line 314 "write_deps_file.m"
              parse_tree__write_deps_file__V_372_372 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_372_372, 0) = ((MR_Box) (parse_tree__write_deps_file__PicAsmDateFileName_65));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_372_372, 1) = ((MR_Box) (parse_tree__write_deps_file__V_373_373));
#line 314 "write_deps_file.m"
            }
#line 314 "write_deps_file.m"
            {
#line 314 "write_deps_file.m"
              parse_tree__write_deps_file__V_370_370 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_370_370, 0) = ((MR_Box) ((MR_String) " "));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_370_370, 1) = ((MR_Box) (parse_tree__write_deps_file__V_372_372));
#line 314 "write_deps_file.m"
            }
#line 313 "write_deps_file.m"
            {
#line 313 "write_deps_file.m"
              parse_tree__write_deps_file__V_369_369 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_369_369, 0) = ((MR_Box) (parse_tree__write_deps_file__AsmDateFileName_64));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_369_369, 1) = ((MR_Box) (parse_tree__write_deps_file__V_370_370));
#line 313 "write_deps_file.m"
            }
#line 313 "write_deps_file.m"
            {
#line 313 "write_deps_file.m"
              parse_tree__write_deps_file__V_367_367 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_367_367, 0) = ((MR_Box) ((MR_String) " "));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_367_367, 1) = ((MR_Box) (parse_tree__write_deps_file__V_369_369));
#line 313 "write_deps_file.m"
            }
#line 312 "write_deps_file.m"
            {
#line 312 "write_deps_file.m"
              parse_tree__write_deps_file__V_366_366 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_366_366, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
#line 312 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_366_366, 1) = ((MR_Box) (parse_tree__write_deps_file__V_367_367));
#line 312 "write_deps_file.m"
            }
#line 312 "write_deps_file.m"
            {
#line 312 "write_deps_file.m"
              parse_tree__write_deps_file__V_364_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_364_364, 0) = ((MR_Box) ((MR_String) " "));
#line 312 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_364_364, 1) = ((MR_Box) (parse_tree__write_deps_file__V_366_366));
#line 312 "write_deps_file.m"
            }
#line 311 "write_deps_file.m"
            {
#line 311 "write_deps_file.m"
              parse_tree__write_deps_file__V_363_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_61));
#line 311 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 1) = ((MR_Box) (parse_tree__write_deps_file__V_364_364));
#line 311 "write_deps_file.m"
            }
#line 311 "write_deps_file.m"
            {
#line 311 "write_deps_file.m"
              parse_tree__write_deps_file__V_361_361 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_361_361, 0) = ((MR_Box) ((MR_String) " "));
#line 311 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_361_361, 1) = ((MR_Box) (parse_tree__write_deps_file__V_363_363));
#line 311 "write_deps_file.m"
            }
#line 310 "write_deps_file.m"
            {
#line 310 "write_deps_file.m"
              parse_tree__write_deps_file__V_360_360 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_35));
#line 310 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 1) = ((MR_Box) (parse_tree__write_deps_file__V_361_361));
#line 310 "write_deps_file.m"
            }
#line 309 "write_deps_file.m"
            {
#line 309 "write_deps_file.m"
              parse_tree__write_deps_file__V_357_357 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 309 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 1) = ((MR_Box) (parse_tree__write_deps_file__V_360_360));
#line 309 "write_deps_file.m"
            }
#line 309 "write_deps_file.m"
            {
#line 309 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_357_357);
            }
#line 330 "write_deps_file.m"
            {
#line 330 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 329, &parse_tree__write_deps_file__TransOpt_85);
            }
#line 332 "write_deps_file.m"
            {
#line 332 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 328, &parse_tree__write_deps_file__UseTransOpt_86);
            }
#line 336 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__TransOpt_85 == (MR_Integer) 1);
#line 337 "write_deps_file.m"
            if (!(parse_tree__write_deps_file__succeeded))
#line 337 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseTransOpt_86 == (MR_Integer) 1);
#line 362 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 340 "write_deps_file.m"
              {
#line 340 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__BuildOptFiles_87;
#line 340 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptDeps_88;
#line 340 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__TransOptDeps_89;
#line 340 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptInt0Deps_90;
#line 340 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_384_384;
#line 340 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_386_386;
#line 340 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_387_387;
#line 340 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_393_393;

#line 340 "write_deps_file.m"
                {
#line 340 "write_deps_file.m"
                  mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseTransOpt_86, &parse_tree__write_deps_file__BuildOptFiles_87);
                }
#line 341 "write_deps_file.m"
                {
#line 341 "write_deps_file.m"
                  parse_tree__write_deps_file__V_384_384 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_384_384, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 341 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_384_384, 1) = ((MR_Box) (parse_tree__write_deps_file__LongDeps_49));
#line 341 "write_deps_file.m"
                }
#line 341 "write_deps_file.m"
                {
#line 341 "write_deps_file.m"
                  parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__BuildOptFiles_87, parse_tree__write_deps_file__V_384_384, parse_tree__write_deps_file__IntermodDirs_84, &parse_tree__write_deps_file__OptDeps_88, &parse_tree__write_deps_file__TransOptDeps_89);
                }
#line 345 "write_deps_file.m"
                {
#line 345 "write_deps_file.m"
                  parse_tree__write_deps_file__V_387_387 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[3], parse_tree__write_deps_file__OptDeps_88);
                }
#line 344 "write_deps_file.m"
                {
#line 344 "write_deps_file.m"
                  parse_tree__write_deps_file__V_386_386 = mercury__list__condense_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, parse_tree__write_deps_file__V_387_387);
                }
#line 344 "write_deps_file.m"
                {
#line 344 "write_deps_file.m"
                  parse_tree__write_deps_file__OptInt0Deps_90 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, parse_tree__write_deps_file__V_386_386);
                }
#line 346 "write_deps_file.m"
                {
#line 346 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptDeps_88, (MR_String) ".opt", parse_tree__write_deps_file__DepStream_41);
                }
#line 348 "write_deps_file.m"
                {
#line 348 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptInt0Deps_90, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_41);
                }
#line 351 "write_deps_file.m"
                {
#line 351 "write_deps_file.m"
                  parse_tree__write_deps_file__V_393_393 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_393_393, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 351 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_393_393, 1) = ((MR_Box) (parse_tree__write_deps_file__V_363_363));
#line 351 "write_deps_file.m"
                }
#line 351 "write_deps_file.m"
                {
#line 351 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_393_393);
                }
#line 360 "write_deps_file.m"
                {
#line 360 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__TransOptDeps_89, (MR_String) ".trans_opt", parse_tree__write_deps_file__DepStream_41);
                }
#line 340 "write_deps_file.m"
              }
#line 362 "write_deps_file.m"
            else
#line 363 "write_deps_file.m"
              {
#line 363 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_417_417;
#line 363 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_420_420;
#line 363 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_421_421;
#line 363 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__BuildOptFiles_850;
#line 363 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptDeps_851;
#line 363 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptInt0Deps_852;

#line 363 "write_deps_file.m"
                {
#line 363 "write_deps_file.m"
                  mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseOptFiles_82, &parse_tree__write_deps_file__BuildOptFiles_850);
                }
#line 364 "write_deps_file.m"
                {
#line 364 "write_deps_file.m"
                  parse_tree__write_deps_file__V_417_417 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_417_417, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 364 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_417_417, 1) = ((MR_Box) (parse_tree__write_deps_file__LongDeps_49));
#line 364 "write_deps_file.m"
                }
#line 364 "write_deps_file.m"
                {
#line 364 "write_deps_file.m"
                  parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__BuildOptFiles_850, parse_tree__write_deps_file__V_417_417, parse_tree__write_deps_file__IntermodDirs_84, (MR_String) ".opt", &parse_tree__write_deps_file__OptDeps_851);
                }
#line 367 "write_deps_file.m"
                {
#line 367 "write_deps_file.m"
                  parse_tree__write_deps_file__V_421_421 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[4], parse_tree__write_deps_file__OptDeps_851);
                }
#line 366 "write_deps_file.m"
                {
#line 366 "write_deps_file.m"
                  parse_tree__write_deps_file__V_420_420 = mercury__list__condense_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, parse_tree__write_deps_file__V_421_421);
                }
#line 366 "write_deps_file.m"
                {
#line 366 "write_deps_file.m"
                  parse_tree__write_deps_file__OptInt0Deps_852 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_869_869, parse_tree__write_deps_file__V_420_420);
                }
#line 368 "write_deps_file.m"
                {
#line 368 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptDeps_851, (MR_String) ".opt", parse_tree__write_deps_file__DepStream_41);
                }
#line 370 "write_deps_file.m"
                {
#line 370 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptInt0Deps_852, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_41);
                }
#line 363 "write_deps_file.m"
              }
#line 318 "write_deps_file.m"
          }
#line 373 "write_deps_file.m"
        else
#line 370 "write_deps_file.m"
          {
#line 370 "write_deps_file.m"
          }
#line 377 "write_deps_file.m"
        {
#line 377 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 250, &parse_tree__write_deps_file__HighLevelCode_91);
        }
#line 378 "write_deps_file.m"
        {
#line 378 "write_deps_file.m"
          libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_7, &parse_tree__write_deps_file__CompilationTarget_92);
        }
#line 380 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__HighLevelCode_91 == (MR_Integer) 1);
#line 380 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 381 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__CompilationTarget_92 == (MR_Integer) 0);
#line 394 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 392 "write_deps_file.m"
          {
#line 392 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_428_428;
#line 392 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_431_431;
#line 392 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_432_432;
#line 392 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_434_434;

#line 390 "write_deps_file.m"
            {
#line 390 "write_deps_file.m"
              parse_tree__write_deps_file__V_434_434 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_434_434, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_66));
#line 390 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_434_434, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])));
#line 390 "write_deps_file.m"
            }
#line 390 "write_deps_file.m"
            {
#line 390 "write_deps_file.m"
              parse_tree__write_deps_file__V_432_432 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_432_432, 0) = ((MR_Box) ((MR_String) " "));
#line 390 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_432_432, 1) = ((MR_Box) (parse_tree__write_deps_file__V_434_434));
#line 390 "write_deps_file.m"
            }
#line 389 "write_deps_file.m"
            {
#line 389 "write_deps_file.m"
              parse_tree__write_deps_file__V_431_431 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_431_431, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_69));
#line 389 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_431_431, 1) = ((MR_Box) (parse_tree__write_deps_file__V_432_432));
#line 389 "write_deps_file.m"
            }
#line 388 "write_deps_file.m"
            {
#line 388 "write_deps_file.m"
              parse_tree__write_deps_file__V_428_428 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_428_428, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 388 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_428_428, 1) = ((MR_Box) (parse_tree__write_deps_file__V_431_431));
#line 388 "write_deps_file.m"
            }
#line 388 "write_deps_file.m"
            {
#line 388 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_428_428);
            }
#line 393 "write_deps_file.m"
            {
#line 393 "write_deps_file.m"
              parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__AllDeps_51, (MR_String) ".mih", parse_tree__write_deps_file__DepStream_41);
            }
#line 392 "write_deps_file.m"
          }
#line 394 "write_deps_file.m"
        else
#line 393 "write_deps_file.m"
          {
#line 393 "write_deps_file.m"
          }
#line 407 "write_deps_file.m"
        {
#line 407 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".c", (MR_Integer) 1, &parse_tree__write_deps_file__CFileName_93);
        }
#line 409 "write_deps_file.m"
        {
#line 409 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".mh", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName_94);
        }
#line 411 "write_deps_file.m"
        {
#line 411 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".mih", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName2_95);
        }
#line 415 "write_deps_file.m"
        {
#line 415 "write_deps_file.m"
          parse_tree__write_deps_file__V_458_458 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_458_458, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_93));
#line 415 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_458_458, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])));
#line 415 "write_deps_file.m"
        }
#line 415 "write_deps_file.m"
        {
#line 415 "write_deps_file.m"
          parse_tree__write_deps_file__V_456_456 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_456_456, 0) = ((MR_Box) ((MR_String) " : "));
#line 415 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_456_456, 1) = ((MR_Box) (parse_tree__write_deps_file__V_458_458));
#line 415 "write_deps_file.m"
        }
#line 415 "write_deps_file.m"
        {
#line 415 "write_deps_file.m"
          parse_tree__write_deps_file__V_455_455 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_455_455, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName2_95));
#line 415 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_455_455, 1) = ((MR_Box) (parse_tree__write_deps_file__V_456_456));
#line 415 "write_deps_file.m"
        }
#line 415 "write_deps_file.m"
        {
#line 415 "write_deps_file.m"
          parse_tree__write_deps_file__V_453_453 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_453_453, 0) = ((MR_Box) ((MR_String) " "));
#line 415 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_453_453, 1) = ((MR_Box) (parse_tree__write_deps_file__V_455_455));
#line 415 "write_deps_file.m"
        }
#line 414 "write_deps_file.m"
        {
#line 414 "write_deps_file.m"
          parse_tree__write_deps_file__V_452_452 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_452_452, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName_94));
#line 414 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_452_452, 1) = ((MR_Box) (parse_tree__write_deps_file__V_453_453));
#line 414 "write_deps_file.m"
        }
#line 413 "write_deps_file.m"
        {
#line 413 "write_deps_file.m"
          parse_tree__write_deps_file__V_449_449 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_449_449, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 413 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_449_449, 1) = ((MR_Box) (parse_tree__write_deps_file__V_452_452));
#line 413 "write_deps_file.m"
        }
#line 413 "write_deps_file.m"
        {
#line 413 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_449_449);
        }
#line 421 "write_deps_file.m"
        {
#line 421 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".il", (MR_Integer) 1, &parse_tree__write_deps_file__ILFileName_96);
        }
#line 423 "write_deps_file.m"
        {
#line 423 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".java", (MR_Integer) 1, &parse_tree__write_deps_file__JavaFileName_97);
        }
#line 425 "write_deps_file.m"
        {
#line 425 "write_deps_file.m"
          parse_tree__write_deps_file__V_468_468 = make__make_module_dep_file_extension_0_f_0();
        }
#line 425 "write_deps_file.m"
        {
#line 425 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__V_468_468, (MR_Integer) 1, &parse_tree__write_deps_file__ModuleDepFileName_98);
        }
#line 436 "write_deps_file.m"
        {
#line 436 "write_deps_file.m"
          parse_tree__write_deps_file__V_497_497 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_497_497, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_93));
#line 436 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_497_497, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12])));
#line 436 "write_deps_file.m"
        }
#line 436 "write_deps_file.m"
        {
#line 436 "write_deps_file.m"
          parse_tree__write_deps_file__V_495_495 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_495_495, 0) = ((MR_Box) ((MR_String) " : "));
#line 436 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_495_495, 1) = ((MR_Box) (parse_tree__write_deps_file__V_497_497));
#line 436 "write_deps_file.m"
        }
#line 435 "write_deps_file.m"
        {
#line 435 "write_deps_file.m"
          parse_tree__write_deps_file__V_494_494 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_494_494, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_98));
#line 435 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_494_494, 1) = ((MR_Box) (parse_tree__write_deps_file__V_495_495));
#line 435 "write_deps_file.m"
        }
#line 434 "write_deps_file.m"
        {
#line 434 "write_deps_file.m"
          parse_tree__write_deps_file__V_492_492 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_492_492, 0) = ((MR_Box) ((MR_String) " else\n"));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_492_492, 1) = ((MR_Box) (parse_tree__write_deps_file__V_494_494));
#line 434 "write_deps_file.m"
        }
#line 434 "write_deps_file.m"
        {
#line 434 "write_deps_file.m"
          parse_tree__write_deps_file__V_490_490 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_490_490, 0) = ((MR_Box) ((MR_String) "\n"));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_490_490, 1) = ((MR_Box) (parse_tree__write_deps_file__V_492_492));
#line 434 "write_deps_file.m"
        }
#line 434 "write_deps_file.m"
        {
#line 434 "write_deps_file.m"
          parse_tree__write_deps_file__V_489_489 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_489_489, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaFileName_97));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_489_489, 1) = ((MR_Box) (parse_tree__write_deps_file__V_490_490));
#line 434 "write_deps_file.m"
        }
#line 434 "write_deps_file.m"
        {
#line 434 "write_deps_file.m"
          parse_tree__write_deps_file__V_487_487 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_487_487, 0) = ((MR_Box) ((MR_String) " : "));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_487_487, 1) = ((MR_Box) (parse_tree__write_deps_file__V_489_489));
#line 434 "write_deps_file.m"
        }
#line 433 "write_deps_file.m"
        {
#line 433 "write_deps_file.m"
          parse_tree__write_deps_file__V_486_486 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_486_486, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_98));
#line 433 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_486_486, 1) = ((MR_Box) (parse_tree__write_deps_file__V_487_487));
#line 433 "write_deps_file.m"
        }
#line 432 "write_deps_file.m"
        {
#line 432 "write_deps_file.m"
          parse_tree__write_deps_file__V_484_484 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_484_484, 0) = ((MR_Box) ((MR_String) " ifeq (\044(findstring java,\044(GRADE)),java)\n"));
#line 432 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_484_484, 1) = ((MR_Box) (parse_tree__write_deps_file__V_486_486));
#line 432 "write_deps_file.m"
        }
#line 431 "write_deps_file.m"
        {
#line 431 "write_deps_file.m"
          parse_tree__write_deps_file__V_482_482 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_482_482, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 431 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_482_482, 1) = ((MR_Box) (parse_tree__write_deps_file__V_484_484));
#line 431 "write_deps_file.m"
        }
#line 431 "write_deps_file.m"
        {
#line 431 "write_deps_file.m"
          parse_tree__write_deps_file__V_480_480 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_480_480, 0) = ((MR_Box) ((MR_String) "\n"));
#line 431 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_480_480, 1) = ((MR_Box) (parse_tree__write_deps_file__V_482_482));
#line 431 "write_deps_file.m"
        }
#line 431 "write_deps_file.m"
        {
#line 431 "write_deps_file.m"
          parse_tree__write_deps_file__V_479_479 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_479_479, 0) = ((MR_Box) (parse_tree__write_deps_file__ILFileName_96));
#line 431 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_479_479, 1) = ((MR_Box) (parse_tree__write_deps_file__V_480_480));
#line 431 "write_deps_file.m"
        }
#line 431 "write_deps_file.m"
        {
#line 431 "write_deps_file.m"
          parse_tree__write_deps_file__V_477_477 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_477_477, 0) = ((MR_Box) ((MR_String) " : "));
#line 431 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_477_477, 1) = ((MR_Box) (parse_tree__write_deps_file__V_479_479));
#line 431 "write_deps_file.m"
        }
#line 430 "write_deps_file.m"
        {
#line 430 "write_deps_file.m"
          parse_tree__write_deps_file__V_476_476 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_476_476, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_98));
#line 430 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_476_476, 1) = ((MR_Box) (parse_tree__write_deps_file__V_477_477));
#line 430 "write_deps_file.m"
        }
#line 429 "write_deps_file.m"
        {
#line 429 "write_deps_file.m"
          parse_tree__write_deps_file__V_474_474 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_474_474, 0) = ((MR_Box) ((MR_String) "ifeq (\044(findstring il,\044(GRADE)),il)\n"));
#line 429 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_474_474, 1) = ((MR_Box) (parse_tree__write_deps_file__V_476_476));
#line 429 "write_deps_file.m"
        }
#line 428 "write_deps_file.m"
        {
#line 428 "write_deps_file.m"
          parse_tree__write_deps_file__V_471_471 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_471_471, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 428 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_471_471, 1) = ((MR_Box) (parse_tree__write_deps_file__V_474_474));
#line 428 "write_deps_file.m"
        }
#line 428 "write_deps_file.m"
        {
#line 428 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_471_471);
        }
#line 454 "write_deps_file.m"
        {
#line 454 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date", (MR_Integer) 1, &parse_tree__write_deps_file__DateFileName_99);
        }
#line 456 "write_deps_file.m"
        {
#line 456 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date0", (MR_Integer) 1, &parse_tree__write_deps_file__Date0FileName_100);
        }
#line 459 "write_deps_file.m"
        {
#line 459 "write_deps_file.m"
          parse_tree__write_deps_file__V_517_517 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_517_517, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_100));
#line 459 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_517_517, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "write_deps_file.m"
        }
#line 459 "write_deps_file.m"
        {
#line 459 "write_deps_file.m"
          parse_tree__write_deps_file__V_515_515 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_515_515, 0) = ((MR_Box) ((MR_String) " "));
#line 459 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_515_515, 1) = ((MR_Box) (parse_tree__write_deps_file__V_517_517));
#line 459 "write_deps_file.m"
        }
#line 459 "write_deps_file.m"
        {
#line 459 "write_deps_file.m"
          parse_tree__write_deps_file__V_514_514 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_514_514, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_99));
#line 459 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_514_514, 1) = ((MR_Box) (parse_tree__write_deps_file__V_515_515));
#line 459 "write_deps_file.m"
        }
#line 458 "write_deps_file.m"
        {
#line 458 "write_deps_file.m"
          parse_tree__write_deps_file__V_511_511 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_511_511, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 458 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_511_511, 1) = ((MR_Box) (parse_tree__write_deps_file__V_514_514));
#line 458 "write_deps_file.m"
        }
#line 458 "write_deps_file.m"
        {
#line 458 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_511_511);
        }
#line 461 "write_deps_file.m"
        {
#line 461 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_15, (MR_String) ".date", parse_tree__write_deps_file__DepStream_41);
        }
#line 462 "write_deps_file.m"
        {
#line 462 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_271_271);
        }
#line 463 "write_deps_file.m"
        {
#line 463 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_15, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_41);
        }
#line 464 "write_deps_file.m"
        {
#line 464 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__LongDeps_49, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_41);
        }
#line 465 "write_deps_file.m"
        {
#line 465 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ShortDeps_50, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_41);
        }
#line 467 "write_deps_file.m"
        {
#line 467 "write_deps_file.m"
          parse_tree__write_deps_file__V_532_532 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_532_532, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_532_532, 1) = ((MR_Box) (parse_tree__write_deps_file__V_517_517));
#line 467 "write_deps_file.m"
        }
#line 467 "write_deps_file.m"
        {
#line 467 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_532_532);
        }
#line 468 "write_deps_file.m"
        {
#line 468 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_15, (MR_String) ".date0", parse_tree__write_deps_file__DepStream_41);
        }
#line 469 "write_deps_file.m"
        {
#line 469 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_271_271);
        }
#line 470 "write_deps_file.m"
        {
#line 470 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__LongDeps_49, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_41);
        }
#line 471 "write_deps_file.m"
        {
#line 471 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ShortDeps_50, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_41);
        }
#line 472 "write_deps_file.m"
        {
#line 472 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_41, (MR_String) "\n\n");
        }
#line 478 "write_deps_file.m"
        {
#line 478 "write_deps_file.m"
          parse_tree__source_file_map__have_source_file_map_3_p_0(&parse_tree__write_deps_file__HaveMap_101);
        }
#line 482 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HaveMap_101 == (MR_Integer) 0))
#line 484 "write_deps_file.m"
          parse_tree__write_deps_file__ModuleArg_102 = parse_tree__write_deps_file__SourceFileName_12;
#line 482 "write_deps_file.m"
        else
#line 481 "write_deps_file.m"
          {
#line 481 "write_deps_file.m"
            parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__SourceFileModuleName_13, &parse_tree__write_deps_file__ModuleArg_102);
          }
#line 487 "write_deps_file.m"
        {
#line 487 "write_deps_file.m"
          libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_7, &parse_tree__write_deps_file__Target_103);
        }
#line 488 "write_deps_file.m"
        {
#line 488 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 155, &parse_tree__write_deps_file__SignAssembly_104);
        }
#line 496 "write_deps_file.m"
        {
#line 496 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__DllFileName_105);
        }
#line 498 "write_deps_file.m"
        {
#line 498 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".class", (MR_Integer) 1, &parse_tree__write_deps_file__ClassFileName_106);
        }
#line 500 "write_deps_file.m"
        {
#line 500 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".beam", (MR_Integer) 1, &parse_tree__write_deps_file__BeamFileName_107);
        }
#line 502 "write_deps_file.m"
        {
#line 502 "write_deps_file.m"
          parse_tree__write_deps_file__SubModules_108 = parse_tree__write_deps_file__submodules_2_f_0(parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__AllDeps_51);
        }
#line 504 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Target_103 == (MR_Integer) 1);
#line 504 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 504 "write_deps_file.m"
          {
#line 505 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__SubModules_108)) == (MR_mktag((MR_Integer) 1)));
#line 505 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 505 "write_deps_file.m"
              {
#line 505 "write_deps_file.m"
                parse_tree__write_deps_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__SubModules_108, (MR_Integer) 0)));
#line 505 "write_deps_file.m"
                parse_tree__write_deps_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__SubModules_108, (MR_Integer) 1)));
#line 505 "write_deps_file.m"
              }
#line 504 "write_deps_file.m"
          }
#line 511 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 507 "write_deps_file.m"
          {
#line 507 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_561_561;

#line 507 "write_deps_file.m"
            {
#line 507 "write_deps_file.m"
              parse_tree__write_deps_file__V_561_561 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_561_561, 0) = ((MR_Box) (parse_tree__write_deps_file__DllFileName_105));
#line 507 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_561_561, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 507 "write_deps_file.m"
            }
#line 507 "write_deps_file.m"
            {
#line 507 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_561_561);
            }
#line 508 "write_deps_file.m"
            {
#line 508 "write_deps_file.m"
              parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SubModules_108, (MR_String) "", parse_tree__write_deps_file__DepStream_41);
            }
#line 510 "write_deps_file.m"
            {
#line 510 "write_deps_file.m"
              mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_41);
            }
#line 507 "write_deps_file.m"
          }
#line 511 "write_deps_file.m"
        else
#line 510 "write_deps_file.m"
          {
#line 510 "write_deps_file.m"
          }
#line 518 "write_deps_file.m"
        if ((parse_tree__write_deps_file__ContainsForeignCode_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 519 "write_deps_file.m"
          {
#line 519 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImports1_113;
#line 519 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_569_569;
#line 520 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_114_114;

#line 520 "write_deps_file.m"
            {
#line 520 "write_deps_file.m"
              parse_tree__write_deps_file__V_569_569 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_deps_file__Items_26);
            }
#line 520 "write_deps_file.m"
            {
#line 520 "write_deps_file.m"
              parse_tree__prog_item__get_item_list_foreign_code_5_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__V_569_569, &parse_tree__write_deps_file__LangSet_111, &parse_tree__write_deps_file__ForeignImports1_113, &parse_tree__write_deps_file__V_114_114);
            }
#line 528 "write_deps_file.m"
            if ((parse_tree__write_deps_file__ForeignImports0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 527 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImports_112 = parse_tree__write_deps_file__ForeignImports1_113;
#line 528 "write_deps_file.m"
            else
#line 530 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImports_112 = parse_tree__write_deps_file__ForeignImports0_24;
#line 519 "write_deps_file.m"
          }
#line 518 "write_deps_file.m"
        else
#line 518 "write_deps_file.m"
          if ((parse_tree__write_deps_file__ContainsForeignCode_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 533 "write_deps_file.m"
            {
#line 534 "write_deps_file.m"
              {
#line 534 "write_deps_file.m"
                mercury__set__init_1_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, &parse_tree__write_deps_file__LangSet_111);
              }
#line 535 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImports_112 = parse_tree__write_deps_file__ForeignImports0_24;
#line 533 "write_deps_file.m"
            }
#line 518 "write_deps_file.m"
          else
#line 516 "write_deps_file.m"
            {
#line 516 "write_deps_file.m"
              parse_tree__write_deps_file__LangSet_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ContainsForeignCode_23, (MR_Integer) 0)));
#line 517 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImports_112 = parse_tree__write_deps_file__ForeignImports0_24;
#line 516 "write_deps_file.m"
            }
#line 541 "write_deps_file.m"
        {
#line 541 "write_deps_file.m"
          parse_tree__write_deps_file__V_570_570 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 541 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_570_570, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
#line 541 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_570_570, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_4));
#line 541 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_570_570, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 541 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_570_570, 3) = ((MR_Box) (parse_tree__write_deps_file__SourceFileModuleName_13));
#line 541 "write_deps_file.m"
        }
#line 541 "write_deps_file.m"
        {
#line 541 "write_deps_file.m"
          mercury__list__filter_map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__TypeCtorInfo_869_869, parse_tree__write_deps_file__V_570_570, parse_tree__write_deps_file__ForeignImports_112, &parse_tree__write_deps_file__ForeignImportedModules_119);
        }
#line 552 "write_deps_file.m"
        if ((parse_tree__write_deps_file__ForeignImportedModules_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "write_deps_file.m"
          {
#line 551 "write_deps_file.m"
          }
#line 552 "write_deps_file.m"
        else
#line 553 "write_deps_file.m"
          {
#line 553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImportTargets_122;
#line 553 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ForeignImportExt_123;
#line 553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__WriteForeignImportTarget_124;
#line 594 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_594_594;

#line 558 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Target_103 == (MR_Integer) 0))
#line 572 "write_deps_file.m"
              {
#line 572 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_576_576;

#line 577 "write_deps_file.m"
                {
#line 577 "write_deps_file.m"
                  parse_tree__write_deps_file__V_576_576 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_576_576, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_69));
#line 577 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_576_576, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 577 "write_deps_file.m"
                }
#line 577 "write_deps_file.m"
                {
#line 577 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportTargets_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_122, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_66));
#line 577 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_122, 1) = ((MR_Box) (parse_tree__write_deps_file__V_576_576));
#line 577 "write_deps_file.m"
                }
#line 578 "write_deps_file.m"
                parse_tree__write_deps_file__ForeignImportExt_123 = (MR_String) ".mh";
#line 572 "write_deps_file.m"
              }
#line 558 "write_deps_file.m"
            else
#line 558 "write_deps_file.m"
              if ((parse_tree__write_deps_file__Target_103 == (MR_Integer) 2))
#line 559 "write_deps_file.m"
                {
#line 561 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportTargets_122 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 562 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_123 = (MR_String) ".cs";
#line 559 "write_deps_file.m"
                }
#line 558 "write_deps_file.m"
              else
#line 558 "write_deps_file.m"
                if ((parse_tree__write_deps_file__Target_103 == (MR_Integer) 5))
#line 568 "write_deps_file.m"
                  {
#line 569 "write_deps_file.m"
                    {
#line 569 "write_deps_file.m"
                      parse_tree__write_deps_file__ForeignImportTargets_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_122, 0) = ((MR_Box) (parse_tree__write_deps_file__BeamFileName_107));
#line 569 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 569 "write_deps_file.m"
                    }
#line 570 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportExt_123 = (MR_String) ".hrl";
#line 568 "write_deps_file.m"
                  }
#line 558 "write_deps_file.m"
                else
#line 558 "write_deps_file.m"
                  if ((parse_tree__write_deps_file__Target_103 == (MR_Integer) 1))
#line 555 "write_deps_file.m"
                    {
#line 556 "write_deps_file.m"
                      {
#line 556 "write_deps_file.m"
                        parse_tree__write_deps_file__ForeignImportTargets_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_122, 0) = ((MR_Box) (parse_tree__write_deps_file__DllFileName_105));
#line 556 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "write_deps_file.m"
                      }
#line 557 "write_deps_file.m"
                      parse_tree__write_deps_file__ForeignImportExt_123 = (MR_String) ".dll";
#line 555 "write_deps_file.m"
                    }
#line 558 "write_deps_file.m"
                  else
#line 558 "write_deps_file.m"
                    if ((parse_tree__write_deps_file__Target_103 == (MR_Integer) 3))
#line 564 "write_deps_file.m"
                      {
#line 565 "write_deps_file.m"
                        {
#line 565 "write_deps_file.m"
                          parse_tree__write_deps_file__ForeignImportTargets_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "write_deps_file.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_122, 0) = ((MR_Box) (parse_tree__write_deps_file__ClassFileName_106));
#line 565 "write_deps_file.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 565 "write_deps_file.m"
                        }
#line 566 "write_deps_file.m"
                        parse_tree__write_deps_file__ForeignImportExt_123 = (MR_String) ".java";
#line 564 "write_deps_file.m"
                      }
#line 558 "write_deps_file.m"
                    else
#line 581 "write_deps_file.m"
                      {
#line 581 "write_deps_file.m"
                        MR_Word parse_tree__write_deps_file__V_574_574;

#line 582 "write_deps_file.m"
                        {
#line 582 "write_deps_file.m"
                          parse_tree__write_deps_file__V_574_574 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "write_deps_file.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_574_574, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_69));
#line 582 "write_deps_file.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_574_574, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 582 "write_deps_file.m"
                        }
#line 582 "write_deps_file.m"
                        {
#line 582 "write_deps_file.m"
                          parse_tree__write_deps_file__ForeignImportTargets_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "write_deps_file.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_122, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_66));
#line 582 "write_deps_file.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_122, 1) = ((MR_Box) (parse_tree__write_deps_file__V_574_574));
#line 582 "write_deps_file.m"
                        }
#line 583 "write_deps_file.m"
                        parse_tree__write_deps_file__ForeignImportExt_123 = (MR_String) ".mh";
#line 581 "write_deps_file.m"
                      }
#line 585 "write_deps_file.m"
            {
#line 585 "write_deps_file.m"
              parse_tree__write_deps_file__WriteForeignImportTarget_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 585 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_124, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[1]));
#line 585 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_124, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_5));
#line 585 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_124, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 585 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_124, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 585 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_124, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_41));
#line 585 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_124, 5) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportedModules_119));
#line 585 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_124, 6) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportExt_123));
#line 585 "write_deps_file.m"
            }
#line 594 "write_deps_file.m"
            {
#line 594 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_870_870, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__WriteForeignImportTarget_124, parse_tree__write_deps_file__ForeignImportTargets_122, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_594_594);
            }
#line 553 "write_deps_file.m"
          }
#line 598 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Target_103 == (MR_Integer) 1);
#line 598 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 598 "write_deps_file.m"
          {
#line 15763 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_882_882 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 599 "write_deps_file.m"
            {
#line 599 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = mercury__set__empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_882_882, parse_tree__write_deps_file__LangSet_111);
            }
#line 599 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 598 "write_deps_file.m"
          }
#line 604 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 601 "write_deps_file.m"
          {
#line 601 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_883_883 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 601 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Langs_126;
#line 601 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_595_595;
#line 602 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_596_596;

#line 601 "write_deps_file.m"
            {
#line 601 "write_deps_file.m"
              parse_tree__write_deps_file__Langs_126 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_883_883, parse_tree__write_deps_file__LangSet_111);
            }
#line 602 "write_deps_file.m"
            {
#line 602 "write_deps_file.m"
              parse_tree__write_deps_file__V_595_595 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 602 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_595_595, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
#line 602 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_595_595, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_6));
#line 602 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_595_595, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 602 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_595_595, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 602 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_595_595, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_41));
#line 602 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_595_595, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 602 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_595_595, 6) = ((MR_Box) (parse_tree__write_deps_file__AllDeps_51));
#line 602 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_595_595, 7) = ((MR_Box) (parse_tree__write_deps_file__ForeignImports_112));
#line 602 "write_deps_file.m"
            }
#line 602 "write_deps_file.m"
            {
#line 602 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_883_883, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_595_595, parse_tree__write_deps_file__Langs_126, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_596_596);
            }
#line 601 "write_deps_file.m"
          }
#line 604 "write_deps_file.m"
        else
#line 602 "write_deps_file.m"
          {
#line 602 "write_deps_file.m"
          }
#line 614 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Target_103 == (MR_Integer) 1);
#line 614 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 615 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__SignAssembly_104 == (MR_Integer) 1);
#line 625 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 617 "write_deps_file.m"
          {
#line 617 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ModuleNameString_127;
#line 617 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__IlFileName_128;
#line 617 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_600_600;
#line 617 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_603_603;
#line 617 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_604_604;
#line 617 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_606_606;

#line 617 "write_deps_file.m"
            {
#line 617 "write_deps_file.m"
              parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_14, &parse_tree__write_deps_file__ModuleNameString_127);
            }
#line 618 "write_deps_file.m"
            {
#line 618 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".il", (MR_Integer) 1, &parse_tree__write_deps_file__IlFileName_128);
            }
#line 623 "write_deps_file.m"
            {
#line 623 "write_deps_file.m"
              parse_tree__write_deps_file__V_606_606 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_606_606, 0) = ((MR_Box) (parse_tree__write_deps_file__IlFileName_128));
#line 623 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_606_606, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])));
#line 623 "write_deps_file.m"
            }
#line 622 "write_deps_file.m"
            {
#line 622 "write_deps_file.m"
              parse_tree__write_deps_file__V_604_604 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 622 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_604_604, 0) = ((MR_Box) ((MR_String) " = /keyf=mercury.sn\n"));
#line 622 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_604_604, 1) = ((MR_Box) (parse_tree__write_deps_file__V_606_606));
#line 622 "write_deps_file.m"
            }
#line 622 "write_deps_file.m"
            {
#line 622 "write_deps_file.m"
              parse_tree__write_deps_file__V_603_603 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 622 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_603_603, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleNameString_127));
#line 622 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_603_603, 1) = ((MR_Box) (parse_tree__write_deps_file__V_604_604));
#line 622 "write_deps_file.m"
            }
#line 621 "write_deps_file.m"
            {
#line 621 "write_deps_file.m"
              parse_tree__write_deps_file__V_600_600 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_600_600, 0) = ((MR_Box) ((MR_String) "ILASM_KEYFLAG-"));
#line 621 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_600_600, 1) = ((MR_Box) (parse_tree__write_deps_file__V_603_603));
#line 621 "write_deps_file.m"
            }
#line 621 "write_deps_file.m"
            {
#line 621 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_600_600);
            }
#line 617 "write_deps_file.m"
          }
#line 625 "write_deps_file.m"
        else
#line 621 "write_deps_file.m"
          {
#line 621 "write_deps_file.m"
          }
#line 629 "write_deps_file.m"
        {
#line 629 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_deps_file__IntFileName_129);
        }
#line 631 "write_deps_file.m"
        {
#line 631 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int2", (MR_Integer) 1, &parse_tree__write_deps_file__Int2FileName_130);
        }
#line 633 "write_deps_file.m"
        {
#line 633 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int3", (MR_Integer) 1, &parse_tree__write_deps_file__Int3FileName_131);
        }
#line 635 "write_deps_file.m"
        {
#line 635 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptFileName_132);
        }
#line 637 "write_deps_file.m"
        {
#line 637 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptFileName_133);
        }
#line 639 "write_deps_file.m"
        {
#line 639 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date3", (MR_Integer) 1, &parse_tree__write_deps_file__Date3FileName_134);
        }
#line 670 "write_deps_file.m"
        {
#line 670 "write_deps_file.m"
          parse_tree__write_deps_file__V_674_674 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_674_674, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_35));
#line 670 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_674_674, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])));
#line 670 "write_deps_file.m"
        }
#line 670 "write_deps_file.m"
        {
#line 670 "write_deps_file.m"
          parse_tree__write_deps_file__V_672_672 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_672_672, 0) = ((MR_Box) ((MR_String) " : "));
#line 670 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_672_672, 1) = ((MR_Box) (parse_tree__write_deps_file__V_674_674));
#line 670 "write_deps_file.m"
        }
#line 669 "write_deps_file.m"
        {
#line 669 "write_deps_file.m"
          parse_tree__write_deps_file__V_671_671 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_671_671, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptFileName_133));
#line 669 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_671_671, 1) = ((MR_Box) (parse_tree__write_deps_file__V_672_672));
#line 669 "write_deps_file.m"
        }
#line 668 "write_deps_file.m"
        {
#line 668 "write_deps_file.m"
          parse_tree__write_deps_file__V_669_669 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_669_669, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_669_669, 1) = ((MR_Box) (parse_tree__write_deps_file__V_671_671));
#line 668 "write_deps_file.m"
        }
#line 668 "write_deps_file.m"
        {
#line 668 "write_deps_file.m"
          parse_tree__write_deps_file__V_667_667 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_667_667, 0) = ((MR_Box) ((MR_String) "\n"));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_667_667, 1) = ((MR_Box) (parse_tree__write_deps_file__V_669_669));
#line 668 "write_deps_file.m"
        }
#line 668 "write_deps_file.m"
        {
#line 668 "write_deps_file.m"
          parse_tree__write_deps_file__V_666_666 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_666_666, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_666_666, 1) = ((MR_Box) (parse_tree__write_deps_file__V_667_667));
#line 668 "write_deps_file.m"
        }
#line 668 "write_deps_file.m"
        {
#line 668 "write_deps_file.m"
          parse_tree__write_deps_file__V_664_664 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_664_664, 0) = ((MR_Box) ((MR_String) " : "));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_664_664, 1) = ((MR_Box) (parse_tree__write_deps_file__V_666_666));
#line 668 "write_deps_file.m"
        }
#line 667 "write_deps_file.m"
        {
#line 667 "write_deps_file.m"
          parse_tree__write_deps_file__V_663_663 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_663_663, 0) = ((MR_Box) (parse_tree__write_deps_file__OptFileName_132));
#line 667 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_663_663, 1) = ((MR_Box) (parse_tree__write_deps_file__V_664_664));
#line 667 "write_deps_file.m"
        }
#line 666 "write_deps_file.m"
        {
#line 666 "write_deps_file.m"
          parse_tree__write_deps_file__V_661_661 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_661_661, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_661_661, 1) = ((MR_Box) (parse_tree__write_deps_file__V_663_663));
#line 666 "write_deps_file.m"
        }
#line 666 "write_deps_file.m"
        {
#line 666 "write_deps_file.m"
          parse_tree__write_deps_file__V_659_659 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_659_659, 0) = ((MR_Box) ((MR_String) "\n"));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_659_659, 1) = ((MR_Box) (parse_tree__write_deps_file__V_661_661));
#line 666 "write_deps_file.m"
        }
#line 666 "write_deps_file.m"
        {
#line 666 "write_deps_file.m"
          parse_tree__write_deps_file__V_658_658 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_658_658, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_134));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_658_658, 1) = ((MR_Box) (parse_tree__write_deps_file__V_659_659));
#line 666 "write_deps_file.m"
        }
#line 666 "write_deps_file.m"
        {
#line 666 "write_deps_file.m"
          parse_tree__write_deps_file__V_656_656 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_656_656, 0) = ((MR_Box) ((MR_String) " : "));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_656_656, 1) = ((MR_Box) (parse_tree__write_deps_file__V_658_658));
#line 666 "write_deps_file.m"
        }
#line 665 "write_deps_file.m"
        {
#line 665 "write_deps_file.m"
          parse_tree__write_deps_file__V_655_655 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_655_655, 0) = ((MR_Box) (parse_tree__write_deps_file__Int3FileName_131));
#line 665 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_655_655, 1) = ((MR_Box) (parse_tree__write_deps_file__V_656_656));
#line 665 "write_deps_file.m"
        }
#line 664 "write_deps_file.m"
        {
#line 664 "write_deps_file.m"
          parse_tree__write_deps_file__V_653_653 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_653_653, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_653_653, 1) = ((MR_Box) (parse_tree__write_deps_file__V_655_655));
#line 664 "write_deps_file.m"
        }
#line 664 "write_deps_file.m"
        {
#line 664 "write_deps_file.m"
          parse_tree__write_deps_file__V_651_651 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_651_651, 0) = ((MR_Box) ((MR_String) "\n"));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_651_651, 1) = ((MR_Box) (parse_tree__write_deps_file__V_653_653));
#line 664 "write_deps_file.m"
        }
#line 664 "write_deps_file.m"
        {
#line 664 "write_deps_file.m"
          parse_tree__write_deps_file__V_650_650 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_650_650, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_99));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_650_650, 1) = ((MR_Box) (parse_tree__write_deps_file__V_651_651));
#line 664 "write_deps_file.m"
        }
#line 664 "write_deps_file.m"
        {
#line 664 "write_deps_file.m"
          parse_tree__write_deps_file__V_648_648 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_648_648, 0) = ((MR_Box) ((MR_String) " : "));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_648_648, 1) = ((MR_Box) (parse_tree__write_deps_file__V_650_650));
#line 664 "write_deps_file.m"
        }
#line 663 "write_deps_file.m"
        {
#line 663 "write_deps_file.m"
          parse_tree__write_deps_file__V_647_647 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_647_647, 0) = ((MR_Box) (parse_tree__write_deps_file__Int2FileName_130));
#line 663 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_647_647, 1) = ((MR_Box) (parse_tree__write_deps_file__V_648_648));
#line 663 "write_deps_file.m"
        }
#line 662 "write_deps_file.m"
        {
#line 662 "write_deps_file.m"
          parse_tree__write_deps_file__V_645_645 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_645_645, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_645_645, 1) = ((MR_Box) (parse_tree__write_deps_file__V_647_647));
#line 662 "write_deps_file.m"
        }
#line 662 "write_deps_file.m"
        {
#line 662 "write_deps_file.m"
          parse_tree__write_deps_file__V_643_643 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_643_643, 0) = ((MR_Box) ((MR_String) "\n"));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_643_643, 1) = ((MR_Box) (parse_tree__write_deps_file__V_645_645));
#line 662 "write_deps_file.m"
        }
#line 662 "write_deps_file.m"
        {
#line 662 "write_deps_file.m"
          parse_tree__write_deps_file__V_642_642 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_642_642, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_99));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_642_642, 1) = ((MR_Box) (parse_tree__write_deps_file__V_643_643));
#line 662 "write_deps_file.m"
        }
#line 662 "write_deps_file.m"
        {
#line 662 "write_deps_file.m"
          parse_tree__write_deps_file__V_640_640 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_640_640, 0) = ((MR_Box) ((MR_String) " : "));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_640_640, 1) = ((MR_Box) (parse_tree__write_deps_file__V_642_642));
#line 662 "write_deps_file.m"
        }
#line 661 "write_deps_file.m"
        {
#line 661 "write_deps_file.m"
          parse_tree__write_deps_file__V_639_639 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_639_639, 0) = ((MR_Box) (parse_tree__write_deps_file__IntFileName_129));
#line 661 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_639_639, 1) = ((MR_Box) (parse_tree__write_deps_file__V_640_640));
#line 661 "write_deps_file.m"
        }
#line 660 "write_deps_file.m"
        {
#line 660 "write_deps_file.m"
          parse_tree__write_deps_file__V_637_637 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_637_637, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_637_637, 1) = ((MR_Box) (parse_tree__write_deps_file__V_639_639));
#line 660 "write_deps_file.m"
        }
#line 660 "write_deps_file.m"
        {
#line 660 "write_deps_file.m"
          parse_tree__write_deps_file__V_635_635 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_635_635, 0) = ((MR_Box) ((MR_String) "\n"));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_635_635, 1) = ((MR_Box) (parse_tree__write_deps_file__V_637_637));
#line 660 "write_deps_file.m"
        }
#line 660 "write_deps_file.m"
        {
#line 660 "write_deps_file.m"
          parse_tree__write_deps_file__V_634_634 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_634_634, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_100));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_634_634, 1) = ((MR_Box) (parse_tree__write_deps_file__V_635_635));
#line 660 "write_deps_file.m"
        }
#line 660 "write_deps_file.m"
        {
#line 660 "write_deps_file.m"
          parse_tree__write_deps_file__V_632_632 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_632_632, 0) = ((MR_Box) ((MR_String) " : "));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_632_632, 1) = ((MR_Box) (parse_tree__write_deps_file__V_634_634));
#line 660 "write_deps_file.m"
        }
#line 659 "write_deps_file.m"
        {
#line 659 "write_deps_file.m"
          parse_tree__write_deps_file__V_631_631 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_631_631, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_70));
#line 659 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_631_631, 1) = ((MR_Box) (parse_tree__write_deps_file__V_632_632));
#line 659 "write_deps_file.m"
        }
#line 658 "write_deps_file.m"
        {
#line 658 "write_deps_file.m"
          parse_tree__write_deps_file__V_628_628 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_628_628, 0) = ((MR_Box) ((MR_String) "\n"));
#line 658 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_628_628, 1) = ((MR_Box) (parse_tree__write_deps_file__V_631_631));
#line 658 "write_deps_file.m"
        }
#line 658 "write_deps_file.m"
        {
#line 658 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_628_628);
        }
#line 674 "write_deps_file.m"
        {
#line 674 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 639, &parse_tree__write_deps_file__UseSubdirs_135);
        }
#line 682 "write_deps_file.m"
        if ((parse_tree__write_deps_file__UseSubdirs_135 == (MR_Integer) 0))
#line 683 "write_deps_file.m"
          {
#line 683 "write_deps_file.m"
          }
#line 682 "write_deps_file.m"
        else
#line 676 "write_deps_file.m"
          {
#line 676 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_682_682;
#line 678 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv6_STATE_VARIABLE_IO_684_684;

#line 677 "write_deps_file.m"
            {
#line 677 "write_deps_file.m"
              mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_41);
            }
#line 678 "write_deps_file.m"
            {
#line 678 "write_deps_file.m"
              parse_tree__write_deps_file__V_682_682 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 678 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_682_682, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0]));
#line 678 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_682_682, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_7));
#line 678 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_682_682, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 678 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_682_682, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 678 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_682_682, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_41));
#line 678 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_682_682, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 678 "write_deps_file.m"
            }
#line 678 "write_deps_file.m"
            {
#line 678 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_870_870, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_682_682, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[23]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv6_STATE_VARIABLE_IO_684_684);
            }
#line 676 "write_deps_file.m"
          }
#line 686 "write_deps_file.m"
        {
#line 686 "write_deps_file.m"
          parse_tree__write_deps_file__V_892_892 = parse_tree__source_file_map__default_source_file_1_f_0(parse_tree__write_deps_file__ModuleName_14);
        }
#line 686 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__SourceFileName_12, parse_tree__write_deps_file__V_892_892) == 0);
#line 686 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 732 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 702 "write_deps_file.m"
          {
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_703_703;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_706_706;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_707_707;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_709_709;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_710_710;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_712_712;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_714_714;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_716_716;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_717_717;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_719_719;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_720_720;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_722_722;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_723_723;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_725_725;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_727_727;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_728_728;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_730_730;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_731_731;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_733_733;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_734_734;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_736_736;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_738_738;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_739_739;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_741_741;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_742_742;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_744_744;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_745_745;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_747_747;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_749_749;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_750_750;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_752_752;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_753_753;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_755_755;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_756_756;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_758_758;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_760_760;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_762_762;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_763_763;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_765_765;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_766_766;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_768_768;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_769_769;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_771_771;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_773_773;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_774_774;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_776_776;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_777_777;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_779_779;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_780_780;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_782_782;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_784_784;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_786_786;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_787_787;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_789_789;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_790_790;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_792_792;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_793_793;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_795_795;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_797_797;
#line 702 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_799_799;

#line 729 "write_deps_file.m"
            {
#line 729 "write_deps_file.m"
              parse_tree__write_deps_file__V_799_799 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_799_799, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_102));
#line 729 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_799_799, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105])));
#line 729 "write_deps_file.m"
            }
#line 728 "write_deps_file.m"
            {
#line 728 "write_deps_file.m"
              parse_tree__write_deps_file__V_797_797 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_797_797, 0) = ((MR_Box) ((MR_String) "--java-only "));
#line 728 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_797_797, 1) = ((MR_Box) (parse_tree__write_deps_file__V_799_799));
#line 728 "write_deps_file.m"
            }
#line 727 "write_deps_file.m"
            {
#line 727 "write_deps_file.m"
              parse_tree__write_deps_file__V_795_795 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_795_795, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 727 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_795_795, 1) = ((MR_Box) (parse_tree__write_deps_file__V_797_797));
#line 727 "write_deps_file.m"
            }
#line 727 "write_deps_file.m"
            {
#line 727 "write_deps_file.m"
              parse_tree__write_deps_file__V_793_793 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_793_793, 0) = ((MR_Box) ((MR_String) "\n"));
#line 727 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_793_793, 1) = ((MR_Box) (parse_tree__write_deps_file__V_795_795));
#line 727 "write_deps_file.m"
            }
#line 727 "write_deps_file.m"
            {
#line 727 "write_deps_file.m"
              parse_tree__write_deps_file__V_792_792 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_792_792, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 727 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_792_792, 1) = ((MR_Box) (parse_tree__write_deps_file__V_793_793));
#line 727 "write_deps_file.m"
            }
#line 727 "write_deps_file.m"
            {
#line 727 "write_deps_file.m"
              parse_tree__write_deps_file__V_790_790 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_790_790, 0) = ((MR_Box) ((MR_String) " : "));
#line 727 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_790_790, 1) = ((MR_Box) (parse_tree__write_deps_file__V_792_792));
#line 727 "write_deps_file.m"
            }
#line 726 "write_deps_file.m"
            {
#line 726 "write_deps_file.m"
              parse_tree__write_deps_file__V_789_789 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_789_789, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_68));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_789_789, 1) = ((MR_Box) (parse_tree__write_deps_file__V_790_790));
#line 726 "write_deps_file.m"
            }
#line 725 "write_deps_file.m"
            {
#line 725 "write_deps_file.m"
              parse_tree__write_deps_file__V_787_787 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_787_787, 0) = ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n"));
#line 725 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_787_787, 1) = ((MR_Box) (parse_tree__write_deps_file__V_789_789));
#line 725 "write_deps_file.m"
            }
#line 725 "write_deps_file.m"
            {
#line 725 "write_deps_file.m"
              parse_tree__write_deps_file__V_786_786 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_786_786, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_102));
#line 725 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_786_786, 1) = ((MR_Box) (parse_tree__write_deps_file__V_787_787));
#line 725 "write_deps_file.m"
            }
#line 724 "write_deps_file.m"
            {
#line 724 "write_deps_file.m"
              parse_tree__write_deps_file__V_784_784 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_784_784, 0) = ((MR_Box) ((MR_String) "--il-only "));
#line 724 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_784_784, 1) = ((MR_Box) (parse_tree__write_deps_file__V_786_786));
#line 724 "write_deps_file.m"
            }
#line 723 "write_deps_file.m"
            {
#line 723 "write_deps_file.m"
              parse_tree__write_deps_file__V_782_782 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_782_782, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_782_782, 1) = ((MR_Box) (parse_tree__write_deps_file__V_784_784));
#line 723 "write_deps_file.m"
            }
#line 723 "write_deps_file.m"
            {
#line 723 "write_deps_file.m"
              parse_tree__write_deps_file__V_780_780 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_780_780, 0) = ((MR_Box) ((MR_String) "\n"));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_780_780, 1) = ((MR_Box) (parse_tree__write_deps_file__V_782_782));
#line 723 "write_deps_file.m"
            }
#line 723 "write_deps_file.m"
            {
#line 723 "write_deps_file.m"
              parse_tree__write_deps_file__V_779_779 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_779_779, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_779_779, 1) = ((MR_Box) (parse_tree__write_deps_file__V_780_780));
#line 723 "write_deps_file.m"
            }
#line 723 "write_deps_file.m"
            {
#line 723 "write_deps_file.m"
              parse_tree__write_deps_file__V_777_777 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_777_777, 0) = ((MR_Box) ((MR_String) " : "));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_777_777, 1) = ((MR_Box) (parse_tree__write_deps_file__V_779_779));
#line 723 "write_deps_file.m"
            }
#line 722 "write_deps_file.m"
            {
#line 722 "write_deps_file.m"
              parse_tree__write_deps_file__V_776_776 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_776_776, 0) = ((MR_Box) (parse_tree__write_deps_file__ILDateFileName_67));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_776_776, 1) = ((MR_Box) (parse_tree__write_deps_file__V_777_777));
#line 722 "write_deps_file.m"
            }
#line 722 "write_deps_file.m"
            {
#line 722 "write_deps_file.m"
              parse_tree__write_deps_file__V_774_774 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_774_774, 0) = ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n"));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_774_774, 1) = ((MR_Box) (parse_tree__write_deps_file__V_776_776));
#line 722 "write_deps_file.m"
            }
#line 721 "write_deps_file.m"
            {
#line 721 "write_deps_file.m"
              parse_tree__write_deps_file__V_773_773 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_773_773, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_102));
#line 721 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_773_773, 1) = ((MR_Box) (parse_tree__write_deps_file__V_774_774));
#line 721 "write_deps_file.m"
            }
#line 720 "write_deps_file.m"
            {
#line 720 "write_deps_file.m"
              parse_tree__write_deps_file__V_771_771 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_771_771, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 720 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_771_771, 1) = ((MR_Box) (parse_tree__write_deps_file__V_773_773));
#line 720 "write_deps_file.m"
            }
#line 720 "write_deps_file.m"
            {
#line 720 "write_deps_file.m"
              parse_tree__write_deps_file__V_769_769 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_769_769, 0) = ((MR_Box) ((MR_String) "\n"));
#line 720 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_769_769, 1) = ((MR_Box) (parse_tree__write_deps_file__V_771_771));
#line 720 "write_deps_file.m"
            }
#line 720 "write_deps_file.m"
            {
#line 720 "write_deps_file.m"
              parse_tree__write_deps_file__V_768_768 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_768_768, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 720 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_768_768, 1) = ((MR_Box) (parse_tree__write_deps_file__V_769_769));
#line 720 "write_deps_file.m"
            }
#line 720 "write_deps_file.m"
            {
#line 720 "write_deps_file.m"
              parse_tree__write_deps_file__V_766_766 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_766_766, 0) = ((MR_Box) ((MR_String) " : "));
#line 720 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_766_766, 1) = ((MR_Box) (parse_tree__write_deps_file__V_768_768));
#line 720 "write_deps_file.m"
            }
#line 719 "write_deps_file.m"
            {
#line 719 "write_deps_file.m"
              parse_tree__write_deps_file__V_765_765 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_765_765, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_765_765, 1) = ((MR_Box) (parse_tree__write_deps_file__V_766_766));
#line 719 "write_deps_file.m"
            }
#line 719 "write_deps_file.m"
            {
#line 719 "write_deps_file.m"
              parse_tree__write_deps_file__V_763_763 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_763_763, 0) = ((MR_Box) ((MR_String) "\n"));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_763_763, 1) = ((MR_Box) (parse_tree__write_deps_file__V_765_765));
#line 719 "write_deps_file.m"
            }
#line 719 "write_deps_file.m"
            {
#line 719 "write_deps_file.m"
              parse_tree__write_deps_file__V_762_762 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_762_762, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_102));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_762_762, 1) = ((MR_Box) (parse_tree__write_deps_file__V_763_763));
#line 719 "write_deps_file.m"
            }
#line 718 "write_deps_file.m"
            {
#line 718 "write_deps_file.m"
              parse_tree__write_deps_file__V_760_760 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_760_760, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCTOIFLAGS) "));
#line 718 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_760_760, 1) = ((MR_Box) (parse_tree__write_deps_file__V_762_762));
#line 718 "write_deps_file.m"
            }
#line 717 "write_deps_file.m"
            {
#line 717 "write_deps_file.m"
              parse_tree__write_deps_file__V_758_758 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_758_758, 0) = ((MR_Box) ((MR_String) "\t\044(MCTOI) \044(ALL_GRADEFLAGS) "));
#line 717 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_758_758, 1) = ((MR_Box) (parse_tree__write_deps_file__V_760_760));
#line 717 "write_deps_file.m"
            }
#line 716 "write_deps_file.m"
            {
#line 716 "write_deps_file.m"
              parse_tree__write_deps_file__V_756_756 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_756_756, 0) = ((MR_Box) ((MR_String) "\n"));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_756_756, 1) = ((MR_Box) (parse_tree__write_deps_file__V_758_758));
#line 716 "write_deps_file.m"
            }
#line 716 "write_deps_file.m"
            {
#line 716 "write_deps_file.m"
              parse_tree__write_deps_file__V_755_755 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_755_755, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_755_755, 1) = ((MR_Box) (parse_tree__write_deps_file__V_756_756));
#line 716 "write_deps_file.m"
            }
#line 716 "write_deps_file.m"
            {
#line 716 "write_deps_file.m"
              parse_tree__write_deps_file__V_753_753 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_753_753, 0) = ((MR_Box) ((MR_String) " : "));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_753_753, 1) = ((MR_Box) (parse_tree__write_deps_file__V_755_755));
#line 716 "write_deps_file.m"
            }
#line 715 "write_deps_file.m"
            {
#line 715 "write_deps_file.m"
              parse_tree__write_deps_file__V_752_752 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_752_752, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_35));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_752_752, 1) = ((MR_Box) (parse_tree__write_deps_file__V_753_753));
#line 715 "write_deps_file.m"
            }
#line 715 "write_deps_file.m"
            {
#line 715 "write_deps_file.m"
              parse_tree__write_deps_file__V_750_750 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_750_750, 0) = ((MR_Box) ((MR_String) "\n"));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_750_750, 1) = ((MR_Box) (parse_tree__write_deps_file__V_752_752));
#line 715 "write_deps_file.m"
            }
#line 714 "write_deps_file.m"
            {
#line 714 "write_deps_file.m"
              parse_tree__write_deps_file__V_749_749 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_749_749, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_102));
#line 714 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_749_749, 1) = ((MR_Box) (parse_tree__write_deps_file__V_750_750));
#line 714 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_747_747 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_747_747, 0) = ((MR_Box) ((MR_String) "\t\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) "));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_747_747, 1) = ((MR_Box) (parse_tree__write_deps_file__V_749_749));
#line 713 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_745_745 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_745_745, 0) = ((MR_Box) ((MR_String) "\n"));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_745_745, 1) = ((MR_Box) (parse_tree__write_deps_file__V_747_747));
#line 713 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_744_744 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_744_744, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_744_744, 1) = ((MR_Box) (parse_tree__write_deps_file__V_745_745));
#line 713 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_742_742 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_742_742, 0) = ((MR_Box) ((MR_String) " : "));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_742_742, 1) = ((MR_Box) (parse_tree__write_deps_file__V_744_744));
#line 713 "write_deps_file.m"
            }
#line 712 "write_deps_file.m"
            {
#line 712 "write_deps_file.m"
              parse_tree__write_deps_file__V_741_741 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_741_741, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_741_741, 1) = ((MR_Box) (parse_tree__write_deps_file__V_742_742));
#line 712 "write_deps_file.m"
            }
#line 712 "write_deps_file.m"
            {
#line 712 "write_deps_file.m"
              parse_tree__write_deps_file__V_739_739 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_739_739, 0) = ((MR_Box) ((MR_String) "\n"));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_739_739, 1) = ((MR_Box) (parse_tree__write_deps_file__V_741_741));
#line 712 "write_deps_file.m"
            }
#line 711 "write_deps_file.m"
            {
#line 711 "write_deps_file.m"
              parse_tree__write_deps_file__V_738_738 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_738_738, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_102));
#line 711 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_738_738, 1) = ((MR_Box) (parse_tree__write_deps_file__V_739_739));
#line 711 "write_deps_file.m"
            }
#line 710 "write_deps_file.m"
            {
#line 710 "write_deps_file.m"
              parse_tree__write_deps_file__V_736_736 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_736_736, 0) = ((MR_Box) ((MR_String) "\t\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) "));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_736_736, 1) = ((MR_Box) (parse_tree__write_deps_file__V_738_738));
#line 710 "write_deps_file.m"
            }
#line 710 "write_deps_file.m"
            {
#line 710 "write_deps_file.m"
              parse_tree__write_deps_file__V_734_734 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_734_734, 0) = ((MR_Box) ((MR_String) "\n"));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_734_734, 1) = ((MR_Box) (parse_tree__write_deps_file__V_736_736));
#line 710 "write_deps_file.m"
            }
#line 710 "write_deps_file.m"
            {
#line 710 "write_deps_file.m"
              parse_tree__write_deps_file__V_733_733 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_733_733, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_733_733, 1) = ((MR_Box) (parse_tree__write_deps_file__V_734_734));
#line 710 "write_deps_file.m"
            }
#line 710 "write_deps_file.m"
            {
#line 710 "write_deps_file.m"
              parse_tree__write_deps_file__V_731_731 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_731_731, 0) = ((MR_Box) ((MR_String) " : "));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_731_731, 1) = ((MR_Box) (parse_tree__write_deps_file__V_733_733));
#line 710 "write_deps_file.m"
            }
#line 709 "write_deps_file.m"
            {
#line 709 "write_deps_file.m"
              parse_tree__write_deps_file__V_730_730 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_730_730, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_134));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_730_730, 1) = ((MR_Box) (parse_tree__write_deps_file__V_731_731));
#line 709 "write_deps_file.m"
            }
#line 709 "write_deps_file.m"
            {
#line 709 "write_deps_file.m"
              parse_tree__write_deps_file__V_728_728 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_728_728, 0) = ((MR_Box) ((MR_String) "\n"));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_728_728, 1) = ((MR_Box) (parse_tree__write_deps_file__V_730_730));
#line 709 "write_deps_file.m"
            }
#line 708 "write_deps_file.m"
            {
#line 708 "write_deps_file.m"
              parse_tree__write_deps_file__V_727_727 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_727_727, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_102));
#line 708 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_727_727, 1) = ((MR_Box) (parse_tree__write_deps_file__V_728_728));
#line 708 "write_deps_file.m"
            }
#line 707 "write_deps_file.m"
            {
#line 707 "write_deps_file.m"
              parse_tree__write_deps_file__V_725_725 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_725_725, 0) = ((MR_Box) ((MR_String) "\t\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) "));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_725_725, 1) = ((MR_Box) (parse_tree__write_deps_file__V_727_727));
#line 707 "write_deps_file.m"
            }
#line 707 "write_deps_file.m"
            {
#line 707 "write_deps_file.m"
              parse_tree__write_deps_file__V_723_723 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_723_723, 0) = ((MR_Box) ((MR_String) "\n"));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_723_723, 1) = ((MR_Box) (parse_tree__write_deps_file__V_725_725));
#line 707 "write_deps_file.m"
            }
#line 707 "write_deps_file.m"
            {
#line 707 "write_deps_file.m"
              parse_tree__write_deps_file__V_722_722 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_722_722, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_722_722, 1) = ((MR_Box) (parse_tree__write_deps_file__V_723_723));
#line 707 "write_deps_file.m"
            }
#line 707 "write_deps_file.m"
            {
#line 707 "write_deps_file.m"
              parse_tree__write_deps_file__V_720_720 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_720_720, 0) = ((MR_Box) ((MR_String) " : "));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_720_720, 1) = ((MR_Box) (parse_tree__write_deps_file__V_722_722));
#line 707 "write_deps_file.m"
            }
#line 706 "write_deps_file.m"
            {
#line 706 "write_deps_file.m"
              parse_tree__write_deps_file__V_719_719 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_719_719, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_99));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_719_719, 1) = ((MR_Box) (parse_tree__write_deps_file__V_720_720));
#line 706 "write_deps_file.m"
            }
#line 706 "write_deps_file.m"
            {
#line 706 "write_deps_file.m"
              parse_tree__write_deps_file__V_717_717 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_717_717, 0) = ((MR_Box) ((MR_String) "\n"));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_717_717, 1) = ((MR_Box) (parse_tree__write_deps_file__V_719_719));
#line 706 "write_deps_file.m"
            }
#line 706 "write_deps_file.m"
            {
#line 706 "write_deps_file.m"
              parse_tree__write_deps_file__V_716_716 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_716_716, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_102));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_716_716, 1) = ((MR_Box) (parse_tree__write_deps_file__V_717_717));
#line 706 "write_deps_file.m"
            }
#line 705 "write_deps_file.m"
            {
#line 705 "write_deps_file.m"
              parse_tree__write_deps_file__V_714_714 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_714_714, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCPIFLAGS) "));
#line 705 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_714_714, 1) = ((MR_Box) (parse_tree__write_deps_file__V_716_716));
#line 705 "write_deps_file.m"
            }
#line 704 "write_deps_file.m"
            {
#line 704 "write_deps_file.m"
              parse_tree__write_deps_file__V_712_712 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_712_712, 0) = ((MR_Box) ((MR_String) "\t\044(MCPI) \044(ALL_GRADEFLAGS) "));
#line 704 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_712_712, 1) = ((MR_Box) (parse_tree__write_deps_file__V_714_714));
#line 704 "write_deps_file.m"
            }
#line 704 "write_deps_file.m"
            {
#line 704 "write_deps_file.m"
              parse_tree__write_deps_file__V_710_710 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_710_710, 0) = ((MR_Box) ((MR_String) "\n"));
#line 704 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_710_710, 1) = ((MR_Box) (parse_tree__write_deps_file__V_712_712));
#line 704 "write_deps_file.m"
            }
#line 704 "write_deps_file.m"
            {
#line 704 "write_deps_file.m"
              parse_tree__write_deps_file__V_709_709 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_709_709, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 704 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_709_709, 1) = ((MR_Box) (parse_tree__write_deps_file__V_710_710));
#line 704 "write_deps_file.m"
            }
#line 704 "write_deps_file.m"
            {
#line 704 "write_deps_file.m"
              parse_tree__write_deps_file__V_707_707 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_707_707, 0) = ((MR_Box) ((MR_String) " : "));
#line 704 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_707_707, 1) = ((MR_Box) (parse_tree__write_deps_file__V_709_709));
#line 704 "write_deps_file.m"
            }
#line 703 "write_deps_file.m"
            {
#line 703 "write_deps_file.m"
              parse_tree__write_deps_file__V_706_706 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_706_706, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_100));
#line 703 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_706_706, 1) = ((MR_Box) (parse_tree__write_deps_file__V_707_707));
#line 703 "write_deps_file.m"
            }
#line 702 "write_deps_file.m"
            {
#line 702 "write_deps_file.m"
              parse_tree__write_deps_file__V_703_703 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_703_703, 0) = ((MR_Box) ((MR_String) "\n"));
#line 702 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_703_703, 1) = ((MR_Box) (parse_tree__write_deps_file__V_706_706));
#line 702 "write_deps_file.m"
            }
#line 702 "write_deps_file.m"
            {
#line 702 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_41, parse_tree__write_deps_file__V_703_703);
            }
#line 702 "write_deps_file.m"
          }
#line 732 "write_deps_file.m"
        else
#line 702 "write_deps_file.m"
          {
#line 702 "write_deps_file.m"
          }
#line 736 "write_deps_file.m"
        {
#line 736 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_41);
        }
#line 737 "write_deps_file.m"
        {
#line 737 "write_deps_file.m"
          mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_36, parse_tree__write_deps_file__DependencyFileName_34, &parse_tree__write_deps_file__Result3_136);
        }
#line 770 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Result3_136 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "write_deps_file.m"
          {
#line 772 "write_deps_file.m"
            {
#line 772 "write_deps_file.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_32, (MR_String) " done.\n");
#line 772 "write_deps_file.m"
              return;
            }
#line 771 "write_deps_file.m"
          }
#line 770 "write_deps_file.m"
        else
#line 740 "write_deps_file.m"
          {
#line 740 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Result4_138;

#line 743 "write_deps_file.m"
            {
#line 743 "write_deps_file.m"
              mercury__io__remove_file_4_p_0(parse_tree__write_deps_file__DependencyFileName_34, &parse_tree__write_deps_file__Result4_138);
            }
#line 752 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Result4_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 753 "write_deps_file.m"
              {
#line 753 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__Result5_141;

#line 754 "write_deps_file.m"
                {
#line 754 "write_deps_file.m"
                  mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_36, parse_tree__write_deps_file__DependencyFileName_34, &parse_tree__write_deps_file__Result5_141);
                }
#line 765 "write_deps_file.m"
                if ((parse_tree__write_deps_file__Result5_141 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 766 "write_deps_file.m"
                  {
#line 767 "write_deps_file.m"
                    {
#line 767 "write_deps_file.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_32, (MR_String) " done.\n");
#line 767 "write_deps_file.m"
                      return;
                    }
#line 766 "write_deps_file.m"
                  }
#line 765 "write_deps_file.m"
                else
#line 757 "write_deps_file.m"
                  {
#line 757 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__Error5_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result5_141, (MR_Integer) 0)));
#line 757 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_814_814;
#line 757 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_816_816;
#line 757 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_817_817;
#line 757 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_819_819;
#line 757 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_820_820;
#line 757 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_822_822;
#line 757 "write_deps_file.m"
                    MR_String parse_tree__write_deps_file__Message_859;
#line 757 "write_deps_file.m"
                    MR_String parse_tree__write_deps_file__ErrorMsg_860;

#line 758 "write_deps_file.m"
                    {
#line 758 "write_deps_file.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_32, (MR_String) " failed.\n");
                    }
#line 759 "write_deps_file.m"
                    {
#line 759 "write_deps_file.m"
                      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_32);
                    }
#line 760 "write_deps_file.m"
                    {
#line 760 "write_deps_file.m"
                      mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error5_142, &parse_tree__write_deps_file__ErrorMsg_860);
                    }
#line 763 "write_deps_file.m"
                    {
#line 763 "write_deps_file.m"
                      parse_tree__write_deps_file__V_822_822 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 763 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_822_822, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_860));
#line 763 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_822_822, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 763 "write_deps_file.m"
                    }
#line 762 "write_deps_file.m"
                    {
#line 762 "write_deps_file.m"
                      parse_tree__write_deps_file__V_820_820 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_820_820, 0) = ((MR_Box) ((MR_String) "\': "));
#line 762 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_820_820, 1) = ((MR_Box) (parse_tree__write_deps_file__V_822_822));
#line 762 "write_deps_file.m"
                    }
#line 762 "write_deps_file.m"
                    {
#line 762 "write_deps_file.m"
                      parse_tree__write_deps_file__V_819_819 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_819_819, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_34));
#line 762 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_819_819, 1) = ((MR_Box) (parse_tree__write_deps_file__V_820_820));
#line 762 "write_deps_file.m"
                    }
#line 762 "write_deps_file.m"
                    {
#line 762 "write_deps_file.m"
                      parse_tree__write_deps_file__V_817_817 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_817_817, 0) = ((MR_Box) ((MR_String) "\' as \140"));
#line 762 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_817_817, 1) = ((MR_Box) (parse_tree__write_deps_file__V_819_819));
#line 762 "write_deps_file.m"
                    }
#line 761 "write_deps_file.m"
                    {
#line 761 "write_deps_file.m"
                      parse_tree__write_deps_file__V_816_816 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_816_816, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_36));
#line 761 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_816_816, 1) = ((MR_Box) (parse_tree__write_deps_file__V_817_817));
#line 761 "write_deps_file.m"
                    }
#line 761 "write_deps_file.m"
                    {
#line 761 "write_deps_file.m"
                      parse_tree__write_deps_file__V_814_814 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_814_814, 0) = ((MR_Box) ((MR_String) "can\'t rename file \140"));
#line 761 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_814_814, 1) = ((MR_Box) (parse_tree__write_deps_file__V_816_816));
#line 761 "write_deps_file.m"
                    }
#line 761 "write_deps_file.m"
                    {
#line 761 "write_deps_file.m"
                      mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_814_814, &parse_tree__write_deps_file__Message_859);
                    }
#line 764 "write_deps_file.m"
                    {
#line 764 "write_deps_file.m"
                      libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_859);
#line 764 "write_deps_file.m"
                      return;
                    }
#line 757 "write_deps_file.m"
                  }
#line 753 "write_deps_file.m"
              }
#line 752 "write_deps_file.m"
            else
#line 745 "write_deps_file.m"
              {
#line 745 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__Error4_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result4_138, (MR_Integer) 0)));
#line 745 "write_deps_file.m"
                MR_String parse_tree__write_deps_file__ErrorMsg_140;
#line 745 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_828_828;
#line 745 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_830_830;
#line 745 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_831_831;
#line 745 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_833_833;
#line 745 "write_deps_file.m"
                MR_String parse_tree__write_deps_file__Message_858;

#line 746 "write_deps_file.m"
                {
#line 746 "write_deps_file.m"
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_32, (MR_String) " failed.\n");
                }
#line 747 "write_deps_file.m"
                {
#line 747 "write_deps_file.m"
                  libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_32);
                }
#line 748 "write_deps_file.m"
                {
#line 748 "write_deps_file.m"
                  mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error4_139, &parse_tree__write_deps_file__ErrorMsg_140);
                }
#line 750 "write_deps_file.m"
                {
#line 750 "write_deps_file.m"
                  parse_tree__write_deps_file__V_833_833 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_833_833, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_140));
#line 750 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_833_833, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 750 "write_deps_file.m"
                }
#line 749 "write_deps_file.m"
                {
#line 749 "write_deps_file.m"
                  parse_tree__write_deps_file__V_831_831 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_831_831, 0) = ((MR_Box) ((MR_String) "\': "));
#line 749 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_831_831, 1) = ((MR_Box) (parse_tree__write_deps_file__V_833_833));
#line 749 "write_deps_file.m"
                }
#line 749 "write_deps_file.m"
                {
#line 749 "write_deps_file.m"
                  parse_tree__write_deps_file__V_830_830 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_830_830, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_34));
#line 749 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_830_830, 1) = ((MR_Box) (parse_tree__write_deps_file__V_831_831));
#line 749 "write_deps_file.m"
                }
#line 749 "write_deps_file.m"
                {
#line 749 "write_deps_file.m"
                  parse_tree__write_deps_file__V_828_828 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_828_828, 0) = ((MR_Box) ((MR_String) "can\'t remove file \140"));
#line 749 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_828_828, 1) = ((MR_Box) (parse_tree__write_deps_file__V_830_830));
#line 749 "write_deps_file.m"
                }
#line 749 "write_deps_file.m"
                {
#line 749 "write_deps_file.m"
                  mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_828_828, &parse_tree__write_deps_file__Message_858);
                }
#line 751 "write_deps_file.m"
                {
#line 751 "write_deps_file.m"
                  libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_858);
#line 751 "write_deps_file.m"
                  return;
                }
#line 745 "write_deps_file.m"
              }
#line 740 "write_deps_file.m"
          }
#line 140 "write_deps_file.m"
      }
#line 105 "write_deps_file.m"
  }
#line 39 "write_deps_file.m"
}

void mercury__parse_tree__write_deps_file__init(void)
{
}

void mercury__parse_tree__write_deps_file__init_type_tables(void)
{
}

void mercury__parse_tree__write_deps_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.write_deps_file. */
