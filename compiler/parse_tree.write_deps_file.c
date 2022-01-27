/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_find.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 2028 "write_deps_file.m"
struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s {
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17;
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20;
#line 2034 "write_deps_file.m"
  MR_bool parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded;
#line 2050 "write_deps_file.m"
  jmp_buf parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0;
#line 2050 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30;
#line 2050 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46;
#line 2050 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47;
#line 2051 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_28_28;
#line 2051 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_28_28;
#line 2051 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_46_46;
#line 2028 "write_deps_file.m"
};


#line 171 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 174 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;

#line 177 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 180 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

#line 183 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 186 "parse_tree.write_deps_file.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 189 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 192 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 1668 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 1668 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1668 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 1668 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
#line 1668 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5);

#line 1661 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
#line 1661 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_5,
#line 1661 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_6,
#line 1661 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8);

#line 1102 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_2(
#line 1102 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1102 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 1088 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_1(
#line 1088 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1088 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 1633 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1631__1_3_p_0_1(
#line 1633 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1633 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1633 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1631 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1631__1_3_p_0(
#line 1631 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5,
#line 1631 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_15,
#line 1631 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_16);

#line 1633 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__foreign_modules__1633__1_2_f_0(
#line 1633 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_15,
#line 1633 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_18,
#line 1633 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_19);

#line 1281 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1281__1_5_p_0(
#line 1281 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1281 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_119,
#line 1281 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__HeadVar__3_120);

#line 1232 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1232__1_2_p_0(
#line 1232 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1232 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_92);

#line 1006 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__write_foreign_dependency_for_il__1006__1_2_f_0(
#line 1006 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 1006 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_63);

#line 818 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__submodules__818__1_3_p_0(
#line 818 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 818 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Str_7,
#line 818 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_10);

#line 2405 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2405__1_1_f_0(
#line 2405 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_16);

#line 1103 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_files__1103__1_2_p_0(
#line 1103 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_33,
#line 1103 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_64);

#line 1088 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__generate_dependencies_write_d_files__1088__1_2_f_0(
#line 1088 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Lang_40,
#line 1088 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_57);

#line 614 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__614__1_7_p_0(
#line 614 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 614 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_42,
#line 614 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImportedModules_121,
#line 614 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ForeignImportExt_125,
#line 614 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_584);

#line 575 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__575__1_3_p_0(
#line 575 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_13,
#line 575 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_574,
#line 575 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_575);

#line 293 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__293__1_7_p_0(
#line 293 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 293 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_14,
#line 293 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__NestedDeps_21,
#line 293 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_42,
#line 293 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_307);

#line 2521 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
#line 2521 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym1_4,
#line 2521 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym2_5,
#line 2521 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Result_6);

#line 2430 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
#line 2430 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 2430 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 2430 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 2430 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_4,
#line 2430 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
#line 2430 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6);

#line 2390 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0_1(
#line 2390 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2390 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2390 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2390 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 2385 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
#line 2385 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Stream_5,
#line 2385 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SCC0_6);

#line 2341 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
#line 2341 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_4,
#line 2341 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 2341 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__FileName_6);

#line 2251 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
#line 2251 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_17,
#line 2251 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_18,
#line 2251 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_19,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_20,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ExeFileName_21,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_22,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_25,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LibFileName_26,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__JarFileName_28,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DepFileName_29,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DvFileName_30);

#line 2238 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
#line 2238 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 2238 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_9,
#line 2238 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 2238 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_11,
#line 2238 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5);

#line 2221 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
#line 2221 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2221 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2221 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2221 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 2215 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
#line 2215 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 2215 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 2215 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 2215 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_10);

#line 2050 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
#line 2050 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 2051 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
#line 2051 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 2050 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
#line 2050 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 2050 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
#line 2050 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 2028 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_14,
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_15,
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_16,
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_17,
#line 2028 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_18,
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_20,
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_21,
#line 2028 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
#line 2028 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
#line 2028 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24);

#line 1985 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
#line 1985 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_11,
#line 1985 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12,
#line 1985 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_13,
#line 1985 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_14,
#line 1985 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_15,
#line 1985 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_16,
#line 1985 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DepFileName_17,
#line 1985 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DvFileName_18);

#line 1751 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
#line 1751 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_19,
#line 1751 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_20,
#line 1751 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_21,
#line 1751 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_22,
#line 1751 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_23,
#line 1751 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
#line 1751 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_25,
#line 1751 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_26,
#line 1751 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
#line 1751 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
#line 1751 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
#line 1751 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
#line 1751 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
#line 1751 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__JarFileName_32,
#line 1751 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LibFileName_33,
#line 1751 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34);

#line 1693 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
#line 1693 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1693 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1693 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1693 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1693 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12);

#line 1631 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0_1(
#line 1631 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1631 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1631 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1627 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0(
#line 1627 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_4,
#line 1627 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5);

#line 1607 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
#line 1607 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1607 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_2,
#line 1607 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3);

#line 1281 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
#line 1281 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1281 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1281 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
#line 1281 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
#line 1281 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

#line 1232 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
#line 1232 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1232 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 1213 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
#line 1213 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1213 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1213 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1210 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
#line 1210 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1210 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1210 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1210 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 1186 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
#line 1186 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1186 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1186 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1186 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1186 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12);

#line 1029 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
#line 1029 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 1029 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 1029 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 1029 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Ext_10);

#line 1005 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0_1(
#line 1005 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1005 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 961 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0(
#line 961 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 961 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 961 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 961 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__AllDeps_12,
#line 961 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImports_13,
#line 961 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignLang_14);

#line 935 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 935 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_2,
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_3);

#line 921 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
#line 921 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 921 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 921 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 921 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4);

#line 907 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
#line 907 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 907 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_2,
#line 907 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 907 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_4,
#line 907 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_5);

#line 897 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(
#line 897 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 897 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 897 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFile_8);

#line 894 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1(
#line 894 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 894 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 894 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 894 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 888 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(
#line 888 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 888 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 888 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFiles_8);

#line 869 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(
#line 869 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 869 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 869 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__3_3,
#line 869 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4);

#line 862 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2);

#line 840 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_10,
#line 840 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Prefix_11,
#line 840 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_12,
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Basis_13,
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_14);

#line 829 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
#line 829 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 829 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 829 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 829 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4);

#line 818 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0_1(
#line 818 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 818 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 811 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0(
#line 811 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 811 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules0_5);

#line 2405 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0_1(
#line 2405 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2405 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 2369 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
#line 2369 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2369 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2369 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2369 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 708 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_7(
#line 708 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 708 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 708 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 708 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 631 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_6(
#line 631 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 631 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 631 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 631 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 614 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_5(
#line 614 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 614 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 614 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 614 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 575 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_4(
#line 575 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 575 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 575 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 401 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_3(
#line 401 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 401 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 379 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_2(
#line 379 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 379 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 293 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_1(
#line 293 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 293 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 293 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 293 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[123][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[8][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[3][10];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[3][5];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[8][6];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[1][11];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][9];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[1][7];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[3][1];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[2][8];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[123][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) ".java_date")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) ".il_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ".dir/*.\044O")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ".pic_s_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ".s_date")),
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
    ((MR_Box) ((MR_String) "endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) " endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\t\100:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) ".dll")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) ".il")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[16])))
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
    ((MR_Box) ((MR_String) ".pic_s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) ".s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) ".pic_o")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) ".\044O")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) ".c")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[11])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "endif\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) " \044(ALL_MLLIBS)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "\tdone\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "\t\t} || exit 1; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044(INSTALL_INT_DIR)\"/*.\044\044ext \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "\t\t\t{ [ -d \"\044\044dir\" ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(LN_S) .. \"\044\044dir\" || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "\t\trm -rf \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "\t\tdir=\"\044(INSTALL_INT_DIR)/Mercury/\044\044{ext}s\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "; do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\t\"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[29])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044(INSTALL_GRADE_INT_DIR)\"/*.\044\044ext \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) "\t\t\t{ [ -d \"\044\044dir\" ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(LN_S) .. \"\044\044dir\" || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "\t\trm -rf \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) "\t\tdir=\"\044(INSTALL_GRADE_INT_DIR)/Mercury/\044\044{ext}s\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "; do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "\tdone\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INC_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_String) ".mhs); do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "\t\t} && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_INT_DIR)/Mercury/mihs; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \044(INSTALL_INT_DIR)/Mercury/mihs ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mihs || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \044(INSTALL_INT_DIR)/Mercury/mihs\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_GRADE_INC_SUBDIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[59])))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_String) "\t\t} && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \044(INSTALL_GRADE_INC_SUBDIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \044(INSTALL_GRADE_INC_SUBDIR) ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \044(INSTALL_GRADE_INC_SUBDIR) || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \044(INSTALL_GRADE_INC_SUBDIR)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[64])))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[65])))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_String) "\tdone\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[68])))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_GRADE_INC_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[69])))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[70])))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_String) ".mihs); do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[71])))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_String) ".all_trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 74 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[73])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 75 */
  {
    ((MR_Box) ((MR_String) ".all_opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 76 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[75])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[74])))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_String) ".all_int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 78 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[77])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) ((MR_String) ".all_ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 80 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[79])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[78])))
  },
  /* row 81 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_String) ".classes"))
  },
  /* row 82 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[81])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[80])))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) ((MR_String) ".javas"))
  },
  /* row 84 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[83])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) ((MR_String) ".ils")),
    ((MR_Box) ((MR_String) ".ils"))
  },
  /* row 86 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[85])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[84])))
  },
  /* row 87 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 88 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[87])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[86])))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 90 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[89])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[88])))
  },
  /* row 91 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 92 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[91])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[90])))
  },
  /* row 93 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 94 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[93])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[92])))
  },
  /* row 95 */
  {
    ((MR_Box) ((MR_String) ".check")),
    ((MR_Box) ((MR_String) ".errs"))
  },
  /* row 96 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[95])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[94])))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs) | xargs rm -f\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_String) " :")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) ".fact_tables =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) ".fact_tables.cs =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) ".fact_tables.os =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) ".fact_tables:%=\044(cs_subdir)%.c)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) " : ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) " : mercury.sn\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_String) "\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) "=")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) ".cs)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLLIBS_DEP))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS)))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_String) "ifeq (\044(findstring il,\044(GRADE)),il)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) ".foreign_dlls)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) " ifeq (\044(findstring java,\044(GRADE)),java)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_String) ".classes)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_String) "else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_String) " else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_String) " endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_String) " \044(ALL_MLLIBS)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_String) ")\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_String) ".classes) | xargs rm -f\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[5])),
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0))
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
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0))
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[1][7] = {
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
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[3][1] = {
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0)),
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



#line 1894 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1902 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0
  }
};

#line 1910 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1918 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

#line 1927 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1936 "parse_tree.write_deps_file.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1945 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__write_deps_file__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0
  }
};

#line 1953 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1668 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 1668 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1668 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 1668 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
#line 1668 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5)
#line 1668 "write_deps_file.m"
{
#line 1673 "write_deps_file.m"
  while (MR_TRUE)
#line 1673 "write_deps_file.m"
    {
#line 1673 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 1673 "write_deps_file.m"
      {
#line 1673 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 1673 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1673 "write_deps_file.m"
          *parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4;
#line 1673 "write_deps_file.m"
        else
#line 1675 "write_deps_file.m"
          {
#line 1675 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_48_48 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1675 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_50_50;
#line 1675 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1675 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1675 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleImports_17;
#line 1675 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FactDeps_18;
#line 1675 "write_deps_file.m"
            MR_Integer parse_tree__write_deps_file__NumFactDeps_19;
#line 1675 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleList_20;
#line 1675 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__NewLinkObjs_22;
#line 1675 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_25_25;
#line 1675 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;
#line 1676 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv0_V_25_25;
#line 1676 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_16_16;
#line 1679 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_28_28;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_29_29;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_30_30;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_31_31;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_32_32;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_33_33;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_34_34;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_35_35;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_36_36;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_37_37;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_38_38;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_39_39;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_40_40;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_41_41;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_42_42;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_43_43;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_44_44;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_45_45;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_46_46;
#line 1679 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_47_47;

#line 1676 "write_deps_file.m"
            {
#line 1676 "write_deps_file.m"
              mercury__map__lookup_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_48_48, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__HeadVar__2_2, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__conv0_V_25_25);
            }
#line 1676 "write_deps_file.m"
            parse_tree__write_deps_file__V_25_25 = ((MR_Word) parse_tree__write_deps_file__conv0_V_25_25);
#line 1676 "write_deps_file.m"
            parse_tree__write_deps_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_25_25, (MR_Integer) 0)));
#line 1676 "write_deps_file.m"
            parse_tree__write_deps_file__ModuleImports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_25_25, (MR_Integer) 1)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 0)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 1)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 2)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 3)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 4)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 5)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 6)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 7)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 8)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 9)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__FactDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 10)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 11)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 12)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 13)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 14)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 15)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 16)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 17)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 18)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 19)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 20)));
#line 2114 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_50_50 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1680 "write_deps_file.m"
            {
#line 1680 "write_deps_file.m"
              mercury__list__length_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_50_50, parse_tree__write_deps_file__FactDeps_18, &parse_tree__write_deps_file__NumFactDeps_19);
            }
#line 1681 "write_deps_file.m"
            {
#line 1681 "write_deps_file.m"
              mercury__list__duplicate_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_48_48, parse_tree__write_deps_file__NumFactDeps_19, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__ModuleList_20);
            }
#line 1682 "write_deps_file.m"
            {
#line 1682 "write_deps_file.m"
              mercury__assoc_list__from_corresponding_lists_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_50_50, parse_tree__write_deps_file__TypeCtorInfo_48_48, parse_tree__write_deps_file__FactDeps_18, parse_tree__write_deps_file__ModuleList_20, &parse_tree__write_deps_file__NewLinkObjs_22);
            }
#line 1688 "write_deps_file.m"
            {
#line 1688 "write_deps_file.m"
              mercury__list__append_3_p_1((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], parse_tree__write_deps_file__NewLinkObjs_22, parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4, &parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26);
            }
#line 1689 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 1689 "write_deps_file.m"
            {
#line 1689 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__1__tmp_copy_1 = parse_tree__write_deps_file__Modules_12;
#line 1689 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0__tmp_copy_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;

#line 1689 "write_deps_file.m"
              parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0__tmp_copy_4;
#line 1689 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__1_1 = parse_tree__write_deps_file__HeadVar__1__tmp_copy_1;
#line 1689 "write_deps_file.m"
            }
#line 1689 "write_deps_file.m"
            continue;
#line 1675 "write_deps_file.m"
          }
#line 1673 "write_deps_file.m"
      }
#line 1673 "write_deps_file.m"
      break;
#line 1673 "write_deps_file.m"
    }
#line 1668 "write_deps_file.m"
}

#line 1661 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
#line 1661 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_5,
#line 1661 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_6,
#line 1661 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8)
#line 1661 "write_deps_file.m"
{
#line 1664 "write_deps_file.m"
  {
#line 1664 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1664 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs0_9;

#line 1665 "write_deps_file.m"
    {
#line 1665 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(parse_tree__write_deps_file__Modules_5, parse_tree__write_deps_file__DepsMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_deps_file__ExtraLinkObjs0_9);
    }
#line 1666 "write_deps_file.m"
    {
#line 1666 "write_deps_file.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], parse_tree__write_deps_file__ExtraLinkObjs0_9, parse_tree__write_deps_file__ExtraLinkObjs_8);
#line 1666 "write_deps_file.m"
      return;
    }
#line 1664 "write_deps_file.m"
  }
#line 1661 "write_deps_file.m"
}

#line 1102 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_2(
#line 1102 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1102 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1102 "write_deps_file.m"
{
#line 1102 "write_deps_file.m"
  {
#line 1102 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1102 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 1102 "write_deps_file.m"
    {
#line 1102 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_files__1103__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1102 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1102 "write_deps_file.m"
  }
#line 1102 "write_deps_file.m"
}

#line 1088 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_1(
#line 1088 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1088 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1088 "write_deps_file.m"
{
#line 1088 "write_deps_file.m"
  {
#line 1088 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 1088 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1088 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__3_58;

#line 1088 "write_deps_file.m"
    {
#line 1088 "write_deps_file.m"
      parse_tree__write_deps_file__conv0_HeadVar__3_58 = parse_tree__write_deps_file__IntroducedFrom__func__generate_dependencies_write_d_files__1088__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1088 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__3_58));
#line 1088 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 1088 "write_deps_file.m"
  }
#line 1088 "write_deps_file.m"
}

#line 59 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0(
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntDepsGraph_3,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ImplDepsGraph_4,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IndirectDepsGraph_5,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IndirectOptDepsGraph_6,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOptOrder_7)
#line 59 "write_deps_file.m"
{
#line 1047 "write_deps_file.m"
  while (MR_TRUE)
#line 1047 "write_deps_file.m"
    {
#line 1047 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 1047 "write_deps_file.m"
      {
#line 1047 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 1047 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1047 "write_deps_file.m"
          {
#line 1047 "write_deps_file.m"
          }
#line 1047 "write_deps_file.m"
        else
#line 1050 "write_deps_file.m"
          {
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_113_113;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_115_115;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Dep_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Deps_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleName_33;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IndirectOptDeps_34;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Intermod_35;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IntDeps_36;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ImplDeps_37;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IndirectDeps_38;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Target_39;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Lang_40;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImports_41;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FindModule_43;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps0_46;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps_49;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Errors_50;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FatalErrors_51;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Dep_22, (MR_Integer) 1)));
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_56_56;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_Module_61_61;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_Module_62_62;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63;
#line 1050 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_65_65;
#line 1052 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Dep_22, (MR_Integer) 0)));
#line 1092 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_72_72;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_73_73;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_74_74;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_75_75;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_76_76;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_77_77;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_78_78;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_79_79;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_80_80;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_81_81;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_82_82;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_83_83;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_85_85;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_86_86;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_87_87;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_88_88;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_89_89;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_90_90;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_91_91;
#line 1092 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_92_92;
#line 1092 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_84_84;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_45_45;
#line 1109 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps1_48;
#line 1106 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_47_47;
#line 1116 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_93_93;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_94_94;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_95_95;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_96_96;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_97_97;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_98_98;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_99_99;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_100_100;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_101_101;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_102_102;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_103_103;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_104_104;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_105_105;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_106_106;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_107_107;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_108_108;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_109_109;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_110_110;
#line 1116 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_111_111;
#line 1116 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_112_112;

#line 1058 "write_deps_file.m"
            {
#line 1058 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, &parse_tree__write_deps_file__ModuleName_33);
            }
#line 1059 "write_deps_file.m"
            {
#line 1059 "write_deps_file.m"
              parse_tree__module_deps_graph__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IndirectOptDepsGraph_6, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__IndirectOptDeps_34);
            }
#line 1061 "write_deps_file.m"
            {
#line 1061 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_1, (MR_Integer) 326, &parse_tree__write_deps_file__Intermod_35);
            }
#line 1071 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Intermod_35 == (MR_Integer) 0))
#line 1072 "write_deps_file.m"
              {
#line 1073 "write_deps_file.m"
                {
#line 1073 "write_deps_file.m"
                  parse_tree__module_deps_graph__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IntDepsGraph_3, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__IntDeps_36);
                }
#line 1074 "write_deps_file.m"
                {
#line 1074 "write_deps_file.m"
                  parse_tree__module_deps_graph__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__ImplDepsGraph_4, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__ImplDeps_37);
                }
#line 1075 "write_deps_file.m"
                {
#line 1075 "write_deps_file.m"
                  parse_tree__module_deps_graph__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IndirectDepsGraph_5, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__IndirectDeps_38);
                }
#line 1072 "write_deps_file.m"
              }
#line 1071 "write_deps_file.m"
            else
#line 1064 "write_deps_file.m"
              {
#line 1068 "write_deps_file.m"
                parse_tree__write_deps_file__IntDeps_36 = parse_tree__write_deps_file__IndirectOptDeps_34;
#line 1069 "write_deps_file.m"
                parse_tree__write_deps_file__ImplDeps_37 = parse_tree__write_deps_file__IndirectOptDeps_34;
#line 1070 "write_deps_file.m"
                parse_tree__write_deps_file__IndirectDeps_38 = parse_tree__write_deps_file__IndirectOptDeps_34;
#line 1064 "write_deps_file.m"
              }
#line 1079 "write_deps_file.m"
            {
#line 1079 "write_deps_file.m"
              libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_1, &parse_tree__write_deps_file__Target_39);
            }
#line 1081 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Target_39 == (MR_Integer) 0))
#line 1080 "write_deps_file.m"
              parse_tree__write_deps_file__Lang_40 = (MR_Integer) 0;
#line 1081 "write_deps_file.m"
            else
#line 1081 "write_deps_file.m"
              if ((parse_tree__write_deps_file__Target_39 == (MR_Integer) 2))
#line 1082 "write_deps_file.m"
                parse_tree__write_deps_file__Lang_40 = (MR_Integer) 1;
#line 1081 "write_deps_file.m"
              else
#line 1081 "write_deps_file.m"
                if ((parse_tree__write_deps_file__Target_39 == (MR_Integer) 4))
#line 1084 "write_deps_file.m"
                  parse_tree__write_deps_file__Lang_40 = (MR_Integer) 4;
#line 1081 "write_deps_file.m"
                else
#line 1081 "write_deps_file.m"
                  if ((parse_tree__write_deps_file__Target_39 == (MR_Integer) 1))
#line 1083 "write_deps_file.m"
                    parse_tree__write_deps_file__Lang_40 = (MR_Integer) 3;
#line 1081 "write_deps_file.m"
                  else
#line 1081 "write_deps_file.m"
                    parse_tree__write_deps_file__Lang_40 = (MR_Integer) 2;
#line 2519 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_113_113 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1088 "write_deps_file.m"
            {
#line 1088 "write_deps_file.m"
              parse_tree__write_deps_file__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1088 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_56_56, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[7]));
#line 1088 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_56_56, 1) = ((MR_Box) (parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_1));
#line 1088 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1088 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_56_56, 3) = ((MR_Box) (parse_tree__write_deps_file__Lang_40));
#line 1088 "write_deps_file.m"
            }
#line 1088 "write_deps_file.m"
            {
#line 1088 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImports_41 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_113_113, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__V_56_56, parse_tree__write_deps_file__IndirectOptDeps_34);
            }
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 0)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 1)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 2)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 3)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 4)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 5)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 6)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 7)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 8)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 9)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 10)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 11)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 12)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 13)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 14)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 15)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 16)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 17)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 18)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 19)));
#line 1092 "write_deps_file.m"
            parse_tree__write_deps_file__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 20)));
#line 1092 "write_deps_file.m"
            {
#line 1092 "write_deps_file.m"
              parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 0) = ((MR_Box) (parse_tree__write_deps_file__V_72_72));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 2) = ((MR_Box) (parse_tree__write_deps_file__V_74_74));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 3) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 4) = ((MR_Box) (parse_tree__write_deps_file__V_76_76));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 5) = ((MR_Box) (parse_tree__write_deps_file__V_77_77));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 6) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 7) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 8) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 9) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 10) = ((MR_Box) (parse_tree__write_deps_file__V_82_82));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 11) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 12) = ((MR_Box) (parse_tree__write_deps_file__ForeignImports_41));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 13) = ((MR_Box) (parse_tree__write_deps_file__V_85_85));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 14) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 15) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 16) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 17) = ((MR_Box) (parse_tree__write_deps_file__V_89_89));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 18) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 19) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 1092 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 20) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 1092 "write_deps_file.m"
            }
#line 1094 "write_deps_file.m"
            {
#line 1094 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_set_int_deps_3_p_0(parse_tree__write_deps_file__IntDeps_36, parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, &parse_tree__write_deps_file__STATE_VARIABLE_Module_61_61);
            }
#line 1095 "write_deps_file.m"
            {
#line 1095 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_set_impl_deps_3_p_0(parse_tree__write_deps_file__ImplDeps_37, parse_tree__write_deps_file__STATE_VARIABLE_Module_61_61, &parse_tree__write_deps_file__STATE_VARIABLE_Module_62_62);
            }
#line 1096 "write_deps_file.m"
            {
#line 1096 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_set_indirect_deps_3_p_0(parse_tree__write_deps_file__IndirectDeps_38, parse_tree__write_deps_file__STATE_VARIABLE_Module_62_62, &parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63);
            }
#line 1102 "write_deps_file.m"
            {
#line 1102 "write_deps_file.m"
              parse_tree__write_deps_file__FindModule_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_43, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[1]));
#line 1102 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_43, 1) = ((MR_Box) (parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_2));
#line 1102 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1102 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_43, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_33));
#line 1102 "write_deps_file.m"
            }
#line 1105 "write_deps_file.m"
            {
#line 1105 "write_deps_file.m"
              mercury__list__takewhile_4_p_0(parse_tree__write_deps_file__TypeCtorInfo_113_113, parse_tree__write_deps_file__FindModule_43, parse_tree__write_deps_file__TransOptOrder_7, &parse_tree__write_deps_file__V_45_45, &parse_tree__write_deps_file__TransOptDeps0_46);
            }
#line 1106 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__TransOptDeps0_46)) == (MR_mktag((MR_Integer) 1)));
#line 1106 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 1106 "write_deps_file.m"
              {
#line 1106 "write_deps_file.m"
                parse_tree__write_deps_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__TransOptDeps0_46, (MR_Integer) 0)));
#line 1106 "write_deps_file.m"
                parse_tree__write_deps_file__TransOptDeps1_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__TransOptDeps0_46, (MR_Integer) 1)));
#line 1108 "write_deps_file.m"
                parse_tree__write_deps_file__TransOptDeps_49 = parse_tree__write_deps_file__TransOptDeps1_48;
#line 1106 "write_deps_file.m"
              }
#line 1106 "write_deps_file.m"
            else
#line 1110 "write_deps_file.m"
              parse_tree__write_deps_file__TransOptDeps_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 0)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 1)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 2)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 3)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 4)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 5)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 6)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 7)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 8)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 9)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 10)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 11)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 12)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 13)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 14)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 15)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 16)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__Errors_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 17)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 18)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 19)));
#line 1116 "write_deps_file.m"
            parse_tree__write_deps_file__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, (MR_Integer) 20)));
#line 1117 "write_deps_file.m"
            {
#line 1117 "write_deps_file.m"
              parse_tree__write_deps_file__V_65_65 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
            }
#line 2729 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_115_115 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1117 "write_deps_file.m"
            {
#line 1117 "write_deps_file.m"
              mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_115_115, parse_tree__write_deps_file__Errors_50, parse_tree__write_deps_file__V_65_65, &parse_tree__write_deps_file__FatalErrors_51);
            }
#line 1118 "write_deps_file.m"
            {
#line 1118 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_115_115, parse_tree__write_deps_file__FatalErrors_51);
            }
#line 1121 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 1119 "write_deps_file.m"
              {
#line 1119 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_66_66;
#line 1119 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_67_67;

#line 1120 "write_deps_file.m"
                {
#line 1120 "write_deps_file.m"
                  parse_tree__write_deps_file__V_66_66 = mercury__set__list_to_set_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_113_113, parse_tree__write_deps_file__IndirectOptDeps_34);
                }
#line 1120 "write_deps_file.m"
                {
#line 1120 "write_deps_file.m"
                  parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDeps_49));
#line 1120 "write_deps_file.m"
                }
#line 1119 "write_deps_file.m"
                {
#line 1119 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependency_file_6_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, parse_tree__write_deps_file__V_66_66, parse_tree__write_deps_file__V_67_67);
                }
#line 1119 "write_deps_file.m"
              }
#line 1121 "write_deps_file.m"
            else
#line 1119 "write_deps_file.m"
              {
#line 1119 "write_deps_file.m"
              }
#line 1124 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 1124 "write_deps_file.m"
            {
#line 1124 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__Deps_23;

#line 1124 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 1124 "write_deps_file.m"
            }
#line 1124 "write_deps_file.m"
            continue;
#line 1050 "write_deps_file.m"
          }
#line 1047 "write_deps_file.m"
      }
#line 1047 "write_deps_file.m"
      break;
#line 1047 "write_deps_file.m"
    }
#line 59 "write_deps_file.m"
}

#line 1633 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1631__1_3_p_0_1(
#line 1633 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1633 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1633 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1633 "write_deps_file.m"
{
#line 1633 "write_deps_file.m"
  {
#line 1633 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1633 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1633 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv1_HeadVar__3_19;

#line 1633 "write_deps_file.m"
    {
#line 1633 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__func__foreign_modules__1633__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_HeadVar__3_19);
    }
#line 1633 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1633 "write_deps_file.m"
      {
#line 1633 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_HeadVar__3_19));
#line 1633 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1633 "write_deps_file.m"
      }
#line 1633 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1633 "write_deps_file.m"
  }
#line 1633 "write_deps_file.m"
}

#line 1631 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1631__1_3_p_0(
#line 1631 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5,
#line 1631 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_15,
#line 1631 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_16)
#line 1631 "write_deps_file.m"
{
#line 1631 "write_deps_file.m"
  {
#line 1631 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1631 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_23_23;
#line 1631 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeInfo_24_24;
#line 1631 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_34_58;
#line 1631 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LangList_10;
#line 1631 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_17_17;
#line 1631 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_32;
#line 1631 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Langs_33;
#line 1631 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_34_34;
#line 1631 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_35_35;
#line 1649 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_V_34_34;
#line 1649 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_31_31;
#line 1650 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_36_36;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_37_37;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_38_38;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_40_40;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_41_41;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_42_42;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_44_44;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_45_45;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_46_46;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_47_47;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_48_48;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_49_49;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_51_51;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 1650 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_54_54;
#line 1650 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_55_55;

#line 1649 "write_deps_file.m"
    {
#line 1649 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_5, ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_15)), &parse_tree__write_deps_file__conv0_V_34_34);
    }
#line 1649 "write_deps_file.m"
    parse_tree__write_deps_file__V_34_34 = ((MR_Word) parse_tree__write_deps_file__conv0_V_34_34);
#line 1649 "write_deps_file.m"
    parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_34_34, (MR_Integer) 0)));
#line 1649 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_34_34, (MR_Integer) 1)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 0)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 1)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 2)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 3)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 4)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 5)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 6)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 7)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 8)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 9)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 10)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 11)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 12)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 13)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 14)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 15)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 16)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 17)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 18)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 19)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 20)));
#line 1650 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 1650 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1650 "write_deps_file.m"
      {
#line 1650 "write_deps_file.m"
        parse_tree__write_deps_file__Langs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, (MR_Integer) 0)));
#line 2981 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_34_58 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 1651 "write_deps_file.m"
        {
#line 1651 "write_deps_file.m"
          parse_tree__write_deps_file__LangList_10 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_34_58, parse_tree__write_deps_file__Langs_33);
        }
#line 2988 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_23_23 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 2990 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeInfo_24_24 = (MR_Word) &parse_tree__write_deps_file_scalar_common_2[0];
#line 1633 "write_deps_file.m"
        {
#line 1633 "write_deps_file.m"
          parse_tree__write_deps_file__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1633 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[6]));
#line 1633 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 1) = ((MR_Box) (parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1631__1_3_p_0_1));
#line 1633 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1633 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 3) = ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_15));
#line 1633 "write_deps_file.m"
        }
#line 1633 "write_deps_file.m"
        {
#line 1633 "write_deps_file.m"
          *parse_tree__write_deps_file__HeadVar__3_16 = mercury__list__filter_map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__TypeInfo_24_24, parse_tree__write_deps_file__V_17_17, parse_tree__write_deps_file__LangList_10);
        }
#line 1633 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1650 "write_deps_file.m"
      }
#line 1631 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1631 "write_deps_file.m"
  }
#line 1631 "write_deps_file.m"
}

#line 1633 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__foreign_modules__1633__1_2_f_0(
#line 1633 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_15,
#line 1633 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_18,
#line 1633 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_19)
#line 1633 "write_deps_file.m"
{
#line 1633 "write_deps_file.m"
  {
#line 1633 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1633 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__NewM_12;
#line 1633 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Ext_13;

#line 1634 "write_deps_file.m"
    {
#line 1634 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(parse_tree__write_deps_file__HeadVar__1_15, parse_tree__write_deps_file__HeadVar__2_18, &parse_tree__write_deps_file__NewM_12);
    }
#line 1633 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1633 "write_deps_file.m"
      {
#line 1635 "write_deps_file.m"
        {
#line 1635 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(parse_tree__write_deps_file__HeadVar__2_18, &parse_tree__write_deps_file__Ext_13);
        }
#line 1633 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 1633 "write_deps_file.m"
          {
#line 1633 "write_deps_file.m"
            {
#line 1633 "write_deps_file.m"
              MR_Word base;
#line 1633 "write_deps_file.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1633 "write_deps_file.m"
              *parse_tree__write_deps_file__HeadVar__3_19 = base;
#line 1633 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__write_deps_file__NewM_12));
#line 1633 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__write_deps_file__Ext_13));
#line 1633 "write_deps_file.m"
            }
#line 1633 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1633 "write_deps_file.m"
          }
#line 1633 "write_deps_file.m"
      }
#line 1633 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1633 "write_deps_file.m"
  }
#line 1633 "write_deps_file.m"
}

#line 1281 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1281__1_5_p_0(
#line 1281 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1281 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_119,
#line 1281 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__HeadVar__3_120)
#line 1281 "write_deps_file.m"
{
#line 1281 "write_deps_file.m"
  {
#line 1281 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1281 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__F0_45;
#line 1281 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__M_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_119, (MR_Integer) 0)));
#line 1281 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__E_462 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_119, (MR_Integer) 1)));

#line 1282 "write_deps_file.m"
    {
#line 1282 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__M_461, parse_tree__write_deps_file__E_462, (MR_Integer) 0, &parse_tree__write_deps_file__F0_45);
    }
#line 1283 "write_deps_file.m"
    {
#line 1283 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_120 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", parse_tree__write_deps_file__F0_45);
    }
#line 1281 "write_deps_file.m"
  }
#line 1281 "write_deps_file.m"
}

#line 1232 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1232__1_2_p_0(
#line 1232 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1232 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_92)
#line 1232 "write_deps_file.m"
{
#line 1232 "write_deps_file.m"
  {
#line 1232 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1232 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_26;
#line 1232 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1232 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 1234 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_V_93_93;
#line 1234 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_25_25;
#line 1235 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_465_465;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_466_466;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_467_467;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_468_468;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_469_469;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_470_470;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_471_471;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_472_472;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_473_473;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_474_474;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_475_475;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_476_476;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_477_477;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_478_478;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_479_479;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_480_480;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_481_481;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_482_482;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_483_483;
#line 1235 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_484_484;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_27_27;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_28_28;

#line 1234 "write_deps_file.m"
    {
#line 1234 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_92)), &parse_tree__write_deps_file__conv0_V_93_93);
    }
#line 1234 "write_deps_file.m"
    parse_tree__write_deps_file__V_93_93 = ((MR_Word) parse_tree__write_deps_file__conv0_V_93_93);
#line 1234 "write_deps_file.m"
    parse_tree__write_deps_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_93_93, (MR_Integer) 0)));
#line 1234 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_93_93, (MR_Integer) 1)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_465_465 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 0)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_466_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 1)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_467_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 2)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_468_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 3)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_469_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 4)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 5)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 6)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 7)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 8)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 9)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_474_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 10)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 11)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 12)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_477_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 13)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_478_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 14)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_479_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 15)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_480_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 16)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_481_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 17)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_482_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 18)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 19)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__V_484_484 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 20)));
#line 1235 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__V_94_94)) == (MR_mktag((MR_Integer) 1)));
#line 1235 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1235 "write_deps_file.m"
      {
#line 1235 "write_deps_file.m"
        parse_tree__write_deps_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, (MR_Integer) 0)));
#line 1235 "write_deps_file.m"
        parse_tree__write_deps_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, (MR_Integer) 1)));
#line 1235 "write_deps_file.m"
      }
#line 1232 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1232 "write_deps_file.m"
  }
#line 1232 "write_deps_file.m"
}

#line 1006 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__write_foreign_dependency_for_il__1006__1_2_f_0(
#line 1006 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 1006 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_63)
#line 1006 "write_deps_file.m"
{
#line 1006 "write_deps_file.m"
  {
#line 1006 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1006 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HeadVar__3_64;

#line 1006 "write_deps_file.m"
    {
#line 1006 "write_deps_file.m"
      return parse_tree__write_deps_file__HeadVar__3_64 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(parse_tree__write_deps_file__HeadVar__2_63, parse_tree__write_deps_file__ModuleName_11);
    }
#line 1006 "write_deps_file.m"
    return parse_tree__write_deps_file__HeadVar__3_64;
#line 1006 "write_deps_file.m"
  }
#line 1006 "write_deps_file.m"
}

#line 818 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__submodules__818__1_3_p_0(
#line 818 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 818 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Str_7,
#line 818 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_10)
#line 818 "write_deps_file.m"
{
#line 818 "write_deps_file.m"
  {
#line 818 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 818 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_13_13;

#line 819 "write_deps_file.m"
    {
#line 819 "write_deps_file.m"
      parse_tree__write_deps_file__V_13_13 = mdbcomp__sym_name__outermost_qualifier_1_f_0(parse_tree__write_deps_file__HeadVar__3_10);
    }
#line 819 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__Str_7, parse_tree__write_deps_file__V_13_13) == 0);
#line 818 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 818 "write_deps_file.m"
      {
#line 820 "write_deps_file.m"
        {
#line 820 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__write_deps_file__HeadVar__3_10, parse_tree__write_deps_file__Module_4);
        }
#line 820 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 818 "write_deps_file.m"
      }
#line 818 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 818 "write_deps_file.m"
  }
#line 818 "write_deps_file.m"
}

#line 2405 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2405__1_1_f_0(
#line 2405 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_16)
#line 2405 "write_deps_file.m"
{
#line 2405 "write_deps_file.m"
  {
#line 2405 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2405 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HeadVar__2_17;

#line 2406 "write_deps_file.m"
    {
#line 2406 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__HeadVar__1_16);
    }
#line 2405 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2407 "write_deps_file.m"
      {
#line 2407 "write_deps_file.m"
        parse_tree__write_deps_file__HeadVar__2_17 = (MR_Word) &parse_tree__write_deps_file_scalar_common_9[2];
#line 2407 "write_deps_file.m"
      }
#line 2405 "write_deps_file.m"
    else
#line 2410 "write_deps_file.m"
      {
#line 2410 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_19_19;

#line 2410 "write_deps_file.m"
        {
#line 2410 "write_deps_file.m"
          parse_tree__write_deps_file__V_19_19 = mdbcomp__sym_name__outermost_qualifier_1_f_0(parse_tree__write_deps_file__HeadVar__1_16);
        }
#line 2410 "write_deps_file.m"
        {
#line 2410 "write_deps_file.m"
          parse_tree__write_deps_file__HeadVar__2_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2410 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_17, 0) = ((MR_Box) (parse_tree__write_deps_file__V_19_19));
#line 2410 "write_deps_file.m"
        }
#line 2410 "write_deps_file.m"
      }
#line 2405 "write_deps_file.m"
    return parse_tree__write_deps_file__HeadVar__2_17;
#line 2405 "write_deps_file.m"
  }
#line 2405 "write_deps_file.m"
}

#line 1103 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_files__1103__1_2_p_0(
#line 1103 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_33,
#line 1103 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_64)
#line 1103 "write_deps_file.m"
{
#line 1103 "write_deps_file.m"
  {
#line 1103 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 1103 "write_deps_file.m"
    {
#line 1103 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__write_deps_file__ModuleName_33, parse_tree__write_deps_file__HeadVar__2_64);
    }
#line 1103 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 1103 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1103 "write_deps_file.m"
  }
#line 1103 "write_deps_file.m"
}

#line 1088 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__generate_dependencies_write_d_files__1088__1_2_f_0(
#line 1088 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Lang_40,
#line 1088 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_57)
#line 1088 "write_deps_file.m"
{
#line 1088 "write_deps_file.m"
  {
#line 1088 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1088 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HeadVar__3_58;
#line 1088 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_59_59;

#line 1090 "write_deps_file.m"
    {
#line 1090 "write_deps_file.m"
      parse_tree__write_deps_file__V_59_59 = mercury__term__context_init_0_f_0();
    }
#line 1089 "write_deps_file.m"
    {
#line 1089 "write_deps_file.m"
      parse_tree__write_deps_file__HeadVar__3_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__3_58, 0) = ((MR_Box) (parse_tree__write_deps_file__Lang_40));
#line 1089 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__3_58, 1) = ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_57));
#line 1089 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__3_58, 2) = ((MR_Box) (parse_tree__write_deps_file__V_59_59));
#line 1089 "write_deps_file.m"
    }
#line 1088 "write_deps_file.m"
    return parse_tree__write_deps_file__HeadVar__3_58;
#line 1088 "write_deps_file.m"
  }
#line 1088 "write_deps_file.m"
}

#line 614 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__614__1_7_p_0(
#line 614 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 614 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_42,
#line 614 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImportedModules_121,
#line 614 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ForeignImportExt_125,
#line 614 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_584)
#line 614 "write_deps_file.m"
{
#line 614 "write_deps_file.m"
  {
#line 614 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 616 "write_deps_file.m"
    {
#line 616 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_42, (MR_String) "\n\n");
    }
#line 617 "write_deps_file.m"
    {
#line 617 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__HeadVar__5_584);
    }
#line 618 "write_deps_file.m"
    {
#line 618 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_42, (MR_String) " : ");
    }
#line 619 "write_deps_file.m"
    {
#line 619 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ForeignImportedModules_121, parse_tree__write_deps_file__ForeignImportExt_125, parse_tree__write_deps_file__DepStream_42);
    }
#line 621 "write_deps_file.m"
    {
#line 621 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_42, (MR_String) "\n\n");
#line 621 "write_deps_file.m"
      return;
    }
#line 614 "write_deps_file.m"
  }
#line 614 "write_deps_file.m"
}

#line 575 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__575__1_3_p_0(
#line 575 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_13,
#line 575 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_574,
#line 575 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_575)
#line 575 "write_deps_file.m"
{
#line 575 "write_deps_file.m"
  {
#line 575 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 582 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_576_576;

#line 577 "write_deps_file.m"
    {
#line 577 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_575 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(parse_tree__write_deps_file__HeadVar__2_574, parse_tree__write_deps_file__SourceFileModuleName_13);
    }
#line 582 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) *parse_tree__write_deps_file__HeadVar__3_575)) == (MR_mktag((MR_Integer) 0)));
#line 582 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 582 "write_deps_file.m"
      {
#line 582 "write_deps_file.m"
        parse_tree__write_deps_file__V_576_576 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__write_deps_file__HeadVar__3_575, (MR_Integer) 0)));
#line 582 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__V_576_576, (MR_String) "mercury") == 0);
#line 582 "write_deps_file.m"
      }
#line 582 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 575 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 575 "write_deps_file.m"
  }
#line 575 "write_deps_file.m"
}

#line 293 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__293__1_7_p_0(
#line 293 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 293 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_14,
#line 293 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__NestedDeps_21,
#line 293 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_42,
#line 293 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_307)
#line 293 "write_deps_file.m"
{
#line 293 "write_deps_file.m"
  {
#line 293 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 293 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ExtName_80;
#line 293 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_312_312;
#line 293 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_315_315;

#line 294 "write_deps_file.m"
    {
#line 294 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__HeadVar__5_307, (MR_Integer) 1, &parse_tree__write_deps_file__ExtName_80);
    }
#line 296 "write_deps_file.m"
    {
#line 296 "write_deps_file.m"
      parse_tree__write_deps_file__V_315_315 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_315_315, 0) = ((MR_Box) (parse_tree__write_deps_file__ExtName_80));
#line 296 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_315_315, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])));
#line 296 "write_deps_file.m"
    }
#line 296 "write_deps_file.m"
    {
#line 296 "write_deps_file.m"
      parse_tree__write_deps_file__V_312_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_312_312, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 296 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_312_312, 1) = ((MR_Box) (parse_tree__write_deps_file__V_315_315));
#line 296 "write_deps_file.m"
    }
#line 296 "write_deps_file.m"
    {
#line 296 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_312_312);
    }
#line 297 "write_deps_file.m"
    {
#line 297 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__NestedDeps_21, parse_tree__write_deps_file__HeadVar__5_307, parse_tree__write_deps_file__DepStream_42);
#line 297 "write_deps_file.m"
      return;
    }
#line 293 "write_deps_file.m"
  }
#line 293 "write_deps_file.m"
}

#line 2521 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
#line 2521 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym1_4,
#line 2521 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym2_5,
#line 2521 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Result_6)
#line 2521 "write_deps_file.m"
{
#line 2524 "write_deps_file.m"
  {
#line 2524 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2524 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str1_7;
#line 2524 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str2_8;

#line 2525 "write_deps_file.m"
    {
#line 2525 "write_deps_file.m"
      parse_tree__write_deps_file__Str1_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym1_4);
    }
#line 2526 "write_deps_file.m"
    {
#line 2526 "write_deps_file.m"
      parse_tree__write_deps_file__Str2_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym2_5);
    }
#line 2527 "write_deps_file.m"
    {
#line 2527 "write_deps_file.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__write_deps_file__Result_6, parse_tree__write_deps_file__Str1_7, parse_tree__write_deps_file__Str2_8);
#line 2527 "write_deps_file.m"
      return;
    }
#line 2524 "write_deps_file.m"
  }
#line 2521 "write_deps_file.m"
}

#line 2430 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
#line 2430 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 2430 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 2430 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 2430 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_4,
#line 2430 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
#line 2430 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6)
#line 2430 "write_deps_file.m"
{
#line 2434 "write_deps_file.m"
  {
#line 2434 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 2434 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2434 "write_deps_file.m"
      {
#line 2434 "write_deps_file.m"
        *parse_tree__write_deps_file__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2434 "write_deps_file.m"
        *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2434 "write_deps_file.m"
      }
#line 2434 "write_deps_file.m"
    else
#line 2436 "write_deps_file.m"
      {
#line 2436 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Dep_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
#line 2436 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Deps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));
#line 2436 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2436 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;

#line 2437 "write_deps_file.m"
        {
#line 2437 "write_deps_file.m"
          parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__BuildOptFiles_2, parse_tree__write_deps_file__Deps_18, parse_tree__write_deps_file__IntermodDirs_4, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39, &parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40);
        }
#line 3719 "parse_tree.write_deps_file.c"
        if ((parse_tree__write_deps_file__BuildOptFiles_2 == (MR_Integer) 0))
#line 3721 "parse_tree.write_deps_file.c"
          {
#line 3723 "parse_tree.write_deps_file.c"
            MR_String parse_tree__write_deps_file__OptName_27;
#line 3725 "parse_tree.write_deps_file.c"
            MR_Word parse_tree__write_deps_file__Result2_28;
#line 3727 "parse_tree.write_deps_file.c"
            MR_String parse_tree__write_deps_file__TransOptName_31;
#line 3729 "parse_tree.write_deps_file.c"
            MR_Word parse_tree__write_deps_file__Result3_32;

#line 2459 "write_deps_file.m"
            {
#line 2459 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_27);
            }
#line 2461 "write_deps_file.m"
            {
#line 2461 "write_deps_file.m"
              libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_27, &parse_tree__write_deps_file__Result2_28);
            }
#line 2466 "write_deps_file.m"
            if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_28)) == (MR_mktag((MR_Integer) 1))))
#line 2467 "write_deps_file.m"
              *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2466 "write_deps_file.m"
            else
#line 2465 "write_deps_file.m"
              {
#line 2465 "write_deps_file.m"
                MR_Word base;
#line 2465 "write_deps_file.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2465 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2465 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2465 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2465 "write_deps_file.m"
              }
#line 2469 "write_deps_file.m"
            {
#line 2469 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_31);
            }
#line 2471 "write_deps_file.m"
            {
#line 2471 "write_deps_file.m"
              libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__TransOptName_31, &parse_tree__write_deps_file__Result3_32);
            }
#line 2476 "write_deps_file.m"
            if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result3_32)) == (MR_mktag((MR_Integer) 1))))
#line 2477 "write_deps_file.m"
              *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
#line 2476 "write_deps_file.m"
            else
#line 2475 "write_deps_file.m"
              {
#line 2475 "write_deps_file.m"
                MR_Word base;
#line 2475 "write_deps_file.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2475 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2475 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2475 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2475 "write_deps_file.m"
              }
#line 3792 "parse_tree.write_deps_file.c"
          }
#line 3794 "parse_tree.write_deps_file.c"
        else
#line 3796 "parse_tree.write_deps_file.c"
          {
#line 3798 "parse_tree.write_deps_file.c"
            MR_Word parse_tree__write_deps_file__Result1_23;

#line 2441 "write_deps_file.m"
            {
#line 2441 "write_deps_file.m"
              parse_tree__prog_io_find__search_for_module_source_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__Dep_17, &parse_tree__write_deps_file__Result1_23);
            }
#line 3806 "parse_tree.write_deps_file.c"
            if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_23)) == (MR_mktag((MR_Integer) 1))))
#line 3808 "parse_tree.write_deps_file.c"
              {
#line 3810 "parse_tree.write_deps_file.c"
                MR_String parse_tree__write_deps_file__OptName_59;
#line 3812 "parse_tree.write_deps_file.c"
                MR_Word parse_tree__write_deps_file__Result2_60;
#line 3814 "parse_tree.write_deps_file.c"
                MR_String parse_tree__write_deps_file__TransOptName_61;
#line 3816 "parse_tree.write_deps_file.c"
                MR_Word parse_tree__write_deps_file__Result3_62;

#line 2459 "write_deps_file.m"
                {
#line 2459 "write_deps_file.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_59);
                }
#line 2461 "write_deps_file.m"
                {
#line 2461 "write_deps_file.m"
                  libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_59, &parse_tree__write_deps_file__Result2_60);
                }
#line 2466 "write_deps_file.m"
                if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_60)) == (MR_mktag((MR_Integer) 1))))
#line 2467 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2466 "write_deps_file.m"
                else
#line 2465 "write_deps_file.m"
                  {
#line 2465 "write_deps_file.m"
                    MR_Word base;
#line 2465 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2465 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2465 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2465 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2465 "write_deps_file.m"
                  }
#line 2469 "write_deps_file.m"
                {
#line 2469 "write_deps_file.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_61);
                }
#line 2471 "write_deps_file.m"
                {
#line 2471 "write_deps_file.m"
                  libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__TransOptName_61, &parse_tree__write_deps_file__Result3_62);
                }
#line 2476 "write_deps_file.m"
                if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result3_62)) == (MR_mktag((MR_Integer) 1))))
#line 2477 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
#line 2476 "write_deps_file.m"
                else
#line 2475 "write_deps_file.m"
                  {
#line 2475 "write_deps_file.m"
                    MR_Word base;
#line 2475 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2475 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2475 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2475 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2475 "write_deps_file.m"
                  }
#line 3879 "parse_tree.write_deps_file.c"
              }
#line 3881 "parse_tree.write_deps_file.c"
            else
#line 3883 "parse_tree.write_deps_file.c"
              {
#line 2445 "write_deps_file.m"
                {
#line 2445 "write_deps_file.m"
                  MR_Word base;
#line 2445 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2445 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2445 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2445 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2445 "write_deps_file.m"
                }
#line 2446 "write_deps_file.m"
                {
#line 2446 "write_deps_file.m"
                  MR_Word base;
#line 2446 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2446 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2446 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2446 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2446 "write_deps_file.m"
                }
#line 2447 "write_deps_file.m"
                {
#line 2447 "write_deps_file.m"
                  mercury__io__seen_2_p_0();
#line 2447 "write_deps_file.m"
                  return;
                }
#line 3920 "parse_tree.write_deps_file.c"
              }
#line 3922 "parse_tree.write_deps_file.c"
          }
#line 2436 "write_deps_file.m"
      }
#line 2434 "write_deps_file.m"
  }
#line 2430 "write_deps_file.m"
}

#line 2390 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0_1(
#line 2390 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2390 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2390 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2390 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2390 "write_deps_file.m"
{
#line 2390 "write_deps_file.m"
  {
#line 2390 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2390 "write_deps_file.m"
    {
#line 2390 "write_deps_file.m"
      parse_tree__prog_out__write_sym_name_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2390 "write_deps_file.m"
      return;
    }
#line 2390 "write_deps_file.m"
  }
#line 2390 "write_deps_file.m"
}

#line 2385 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
#line 2385 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Stream_5,
#line 2385 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SCC0_6)
#line 2385 "write_deps_file.m"
{
#line 2388 "write_deps_file.m"
  {
#line 2388 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2388 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_14_14 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2388 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SCC_8;

#line 2389 "write_deps_file.m"
    {
#line 2389 "write_deps_file.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_14_14, parse_tree__write_deps_file__SCC0_6, &parse_tree__write_deps_file__SCC_8);
    }
#line 2390 "write_deps_file.m"
    {
#line 2390 "write_deps_file.m"
      mercury__io__write_list_6_p_0(parse_tree__write_deps_file__TypeCtorInfo_14_14, parse_tree__write_deps_file__Stream_5, parse_tree__write_deps_file__SCC_8, (MR_String) "\n", (MR_Word) &parse_tree__write_deps_file_scalar_common_2[7]);
#line 2390 "write_deps_file.m"
      return;
    }
#line 2388 "write_deps_file.m"
  }
#line 2385 "write_deps_file.m"
}

#line 2341 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
#line 2341 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_4,
#line 2341 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 2341 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__FileName_6)
#line 2341 "write_deps_file.m"
{
#line 2343 "write_deps_file.m"
  {
#line 2343 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2343 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Deps_7;
#line 2343 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_9;
#line 2343 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileName_10;
#line 2344 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_Deps_7;
#line 2345 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_8_8;
#line 2349 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileBase_11;

#line 2344 "write_deps_file.m"
    {
#line 2344 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_4, ((MR_Box) (parse_tree__write_deps_file__ModuleName_5)), &parse_tree__write_deps_file__conv0_Deps_7);
    }
#line 2344 "write_deps_file.m"
    parse_tree__write_deps_file__Deps_7 = ((MR_Word) parse_tree__write_deps_file__conv0_Deps_7);
#line 2345 "write_deps_file.m"
    parse_tree__write_deps_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 0)));
#line 2345 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 1)));
#line 2346 "write_deps_file.m"
    {
#line 2346 "write_deps_file.m"
      parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(parse_tree__write_deps_file__ModuleImports_9, &parse_tree__write_deps_file__SourceFileName_10);
    }
#line 2347 "write_deps_file.m"
    {
#line 2347 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_10, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_11);
    }
#line 2349 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2348 "write_deps_file.m"
      *parse_tree__write_deps_file__FileName_6 = parse_tree__write_deps_file__SourceFileBase_11;
#line 2349 "write_deps_file.m"
    else
#line 2350 "write_deps_file.m"
      {
#line 2350 "write_deps_file.m"
        {
#line 2350 "write_deps_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_deps_file", (MR_String) "predicate \140parse_tree.write_deps_file.get_source_file\'/3", (MR_String) "source file name doesn\'t end in \140.m\'");
#line 2350 "write_deps_file.m"
          return;
        }
#line 2350 "write_deps_file.m"
      }
#line 2343 "write_deps_file.m"
  }
#line 2341 "write_deps_file.m"
}

#line 2251 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
#line 2251 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_17,
#line 2251 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_18,
#line 2251 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_19,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_20,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ExeFileName_21,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_22,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_25,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LibFileName_26,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__JarFileName_28,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DepFileName_29,
#line 2251 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DvFileName_30)
#line 2251 "write_deps_file.m"
{
#line 2259 "write_deps_file.m"
  {
#line 2259 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2259 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__CleanTargetName_32;
#line 2259 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__RealCleanTargetName_33;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_42_42;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_46_46;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_49_49;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_57_57;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_58_58;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_60_60;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_62_62;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_63_63;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_65_65;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_66_66;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_68_68;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_70_70;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_71_71;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_73_73;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_75_75;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_76_76;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_78_78;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_79_79;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_81_81;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_83_83;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_84_84;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_86_86;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_87_87;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_89_89;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_92_92;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_96_96;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_97_97;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_99_99;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_101_101;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_102_102;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_104_104;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_106_106;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_107_107;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_109_109;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_111_111;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_112_112;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_114_114;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_116_116;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_117_117;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_119_119;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_121_121;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_122_122;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_124_124;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_126_126;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_127_127;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_129_129;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_131_131;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_140_140;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_143_143;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_147_147;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_150_150;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_151_151;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_153_153;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_154_154;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_156_156;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_157_157;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_159_159;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_161_161;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_162_162;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_164_164;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_166_166;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_167_167;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_169_169;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_171_171;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_172_172;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_174_174;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_176_176;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_177_177;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_179_179;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_181_181;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_182_182;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_184_184;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_186_186;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_187_187;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_189_189;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_191_191;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_192_192;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_194_194;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_196_196;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_197_197;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_199_199;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_201_201;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_202_202;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_204_204;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_206_206;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_207_207;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_209_209;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_211_211;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_212_212;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_214_214;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_216_216;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_217_217;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_219_219;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_221_221;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_222_222;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_224_224;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_226_226;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_227_227;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_229_229;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_231_231;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_232_232;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_234_234;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_236_236;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_237_237;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_239_239;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_241_241;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_242_242;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_244_244;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_246_246;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_247_247;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_249_249;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_251_251;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_252_252;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_254_254;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_256_256;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_260_260;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_263_263;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_264_264;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_266_266;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_267_267;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_269_269;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_270_270;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_272_272;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_273_273;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_275_275;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_276_276;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_278_278;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_279_279;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_281_281;

#line 2268 "write_deps_file.m"
    {
#line 2268 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".clean", (MR_Integer) 1, &parse_tree__write_deps_file__CleanTargetName_32);
    }
#line 2272 "write_deps_file.m"
    parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97]);
#line 2271 "write_deps_file.m"
    {
#line 2271 "write_deps_file.m"
      parse_tree__write_deps_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2271 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2271 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2271 "write_deps_file.m"
    }
#line 2271 "write_deps_file.m"
    {
#line 2271 "write_deps_file.m"
      parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2271 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) ((MR_String) "clean_local : "));
#line 2271 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (parse_tree__write_deps_file__V_42_42));
#line 2271 "write_deps_file.m"
    }
#line 2270 "write_deps_file.m"
    {
#line 2270 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_39_39);
    }
#line 2292 "write_deps_file.m"
    {
#line 2292 "write_deps_file.m"
      parse_tree__write_deps_file__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2292 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2292 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])));
#line 2292 "write_deps_file.m"
    }
#line 2292 "write_deps_file.m"
    {
#line 2292 "write_deps_file.m"
      parse_tree__write_deps_file__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2292 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2292 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 1) = ((MR_Box) (parse_tree__write_deps_file__V_131_131));
#line 2292 "write_deps_file.m"
    }
#line 2291 "write_deps_file.m"
    {
#line 2291 "write_deps_file.m"
      parse_tree__write_deps_file__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2291 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_127_127, 0) = ((MR_Box) ((MR_String) ".errs) | xargs rm -f\n"));
#line 2291 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_127_127, 1) = ((MR_Box) (parse_tree__write_deps_file__V_129_129));
#line 2291 "write_deps_file.m"
    }
#line 2291 "write_deps_file.m"
    {
#line 2291 "write_deps_file.m"
      parse_tree__write_deps_file__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2291 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2291 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 1) = ((MR_Box) (parse_tree__write_deps_file__V_127_127));
#line 2291 "write_deps_file.m"
    }
#line 2291 "write_deps_file.m"
    {
#line 2291 "write_deps_file.m"
      parse_tree__write_deps_file__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2291 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_124_124, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2291 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_124_124, 1) = ((MR_Box) (parse_tree__write_deps_file__V_126_126));
#line 2291 "write_deps_file.m"
    }
#line 2290 "write_deps_file.m"
    {
#line 2290 "write_deps_file.m"
      parse_tree__write_deps_file__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2290 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_122_122, 0) = ((MR_Box) ((MR_String) ".profs) | xargs rm -f\n"));
#line 2290 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_122_122, 1) = ((MR_Box) (parse_tree__write_deps_file__V_124_124));
#line 2290 "write_deps_file.m"
    }
#line 2290 "write_deps_file.m"
    {
#line 2290 "write_deps_file.m"
      parse_tree__write_deps_file__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2290 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2290 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 1) = ((MR_Box) (parse_tree__write_deps_file__V_122_122));
#line 2290 "write_deps_file.m"
    }
#line 2290 "write_deps_file.m"
    {
#line 2290 "write_deps_file.m"
      parse_tree__write_deps_file__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2290 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_119_119, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2290 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_119_119, 1) = ((MR_Box) (parse_tree__write_deps_file__V_121_121));
#line 2290 "write_deps_file.m"
    }
#line 2289 "write_deps_file.m"
    {
#line 2289 "write_deps_file.m"
      parse_tree__write_deps_file__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2289 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 0) = ((MR_Box) ((MR_String) ".javas) | xargs rm -f\n"));
#line 2289 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 1) = ((MR_Box) (parse_tree__write_deps_file__V_119_119));
#line 2289 "write_deps_file.m"
    }
#line 2289 "write_deps_file.m"
    {
#line 2289 "write_deps_file.m"
      parse_tree__write_deps_file__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2289 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_116_116, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2289 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_116_116, 1) = ((MR_Box) (parse_tree__write_deps_file__V_117_117));
#line 2289 "write_deps_file.m"
    }
#line 2289 "write_deps_file.m"
    {
#line 2289 "write_deps_file.m"
      parse_tree__write_deps_file__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2289 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2289 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 1) = ((MR_Box) (parse_tree__write_deps_file__V_116_116));
#line 2289 "write_deps_file.m"
    }
#line 2288 "write_deps_file.m"
    {
#line 2288 "write_deps_file.m"
      parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2288 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) ((MR_String) ".ils) | xargs rm -f\n"));
#line 2288 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) (parse_tree__write_deps_file__V_114_114));
#line 2288 "write_deps_file.m"
    }
#line 2288 "write_deps_file.m"
    {
#line 2288 "write_deps_file.m"
      parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2288 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2288 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 2288 "write_deps_file.m"
    }
#line 2288 "write_deps_file.m"
    {
#line 2288 "write_deps_file.m"
      parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2288 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2288 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 2288 "write_deps_file.m"
    }
#line 2287 "write_deps_file.m"
    {
#line 2287 "write_deps_file.m"
      parse_tree__write_deps_file__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2287 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_107_107, 0) = ((MR_Box) ((MR_String) ".useds) | xargs rm -f\n"));
#line 2287 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_107_107, 1) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 2287 "write_deps_file.m"
    }
#line 2287 "write_deps_file.m"
    {
#line 2287 "write_deps_file.m"
      parse_tree__write_deps_file__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2287 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2287 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 1) = ((MR_Box) (parse_tree__write_deps_file__V_107_107));
#line 2287 "write_deps_file.m"
    }
#line 2287 "write_deps_file.m"
    {
#line 2287 "write_deps_file.m"
      parse_tree__write_deps_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2287 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2287 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 1) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 2287 "write_deps_file.m"
    }
#line 2286 "write_deps_file.m"
    {
#line 2286 "write_deps_file.m"
      parse_tree__write_deps_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2286 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 0) = ((MR_Box) ((MR_String) ".java_dates) | xargs rm -f\n"));
#line 2286 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 1) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 2286 "write_deps_file.m"
    }
#line 2286 "write_deps_file.m"
    {
#line 2286 "write_deps_file.m"
      parse_tree__write_deps_file__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2286 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2286 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 1) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 2286 "write_deps_file.m"
    }
#line 2286 "write_deps_file.m"
    {
#line 2286 "write_deps_file.m"
      parse_tree__write_deps_file__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2286 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2286 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 1) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 2286 "write_deps_file.m"
    }
#line 2285 "write_deps_file.m"
    {
#line 2285 "write_deps_file.m"
      parse_tree__write_deps_file__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_97_97, 0) = ((MR_Box) ((MR_String) ".il_dates) | xargs rm -f\n"));
#line 2285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_97_97, 1) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 2285 "write_deps_file.m"
    }
#line 2285 "write_deps_file.m"
    {
#line 2285 "write_deps_file.m"
      parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_97_97));
#line 2285 "write_deps_file.m"
    }
#line 2285 "write_deps_file.m"
    {
#line 2285 "write_deps_file.m"
      parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 2285 "write_deps_file.m"
    }
#line 2284 "write_deps_file.m"
    {
#line 2284 "write_deps_file.m"
      parse_tree__write_deps_file__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2284 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 0) = ((MR_Box) ((MR_String) ".c_dates) | xargs rm -f\n"));
#line 2284 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 2284 "write_deps_file.m"
    }
#line 2284 "write_deps_file.m"
    {
#line 2284 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2284 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2284 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 2284 "write_deps_file.m"
    }
#line 2284 "write_deps_file.m"
    {
#line 2284 "write_deps_file.m"
      parse_tree__write_deps_file__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2284 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_89_89, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2284 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_89_89, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 2284 "write_deps_file.m"
    }
#line 2283 "write_deps_file.m"
    {
#line 2283 "write_deps_file.m"
      parse_tree__write_deps_file__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2283 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2283 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 1) = ((MR_Box) (parse_tree__write_deps_file__V_89_89));
#line 2283 "write_deps_file.m"
    }
#line 2283 "write_deps_file.m"
    {
#line 2283 "write_deps_file.m"
      parse_tree__write_deps_file__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2283 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 0) = ((MR_Box) (parse_tree__write_deps_file__InitPicObjFileName_24));
#line 2283 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 1) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 2283 "write_deps_file.m"
    }
#line 2282 "write_deps_file.m"
    {
#line 2282 "write_deps_file.m"
      parse_tree__write_deps_file__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2282 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 0) = ((MR_Box) ((MR_String) ".all_pic_os) "));
#line 2282 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 1) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 2282 "write_deps_file.m"
    }
#line 2282 "write_deps_file.m"
    {
#line 2282 "write_deps_file.m"
      parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2282 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2282 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 2282 "write_deps_file.m"
    }
#line 2282 "write_deps_file.m"
    {
#line 2282 "write_deps_file.m"
      parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2282 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2282 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 2282 "write_deps_file.m"
    }
#line 2281 "write_deps_file.m"
    {
#line 2281 "write_deps_file.m"
      parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2281 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2281 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 2281 "write_deps_file.m"
    }
#line 2280 "write_deps_file.m"
    {
#line 2280 "write_deps_file.m"
      parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_23));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 2280 "write_deps_file.m"
    }
#line 2280 "write_deps_file.m"
    {
#line 2280 "write_deps_file.m"
      parse_tree__write_deps_file__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 0) = ((MR_Box) ((MR_String) ".all_os) "));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 2280 "write_deps_file.m"
    }
#line 2280 "write_deps_file.m"
    {
#line 2280 "write_deps_file.m"
      parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_76_76));
#line 2280 "write_deps_file.m"
    }
#line 2280 "write_deps_file.m"
    {
#line 2280 "write_deps_file.m"
      parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 2280 "write_deps_file.m"
    }
#line 2279 "write_deps_file.m"
    {
#line 2279 "write_deps_file.m"
      parse_tree__write_deps_file__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2279 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 0) = ((MR_Box) ((MR_String) ".mihs) | xargs rm -f\n"));
#line 2279 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 2279 "write_deps_file.m"
    }
#line 2279 "write_deps_file.m"
    {
#line 2279 "write_deps_file.m"
      parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2279 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2279 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_71_71));
#line 2279 "write_deps_file.m"
    }
#line 2279 "write_deps_file.m"
    {
#line 2279 "write_deps_file.m"
      parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2279 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2279 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 1) = ((MR_Box) (parse_tree__write_deps_file__V_70_70));
#line 2279 "write_deps_file.m"
    }
#line 2278 "write_deps_file.m"
    {
#line 2278 "write_deps_file.m"
      parse_tree__write_deps_file__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2278 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2278 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 1) = ((MR_Box) (parse_tree__write_deps_file__V_68_68));
#line 2278 "write_deps_file.m"
    }
#line 2277 "write_deps_file.m"
    {
#line 2277 "write_deps_file.m"
      parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2277 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_22));
#line 2277 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_66_66));
#line 2277 "write_deps_file.m"
    }
#line 2277 "write_deps_file.m"
    {
#line 2277 "write_deps_file.m"
      parse_tree__write_deps_file__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2277 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 0) = ((MR_Box) ((MR_String) ".cs) "));
#line 2277 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 1) = ((MR_Box) (parse_tree__write_deps_file__V_65_65));
#line 2277 "write_deps_file.m"
    }
#line 2277 "write_deps_file.m"
    {
#line 2277 "write_deps_file.m"
      parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2277 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2277 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (parse_tree__write_deps_file__V_63_63));
#line 2277 "write_deps_file.m"
    }
#line 2277 "write_deps_file.m"
    {
#line 2277 "write_deps_file.m"
      parse_tree__write_deps_file__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2277 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2277 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 1) = ((MR_Box) (parse_tree__write_deps_file__V_62_62));
#line 2277 "write_deps_file.m"
    }
#line 2276 "write_deps_file.m"
    {
#line 2276 "write_deps_file.m"
      parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2276 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) ((MR_String) ".dirs) | xargs rm -rf \n"));
#line 2276 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_60_60));
#line 2276 "write_deps_file.m"
    }
#line 2276 "write_deps_file.m"
    {
#line 2276 "write_deps_file.m"
      parse_tree__write_deps_file__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2276 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2276 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 2276 "write_deps_file.m"
    }
#line 2276 "write_deps_file.m"
    {
#line 2276 "write_deps_file.m"
      parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2276 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2276 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_57_57));
#line 2276 "write_deps_file.m"
    }
#line 2275 "write_deps_file.m"
    {
#line 2275 "write_deps_file.m"
      parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2275 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) " :\n"));
#line 2275 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 2275 "write_deps_file.m"
    }
#line 2275 "write_deps_file.m"
    {
#line 2275 "write_deps_file.m"
      parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2275 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2275 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 2275 "write_deps_file.m"
    }
#line 2274 "write_deps_file.m"
    {
#line 2274 "write_deps_file.m"
      parse_tree__write_deps_file__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2274 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2274 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 2274 "write_deps_file.m"
    }
#line 2274 "write_deps_file.m"
    {
#line 2274 "write_deps_file.m"
      parse_tree__write_deps_file__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2274 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2274 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 1) = ((MR_Box) (parse_tree__write_deps_file__V_50_50));
#line 2274 "write_deps_file.m"
    }
#line 2274 "write_deps_file.m"
    {
#line 2274 "write_deps_file.m"
      parse_tree__write_deps_file__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2274 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_46_46, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2274 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_46_46, 1) = ((MR_Box) (parse_tree__write_deps_file__V_49_49));
#line 2274 "write_deps_file.m"
    }
#line 2273 "write_deps_file.m"
    {
#line 2273 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_46_46);
    }
#line 2296 "write_deps_file.m"
    {
#line 2296 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".realclean", (MR_Integer) 1, &parse_tree__write_deps_file__RealCleanTargetName_33);
    }
#line 2299 "write_deps_file.m"
    {
#line 2299 "write_deps_file.m"
      parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2299 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2299 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2299 "write_deps_file.m"
    }
#line 2299 "write_deps_file.m"
    {
#line 2299 "write_deps_file.m"
      parse_tree__write_deps_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2299 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) ((MR_String) "realclean_local : "));
#line 2299 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 2299 "write_deps_file.m"
    }
#line 2298 "write_deps_file.m"
    {
#line 2298 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_140_140);
    }
#line 2326 "write_deps_file.m"
    {
#line 2326 "write_deps_file.m"
      parse_tree__write_deps_file__V_256_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2326 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2326 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[122])));
#line 2326 "write_deps_file.m"
    }
#line 2326 "write_deps_file.m"
    {
#line 2326 "write_deps_file.m"
      parse_tree__write_deps_file__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2326 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2326 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 1) = ((MR_Box) (parse_tree__write_deps_file__V_256_256));
#line 2326 "write_deps_file.m"
    }
#line 2325 "write_deps_file.m"
    {
#line 2325 "write_deps_file.m"
      parse_tree__write_deps_file__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2325 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 0) = ((MR_Box) ((MR_String) ".foreign_dlls) | xargs rm -f\n"));
#line 2325 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 1) = ((MR_Box) (parse_tree__write_deps_file__V_254_254));
#line 2325 "write_deps_file.m"
    }
#line 2325 "write_deps_file.m"
    {
#line 2325 "write_deps_file.m"
      parse_tree__write_deps_file__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2325 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2325 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 1) = ((MR_Box) (parse_tree__write_deps_file__V_252_252));
#line 2325 "write_deps_file.m"
    }
#line 2325 "write_deps_file.m"
    {
#line 2325 "write_deps_file.m"
      parse_tree__write_deps_file__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2325 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2325 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 1) = ((MR_Box) (parse_tree__write_deps_file__V_251_251));
#line 2325 "write_deps_file.m"
    }
#line 2324 "write_deps_file.m"
    {
#line 2324 "write_deps_file.m"
      parse_tree__write_deps_file__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2324 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 0) = ((MR_Box) ((MR_String) ".dlls) | xargs rm -f\n"));
#line 2324 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 1) = ((MR_Box) (parse_tree__write_deps_file__V_249_249));
#line 2324 "write_deps_file.m"
    }
#line 2324 "write_deps_file.m"
    {
#line 2324 "write_deps_file.m"
      parse_tree__write_deps_file__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2324 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2324 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 1) = ((MR_Box) (parse_tree__write_deps_file__V_247_247));
#line 2324 "write_deps_file.m"
    }
#line 2324 "write_deps_file.m"
    {
#line 2324 "write_deps_file.m"
      parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2324 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2324 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_246_246));
#line 2324 "write_deps_file.m"
    }
#line 2323 "write_deps_file.m"
    {
#line 2323 "write_deps_file.m"
      parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2323 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) ".all_mihs) | xargs rm -f\n"));
#line 2323 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 2323 "write_deps_file.m"
    }
#line 2323 "write_deps_file.m"
    {
#line 2323 "write_deps_file.m"
      parse_tree__write_deps_file__V_241_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2323 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2323 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 2323 "write_deps_file.m"
    }
#line 2323 "write_deps_file.m"
    {
#line 2323 "write_deps_file.m"
      parse_tree__write_deps_file__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2323 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2323 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 1) = ((MR_Box) (parse_tree__write_deps_file__V_241_241));
#line 2323 "write_deps_file.m"
    }
#line 2322 "write_deps_file.m"
    {
#line 2322 "write_deps_file.m"
      parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2322 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) ((MR_String) ".all_mhs) | xargs rm -f\n"));
#line 2322 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_239_239));
#line 2322 "write_deps_file.m"
    }
#line 2322 "write_deps_file.m"
    {
#line 2322 "write_deps_file.m"
      parse_tree__write_deps_file__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2322 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2322 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 2322 "write_deps_file.m"
    }
#line 2322 "write_deps_file.m"
    {
#line 2322 "write_deps_file.m"
      parse_tree__write_deps_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2322 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2322 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 1) = ((MR_Box) (parse_tree__write_deps_file__V_236_236));
#line 2322 "write_deps_file.m"
    }
#line 2321 "write_deps_file.m"
    {
#line 2321 "write_deps_file.m"
      parse_tree__write_deps_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2321 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 0) = ((MR_Box) ((MR_String) ".module_deps) | xargs rm -f\n"));
#line 2321 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 1) = ((MR_Box) (parse_tree__write_deps_file__V_234_234));
#line 2321 "write_deps_file.m"
    }
#line 2321 "write_deps_file.m"
    {
#line 2321 "write_deps_file.m"
      parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2321 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2321 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (parse_tree__write_deps_file__V_232_232));
#line 2321 "write_deps_file.m"
    }
#line 2321 "write_deps_file.m"
    {
#line 2321 "write_deps_file.m"
      parse_tree__write_deps_file__V_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2321 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2321 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 2321 "write_deps_file.m"
    }
#line 2320 "write_deps_file.m"
    {
#line 2320 "write_deps_file.m"
      parse_tree__write_deps_file__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2320 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 0) = ((MR_Box) ((MR_String) ".ds) | xargs rm -f\n"));
#line 2320 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 1) = ((MR_Box) (parse_tree__write_deps_file__V_229_229));
#line 2320 "write_deps_file.m"
    }
#line 2320 "write_deps_file.m"
    {
#line 2320 "write_deps_file.m"
      parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2320 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2320 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 2320 "write_deps_file.m"
    }
#line 2320 "write_deps_file.m"
    {
#line 2320 "write_deps_file.m"
      parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2320 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2320 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 2320 "write_deps_file.m"
    }
#line 2319 "write_deps_file.m"
    {
#line 2319 "write_deps_file.m"
      parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2319 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) ((MR_String) ".imdgs) | xargs rm -f\n"));
#line 2319 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 2319 "write_deps_file.m"
    }
#line 2319 "write_deps_file.m"
    {
#line 2319 "write_deps_file.m"
      parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2319 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2319 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 2319 "write_deps_file.m"
    }
#line 2319 "write_deps_file.m"
    {
#line 2319 "write_deps_file.m"
      parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2319 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2319 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 2319 "write_deps_file.m"
    }
#line 2318 "write_deps_file.m"
    {
#line 2318 "write_deps_file.m"
      parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2318 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".requests) | xargs rm -f\n"));
#line 2318 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_219_219));
#line 2318 "write_deps_file.m"
    }
#line 2318 "write_deps_file.m"
    {
#line 2318 "write_deps_file.m"
      parse_tree__write_deps_file__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2318 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2318 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 1) = ((MR_Box) (parse_tree__write_deps_file__V_217_217));
#line 2318 "write_deps_file.m"
    }
#line 2318 "write_deps_file.m"
    {
#line 2318 "write_deps_file.m"
      parse_tree__write_deps_file__V_214_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2318 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2318 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 1) = ((MR_Box) (parse_tree__write_deps_file__V_216_216));
#line 2318 "write_deps_file.m"
    }
#line 2317 "write_deps_file.m"
    {
#line 2317 "write_deps_file.m"
      parse_tree__write_deps_file__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2317 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 0) = ((MR_Box) ((MR_String) ".analysiss) | xargs rm -f\n"));
#line 2317 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 1) = ((MR_Box) (parse_tree__write_deps_file__V_214_214));
#line 2317 "write_deps_file.m"
    }
#line 2317 "write_deps_file.m"
    {
#line 2317 "write_deps_file.m"
      parse_tree__write_deps_file__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2317 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2317 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 1) = ((MR_Box) (parse_tree__write_deps_file__V_212_212));
#line 2317 "write_deps_file.m"
    }
#line 2317 "write_deps_file.m"
    {
#line 2317 "write_deps_file.m"
      parse_tree__write_deps_file__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2317 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2317 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 1) = ((MR_Box) (parse_tree__write_deps_file__V_211_211));
#line 2317 "write_deps_file.m"
    }
#line 2316 "write_deps_file.m"
    {
#line 2316 "write_deps_file.m"
      parse_tree__write_deps_file__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2316 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 0) = ((MR_Box) ((MR_String) ".trans_opts) | xargs rm -f\n"));
#line 2316 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 1) = ((MR_Box) (parse_tree__write_deps_file__V_209_209));
#line 2316 "write_deps_file.m"
    }
#line 2316 "write_deps_file.m"
    {
#line 2316 "write_deps_file.m"
      parse_tree__write_deps_file__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2316 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2316 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 1) = ((MR_Box) (parse_tree__write_deps_file__V_207_207));
#line 2316 "write_deps_file.m"
    }
#line 2316 "write_deps_file.m"
    {
#line 2316 "write_deps_file.m"
      parse_tree__write_deps_file__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2316 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2316 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 1) = ((MR_Box) (parse_tree__write_deps_file__V_206_206));
#line 2316 "write_deps_file.m"
    }
#line 2315 "write_deps_file.m"
    {
#line 2315 "write_deps_file.m"
      parse_tree__write_deps_file__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2315 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 0) = ((MR_Box) ((MR_String) ".opts) | xargs rm -f\n"));
#line 2315 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 1) = ((MR_Box) (parse_tree__write_deps_file__V_204_204));
#line 2315 "write_deps_file.m"
    }
#line 2315 "write_deps_file.m"
    {
#line 2315 "write_deps_file.m"
      parse_tree__write_deps_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2315 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2315 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 1) = ((MR_Box) (parse_tree__write_deps_file__V_202_202));
#line 2315 "write_deps_file.m"
    }
#line 2315 "write_deps_file.m"
    {
#line 2315 "write_deps_file.m"
      parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2315 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2315 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__V_201_201));
#line 2315 "write_deps_file.m"
    }
#line 2314 "write_deps_file.m"
    {
#line 2314 "write_deps_file.m"
      parse_tree__write_deps_file__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2314 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 0) = ((MR_Box) ((MR_String) ".int3s) | xargs rm -f\n"));
#line 2314 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 1) = ((MR_Box) (parse_tree__write_deps_file__V_199_199));
#line 2314 "write_deps_file.m"
    }
#line 2314 "write_deps_file.m"
    {
#line 2314 "write_deps_file.m"
      parse_tree__write_deps_file__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2314 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2314 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 1) = ((MR_Box) (parse_tree__write_deps_file__V_197_197));
#line 2314 "write_deps_file.m"
    }
#line 2314 "write_deps_file.m"
    {
#line 2314 "write_deps_file.m"
      parse_tree__write_deps_file__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2314 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2314 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 1) = ((MR_Box) (parse_tree__write_deps_file__V_196_196));
#line 2314 "write_deps_file.m"
    }
#line 2313 "write_deps_file.m"
    {
#line 2313 "write_deps_file.m"
      parse_tree__write_deps_file__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2313 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 0) = ((MR_Box) ((MR_String) ".all_int0s) | xargs rm -f\n"));
#line 2313 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 1) = ((MR_Box) (parse_tree__write_deps_file__V_194_194));
#line 2313 "write_deps_file.m"
    }
#line 2313 "write_deps_file.m"
    {
#line 2313 "write_deps_file.m"
      parse_tree__write_deps_file__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2313 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2313 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 1) = ((MR_Box) (parse_tree__write_deps_file__V_192_192));
#line 2313 "write_deps_file.m"
    }
#line 2313 "write_deps_file.m"
    {
#line 2313 "write_deps_file.m"
      parse_tree__write_deps_file__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2313 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2313 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 1) = ((MR_Box) (parse_tree__write_deps_file__V_191_191));
#line 2313 "write_deps_file.m"
    }
#line 2309 "write_deps_file.m"
    {
#line 2309 "write_deps_file.m"
      parse_tree__write_deps_file__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2309 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 0) = ((MR_Box) ((MR_String) ".ints) | xargs rm -f\n"));
#line 2309 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 1) = ((MR_Box) (parse_tree__write_deps_file__V_189_189));
#line 2309 "write_deps_file.m"
    }
#line 2309 "write_deps_file.m"
    {
#line 2309 "write_deps_file.m"
      parse_tree__write_deps_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2309 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2309 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 1) = ((MR_Box) (parse_tree__write_deps_file__V_187_187));
#line 2309 "write_deps_file.m"
    }
#line 2309 "write_deps_file.m"
    {
#line 2309 "write_deps_file.m"
      parse_tree__write_deps_file__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2309 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2309 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 1) = ((MR_Box) (parse_tree__write_deps_file__V_186_186));
#line 2309 "write_deps_file.m"
    }
#line 2308 "write_deps_file.m"
    {
#line 2308 "write_deps_file.m"
      parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2308 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) ((MR_String) ".trans_opt_dates) | xargs rm -f\n"));
#line 2308 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (parse_tree__write_deps_file__V_184_184));
#line 2308 "write_deps_file.m"
    }
#line 2308 "write_deps_file.m"
    {
#line 2308 "write_deps_file.m"
      parse_tree__write_deps_file__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2308 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_181_181, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2308 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_181_181, 1) = ((MR_Box) (parse_tree__write_deps_file__V_182_182));
#line 2308 "write_deps_file.m"
    }
#line 2308 "write_deps_file.m"
    {
#line 2308 "write_deps_file.m"
      parse_tree__write_deps_file__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2308 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_179_179, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2308 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_179_179, 1) = ((MR_Box) (parse_tree__write_deps_file__V_181_181));
#line 2308 "write_deps_file.m"
    }
#line 2307 "write_deps_file.m"
    {
#line 2307 "write_deps_file.m"
      parse_tree__write_deps_file__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2307 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_177_177, 0) = ((MR_Box) ((MR_String) ".optdates) | xargs rm -f\n"));
#line 2307 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_177_177, 1) = ((MR_Box) (parse_tree__write_deps_file__V_179_179));
#line 2307 "write_deps_file.m"
    }
#line 2307 "write_deps_file.m"
    {
#line 2307 "write_deps_file.m"
      parse_tree__write_deps_file__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2307 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2307 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 1) = ((MR_Box) (parse_tree__write_deps_file__V_177_177));
#line 2307 "write_deps_file.m"
    }
#line 2307 "write_deps_file.m"
    {
#line 2307 "write_deps_file.m"
      parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2307 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2307 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (parse_tree__write_deps_file__V_176_176));
#line 2307 "write_deps_file.m"
    }
#line 2306 "write_deps_file.m"
    {
#line 2306 "write_deps_file.m"
      parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2306 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) ".date3s) | xargs rm -f\n"));
#line 2306 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 2306 "write_deps_file.m"
    }
#line 2306 "write_deps_file.m"
    {
#line 2306 "write_deps_file.m"
      parse_tree__write_deps_file__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2306 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2306 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 2306 "write_deps_file.m"
    }
#line 2306 "write_deps_file.m"
    {
#line 2306 "write_deps_file.m"
      parse_tree__write_deps_file__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2306 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2306 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 1) = ((MR_Box) (parse_tree__write_deps_file__V_171_171));
#line 2306 "write_deps_file.m"
    }
#line 2305 "write_deps_file.m"
    {
#line 2305 "write_deps_file.m"
      parse_tree__write_deps_file__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2305 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 0) = ((MR_Box) ((MR_String) ".date0s) | xargs rm -f\n"));
#line 2305 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 1) = ((MR_Box) (parse_tree__write_deps_file__V_169_169));
#line 2305 "write_deps_file.m"
    }
#line 2305 "write_deps_file.m"
    {
#line 2305 "write_deps_file.m"
      parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2305 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2305 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_167_167));
#line 2305 "write_deps_file.m"
    }
#line 2305 "write_deps_file.m"
    {
#line 2305 "write_deps_file.m"
      parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2305 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2305 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 2305 "write_deps_file.m"
    }
#line 2304 "write_deps_file.m"
    {
#line 2304 "write_deps_file.m"
      parse_tree__write_deps_file__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2304 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 0) = ((MR_Box) ((MR_String) ".dates) | xargs rm -f\n"));
#line 2304 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 2304 "write_deps_file.m"
    }
#line 2304 "write_deps_file.m"
    {
#line 2304 "write_deps_file.m"
      parse_tree__write_deps_file__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2304 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2304 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 1) = ((MR_Box) (parse_tree__write_deps_file__V_162_162));
#line 2304 "write_deps_file.m"
    }
#line 2304 "write_deps_file.m"
    {
#line 2304 "write_deps_file.m"
      parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2304 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2304 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_161_161));
#line 2304 "write_deps_file.m"
    }
#line 2303 "write_deps_file.m"
    {
#line 2303 "write_deps_file.m"
      parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2303 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2303 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 2303 "write_deps_file.m"
    }
#line 2303 "write_deps_file.m"
    {
#line 2303 "write_deps_file.m"
      parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2303 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2303 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 2303 "write_deps_file.m"
    }
#line 2303 "write_deps_file.m"
    {
#line 2303 "write_deps_file.m"
      parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2303 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) " : "));
#line 2303 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 2303 "write_deps_file.m"
    }
#line 2303 "write_deps_file.m"
    {
#line 2303 "write_deps_file.m"
      parse_tree__write_deps_file__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2303 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2303 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 2303 "write_deps_file.m"
    }
#line 2302 "write_deps_file.m"
    {
#line 2302 "write_deps_file.m"
      parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_153_153));
#line 2302 "write_deps_file.m"
    }
#line 2302 "write_deps_file.m"
    {
#line 2302 "write_deps_file.m"
      parse_tree__write_deps_file__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 2302 "write_deps_file.m"
    }
#line 2302 "write_deps_file.m"
    {
#line 2302 "write_deps_file.m"
      parse_tree__write_deps_file__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 1) = ((MR_Box) (parse_tree__write_deps_file__V_150_150));
#line 2302 "write_deps_file.m"
    }
#line 2301 "write_deps_file.m"
    {
#line 2301 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_147_147);
    }
#line 2336 "write_deps_file.m"
    {
#line 2336 "write_deps_file.m"
      parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2336 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_30));
#line 2336 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107])));
#line 2336 "write_deps_file.m"
    }
#line 2335 "write_deps_file.m"
    {
#line 2335 "write_deps_file.m"
      parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2335 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) ((MR_String) " "));
#line 2335 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 2335 "write_deps_file.m"
    }
#line 2335 "write_deps_file.m"
    {
#line 2335 "write_deps_file.m"
      parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2335 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_29));
#line 2335 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 2335 "write_deps_file.m"
    }
#line 2334 "write_deps_file.m"
    {
#line 2334 "write_deps_file.m"
      parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2334 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) ((MR_String) " "));
#line 2334 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (parse_tree__write_deps_file__V_278_278));
#line 2334 "write_deps_file.m"
    }
#line 2334 "write_deps_file.m"
    {
#line 2334 "write_deps_file.m"
      parse_tree__write_deps_file__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2334 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 0) = ((MR_Box) (parse_tree__write_deps_file__JarFileName_28));
#line 2334 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 2334 "write_deps_file.m"
    }
#line 2333 "write_deps_file.m"
    {
#line 2333 "write_deps_file.m"
      parse_tree__write_deps_file__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2333 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 0) = ((MR_Box) ((MR_String) " "));
#line 2333 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 1) = ((MR_Box) (parse_tree__write_deps_file__V_275_275));
#line 2333 "write_deps_file.m"
    }
#line 2333 "write_deps_file.m"
    {
#line 2333 "write_deps_file.m"
      parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2333 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibFileName_27));
#line 2333 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_273_273));
#line 2333 "write_deps_file.m"
    }
#line 2332 "write_deps_file.m"
    {
#line 2332 "write_deps_file.m"
      parse_tree__write_deps_file__V_270_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2332 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 0) = ((MR_Box) ((MR_String) " "));
#line 2332 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 2332 "write_deps_file.m"
    }
#line 2332 "write_deps_file.m"
    {
#line 2332 "write_deps_file.m"
      parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2332 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) (parse_tree__write_deps_file__LibFileName_26));
#line 2332 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_270_270));
#line 2332 "write_deps_file.m"
    }
#line 2331 "write_deps_file.m"
    {
#line 2331 "write_deps_file.m"
      parse_tree__write_deps_file__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2331 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 0) = ((MR_Box) ((MR_String) " "));
#line 2331 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 2331 "write_deps_file.m"
    }
#line 2331 "write_deps_file.m"
    {
#line 2331 "write_deps_file.m"
      parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2331 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_25));
#line 2331 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_267_267));
#line 2331 "write_deps_file.m"
    }
#line 2330 "write_deps_file.m"
    {
#line 2330 "write_deps_file.m"
      parse_tree__write_deps_file__V_264_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2330 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
#line 2330 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 2330 "write_deps_file.m"
    }
#line 2330 "write_deps_file.m"
    {
#line 2330 "write_deps_file.m"
      parse_tree__write_deps_file__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2330 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 0) = ((MR_Box) (parse_tree__write_deps_file__ExeFileName_21));
#line 2330 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 1) = ((MR_Box) (parse_tree__write_deps_file__V_264_264));
#line 2330 "write_deps_file.m"
    }
#line 2329 "write_deps_file.m"
    {
#line 2329 "write_deps_file.m"
      parse_tree__write_deps_file__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2329 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 0) = ((MR_Box) ((MR_String) "\t-rm -f "));
#line 2329 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 1) = ((MR_Box) (parse_tree__write_deps_file__V_263_263));
#line 2329 "write_deps_file.m"
    }
#line 2328 "write_deps_file.m"
    {
#line 2328 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_260_260);
#line 2328 "write_deps_file.m"
      return;
    }
#line 2259 "write_deps_file.m"
  }
#line 2251 "write_deps_file.m"
}

#line 2238 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
#line 2238 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 2238 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_9,
#line 2238 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 2238 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_11,
#line 2238 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5)
#line 2238 "write_deps_file.m"
{
#line 2243 "write_deps_file.m"
  {
#line 2243 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2243 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Extension_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
#line 2243 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__VarExtension_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
#line 2243 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TargetName_15;
#line 2243 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_20_20;
#line 2243 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_23_23;
#line 2243 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_24_24;
#line 2243 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_26_26;
#line 2243 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_27_27;
#line 2243 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_29_29;
#line 2243 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_30_30;

#line 2244 "write_deps_file.m"
    {
#line 2244 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__Extension_12, (MR_Integer) 1, &parse_tree__write_deps_file__TargetName_15);
    }
#line 2248 "write_deps_file.m"
    {
#line 2248 "write_deps_file.m"
      parse_tree__write_deps_file__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_30_30, 0) = ((MR_Box) (parse_tree__write_deps_file__VarExtension_13));
#line 2248 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[121])));
#line 2248 "write_deps_file.m"
    }
#line 2248 "write_deps_file.m"
    {
#line 2248 "write_deps_file.m"
      parse_tree__write_deps_file__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_29_29, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_11));
#line 2248 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_29_29, 1) = ((MR_Box) (parse_tree__write_deps_file__V_30_30));
#line 2248 "write_deps_file.m"
    }
#line 2248 "write_deps_file.m"
    {
#line 2248 "write_deps_file.m"
      parse_tree__write_deps_file__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_27_27, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 2248 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_27_27, 1) = ((MR_Box) (parse_tree__write_deps_file__V_29_29));
#line 2248 "write_deps_file.m"
    }
#line 2248 "write_deps_file.m"
    {
#line 2248 "write_deps_file.m"
      parse_tree__write_deps_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_26_26, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
#line 2248 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_26_26, 1) = ((MR_Box) (parse_tree__write_deps_file__V_27_27));
#line 2248 "write_deps_file.m"
    }
#line 2247 "write_deps_file.m"
    {
#line 2247 "write_deps_file.m"
      parse_tree__write_deps_file__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2247 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_24_24, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2247 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_24_24, 1) = ((MR_Box) (parse_tree__write_deps_file__V_26_26));
#line 2247 "write_deps_file.m"
    }
#line 2247 "write_deps_file.m"
    {
#line 2247 "write_deps_file.m"
      parse_tree__write_deps_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2247 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_23_23, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
#line 2247 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_23_23, 1) = ((MR_Box) (parse_tree__write_deps_file__V_24_24));
#line 2247 "write_deps_file.m"
    }
#line 2247 "write_deps_file.m"
    {
#line 2247 "write_deps_file.m"
      parse_tree__write_deps_file__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2247 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_20_20, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2247 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_20_20, 1) = ((MR_Box) (parse_tree__write_deps_file__V_23_23));
#line 2247 "write_deps_file.m"
    }
#line 2246 "write_deps_file.m"
    {
#line 2246 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_9, parse_tree__write_deps_file__V_20_20);
#line 2246 "write_deps_file.m"
      return;
    }
#line 2243 "write_deps_file.m"
  }
#line 2238 "write_deps_file.m"
}

#line 2221 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
#line 2221 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2221 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2221 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2221 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2221 "write_deps_file.m"
{
#line 2221 "write_deps_file.m"
  {
#line 2221 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2221 "write_deps_file.m"
    {
#line 2221 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2221 "write_deps_file.m"
      return;
    }
#line 2221 "write_deps_file.m"
  }
#line 2221 "write_deps_file.m"
}

#line 2215 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
#line 2215 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 2215 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 2215 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 2215 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_10)
#line 2215 "write_deps_file.m"
{
#line 2219 "write_deps_file.m"
  {
#line 2219 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2219 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_14_14;
#line 2220 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13;

#line 2221 "write_deps_file.m"
    {
#line 2221 "write_deps_file.m"
      parse_tree__write_deps_file__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2221 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[2]));
#line 2221 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1));
#line 2221 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2221 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 2221 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_8));
#line 2221 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_9));
#line 2221 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 6) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_10));
#line 2221 "write_deps_file.m"
    }
#line 2220 "write_deps_file.m"
    {
#line 2220 "write_deps_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_14_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13);
    }
#line 2219 "write_deps_file.m"
  }
#line 2215 "write_deps_file.m"
}

#line 2050 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
#line 2050 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 2050 "write_deps_file.m"
{
#line 2050 "write_deps_file.m"
  {
#line 2050 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 2050 "write_deps_file.m"
    MR_builtin_longjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0, 1);
#line 2050 "write_deps_file.m"
  }
#line 2050 "write_deps_file.m"
}

#line 2051 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
#line 2051 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 2051 "write_deps_file.m"
{
#line 2051 "write_deps_file.m"
  {
#line 2051 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 2051 "write_deps_file.m"
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_28_28 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_28_28);
#line 2051 "write_deps_file.m"
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_46_46);
#line 2051 "write_deps_file.m"
    {
#line 2051 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(parse_tree__write_deps_file__env_ptr);
#line 2051 "write_deps_file.m"
      return;
    }
#line 2051 "write_deps_file.m"
  }
#line 2051 "write_deps_file.m"
}

#line 2050 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
#line 2050 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 2050 "write_deps_file.m"
{
#line 2050 "write_deps_file.m"
  {
#line 2050 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 2050 "write_deps_file.m"
    {
#line 2051 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46, (MR_Integer) 0)));
#line 2052 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__V_341_341;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_342_342;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_343_343;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_344_344;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_345_345;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_346_346;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_347_347;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_348_348;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_349_349;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_350_350;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_351_351;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_352_352;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_353_353;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_354_354;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_355_355;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_356_356;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_357_357;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_358_358;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_359_359;
#line 2052 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__V_360_360;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_31_31;
#line 2052 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_32_32;

#line 2051 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46, (MR_Integer) 1)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_341_341 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 0)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 1)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 2)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 3)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 4)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 5)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 6)));
#line 2052 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 7)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 8)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 9)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 10)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 11)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 12)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 13)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 14)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 15)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 16)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 17)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 18)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 19)));
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_360_360 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 20)));
#line 2052 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 2052 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2052 "write_deps_file.m"
        {
#line 2052 "write_deps_file.m"
          {
#line 2052 "write_deps_file.m"
            parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47, (MR_Integer) 0)));
#line 2052 "write_deps_file.m"
            parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47, (MR_Integer) 1)));
#line 2052 "write_deps_file.m"
          }
#line 2052 "write_deps_file.m"
          {
#line 2052 "write_deps_file.m"
            parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(parse_tree__write_deps_file__env_ptr);
#line 2052 "write_deps_file.m"
            return;
          }
#line 2052 "write_deps_file.m"
        }
#line 2050 "write_deps_file.m"
    }
#line 2050 "write_deps_file.m"
  }
#line 2050 "write_deps_file.m"
}

#line 2050 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
#line 2050 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 2050 "write_deps_file.m"
{
#line 2050 "write_deps_file.m"
  {
#line 2050 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 2050 "write_deps_file.m"
    if (MR_builtin_setjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0) == 0)
#line 2050 "write_deps_file.m"
      {
#line 2050 "write_deps_file.m"
        {
#line 2050 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_361_361;
#line 2050 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_362_362;

#line 2050 "write_deps_file.m"
          (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20 == (MR_Integer) 1);
#line 2050 "write_deps_file.m"
          if ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2050 "write_deps_file.m"
            {
#line 6207 "parse_tree.write_deps_file.c"
              parse_tree__write_deps_file__TypeCtorInfo_361_361 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 6209 "parse_tree.write_deps_file.c"
              parse_tree__write_deps_file__TypeCtorInfo_362_362 = (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0;
#line 2051 "write_deps_file.m"
              {
#line 2051 "write_deps_file.m"
                mercury__map__member_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_361_361, parse_tree__write_deps_file__TypeCtorInfo_362_362, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_28_28, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_46_46, parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3, parse_tree__write_deps_file__env_ptr);
              }
#line 2050 "write_deps_file.m"
            }
#line 2050 "write_deps_file.m"
        }
#line 2050 "write_deps_file.m"
        (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_FALSE;
#line 2050 "write_deps_file.m"
      }
#line 2050 "write_deps_file.m"
    else
#line 2050 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_TRUE;
#line 2050 "write_deps_file.m"
  }
#line 2050 "write_deps_file.m"
}

#line 2028 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_14,
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_15,
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_16,
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_17,
#line 2028 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_18,
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_20,
#line 2028 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_21,
#line 2028 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
#line 2028 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
#line 2028 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24)
#line 2028 "write_deps_file.m"
{
#line 2028 "write_deps_file.m"
  {
#line 2028 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s parse_tree__write_deps_file__env;

#line 2028 "write_deps_file.m"
    (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17 = parse_tree__write_deps_file__DepsMap_17;
#line 2028 "write_deps_file.m"
    (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20 = parse_tree__write_deps_file__Intermod_20;
#line 2034 "write_deps_file.m"
    {
#line 2034 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallIntsTargetName_26;
#line 2034 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__OptStr_27;
#line 2034 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__Int0Str_33;
#line 2034 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__MaybeInt0sVar_34;
#line 2034 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__TransOptStr_35;
#line 2034 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__DepStr_36;
#line 2034 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallOptsTargetName_37;
#line 2034 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallHdrsTargetName_38;
#line 2034 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_51_51;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_54_54;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_55_55;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_57_57;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_58_58;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_60_60;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_61_61;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_63_63;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_64_64;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_66_66;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_67_67;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_68_68;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_69_69;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_70_70;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_72_72;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_74_74;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_75_75;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_77_77;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_78_78;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_80_80;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_81_81;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_82_82;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_83_83;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_84_84;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_86_86;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_88_88;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_90_90;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_92_92;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_94_94;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_96_96;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_98_98;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_100_100;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_102_102;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_104_104;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_106_106;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_108_108;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_110_110;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_112_112;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_113_113;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_114_114;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_115_115;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_139_139;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_142_142;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_143_143;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_145_145;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_219_219;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_222_222;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_223_223;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_225_225;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_226_226;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_228_228;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_230_230;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_231_231;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_233_233;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_235_235;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_237_237;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_238_238;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_240_240;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_242_242;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_244_244;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_246_246;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_262_262;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_265_265;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_266_266;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_268_268;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_269_269;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_271_271;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_273_273;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_274_274;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_276_276;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_278_278;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_280_280;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_281_281;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_283_283;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_285_285;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_287_287;
#line 2034 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_289_289;

#line 2040 "write_deps_file.m"
      {
#line 2040 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_ints", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallIntsTargetName_26);
      }
#line 2045 "write_deps_file.m"
      if (((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20 == (MR_Integer) 0))
#line 2047 "write_deps_file.m"
        parse_tree__write_deps_file__OptStr_27 = (MR_String) "";
#line 2045 "write_deps_file.m"
      else
#line 2044 "write_deps_file.m"
        parse_tree__write_deps_file__OptStr_27 = (MR_String) " opt";
#line 2050 "write_deps_file.m"
      {
#line 2050 "write_deps_file.m"
        parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(&parse_tree__write_deps_file__env);
      }
#line 2058 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2056 "write_deps_file.m"
        {
#line 2056 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_49_49;

#line 2056 "write_deps_file.m"
          parse_tree__write_deps_file__Int0Str_33 = (MR_String) " int0";
#line 2057 "write_deps_file.m"
          {
#line 2057 "write_deps_file.m"
            parse_tree__write_deps_file__V_49_49 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_18, (MR_String) ".int0s) ");
          }
#line 2057 "write_deps_file.m"
          {
#line 2057 "write_deps_file.m"
            parse_tree__write_deps_file__MaybeInt0sVar_34 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_49_49);
          }
#line 2056 "write_deps_file.m"
        }
#line 2058 "write_deps_file.m"
      else
#line 2059 "write_deps_file.m"
        {
#line 2059 "write_deps_file.m"
          parse_tree__write_deps_file__Int0Str_33 = (MR_String) "";
#line 2060 "write_deps_file.m"
          parse_tree__write_deps_file__MaybeInt0sVar_34 = (MR_String) "";
#line 2059 "write_deps_file.m"
        }
#line 2065 "write_deps_file.m"
      if ((parse_tree__write_deps_file__TransOpt_21 == (MR_Integer) 0))
#line 2067 "write_deps_file.m"
        parse_tree__write_deps_file__TransOptStr_35 = (MR_String) "";
#line 2065 "write_deps_file.m"
      else
#line 2064 "write_deps_file.m"
        parse_tree__write_deps_file__TransOptStr_35 = (MR_String) " trans_opt";
#line 2072 "write_deps_file.m"
      if ((parse_tree__write_deps_file__MmcMakeDeps_19 == (MR_Integer) 0))
#line 2074 "write_deps_file.m"
        parse_tree__write_deps_file__DepStr_36 = (MR_String) "";
#line 2072 "write_deps_file.m"
      else
#line 2071 "write_deps_file.m"
        parse_tree__write_deps_file__DepStr_36 = (MR_String) " module_dep";
#line 2099 "write_deps_file.m"
      {
#line 2099 "write_deps_file.m"
        parse_tree__write_deps_file__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2099 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_115_115, 0) = ((MR_Box) (parse_tree__write_deps_file__DepStr_36));
#line 2099 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[36])));
#line 2099 "write_deps_file.m"
      }
#line 2099 "write_deps_file.m"
      {
#line 2099 "write_deps_file.m"
        parse_tree__write_deps_file__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2099 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_35));
#line 2099 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 1) = ((MR_Box) (parse_tree__write_deps_file__V_115_115));
#line 2099 "write_deps_file.m"
      }
#line 2099 "write_deps_file.m"
      {
#line 2099 "write_deps_file.m"
        parse_tree__write_deps_file__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2099 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
#line 2099 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 1) = ((MR_Box) (parse_tree__write_deps_file__V_114_114));
#line 2099 "write_deps_file.m"
      }
#line 2099 "write_deps_file.m"
      {
#line 2099 "write_deps_file.m"
        parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2099 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0Str_33));
#line 2099 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) (parse_tree__write_deps_file__V_113_113));
#line 2099 "write_deps_file.m"
      }
#line 2098 "write_deps_file.m"
      {
#line 2098 "write_deps_file.m"
        parse_tree__write_deps_file__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2098 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 0) = ((MR_Box) ((MR_String) "\tfor ext in int int2 int3"));
#line 2098 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 1) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 2098 "write_deps_file.m"
      }
#line 2097 "write_deps_file.m"
      {
#line 2097 "write_deps_file.m"
        parse_tree__write_deps_file__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2097 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_108_108, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
#line 2097 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_108_108, 1) = ((MR_Box) (parse_tree__write_deps_file__V_110_110));
#line 2097 "write_deps_file.m"
      }
#line 2096 "write_deps_file.m"
      {
#line 2096 "write_deps_file.m"
        parse_tree__write_deps_file__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2096 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n"));
#line 2096 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 1) = ((MR_Box) (parse_tree__write_deps_file__V_108_108));
#line 2096 "write_deps_file.m"
      }
#line 2095 "write_deps_file.m"
      {
#line 2095 "write_deps_file.m"
        parse_tree__write_deps_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2095 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n"));
#line 2095 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 1) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 2095 "write_deps_file.m"
      }
#line 2094 "write_deps_file.m"
      {
#line 2094 "write_deps_file.m"
        parse_tree__write_deps_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2094 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
#line 2094 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 1) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 2094 "write_deps_file.m"
      }
#line 2093 "write_deps_file.m"
      {
#line 2093 "write_deps_file.m"
        parse_tree__write_deps_file__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2093 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_100_100, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
#line 2093 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_100_100, 1) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 2093 "write_deps_file.m"
      }
#line 2092 "write_deps_file.m"
      {
#line 2092 "write_deps_file.m"
        parse_tree__write_deps_file__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2092 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
#line 2092 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 1) = ((MR_Box) (parse_tree__write_deps_file__V_100_100));
#line 2092 "write_deps_file.m"
      }
#line 2091 "write_deps_file.m"
      {
#line 2091 "write_deps_file.m"
        parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2091 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
#line 2091 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 2091 "write_deps_file.m"
      }
#line 2090 "write_deps_file.m"
      {
#line 2090 "write_deps_file.m"
        parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2090 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
#line 2090 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 2090 "write_deps_file.m"
      }
#line 2089 "write_deps_file.m"
      {
#line 2089 "write_deps_file.m"
        parse_tree__write_deps_file__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2089 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
#line 2089 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 2089 "write_deps_file.m"
      }
#line 2088 "write_deps_file.m"
      {
#line 2088 "write_deps_file.m"
        parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2088 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
#line 2088 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 2088 "write_deps_file.m"
      }
#line 2087 "write_deps_file.m"
      {
#line 2087 "write_deps_file.m"
        parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2087 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\\n"));
#line 2087 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 2087 "write_deps_file.m"
      }
#line 2086 "write_deps_file.m"
      {
#line 2086 "write_deps_file.m"
        parse_tree__write_deps_file__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2086 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
#line 2086 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 2086 "write_deps_file.m"
      }
#line 2085 "write_deps_file.m"
      {
#line 2085 "write_deps_file.m"
        parse_tree__write_deps_file__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2085 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
#line 2085 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 1) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 2085 "write_deps_file.m"
      }
#line 2085 "write_deps_file.m"
      {
#line 2085 "write_deps_file.m"
        parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2085 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
#line 2085 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 2085 "write_deps_file.m"
      }
#line 2085 "write_deps_file.m"
      {
#line 2085 "write_deps_file.m"
        parse_tree__write_deps_file__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2085 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_82_82, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2085 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_82_82, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 2085 "write_deps_file.m"
      }
#line 2084 "write_deps_file.m"
      {
#line 2084 "write_deps_file.m"
        parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2084 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2084 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_82_82));
#line 2084 "write_deps_file.m"
      }
#line 2084 "write_deps_file.m"
      {
#line 2084 "write_deps_file.m"
        parse_tree__write_deps_file__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2084 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_34));
#line 2084 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 2084 "write_deps_file.m"
      }
#line 2084 "write_deps_file.m"
      {
#line 2084 "write_deps_file.m"
        parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2084 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 2084 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 2084 "write_deps_file.m"
      }
#line 2083 "write_deps_file.m"
      {
#line 2083 "write_deps_file.m"
        parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 2083 "write_deps_file.m"
      }
#line 2083 "write_deps_file.m"
      {
#line 2083 "write_deps_file.m"
        parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_77_77));
#line 2083 "write_deps_file.m"
      }
#line 2083 "write_deps_file.m"
      {
#line 2083 "write_deps_file.m"
        parse_tree__write_deps_file__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 2083 "write_deps_file.m"
      }
#line 2083 "write_deps_file.m"
      {
#line 2083 "write_deps_file.m"
        parse_tree__write_deps_file__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 0) = ((MR_Box) ((MR_String) "\tfiles=\"\044("));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 1) = ((MR_Box) (parse_tree__write_deps_file__V_74_74));
#line 2083 "write_deps_file.m"
      }
#line 2082 "write_deps_file.m"
      {
#line 2082 "write_deps_file.m"
        parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) ((MR_String) " install_lib_dirs\n"));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_72_72));
#line 2082 "write_deps_file.m"
      }
#line 2081 "write_deps_file.m"
      {
#line 2081 "write_deps_file.m"
        parse_tree__write_deps_file__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_69_69, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_69_69, 1) = ((MR_Box) (parse_tree__write_deps_file__V_70_70));
#line 2081 "write_deps_file.m"
      }
#line 2081 "write_deps_file.m"
      {
#line 2081 "write_deps_file.m"
        parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 1) = ((MR_Box) (parse_tree__write_deps_file__V_69_69));
#line 2081 "write_deps_file.m"
      }
#line 2080 "write_deps_file.m"
      {
#line 2080 "write_deps_file.m"
        parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (parse_tree__write_deps_file__V_68_68));
#line 2080 "write_deps_file.m"
      }
#line 2080 "write_deps_file.m"
      {
#line 2080 "write_deps_file.m"
        parse_tree__write_deps_file__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_34));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 1) = ((MR_Box) (parse_tree__write_deps_file__V_67_67));
#line 2080 "write_deps_file.m"
      }
#line 2080 "write_deps_file.m"
      {
#line 2080 "write_deps_file.m"
        parse_tree__write_deps_file__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_64_64, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_64_64, 1) = ((MR_Box) (parse_tree__write_deps_file__V_66_66));
#line 2080 "write_deps_file.m"
      }
#line 2080 "write_deps_file.m"
      {
#line 2080 "write_deps_file.m"
        parse_tree__write_deps_file__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 1) = ((MR_Box) (parse_tree__write_deps_file__V_64_64));
#line 2080 "write_deps_file.m"
      }
#line 2079 "write_deps_file.m"
      {
#line 2079 "write_deps_file.m"
        parse_tree__write_deps_file__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2079 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
#line 2079 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 1) = ((MR_Box) (parse_tree__write_deps_file__V_63_63));
#line 2079 "write_deps_file.m"
      }
#line 2079 "write_deps_file.m"
      {
#line 2079 "write_deps_file.m"
        parse_tree__write_deps_file__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2079 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2079 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 1) = ((MR_Box) (parse_tree__write_deps_file__V_61_61));
#line 2079 "write_deps_file.m"
      }
#line 2079 "write_deps_file.m"
      {
#line 2079 "write_deps_file.m"
        parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2079 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 2079 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_60_60));
#line 2079 "write_deps_file.m"
      }
#line 2079 "write_deps_file.m"
      {
#line 2079 "write_deps_file.m"
        parse_tree__write_deps_file__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2079 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
#line 2079 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 2079 "write_deps_file.m"
      }
#line 2078 "write_deps_file.m"
      {
#line 2078 "write_deps_file.m"
        parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_57_57));
#line 2078 "write_deps_file.m"
      }
#line 2078 "write_deps_file.m"
      {
#line 2078 "write_deps_file.m"
        parse_tree__write_deps_file__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_54_54, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_54_54, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 2078 "write_deps_file.m"
      }
#line 2078 "write_deps_file.m"
      {
#line 2078 "write_deps_file.m"
        parse_tree__write_deps_file__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 1) = ((MR_Box) (parse_tree__write_deps_file__V_54_54));
#line 2078 "write_deps_file.m"
      }
#line 2077 "write_deps_file.m"
      {
#line 2077 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_51_51);
      }
#line 2111 "write_deps_file.m"
      {
#line 2111 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_opts", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallOptsTargetName_37);
      }
#line 2115 "write_deps_file.m"
      {
#line 2115 "write_deps_file.m"
        parse_tree__write_deps_file__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2115 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_37));
#line 2115 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])));
#line 2115 "write_deps_file.m"
      }
#line 2114 "write_deps_file.m"
      {
#line 2114 "write_deps_file.m"
        parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2114 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2114 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_145_145));
#line 2114 "write_deps_file.m"
      }
#line 2114 "write_deps_file.m"
      {
#line 2114 "write_deps_file.m"
        parse_tree__write_deps_file__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2114 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_37));
#line 2114 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 2114 "write_deps_file.m"
      }
#line 2114 "write_deps_file.m"
      {
#line 2114 "write_deps_file.m"
        parse_tree__write_deps_file__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2114 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_139_139, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2114 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_139_139, 1) = ((MR_Box) (parse_tree__write_deps_file__V_142_142));
#line 2114 "write_deps_file.m"
      }
#line 2113 "write_deps_file.m"
      {
#line 2113 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_139_139);
      }
#line 2117 "write_deps_file.m"
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20 == (MR_Integer) 0);
#line 2117 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2118 "write_deps_file.m"
        (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__TransOpt_21 == (MR_Integer) 0);
#line 2121 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2120 "write_deps_file.m"
        {
#line 2120 "write_deps_file.m"
          {
#line 2120 "write_deps_file.m"
            mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_15, (MR_String) "\n\t\100:\n\n");
          }
#line 2120 "write_deps_file.m"
        }
#line 2121 "write_deps_file.m"
      else
#line 2122 "write_deps_file.m"
        {
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_151_151;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_153_153;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_154_154;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_156_156;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_158_158;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_159_159;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_160_160;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_162_162;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_164_164;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_166_166;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_168_168;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_170_170;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_172_172;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_174_174;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_176_176;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_178_178;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_180_180;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_182_182;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_184_184;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_186_186;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_188_188;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_190_190;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_192_192;
#line 2122 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_193_193;

#line 2139 "write_deps_file.m"
          {
#line 2139 "write_deps_file.m"
            parse_tree__write_deps_file__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2139 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_193_193, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_35));
#line 2139 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_193_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[44])));
#line 2139 "write_deps_file.m"
          }
#line 2139 "write_deps_file.m"
          {
#line 2139 "write_deps_file.m"
            parse_tree__write_deps_file__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2139 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
#line 2139 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 1) = ((MR_Box) (parse_tree__write_deps_file__V_193_193));
#line 2139 "write_deps_file.m"
          }
#line 2139 "write_deps_file.m"
          {
#line 2139 "write_deps_file.m"
            parse_tree__write_deps_file__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2139 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 0) = ((MR_Box) ((MR_String) "\tfor ext in "));
#line 2139 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 1) = ((MR_Box) (parse_tree__write_deps_file__V_192_192));
#line 2139 "write_deps_file.m"
          }
#line 2138 "write_deps_file.m"
          {
#line 2138 "write_deps_file.m"
            parse_tree__write_deps_file__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2138 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
#line 2138 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 1) = ((MR_Box) (parse_tree__write_deps_file__V_190_190));
#line 2138 "write_deps_file.m"
          }
#line 2137 "write_deps_file.m"
          {
#line 2137 "write_deps_file.m"
            parse_tree__write_deps_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2137 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 0) = ((MR_Box) ((MR_String) " then we just use\n"));
#line 2137 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 1) = ((MR_Box) (parse_tree__write_deps_file__V_188_188));
#line 2137 "write_deps_file.m"
          }
#line 2136 "write_deps_file.m"
          {
#line 2136 "write_deps_file.m"
            parse_tree__write_deps_file__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2136 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails,"));
#line 2136 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 1) = ((MR_Box) (parse_tree__write_deps_file__V_186_186));
#line 2136 "write_deps_file.m"
          }
#line 2135 "write_deps_file.m"
          {
#line 2135 "write_deps_file.m"
            parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2135 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) ((MR_String) " \140--use-subdirs\' option\n"));
#line 2135 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (parse_tree__write_deps_file__V_184_184));
#line 2135 "write_deps_file.m"
          }
#line 2134 "write_deps_file.m"
          {
#line 2134 "write_deps_file.m"
            parse_tree__write_deps_file__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2134 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the"));
#line 2134 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 1) = ((MR_Box) (parse_tree__write_deps_file__V_182_182));
#line 2134 "write_deps_file.m"
          }
#line 2133 "write_deps_file.m"
          {
#line 2133 "write_deps_file.m"
            parse_tree__write_deps_file__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2133 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_178_178, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
#line 2133 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_178_178, 1) = ((MR_Box) (parse_tree__write_deps_file__V_180_180));
#line 2133 "write_deps_file.m"
          }
#line 2132 "write_deps_file.m"
          {
#line 2132 "write_deps_file.m"
            parse_tree__write_deps_file__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2132 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
#line 2132 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 1) = ((MR_Box) (parse_tree__write_deps_file__V_178_178));
#line 2132 "write_deps_file.m"
          }
#line 2131 "write_deps_file.m"
          {
#line 2131 "write_deps_file.m"
            parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2131 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
#line 2131 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (parse_tree__write_deps_file__V_176_176));
#line 2131 "write_deps_file.m"
          }
#line 2130 "write_deps_file.m"
          {
#line 2130 "write_deps_file.m"
            parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2130 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
#line 2130 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 2130 "write_deps_file.m"
          }
#line 2129 "write_deps_file.m"
          {
#line 2129 "write_deps_file.m"
            parse_tree__write_deps_file__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2129 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_170_170, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
#line 2129 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_170_170, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 2129 "write_deps_file.m"
          }
#line 2128 "write_deps_file.m"
          {
#line 2128 "write_deps_file.m"
            parse_tree__write_deps_file__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2128 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_168_168, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
#line 2128 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_168_168, 1) = ((MR_Box) (parse_tree__write_deps_file__V_170_170));
#line 2128 "write_deps_file.m"
          }
#line 2127 "write_deps_file.m"
          {
#line 2127 "write_deps_file.m"
            parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2127 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
#line 2127 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_168_168));
#line 2127 "write_deps_file.m"
          }
#line 2126 "write_deps_file.m"
          {
#line 2126 "write_deps_file.m"
            parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2126 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\\n"));
#line 2126 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 2126 "write_deps_file.m"
          }
#line 2125 "write_deps_file.m"
          {
#line 2125 "write_deps_file.m"
            parse_tree__write_deps_file__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2125 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
#line 2125 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 2125 "write_deps_file.m"
          }
#line 2124 "write_deps_file.m"
          {
#line 2124 "write_deps_file.m"
            parse_tree__write_deps_file__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2124 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_160_160, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
#line 2124 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_160_160, 1) = ((MR_Box) (parse_tree__write_deps_file__V_162_162));
#line 2124 "write_deps_file.m"
          }
#line 2124 "write_deps_file.m"
          {
#line 2124 "write_deps_file.m"
            parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2124 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2124 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_160_160));
#line 2124 "write_deps_file.m"
          }
#line 2124 "write_deps_file.m"
          {
#line 2124 "write_deps_file.m"
            parse_tree__write_deps_file__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2124 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_158_158, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2124 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_158_158, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 2124 "write_deps_file.m"
          }
#line 2124 "write_deps_file.m"
          {
#line 2124 "write_deps_file.m"
            parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2124 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) ((MR_String) "\tfiles=\""));
#line 2124 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_158_158));
#line 2124 "write_deps_file.m"
          }
#line 2123 "write_deps_file.m"
          {
#line 2123 "write_deps_file.m"
            parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2123 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
#line 2123 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 2123 "write_deps_file.m"
          }
#line 2123 "write_deps_file.m"
          {
#line 2123 "write_deps_file.m"
            parse_tree__write_deps_file__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2123 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2123 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 2123 "write_deps_file.m"
          }
#line 2123 "write_deps_file.m"
          {
#line 2123 "write_deps_file.m"
            parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2123 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2123 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_153_153));
#line 2123 "write_deps_file.m"
          }
#line 2122 "write_deps_file.m"
          {
#line 2122 "write_deps_file.m"
            mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_151_151);
          }
#line 2122 "write_deps_file.m"
        }
#line 2162 "write_deps_file.m"
      {
#line 2162 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallHdrsTargetName_38);
      }
#line 2172 "write_deps_file.m"
      {
#line 2172 "write_deps_file.m"
        parse_tree__write_deps_file__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2172 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[48])));
#line 2172 "write_deps_file.m"
      }
#line 2172 "write_deps_file.m"
      {
#line 2172 "write_deps_file.m"
        parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
#line 2172 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_246_246));
#line 2172 "write_deps_file.m"
      }
#line 2171 "write_deps_file.m"
      {
#line 2171 "write_deps_file.m"
        parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2171 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 2171 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 2171 "write_deps_file.m"
      }
#line 2170 "write_deps_file.m"
      {
#line 2170 "write_deps_file.m"
        parse_tree__write_deps_file__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2170 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 2170 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 2170 "write_deps_file.m"
      }
#line 2169 "write_deps_file.m"
      {
#line 2169 "write_deps_file.m"
        parse_tree__write_deps_file__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 0) = ((MR_Box) ((MR_String) ".mhs),)\n"));
#line 2169 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 1) = ((MR_Box) (parse_tree__write_deps_file__V_240_240));
#line 2169 "write_deps_file.m"
      }
#line 2169 "write_deps_file.m"
      {
#line 2169 "write_deps_file.m"
        parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2169 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_238_238));
#line 2169 "write_deps_file.m"
      }
#line 2169 "write_deps_file.m"
      {
#line 2169 "write_deps_file.m"
        parse_tree__write_deps_file__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
#line 2169 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 2169 "write_deps_file.m"
      }
#line 2168 "write_deps_file.m"
      {
#line 2168 "write_deps_file.m"
        parse_tree__write_deps_file__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 0) = ((MR_Box) ((MR_String) "install_lib_dirs\n"));
#line 2168 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 1) = ((MR_Box) (parse_tree__write_deps_file__V_235_235));
#line 2168 "write_deps_file.m"
      }
#line 2167 "write_deps_file.m"
      {
#line 2167 "write_deps_file.m"
        parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2167 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) ((MR_String) ".mhs) "));
#line 2167 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (parse_tree__write_deps_file__V_233_233));
#line 2167 "write_deps_file.m"
      }
#line 2167 "write_deps_file.m"
      {
#line 2167 "write_deps_file.m"
        parse_tree__write_deps_file__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2167 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2167 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 2167 "write_deps_file.m"
      }
#line 2167 "write_deps_file.m"
      {
#line 2167 "write_deps_file.m"
        parse_tree__write_deps_file__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2167 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2167 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 1) = ((MR_Box) (parse_tree__write_deps_file__V_230_230));
#line 2167 "write_deps_file.m"
      }
#line 2166 "write_deps_file.m"
      {
#line 2166 "write_deps_file.m"
        parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2166 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) ((MR_String) " : "));
#line 2166 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_228_228));
#line 2166 "write_deps_file.m"
      }
#line 2166 "write_deps_file.m"
      {
#line 2166 "write_deps_file.m"
        parse_tree__write_deps_file__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2166 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_38));
#line 2166 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 2166 "write_deps_file.m"
      }
#line 2165 "write_deps_file.m"
      {
#line 2165 "write_deps_file.m"
        parse_tree__write_deps_file__V_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2165 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2165 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 1) = ((MR_Box) (parse_tree__write_deps_file__V_225_225));
#line 2165 "write_deps_file.m"
      }
#line 2165 "write_deps_file.m"
      {
#line 2165 "write_deps_file.m"
        parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2165 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_38));
#line 2165 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_223_223));
#line 2165 "write_deps_file.m"
      }
#line 2165 "write_deps_file.m"
      {
#line 2165 "write_deps_file.m"
        parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2165 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2165 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 2165 "write_deps_file.m"
      }
#line 2164 "write_deps_file.m"
      {
#line 2164 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_219_219);
      }
#line 2178 "write_deps_file.m"
      {
#line 2178 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_grade_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39);
      }
#line 2189 "write_deps_file.m"
      {
#line 2189 "write_deps_file.m"
        parse_tree__write_deps_file__V_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2189 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_289_289, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2189 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_289_289, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[72])));
#line 2189 "write_deps_file.m"
      }
#line 2189 "write_deps_file.m"
      {
#line 2189 "write_deps_file.m"
        parse_tree__write_deps_file__V_287_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2189 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
#line 2189 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 1) = ((MR_Box) (parse_tree__write_deps_file__V_289_289));
#line 2189 "write_deps_file.m"
      }
#line 2188 "write_deps_file.m"
      {
#line 2188 "write_deps_file.m"
        parse_tree__write_deps_file__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2188 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 2188 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 1) = ((MR_Box) (parse_tree__write_deps_file__V_287_287));
#line 2188 "write_deps_file.m"
      }
#line 2187 "write_deps_file.m"
      {
#line 2187 "write_deps_file.m"
        parse_tree__write_deps_file__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2187 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 2187 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 1) = ((MR_Box) (parse_tree__write_deps_file__V_285_285));
#line 2187 "write_deps_file.m"
      }
#line 2186 "write_deps_file.m"
      {
#line 2186 "write_deps_file.m"
        parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2186 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) ((MR_String) ".mihs),)\n"));
#line 2186 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (parse_tree__write_deps_file__V_283_283));
#line 2186 "write_deps_file.m"
      }
#line 2186 "write_deps_file.m"
      {
#line 2186 "write_deps_file.m"
        parse_tree__write_deps_file__V_280_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2186 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2186 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 2186 "write_deps_file.m"
      }
#line 2186 "write_deps_file.m"
      {
#line 2186 "write_deps_file.m"
        parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2186 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
#line 2186 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (parse_tree__write_deps_file__V_280_280));
#line 2186 "write_deps_file.m"
      }
#line 2185 "write_deps_file.m"
      {
#line 2185 "write_deps_file.m"
        parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2185 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
#line 2185 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (parse_tree__write_deps_file__V_278_278));
#line 2185 "write_deps_file.m"
      }
#line 2184 "write_deps_file.m"
      {
#line 2184 "write_deps_file.m"
        parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2184 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) ((MR_String) ".mihs) "));
#line 2184 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 2184 "write_deps_file.m"
      }
#line 2184 "write_deps_file.m"
      {
#line 2184 "write_deps_file.m"
        parse_tree__write_deps_file__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2184 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2184 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 1) = ((MR_Box) (parse_tree__write_deps_file__V_274_274));
#line 2184 "write_deps_file.m"
      }
#line 2184 "write_deps_file.m"
      {
#line 2184 "write_deps_file.m"
        parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2184 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2184 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_273_273));
#line 2184 "write_deps_file.m"
      }
#line 2183 "write_deps_file.m"
      {
#line 2183 "write_deps_file.m"
        parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2183 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) ((MR_String) " : "));
#line 2183 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 2183 "write_deps_file.m"
      }
#line 2183 "write_deps_file.m"
      {
#line 2183 "write_deps_file.m"
        parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2183 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39));
#line 2183 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 2183 "write_deps_file.m"
      }
#line 2182 "write_deps_file.m"
      {
#line 2182 "write_deps_file.m"
        parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2182 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2182 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_268_268));
#line 2182 "write_deps_file.m"
      }
#line 2182 "write_deps_file.m"
      {
#line 2182 "write_deps_file.m"
        parse_tree__write_deps_file__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2182 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39));
#line 2182 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 2182 "write_deps_file.m"
      }
#line 2182 "write_deps_file.m"
      {
#line 2182 "write_deps_file.m"
        parse_tree__write_deps_file__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2182 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2182 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 1) = ((MR_Box) (parse_tree__write_deps_file__V_265_265));
#line 2182 "write_deps_file.m"
      }
#line 2181 "write_deps_file.m"
      {
#line 2181 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_262_262);
#line 2181 "write_deps_file.m"
        return;
      }
#line 2034 "write_deps_file.m"
    }
#line 2028 "write_deps_file.m"
  }
#line 2028 "write_deps_file.m"
}

#line 1985 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
#line 1985 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_11,
#line 1985 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12,
#line 1985 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_13,
#line 1985 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_14,
#line 1985 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_15,
#line 1985 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_16,
#line 1985 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DepFileName_17,
#line 1985 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DvFileName_18)
#line 1985 "write_deps_file.m"
{
#line 1991 "write_deps_file.m"
  {
#line 1991 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1991 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleFileName_20;
#line 1991 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ForceC2InitTarget_21;
#line 1991 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TmpInitCFileName_22;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_31_31;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_33_33;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_35_35;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_36_36;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_38_38;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_41_41;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_47_47;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 1991 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_67_67;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_70_70;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_72_72;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_74_74;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_75_75;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_77_77;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_78_78;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_80_80;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_81_81;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_83_83;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_85_85;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_87_87;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_88_88;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_90_90;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1991 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_95_95;

#line 1992 "write_deps_file.m"
    {
#line 1992 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dep", (MR_Integer) 1, parse_tree__write_deps_file__DepFileName_17);
    }
#line 1994 "write_deps_file.m"
    {
#line 1994 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dv", (MR_Integer) 1, parse_tree__write_deps_file__DvFileName_18);
    }
#line 1999 "write_deps_file.m"
    {
#line 1999 "write_deps_file.m"
      parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1999 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_43_43, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
#line 1999 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])));
#line 1999 "write_deps_file.m"
    }
#line 1999 "write_deps_file.m"
    {
#line 1999 "write_deps_file.m"
      parse_tree__write_deps_file__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1999 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_41_41, 0) = ((MR_Box) ((MR_String) "\techo > "));
#line 1999 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_41_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 1999 "write_deps_file.m"
    }
#line 1998 "write_deps_file.m"
    {
#line 1998 "write_deps_file.m"
      parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1998 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
#line 1998 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (parse_tree__write_deps_file__V_41_41));
#line 1998 "write_deps_file.m"
    }
#line 1998 "write_deps_file.m"
    {
#line 1998 "write_deps_file.m"
      parse_tree__write_deps_file__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1998 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_38_38, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1998 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_38_38, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1998 "write_deps_file.m"
    }
#line 1998 "write_deps_file.m"
    {
#line 1998 "write_deps_file.m"
      parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1998 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) ((MR_String) " \044("));
#line 1998 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_38_38));
#line 1998 "write_deps_file.m"
    }
#line 1998 "write_deps_file.m"
    {
#line 1998 "write_deps_file.m"
      parse_tree__write_deps_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1998 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, 0) = ((MR_Box) (*parse_tree__write_deps_file__DepFileName_17));
#line 1998 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1998 "write_deps_file.m"
    }
#line 1998 "write_deps_file.m"
    {
#line 1998 "write_deps_file.m"
      parse_tree__write_deps_file__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1998 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_33_33, 0) = ((MR_Box) ((MR_String) " : "));
#line 1998 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_33_33, 1) = ((MR_Box) (parse_tree__write_deps_file__V_35_35));
#line 1998 "write_deps_file.m"
    }
#line 1998 "write_deps_file.m"
    {
#line 1998 "write_deps_file.m"
      parse_tree__write_deps_file__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1998 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_31_31, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
#line 1998 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_31_31, 1) = ((MR_Box) (parse_tree__write_deps_file__V_33_33));
#line 1998 "write_deps_file.m"
    }
#line 1997 "write_deps_file.m"
    {
#line 1997 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_31_31);
    }
#line 2002 "write_deps_file.m"
    {
#line 2002 "write_deps_file.m"
      parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2002 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) " >> "));
#line 2002 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2002 "write_deps_file.m"
    }
#line 2002 "write_deps_file.m"
    {
#line 2002 "write_deps_file.m"
      parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2002 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) ".cs)"));
#line 2002 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 2002 "write_deps_file.m"
    }
#line 2002 "write_deps_file.m"
    {
#line 2002 "write_deps_file.m"
      parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2002 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 2002 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 2002 "write_deps_file.m"
    }
#line 2002 "write_deps_file.m"
    {
#line 2002 "write_deps_file.m"
      parse_tree__write_deps_file__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2002 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2002 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 2002 "write_deps_file.m"
    }
#line 2002 "write_deps_file.m"
    {
#line 2002 "write_deps_file.m"
      parse_tree__write_deps_file__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2002 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 0) = ((MR_Box) ((MR_String) "\t\044(MKLIBINIT) "));
#line 2002 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 1) = ((MR_Box) (parse_tree__write_deps_file__V_50_50));
#line 2002 "write_deps_file.m"
    }
#line 2001 "write_deps_file.m"
    {
#line 2001 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_47_47);
    }
#line 2009 "write_deps_file.m"
    {
#line 2009 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\t\044(EXTRA_INIT_COMMAND) >> ");
    }
#line 2010 "write_deps_file.m"
    {
#line 2010 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__InitFileName_16);
    }
#line 2011 "write_deps_file.m"
    {
#line 2011 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 2016 "write_deps_file.m"
    {
#line 2016 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleFileName_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_13);
    }
#line 2017 "write_deps_file.m"
    {
#line 2017 "write_deps_file.m"
      parse_tree__write_deps_file__V_67_67 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleFileName_20, (MR_String) "_init");
    }
#line 2017 "write_deps_file.m"
    {
#line 2017 "write_deps_file.m"
      parse_tree__write_deps_file__ForceC2InitTarget_21 = mercury__string__f_43_43_2_f_0((MR_String) "force-", parse_tree__write_deps_file__V_67_67);
    }
#line 2018 "write_deps_file.m"
    {
#line 2018 "write_deps_file.m"
      parse_tree__write_deps_file__TmpInitCFileName_22 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__InitCFileName_15, (MR_String) ".tmp");
    }
#line 2025 "write_deps_file.m"
    {
#line 2025 "write_deps_file.m"
      parse_tree__write_deps_file__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2025 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_95_95, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
#line 2025 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107])));
#line 2025 "write_deps_file.m"
    }
#line 2025 "write_deps_file.m"
    {
#line 2025 "write_deps_file.m"
      parse_tree__write_deps_file__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2025 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 0) = ((MR_Box) ((MR_String) "\t\100mercury_update_interface "));
#line 2025 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 1) = ((MR_Box) (parse_tree__write_deps_file__V_95_95));
#line 2025 "write_deps_file.m"
    }
#line 2024 "write_deps_file.m"
    {
#line 2024 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) ((MR_String) ".init_cs) \044(ALL_C2INITARGS)\n"));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_93_93));
#line 2024 "write_deps_file.m"
    }
#line 2024 "write_deps_file.m"
    {
#line 2024 "write_deps_file.m"
      parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 2024 "write_deps_file.m"
    }
#line 2024 "write_deps_file.m"
    {
#line 2024 "write_deps_file.m"
      parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) " \044("));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 2024 "write_deps_file.m"
    }
#line 2023 "write_deps_file.m"
    {
#line 2023 "write_deps_file.m"
      parse_tree__write_deps_file__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2023 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpInitCFileName_22));
#line 2023 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 2023 "write_deps_file.m"
    }
#line 2023 "write_deps_file.m"
    {
#line 2023 "write_deps_file.m"
      parse_tree__write_deps_file__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2023 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 0) = ((MR_Box) ((MR_String) "--init-c-file "));
#line 2023 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 1) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 2023 "write_deps_file.m"
    }
#line 2022 "write_deps_file.m"
    {
#line 2022 "write_deps_file.m"
      parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2022 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) ((MR_String) "\t\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) "));
#line 2022 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_85_85));
#line 2022 "write_deps_file.m"
    }
#line 2021 "write_deps_file.m"
    {
#line 2021 "write_deps_file.m"
      parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2021 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
#line 2021 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 2021 "write_deps_file.m"
    }
#line 2021 "write_deps_file.m"
    {
#line 2021 "write_deps_file.m"
      parse_tree__write_deps_file__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2021 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 2021 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 2021 "write_deps_file.m"
    }
#line 2021 "write_deps_file.m"
    {
#line 2021 "write_deps_file.m"
      parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2021 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) ((MR_String) " \044("));
#line 2021 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 2021 "write_deps_file.m"
    }
#line 2021 "write_deps_file.m"
    {
#line 2021 "write_deps_file.m"
      parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2021 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
#line 2021 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 2021 "write_deps_file.m"
    }
#line 2021 "write_deps_file.m"
    {
#line 2021 "write_deps_file.m"
      parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2021 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) ((MR_String) " : "));
#line 2021 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_77_77));
#line 2021 "write_deps_file.m"
    }
#line 2021 "write_deps_file.m"
    {
#line 2021 "write_deps_file.m"
      parse_tree__write_deps_file__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2021 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
#line 2021 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 2021 "write_deps_file.m"
    }
#line 2020 "write_deps_file.m"
    {
#line 2020 "write_deps_file.m"
      parse_tree__write_deps_file__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2020 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 0) = ((MR_Box) ((MR_String) " :\n\n"));
#line 2020 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 1) = ((MR_Box) (parse_tree__write_deps_file__V_74_74));
#line 2020 "write_deps_file.m"
    }
#line 2020 "write_deps_file.m"
    {
#line 2020 "write_deps_file.m"
      parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2020 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
#line 2020 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_72_72));
#line 2020 "write_deps_file.m"
    }
#line 2019 "write_deps_file.m"
    {
#line 2019 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_70_70);
#line 2019 "write_deps_file.m"
      return;
    }
#line 1991 "write_deps_file.m"
  }
#line 1985 "write_deps_file.m"
}

#line 1751 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
#line 1751 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_19,
#line 1751 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_20,
#line 1751 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_21,
#line 1751 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_22,
#line 1751 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_23,
#line 1751 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
#line 1751 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_25,
#line 1751 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_26,
#line 1751 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
#line 1751 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
#line 1751 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
#line 1751 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
#line 1751 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
#line 1751 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__JarFileName_32,
#line 1751 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LibFileName_33,
#line 1751 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34)
#line 1751 "write_deps_file.m"
{
#line 1760 "write_deps_file.m"
  {
#line 1760 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Gmake_36;
#line 1760 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLLibsDepString_37;
#line 1760 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLObjsString_38;
#line 1760 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLPicObjsString_39;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IfIL_40;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ILMainRule_41;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IfJava2_42;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__JavaMainRule_43;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Else_44;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Else2_45;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__EndIf_46;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__EndIf2_47;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MainRule_48;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Target_49;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Rules_50;
#line 1760 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__LibTargetName_51;
#line 1760 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeSharedLibFileName_52;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__UseInstallName_53;
#line 1760 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InstallNameOpt_54;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__AllInts_55;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ILLibRule_56;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__JavaLibRule_57;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LibRule_58;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LibRules_59;
#line 1760 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ClassFiles_60;
#line 1760 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ListClassFiles_61;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_88_88;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_90_90;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_96_96;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_98_98;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_99_99;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_101_101;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_103_103;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_109_109;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_111_111;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_123_123;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_126_126;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_128_128;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_129_129;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_131_131;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_132_132;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_134_134;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_140_140;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_142_142;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_143_143;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_145_145;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_147_147;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_148_148;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_150_150;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_151_151;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_153_153;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_154_154;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_156_156;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_157_157;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_159_159;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_161_161;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_163_163;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_164_164;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_166_166;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_167_167;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_169_169;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_171_171;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_172_172;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_174_174;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_216_216;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_217_217;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_219_219;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_221_221;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_222_222;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_224_224;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_225_225;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_226_226;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_227_227;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_230_230;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_232_232;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_234_234;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_235_235;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_237_237;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_239_239;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_240_240;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_242_242;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_244_244;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_245_245;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_247_247;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_249_249;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_250_250;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_252_252;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_262_262;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_265_265;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_266_266;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_268_268;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_271_271;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_272_272;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_274_274;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_275_275;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_277_277;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_279_279;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_280_280;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_282_282;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_283_283;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_285_285;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_286_286;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_288_288;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_290_290;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_292_292;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_293_293;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_295_295;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_296_296;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_298_298;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_300_300;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_301_301;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_303_303;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_309_309;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_311_311;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_313_313;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_314_314;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_316_316;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_318_318;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_319_319;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_321_321;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_322_322;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_324_324;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_326_326;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_327_327;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_329_329;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_331_331;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_332_332;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_334_334;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_336_336;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_337_337;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_339_339;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_340_340;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_342_342;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_344_344;
#line 1760 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_349_349;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_351_351;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_353_353;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_355_355;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_357_357;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_358_358;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_360_360;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_362_362;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_363_363;
#line 1760 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_365_365;

#line 1766 "write_deps_file.m"
    {
#line 1766 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 117, &parse_tree__write_deps_file__Gmake_36);
    }
#line 1779 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Gmake_36 == (MR_Integer) 0))
#line 1780 "write_deps_file.m"
      {
#line 1781 "write_deps_file.m"
        parse_tree__write_deps_file__All_MLLibsDepString_37 = (MR_String) "\044(ALL_MLLIBS_DEP)";
#line 1782 "write_deps_file.m"
        parse_tree__write_deps_file__All_MLObjsString_38 = (MR_String) "\044(ALL_MLOBJS)";
#line 1783 "write_deps_file.m"
        parse_tree__write_deps_file__All_MLPicObjsString_39 = (MR_String) "\044(ALL_MLPICOBJS)";
#line 1780 "write_deps_file.m"
      }
#line 1779 "write_deps_file.m"
    else
#line 1768 "write_deps_file.m"
      {
#line 1768 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_65_65;
#line 1768 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_67_67;
#line 1768 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_71_71;
#line 1768 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_73_73;
#line 1768 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_77_77;
#line 1768 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_79_79;

#line 1769 "write_deps_file.m"
        {
#line 1769 "write_deps_file.m"
          parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1769 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1769 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[110])));
#line 1769 "write_deps_file.m"
        }
#line 1769 "write_deps_file.m"
        {
#line 1769 "write_deps_file.m"
          parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1769 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
#line 1769 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_67_67));
#line 1769 "write_deps_file.m"
        }
#line 1769 "write_deps_file.m"
        {
#line 1769 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_65_65, &parse_tree__write_deps_file__All_MLLibsDepString_37);
        }
#line 1772 "write_deps_file.m"
        {
#line 1772 "write_deps_file.m"
          parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1772 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1772 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[111])));
#line 1772 "write_deps_file.m"
        }
#line 1772 "write_deps_file.m"
        {
#line 1772 "write_deps_file.m"
          parse_tree__write_deps_file__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1772 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
#line 1772 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 1772 "write_deps_file.m"
        }
#line 1772 "write_deps_file.m"
        {
#line 1772 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_71_71, &parse_tree__write_deps_file__All_MLObjsString_38);
        }
#line 1777 "write_deps_file.m"
        {
#line 1777 "write_deps_file.m"
          parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1777 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1777 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[112])));
#line 1777 "write_deps_file.m"
        }
#line 1776 "write_deps_file.m"
        {
#line 1776 "write_deps_file.m"
          parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1776 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),\044(foreach \100,"));
#line 1776 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 1776 "write_deps_file.m"
        }
#line 1775 "write_deps_file.m"
        {
#line 1775 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_77_77, &parse_tree__write_deps_file__All_MLPicObjsString_39);
        }
#line 1768 "write_deps_file.m"
      }
#line 1797 "write_deps_file.m"
    {
#line 1797 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, parse_tree__write_deps_file__ExeFileName_31);
    }
#line 1800 "write_deps_file.m"
    parse_tree__write_deps_file__IfIL_40 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[113]);
#line 1803 "write_deps_file.m"
    {
#line 1803 "write_deps_file.m"
      parse_tree__write_deps_file__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_103_103, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[114])));
#line 1803 "write_deps_file.m"
    }
#line 1803 "write_deps_file.m"
    {
#line 1803 "write_deps_file.m"
      parse_tree__write_deps_file__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 1) = ((MR_Box) (parse_tree__write_deps_file__V_103_103));
#line 1803 "write_deps_file.m"
    }
#line 1802 "write_deps_file.m"
    {
#line 1802 "write_deps_file.m"
      parse_tree__write_deps_file__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 0) = ((MR_Box) ((MR_String) ".dlls) "));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 1) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 1802 "write_deps_file.m"
    }
#line 1802 "write_deps_file.m"
    {
#line 1802 "write_deps_file.m"
      parse_tree__write_deps_file__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 1) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 1802 "write_deps_file.m"
    }
#line 1802 "write_deps_file.m"
    {
#line 1802 "write_deps_file.m"
      parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 1802 "write_deps_file.m"
    }
#line 1802 "write_deps_file.m"
    {
#line 1802 "write_deps_file.m"
      parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) ".exe : "));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 1802 "write_deps_file.m"
    }
#line 1802 "write_deps_file.m"
    {
#line 1802 "write_deps_file.m"
      parse_tree__write_deps_file__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 1802 "write_deps_file.m"
    }
#line 1801 "write_deps_file.m"
    {
#line 1801 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1801 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) ((MR_String) ".exe\n"));
#line 1801 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_93_93));
#line 1801 "write_deps_file.m"
    }
#line 1801 "write_deps_file.m"
    {
#line 1801 "write_deps_file.m"
      parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1801 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1801 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 1801 "write_deps_file.m"
    }
#line 1801 "write_deps_file.m"
    {
#line 1801 "write_deps_file.m"
      parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1801 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) " : "));
#line 1801 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1801 "write_deps_file.m"
    }
#line 1801 "write_deps_file.m"
    {
#line 1801 "write_deps_file.m"
      parse_tree__write_deps_file__ILMainRule_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1801 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILMainRule_41, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1801 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILMainRule_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1801 "write_deps_file.m"
    }
#line 1804 "write_deps_file.m"
    parse_tree__write_deps_file__IfJava2_42 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[115]);
#line 1805 "write_deps_file.m"
    {
#line 1805 "write_deps_file.m"
      parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[116])));
#line 1805 "write_deps_file.m"
    }
#line 1805 "write_deps_file.m"
    {
#line 1805 "write_deps_file.m"
      parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 1805 "write_deps_file.m"
    }
#line 1805 "write_deps_file.m"
    {
#line 1805 "write_deps_file.m"
      parse_tree__write_deps_file__JavaMainRule_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_43, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_43, 1) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 1805 "write_deps_file.m"
    }
#line 1807 "write_deps_file.m"
    parse_tree__write_deps_file__Else_44 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[117]);
#line 1808 "write_deps_file.m"
    parse_tree__write_deps_file__Else2_45 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[118]);
#line 1809 "write_deps_file.m"
    parse_tree__write_deps_file__EndIf_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[11]);
#line 1810 "write_deps_file.m"
    parse_tree__write_deps_file__EndIf2_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[119]);
#line 1816 "write_deps_file.m"
    {
#line 1816 "write_deps_file.m"
      parse_tree__write_deps_file__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1816 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_134_134, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1816 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[25])));
#line 1816 "write_deps_file.m"
    }
#line 1816 "write_deps_file.m"
    {
#line 1816 "write_deps_file.m"
      parse_tree__write_deps_file__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1816 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_132_132, 0) = ((MR_Box) ((MR_String) " : "));
#line 1816 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_132_132, 1) = ((MR_Box) (parse_tree__write_deps_file__V_134_134));
#line 1816 "write_deps_file.m"
    }
#line 1816 "write_deps_file.m"
    {
#line 1816 "write_deps_file.m"
      parse_tree__write_deps_file__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1816 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1816 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 1) = ((MR_Box) (parse_tree__write_deps_file__V_132_132));
#line 1816 "write_deps_file.m"
    }
#line 1815 "write_deps_file.m"
    {
#line 1815 "write_deps_file.m"
      parse_tree__write_deps_file__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1815 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 1) = ((MR_Box) (parse_tree__write_deps_file__V_131_131));
#line 1815 "write_deps_file.m"
    }
#line 1815 "write_deps_file.m"
    {
#line 1815 "write_deps_file.m"
      parse_tree__write_deps_file__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_128_128, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1815 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_128_128, 1) = ((MR_Box) (parse_tree__write_deps_file__V_129_129));
#line 1815 "write_deps_file.m"
    }
#line 1815 "write_deps_file.m"
    {
#line 1815 "write_deps_file.m"
      parse_tree__write_deps_file__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1815 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 1) = ((MR_Box) (parse_tree__write_deps_file__V_128_128));
#line 1815 "write_deps_file.m"
    }
#line 1814 "write_deps_file.m"
    {
#line 1814 "write_deps_file.m"
      parse_tree__write_deps_file__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1814 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_123_123, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_EXE),)\n"));
#line 1814 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_123_123, 1) = ((MR_Box) (parse_tree__write_deps_file__V_126_126));
#line 1814 "write_deps_file.m"
    }
#line 1813 "write_deps_file.m"
    {
#line 1813 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_123_123);
    }
#line 1827 "write_deps_file.m"
    {
#line 1827 "write_deps_file.m"
      parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[120])));
#line 1827 "write_deps_file.m"
    }
#line 1827 "write_deps_file.m"
    {
#line 1827 "write_deps_file.m"
      parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 1827 "write_deps_file.m"
    }
#line 1827 "write_deps_file.m"
    {
#line 1827 "write_deps_file.m"
      parse_tree__write_deps_file__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 1827 "write_deps_file.m"
    }
#line 1827 "write_deps_file.m"
    {
#line 1827 "write_deps_file.m"
      parse_tree__write_deps_file__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 1) = ((MR_Box) (parse_tree__write_deps_file__V_171_171));
#line 1827 "write_deps_file.m"
    }
#line 1826 "write_deps_file.m"
    {
#line 1826 "write_deps_file.m"
      parse_tree__write_deps_file__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 0) = ((MR_Box) ((MR_String) " \\\n"));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 1) = ((MR_Box) (parse_tree__write_deps_file__V_169_169));
#line 1826 "write_deps_file.m"
    }
#line 1826 "write_deps_file.m"
    {
#line 1826 "write_deps_file.m"
      parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_167_167));
#line 1826 "write_deps_file.m"
    }
#line 1825 "write_deps_file.m"
    {
#line 1825 "write_deps_file.m"
      parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 1825 "write_deps_file.m"
    }
#line 1825 "write_deps_file.m"
    {
#line 1825 "write_deps_file.m"
      parse_tree__write_deps_file__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_163_163, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_163_163, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 1825 "write_deps_file.m"
    }
#line 1825 "write_deps_file.m"
    {
#line 1825 "write_deps_file.m"
      parse_tree__write_deps_file__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 0) = ((MR_Box) ((MR_String) "\044(EXEFILE_OPT)"));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 1) = ((MR_Box) (parse_tree__write_deps_file__V_163_163));
#line 1825 "write_deps_file.m"
    }
#line 1824 "write_deps_file.m"
    {
#line 1824 "write_deps_file.m"
      parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) ((MR_String) "\t\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) "));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_161_161));
#line 1824 "write_deps_file.m"
    }
#line 1823 "write_deps_file.m"
    {
#line 1823 "write_deps_file.m"
      parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 1823 "write_deps_file.m"
    }
#line 1823 "write_deps_file.m"
    {
#line 1823 "write_deps_file.m"
      parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 1823 "write_deps_file.m"
    }
#line 1823 "write_deps_file.m"
    {
#line 1823 "write_deps_file.m"
      parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) " "));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 1823 "write_deps_file.m"
    }
#line 1823 "write_deps_file.m"
    {
#line 1823 "write_deps_file.m"
      parse_tree__write_deps_file__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 1823 "write_deps_file.m"
    }
#line 1822 "write_deps_file.m"
    {
#line 1822 "write_deps_file.m"
      parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1822 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) ((MR_String) " "));
#line 1822 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_153_153));
#line 1822 "write_deps_file.m"
    }
#line 1822 "write_deps_file.m"
    {
#line 1822 "write_deps_file.m"
      parse_tree__write_deps_file__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1822 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
#line 1822 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 1822 "write_deps_file.m"
    }
#line 1822 "write_deps_file.m"
    {
#line 1822 "write_deps_file.m"
      parse_tree__write_deps_file__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1822 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_148_148, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1822 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_148_148, 1) = ((MR_Box) (parse_tree__write_deps_file__V_150_150));
#line 1822 "write_deps_file.m"
    }
#line 1822 "write_deps_file.m"
    {
#line 1822 "write_deps_file.m"
      parse_tree__write_deps_file__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1822 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1822 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 1) = ((MR_Box) (parse_tree__write_deps_file__V_148_148));
#line 1822 "write_deps_file.m"
    }
#line 1822 "write_deps_file.m"
    {
#line 1822 "write_deps_file.m"
      parse_tree__write_deps_file__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1822 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1822 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 1) = ((MR_Box) (parse_tree__write_deps_file__V_147_147));
#line 1822 "write_deps_file.m"
    }
#line 1821 "write_deps_file.m"
    {
#line 1821 "write_deps_file.m"
      parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1821 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1821 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_145_145));
#line 1821 "write_deps_file.m"
    }
#line 1821 "write_deps_file.m"
    {
#line 1821 "write_deps_file.m"
      parse_tree__write_deps_file__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1821 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1821 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 1821 "write_deps_file.m"
    }
#line 1821 "write_deps_file.m"
    {
#line 1821 "write_deps_file.m"
      parse_tree__write_deps_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1821 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) : \044("));
#line 1821 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 1) = ((MR_Box) (parse_tree__write_deps_file__V_142_142));
#line 1821 "write_deps_file.m"
    }
#line 1821 "write_deps_file.m"
    {
#line 1821 "write_deps_file.m"
      parse_tree__write_deps_file__MainRule_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1821 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_48, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1821 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_48, 1) = ((MR_Box) (parse_tree__write_deps_file__V_140_140));
#line 1821 "write_deps_file.m"
    }
#line 1829 "write_deps_file.m"
    {
#line 1829 "write_deps_file.m"
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_19, &parse_tree__write_deps_file__Target_49);
    }
#line 1835 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Gmake_36 == (MR_Integer) 0))
#line 1840 "write_deps_file.m"
      if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 0))
#line 1853 "write_deps_file.m"
        parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__MainRule_48;
#line 1840 "write_deps_file.m"
      else
#line 1840 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 2))
#line 1843 "write_deps_file.m"
          parse_tree__write_deps_file__Rules_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1840 "write_deps_file.m"
        else
#line 1840 "write_deps_file.m"
          if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 4))
#line 1850 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1840 "write_deps_file.m"
          else
#line 1840 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 1))
#line 1839 "write_deps_file.m"
              parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__ILMainRule_41;
#line 1840 "write_deps_file.m"
            else
#line 1846 "write_deps_file.m"
              parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__JavaMainRule_43;
#line 1835 "write_deps_file.m"
    else
#line 1831 "write_deps_file.m"
      {
#line 1831 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_369_369 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1831 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_178_178;
#line 1831 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_179_179;
#line 1831 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_180_180;
#line 1831 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_181_181;
#line 1831 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_182_182;
#line 1831 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_183_183;
#line 1831 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_184_184;

#line 1834 "write_deps_file.m"
        {
#line 1834 "write_deps_file.m"
          parse_tree__write_deps_file__V_184_184 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__EndIf2_47, parse_tree__write_deps_file__EndIf_46);
        }
#line 1834 "write_deps_file.m"
        {
#line 1834 "write_deps_file.m"
          parse_tree__write_deps_file__V_183_183 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__MainRule_48, parse_tree__write_deps_file__V_184_184);
        }
#line 1833 "write_deps_file.m"
        {
#line 1833 "write_deps_file.m"
          parse_tree__write_deps_file__V_182_182 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__Else2_45, parse_tree__write_deps_file__V_183_183);
        }
#line 1833 "write_deps_file.m"
        {
#line 1833 "write_deps_file.m"
          parse_tree__write_deps_file__V_181_181 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__JavaMainRule_43, parse_tree__write_deps_file__V_182_182);
        }
#line 1833 "write_deps_file.m"
        {
#line 1833 "write_deps_file.m"
          parse_tree__write_deps_file__V_180_180 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__IfJava2_42, parse_tree__write_deps_file__V_181_181);
        }
#line 1832 "write_deps_file.m"
        {
#line 1832 "write_deps_file.m"
          parse_tree__write_deps_file__V_179_179 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__Else_44, parse_tree__write_deps_file__V_180_180);
        }
#line 1832 "write_deps_file.m"
        {
#line 1832 "write_deps_file.m"
          parse_tree__write_deps_file__V_178_178 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__ILMainRule_41, parse_tree__write_deps_file__V_179_179);
        }
#line 1832 "write_deps_file.m"
        {
#line 1832 "write_deps_file.m"
          parse_tree__write_deps_file__Rules_50 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__IfIL_40, parse_tree__write_deps_file__V_178_178);
        }
#line 1831 "write_deps_file.m"
      }
#line 1856 "write_deps_file.m"
    {
#line 1856 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Rules_50);
    }
#line 1861 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Intermod_25 == (MR_Integer) 0))
#line 1863 "write_deps_file.m"
      *parse_tree__write_deps_file__MaybeOptsVar_28 = (MR_String) "";
#line 1861 "write_deps_file.m"
    else
#line 1859 "write_deps_file.m"
      {
#line 1859 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_187_187;

#line 1860 "write_deps_file.m"
        {
#line 1860 "write_deps_file.m"
          parse_tree__write_deps_file__V_187_187 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".opts) ");
        }
#line 1860 "write_deps_file.m"
        {
#line 1860 "write_deps_file.m"
          *parse_tree__write_deps_file__MaybeOptsVar_28 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_187_187);
        }
#line 1859 "write_deps_file.m"
      }
#line 1868 "write_deps_file.m"
    if ((parse_tree__write_deps_file__TransOpt_26 == (MR_Integer) 0))
#line 1870 "write_deps_file.m"
      *parse_tree__write_deps_file__MaybeTransOptsVar_29 = (MR_String) "";
#line 1868 "write_deps_file.m"
    else
#line 1866 "write_deps_file.m"
      {
#line 1866 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_190_190;

#line 1867 "write_deps_file.m"
        {
#line 1867 "write_deps_file.m"
          parse_tree__write_deps_file__V_190_190 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".trans_opts) ");
        }
#line 1867 "write_deps_file.m"
        {
#line 1867 "write_deps_file.m"
          *parse_tree__write_deps_file__MaybeTransOptsVar_29 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_190_190);
        }
#line 1866 "write_deps_file.m"
      }
#line 1875 "write_deps_file.m"
    if ((parse_tree__write_deps_file__MmcMakeDeps_27 == (MR_Integer) 0))
#line 1877 "write_deps_file.m"
      *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = (MR_String) "";
#line 1875 "write_deps_file.m"
    else
#line 1873 "write_deps_file.m"
      {
#line 1873 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_193_193;

#line 1874 "write_deps_file.m"
        {
#line 1874 "write_deps_file.m"
          parse_tree__write_deps_file__V_193_193 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".module_deps) ");
        }
#line 1874 "write_deps_file.m"
        {
#line 1874 "write_deps_file.m"
          *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_193_193);
        }
#line 1873 "write_deps_file.m"
      }
#line 1880 "write_deps_file.m"
    {
#line 1880 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, &parse_tree__write_deps_file__LibTargetName_51);
    }
#line 1882 "write_deps_file.m"
    {
#line 1882 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044A", (MR_Integer) 0, parse_tree__write_deps_file__LibFileName_33);
    }
#line 1884 "write_deps_file.m"
    {
#line 1884 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 0, parse_tree__write_deps_file__SharedLibFileName_34);
    }
#line 1886 "write_deps_file.m"
    {
#line 1886 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 1, &parse_tree__write_deps_file__MaybeSharedLibFileName_52);
    }
#line 1889 "write_deps_file.m"
    {
#line 1889 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) ".jar", (MR_Integer) 1, parse_tree__write_deps_file__JarFileName_32);
    }
#line 1894 "write_deps_file.m"
    {
#line 1894 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 613, &parse_tree__write_deps_file__UseInstallName_53);
    }
#line 1899 "write_deps_file.m"
    if ((parse_tree__write_deps_file__UseInstallName_53 == (MR_Integer) 0))
#line 1901 "write_deps_file.m"
      parse_tree__write_deps_file__InstallNameOpt_54 = (MR_String) "";
#line 1899 "write_deps_file.m"
    else
#line 1898 "write_deps_file.m"
      {
#line 1898 "write_deps_file.m"
        libs__file_util__get_install_name_option_3_p_0(parse_tree__write_deps_file__Globals_19, *parse_tree__write_deps_file__SharedLibFileName_34, &parse_tree__write_deps_file__InstallNameOpt_54);
      }
#line 1909 "write_deps_file.m"
    parse_tree__write_deps_file__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107]);
#line 1908 "write_deps_file.m"
    {
#line 1908 "write_deps_file.m"
      parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1908 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_23));
#line 1908 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1908 "write_deps_file.m"
    }
#line 1907 "write_deps_file.m"
    {
#line 1907 "write_deps_file.m"
      parse_tree__write_deps_file__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1907 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeTransOptsVar_29));
#line 1907 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 1907 "write_deps_file.m"
    }
#line 1907 "write_deps_file.m"
    {
#line 1907 "write_deps_file.m"
      parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1907 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeOptsVar_28));
#line 1907 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_225_225));
#line 1907 "write_deps_file.m"
    }
#line 1906 "write_deps_file.m"
    {
#line 1906 "write_deps_file.m"
      parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 1906 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 1906 "write_deps_file.m"
    }
#line 1906 "write_deps_file.m"
    {
#line 1906 "write_deps_file.m"
      parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1906 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 1906 "write_deps_file.m"
    }
#line 1906 "write_deps_file.m"
    {
#line 1906 "write_deps_file.m"
      parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1906 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 1906 "write_deps_file.m"
    }
#line 1905 "write_deps_file.m"
    {
#line 1905 "write_deps_file.m"
      parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1905 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".ints) "));
#line 1905 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_219_219));
#line 1905 "write_deps_file.m"
    }
#line 1905 "write_deps_file.m"
    {
#line 1905 "write_deps_file.m"
      parse_tree__write_deps_file__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1905 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1905 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 1) = ((MR_Box) (parse_tree__write_deps_file__V_217_217));
#line 1905 "write_deps_file.m"
    }
#line 1905 "write_deps_file.m"
    {
#line 1905 "write_deps_file.m"
      parse_tree__write_deps_file__AllInts_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1905 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_55, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1905 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_216_216));
#line 1905 "write_deps_file.m"
    }
#line 1913 "write_deps_file.m"
    {
#line 1913 "write_deps_file.m"
      parse_tree__write_deps_file__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1913 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 0) = ((MR_Box) ((MR_String) ".foreign_dlls) \\\n\t\t"));
#line 1913 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 1) = ((MR_Box) (parse_tree__write_deps_file__AllInts_55));
#line 1913 "write_deps_file.m"
    }
#line 1912 "write_deps_file.m"
    {
#line 1912 "write_deps_file.m"
      parse_tree__write_deps_file__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1912 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1912 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 1) = ((MR_Box) (parse_tree__write_deps_file__V_240_240));
#line 1912 "write_deps_file.m"
    }
#line 1912 "write_deps_file.m"
    {
#line 1912 "write_deps_file.m"
      parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1912 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1912 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_239_239));
#line 1912 "write_deps_file.m"
    }
#line 1911 "write_deps_file.m"
    {
#line 1911 "write_deps_file.m"
      parse_tree__write_deps_file__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1911 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 0) = ((MR_Box) ((MR_String) ".dlls) "));
#line 1911 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 1911 "write_deps_file.m"
    }
#line 1911 "write_deps_file.m"
    {
#line 1911 "write_deps_file.m"
      parse_tree__write_deps_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1911 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1911 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 1) = ((MR_Box) (parse_tree__write_deps_file__V_235_235));
#line 1911 "write_deps_file.m"
    }
#line 1911 "write_deps_file.m"
    {
#line 1911 "write_deps_file.m"
      parse_tree__write_deps_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1911 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1911 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 1) = ((MR_Box) (parse_tree__write_deps_file__V_234_234));
#line 1911 "write_deps_file.m"
    }
#line 1911 "write_deps_file.m"
    {
#line 1911 "write_deps_file.m"
      parse_tree__write_deps_file__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1911 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 0) = ((MR_Box) ((MR_String) " : "));
#line 1911 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 1) = ((MR_Box) (parse_tree__write_deps_file__V_232_232));
#line 1911 "write_deps_file.m"
    }
#line 1911 "write_deps_file.m"
    {
#line 1911 "write_deps_file.m"
      parse_tree__write_deps_file__ILLibRule_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1911 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILLibRule_56, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1911 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILLibRule_56, 1) = ((MR_Box) (parse_tree__write_deps_file__V_230_230));
#line 1911 "write_deps_file.m"
    }
#line 1917 "write_deps_file.m"
    {
#line 1917 "write_deps_file.m"
      parse_tree__write_deps_file__V_245_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1917 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 0) = ((MR_Box) ((MR_String) " \\\n\t\t"));
#line 1917 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 1) = ((MR_Box) (parse_tree__write_deps_file__AllInts_55));
#line 1917 "write_deps_file.m"
    }
#line 1916 "write_deps_file.m"
    {
#line 1916 "write_deps_file.m"
      parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_245_245));
#line 1916 "write_deps_file.m"
    }
#line 1916 "write_deps_file.m"
    {
#line 1916 "write_deps_file.m"
      parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) " : "));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 1916 "write_deps_file.m"
    }
#line 1916 "write_deps_file.m"
    {
#line 1916 "write_deps_file.m"
      parse_tree__write_deps_file__JavaLibRule_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_57, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 1916 "write_deps_file.m"
    }
#line 1921 "write_deps_file.m"
    {
#line 1921 "write_deps_file.m"
      parse_tree__write_deps_file__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1921 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSharedLibFileName_52));
#line 1921 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 1) = ((MR_Box) (parse_tree__write_deps_file__V_245_245));
#line 1921 "write_deps_file.m"
    }
#line 1920 "write_deps_file.m"
    {
#line 1920 "write_deps_file.m"
      parse_tree__write_deps_file__V_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1920 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 0) = ((MR_Box) ((MR_String) " "));
#line 1920 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 1) = ((MR_Box) (parse_tree__write_deps_file__V_252_252));
#line 1920 "write_deps_file.m"
    }
#line 1920 "write_deps_file.m"
    {
#line 1920 "write_deps_file.m"
      parse_tree__write_deps_file__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1920 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1920 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 1) = ((MR_Box) (parse_tree__write_deps_file__V_250_250));
#line 1920 "write_deps_file.m"
    }
#line 1920 "write_deps_file.m"
    {
#line 1920 "write_deps_file.m"
      parse_tree__write_deps_file__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1920 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 0) = ((MR_Box) ((MR_String) " : "));
#line 1920 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 1) = ((MR_Box) (parse_tree__write_deps_file__V_249_249));
#line 1920 "write_deps_file.m"
    }
#line 1920 "write_deps_file.m"
    {
#line 1920 "write_deps_file.m"
      parse_tree__write_deps_file__LibRule_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1920 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_58, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1920 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_247_247));
#line 1920 "write_deps_file.m"
    }
#line 1929 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Gmake_36 == (MR_Integer) 0))
#line 1934 "write_deps_file.m"
      if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 0))
#line 1947 "write_deps_file.m"
        parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__LibRule_58;
#line 1934 "write_deps_file.m"
      else
#line 1934 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 2))
#line 1937 "write_deps_file.m"
          parse_tree__write_deps_file__LibRules_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1934 "write_deps_file.m"
        else
#line 1934 "write_deps_file.m"
          if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 4))
#line 1944 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1934 "write_deps_file.m"
          else
#line 1934 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 1))
#line 1933 "write_deps_file.m"
              parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__ILLibRule_56;
#line 1934 "write_deps_file.m"
            else
#line 1940 "write_deps_file.m"
              parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__JavaLibRule_57;
#line 1929 "write_deps_file.m"
    else
#line 1925 "write_deps_file.m"
      {
#line 1925 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_370_370 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1925 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_255_255;
#line 1925 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_256_256;
#line 1925 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_257_257;
#line 1925 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_258_258;
#line 1925 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_259_259;
#line 1925 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_260_260;
#line 1925 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_261_261;

#line 1928 "write_deps_file.m"
        {
#line 1928 "write_deps_file.m"
          parse_tree__write_deps_file__V_261_261 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__EndIf2_47, parse_tree__write_deps_file__EndIf_46);
        }
#line 1928 "write_deps_file.m"
        {
#line 1928 "write_deps_file.m"
          parse_tree__write_deps_file__V_260_260 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__LibRule_58, parse_tree__write_deps_file__V_261_261);
        }
#line 1927 "write_deps_file.m"
        {
#line 1927 "write_deps_file.m"
          parse_tree__write_deps_file__V_259_259 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__Else2_45, parse_tree__write_deps_file__V_260_260);
        }
#line 1927 "write_deps_file.m"
        {
#line 1927 "write_deps_file.m"
          parse_tree__write_deps_file__V_258_258 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__JavaLibRule_57, parse_tree__write_deps_file__V_259_259);
        }
#line 1927 "write_deps_file.m"
        {
#line 1927 "write_deps_file.m"
          parse_tree__write_deps_file__V_257_257 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__IfJava2_42, parse_tree__write_deps_file__V_258_258);
        }
#line 1926 "write_deps_file.m"
        {
#line 1926 "write_deps_file.m"
          parse_tree__write_deps_file__V_256_256 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__Else_44, parse_tree__write_deps_file__V_257_257);
        }
#line 1926 "write_deps_file.m"
        {
#line 1926 "write_deps_file.m"
          parse_tree__write_deps_file__V_255_255 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__ILLibRule_56, parse_tree__write_deps_file__V_256_256);
        }
#line 1926 "write_deps_file.m"
        {
#line 1926 "write_deps_file.m"
          parse_tree__write_deps_file__LibRules_59 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__IfIL_40, parse_tree__write_deps_file__V_255_255);
        }
#line 1925 "write_deps_file.m"
      }
#line 1951 "write_deps_file.m"
    {
#line 1951 "write_deps_file.m"
      parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1951 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1951 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__LibRules_59));
#line 1951 "write_deps_file.m"
    }
#line 1951 "write_deps_file.m"
    {
#line 1951 "write_deps_file.m"
      parse_tree__write_deps_file__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1951 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1951 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 1951 "write_deps_file.m"
    }
#line 1951 "write_deps_file.m"
    {
#line 1951 "write_deps_file.m"
      parse_tree__write_deps_file__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1951 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1951 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 1) = ((MR_Box) (parse_tree__write_deps_file__V_265_265));
#line 1951 "write_deps_file.m"
    }
#line 1950 "write_deps_file.m"
    {
#line 1950 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_262_262);
    }
#line 1963 "write_deps_file.m"
    {
#line 1963 "write_deps_file.m"
      parse_tree__write_deps_file__V_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_303_303, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
#line 1963 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_303_303, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[27])));
#line 1963 "write_deps_file.m"
    }
#line 1963 "write_deps_file.m"
    {
#line 1963 "write_deps_file.m"
      parse_tree__write_deps_file__V_301_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
#line 1963 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 1) = ((MR_Box) (parse_tree__write_deps_file__V_303_303));
#line 1963 "write_deps_file.m"
    }
#line 1963 "write_deps_file.m"
    {
#line 1963 "write_deps_file.m"
      parse_tree__write_deps_file__V_300_300 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_300_300, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1963 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_300_300, 1) = ((MR_Box) (parse_tree__write_deps_file__V_301_301));
#line 1963 "write_deps_file.m"
    }
#line 1963 "write_deps_file.m"
    {
#line 1963 "write_deps_file.m"
      parse_tree__write_deps_file__V_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_298_298, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
#line 1963 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_298_298, 1) = ((MR_Box) (parse_tree__write_deps_file__V_300_300));
#line 1963 "write_deps_file.m"
    }
#line 1962 "write_deps_file.m"
    {
#line 1962 "write_deps_file.m"
      parse_tree__write_deps_file__V_296_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1962 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_296_296, 0) = ((MR_Box) ((MR_String) " \\\n"));
#line 1962 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_296_296, 1) = ((MR_Box) (parse_tree__write_deps_file__V_298_298));
#line 1962 "write_deps_file.m"
    }
#line 1962 "write_deps_file.m"
    {
#line 1962 "write_deps_file.m"
      parse_tree__write_deps_file__V_295_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1962 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_295_295, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
#line 1962 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_295_295, 1) = ((MR_Box) (parse_tree__write_deps_file__V_296_296));
#line 1962 "write_deps_file.m"
    }
#line 1961 "write_deps_file.m"
    {
#line 1961 "write_deps_file.m"
      parse_tree__write_deps_file__V_293_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_293_293, 0) = ((MR_Box) ((MR_String) " \044(ALL_LD_LIBFLAGS) -o "));
#line 1961 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_293_293, 1) = ((MR_Box) (parse_tree__write_deps_file__V_295_295));
#line 1961 "write_deps_file.m"
    }
#line 1961 "write_deps_file.m"
    {
#line 1961 "write_deps_file.m"
      parse_tree__write_deps_file__V_292_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 0) = ((MR_Box) (parse_tree__write_deps_file__InstallNameOpt_54));
#line 1961 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 1) = ((MR_Box) (parse_tree__write_deps_file__V_293_293));
#line 1961 "write_deps_file.m"
    }
#line 1961 "write_deps_file.m"
    {
#line 1961 "write_deps_file.m"
      parse_tree__write_deps_file__V_290_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 0) = ((MR_Box) ((MR_String) "-- "));
#line 1961 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 1) = ((MR_Box) (parse_tree__write_deps_file__V_292_292));
#line 1961 "write_deps_file.m"
    }
#line 1960 "write_deps_file.m"
    {
#line 1960 "write_deps_file.m"
      parse_tree__write_deps_file__V_288_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1960 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_288_288, 0) = ((MR_Box) ((MR_String) "\t\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) "));
#line 1960 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_288_288, 1) = ((MR_Box) (parse_tree__write_deps_file__V_290_290));
#line 1960 "write_deps_file.m"
    }
#line 1959 "write_deps_file.m"
    {
#line 1959 "write_deps_file.m"
      parse_tree__write_deps_file__V_286_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1959 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 1) = ((MR_Box) (parse_tree__write_deps_file__V_288_288));
#line 1959 "write_deps_file.m"
    }
#line 1959 "write_deps_file.m"
    {
#line 1959 "write_deps_file.m"
      parse_tree__write_deps_file__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
#line 1959 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 1) = ((MR_Box) (parse_tree__write_deps_file__V_286_286));
#line 1959 "write_deps_file.m"
    }
#line 1959 "write_deps_file.m"
    {
#line 1959 "write_deps_file.m"
      parse_tree__write_deps_file__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 0) = ((MR_Box) ((MR_String) " "));
#line 1959 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 1) = ((MR_Box) (parse_tree__write_deps_file__V_285_285));
#line 1959 "write_deps_file.m"
    }
#line 1959 "write_deps_file.m"
    {
#line 1959 "write_deps_file.m"
      parse_tree__write_deps_file__V_282_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
#line 1959 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 1) = ((MR_Box) (parse_tree__write_deps_file__V_283_283));
#line 1959 "write_deps_file.m"
    }
#line 1958 "write_deps_file.m"
    {
#line 1958 "write_deps_file.m"
      parse_tree__write_deps_file__V_280_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1958 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
#line 1958 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 1) = ((MR_Box) (parse_tree__write_deps_file__V_282_282));
#line 1958 "write_deps_file.m"
    }
#line 1958 "write_deps_file.m"
    {
#line 1958 "write_deps_file.m"
      parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1958 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1958 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_280_280));
#line 1958 "write_deps_file.m"
    }
#line 1958 "write_deps_file.m"
    {
#line 1958 "write_deps_file.m"
      parse_tree__write_deps_file__V_277_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1958 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1958 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 1958 "write_deps_file.m"
    }
#line 1957 "write_deps_file.m"
    {
#line 1957 "write_deps_file.m"
      parse_tree__write_deps_file__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1957 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1957 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 1) = ((MR_Box) (parse_tree__write_deps_file__V_277_277));
#line 1957 "write_deps_file.m"
    }
#line 1957 "write_deps_file.m"
    {
#line 1957 "write_deps_file.m"
      parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1957 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1957 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (parse_tree__write_deps_file__V_275_275));
#line 1957 "write_deps_file.m"
    }
#line 1957 "write_deps_file.m"
    {
#line 1957 "write_deps_file.m"
      parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1957 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1957 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_274_274));
#line 1957 "write_deps_file.m"
    }
#line 1957 "write_deps_file.m"
    {
#line 1957 "write_deps_file.m"
      parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1957 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
#line 1957 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 1957 "write_deps_file.m"
    }
#line 1956 "write_deps_file.m"
    {
#line 1956 "write_deps_file.m"
      parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1956 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_SHARED_LIB),\044A)\n"));
#line 1956 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 1956 "write_deps_file.m"
    }
#line 1955 "write_deps_file.m"
    {
#line 1955 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_268_268);
    }
#line 1974 "write_deps_file.m"
    {
#line 1974 "write_deps_file.m"
      parse_tree__write_deps_file__V_344_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1974 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1974 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1974 "write_deps_file.m"
    }
#line 1974 "write_deps_file.m"
    {
#line 1974 "write_deps_file.m"
      parse_tree__write_deps_file__V_342_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1974 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 0) = ((MR_Box) ((MR_String) "\t\044(RANLIB) \044(ALL_RANLIBFLAGS) "));
#line 1974 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 1) = ((MR_Box) (parse_tree__write_deps_file__V_344_344));
#line 1974 "write_deps_file.m"
    }
#line 1973 "write_deps_file.m"
    {
#line 1973 "write_deps_file.m"
      parse_tree__write_deps_file__V_340_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 1) = ((MR_Box) (parse_tree__write_deps_file__V_342_342));
#line 1973 "write_deps_file.m"
    }
#line 1973 "write_deps_file.m"
    {
#line 1973 "write_deps_file.m"
      parse_tree__write_deps_file__V_339_339 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 1) = ((MR_Box) (parse_tree__write_deps_file__V_340_340));
#line 1973 "write_deps_file.m"
    }
#line 1973 "write_deps_file.m"
    {
#line 1973 "write_deps_file.m"
      parse_tree__write_deps_file__V_337_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 1) = ((MR_Box) (parse_tree__write_deps_file__V_339_339));
#line 1973 "write_deps_file.m"
    }
#line 1973 "write_deps_file.m"
    {
#line 1973 "write_deps_file.m"
      parse_tree__write_deps_file__V_336_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 1) = ((MR_Box) (parse_tree__write_deps_file__V_337_337));
#line 1973 "write_deps_file.m"
    }
#line 1973 "write_deps_file.m"
    {
#line 1973 "write_deps_file.m"
      parse_tree__write_deps_file__V_334_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 1) = ((MR_Box) (parse_tree__write_deps_file__V_336_336));
#line 1973 "write_deps_file.m"
    }
#line 1972 "write_deps_file.m"
    {
#line 1972 "write_deps_file.m"
      parse_tree__write_deps_file__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 0) = ((MR_Box) ((MR_String) " "));
#line 1972 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 1) = ((MR_Box) (parse_tree__write_deps_file__V_334_334));
#line 1972 "write_deps_file.m"
    }
#line 1972 "write_deps_file.m"
    {
#line 1972 "write_deps_file.m"
      parse_tree__write_deps_file__V_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1972 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 1) = ((MR_Box) (parse_tree__write_deps_file__V_332_332));
#line 1972 "write_deps_file.m"
    }
#line 1972 "write_deps_file.m"
    {
#line 1972 "write_deps_file.m"
      parse_tree__write_deps_file__V_329_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 0) = ((MR_Box) ((MR_String) "\t\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)"));
#line 1972 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 1) = ((MR_Box) (parse_tree__write_deps_file__V_331_331));
#line 1972 "write_deps_file.m"
    }
#line 1971 "write_deps_file.m"
    {
#line 1971 "write_deps_file.m"
      parse_tree__write_deps_file__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1971 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1971 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 1) = ((MR_Box) (parse_tree__write_deps_file__V_329_329));
#line 1971 "write_deps_file.m"
    }
#line 1971 "write_deps_file.m"
    {
#line 1971 "write_deps_file.m"
      parse_tree__write_deps_file__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1971 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1971 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 1) = ((MR_Box) (parse_tree__write_deps_file__V_327_327));
#line 1971 "write_deps_file.m"
    }
#line 1971 "write_deps_file.m"
    {
#line 1971 "write_deps_file.m"
      parse_tree__write_deps_file__V_324_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1971 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_324_324, 0) = ((MR_Box) ((MR_String) "\trm -f "));
#line 1971 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_324_324, 1) = ((MR_Box) (parse_tree__write_deps_file__V_326_326));
#line 1971 "write_deps_file.m"
    }
#line 1970 "write_deps_file.m"
    {
#line 1970 "write_deps_file.m"
      parse_tree__write_deps_file__V_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1970 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1970 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 1) = ((MR_Box) (parse_tree__write_deps_file__V_324_324));
#line 1970 "write_deps_file.m"
    }
#line 1970 "write_deps_file.m"
    {
#line 1970 "write_deps_file.m"
      parse_tree__write_deps_file__V_321_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1970 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_321_321, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1970 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_321_321, 1) = ((MR_Box) (parse_tree__write_deps_file__V_322_322));
#line 1970 "write_deps_file.m"
    }
#line 1970 "write_deps_file.m"
    {
#line 1970 "write_deps_file.m"
      parse_tree__write_deps_file__V_319_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1970 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_319_319, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1970 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_319_319, 1) = ((MR_Box) (parse_tree__write_deps_file__V_321_321));
#line 1970 "write_deps_file.m"
    }
#line 1970 "write_deps_file.m"
    {
#line 1970 "write_deps_file.m"
      parse_tree__write_deps_file__V_318_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1970 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_318_318, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1970 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_318_318, 1) = ((MR_Box) (parse_tree__write_deps_file__V_319_319));
#line 1970 "write_deps_file.m"
    }
#line 1970 "write_deps_file.m"
    {
#line 1970 "write_deps_file.m"
      parse_tree__write_deps_file__V_316_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1970 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_316_316, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1970 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_316_316, 1) = ((MR_Box) (parse_tree__write_deps_file__V_318_318));
#line 1970 "write_deps_file.m"
    }
#line 1969 "write_deps_file.m"
    {
#line 1969 "write_deps_file.m"
      parse_tree__write_deps_file__V_314_314 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1969 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_314_314, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1969 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_314_314, 1) = ((MR_Box) (parse_tree__write_deps_file__V_316_316));
#line 1969 "write_deps_file.m"
    }
#line 1969 "write_deps_file.m"
    {
#line 1969 "write_deps_file.m"
      parse_tree__write_deps_file__V_313_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1969 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1969 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 1) = ((MR_Box) (parse_tree__write_deps_file__V_314_314));
#line 1969 "write_deps_file.m"
    }
#line 1969 "write_deps_file.m"
    {
#line 1969 "write_deps_file.m"
      parse_tree__write_deps_file__V_311_311 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1969 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_311_311, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1969 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_311_311, 1) = ((MR_Box) (parse_tree__write_deps_file__V_313_313));
#line 1969 "write_deps_file.m"
    }
#line 1969 "write_deps_file.m"
    {
#line 1969 "write_deps_file.m"
      parse_tree__write_deps_file__V_309_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1969 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_309_309, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1969 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_309_309, 1) = ((MR_Box) (parse_tree__write_deps_file__V_311_311));
#line 1969 "write_deps_file.m"
    }
#line 1968 "write_deps_file.m"
    {
#line 1968 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_309_309);
    }
#line 1977 "write_deps_file.m"
    {
#line 1977 "write_deps_file.m"
      parse_tree__write_deps_file__V_349_349 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".classes)");
    }
#line 1977 "write_deps_file.m"
    {
#line 1977 "write_deps_file.m"
      parse_tree__write_deps_file__ClassFiles_60 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_349_349);
    }
#line 1978 "write_deps_file.m"
    {
#line 1978 "write_deps_file.m"
      parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ClassFiles_60, &parse_tree__write_deps_file__ListClassFiles_61);
    }
#line 1982 "write_deps_file.m"
    {
#line 1982 "write_deps_file.m"
      parse_tree__write_deps_file__V_365_365 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1982 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 0) = ((MR_Box) (parse_tree__write_deps_file__ListClassFiles_61));
#line 1982 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1982 "write_deps_file.m"
    }
#line 1981 "write_deps_file.m"
    {
#line 1981 "write_deps_file.m"
      parse_tree__write_deps_file__V_363_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1981 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 0) = ((MR_Box) ((MR_String) " "));
#line 1981 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 1) = ((MR_Box) (parse_tree__write_deps_file__V_365_365));
#line 1981 "write_deps_file.m"
    }
#line 1981 "write_deps_file.m"
    {
#line 1981 "write_deps_file.m"
      parse_tree__write_deps_file__V_362_362 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1981 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_362_362, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1981 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_362_362, 1) = ((MR_Box) (parse_tree__write_deps_file__V_363_363));
#line 1981 "write_deps_file.m"
    }
#line 1981 "write_deps_file.m"
    {
#line 1981 "write_deps_file.m"
      parse_tree__write_deps_file__V_360_360 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1981 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 0) = ((MR_Box) ((MR_String) "\t\044(JAR) \044(JAR_CREATE_FLAGS) "));
#line 1981 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 1) = ((MR_Box) (parse_tree__write_deps_file__V_362_362));
#line 1981 "write_deps_file.m"
    }
#line 1980 "write_deps_file.m"
    {
#line 1980 "write_deps_file.m"
      parse_tree__write_deps_file__V_358_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 0) = ((MR_Box) ((MR_String) ".classes)\n"));
#line 1980 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 1) = ((MR_Box) (parse_tree__write_deps_file__V_360_360));
#line 1980 "write_deps_file.m"
    }
#line 1980 "write_deps_file.m"
    {
#line 1980 "write_deps_file.m"
      parse_tree__write_deps_file__V_357_357 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1980 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 1) = ((MR_Box) (parse_tree__write_deps_file__V_358_358));
#line 1980 "write_deps_file.m"
    }
#line 1980 "write_deps_file.m"
    {
#line 1980 "write_deps_file.m"
      parse_tree__write_deps_file__V_355_355 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1980 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 1) = ((MR_Box) (parse_tree__write_deps_file__V_357_357));
#line 1980 "write_deps_file.m"
    }
#line 1980 "write_deps_file.m"
    {
#line 1980 "write_deps_file.m"
      parse_tree__write_deps_file__V_353_353 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_353_353, 0) = ((MR_Box) ((MR_String) " : "));
#line 1980 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_353_353, 1) = ((MR_Box) (parse_tree__write_deps_file__V_355_355));
#line 1980 "write_deps_file.m"
    }
#line 1980 "write_deps_file.m"
    {
#line 1980 "write_deps_file.m"
      parse_tree__write_deps_file__V_351_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1980 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 1) = ((MR_Box) (parse_tree__write_deps_file__V_353_353));
#line 1980 "write_deps_file.m"
    }
#line 1979 "write_deps_file.m"
    {
#line 1979 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_351_351);
#line 1979 "write_deps_file.m"
      return;
    }
#line 1760 "write_deps_file.m"
  }
#line 1751 "write_deps_file.m"
}

#line 1693 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
#line 1693 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1693 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1693 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1693 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1693 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12)
#line 1693 "write_deps_file.m"
{
#line 1697 "write_deps_file.m"
  {
#line 1697 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Version_15;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Fullarch_16;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_17;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitFileName_18;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitCFileName_19;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitObjFileName_20;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitPicObjFileName_21;
#line 1697 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Intermod_22;
#line 1697 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TransOpt_23;
#line 1697 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MmcMakeDeps_24;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeOptsVar_25;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeTransOptsVar_26;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_27;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ExeFileName_28;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__JarFileName_29;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__LibFileName_30;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SharedLibFileName_31;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DepFileName_32;
#line 1697 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DvFileName_33;

#line 1698 "write_deps_file.m"
    {
#line 1698 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependencies for module \140");
    }
#line 1700 "write_deps_file.m"
    {
#line 1700 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
#line 1701 "write_deps_file.m"
    {
#line 1701 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
#line 1702 "write_deps_file.m"
    {
#line 1702 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1703 "write_deps_file.m"
    {
#line 1703 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
#line 1705 "write_deps_file.m"
    {
#line 1705 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
#line 1706 "write_deps_file.m"
    {
#line 1706 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1708 "write_deps_file.m"
    {
#line 1708 "write_deps_file.m"
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_15, &parse_tree__write_deps_file__Fullarch_16);
    }
#line 1709 "write_deps_file.m"
    {
#line 1709 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
#line 1711 "write_deps_file.m"
    {
#line 1711 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
#line 1712 "write_deps_file.m"
    {
#line 1712 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n# configured for ");
    }
#line 1713 "write_deps_file.m"
    {
#line 1713 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_16);
    }
#line 1714 "write_deps_file.m"
    {
#line 1714 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
#line 1716 "write_deps_file.m"
    {
#line 1716 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_17);
    }
#line 1718 "write_deps_file.m"
    {
#line 1718 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) ".init", (MR_Integer) 0, &parse_tree__write_deps_file__InitFileName_18);
    }
#line 1720 "write_deps_file.m"
    {
#line 1720 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.c", (MR_Integer) 0, &parse_tree__write_deps_file__InitCFileName_19);
    }
#line 1722 "write_deps_file.m"
    {
#line 1722 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.\044O", (MR_Integer) 0, &parse_tree__write_deps_file__InitObjFileName_20);
    }
#line 1724 "write_deps_file.m"
    {
#line 1724 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.pic_o", (MR_Integer) 0, &parse_tree__write_deps_file__InitPicObjFileName_21);
    }
#line 1727 "write_deps_file.m"
    {
#line 1727 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 326, &parse_tree__write_deps_file__Intermod_22);
    }
#line 1728 "write_deps_file.m"
    {
#line 1728 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 330, &parse_tree__write_deps_file__TransOpt_23);
    }
#line 1729 "write_deps_file.m"
    {
#line 1729 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 116, &parse_tree__write_deps_file__MmcMakeDeps_24);
    }
#line 1732 "write_deps_file.m"
    {
#line 1732 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__InitFileName_18, parse_tree__write_deps_file__InitObjFileName_20, parse_tree__write_deps_file__Intermod_22, parse_tree__write_deps_file__TransOpt_23, parse_tree__write_deps_file__MmcMakeDeps_24, &parse_tree__write_deps_file__MaybeOptsVar_25, &parse_tree__write_deps_file__MaybeTransOptsVar_26, &parse_tree__write_deps_file__MaybeModuleDepsVar_27, &parse_tree__write_deps_file__ExeFileName_28, &parse_tree__write_deps_file__JarFileName_29, &parse_tree__write_deps_file__LibFileName_30, &parse_tree__write_deps_file__SharedLibFileName_31);
    }
#line 1737 "write_deps_file.m"
    {
#line 1737 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__InitCFileName_19, parse_tree__write_deps_file__InitFileName_18, &parse_tree__write_deps_file__DepFileName_32, &parse_tree__write_deps_file__DvFileName_33);
    }
#line 1740 "write_deps_file.m"
    {
#line 1740 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__DepsMap_11, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__MmcMakeDeps_24, parse_tree__write_deps_file__Intermod_22, parse_tree__write_deps_file__TransOpt_23, parse_tree__write_deps_file__MaybeModuleDepsVar_27, parse_tree__write_deps_file__MaybeOptsVar_25, parse_tree__write_deps_file__MaybeTransOptsVar_26);
    }
#line 1743 "write_deps_file.m"
    {
#line 1743 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17);
    }
#line 1745 "write_deps_file.m"
    {
#line 1745 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__ExeFileName_28, parse_tree__write_deps_file__InitCFileName_19, parse_tree__write_deps_file__InitObjFileName_20, parse_tree__write_deps_file__InitPicObjFileName_21, parse_tree__write_deps_file__InitFileName_18, parse_tree__write_deps_file__LibFileName_30, parse_tree__write_deps_file__SharedLibFileName_31, parse_tree__write_deps_file__JarFileName_29, parse_tree__write_deps_file__DepFileName_32, parse_tree__write_deps_file__DvFileName_33);
#line 1745 "write_deps_file.m"
      return;
    }
#line 1697 "write_deps_file.m"
  }
#line 1693 "write_deps_file.m"
}

#line 1631 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0_1(
#line 1631 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1631 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1631 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1631 "write_deps_file.m"
{
#line 1631 "write_deps_file.m"
  {
#line 1631 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1631 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1631 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__3_16;

#line 1631 "write_deps_file.m"
    {
#line 1631 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1631__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv0_HeadVar__3_16);
    }
#line 1631 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1631 "write_deps_file.m"
      {
#line 1631 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__3_16));
#line 1631 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1631 "write_deps_file.m"
      }
#line 1631 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1631 "write_deps_file.m"
  }
#line 1631 "write_deps_file.m"
}

#line 1627 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0(
#line 1627 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_4,
#line 1627 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5)
#line 1627 "write_deps_file.m"
{
#line 1630 "write_deps_file.m"
  {
#line 1630 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1630 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModules_6;
#line 1630 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__P_7;
#line 1630 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModulesList_14;

#line 1631 "write_deps_file.m"
    {
#line 1631 "write_deps_file.m"
      parse_tree__write_deps_file__P_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1631 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[4]));
#line 1631 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 1) = ((MR_Box) (parse_tree__write_deps_file__foreign_modules_2_f_0_1));
#line 1631 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1631 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_5));
#line 1631 "write_deps_file.m"
    }
#line 1639 "write_deps_file.m"
    {
#line 1639 "write_deps_file.m"
      mercury__list__filter_map_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[2], parse_tree__write_deps_file__P_7, parse_tree__write_deps_file__Modules_4, &parse_tree__write_deps_file__ForeignModulesList_14);
    }
#line 1640 "write_deps_file.m"
    {
#line 1640 "write_deps_file.m"
      parse_tree__write_deps_file__ForeignModules_6 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[0], parse_tree__write_deps_file__ForeignModulesList_14);
    }
#line 1630 "write_deps_file.m"
    return parse_tree__write_deps_file__ForeignModules_6;
#line 1630 "write_deps_file.m"
  }
#line 1627 "write_deps_file.m"
}

#line 1607 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
#line 1607 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1607 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_2,
#line 1607 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3)
#line 1607 "write_deps_file.m"
{
#line 1610 "write_deps_file.m"
  {
#line 1610 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 1610 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1610 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1610 "write_deps_file.m"
    else
#line 1611 "write_deps_file.m"
      {
#line 1611 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_20_20;
#line 1611 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1611 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Modules0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1611 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ModulesTail_9;
#line 1611 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ModuleImports_11;
#line 1611 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Errors_14;
#line 1611 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__FatalErrors_15;
#line 1611 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_16_16;
#line 1611 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_17_17;
#line 1613 "write_deps_file.m"
        MR_Box parse_tree__write_deps_file__conv0_V_16_16;
#line 1613 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_10_10;
#line 1614 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file___Items_12;
#line 1614 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file___Specs_13;

#line 1612 "write_deps_file.m"
        {
#line 1612 "write_deps_file.m"
          parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_6, parse_tree__write_deps_file__DepsMap_2, &parse_tree__write_deps_file__ModulesTail_9);
        }
#line 1613 "write_deps_file.m"
        {
#line 1613 "write_deps_file.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_2, ((MR_Box) (parse_tree__write_deps_file__Module_5)), &parse_tree__write_deps_file__conv0_V_16_16);
        }
#line 1613 "write_deps_file.m"
        parse_tree__write_deps_file__V_16_16 = ((MR_Word) parse_tree__write_deps_file__conv0_V_16_16);
#line 1613 "write_deps_file.m"
        parse_tree__write_deps_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_16_16, (MR_Integer) 0)));
#line 1613 "write_deps_file.m"
        parse_tree__write_deps_file__ModuleImports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_16_16, (MR_Integer) 1)));
#line 1614 "write_deps_file.m"
        {
#line 1614 "write_deps_file.m"
          parse_tree__module_imports__module_and_imports_get_results_4_p_0(parse_tree__write_deps_file__ModuleImports_11, &parse_tree__write_deps_file___Items_12, &parse_tree__write_deps_file___Specs_13, &parse_tree__write_deps_file__Errors_14);
        }
#line 1615 "write_deps_file.m"
        {
#line 1615 "write_deps_file.m"
          parse_tree__write_deps_file__V_17_17 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 10531 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1615 "write_deps_file.m"
        {
#line 1615 "write_deps_file.m"
          mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_20_20, parse_tree__write_deps_file__Errors_14, parse_tree__write_deps_file__V_17_17, &parse_tree__write_deps_file__FatalErrors_15);
        }
#line 1616 "write_deps_file.m"
        {
#line 1616 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_20_20, parse_tree__write_deps_file__FatalErrors_15);
        }
#line 1618 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 1617 "write_deps_file.m"
          {
#line 1617 "write_deps_file.m"
            MR_Word base;
#line 1617 "write_deps_file.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1617 "write_deps_file.m"
            *parse_tree__write_deps_file__HeadVar__3_3 = base;
#line 1617 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Module_5));
#line 1617 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__ModulesTail_9));
#line 1617 "write_deps_file.m"
          }
#line 1618 "write_deps_file.m"
        else
#line 1619 "write_deps_file.m"
          *parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__ModulesTail_9;
#line 1611 "write_deps_file.m"
      }
#line 1610 "write_deps_file.m"
  }
#line 1607 "write_deps_file.m"
}

#line 1281 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
#line 1281 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1281 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1281 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
#line 1281 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
#line 1281 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
#line 1281 "write_deps_file.m"
{
#line 1281 "write_deps_file.m"
  {
#line 1281 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1281 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__conv2_HeadVar__3_120;

#line 1281 "write_deps_file.m"
    {
#line 1281 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1281__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv2_HeadVar__3_120);
    }
#line 1281 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__3_120));
#line 1281 "write_deps_file.m"
  }
#line 1281 "write_deps_file.m"
}

#line 1232 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
#line 1232 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1232 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1232 "write_deps_file.m"
{
#line 1232 "write_deps_file.m"
  {
#line 1232 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1232 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 1232 "write_deps_file.m"
    {
#line 1232 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1232__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1232 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1232 "write_deps_file.m"
  }
#line 1232 "write_deps_file.m"
}

#line 1213 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
#line 1213 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1213 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1213 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1213 "write_deps_file.m"
{
#line 1213 "write_deps_file.m"
  {
#line 1213 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1213 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__conv1_FileName_6;

#line 1213 "write_deps_file.m"
    {
#line 1213 "write_deps_file.m"
      parse_tree__write_deps_file__get_source_file_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_FileName_6);
    }
#line 1213 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_FileName_6));
#line 1213 "write_deps_file.m"
  }
#line 1213 "write_deps_file.m"
}

#line 1210 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
#line 1210 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1210 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1210 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1210 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 1210 "write_deps_file.m"
{
#line 1210 "write_deps_file.m"
  {
#line 1210 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1210 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_Result_6;

#line 1210 "write_deps_file.m"
    {
#line 1210 "write_deps_file.m"
      parse_tree__write_deps_file__compare_module_names_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_Result_6);
    }
#line 1210 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_3 = ((MR_Box) (parse_tree__write_deps_file__conv0_Result_6));
#line 1210 "write_deps_file.m"
  }
#line 1210 "write_deps_file.m"
}

#line 1186 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
#line 1186 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1186 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1186 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1186 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1186 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12)
#line 1186 "write_deps_file.m"
{
#line 1190 "write_deps_file.m"
  {
#line 1190 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_485_485;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_492_492;
#line 1190 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
#line 1190 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Version_15;
#line 1190 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Fullarch_16;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules0_17;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules1_18;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_19;
#line 1190 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_20;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFiles0_21;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFiles_22;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModulesWithSubModules_23;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Target_29;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModulesAndExts_30;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModules_31;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Gmake_32;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Basis_34;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignBasis_36;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ParentBasis_38;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs_39;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MakeFileName_40;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignFileNames_46;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HighLevelCode_47;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_69_69;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_199_199;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_201_201;
#line 1190 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_203_203;
#line 1190 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_338_338;
#line 1286 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_125_125;

#line 1191 "write_deps_file.m"
    {
#line 1191 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependency variables for module \140");
    }
#line 1193 "write_deps_file.m"
    {
#line 1193 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
#line 1194 "write_deps_file.m"
    {
#line 1194 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
#line 1195 "write_deps_file.m"
    {
#line 1195 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1196 "write_deps_file.m"
    {
#line 1196 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
#line 1197 "write_deps_file.m"
    {
#line 1197 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
#line 1198 "write_deps_file.m"
    {
#line 1198 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1200 "write_deps_file.m"
    {
#line 1200 "write_deps_file.m"
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_15, &parse_tree__write_deps_file__Fullarch_16);
    }
#line 1201 "write_deps_file.m"
    {
#line 1201 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
#line 1203 "write_deps_file.m"
    {
#line 1203 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
#line 1204 "write_deps_file.m"
    {
#line 1204 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ",\n# configured for ");
    }
#line 1205 "write_deps_file.m"
    {
#line 1205 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_16);
    }
#line 1206 "write_deps_file.m"
    {
#line 1206 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
#line 10839 "parse_tree.write_deps_file.c"
    parse_tree__write_deps_file__TypeCtorInfo_485_485 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1208 "write_deps_file.m"
    {
#line 1208 "write_deps_file.m"
      mercury__map__keys_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_485_485, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules0_17);
    }
#line 1209 "write_deps_file.m"
    {
#line 1209 "write_deps_file.m"
      parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_17, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules1_18);
    }
#line 1210 "write_deps_file.m"
    {
#line 1210 "write_deps_file.m"
      mercury__list__sort_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_485_485, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[6], parse_tree__write_deps_file__Modules1_18, &parse_tree__write_deps_file__Modules_19);
    }
#line 1212 "write_deps_file.m"
    {
#line 1212 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1213 "write_deps_file.m"
    {
#line 1213 "write_deps_file.m"
      parse_tree__write_deps_file__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1213 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_69_69, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[3]));
#line 1213 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_69_69, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_2));
#line 1213 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1213 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_69_69, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
#line 1213 "write_deps_file.m"
    }
#line 10875 "parse_tree.write_deps_file.c"
    parse_tree__write_deps_file__TypeCtorInfo_492_492 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1213 "write_deps_file.m"
    {
#line 1213 "write_deps_file.m"
      mercury__list__map_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_485_485, parse_tree__write_deps_file__TypeCtorInfo_492_492, parse_tree__write_deps_file__V_69_69, parse_tree__write_deps_file__Modules_19, &parse_tree__write_deps_file__SourceFiles0_21);
    }
#line 1214 "write_deps_file.m"
    {
#line 1214 "write_deps_file.m"
      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_492_492, parse_tree__write_deps_file__SourceFiles0_21, &parse_tree__write_deps_file__SourceFiles_22);
    }
#line 1216 "write_deps_file.m"
    {
#line 1216 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1217 "write_deps_file.m"
    {
#line 1217 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ms =");
    }
#line 1218 "write_deps_file.m"
    {
#line 1218 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__SourceFiles_22, (MR_String) ".m", parse_tree__write_deps_file__DepStream_12);
    }
#line 1219 "write_deps_file.m"
    {
#line 1219 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1221 "write_deps_file.m"
    {
#line 1221 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1222 "write_deps_file.m"
    {
#line 1222 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".errs =");
    }
#line 1223 "write_deps_file.m"
    {
#line 1223 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__SourceFiles_22, (MR_String) ".err", parse_tree__write_deps_file__DepStream_12);
    }
#line 1224 "write_deps_file.m"
    {
#line 1224 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1226 "write_deps_file.m"
    {
#line 1226 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1227 "write_deps_file.m"
    {
#line 1227 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mods =");
    }
#line 1228 "write_deps_file.m"
    {
#line 1228 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1229 "write_deps_file.m"
    {
#line 1229 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1232 "write_deps_file.m"
    {
#line 1232 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[2]));
#line 1232 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_3));
#line 1232 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1232 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
#line 1232 "write_deps_file.m"
    }
#line 1232 "write_deps_file.m"
    {
#line 1232 "write_deps_file.m"
      parse_tree__write_deps_file__ModulesWithSubModules_23 = mercury__list__filter_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_485_485, parse_tree__write_deps_file__V_91_91, parse_tree__write_deps_file__Modules_19);
    }
#line 1237 "write_deps_file.m"
    {
#line 1237 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1238 "write_deps_file.m"
    {
#line 1238 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".parent_mods =");
    }
#line 1239 "write_deps_file.m"
    {
#line 1239 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModulesWithSubModules_23, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1241 "write_deps_file.m"
    {
#line 1241 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1243 "write_deps_file.m"
    {
#line 1243 "write_deps_file.m"
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_8, &parse_tree__write_deps_file__Target_29);
    }
#line 1247 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 1))
#line 1246 "write_deps_file.m"
      {
#line 1246 "write_deps_file.m"
        parse_tree__write_deps_file__ForeignModulesAndExts_30 = parse_tree__write_deps_file__foreign_modules_2_f_0(parse_tree__write_deps_file__Modules_19, parse_tree__write_deps_file__DepsMap_11);
      }
#line 1247 "write_deps_file.m"
    else
#line 1253 "write_deps_file.m"
      parse_tree__write_deps_file__ForeignModulesAndExts_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1255 "write_deps_file.m"
    {
#line 1255 "write_deps_file.m"
      parse_tree__write_deps_file__ForeignModules_31 = mercury__assoc_list__keys_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_485_485, parse_tree__write_deps_file__TypeCtorInfo_492_492, parse_tree__write_deps_file__ForeignModulesAndExts_30);
    }
#line 1256 "write_deps_file.m"
    {
#line 1256 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1257 "write_deps_file.m"
    {
#line 1257 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign =");
    }
#line 1258 "write_deps_file.m"
    {
#line 1258 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ForeignModules_31, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1259 "write_deps_file.m"
    {
#line 1259 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
    }
#line 1261 "write_deps_file.m"
    {
#line 1261 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 117, &parse_tree__write_deps_file__Gmake_32);
    }
#line 1272 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Gmake_32 == (MR_Integer) 0))
#line 1273 "write_deps_file.m"
      {
#line 1274 "write_deps_file.m"
        parse_tree__write_deps_file__Basis_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1275 "write_deps_file.m"
        parse_tree__write_deps_file__ForeignBasis_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1276 "write_deps_file.m"
        parse_tree__write_deps_file__ParentBasis_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1273 "write_deps_file.m"
      }
#line 1272 "write_deps_file.m"
    else
#line 1263 "write_deps_file.m"
      {
#line 1263 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModsVarName_33;
#line 1263 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignVarName_35;
#line 1263 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ParentModsVarName_37;
#line 1263 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_111_111;
#line 1263 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_114_114;
#line 1263 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_117_117;

#line 1264 "write_deps_file.m"
        {
#line 1264 "write_deps_file.m"
          mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".mods", &parse_tree__write_deps_file__ModsVarName_33);
        }
#line 1265 "write_deps_file.m"
        {
#line 1265 "write_deps_file.m"
          parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__ModsVarName_33));
#line 1265 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) ((MR_String) ""));
#line 1265 "write_deps_file.m"
        }
#line 1265 "write_deps_file.m"
        {
#line 1265 "write_deps_file.m"
          parse_tree__write_deps_file__Basis_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_34, 0) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 1265 "write_deps_file.m"
        }
#line 1267 "write_deps_file.m"
        {
#line 1267 "write_deps_file.m"
          mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".foreign", &parse_tree__write_deps_file__ForeignVarName_35);
        }
#line 1268 "write_deps_file.m"
        {
#line 1268 "write_deps_file.m"
          parse_tree__write_deps_file__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1268 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_114_114, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignVarName_35));
#line 1268 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_114_114, 1) = ((MR_Box) ((MR_String) ""));
#line 1268 "write_deps_file.m"
        }
#line 1268 "write_deps_file.m"
        {
#line 1268 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignBasis_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignBasis_36, 0) = ((MR_Box) (parse_tree__write_deps_file__V_114_114));
#line 1268 "write_deps_file.m"
        }
#line 1270 "write_deps_file.m"
        {
#line 1270 "write_deps_file.m"
          mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".parent_mods", &parse_tree__write_deps_file__ParentModsVarName_37);
        }
#line 1271 "write_deps_file.m"
        {
#line 1271 "write_deps_file.m"
          parse_tree__write_deps_file__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1271 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_117_117, 0) = ((MR_Box) (parse_tree__write_deps_file__ParentModsVarName_37));
#line 1271 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_117_117, 1) = ((MR_Box) ((MR_String) ""));
#line 1271 "write_deps_file.m"
        }
#line 1271 "write_deps_file.m"
        {
#line 1271 "write_deps_file.m"
          parse_tree__write_deps_file__ParentBasis_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1271 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ParentBasis_38, 0) = ((MR_Box) (parse_tree__write_deps_file__V_117_117));
#line 1271 "write_deps_file.m"
        }
#line 1263 "write_deps_file.m"
      }
#line 1279 "write_deps_file.m"
    {
#line 1279 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(parse_tree__write_deps_file__Modules_19, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__ExtraLinkObjs_39);
    }
#line 1281 "write_deps_file.m"
    {
#line 1281 "write_deps_file.m"
      parse_tree__write_deps_file__MakeFileName_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1281 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[1]));
#line 1281 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_4));
#line 1281 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1281 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_8));
#line 1281 "write_deps_file.m"
    }
#line 1286 "write_deps_file.m"
    {
#line 1286 "write_deps_file.m"
      mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[0], parse_tree__write_deps_file__TypeCtorInfo_492_492, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__MakeFileName_40, parse_tree__write_deps_file__ForeignModulesAndExts_30, &parse_tree__write_deps_file__ForeignFileNames_46, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_125_125);
    }
#line 1290 "write_deps_file.m"
    {
#line 1290 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1291 "write_deps_file.m"
    {
#line 1291 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_cs = ");
    }
#line 1292 "write_deps_file.m"
    {
#line 1292 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__ForeignFileNames_46, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1293 "write_deps_file.m"
    {
#line 1293 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1296 "write_deps_file.m"
    {
#line 1296 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1297 "write_deps_file.m"
    {
#line 1297 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_dlls = ");
    }
#line 1298 "write_deps_file.m"
    {
#line 1298 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ForeignModules_31, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__ForeignBasis_36, parse_tree__write_deps_file__DepStream_12);
    }
#line 1300 "write_deps_file.m"
    {
#line 1300 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1302 "write_deps_file.m"
    {
#line 1302 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1303 "write_deps_file.m"
    {
#line 1303 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs = ");
    }
#line 1304 "write_deps_file.m"
    {
#line 1304 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(cs_subdir)", (MR_String) ".c", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1306 "write_deps_file.m"
    {
#line 1306 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1308 "write_deps_file.m"
    {
#line 1308 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1309 "write_deps_file.m"
    {
#line 1309 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".cs = \044(");
    }
#line 1310 "write_deps_file.m"
    {
#line 1310 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1311 "write_deps_file.m"
    {
#line 1311 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs) ");
    }
#line 1312 "write_deps_file.m"
    {
#line 1312 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ExtraLinkObjs_39, (MR_String) ".c", parse_tree__write_deps_file__DepStream_12);
    }
#line 1314 "write_deps_file.m"
    {
#line 1314 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1316 "write_deps_file.m"
    {
#line 1316 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1317 "write_deps_file.m"
    {
#line 1317 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dlls = ");
    }
#line 1318 "write_deps_file.m"
    {
#line 1318 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1320 "write_deps_file.m"
    {
#line 1320 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1322 "write_deps_file.m"
    {
#line 1322 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1323 "write_deps_file.m"
    {
#line 1323 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os = ");
    }
#line 1324 "write_deps_file.m"
    {
#line 1324 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(os_subdir)", (MR_String) ".\044O", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1326 "write_deps_file.m"
    {
#line 1326 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ExtraLinkObjs_39, (MR_String) ".\044O", parse_tree__write_deps_file__DepStream_12);
    }
#line 1328 "write_deps_file.m"
    {
#line 1328 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1330 "write_deps_file.m"
    {
#line 1330 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1331 "write_deps_file.m"
    {
#line 1331 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os = ");
    }
#line 1332 "write_deps_file.m"
    {
#line 1332 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(os_subdir)", (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1334 "write_deps_file.m"
    {
#line 1334 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ExtraLinkObjs_39, (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__DepStream_12);
    }
#line 1336 "write_deps_file.m"
    {
#line 1336 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1338 "write_deps_file.m"
    {
#line 1338 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1339 "write_deps_file.m"
    {
#line 1339 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".os = \044(");
    }
#line 1340 "write_deps_file.m"
    {
#line 1340 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1341 "write_deps_file.m"
    {
#line 1341 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os)\n");
    }
#line 1343 "write_deps_file.m"
    {
#line 1343 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1344 "write_deps_file.m"
    {
#line 1344 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".pic_os = \044(");
    }
#line 1345 "write_deps_file.m"
    {
#line 1345 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1346 "write_deps_file.m"
    {
#line 1346 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os)\n");
    }
#line 1357 "write_deps_file.m"
    {
#line 1357 "write_deps_file.m"
      parse_tree__write_deps_file__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1357 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 1357 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])));
#line 1357 "write_deps_file.m"
    }
#line 1357 "write_deps_file.m"
    {
#line 1357 "write_deps_file.m"
      parse_tree__write_deps_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1357 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 0) = ((MR_Box) ((MR_String) ".cs_or_ss =\044("));
#line 1357 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 1) = ((MR_Box) (parse_tree__write_deps_file__V_203_203));
#line 1357 "write_deps_file.m"
    }
#line 1357 "write_deps_file.m"
    {
#line 1357 "write_deps_file.m"
      parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1357 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 1357 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__V_201_201));
#line 1357 "write_deps_file.m"
    }
#line 1356 "write_deps_file.m"
    {
#line 1356 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_199_199);
    }
#line 1360 "write_deps_file.m"
    {
#line 1360 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1361 "write_deps_file.m"
    {
#line 1361 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".useds = ");
    }
#line 1362 "write_deps_file.m"
    {
#line 1362 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(useds_subdir)", (MR_String) ".used", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1364 "write_deps_file.m"
    {
#line 1364 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1366 "write_deps_file.m"
    {
#line 1366 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1367 "write_deps_file.m"
    {
#line 1367 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ils = ");
    }
#line 1368 "write_deps_file.m"
    {
#line 1368 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(ils_subdir)", (MR_String) ".il", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1370 "write_deps_file.m"
    {
#line 1370 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1372 "write_deps_file.m"
    {
#line 1372 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1373 "write_deps_file.m"
    {
#line 1373 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".javas = ");
    }
#line 1374 "write_deps_file.m"
    {
#line 1374 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(javas_subdir)", (MR_String) ".java", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1376 "write_deps_file.m"
    {
#line 1376 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1378 "write_deps_file.m"
    {
#line 1378 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1379 "write_deps_file.m"
    {
#line 1379 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".classes = ");
    }
#line 1380 "write_deps_file.m"
    {
#line 1380 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(classes_subdir)", (MR_String) ".class", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1382 "write_deps_file.m"
    {
#line 1382 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) " ");
    }
#line 1390 "write_deps_file.m"
    {
#line 1390 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(wildcard ");
    }
#line 1391 "write_deps_file.m"
    {
#line 1391 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(classes_subdir)", (MR_String) "\\\044\044*.class", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1393 "write_deps_file.m"
    {
#line 1393 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ")\n");
    }
#line 1395 "write_deps_file.m"
    {
#line 1395 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1396 "write_deps_file.m"
    {
#line 1396 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dirs = ");
    }
#line 1397 "write_deps_file.m"
    {
#line 1397 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1399 "write_deps_file.m"
    {
#line 1399 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1401 "write_deps_file.m"
    {
#line 1401 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1402 "write_deps_file.m"
    {
#line 1402 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dir_os = ");
    }
#line 1403 "write_deps_file.m"
    {
#line 1403 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir/*.\044O", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1405 "write_deps_file.m"
    {
#line 1405 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1407 "write_deps_file.m"
    {
#line 1407 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1408 "write_deps_file.m"
    {
#line 1408 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dates = ");
    }
#line 1409 "write_deps_file.m"
    {
#line 1409 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(dates_subdir)", (MR_String) ".date", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1411 "write_deps_file.m"
    {
#line 1411 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1413 "write_deps_file.m"
    {
#line 1413 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1414 "write_deps_file.m"
    {
#line 1414 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date0s = ");
    }
#line 1415 "write_deps_file.m"
    {
#line 1415 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(date0s_subdir)", (MR_String) ".date0", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1417 "write_deps_file.m"
    {
#line 1417 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1419 "write_deps_file.m"
    {
#line 1419 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1420 "write_deps_file.m"
    {
#line 1420 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date3s = ");
    }
#line 1421 "write_deps_file.m"
    {
#line 1421 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(date3s_subdir)", (MR_String) ".date3", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1423 "write_deps_file.m"
    {
#line 1423 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1425 "write_deps_file.m"
    {
#line 1425 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1426 "write_deps_file.m"
    {
#line 1426 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".optdates = ");
    }
#line 1427 "write_deps_file.m"
    {
#line 1427 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(optdates_subdir)", (MR_String) ".optdate", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1429 "write_deps_file.m"
    {
#line 1429 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1431 "write_deps_file.m"
    {
#line 1431 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1432 "write_deps_file.m"
    {
#line 1432 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opt_dates = ");
    }
#line 1433 "write_deps_file.m"
    {
#line 1433 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(trans_opt_dates_subdir)", (MR_String) ".trans_opt_date", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1435 "write_deps_file.m"
    {
#line 1435 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1437 "write_deps_file.m"
    {
#line 1437 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1438 "write_deps_file.m"
    {
#line 1438 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".c_dates = ");
    }
#line 1439 "write_deps_file.m"
    {
#line 1439 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(c_dates_subdir)", (MR_String) ".c_date", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1441 "write_deps_file.m"
    {
#line 1441 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1443 "write_deps_file.m"
    {
#line 1443 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1444 "write_deps_file.m"
    {
#line 1444 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".il_dates = ");
    }
#line 1445 "write_deps_file.m"
    {
#line 1445 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(il_dates_subdir)", (MR_String) ".il_date", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1447 "write_deps_file.m"
    {
#line 1447 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1449 "write_deps_file.m"
    {
#line 1449 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1450 "write_deps_file.m"
    {
#line 1450 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".java_dates = ");
    }
#line 1451 "write_deps_file.m"
    {
#line 1451 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(java_dates_subdir)", (MR_String) ".java_date", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1453 "write_deps_file.m"
    {
#line 1453 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1455 "write_deps_file.m"
    {
#line 1455 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1456 "write_deps_file.m"
    {
#line 1456 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ds = ");
    }
#line 1457 "write_deps_file.m"
    {
#line 1457 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(ds_subdir)", (MR_String) ".d", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1459 "write_deps_file.m"
    {
#line 1459 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1461 "write_deps_file.m"
    {
#line 1461 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1462 "write_deps_file.m"
    {
#line 1462 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".module_deps = ");
    }
#line 1464 "write_deps_file.m"
    {
#line 1464 "write_deps_file.m"
      parse_tree__write_deps_file__V_338_338 = make__make_module_dep_file_extension_0_f_0();
    }
#line 1463 "write_deps_file.m"
    {
#line 1463 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(module_deps_subdir)", parse_tree__write_deps_file__V_338_338, parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1466 "write_deps_file.m"
    {
#line 1466 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1468 "write_deps_file.m"
    {
#line 1468 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1469 "write_deps_file.m"
    {
#line 1469 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mihs = ");
    }
#line 1470 "write_deps_file.m"
    {
#line 1470 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 251, &parse_tree__write_deps_file__HighLevelCode_47);
    }
#line 1488 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HighLevelCode_47 == (MR_Integer) 0))
#line 1490 "write_deps_file.m"
      {
#line 1490 "write_deps_file.m"
      }
#line 1488 "write_deps_file.m"
    else
#line 1479 "write_deps_file.m"
      if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 0))
#line 1474 "write_deps_file.m"
        {
#line 1477 "write_deps_file.m"
          {
#line 1477 "write_deps_file.m"
            parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
          }
#line 1474 "write_deps_file.m"
        }
#line 1479 "write_deps_file.m"
      else
#line 1479 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 2))
#line 1483 "write_deps_file.m"
          {
#line 1483 "write_deps_file.m"
          }
#line 1479 "write_deps_file.m"
        else
#line 1479 "write_deps_file.m"
          if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 4))
#line 1485 "write_deps_file.m"
            {
#line 1485 "write_deps_file.m"
            }
#line 1479 "write_deps_file.m"
          else
#line 1479 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 1))
#line 1482 "write_deps_file.m"
              {
#line 1482 "write_deps_file.m"
              }
#line 1479 "write_deps_file.m"
            else
#line 1484 "write_deps_file.m"
              {
#line 1484 "write_deps_file.m"
              }
#line 1492 "write_deps_file.m"
    {
#line 1492 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1494 "write_deps_file.m"
    {
#line 1494 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1495 "write_deps_file.m"
    {
#line 1495 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mhs = ");
    }
#line 1500 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 0))
#line 1497 "write_deps_file.m"
      {
#line 1498 "write_deps_file.m"
        {
#line 1498 "write_deps_file.m"
          parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
        }
#line 1497 "write_deps_file.m"
      }
#line 1500 "write_deps_file.m"
    else
#line 1500 "write_deps_file.m"
      if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 2))
#line 1502 "write_deps_file.m"
        {
#line 1502 "write_deps_file.m"
        }
#line 1500 "write_deps_file.m"
      else
#line 1500 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 4))
#line 1504 "write_deps_file.m"
          {
#line 1504 "write_deps_file.m"
          }
#line 1500 "write_deps_file.m"
        else
#line 1500 "write_deps_file.m"
          if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 1))
#line 1501 "write_deps_file.m"
            {
#line 1501 "write_deps_file.m"
            }
#line 1500 "write_deps_file.m"
          else
#line 1503 "write_deps_file.m"
            {
#line 1503 "write_deps_file.m"
            }
#line 1507 "write_deps_file.m"
    {
#line 1507 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1515 "write_deps_file.m"
    {
#line 1515 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1516 "write_deps_file.m"
    {
#line 1516 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mihs = ");
    }
#line 1517 "write_deps_file.m"
    {
#line 1517 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1519 "write_deps_file.m"
    {
#line 1519 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1524 "write_deps_file.m"
    {
#line 1524 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1525 "write_deps_file.m"
    {
#line 1525 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mhs = ");
    }
#line 1526 "write_deps_file.m"
    {
#line 1526 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1528 "write_deps_file.m"
    {
#line 1528 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1530 "write_deps_file.m"
    {
#line 1530 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1531 "write_deps_file.m"
    {
#line 1531 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ints = ");
    }
#line 1532 "write_deps_file.m"
    {
#line 1532 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(ints_subdir)", (MR_String) ".int", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1534 "write_deps_file.m"
    {
#line 1534 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1535 "write_deps_file.m"
    {
#line 1535 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(int2s_subdir)", (MR_String) ".int2", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1537 "write_deps_file.m"
    {
#line 1537 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1544 "write_deps_file.m"
    {
#line 1544 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1545 "write_deps_file.m"
    {
#line 1545 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int0s = ");
    }
#line 1546 "write_deps_file.m"
    {
#line 1546 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModulesWithSubModules_23, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__ParentBasis_38, parse_tree__write_deps_file__DepStream_12);
    }
#line 1548 "write_deps_file.m"
    {
#line 1548 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1557 "write_deps_file.m"
    {
#line 1557 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1558 "write_deps_file.m"
    {
#line 1558 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_int0s = ");
    }
#line 1559 "write_deps_file.m"
    {
#line 1559 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1561 "write_deps_file.m"
    {
#line 1561 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1563 "write_deps_file.m"
    {
#line 1563 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1564 "write_deps_file.m"
    {
#line 1564 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int3s = ");
    }
#line 1565 "write_deps_file.m"
    {
#line 1565 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(int3s_subdir)", (MR_String) ".int3", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1567 "write_deps_file.m"
    {
#line 1567 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1569 "write_deps_file.m"
    {
#line 1569 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1570 "write_deps_file.m"
    {
#line 1570 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".opts = ");
    }
#line 1571 "write_deps_file.m"
    {
#line 1571 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(opts_subdir)", (MR_String) ".opt", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1573 "write_deps_file.m"
    {
#line 1573 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1575 "write_deps_file.m"
    {
#line 1575 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1576 "write_deps_file.m"
    {
#line 1576 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opts = ");
    }
#line 1577 "write_deps_file.m"
    {
#line 1577 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(trans_opts_subdir)", (MR_String) ".trans_opt", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1579 "write_deps_file.m"
    {
#line 1579 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1581 "write_deps_file.m"
    {
#line 1581 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1582 "write_deps_file.m"
    {
#line 1582 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".analysiss = ");
    }
#line 1583 "write_deps_file.m"
    {
#line 1583 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(analysiss_subdir)", (MR_String) ".analysis", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1585 "write_deps_file.m"
    {
#line 1585 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1587 "write_deps_file.m"
    {
#line 1587 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1588 "write_deps_file.m"
    {
#line 1588 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".requests = ");
    }
#line 1589 "write_deps_file.m"
    {
#line 1589 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(requests_subdir)", (MR_String) ".request", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1591 "write_deps_file.m"
    {
#line 1591 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1593 "write_deps_file.m"
    {
#line 1593 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1594 "write_deps_file.m"
    {
#line 1594 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".imdgs = ");
    }
#line 1595 "write_deps_file.m"
    {
#line 1595 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(imdgs_subdir)", (MR_String) ".imdg", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1597 "write_deps_file.m"
    {
#line 1597 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1599 "write_deps_file.m"
    {
#line 1599 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1600 "write_deps_file.m"
    {
#line 1600 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".profs = ");
    }
#line 1601 "write_deps_file.m"
    {
#line 1601 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "", (MR_String) ".prof", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1603 "write_deps_file.m"
    {
#line 1603 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
#line 1603 "write_deps_file.m"
      return;
    }
#line 1190 "write_deps_file.m"
  }
#line 1186 "write_deps_file.m"
}

#line 1029 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
#line 1029 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 1029 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 1029 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 1029 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Ext_10)
#line 1029 "write_deps_file.m"
{
#line 1032 "write_deps_file.m"
  {
#line 1032 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1032 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleStr_12;
#line 1032 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Target_13;
#line 1032 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ShorthandTarget_14;

#line 1033 "write_deps_file.m"
    {
#line 1033 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__ModuleName_9, &parse_tree__write_deps_file__ModuleStr_12);
    }
#line 1034 "write_deps_file.m"
    {
#line 1034 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__Ext_10, (MR_Integer) 1, &parse_tree__write_deps_file__Target_13);
    }
#line 1036 "write_deps_file.m"
    {
#line 1036 "write_deps_file.m"
      parse_tree__write_deps_file__ShorthandTarget_14 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleStr_12, parse_tree__write_deps_file__Ext_10);
    }
#line 1037 "write_deps_file.m"
    {
#line 1037 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ".PHONY: ");
    }
#line 1038 "write_deps_file.m"
    {
#line 1038 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
#line 1039 "write_deps_file.m"
    {
#line 1039 "write_deps_file.m"
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
    }
#line 1040 "write_deps_file.m"
    {
#line 1040 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
#line 1041 "write_deps_file.m"
    {
#line 1041 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ": ");
    }
#line 1042 "write_deps_file.m"
    {
#line 1042 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Target_13);
    }
#line 1043 "write_deps_file.m"
    {
#line 1043 "write_deps_file.m"
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
#line 1043 "write_deps_file.m"
      return;
    }
#line 1032 "write_deps_file.m"
  }
#line 1029 "write_deps_file.m"
}

#line 1005 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0_1(
#line 1005 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1005 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1005 "write_deps_file.m"
{
#line 1005 "write_deps_file.m"
  {
#line 1005 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 1005 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1005 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__3_64;

#line 1005 "write_deps_file.m"
    {
#line 1005 "write_deps_file.m"
      parse_tree__write_deps_file__conv0_HeadVar__3_64 = parse_tree__write_deps_file__IntroducedFrom__func__write_foreign_dependency_for_il__1006__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1005 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__3_64));
#line 1005 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 1005 "write_deps_file.m"
  }
#line 1005 "write_deps_file.m"
}

#line 961 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0(
#line 961 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 961 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 961 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 961 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__AllDeps_12,
#line 961 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImports_13,
#line 961 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignLang_14)
#line 961 "write_deps_file.m"
{
#line 1020 "write_deps_file.m"
  {
#line 1020 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1020 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModuleName_16;
#line 1020 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ForeignExt_17;

#line 968 "write_deps_file.m"
    {
#line 968 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(parse_tree__write_deps_file__ModuleName_11, parse_tree__write_deps_file__ForeignLang_14, &parse_tree__write_deps_file__ForeignModuleName_16);
    }
#line 969 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 970 "write_deps_file.m"
      {
#line 970 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(parse_tree__write_deps_file__ForeignLang_14, &parse_tree__write_deps_file__ForeignExt_17);
      }
#line 1020 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 973 "write_deps_file.m"
      {
#line 973 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignModuleNameString_18;
#line 973 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignFileName_19;
#line 973 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IlFileName_20;
#line 973 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DllFileName_21;
#line 973 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignDllFileName_22;
#line 973 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_40_40;
#line 973 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_42_42;
#line 973 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_44_44;
#line 973 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_47_47;
#line 973 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_49_49;
#line 973 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_51_51;

#line 972 "write_deps_file.m"
        {
#line 972 "write_deps_file.m"
          parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ForeignModuleName_16, &parse_tree__write_deps_file__ForeignModuleNameString_18);
        }
#line 974 "write_deps_file.m"
        {
#line 974 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ForeignModuleName_16, parse_tree__write_deps_file__ForeignExt_17, (MR_Integer) 1, &parse_tree__write_deps_file__ForeignFileName_19);
        }
#line 976 "write_deps_file.m"
        {
#line 976 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ModuleName_11, (MR_String) ".il", (MR_Integer) 1, &parse_tree__write_deps_file__IlFileName_20);
        }
#line 978 "write_deps_file.m"
        {
#line 978 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ModuleName_11, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__DllFileName_21);
        }
#line 980 "write_deps_file.m"
        {
#line 980 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ForeignModuleName_16, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__ForeignDllFileName_22);
        }
#line 984 "write_deps_file.m"
        {
#line 984 "write_deps_file.m"
          parse_tree__write_deps_file__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_44_44, 0) = ((MR_Box) (parse_tree__write_deps_file__DllFileName_21));
#line 984 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 984 "write_deps_file.m"
        }
#line 984 "write_deps_file.m"
        {
#line 984 "write_deps_file.m"
          parse_tree__write_deps_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 0) = ((MR_Box) ((MR_String) " : "));
#line 984 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 1) = ((MR_Box) (parse_tree__write_deps_file__V_44_44));
#line 984 "write_deps_file.m"
        }
#line 984 "write_deps_file.m"
        {
#line 984 "write_deps_file.m"
          parse_tree__write_deps_file__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_40_40, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignDllFileName_22));
#line 984 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_40_40, 1) = ((MR_Box) (parse_tree__write_deps_file__V_42_42));
#line 984 "write_deps_file.m"
        }
#line 983 "write_deps_file.m"
        {
#line 983 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__V_40_40);
        }
#line 988 "write_deps_file.m"
        {
#line 988 "write_deps_file.m"
          mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_10);
        }
#line 991 "write_deps_file.m"
        {
#line 991 "write_deps_file.m"
          parse_tree__write_deps_file__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 0) = ((MR_Box) (parse_tree__write_deps_file__IlFileName_20));
#line 991 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107])));
#line 991 "write_deps_file.m"
        }
#line 991 "write_deps_file.m"
        {
#line 991 "write_deps_file.m"
          parse_tree__write_deps_file__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 0) = ((MR_Box) ((MR_String) " : "));
#line 991 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 1) = ((MR_Box) (parse_tree__write_deps_file__V_51_51));
#line 991 "write_deps_file.m"
        }
#line 991 "write_deps_file.m"
        {
#line 991 "write_deps_file.m"
          parse_tree__write_deps_file__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignFileName_19));
#line 991 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 1) = ((MR_Box) (parse_tree__write_deps_file__V_49_49));
#line 991 "write_deps_file.m"
        }
#line 990 "write_deps_file.m"
        {
#line 990 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__V_47_47);
        }
#line 1013 "write_deps_file.m"
        if ((parse_tree__write_deps_file__ForeignLang_14 == (MR_Integer) 0))
#line 1014 "write_deps_file.m"
          {
#line 1014 "write_deps_file.m"
          }
#line 1013 "write_deps_file.m"
        else
#line 1013 "write_deps_file.m"
          if ((parse_tree__write_deps_file__ForeignLang_14 == (MR_Integer) 1))
#line 994 "write_deps_file.m"
            {
#line 994 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__TypeCtorInfo_70_70;
#line 994 "write_deps_file.m"
              MR_String parse_tree__write_deps_file__Prefix_23;
#line 994 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__ForeignDeps_24;
#line 994 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__Deps_26;
#line 994 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_55_55;
#line 994 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_58_58;
#line 994 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_62_62;
#line 994 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_65_65;

#line 999 "write_deps_file.m"
              {
#line 999 "write_deps_file.m"
                parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignModuleNameString_18));
#line 999 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[108])));
#line 999 "write_deps_file.m"
              }
#line 999 "write_deps_file.m"
              {
#line 999 "write_deps_file.m"
                parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "CSHARP_ASSEMBLY_REFS-"));
#line 999 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 999 "write_deps_file.m"
              }
#line 998 "write_deps_file.m"
              {
#line 998 "write_deps_file.m"
                mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__V_55_55);
              }
#line 1000 "write_deps_file.m"
              {
#line 1000 "write_deps_file.m"
                parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__ModuleName_11);
              }
#line 1002 "write_deps_file.m"
              if (parse_tree__write_deps_file__succeeded)
#line 1001 "write_deps_file.m"
                parse_tree__write_deps_file__Prefix_23 = (MR_String) "/addmodule:";
#line 1002 "write_deps_file.m"
              else
#line 1003 "write_deps_file.m"
                parse_tree__write_deps_file__Prefix_23 = (MR_String) "/r:";
#line 12458 "parse_tree.write_deps_file.c"
              parse_tree__write_deps_file__TypeCtorInfo_70_70 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1005 "write_deps_file.m"
              {
#line 1005 "write_deps_file.m"
                parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1005 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
#line 1005 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0_1));
#line 1005 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1005 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_11));
#line 1005 "write_deps_file.m"
              }
#line 1005 "write_deps_file.m"
              {
#line 1005 "write_deps_file.m"
                parse_tree__write_deps_file__ForeignDeps_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__TypeCtorInfo_70_70, parse_tree__write_deps_file__V_62_62, parse_tree__write_deps_file__ForeignImports_13);
              }
#line 1009 "write_deps_file.m"
              {
#line 1009 "write_deps_file.m"
                parse_tree__write_deps_file__Deps_26 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_70_70, parse_tree__write_deps_file__AllDeps_12, parse_tree__write_deps_file__ForeignDeps_24);
              }
#line 1011 "write_deps_file.m"
              {
#line 1011 "write_deps_file.m"
                parse_tree__write_deps_file__V_65_65 = parse_tree__write_deps_file__referenced_dlls_2_f_0(parse_tree__write_deps_file__ModuleName_11, parse_tree__write_deps_file__Deps_26);
              }
#line 1010 "write_deps_file.m"
              {
#line 1010 "write_deps_file.m"
                parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__V_65_65, parse_tree__write_deps_file__Prefix_23, parse_tree__write_deps_file__DepStream_10);
              }
#line 1012 "write_deps_file.m"
              {
#line 1012 "write_deps_file.m"
                mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_10);
#line 1012 "write_deps_file.m"
                return;
              }
#line 994 "write_deps_file.m"
            }
#line 1013 "write_deps_file.m"
          else
#line 1013 "write_deps_file.m"
            if ((parse_tree__write_deps_file__ForeignLang_14 == (MR_Integer) 4))
#line 1017 "write_deps_file.m"
              {
#line 1017 "write_deps_file.m"
              }
#line 1013 "write_deps_file.m"
            else
#line 1013 "write_deps_file.m"
              if ((parse_tree__write_deps_file__ForeignLang_14 == (MR_Integer) 3))
#line 1016 "write_deps_file.m"
                {
#line 1016 "write_deps_file.m"
                }
#line 1013 "write_deps_file.m"
              else
#line 1015 "write_deps_file.m"
                {
#line 1015 "write_deps_file.m"
                }
#line 973 "write_deps_file.m"
      }
#line 1020 "write_deps_file.m"
    else
#line 1017 "write_deps_file.m"
      {
#line 1017 "write_deps_file.m"
      }
#line 1020 "write_deps_file.m"
  }
#line 961 "write_deps_file.m"
}

#line 935 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 935 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_2,
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_3)
#line 935 "write_deps_file.m"
{
#line 938 "write_deps_file.m"
  while (MR_TRUE)
#line 938 "write_deps_file.m"
    {
#line 938 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 938 "write_deps_file.m"
      {
#line 938 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 938 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 938 "write_deps_file.m"
          {
#line 938 "write_deps_file.m"
          }
#line 938 "write_deps_file.m"
        else
#line 939 "write_deps_file.m"
          {
#line 939 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 939 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FileNames_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));

#line 940 "write_deps_file.m"
            {
#line 940 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_3, (MR_String) " \\\n\t");
            }
#line 941 "write_deps_file.m"
            {
#line 941 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_3, parse_tree__write_deps_file__FileName_11);
            }
#line 942 "write_deps_file.m"
            {
#line 942 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_3, parse_tree__write_deps_file__Suffix_2);
            }
#line 943 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 943 "write_deps_file.m"
            {
#line 943 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__1__tmp_copy_1 = parse_tree__write_deps_file__FileNames_12;

#line 943 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__1_1 = parse_tree__write_deps_file__HeadVar__1__tmp_copy_1;
#line 943 "write_deps_file.m"
            }
#line 943 "write_deps_file.m"
            continue;
#line 939 "write_deps_file.m"
          }
#line 938 "write_deps_file.m"
      }
#line 938 "write_deps_file.m"
      break;
#line 938 "write_deps_file.m"
    }
#line 935 "write_deps_file.m"
}

#line 921 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
#line 921 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 921 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 921 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 921 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4)
#line 921 "write_deps_file.m"
{
#line 925 "write_deps_file.m"
  while (MR_TRUE)
#line 925 "write_deps_file.m"
    {
#line 925 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 925 "write_deps_file.m"
      {
#line 925 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 925 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 925 "write_deps_file.m"
          {
#line 925 "write_deps_file.m"
          }
#line 925 "write_deps_file.m"
        else
#line 927 "write_deps_file.m"
          {
#line 927 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ExtraLink_14;
#line 927 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_15;
#line 927 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ExtraLinks_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 927 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_20;
#line 927 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));

#line 926 "write_deps_file.m"
            parse_tree__write_deps_file__ExtraLink_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_23_23, (MR_Integer) 0)));
#line 926 "write_deps_file.m"
            parse_tree__write_deps_file__Module_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_23_23, (MR_Integer) 1)));
#line 928 "write_deps_file.m"
            {
#line 928 "write_deps_file.m"
              parse_tree__file_names__extra_link_obj_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_15, parse_tree__write_deps_file__ExtraLink_14, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_20);
            }
#line 930 "write_deps_file.m"
            {
#line 930 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, (MR_String) " \\\n\t");
            }
#line 931 "write_deps_file.m"
            {
#line 931 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, parse_tree__write_deps_file__FileName_20);
            }
#line 932 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 932 "write_deps_file.m"
            {
#line 932 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__ExtraLinks_16;

#line 932 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 932 "write_deps_file.m"
            }
#line 932 "write_deps_file.m"
            continue;
#line 927 "write_deps_file.m"
          }
#line 925 "write_deps_file.m"
      }
#line 925 "write_deps_file.m"
      break;
#line 925 "write_deps_file.m"
    }
#line 921 "write_deps_file.m"
}

#line 907 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
#line 907 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 907 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_2,
#line 907 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 907 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_4,
#line 907 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_5)
#line 907 "write_deps_file.m"
{
#line 911 "write_deps_file.m"
  while (MR_TRUE)
#line 911 "write_deps_file.m"
    {
#line 911 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 911 "write_deps_file.m"
      {
#line 911 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 911 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 911 "write_deps_file.m"
          {
#line 911 "write_deps_file.m"
          }
#line 911 "write_deps_file.m"
        else
#line 913 "write_deps_file.m"
          {
#line 913 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FactTable_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
#line 913 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FactTables_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));
#line 913 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_22;

#line 914 "write_deps_file.m"
            {
#line 914 "write_deps_file.m"
              parse_tree__file_names__fact_table_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_2, parse_tree__write_deps_file__FactTable_17, parse_tree__write_deps_file__Suffix_4, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_22);
            }
#line 916 "write_deps_file.m"
            {
#line 916 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_5, (MR_String) " \\\n\t");
            }
#line 917 "write_deps_file.m"
            {
#line 917 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_5, parse_tree__write_deps_file__FileName_22);
            }
#line 918 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 918 "write_deps_file.m"
            {
#line 918 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__3__tmp_copy_3 = parse_tree__write_deps_file__FactTables_18;

#line 918 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__HeadVar__3__tmp_copy_3;
#line 918 "write_deps_file.m"
            }
#line 918 "write_deps_file.m"
            continue;
#line 913 "write_deps_file.m"
          }
#line 911 "write_deps_file.m"
      }
#line 911 "write_deps_file.m"
      break;
#line 911 "write_deps_file.m"
    }
#line 907 "write_deps_file.m"
}

#line 897 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(
#line 897 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 897 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 897 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFile_8)
#line 897 "write_deps_file.m"
{
#line 901 "write_deps_file.m"
  {
#line 901 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 901 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__IncludeFileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_8, (MR_Integer) 1)));
#line 901 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__IncludePath_12;
#line 902 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_8, (MR_Integer) 0)));

#line 903 "write_deps_file.m"
    {
#line 903 "write_deps_file.m"
      parse_tree__file_names__make_include_file_path_3_p_0(parse_tree__write_deps_file__SourceFileName_7, parse_tree__write_deps_file__IncludeFileName_11, &parse_tree__write_deps_file__IncludePath_12);
    }
#line 904 "write_deps_file.m"
    {
#line 904 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_6, (MR_String) " \\\n\t");
    }
#line 905 "write_deps_file.m"
    {
#line 905 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_6, parse_tree__write_deps_file__IncludePath_12);
#line 905 "write_deps_file.m"
      return;
    }
#line 901 "write_deps_file.m"
  }
#line 897 "write_deps_file.m"
}

#line 894 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1(
#line 894 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 894 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 894 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 894 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 894 "write_deps_file.m"
{
#line 894 "write_deps_file.m"
  {
#line 894 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 894 "write_deps_file.m"
    {
#line 894 "write_deps_file.m"
      parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 894 "write_deps_file.m"
      return;
    }
#line 894 "write_deps_file.m"
  }
#line 894 "write_deps_file.m"
}

#line 888 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(
#line 888 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 888 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 888 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFiles_8)
#line 888 "write_deps_file.m"
{
#line 892 "write_deps_file.m"
  {
#line 892 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 892 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_12_12;
#line 893 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_11;

#line 894 "write_deps_file.m"
    {
#line 894 "write_deps_file.m"
      parse_tree__write_deps_file__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 894 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[0]));
#line 894 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 1) = ((MR_Box) (parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1));
#line 894 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 894 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 3) = ((MR_Box) (parse_tree__write_deps_file__DepStream_6));
#line 894 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 4) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_7));
#line 894 "write_deps_file.m"
    }
#line 893 "write_deps_file.m"
    {
#line 893 "write_deps_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_12_12, parse_tree__write_deps_file__IncludeFiles_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_11);
    }
#line 892 "write_deps_file.m"
  }
#line 888 "write_deps_file.m"
}

#line 869 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(
#line 869 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 869 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 869 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__3_3,
#line 869 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4)
#line 869 "write_deps_file.m"
{
#line 872 "write_deps_file.m"
  while (MR_TRUE)
#line 872 "write_deps_file.m"
    {
#line 872 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 872 "write_deps_file.m"
      {
#line 872 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 872 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "write_deps_file.m"
          {
#line 872 "write_deps_file.m"
          }
#line 872 "write_deps_file.m"
        else
#line 874 "write_deps_file.m"
          {
#line 874 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));
#line 874 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 874 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_30;

#line 882 "write_deps_file.m"
            {
#line 882 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__Module_14, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__FileName_30);
            }
#line 884 "write_deps_file.m"
            {
#line 884 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__4_4, (MR_String) " \\\n\t");
            }
#line 885 "write_deps_file.m"
            {
#line 885 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__HeadVar__3_3);
            }
#line 886 "write_deps_file.m"
            {
#line 886 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__FileName_30);
            }
#line 876 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 876 "write_deps_file.m"
            {
#line 876 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__Modules_15;

#line 876 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 876 "write_deps_file.m"
            }
#line 876 "write_deps_file.m"
            continue;
#line 874 "write_deps_file.m"
          }
#line 872 "write_deps_file.m"
      }
#line 872 "write_deps_file.m"
      break;
#line 872 "write_deps_file.m"
    }
#line 869 "write_deps_file.m"
}

#line 862 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2)
#line 862 "write_deps_file.m"
{
#line 865 "write_deps_file.m"
  {
#line 865 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 865 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 865 "write_deps_file.m"
      {
#line 865 "write_deps_file.m"
      }
#line 865 "write_deps_file.m"
    else
#line 866 "write_deps_file.m"
      {
#line 867 "write_deps_file.m"
        {
#line 867 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__2_2, (MR_String) " ");
#line 867 "write_deps_file.m"
          return;
        }
#line 866 "write_deps_file.m"
      }
#line 865 "write_deps_file.m"
  }
#line 862 "write_deps_file.m"
}

#line 840 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_10,
#line 840 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Prefix_11,
#line 840 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_12,
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Basis_13,
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_14)
#line 840 "write_deps_file.m"
{
#line 847 "write_deps_file.m"
  {
#line 847 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 847 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Basis_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 859 "write_deps_file.m"
      {
#line 859 "write_deps_file.m"
        parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__Modules_10, parse_tree__write_deps_file__Suffix_12, parse_tree__write_deps_file__DepStream_14);
#line 859 "write_deps_file.m"
        return;
      }
#line 847 "write_deps_file.m"
    else
#line 847 "write_deps_file.m"
      {
#line 847 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__VarName_16;
#line 847 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OldSuffix_17;
#line 847 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_13, (MR_Integer) 0)));

#line 847 "write_deps_file.m"
        parse_tree__write_deps_file__VarName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_21_21, (MR_Integer) 0)));
#line 847 "write_deps_file.m"
        parse_tree__write_deps_file__OldSuffix_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_21_21, (MR_Integer) 1)));
#line 848 "write_deps_file.m"
        {
#line 848 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) "\044(");
        }
#line 849 "write_deps_file.m"
        {
#line 849 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__VarName_16);
        }
#line 850 "write_deps_file.m"
        {
#line 850 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) ":%");
        }
#line 851 "write_deps_file.m"
        {
#line 851 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__OldSuffix_17);
        }
#line 852 "write_deps_file.m"
        {
#line 852 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) "=");
        }
#line 853 "write_deps_file.m"
        {
#line 853 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__Prefix_11);
        }
#line 854 "write_deps_file.m"
        {
#line 854 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) "%");
        }
#line 855 "write_deps_file.m"
        {
#line 855 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__Suffix_12);
        }
#line 856 "write_deps_file.m"
        {
#line 856 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) ")");
#line 856 "write_deps_file.m"
          return;
        }
#line 847 "write_deps_file.m"
      }
#line 847 "write_deps_file.m"
  }
#line 840 "write_deps_file.m"
}

#line 829 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
#line 829 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 829 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 829 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 829 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4)
#line 829 "write_deps_file.m"
{
#line 832 "write_deps_file.m"
  while (MR_TRUE)
#line 832 "write_deps_file.m"
    {
#line 832 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 832 "write_deps_file.m"
      {
#line 832 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 832 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 832 "write_deps_file.m"
          {
#line 832 "write_deps_file.m"
          }
#line 832 "write_deps_file.m"
        else
#line 833 "write_deps_file.m"
          {
#line 833 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));
#line 833 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 833 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_19;

#line 834 "write_deps_file.m"
            {
#line 834 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_14, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_19);
            }
#line 836 "write_deps_file.m"
            {
#line 836 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, (MR_String) " \\\n\t");
            }
#line 837 "write_deps_file.m"
            {
#line 837 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, parse_tree__write_deps_file__FileName_19);
            }
#line 838 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 838 "write_deps_file.m"
            {
#line 838 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__Modules_15;

#line 838 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 838 "write_deps_file.m"
            }
#line 838 "write_deps_file.m"
            continue;
#line 833 "write_deps_file.m"
          }
#line 832 "write_deps_file.m"
      }
#line 832 "write_deps_file.m"
      break;
#line 832 "write_deps_file.m"
    }
#line 829 "write_deps_file.m"
}

#line 818 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0_1(
#line 818 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 818 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 818 "write_deps_file.m"
{
#line 818 "write_deps_file.m"
  {
#line 818 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 818 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 818 "write_deps_file.m"
    {
#line 818 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__submodules__818__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 818 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 818 "write_deps_file.m"
  }
#line 818 "write_deps_file.m"
}

#line 811 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0(
#line 811 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 811 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules0_5)
#line 811 "write_deps_file.m"
{
#line 823 "write_deps_file.m"
  {
#line 823 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__Module_4)) == (MR_mktag((MR_Integer) 0)));
#line 823 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_6;
#line 823 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str_7;

#line 815 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 815 "write_deps_file.m"
      {
#line 815 "write_deps_file.m"
        parse_tree__write_deps_file__Str_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_4, (MR_Integer) 0)));
#line 816 "write_deps_file.m"
        {
#line 816 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__Module_4);
        }
#line 816 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 815 "write_deps_file.m"
      }
#line 823 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 821 "write_deps_file.m"
      {
#line 821 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__P_8;

#line 818 "write_deps_file.m"
        {
#line 818 "write_deps_file.m"
          parse_tree__write_deps_file__P_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 818 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1]));
#line 818 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 1) = ((MR_Box) (parse_tree__write_deps_file__submodules_2_f_0_1));
#line 818 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 818 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 3) = ((MR_Box) (parse_tree__write_deps_file__Module_4));
#line 818 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 4) = ((MR_Box) (parse_tree__write_deps_file__Str_7));
#line 818 "write_deps_file.m"
        }
#line 822 "write_deps_file.m"
        {
#line 822 "write_deps_file.m"
          mercury__list__filter_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__P_8, parse_tree__write_deps_file__Modules0_5, &parse_tree__write_deps_file__Modules_6);
        }
#line 821 "write_deps_file.m"
      }
#line 823 "write_deps_file.m"
    else
#line 824 "write_deps_file.m"
      parse_tree__write_deps_file__Modules_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 823 "write_deps_file.m"
    return parse_tree__write_deps_file__Modules_6;
#line 823 "write_deps_file.m"
  }
#line 811 "write_deps_file.m"
}

#line 99 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__get_opt_deps_8_p_0(
#line 99 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 99 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 99 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 99 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_4,
#line 99 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_5,
#line 99 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6)
#line 99 "write_deps_file.m"
{
#line 2483 "write_deps_file.m"
  {
#line 2483 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 2483 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2483 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2483 "write_deps_file.m"
    else
#line 2485 "write_deps_file.m"
      {
#line 2485 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Dep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
#line 2485 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Deps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));
#line 2485 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;

#line 2486 "write_deps_file.m"
        {
#line 2486 "write_deps_file.m"
          parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__BuildOptFiles_2, parse_tree__write_deps_file__Deps_19, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__Suffix_5, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35);
        }
#line 13351 "parse_tree.write_deps_file.c"
        if ((parse_tree__write_deps_file__BuildOptFiles_2 == (MR_Integer) 0))
#line 13353 "parse_tree.write_deps_file.c"
          {
#line 13355 "parse_tree.write_deps_file.c"
            MR_String parse_tree__write_deps_file__OptName_28;
#line 13357 "parse_tree.write_deps_file.c"
            MR_Word parse_tree__write_deps_file__Result2_29;

#line 2507 "write_deps_file.m"
            {
#line 2507 "write_deps_file.m"
              parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, parse_tree__write_deps_file__Suffix_5, &parse_tree__write_deps_file__OptName_28);
            }
#line 2508 "write_deps_file.m"
            {
#line 2508 "write_deps_file.m"
              libs__file_util__search_for_file_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_28, &parse_tree__write_deps_file__Result2_29);
            }
#line 2512 "write_deps_file.m"
            if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_29)) == (MR_mktag((MR_Integer) 1))))
#line 2513 "write_deps_file.m"
              *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
#line 2512 "write_deps_file.m"
            else
#line 2511 "write_deps_file.m"
              {
#line 2511 "write_deps_file.m"
                MR_Word base;
#line 2511 "write_deps_file.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2511 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2511 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2511 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2511 "write_deps_file.m"
              }
#line 13390 "parse_tree.write_deps_file.c"
          }
#line 13392 "parse_tree.write_deps_file.c"
        else
#line 13394 "parse_tree.write_deps_file.c"
          {
#line 13396 "parse_tree.write_deps_file.c"
            MR_Word parse_tree__write_deps_file__Result1_24;

#line 2490 "write_deps_file.m"
            {
#line 2490 "write_deps_file.m"
              parse_tree__prog_io_find__search_for_module_source_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__Result1_24);
            }
#line 13404 "parse_tree.write_deps_file.c"
            if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_24)) == (MR_mktag((MR_Integer) 1))))
#line 13406 "parse_tree.write_deps_file.c"
              {
#line 13408 "parse_tree.write_deps_file.c"
                MR_String parse_tree__write_deps_file__OptName_45;
#line 13410 "parse_tree.write_deps_file.c"
                MR_Word parse_tree__write_deps_file__Result2_46;

#line 2507 "write_deps_file.m"
                {
#line 2507 "write_deps_file.m"
                  parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, parse_tree__write_deps_file__Suffix_5, &parse_tree__write_deps_file__OptName_45);
                }
#line 2508 "write_deps_file.m"
                {
#line 2508 "write_deps_file.m"
                  libs__file_util__search_for_file_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_45, &parse_tree__write_deps_file__Result2_46);
                }
#line 2512 "write_deps_file.m"
                if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_46)) == (MR_mktag((MR_Integer) 1))))
#line 2513 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
#line 2512 "write_deps_file.m"
                else
#line 2511 "write_deps_file.m"
                  {
#line 2511 "write_deps_file.m"
                    MR_Word base;
#line 2511 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2511 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2511 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2511 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2511 "write_deps_file.m"
                  }
#line 13443 "parse_tree.write_deps_file.c"
              }
#line 13445 "parse_tree.write_deps_file.c"
            else
#line 13447 "parse_tree.write_deps_file.c"
              {
#line 2494 "write_deps_file.m"
                {
#line 2494 "write_deps_file.m"
                  MR_Word base;
#line 2494 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2494 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2494 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2494 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2494 "write_deps_file.m"
                }
#line 2496 "write_deps_file.m"
                {
#line 2496 "write_deps_file.m"
                  mercury__io__seen_2_p_0();
#line 2496 "write_deps_file.m"
                  return;
                }
#line 13470 "parse_tree.write_deps_file.c"
              }
#line 13472 "parse_tree.write_deps_file.c"
          }
#line 2485 "write_deps_file.m"
      }
#line 2483 "write_deps_file.m"
  }
#line 99 "write_deps_file.m"
}

#line 2405 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0_1(
#line 2405 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2405 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 2405 "write_deps_file.m"
{
#line 2405 "write_deps_file.m"
  {
#line 2405 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 2405 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 2405 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__2_17;

#line 2405 "write_deps_file.m"
    {
#line 2405 "write_deps_file.m"
      parse_tree__write_deps_file__conv0_HeadVar__2_17 = parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2405__1_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 2405 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__2_17));
#line 2405 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 2405 "write_deps_file.m"
  }
#line 2405 "write_deps_file.m"
}

#line 88 "write_deps_file.m"
MR_Word MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0(
#line 88 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 88 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepModules0_5)
#line 88 "write_deps_file.m"
{
#line 2394 "write_deps_file.m"
  {
#line 2394 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2394 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_6;
#line 2394 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepModules_7;

#line 2395 "write_deps_file.m"
    {
#line 2395 "write_deps_file.m"
      parse_tree__write_deps_file__DepModules_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2395 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepModules_7, 0) = ((MR_Box) (parse_tree__write_deps_file__Module_4));
#line 2395 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepModules_7, 1) = ((MR_Box) (parse_tree__write_deps_file__DepModules0_5));
#line 2395 "write_deps_file.m"
    }
#line 2399 "write_deps_file.m"
    {
#line 2399 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__Module_4);
    }
#line 2404 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2401 "write_deps_file.m"
      {
#line 2401 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_10_10;
#line 2401 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_13_13;

#line 2403 "write_deps_file.m"
        {
#line 2403 "write_deps_file.m"
          parse_tree__write_deps_file__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2403 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_13_13, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[1]));
#line 2403 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_13_13, 1) = ((MR_Box) (parse_tree__write_deps_file__DepModules_7));
#line 2403 "write_deps_file.m"
        }
#line 2402 "write_deps_file.m"
        {
#line 2402 "write_deps_file.m"
          parse_tree__write_deps_file__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2402 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_10_10, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[0]));
#line 2402 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_10_10, 1) = ((MR_Box) (parse_tree__write_deps_file__V_13_13));
#line 2402 "write_deps_file.m"
        }
#line 2401 "write_deps_file.m"
        {
#line 2401 "write_deps_file.m"
          parse_tree__write_deps_file__Modules_6 = mercury__list__remove_dups_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__V_10_10);
        }
#line 2401 "write_deps_file.m"
      }
#line 2404 "write_deps_file.m"
    else
#line 2412 "write_deps_file.m"
      {
#line 2412 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_23_23 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2412 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_20_20;

#line 2413 "write_deps_file.m"
        {
#line 2413 "write_deps_file.m"
          parse_tree__write_deps_file__V_20_20 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__TypeCtorInfo_23_23, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[5], parse_tree__write_deps_file__DepModules_7);
        }
#line 2413 "write_deps_file.m"
        {
#line 2413 "write_deps_file.m"
          parse_tree__write_deps_file__Modules_6 = mercury__list__remove_dups_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__V_20_20);
        }
#line 2412 "write_deps_file.m"
      }
#line 2394 "write_deps_file.m"
    return parse_tree__write_deps_file__Modules_6;
#line 2394 "write_deps_file.m"
  }
#line 88 "write_deps_file.m"
}

#line 2369 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
#line 2369 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2369 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2369 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2369 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2369 "write_deps_file.m"
{
#line 2369 "write_deps_file.m"
  {
#line 2369 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2369 "write_deps_file.m"
    {
#line 2369 "write_deps_file.m"
      parse_tree__write_deps_file__write_module_scc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2369 "write_deps_file.m"
      return;
    }
#line 2369 "write_deps_file.m"
  }
#line 2369 "write_deps_file.m"
}

#line 75 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0(
#line 75 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_6,
#line 75 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_7,
#line 75 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsOrdering_8)
#line 75 "write_deps_file.m"
{
#line 2355 "write_deps_file.m"
  {
#line 2355 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2355 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Order_10;
#line 2355 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_11;

#line 2356 "write_deps_file.m"
    {
#line 2356 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 93, &parse_tree__write_deps_file__Order_10);
    }
#line 2357 "write_deps_file.m"
    {
#line 2357 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_11);
    }
#line 2381 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Order_10 == (MR_Integer) 0))
#line 2382 "write_deps_file.m"
      {
#line 2382 "write_deps_file.m"
      }
#line 2381 "write_deps_file.m"
    else
#line 2359 "write_deps_file.m"
      {
#line 2359 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OrdFileName_12;
#line 2359 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__OrdResult_13;

#line 2360 "write_deps_file.m"
        {
#line 2360 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_6, parse_tree__write_deps_file__Module_7, (MR_String) ".order", (MR_Integer) 0, &parse_tree__write_deps_file__OrdFileName_12);
        }
#line 2362 "write_deps_file.m"
        {
#line 2362 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) "% Creating module order file \140");
        }
#line 2363 "write_deps_file.m"
        {
#line 2363 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, parse_tree__write_deps_file__OrdFileName_12);
        }
#line 2364 "write_deps_file.m"
        {
#line 2364 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) "\'...");
        }
#line 2365 "write_deps_file.m"
        {
#line 2365 "write_deps_file.m"
          mercury__io__open_output_4_p_0(parse_tree__write_deps_file__OrdFileName_12, &parse_tree__write_deps_file__OrdResult_13);
        }
#line 2372 "write_deps_file.m"
        if (((MR_tag((MR_Word) parse_tree__write_deps_file__OrdResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 2373 "write_deps_file.m"
          {
#line 2373 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IOError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__OrdResult_13, (MR_Integer) 0)));
#line 2373 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__IOErrorMessage_16;
#line 2373 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__OrdMessage_17;
#line 2373 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_34_34;
#line 2373 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_36_36;
#line 2373 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_37_37;
#line 2373 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_39_39;

#line 2374 "write_deps_file.m"
            {
#line 2374 "write_deps_file.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) " failed.\n");
            }
#line 2375 "write_deps_file.m"
            {
#line 2375 "write_deps_file.m"
              libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_11);
            }
#line 2376 "write_deps_file.m"
            {
#line 2376 "write_deps_file.m"
              mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_15, &parse_tree__write_deps_file__IOErrorMessage_16);
            }
#line 2378 "write_deps_file.m"
            {
#line 2378 "write_deps_file.m"
              parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2378 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_16));
#line 2378 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2378 "write_deps_file.m"
            }
#line 2378 "write_deps_file.m"
            {
#line 2378 "write_deps_file.m"
              parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2378 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 2378 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 2378 "write_deps_file.m"
            }
#line 2377 "write_deps_file.m"
            {
#line 2377 "write_deps_file.m"
              parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2377 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__OrdFileName_12));
#line 2377 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 2377 "write_deps_file.m"
            }
#line 2377 "write_deps_file.m"
            {
#line 2377 "write_deps_file.m"
              parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2377 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 2377 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 2377 "write_deps_file.m"
            }
#line 2377 "write_deps_file.m"
            {
#line 2377 "write_deps_file.m"
              mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__OrdMessage_17);
            }
#line 2379 "write_deps_file.m"
            {
#line 2379 "write_deps_file.m"
              libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__OrdMessage_17);
#line 2379 "write_deps_file.m"
              return;
            }
#line 2373 "write_deps_file.m"
          }
#line 2372 "write_deps_file.m"
        else
#line 2367 "write_deps_file.m"
          {
#line 2367 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__OrdStream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OrdResult_13, (MR_Integer) 0)));
#line 2367 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_43_43;

#line 2369 "write_deps_file.m"
            {
#line 2369 "write_deps_file.m"
              parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2369 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[0]));
#line 2369 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 1) = ((MR_Box) (parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1));
#line 2369 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2369 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 3) = ((MR_Box) (parse_tree__write_deps_file__OrdStream_14));
#line 2369 "write_deps_file.m"
            }
#line 2368 "write_deps_file.m"
            {
#line 2368 "write_deps_file.m"
              mercury__io__write_list_6_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[1], parse_tree__write_deps_file__OrdStream_14, parse_tree__write_deps_file__DepsOrdering_8, (MR_String) "\n\n", parse_tree__write_deps_file__V_43_43);
            }
#line 2370 "write_deps_file.m"
            {
#line 2370 "write_deps_file.m"
              mercury__io__close_output_3_p_0(parse_tree__write_deps_file__OrdStream_14);
            }
#line 2371 "write_deps_file.m"
            {
#line 2371 "write_deps_file.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) " done.\n");
#line 2371 "write_deps_file.m"
              return;
            }
#line 2367 "write_deps_file.m"
          }
#line 2359 "write_deps_file.m"
      }
#line 2355 "write_deps_file.m"
  }
#line 75 "write_deps_file.m"
}

#line 72 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_dep_file_6_p_0(
#line 72 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 72 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_8,
#line 72 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 72 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_10)
#line 72 "write_deps_file.m"
{
#line 1160 "write_deps_file.m"
  {
#line 1160 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1160 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_12;
#line 1160 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DepFileName_13;
#line 1160 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepResult_14;

#line 1161 "write_deps_file.m"
    {
#line 1161 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_12);
    }
#line 1162 "write_deps_file.m"
    {
#line 1162 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dep", (MR_Integer) 0, &parse_tree__write_deps_file__DepFileName_13);
    }
#line 1164 "write_deps_file.m"
    {
#line 1164 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
#line 1165 "write_deps_file.m"
    {
#line 1165 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DepFileName_13);
    }
#line 1166 "write_deps_file.m"
    {
#line 1166 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
#line 1167 "write_deps_file.m"
    {
#line 1167 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DepFileName_13, &parse_tree__write_deps_file__DepResult_14);
    }
#line 1174 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DepResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1175 "write_deps_file.m"
      {
#line 1175 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));
#line 1175 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
#line 1175 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DepMessage_18;
#line 1175 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_34_34;
#line 1175 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_36_36;
#line 1175 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_37_37;
#line 1175 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_39_39;

#line 1176 "write_deps_file.m"
        {
#line 1176 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
#line 1177 "write_deps_file.m"
        {
#line 1177 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
#line 1178 "write_deps_file.m"
        {
#line 1178 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
#line 1180 "write_deps_file.m"
        {
#line 1180 "write_deps_file.m"
          parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
#line 1180 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1180 "write_deps_file.m"
        }
#line 1180 "write_deps_file.m"
        {
#line 1180 "write_deps_file.m"
          parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 1180 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1180 "write_deps_file.m"
        }
#line 1179 "write_deps_file.m"
        {
#line 1179 "write_deps_file.m"
          parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_13));
#line 1179 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 1179 "write_deps_file.m"
        }
#line 1179 "write_deps_file.m"
        {
#line 1179 "write_deps_file.m"
          parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1179 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1179 "write_deps_file.m"
        }
#line 1179 "write_deps_file.m"
        {
#line 1179 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__DepMessage_18);
        }
#line 1181 "write_deps_file.m"
        {
#line 1181 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DepMessage_18);
#line 1181 "write_deps_file.m"
          return;
        }
#line 1175 "write_deps_file.m"
      }
#line 1174 "write_deps_file.m"
    else
#line 1169 "write_deps_file.m"
      {
#line 1169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DepStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));

#line 1170 "write_deps_file.m"
        {
#line 1170 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dep_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DepStream_15);
        }
#line 1172 "write_deps_file.m"
        {
#line 1172 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_15);
        }
#line 1173 "write_deps_file.m"
        {
#line 1173 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
#line 1173 "write_deps_file.m"
          return;
        }
#line 1169 "write_deps_file.m"
      }
#line 1160 "write_deps_file.m"
  }
#line 72 "write_deps_file.m"
}

#line 66 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_dv_file_6_p_0(
#line 66 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 66 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_8,
#line 66 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 66 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_10)
#line 66 "write_deps_file.m"
{
#line 1133 "write_deps_file.m"
  {
#line 1133 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_12;
#line 1133 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DvFileName_13;
#line 1133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DvResult_14;

#line 1134 "write_deps_file.m"
    {
#line 1134 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_12);
    }
#line 1135 "write_deps_file.m"
    {
#line 1135 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dv", (MR_Integer) 0, &parse_tree__write_deps_file__DvFileName_13);
    }
#line 1137 "write_deps_file.m"
    {
#line 1137 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
#line 1138 "write_deps_file.m"
    {
#line 1138 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DvFileName_13);
    }
#line 1139 "write_deps_file.m"
    {
#line 1139 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
#line 1140 "write_deps_file.m"
    {
#line 1140 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DvFileName_13, &parse_tree__write_deps_file__DvResult_14);
    }
#line 1147 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DvResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1148 "write_deps_file.m"
      {
#line 1148 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));
#line 1148 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
#line 1148 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DvMessage_18;
#line 1148 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_34_34;
#line 1148 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_36_36;
#line 1148 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_37_37;
#line 1148 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_39_39;

#line 1149 "write_deps_file.m"
        {
#line 1149 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
#line 1150 "write_deps_file.m"
        {
#line 1150 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
#line 1151 "write_deps_file.m"
        {
#line 1151 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
#line 1153 "write_deps_file.m"
        {
#line 1153 "write_deps_file.m"
          parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
#line 1153 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1153 "write_deps_file.m"
        }
#line 1153 "write_deps_file.m"
        {
#line 1153 "write_deps_file.m"
          parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 1153 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1153 "write_deps_file.m"
        }
#line 1152 "write_deps_file.m"
        {
#line 1152 "write_deps_file.m"
          parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_13));
#line 1152 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 1152 "write_deps_file.m"
        }
#line 1152 "write_deps_file.m"
        {
#line 1152 "write_deps_file.m"
          parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1152 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1152 "write_deps_file.m"
        }
#line 1152 "write_deps_file.m"
        {
#line 1152 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__DvMessage_18);
        }
#line 1154 "write_deps_file.m"
        {
#line 1154 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DvMessage_18);
#line 1154 "write_deps_file.m"
          return;
        }
#line 1148 "write_deps_file.m"
      }
#line 1147 "write_deps_file.m"
    else
#line 1142 "write_deps_file.m"
      {
#line 1142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DvStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));

#line 1143 "write_deps_file.m"
        {
#line 1143 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dv_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DvStream_15);
        }
#line 1145 "write_deps_file.m"
        {
#line 1145 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DvStream_15);
        }
#line 1146 "write_deps_file.m"
        {
#line 1146 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
#line 1146 "write_deps_file.m"
          return;
        }
#line 1142 "write_deps_file.m"
      }
#line 1133 "write_deps_file.m"
  }
#line 66 "write_deps_file.m"
}

#line 59 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_files_10_p_0(
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntDepsGraph_3,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ImplDepsGraph_4,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IndirectDepsGraph_5,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IndirectOptDepsGraph_6,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOptOrder_7,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_8)
#line 59 "write_deps_file.m"
{
#line 1047 "write_deps_file.m"
  {
#line 1047 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 1047 "write_deps_file.m"
    {
#line 1047 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__HeadVar__2_2, parse_tree__write_deps_file__IntDepsGraph_3, parse_tree__write_deps_file__ImplDepsGraph_4, parse_tree__write_deps_file__IndirectDepsGraph_5, parse_tree__write_deps_file__IndirectOptDepsGraph_6, parse_tree__write_deps_file__TransOptOrder_7);
#line 1047 "write_deps_file.m"
      return;
    }
#line 1047 "write_deps_file.m"
  }
#line 59 "write_deps_file.m"
}

#line 708 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_7(
#line 708 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 708 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 708 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 708 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 708 "write_deps_file.m"
{
#line 708 "write_deps_file.m"
  {
#line 708 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 708 "write_deps_file.m"
    {
#line 708 "write_deps_file.m"
      parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 708 "write_deps_file.m"
      return;
    }
#line 708 "write_deps_file.m"
  }
#line 708 "write_deps_file.m"
}

#line 631 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_6(
#line 631 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 631 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 631 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 631 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 631 "write_deps_file.m"
{
#line 631 "write_deps_file.m"
  {
#line 631 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 631 "write_deps_file.m"
    {
#line 631 "write_deps_file.m"
      parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 7))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 631 "write_deps_file.m"
      return;
    }
#line 631 "write_deps_file.m"
  }
#line 631 "write_deps_file.m"
}

#line 614 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_5(
#line 614 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 614 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 614 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 614 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 614 "write_deps_file.m"
{
#line 614 "write_deps_file.m"
  {
#line 614 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 614 "write_deps_file.m"
    {
#line 614 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__614__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 614 "write_deps_file.m"
      return;
    }
#line 614 "write_deps_file.m"
  }
#line 614 "write_deps_file.m"
}

#line 575 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_4(
#line 575 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 575 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 575 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 575 "write_deps_file.m"
{
#line 575 "write_deps_file.m"
  {
#line 575 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 575 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 575 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv3_HeadVar__3_575;

#line 575 "write_deps_file.m"
    {
#line 575 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__575__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv3_HeadVar__3_575);
    }
#line 575 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 575 "write_deps_file.m"
      {
#line 575 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv3_HeadVar__3_575));
#line 575 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 575 "write_deps_file.m"
      }
#line 575 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 575 "write_deps_file.m"
  }
#line 575 "write_deps_file.m"
}

#line 401 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_3(
#line 401 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 401 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 401 "write_deps_file.m"
{
#line 401 "write_deps_file.m"
  {
#line 401 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 401 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 401 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv2_HeadVar__2_2;

#line 401 "write_deps_file.m"
    {
#line 401 "write_deps_file.m"
      parse_tree__write_deps_file__conv2_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 401 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__2_2));
#line 401 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 401 "write_deps_file.m"
  }
#line 401 "write_deps_file.m"
}

#line 379 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_2(
#line 379 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 379 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 379 "write_deps_file.m"
{
#line 379 "write_deps_file.m"
  {
#line 379 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 379 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 379 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv1_HeadVar__2_2;

#line 379 "write_deps_file.m"
    {
#line 379 "write_deps_file.m"
      parse_tree__write_deps_file__conv1_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 379 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_HeadVar__2_2));
#line 379 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 379 "write_deps_file.m"
  }
#line 379 "write_deps_file.m"
}

#line 293 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_1(
#line 293 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 293 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 293 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 293 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 293 "write_deps_file.m"
{
#line 293 "write_deps_file.m"
  {
#line 293 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 293 "write_deps_file.m"
    {
#line 293 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__293__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 293 "write_deps_file.m"
      return;
    }
#line 293 "write_deps_file.m"
  }
#line 293 "write_deps_file.m"
}

#line 40 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0(
#line 40 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 40 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_8,
#line 40 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__AllDepsSet_9,
#line 40 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MaybeTransOptDeps_10)
#line 40 "write_deps_file.m"
{
#line 132 "write_deps_file.m"
  {
#line 132 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 132 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 0)));
#line 132 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFileModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 1)));
#line 132 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 2)));
#line 132 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ParentDeps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 3)));
#line 132 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IntDeps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 4)));
#line 132 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ImplDeps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 5)));
#line 132 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IndirectDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 6)));
#line 132 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__InclDeps_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 8)));
#line 132 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__NestedDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 9)));
#line 132 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__FactDeps0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 10)));
#line 132 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ContainsForeignCode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 11)));
#line 132 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignImports0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 12)));
#line 132 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignIncludeFiles_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 13)));
#line 132 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Items_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 15)));
#line 132 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_33;
#line 132 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_34;
#line 132 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DependencyFileName_35;
#line 132 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TransOptDateFileName_36;
#line 132 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TmpDependencyFileName_37;
#line 132 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Result_38;
#line 132 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_154_154;
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Children_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 7)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___ContainsForeignExport_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 14)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Specs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 16)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Error_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 17)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Timestamps_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 18)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___HasMain_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 19)));
#line 133 "write_deps_file.m"
    MR_String parse_tree__write_deps_file___Dir_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 20)));

#line 140 "write_deps_file.m"
    {
#line 140 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_33);
    }
#line 141 "write_deps_file.m"
    {
#line 141 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_14, &parse_tree__write_deps_file__MakeVarName_34);
    }
#line 142 "write_deps_file.m"
    {
#line 142 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".d", (MR_Integer) 0, &parse_tree__write_deps_file__DependencyFileName_35);
    }
#line 144 "write_deps_file.m"
    {
#line 144 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".trans_opt_date", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptDateFileName_36);
    }
#line 151 "write_deps_file.m"
    {
#line 151 "write_deps_file.m"
      parse_tree__write_deps_file__V_154_154 = mercury__dir__dirname_1_f_0(parse_tree__write_deps_file__DependencyFileName_35);
    }
#line 151 "write_deps_file.m"
    {
#line 151 "write_deps_file.m"
      mercury__io__make_temp_5_p_0(parse_tree__write_deps_file__V_154_154, (MR_String) "tmp_d", &parse_tree__write_deps_file__TmpDependencyFileName_37);
    }
#line 153 "write_deps_file.m"
    {
#line 153 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, (MR_String) "% Writing auto-dependency file \140");
    }
#line 154 "write_deps_file.m"
    {
#line 154 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, parse_tree__write_deps_file__DependencyFileName_35);
    }
#line 155 "write_deps_file.m"
    {
#line 155 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, (MR_String) "\'...");
    }
#line 156 "write_deps_file.m"
    {
#line 156 "write_deps_file.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_33);
    }
#line 157 "write_deps_file.m"
    {
#line 157 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__TmpDependencyFileName_37, &parse_tree__write_deps_file__Result_38);
    }
#line 167 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result_38)) == (MR_mktag((MR_Integer) 1))))
#line 159 "write_deps_file.m"
      {
#line 159 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result_38, (MR_Integer) 0)));
#line 159 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_40;
#line 159 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Message_41;
#line 159 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_840_840;
#line 159 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_842_842;
#line 159 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_843_843;
#line 159 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_845_845;

#line 160 "write_deps_file.m"
        {
#line 160 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, (MR_String) " failed.\n");
        }
#line 161 "write_deps_file.m"
        {
#line 161 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_33);
        }
#line 162 "write_deps_file.m"
        {
#line 162 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_39, &parse_tree__write_deps_file__IOErrorMessage_40);
        }
#line 165 "write_deps_file.m"
        {
#line 165 "write_deps_file.m"
          parse_tree__write_deps_file__V_845_845 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_845_845, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_40));
#line 165 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_845_845, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 165 "write_deps_file.m"
        }
#line 164 "write_deps_file.m"
        {
#line 164 "write_deps_file.m"
          parse_tree__write_deps_file__V_843_843 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_843_843, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 164 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_843_843, 1) = ((MR_Box) (parse_tree__write_deps_file__V_845_845));
#line 164 "write_deps_file.m"
        }
#line 164 "write_deps_file.m"
        {
#line 164 "write_deps_file.m"
          parse_tree__write_deps_file__V_842_842 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_842_842, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_37));
#line 164 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_842_842, 1) = ((MR_Box) (parse_tree__write_deps_file__V_843_843));
#line 164 "write_deps_file.m"
        }
#line 163 "write_deps_file.m"
        {
#line 163 "write_deps_file.m"
          parse_tree__write_deps_file__V_840_840 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 163 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_840_840, 0) = ((MR_Box) ((MR_String) "error opening temporary file \140"));
#line 163 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_840_840, 1) = ((MR_Box) (parse_tree__write_deps_file__V_842_842));
#line 163 "write_deps_file.m"
        }
#line 163 "write_deps_file.m"
        {
#line 163 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_840_840, &parse_tree__write_deps_file__Message_41);
        }
#line 166 "write_deps_file.m"
        {
#line 166 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_41);
#line 166 "write_deps_file.m"
          return;
        }
#line 159 "write_deps_file.m"
      }
#line 167 "write_deps_file.m"
    else
#line 168 "write_deps_file.m"
      {
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_870_870 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_871_871;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DepStream_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Result_38, (MR_Integer) 0)));
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDeps0_43;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDepsSet0_45;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDepsSet_46;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDepsSet0_47;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDepsSet1_48;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDepsSet_49;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDeps_50;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDeps_51;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__AllDeps_52;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__FactDeps_53;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ErrFileName_62;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OptDateFileName_63;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__CDateFileName_64;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__AsmDateFileName_65;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__PicAsmDateFileName_66;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ObjFileName_67;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ILDateFileName_68;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__JavaDateFileName_69;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__PicObjFileName_70;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int0FileName_71;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__UseOptFiles_83;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Intermod_84;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IntermodDirs_85;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__HighLevelCode_92;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__CompilationTarget_93;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__CFileName_94;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__HeaderFileName_95;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__HeaderFileName2_96;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ILFileName_97;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__JavaFileName_98;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModuleDepFileName_99;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DateFileName_100;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Date0FileName_101;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__HaveMap_102;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModuleArg_103;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Target_104;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__SignAssembly_105;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DllFileName_106;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ClassFileName_107;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__BeamFileName_108;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__SubModules_109;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LangSet_112;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImports_113;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImportedModules_121;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IntFileName_131;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int2FileName_132;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int3FileName_133;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OptFileName_134;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__TransOptFileName_135;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Date3FileName_136;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__UseSubdirs_137;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Result3_138;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_247_247;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_250_250;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_251_251;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_253_253;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_254_254;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_256_256;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_257_257;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_259_259;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_260_260;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_262_262;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_263_263;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_265_265;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_266_266;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_268_268;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_269_269;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_271_271;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_273_273;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_276_276;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_452_452;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_455_455;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_456_456;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_458_458;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_459_459;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_461_461;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_471_471;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_474_474;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_477_477;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_479_479;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_480_480;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_482_482;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_483_483;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_485_485;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_487_487;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_489_489;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_490_490;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_492_492;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_493_493;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_495_495;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_497_497;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_498_498;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_500_500;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_514_514;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_517_517;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_518_518;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_520_520;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_535_535;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_573_573;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_629_629;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_632_632;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_633_633;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_635_635;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_636_636;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_638_638;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_640_640;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_641_641;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_643_643;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_644_644;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_646_646;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_648_648;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_649_649;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_651_651;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_652_652;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_654_654;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_656_656;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_657_657;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_659_659;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_660_660;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_662_662;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_664_664;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_665_665;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_667_667;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_668_668;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_670_670;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_672_672;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_673_673;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_675_675;
#line 231 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__SourceFileBase_61;
#line 539 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_110_110;
#line 539 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_111_111;
#line 627 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_883_883;
#line 715 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_893_893;

#line 169 "write_deps_file.m"
        {
#line 169 "write_deps_file.m"
          mercury__list__append_3_p_1(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__IntDeps_16, parse_tree__write_deps_file__ImplDeps_17, &parse_tree__write_deps_file__LongDeps0_43);
        }
#line 171 "write_deps_file.m"
        {
#line 171 "write_deps_file.m"
          mercury__set__list_to_set_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__LongDeps0_43, &parse_tree__write_deps_file__LongDepsSet0_45);
        }
#line 172 "write_deps_file.m"
        {
#line 172 "write_deps_file.m"
          mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, ((MR_Box) (parse_tree__write_deps_file__ModuleName_14)), parse_tree__write_deps_file__LongDepsSet0_45, &parse_tree__write_deps_file__LongDepsSet_46);
        }
#line 173 "write_deps_file.m"
        {
#line 173 "write_deps_file.m"
          mercury__set__list_to_set_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__IndirectDeps_18, &parse_tree__write_deps_file__ShortDepsSet0_47);
        }
#line 174 "write_deps_file.m"
        {
#line 174 "write_deps_file.m"
          mercury__set__difference_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__ShortDepsSet0_47, parse_tree__write_deps_file__LongDepsSet_46, &parse_tree__write_deps_file__ShortDepsSet1_48);
        }
#line 175 "write_deps_file.m"
        {
#line 175 "write_deps_file.m"
          mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, ((MR_Box) (parse_tree__write_deps_file__ModuleName_14)), parse_tree__write_deps_file__ShortDepsSet1_48, &parse_tree__write_deps_file__ShortDepsSet_49);
        }
#line 176 "write_deps_file.m"
        {
#line 176 "write_deps_file.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__LongDepsSet_46, &parse_tree__write_deps_file__LongDeps_50);
        }
#line 177 "write_deps_file.m"
        {
#line 177 "write_deps_file.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__ShortDepsSet_49, &parse_tree__write_deps_file__ShortDeps_51);
        }
#line 178 "write_deps_file.m"
        {
#line 178 "write_deps_file.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__AllDepsSet_9, &parse_tree__write_deps_file__AllDeps_52);
        }
#line 14996 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_871_871 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 179 "write_deps_file.m"
        {
#line 179 "write_deps_file.m"
          mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__FactDeps0_22, &parse_tree__write_deps_file__FactDeps_53);
        }
#line 192 "write_deps_file.m"
        if ((parse_tree__write_deps_file__MaybeTransOptDeps_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "write_deps_file.m"
          {
#line 193 "write_deps_file.m"
          }
#line 192 "write_deps_file.m"
        else
#line 182 "write_deps_file.m"
          {
#line 182 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptDeps_10, (MR_Integer) 0)));
#line 182 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDepsSet0_55;
#line 182 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDepsSet_56;
#line 182 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDateDeps_57;
#line 182 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_164_164;

#line 183 "write_deps_file.m"
            {
#line 183 "write_deps_file.m"
              mercury__set__list_to_set_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__TransOptDeps0_54, &parse_tree__write_deps_file__TransOptDepsSet0_55);
            }
#line 184 "write_deps_file.m"
            {
#line 184 "write_deps_file.m"
              mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__TransOptDepsSet0_55, parse_tree__write_deps_file__LongDepsSet_46, &parse_tree__write_deps_file__TransOptDepsSet_56);
            }
#line 185 "write_deps_file.m"
            {
#line 185 "write_deps_file.m"
              mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__TransOptDepsSet_56, &parse_tree__write_deps_file__TransOptDateDeps_57);
            }
#line 189 "write_deps_file.m"
            {
#line 189 "write_deps_file.m"
              parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_36));
#line 189 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])));
#line 189 "write_deps_file.m"
            }
#line 189 "write_deps_file.m"
            {
#line 189 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_164_164);
            }
#line 190 "write_deps_file.m"
            {
#line 190 "write_deps_file.m"
              parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__TransOptDateDeps_57, (MR_String) ".trans_opt", parse_tree__write_deps_file__DepStream_42);
            }
#line 182 "write_deps_file.m"
          }
#line 225 "write_deps_file.m"
        if ((parse_tree__write_deps_file__FactDeps_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 226 "write_deps_file.m"
          {
#line 226 "write_deps_file.m"
          }
#line 225 "write_deps_file.m"
        else
#line 197 "write_deps_file.m"
          {
#line 197 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__AssumeGmake_60;
#line 197 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_171_171;
#line 197 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_174_174;

#line 199 "write_deps_file.m"
            {
#line 199 "write_deps_file.m"
              parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 199 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[100])));
#line 199 "write_deps_file.m"
            }
#line 199 "write_deps_file.m"
            {
#line 199 "write_deps_file.m"
              parse_tree__write_deps_file__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 199 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 199 "write_deps_file.m"
            }
#line 198 "write_deps_file.m"
            {
#line 198 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_171_171);
            }
#line 200 "write_deps_file.m"
            {
#line 200 "write_deps_file.m"
              parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__FactDeps_53, (MR_String) "", parse_tree__write_deps_file__DepStream_42);
            }
#line 201 "write_deps_file.m"
            {
#line 201 "write_deps_file.m"
              mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_42);
            }
#line 202 "write_deps_file.m"
            {
#line 202 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 117, &parse_tree__write_deps_file__AssumeGmake_60);
            }
#line 213 "write_deps_file.m"
            if ((parse_tree__write_deps_file__AssumeGmake_60 == (MR_Integer) 0))
#line 214 "write_deps_file.m"
              {
#line 214 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_182_182;
#line 214 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_189_189;
#line 214 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_192_192;

#line 216 "write_deps_file.m"
                {
#line 216 "write_deps_file.m"
                  parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 216 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[101])));
#line 216 "write_deps_file.m"
                }
#line 215 "write_deps_file.m"
                {
#line 215 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_182_182);
                }
#line 217 "write_deps_file.m"
                {
#line 217 "write_deps_file.m"
                  parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__FactDeps_53, (MR_String) ".c", parse_tree__write_deps_file__DepStream_42);
                }
#line 219 "write_deps_file.m"
                {
#line 219 "write_deps_file.m"
                  parse_tree__write_deps_file__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 219 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102])));
#line 219 "write_deps_file.m"
                }
#line 219 "write_deps_file.m"
                {
#line 219 "write_deps_file.m"
                  parse_tree__write_deps_file__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 219 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 1) = ((MR_Box) (parse_tree__write_deps_file__V_192_192));
#line 219 "write_deps_file.m"
                }
#line 219 "write_deps_file.m"
                {
#line 219 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_189_189);
                }
#line 221 "write_deps_file.m"
                {
#line 221 "write_deps_file.m"
                  parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__FactDeps_53, (MR_String) ".\044O", parse_tree__write_deps_file__DepStream_42);
                }
#line 223 "write_deps_file.m"
                {
#line 223 "write_deps_file.m"
                  mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_42);
                }
#line 214 "write_deps_file.m"
              }
#line 213 "write_deps_file.m"
            else
#line 204 "write_deps_file.m"
              {
#line 204 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_199_199;
#line 204 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_202_202;
#line 204 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_203_203;
#line 204 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_205_205;
#line 204 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_206_206;
#line 204 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_208_208;
#line 204 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_209_209;
#line 204 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_211_211;

#line 210 "write_deps_file.m"
                {
#line 210 "write_deps_file.m"
                  parse_tree__write_deps_file__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 210 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 210 "write_deps_file.m"
                }
#line 210 "write_deps_file.m"
                {
#line 210 "write_deps_file.m"
                  parse_tree__write_deps_file__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs = \044("));
#line 210 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 1) = ((MR_Box) (parse_tree__write_deps_file__V_211_211));
#line 210 "write_deps_file.m"
                }
#line 209 "write_deps_file.m"
                {
#line 209 "write_deps_file.m"
                  parse_tree__write_deps_file__V_208_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_208_208, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 209 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_208_208, 1) = ((MR_Box) (parse_tree__write_deps_file__V_209_209));
#line 209 "write_deps_file.m"
                }
#line 208 "write_deps_file.m"
                {
#line 208 "write_deps_file.m"
                  parse_tree__write_deps_file__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 0) = ((MR_Box) ((MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)\n\n"));
#line 208 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 1) = ((MR_Box) (parse_tree__write_deps_file__V_208_208));
#line 208 "write_deps_file.m"
                }
#line 207 "write_deps_file.m"
                {
#line 207 "write_deps_file.m"
                  parse_tree__write_deps_file__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_205_205, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 207 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_205_205, 1) = ((MR_Box) (parse_tree__write_deps_file__V_206_206));
#line 207 "write_deps_file.m"
                }
#line 207 "write_deps_file.m"
                {
#line 207 "write_deps_file.m"
                  parse_tree__write_deps_file__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 0) = ((MR_Box) ((MR_String) ".fact_tables.os = \044("));
#line 207 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 1) = ((MR_Box) (parse_tree__write_deps_file__V_205_205));
#line 207 "write_deps_file.m"
                }
#line 206 "write_deps_file.m"
                {
#line 206 "write_deps_file.m"
                  parse_tree__write_deps_file__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 206 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 1) = ((MR_Box) (parse_tree__write_deps_file__V_203_203));
#line 206 "write_deps_file.m"
                }
#line 206 "write_deps_file.m"
                {
#line 206 "write_deps_file.m"
                  parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 206 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__V_202_202));
#line 206 "write_deps_file.m"
                }
#line 205 "write_deps_file.m"
                {
#line 205 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_199_199);
                }
#line 204 "write_deps_file.m"
              }
#line 197 "write_deps_file.m"
          }
#line 229 "write_deps_file.m"
        {
#line 229 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_12, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_61);
        }
#line 231 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 230 "write_deps_file.m"
          {
#line 230 "write_deps_file.m"
            {
#line 230 "write_deps_file.m"
              parse_tree__write_deps_file__ErrFileName_62 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__SourceFileBase_61, (MR_String) ".err");
            }
#line 230 "write_deps_file.m"
          }
#line 231 "write_deps_file.m"
        else
#line 232 "write_deps_file.m"
          {
#line 232 "write_deps_file.m"
            {
#line 232 "write_deps_file.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_deps_file", (MR_String) "predicate \140parse_tree.write_deps_file.write_dependency_file\'/6", (MR_String) "source file doesn\'t end in \140.m\'");
#line 232 "write_deps_file.m"
              return;
            }
#line 232 "write_deps_file.m"
          }
#line 234 "write_deps_file.m"
        {
#line 234 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".optdate", (MR_Integer) 1, &parse_tree__write_deps_file__OptDateFileName_63);
        }
#line 236 "write_deps_file.m"
        {
#line 236 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".c_date", (MR_Integer) 1, &parse_tree__write_deps_file__CDateFileName_64);
        }
#line 238 "write_deps_file.m"
        {
#line 238 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".s_date", (MR_Integer) 1, &parse_tree__write_deps_file__AsmDateFileName_65);
        }
#line 240 "write_deps_file.m"
        {
#line 240 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".pic_s_date", (MR_Integer) 1, &parse_tree__write_deps_file__PicAsmDateFileName_66);
        }
#line 242 "write_deps_file.m"
        {
#line 242 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".\044O", (MR_Integer) 1, &parse_tree__write_deps_file__ObjFileName_67);
        }
#line 244 "write_deps_file.m"
        {
#line 244 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".il_date", (MR_Integer) 1, &parse_tree__write_deps_file__ILDateFileName_68);
        }
#line 246 "write_deps_file.m"
        {
#line 246 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".java_date", (MR_Integer) 1, &parse_tree__write_deps_file__JavaDateFileName_69);
        }
#line 250 "write_deps_file.m"
        {
#line 250 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".pic_o", (MR_Integer) 1, &parse_tree__write_deps_file__PicObjFileName_70);
        }
#line 252 "write_deps_file.m"
        {
#line 252 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int0", (MR_Integer) 1, &parse_tree__write_deps_file__Int0FileName_71);
        }
#line 263 "write_deps_file.m"
        {
#line 263 "write_deps_file.m"
          parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_69));
#line 263 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "write_deps_file.m"
        }
#line 261 "write_deps_file.m"
        {
#line 261 "write_deps_file.m"
          parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) ((MR_String) " "));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 261 "write_deps_file.m"
        }
#line 261 "write_deps_file.m"
        {
#line 261 "write_deps_file.m"
          parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) (parse_tree__write_deps_file__ILDateFileName_68));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 261 "write_deps_file.m"
        }
#line 260 "write_deps_file.m"
        {
#line 260 "write_deps_file.m"
          parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) " "));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_268_268));
#line 260 "write_deps_file.m"
        }
#line 260 "write_deps_file.m"
        {
#line 260 "write_deps_file.m"
          parse_tree__write_deps_file__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 0) = ((MR_Box) (parse_tree__write_deps_file__PicAsmDateFileName_66));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 260 "write_deps_file.m"
        }
#line 259 "write_deps_file.m"
        {
#line 259 "write_deps_file.m"
          parse_tree__write_deps_file__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 0) = ((MR_Box) ((MR_String) " "));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 1) = ((MR_Box) (parse_tree__write_deps_file__V_265_265));
#line 259 "write_deps_file.m"
        }
#line 259 "write_deps_file.m"
        {
#line 259 "write_deps_file.m"
          parse_tree__write_deps_file__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 0) = ((MR_Box) (parse_tree__write_deps_file__AsmDateFileName_65));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 1) = ((MR_Box) (parse_tree__write_deps_file__V_263_263));
#line 259 "write_deps_file.m"
        }
#line 258 "write_deps_file.m"
        {
#line 258 "write_deps_file.m"
          parse_tree__write_deps_file__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 0) = ((MR_Box) ((MR_String) " "));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 1) = ((MR_Box) (parse_tree__write_deps_file__V_262_262));
#line 258 "write_deps_file.m"
        }
#line 258 "write_deps_file.m"
        {
#line 258 "write_deps_file.m"
          parse_tree__write_deps_file__V_259_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_259_259, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_64));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_259_259, 1) = ((MR_Box) (parse_tree__write_deps_file__V_260_260));
#line 258 "write_deps_file.m"
        }
#line 257 "write_deps_file.m"
        {
#line 257 "write_deps_file.m"
          parse_tree__write_deps_file__V_257_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_257_257, 0) = ((MR_Box) ((MR_String) " "));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_257_257, 1) = ((MR_Box) (parse_tree__write_deps_file__V_259_259));
#line 257 "write_deps_file.m"
        }
#line 257 "write_deps_file.m"
        {
#line 257 "write_deps_file.m"
          parse_tree__write_deps_file__V_256_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_62));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 1) = ((MR_Box) (parse_tree__write_deps_file__V_257_257));
#line 257 "write_deps_file.m"
        }
#line 256 "write_deps_file.m"
        {
#line 256 "write_deps_file.m"
          parse_tree__write_deps_file__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 0) = ((MR_Box) ((MR_String) " "));
#line 256 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 1) = ((MR_Box) (parse_tree__write_deps_file__V_256_256));
#line 256 "write_deps_file.m"
        }
#line 256 "write_deps_file.m"
        {
#line 256 "write_deps_file.m"
          parse_tree__write_deps_file__V_253_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_253_253, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_36));
#line 256 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_253_253, 1) = ((MR_Box) (parse_tree__write_deps_file__V_254_254));
#line 256 "write_deps_file.m"
        }
#line 255 "write_deps_file.m"
        {
#line 255 "write_deps_file.m"
          parse_tree__write_deps_file__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 0) = ((MR_Box) ((MR_String) " "));
#line 255 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 1) = ((MR_Box) (parse_tree__write_deps_file__V_253_253));
#line 255 "write_deps_file.m"
        }
#line 255 "write_deps_file.m"
        {
#line 255 "write_deps_file.m"
          parse_tree__write_deps_file__V_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_63));
#line 255 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 1) = ((MR_Box) (parse_tree__write_deps_file__V_251_251));
#line 255 "write_deps_file.m"
        }
#line 254 "write_deps_file.m"
        {
#line 254 "write_deps_file.m"
          parse_tree__write_deps_file__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 254 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 1) = ((MR_Box) (parse_tree__write_deps_file__V_250_250));
#line 254 "write_deps_file.m"
        }
#line 254 "write_deps_file.m"
        {
#line 254 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_247_247);
        }
#line 264 "write_deps_file.m"
        {
#line 264 "write_deps_file.m"
          parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 264 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "write_deps_file.m"
        }
#line 264 "write_deps_file.m"
        {
#line 264 "write_deps_file.m"
          parse_tree__write_deps_file__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 0) = ((MR_Box) ((MR_String) " : "));
#line 264 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 264 "write_deps_file.m"
        }
#line 264 "write_deps_file.m"
        {
#line 264 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_273_273);
        }
#line 270 "write_deps_file.m"
        if ((parse_tree__write_deps_file__InclDeps_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 271 "write_deps_file.m"
          {
#line 271 "write_deps_file.m"
          }
#line 270 "write_deps_file.m"
        else
#line 268 "write_deps_file.m"
          {
#line 268 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_278_278;
#line 268 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_281_281;

#line 269 "write_deps_file.m"
            {
#line 269 "write_deps_file.m"
              parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_71));
#line 269 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "write_deps_file.m"
            }
#line 269 "write_deps_file.m"
            {
#line 269 "write_deps_file.m"
              parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) ((MR_String) " "));
#line 269 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 269 "write_deps_file.m"
            }
#line 269 "write_deps_file.m"
            {
#line 269 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_278_278);
            }
#line 268 "write_deps_file.m"
          }
#line 273 "write_deps_file.m"
        {
#line 273 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_15, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_42);
        }
#line 274 "write_deps_file.m"
        {
#line 274 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__LongDeps_50, (MR_String) ".int", parse_tree__write_deps_file__DepStream_42);
        }
#line 275 "write_deps_file.m"
        {
#line 275 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ShortDeps_51, (MR_String) ".int2", parse_tree__write_deps_file__DepStream_42);
        }
#line 291 "write_deps_file.m"
        if ((parse_tree__write_deps_file__NestedDeps_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "write_deps_file.m"
          {
#line 290 "write_deps_file.m"
          }
#line 291 "write_deps_file.m"
        else
#line 292 "write_deps_file.m"
          {
#line 292 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Write_77;
#line 300 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_320_320;

#line 293 "write_deps_file.m"
            {
#line 293 "write_deps_file.m"
              parse_tree__write_deps_file__Write_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 293 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_77, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
#line 293 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_77, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_1));
#line 293 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 293 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_77, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 293 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_77, 4) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 293 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_77, 5) = ((MR_Box) (parse_tree__write_deps_file__NestedDeps_21));
#line 293 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_77, 6) = ((MR_Box) (parse_tree__write_deps_file__DepStream_42));
#line 293 "write_deps_file.m"
            }
#line 300 "write_deps_file.m"
            {
#line 300 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_871_871, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Write_77, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[10]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_320_320);
            }
#line 292 "write_deps_file.m"
          }
#line 305 "write_deps_file.m"
        {
#line 305 "write_deps_file.m"
          parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__SourceFileName_12, parse_tree__write_deps_file__ForeignIncludeFiles_25);
        }
#line 318 "write_deps_file.m"
        if ((parse_tree__write_deps_file__FactDeps_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 319 "write_deps_file.m"
          {
#line 319 "write_deps_file.m"
          }
#line 318 "write_deps_file.m"
        else
#line 309 "write_deps_file.m"
          {
#line 309 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_322_322;
#line 309 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_325_325;
#line 309 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_326_326;
#line 309 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_328_328;
#line 309 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_330_330;
#line 309 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_331_331;
#line 309 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_333_333;
#line 309 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_334_334;
#line 309 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_336_336;
#line 309 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_337_337;
#line 309 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_339_339;
#line 309 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_341_341;
#line 309 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_342_342;
#line 309 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_344_344;

#line 316 "write_deps_file.m"
            {
#line 316 "write_deps_file.m"
              parse_tree__write_deps_file__V_344_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_67));
#line 316 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])));
#line 316 "write_deps_file.m"
            }
#line 315 "write_deps_file.m"
            {
#line 315 "write_deps_file.m"
              parse_tree__write_deps_file__V_342_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs) : "));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 1) = ((MR_Box) (parse_tree__write_deps_file__V_344_344));
#line 315 "write_deps_file.m"
            }
#line 315 "write_deps_file.m"
            {
#line 315 "write_deps_file.m"
              parse_tree__write_deps_file__V_341_341 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_341_341, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_341_341, 1) = ((MR_Box) (parse_tree__write_deps_file__V_342_342));
#line 315 "write_deps_file.m"
            }
#line 315 "write_deps_file.m"
            {
#line 315 "write_deps_file.m"
              parse_tree__write_deps_file__V_339_339 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 0) = ((MR_Box) ((MR_String) "\044("));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 1) = ((MR_Box) (parse_tree__write_deps_file__V_341_341));
#line 315 "write_deps_file.m"
            }
#line 314 "write_deps_file.m"
            {
#line 314 "write_deps_file.m"
              parse_tree__write_deps_file__V_337_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 1) = ((MR_Box) (parse_tree__write_deps_file__V_339_339));
#line 314 "write_deps_file.m"
            }
#line 314 "write_deps_file.m"
            {
#line 314 "write_deps_file.m"
              parse_tree__write_deps_file__V_336_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 1) = ((MR_Box) (parse_tree__write_deps_file__V_337_337));
#line 314 "write_deps_file.m"
            }
#line 313 "write_deps_file.m"
            {
#line 313 "write_deps_file.m"
              parse_tree__write_deps_file__V_334_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 0) = ((MR_Box) ((MR_String) ".fact_tables) "));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 1) = ((MR_Box) (parse_tree__write_deps_file__V_336_336));
#line 313 "write_deps_file.m"
            }
#line 313 "write_deps_file.m"
            {
#line 313 "write_deps_file.m"
              parse_tree__write_deps_file__V_333_333 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_333_333, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_333_333, 1) = ((MR_Box) (parse_tree__write_deps_file__V_334_334));
#line 313 "write_deps_file.m"
            }
#line 312 "write_deps_file.m"
            {
#line 312 "write_deps_file.m"
              parse_tree__write_deps_file__V_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 0) = ((MR_Box) ((MR_String) ".fact_tables.os) : \044("));
#line 312 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 1) = ((MR_Box) (parse_tree__write_deps_file__V_333_333));
#line 312 "write_deps_file.m"
            }
#line 312 "write_deps_file.m"
            {
#line 312 "write_deps_file.m"
              parse_tree__write_deps_file__V_330_330 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_330_330, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 312 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_330_330, 1) = ((MR_Box) (parse_tree__write_deps_file__V_331_331));
#line 312 "write_deps_file.m"
            }
#line 312 "write_deps_file.m"
            {
#line 312 "write_deps_file.m"
              parse_tree__write_deps_file__V_328_328 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_328_328, 0) = ((MR_Box) ((MR_String) "\044("));
#line 312 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_328_328, 1) = ((MR_Box) (parse_tree__write_deps_file__V_330_330));
#line 312 "write_deps_file.m"
            }
#line 311 "write_deps_file.m"
            {
#line 311 "write_deps_file.m"
              parse_tree__write_deps_file__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 0) = ((MR_Box) ((MR_String) ".fact_tables)\n\n"));
#line 311 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 1) = ((MR_Box) (parse_tree__write_deps_file__V_328_328));
#line 311 "write_deps_file.m"
            }
#line 311 "write_deps_file.m"
            {
#line 311 "write_deps_file.m"
              parse_tree__write_deps_file__V_325_325 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_325_325, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 311 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_325_325, 1) = ((MR_Box) (parse_tree__write_deps_file__V_326_326));
#line 311 "write_deps_file.m"
            }
#line 311 "write_deps_file.m"
            {
#line 311 "write_deps_file.m"
              parse_tree__write_deps_file__V_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 0) = ((MR_Box) ((MR_String) " \\\n\t\044("));
#line 311 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 1) = ((MR_Box) (parse_tree__write_deps_file__V_325_325));
#line 311 "write_deps_file.m"
            }
#line 310 "write_deps_file.m"
            {
#line 310 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_322_322);
            }
#line 309 "write_deps_file.m"
          }
#line 322 "write_deps_file.m"
        {
#line 322 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 328, &parse_tree__write_deps_file__UseOptFiles_83);
        }
#line 323 "write_deps_file.m"
        {
#line 323 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 326, &parse_tree__write_deps_file__Intermod_84);
        }
#line 325 "write_deps_file.m"
        {
#line 325 "write_deps_file.m"
          libs__globals__lookup_accumulating_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 646, &parse_tree__write_deps_file__IntermodDirs_85);
        }
#line 335 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Intermod_84 == (MR_Integer) 0))
#line 336 "write_deps_file.m"
          {
#line 336 "write_deps_file.m"
          }
#line 335 "write_deps_file.m"
        else
#line 332 "write_deps_file.m"
          {
#line 332 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_351_351;
#line 332 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_354_354;

#line 333 "write_deps_file.m"
            {
#line 333 "write_deps_file.m"
              parse_tree__write_deps_file__V_354_354 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_354_354, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_67));
#line 333 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_354_354, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])));
#line 333 "write_deps_file.m"
            }
#line 333 "write_deps_file.m"
            {
#line 333 "write_deps_file.m"
              parse_tree__write_deps_file__V_351_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 333 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 1) = ((MR_Box) (parse_tree__write_deps_file__V_354_354));
#line 333 "write_deps_file.m"
            }
#line 333 "write_deps_file.m"
            {
#line 333 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_351_351);
            }
#line 334 "write_deps_file.m"
            {
#line 334 "write_deps_file.m"
              parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__AllDeps_52, (MR_String) ".mh", parse_tree__write_deps_file__DepStream_42);
            }
#line 332 "write_deps_file.m"
          }
#line 339 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Intermod_84 == (MR_Integer) 1);
#line 340 "write_deps_file.m"
        if (!(parse_tree__write_deps_file__succeeded))
#line 340 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseOptFiles_83 == (MR_Integer) 1);
#line 407 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 352 "write_deps_file.m"
          {
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOpt_86;
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__UseTransOpt_87;
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_360_360;
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_363_363;
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_364_364;
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_366_366;
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_367_367;
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_369_369;
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_370_370;
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_372_372;
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_373_373;
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_375_375;
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_376_376;
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_378_378;
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_379_379;
#line 352 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_381_381;

#line 351 "write_deps_file.m"
            {
#line 351 "write_deps_file.m"
              parse_tree__write_deps_file__V_381_381 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_381_381, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_69));
#line 351 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_381_381, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])));
#line 351 "write_deps_file.m"
            }
#line 350 "write_deps_file.m"
            {
#line 350 "write_deps_file.m"
              parse_tree__write_deps_file__V_379_379 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_379_379, 0) = ((MR_Box) ((MR_String) " "));
#line 350 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_379_379, 1) = ((MR_Box) (parse_tree__write_deps_file__V_381_381));
#line 350 "write_deps_file.m"
            }
#line 350 "write_deps_file.m"
            {
#line 350 "write_deps_file.m"
              parse_tree__write_deps_file__V_378_378 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_378_378, 0) = ((MR_Box) (parse_tree__write_deps_file__ILDateFileName_68));
#line 350 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_378_378, 1) = ((MR_Box) (parse_tree__write_deps_file__V_379_379));
#line 350 "write_deps_file.m"
            }
#line 349 "write_deps_file.m"
            {
#line 349 "write_deps_file.m"
              parse_tree__write_deps_file__V_376_376 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_376_376, 0) = ((MR_Box) ((MR_String) " "));
#line 349 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_376_376, 1) = ((MR_Box) (parse_tree__write_deps_file__V_378_378));
#line 349 "write_deps_file.m"
            }
#line 349 "write_deps_file.m"
            {
#line 349 "write_deps_file.m"
              parse_tree__write_deps_file__V_375_375 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_375_375, 0) = ((MR_Box) (parse_tree__write_deps_file__PicAsmDateFileName_66));
#line 349 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_375_375, 1) = ((MR_Box) (parse_tree__write_deps_file__V_376_376));
#line 349 "write_deps_file.m"
            }
#line 348 "write_deps_file.m"
            {
#line 348 "write_deps_file.m"
              parse_tree__write_deps_file__V_373_373 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_373_373, 0) = ((MR_Box) ((MR_String) " "));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_373_373, 1) = ((MR_Box) (parse_tree__write_deps_file__V_375_375));
#line 348 "write_deps_file.m"
            }
#line 348 "write_deps_file.m"
            {
#line 348 "write_deps_file.m"
              parse_tree__write_deps_file__V_372_372 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_372_372, 0) = ((MR_Box) (parse_tree__write_deps_file__AsmDateFileName_65));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_372_372, 1) = ((MR_Box) (parse_tree__write_deps_file__V_373_373));
#line 348 "write_deps_file.m"
            }
#line 347 "write_deps_file.m"
            {
#line 347 "write_deps_file.m"
              parse_tree__write_deps_file__V_370_370 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_370_370, 0) = ((MR_Box) ((MR_String) " "));
#line 347 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_370_370, 1) = ((MR_Box) (parse_tree__write_deps_file__V_372_372));
#line 347 "write_deps_file.m"
            }
#line 347 "write_deps_file.m"
            {
#line 347 "write_deps_file.m"
              parse_tree__write_deps_file__V_369_369 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_369_369, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_64));
#line 347 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_369_369, 1) = ((MR_Box) (parse_tree__write_deps_file__V_370_370));
#line 347 "write_deps_file.m"
            }
#line 346 "write_deps_file.m"
            {
#line 346 "write_deps_file.m"
              parse_tree__write_deps_file__V_367_367 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_367_367, 0) = ((MR_Box) ((MR_String) " "));
#line 346 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_367_367, 1) = ((MR_Box) (parse_tree__write_deps_file__V_369_369));
#line 346 "write_deps_file.m"
            }
#line 346 "write_deps_file.m"
            {
#line 346 "write_deps_file.m"
              parse_tree__write_deps_file__V_366_366 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_366_366, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_62));
#line 346 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_366_366, 1) = ((MR_Box) (parse_tree__write_deps_file__V_367_367));
#line 346 "write_deps_file.m"
            }
#line 345 "write_deps_file.m"
            {
#line 345 "write_deps_file.m"
              parse_tree__write_deps_file__V_364_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_364_364, 0) = ((MR_Box) ((MR_String) " "));
#line 345 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_364_364, 1) = ((MR_Box) (parse_tree__write_deps_file__V_366_366));
#line 345 "write_deps_file.m"
            }
#line 345 "write_deps_file.m"
            {
#line 345 "write_deps_file.m"
              parse_tree__write_deps_file__V_363_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_36));
#line 345 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 1) = ((MR_Box) (parse_tree__write_deps_file__V_364_364));
#line 345 "write_deps_file.m"
            }
#line 344 "write_deps_file.m"
            {
#line 344 "write_deps_file.m"
              parse_tree__write_deps_file__V_360_360 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 344 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 1) = ((MR_Box) (parse_tree__write_deps_file__V_363_363));
#line 344 "write_deps_file.m"
            }
#line 343 "write_deps_file.m"
            {
#line 343 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_360_360);
            }
#line 364 "write_deps_file.m"
            {
#line 364 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 330, &parse_tree__write_deps_file__TransOpt_86);
            }
#line 366 "write_deps_file.m"
            {
#line 366 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 329, &parse_tree__write_deps_file__UseTransOpt_87);
            }
#line 370 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__TransOpt_86 == (MR_Integer) 1);
#line 371 "write_deps_file.m"
            if (!(parse_tree__write_deps_file__succeeded))
#line 371 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseTransOpt_87 == (MR_Integer) 1);
#line 396 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 374 "write_deps_file.m"
              {
#line 374 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__BuildOptFiles_88;
#line 374 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptDeps_89;
#line 374 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__TransOptDeps_90;
#line 374 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptInt0Deps_91;
#line 374 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_387_387;
#line 374 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_389_389;
#line 374 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_390_390;
#line 374 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_396_396;

#line 374 "write_deps_file.m"
                {
#line 374 "write_deps_file.m"
                  mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseTransOpt_87, &parse_tree__write_deps_file__BuildOptFiles_88);
                }
#line 376 "write_deps_file.m"
                {
#line 376 "write_deps_file.m"
                  parse_tree__write_deps_file__V_387_387 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_387_387, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 376 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_387_387, 1) = ((MR_Box) (parse_tree__write_deps_file__LongDeps_50));
#line 376 "write_deps_file.m"
                }
#line 375 "write_deps_file.m"
                {
#line 375 "write_deps_file.m"
                  parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__BuildOptFiles_88, parse_tree__write_deps_file__V_387_387, parse_tree__write_deps_file__IntermodDirs_85, &parse_tree__write_deps_file__OptDeps_89, &parse_tree__write_deps_file__TransOptDeps_90);
                }
#line 379 "write_deps_file.m"
                {
#line 379 "write_deps_file.m"
                  parse_tree__write_deps_file__V_390_390 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[3], parse_tree__write_deps_file__OptDeps_89);
                }
#line 379 "write_deps_file.m"
                {
#line 379 "write_deps_file.m"
                  parse_tree__write_deps_file__V_389_389 = mercury__list__condense_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__V_390_390);
                }
#line 378 "write_deps_file.m"
                {
#line 378 "write_deps_file.m"
                  parse_tree__write_deps_file__OptInt0Deps_91 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__V_389_389);
                }
#line 380 "write_deps_file.m"
                {
#line 380 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptDeps_89, (MR_String) ".opt", parse_tree__write_deps_file__DepStream_42);
                }
#line 382 "write_deps_file.m"
                {
#line 382 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptInt0Deps_91, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_42);
                }
#line 386 "write_deps_file.m"
                {
#line 386 "write_deps_file.m"
                  parse_tree__write_deps_file__V_396_396 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_396_396, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 386 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_396_396, 1) = ((MR_Box) (parse_tree__write_deps_file__V_366_366));
#line 386 "write_deps_file.m"
                }
#line 385 "write_deps_file.m"
                {
#line 385 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_396_396);
                }
#line 394 "write_deps_file.m"
                {
#line 394 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__TransOptDeps_90, (MR_String) ".trans_opt", parse_tree__write_deps_file__DepStream_42);
                }
#line 374 "write_deps_file.m"
              }
#line 396 "write_deps_file.m"
            else
#line 397 "write_deps_file.m"
              {
#line 397 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_420_420;
#line 397 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_423_423;
#line 397 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_424_424;
#line 397 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__BuildOptFiles_851;
#line 397 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptDeps_852;
#line 397 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptInt0Deps_853;

#line 397 "write_deps_file.m"
                {
#line 397 "write_deps_file.m"
                  mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseOptFiles_83, &parse_tree__write_deps_file__BuildOptFiles_851);
                }
#line 398 "write_deps_file.m"
                {
#line 398 "write_deps_file.m"
                  parse_tree__write_deps_file__V_420_420 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_420_420, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 398 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_420_420, 1) = ((MR_Box) (parse_tree__write_deps_file__LongDeps_50));
#line 398 "write_deps_file.m"
                }
#line 398 "write_deps_file.m"
                {
#line 398 "write_deps_file.m"
                  parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__BuildOptFiles_851, parse_tree__write_deps_file__V_420_420, parse_tree__write_deps_file__IntermodDirs_85, (MR_String) ".opt", &parse_tree__write_deps_file__OptDeps_852);
                }
#line 401 "write_deps_file.m"
                {
#line 401 "write_deps_file.m"
                  parse_tree__write_deps_file__V_424_424 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[4], parse_tree__write_deps_file__OptDeps_852);
                }
#line 401 "write_deps_file.m"
                {
#line 401 "write_deps_file.m"
                  parse_tree__write_deps_file__V_423_423 = mercury__list__condense_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__V_424_424);
                }
#line 400 "write_deps_file.m"
                {
#line 400 "write_deps_file.m"
                  parse_tree__write_deps_file__OptInt0Deps_853 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__V_423_423);
                }
#line 402 "write_deps_file.m"
                {
#line 402 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptDeps_852, (MR_String) ".opt", parse_tree__write_deps_file__DepStream_42);
                }
#line 404 "write_deps_file.m"
                {
#line 404 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptInt0Deps_853, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_42);
                }
#line 397 "write_deps_file.m"
              }
#line 352 "write_deps_file.m"
          }
#line 407 "write_deps_file.m"
        else
#line 404 "write_deps_file.m"
          {
#line 404 "write_deps_file.m"
          }
#line 411 "write_deps_file.m"
        {
#line 411 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 251, &parse_tree__write_deps_file__HighLevelCode_92);
        }
#line 412 "write_deps_file.m"
        {
#line 412 "write_deps_file.m"
          libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_7, &parse_tree__write_deps_file__CompilationTarget_93);
        }
#line 414 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__HighLevelCode_92 == (MR_Integer) 1);
#line 414 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 415 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__CompilationTarget_93 == (MR_Integer) 0);
#line 428 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 426 "write_deps_file.m"
          {
#line 426 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_431_431;
#line 426 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_434_434;
#line 426 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_435_435;
#line 426 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_437_437;

#line 425 "write_deps_file.m"
            {
#line 425 "write_deps_file.m"
              parse_tree__write_deps_file__V_437_437 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_437_437, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_67));
#line 425 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_437_437, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])));
#line 425 "write_deps_file.m"
            }
#line 424 "write_deps_file.m"
            {
#line 424 "write_deps_file.m"
              parse_tree__write_deps_file__V_435_435 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_435_435, 0) = ((MR_Box) ((MR_String) " "));
#line 424 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_435_435, 1) = ((MR_Box) (parse_tree__write_deps_file__V_437_437));
#line 424 "write_deps_file.m"
            }
#line 424 "write_deps_file.m"
            {
#line 424 "write_deps_file.m"
              parse_tree__write_deps_file__V_434_434 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_434_434, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_70));
#line 424 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_434_434, 1) = ((MR_Box) (parse_tree__write_deps_file__V_435_435));
#line 424 "write_deps_file.m"
            }
#line 423 "write_deps_file.m"
            {
#line 423 "write_deps_file.m"
              parse_tree__write_deps_file__V_431_431 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_431_431, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 423 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_431_431, 1) = ((MR_Box) (parse_tree__write_deps_file__V_434_434));
#line 423 "write_deps_file.m"
            }
#line 422 "write_deps_file.m"
            {
#line 422 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_431_431);
            }
#line 427 "write_deps_file.m"
            {
#line 427 "write_deps_file.m"
              parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__AllDeps_52, (MR_String) ".mih", parse_tree__write_deps_file__DepStream_42);
            }
#line 426 "write_deps_file.m"
          }
#line 428 "write_deps_file.m"
        else
#line 427 "write_deps_file.m"
          {
#line 427 "write_deps_file.m"
          }
#line 441 "write_deps_file.m"
        {
#line 441 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".c", (MR_Integer) 1, &parse_tree__write_deps_file__CFileName_94);
        }
#line 443 "write_deps_file.m"
        {
#line 443 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".mh", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName_95);
        }
#line 445 "write_deps_file.m"
        {
#line 445 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".mih", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName2_96);
        }
#line 449 "write_deps_file.m"
        {
#line 449 "write_deps_file.m"
          parse_tree__write_deps_file__V_461_461 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_461_461, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_94));
#line 449 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_461_461, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])));
#line 449 "write_deps_file.m"
        }
#line 449 "write_deps_file.m"
        {
#line 449 "write_deps_file.m"
          parse_tree__write_deps_file__V_459_459 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_459_459, 0) = ((MR_Box) ((MR_String) " : "));
#line 449 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_459_459, 1) = ((MR_Box) (parse_tree__write_deps_file__V_461_461));
#line 449 "write_deps_file.m"
        }
#line 449 "write_deps_file.m"
        {
#line 449 "write_deps_file.m"
          parse_tree__write_deps_file__V_458_458 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_458_458, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName2_96));
#line 449 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_458_458, 1) = ((MR_Box) (parse_tree__write_deps_file__V_459_459));
#line 449 "write_deps_file.m"
        }
#line 449 "write_deps_file.m"
        {
#line 449 "write_deps_file.m"
          parse_tree__write_deps_file__V_456_456 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_456_456, 0) = ((MR_Box) ((MR_String) " "));
#line 449 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_456_456, 1) = ((MR_Box) (parse_tree__write_deps_file__V_458_458));
#line 449 "write_deps_file.m"
        }
#line 449 "write_deps_file.m"
        {
#line 449 "write_deps_file.m"
          parse_tree__write_deps_file__V_455_455 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_455_455, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName_95));
#line 449 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_455_455, 1) = ((MR_Box) (parse_tree__write_deps_file__V_456_456));
#line 449 "write_deps_file.m"
        }
#line 448 "write_deps_file.m"
        {
#line 448 "write_deps_file.m"
          parse_tree__write_deps_file__V_452_452 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_452_452, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 448 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_452_452, 1) = ((MR_Box) (parse_tree__write_deps_file__V_455_455));
#line 448 "write_deps_file.m"
        }
#line 447 "write_deps_file.m"
        {
#line 447 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_452_452);
        }
#line 455 "write_deps_file.m"
        {
#line 455 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".il", (MR_Integer) 1, &parse_tree__write_deps_file__ILFileName_97);
        }
#line 457 "write_deps_file.m"
        {
#line 457 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".java", (MR_Integer) 1, &parse_tree__write_deps_file__JavaFileName_98);
        }
#line 460 "write_deps_file.m"
        {
#line 460 "write_deps_file.m"
          parse_tree__write_deps_file__V_471_471 = make__make_module_dep_file_extension_0_f_0();
        }
#line 459 "write_deps_file.m"
        {
#line 459 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__V_471_471, (MR_Integer) 1, &parse_tree__write_deps_file__ModuleDepFileName_99);
        }
#line 470 "write_deps_file.m"
        {
#line 470 "write_deps_file.m"
          parse_tree__write_deps_file__V_500_500 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_500_500, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_94));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_500_500, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[13])));
#line 470 "write_deps_file.m"
        }
#line 470 "write_deps_file.m"
        {
#line 470 "write_deps_file.m"
          parse_tree__write_deps_file__V_498_498 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_498_498, 0) = ((MR_Box) ((MR_String) " : "));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_498_498, 1) = ((MR_Box) (parse_tree__write_deps_file__V_500_500));
#line 470 "write_deps_file.m"
        }
#line 470 "write_deps_file.m"
        {
#line 470 "write_deps_file.m"
          parse_tree__write_deps_file__V_497_497 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_497_497, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_99));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_497_497, 1) = ((MR_Box) (parse_tree__write_deps_file__V_498_498));
#line 470 "write_deps_file.m"
        }
#line 469 "write_deps_file.m"
        {
#line 469 "write_deps_file.m"
          parse_tree__write_deps_file__V_495_495 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_495_495, 0) = ((MR_Box) ((MR_String) " else\n"));
#line 469 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_495_495, 1) = ((MR_Box) (parse_tree__write_deps_file__V_497_497));
#line 469 "write_deps_file.m"
        }
#line 468 "write_deps_file.m"
        {
#line 468 "write_deps_file.m"
          parse_tree__write_deps_file__V_493_493 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_493_493, 0) = ((MR_Box) ((MR_String) "\n"));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_493_493, 1) = ((MR_Box) (parse_tree__write_deps_file__V_495_495));
#line 468 "write_deps_file.m"
        }
#line 468 "write_deps_file.m"
        {
#line 468 "write_deps_file.m"
          parse_tree__write_deps_file__V_492_492 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_492_492, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaFileName_98));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_492_492, 1) = ((MR_Box) (parse_tree__write_deps_file__V_493_493));
#line 468 "write_deps_file.m"
        }
#line 468 "write_deps_file.m"
        {
#line 468 "write_deps_file.m"
          parse_tree__write_deps_file__V_490_490 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_490_490, 0) = ((MR_Box) ((MR_String) " : "));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_490_490, 1) = ((MR_Box) (parse_tree__write_deps_file__V_492_492));
#line 468 "write_deps_file.m"
        }
#line 468 "write_deps_file.m"
        {
#line 468 "write_deps_file.m"
          parse_tree__write_deps_file__V_489_489 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_489_489, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_99));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_489_489, 1) = ((MR_Box) (parse_tree__write_deps_file__V_490_490));
#line 468 "write_deps_file.m"
        }
#line 467 "write_deps_file.m"
        {
#line 467 "write_deps_file.m"
          parse_tree__write_deps_file__V_487_487 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_487_487, 0) = ((MR_Box) ((MR_String) " ifeq (\044(findstring java,\044(GRADE)),java)\n"));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_487_487, 1) = ((MR_Box) (parse_tree__write_deps_file__V_489_489));
#line 467 "write_deps_file.m"
        }
#line 466 "write_deps_file.m"
        {
#line 466 "write_deps_file.m"
          parse_tree__write_deps_file__V_485_485 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_485_485, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 466 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_485_485, 1) = ((MR_Box) (parse_tree__write_deps_file__V_487_487));
#line 466 "write_deps_file.m"
        }
#line 465 "write_deps_file.m"
        {
#line 465 "write_deps_file.m"
          parse_tree__write_deps_file__V_483_483 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_483_483, 0) = ((MR_Box) ((MR_String) "\n"));
#line 465 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_483_483, 1) = ((MR_Box) (parse_tree__write_deps_file__V_485_485));
#line 465 "write_deps_file.m"
        }
#line 465 "write_deps_file.m"
        {
#line 465 "write_deps_file.m"
          parse_tree__write_deps_file__V_482_482 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_482_482, 0) = ((MR_Box) (parse_tree__write_deps_file__ILFileName_97));
#line 465 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_482_482, 1) = ((MR_Box) (parse_tree__write_deps_file__V_483_483));
#line 465 "write_deps_file.m"
        }
#line 465 "write_deps_file.m"
        {
#line 465 "write_deps_file.m"
          parse_tree__write_deps_file__V_480_480 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_480_480, 0) = ((MR_Box) ((MR_String) " : "));
#line 465 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_480_480, 1) = ((MR_Box) (parse_tree__write_deps_file__V_482_482));
#line 465 "write_deps_file.m"
        }
#line 465 "write_deps_file.m"
        {
#line 465 "write_deps_file.m"
          parse_tree__write_deps_file__V_479_479 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_479_479, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_99));
#line 465 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_479_479, 1) = ((MR_Box) (parse_tree__write_deps_file__V_480_480));
#line 465 "write_deps_file.m"
        }
#line 464 "write_deps_file.m"
        {
#line 464 "write_deps_file.m"
          parse_tree__write_deps_file__V_477_477 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_477_477, 0) = ((MR_Box) ((MR_String) "ifeq (\044(findstring il,\044(GRADE)),il)\n"));
#line 464 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_477_477, 1) = ((MR_Box) (parse_tree__write_deps_file__V_479_479));
#line 464 "write_deps_file.m"
        }
#line 463 "write_deps_file.m"
        {
#line 463 "write_deps_file.m"
          parse_tree__write_deps_file__V_474_474 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_474_474, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 463 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_474_474, 1) = ((MR_Box) (parse_tree__write_deps_file__V_477_477));
#line 463 "write_deps_file.m"
        }
#line 462 "write_deps_file.m"
        {
#line 462 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_474_474);
        }
#line 488 "write_deps_file.m"
        {
#line 488 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date", (MR_Integer) 1, &parse_tree__write_deps_file__DateFileName_100);
        }
#line 490 "write_deps_file.m"
        {
#line 490 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date0", (MR_Integer) 1, &parse_tree__write_deps_file__Date0FileName_101);
        }
#line 494 "write_deps_file.m"
        {
#line 494 "write_deps_file.m"
          parse_tree__write_deps_file__V_520_520 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_520_520, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_101));
#line 494 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_520_520, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "write_deps_file.m"
        }
#line 493 "write_deps_file.m"
        {
#line 493 "write_deps_file.m"
          parse_tree__write_deps_file__V_518_518 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_518_518, 0) = ((MR_Box) ((MR_String) " "));
#line 493 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_518_518, 1) = ((MR_Box) (parse_tree__write_deps_file__V_520_520));
#line 493 "write_deps_file.m"
        }
#line 493 "write_deps_file.m"
        {
#line 493 "write_deps_file.m"
          parse_tree__write_deps_file__V_517_517 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_517_517, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_100));
#line 493 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_517_517, 1) = ((MR_Box) (parse_tree__write_deps_file__V_518_518));
#line 493 "write_deps_file.m"
        }
#line 493 "write_deps_file.m"
        {
#line 493 "write_deps_file.m"
          parse_tree__write_deps_file__V_514_514 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_514_514, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 493 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_514_514, 1) = ((MR_Box) (parse_tree__write_deps_file__V_517_517));
#line 493 "write_deps_file.m"
        }
#line 492 "write_deps_file.m"
        {
#line 492 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_514_514);
        }
#line 495 "write_deps_file.m"
        {
#line 495 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_15, (MR_String) ".date", parse_tree__write_deps_file__DepStream_42);
        }
#line 496 "write_deps_file.m"
        {
#line 496 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_273_273);
        }
#line 497 "write_deps_file.m"
        {
#line 497 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_15, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_42);
        }
#line 498 "write_deps_file.m"
        {
#line 498 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__LongDeps_50, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_42);
        }
#line 499 "write_deps_file.m"
        {
#line 499 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ShortDeps_51, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_42);
        }
#line 501 "write_deps_file.m"
        {
#line 501 "write_deps_file.m"
          parse_tree__write_deps_file__V_535_535 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_535_535, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 501 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_535_535, 1) = ((MR_Box) (parse_tree__write_deps_file__V_520_520));
#line 501 "write_deps_file.m"
        }
#line 501 "write_deps_file.m"
        {
#line 501 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_535_535);
        }
#line 502 "write_deps_file.m"
        {
#line 502 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_15, (MR_String) ".date0", parse_tree__write_deps_file__DepStream_42);
        }
#line 503 "write_deps_file.m"
        {
#line 503 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_273_273);
        }
#line 504 "write_deps_file.m"
        {
#line 504 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__LongDeps_50, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_42);
        }
#line 505 "write_deps_file.m"
        {
#line 505 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ShortDeps_51, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_42);
        }
#line 506 "write_deps_file.m"
        {
#line 506 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_42, (MR_String) "\n\n");
        }
#line 512 "write_deps_file.m"
        {
#line 512 "write_deps_file.m"
          parse_tree__source_file_map__have_source_file_map_3_p_0(&parse_tree__write_deps_file__HaveMap_102);
        }
#line 516 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HaveMap_102 == (MR_Integer) 0))
#line 518 "write_deps_file.m"
          parse_tree__write_deps_file__ModuleArg_103 = parse_tree__write_deps_file__SourceFileName_12;
#line 516 "write_deps_file.m"
        else
#line 515 "write_deps_file.m"
          {
#line 515 "write_deps_file.m"
            parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__SourceFileModuleName_13, &parse_tree__write_deps_file__ModuleArg_103);
          }
#line 521 "write_deps_file.m"
        {
#line 521 "write_deps_file.m"
          libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_7, &parse_tree__write_deps_file__Target_104);
        }
#line 522 "write_deps_file.m"
        {
#line 522 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 158, &parse_tree__write_deps_file__SignAssembly_105);
        }
#line 530 "write_deps_file.m"
        {
#line 530 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__DllFileName_106);
        }
#line 532 "write_deps_file.m"
        {
#line 532 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".class", (MR_Integer) 1, &parse_tree__write_deps_file__ClassFileName_107);
        }
#line 534 "write_deps_file.m"
        {
#line 534 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".beam", (MR_Integer) 1, &parse_tree__write_deps_file__BeamFileName_108);
        }
#line 536 "write_deps_file.m"
        {
#line 536 "write_deps_file.m"
          parse_tree__write_deps_file__SubModules_109 = parse_tree__write_deps_file__submodules_2_f_0(parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__AllDeps_52);
        }
#line 538 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Target_104 == (MR_Integer) 1);
#line 538 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 538 "write_deps_file.m"
          {
#line 539 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__SubModules_109)) == (MR_mktag((MR_Integer) 1)));
#line 539 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 539 "write_deps_file.m"
              {
#line 539 "write_deps_file.m"
                parse_tree__write_deps_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__SubModules_109, (MR_Integer) 0)));
#line 539 "write_deps_file.m"
                parse_tree__write_deps_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__SubModules_109, (MR_Integer) 1)));
#line 539 "write_deps_file.m"
              }
#line 538 "write_deps_file.m"
          }
#line 545 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 541 "write_deps_file.m"
          {
#line 541 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_564_564;

#line 541 "write_deps_file.m"
            {
#line 541 "write_deps_file.m"
              parse_tree__write_deps_file__V_564_564 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_564_564, 0) = ((MR_Box) (parse_tree__write_deps_file__DllFileName_106));
#line 541 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_564_564, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])));
#line 541 "write_deps_file.m"
            }
#line 541 "write_deps_file.m"
            {
#line 541 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_564_564);
            }
#line 542 "write_deps_file.m"
            {
#line 542 "write_deps_file.m"
              parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SubModules_109, (MR_String) "", parse_tree__write_deps_file__DepStream_42);
            }
#line 544 "write_deps_file.m"
            {
#line 544 "write_deps_file.m"
              mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_42);
            }
#line 541 "write_deps_file.m"
          }
#line 545 "write_deps_file.m"
        else
#line 544 "write_deps_file.m"
          {
#line 544 "write_deps_file.m"
          }
#line 552 "write_deps_file.m"
        if ((parse_tree__write_deps_file__ContainsForeignCode_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 553 "write_deps_file.m"
          {
#line 553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImports1_114;
#line 553 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_572_572;
#line 554 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_115_115;
#line 554 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_116_116;

#line 554 "write_deps_file.m"
            {
#line 554 "write_deps_file.m"
              parse_tree__write_deps_file__V_572_572 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_deps_file__Items_27);
            }
#line 554 "write_deps_file.m"
            {
#line 554 "write_deps_file.m"
              parse_tree__prog_item__get_item_list_foreign_code_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__V_572_572, &parse_tree__write_deps_file__LangSet_112, &parse_tree__write_deps_file__ForeignImports1_114, &parse_tree__write_deps_file__V_115_115, &parse_tree__write_deps_file__V_116_116);
            }
#line 562 "write_deps_file.m"
            if ((parse_tree__write_deps_file__ForeignImports0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImports_113 = parse_tree__write_deps_file__ForeignImports1_114;
#line 562 "write_deps_file.m"
            else
#line 564 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImports_113 = parse_tree__write_deps_file__ForeignImports0_24;
#line 553 "write_deps_file.m"
          }
#line 552 "write_deps_file.m"
        else
#line 552 "write_deps_file.m"
          if ((parse_tree__write_deps_file__ContainsForeignCode_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 567 "write_deps_file.m"
            {
#line 568 "write_deps_file.m"
              {
#line 568 "write_deps_file.m"
                mercury__set__init_1_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, &parse_tree__write_deps_file__LangSet_112);
              }
#line 569 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImports_113 = parse_tree__write_deps_file__ForeignImports0_24;
#line 567 "write_deps_file.m"
            }
#line 552 "write_deps_file.m"
          else
#line 550 "write_deps_file.m"
            {
#line 550 "write_deps_file.m"
              parse_tree__write_deps_file__LangSet_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ContainsForeignCode_23, (MR_Integer) 0)));
#line 551 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImports_113 = parse_tree__write_deps_file__ForeignImports0_24;
#line 550 "write_deps_file.m"
            }
#line 575 "write_deps_file.m"
        {
#line 575 "write_deps_file.m"
          parse_tree__write_deps_file__V_573_573 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 575 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_573_573, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
#line 575 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_573_573, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_4));
#line 575 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_573_573, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 575 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_573_573, 3) = ((MR_Box) (parse_tree__write_deps_file__SourceFileModuleName_13));
#line 575 "write_deps_file.m"
        }
#line 575 "write_deps_file.m"
        {
#line 575 "write_deps_file.m"
          mercury__list__filter_map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__V_573_573, parse_tree__write_deps_file__ForeignImports_113, &parse_tree__write_deps_file__ForeignImportedModules_121);
        }
#line 586 "write_deps_file.m"
        if ((parse_tree__write_deps_file__ForeignImportedModules_121 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 585 "write_deps_file.m"
          {
#line 585 "write_deps_file.m"
          }
#line 586 "write_deps_file.m"
        else
#line 587 "write_deps_file.m"
          {
#line 587 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImportTargets_124;
#line 587 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ForeignImportExt_125;
#line 587 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__WriteForeignImportTarget_126;
#line 623 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_595_595;

#line 592 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Target_104 == (MR_Integer) 0))
#line 606 "write_deps_file.m"
              {
#line 606 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_577_577;

#line 611 "write_deps_file.m"
                {
#line 611 "write_deps_file.m"
                  parse_tree__write_deps_file__V_577_577 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_577_577, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_70));
#line 611 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_577_577, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "write_deps_file.m"
                }
#line 611 "write_deps_file.m"
                {
#line 611 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportTargets_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_67));
#line 611 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 1) = ((MR_Box) (parse_tree__write_deps_file__V_577_577));
#line 611 "write_deps_file.m"
                }
#line 612 "write_deps_file.m"
                parse_tree__write_deps_file__ForeignImportExt_125 = (MR_String) ".mh";
#line 606 "write_deps_file.m"
              }
#line 592 "write_deps_file.m"
            else
#line 592 "write_deps_file.m"
              if ((parse_tree__write_deps_file__Target_104 == (MR_Integer) 2))
#line 593 "write_deps_file.m"
                {
#line 595 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportTargets_124 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 596 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_125 = (MR_String) ".cs";
#line 593 "write_deps_file.m"
                }
#line 592 "write_deps_file.m"
              else
#line 592 "write_deps_file.m"
                if ((parse_tree__write_deps_file__Target_104 == (MR_Integer) 4))
#line 602 "write_deps_file.m"
                  {
#line 603 "write_deps_file.m"
                    {
#line 603 "write_deps_file.m"
                      parse_tree__write_deps_file__ForeignImportTargets_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 0) = ((MR_Box) (parse_tree__write_deps_file__BeamFileName_108));
#line 603 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "write_deps_file.m"
                    }
#line 604 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportExt_125 = (MR_String) ".hrl";
#line 602 "write_deps_file.m"
                  }
#line 592 "write_deps_file.m"
                else
#line 592 "write_deps_file.m"
                  if ((parse_tree__write_deps_file__Target_104 == (MR_Integer) 1))
#line 589 "write_deps_file.m"
                    {
#line 590 "write_deps_file.m"
                      {
#line 590 "write_deps_file.m"
                        parse_tree__write_deps_file__ForeignImportTargets_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 0) = ((MR_Box) (parse_tree__write_deps_file__DllFileName_106));
#line 590 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 590 "write_deps_file.m"
                      }
#line 591 "write_deps_file.m"
                      parse_tree__write_deps_file__ForeignImportExt_125 = (MR_String) ".dll";
#line 589 "write_deps_file.m"
                    }
#line 592 "write_deps_file.m"
                  else
#line 598 "write_deps_file.m"
                    {
#line 599 "write_deps_file.m"
                      {
#line 599 "write_deps_file.m"
                        parse_tree__write_deps_file__ForeignImportTargets_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 0) = ((MR_Box) (parse_tree__write_deps_file__ClassFileName_107));
#line 599 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 599 "write_deps_file.m"
                      }
#line 600 "write_deps_file.m"
                      parse_tree__write_deps_file__ForeignImportExt_125 = (MR_String) ".java";
#line 598 "write_deps_file.m"
                    }
#line 614 "write_deps_file.m"
            {
#line 614 "write_deps_file.m"
              parse_tree__write_deps_file__WriteForeignImportTarget_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 614 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_126, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[1]));
#line 614 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_126, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_5));
#line 614 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_126, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 614 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_126, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 614 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_126, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_42));
#line 614 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_126, 5) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportedModules_121));
#line 614 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_126, 6) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportExt_125));
#line 614 "write_deps_file.m"
            }
#line 623 "write_deps_file.m"
            {
#line 623 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_871_871, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__WriteForeignImportTarget_126, parse_tree__write_deps_file__ForeignImportTargets_124, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_595_595);
            }
#line 587 "write_deps_file.m"
          }
#line 627 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Target_104 == (MR_Integer) 1);
#line 627 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 627 "write_deps_file.m"
          {
#line 17084 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_883_883 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 628 "write_deps_file.m"
            {
#line 628 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_883_883, parse_tree__write_deps_file__LangSet_112);
            }
#line 627 "write_deps_file.m"
          }
#line 633 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 630 "write_deps_file.m"
          {
#line 630 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_884_884 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 630 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Langs_128;
#line 630 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_596_596;
#line 631 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_597_597;

#line 630 "write_deps_file.m"
            {
#line 630 "write_deps_file.m"
              parse_tree__write_deps_file__Langs_128 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_884_884, parse_tree__write_deps_file__LangSet_112);
            }
#line 631 "write_deps_file.m"
            {
#line 631 "write_deps_file.m"
              parse_tree__write_deps_file__V_596_596 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 631 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
#line 631 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_6));
#line 631 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 631 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 631 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_42));
#line 631 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 631 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 6) = ((MR_Box) (parse_tree__write_deps_file__AllDeps_52));
#line 631 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 7) = ((MR_Box) (parse_tree__write_deps_file__ForeignImports_113));
#line 631 "write_deps_file.m"
            }
#line 631 "write_deps_file.m"
            {
#line 631 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_884_884, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_596_596, parse_tree__write_deps_file__Langs_128, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_597_597);
            }
#line 630 "write_deps_file.m"
          }
#line 633 "write_deps_file.m"
        else
#line 631 "write_deps_file.m"
          {
#line 631 "write_deps_file.m"
          }
#line 643 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Target_104 == (MR_Integer) 1);
#line 643 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 644 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__SignAssembly_105 == (MR_Integer) 1);
#line 654 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 646 "write_deps_file.m"
          {
#line 646 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ModuleNameString_129;
#line 646 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__IlFileName_130;
#line 646 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_601_601;
#line 646 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_604_604;
#line 646 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_605_605;
#line 646 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_607_607;

#line 646 "write_deps_file.m"
            {
#line 646 "write_deps_file.m"
              parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_14, &parse_tree__write_deps_file__ModuleNameString_129);
            }
#line 647 "write_deps_file.m"
            {
#line 647 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".il", (MR_Integer) 1, &parse_tree__write_deps_file__IlFileName_130);
            }
#line 653 "write_deps_file.m"
            {
#line 653 "write_deps_file.m"
              parse_tree__write_deps_file__V_607_607 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_607_607, 0) = ((MR_Box) (parse_tree__write_deps_file__IlFileName_130));
#line 653 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_607_607, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105])));
#line 653 "write_deps_file.m"
            }
#line 652 "write_deps_file.m"
            {
#line 652 "write_deps_file.m"
              parse_tree__write_deps_file__V_605_605 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_605_605, 0) = ((MR_Box) ((MR_String) " = /keyf=mercury.sn\n"));
#line 652 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_605_605, 1) = ((MR_Box) (parse_tree__write_deps_file__V_607_607));
#line 652 "write_deps_file.m"
            }
#line 651 "write_deps_file.m"
            {
#line 651 "write_deps_file.m"
              parse_tree__write_deps_file__V_604_604 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_604_604, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleNameString_129));
#line 651 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_604_604, 1) = ((MR_Box) (parse_tree__write_deps_file__V_605_605));
#line 651 "write_deps_file.m"
            }
#line 651 "write_deps_file.m"
            {
#line 651 "write_deps_file.m"
              parse_tree__write_deps_file__V_601_601 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_601_601, 0) = ((MR_Box) ((MR_String) "ILASM_KEYFLAG-"));
#line 651 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_601_601, 1) = ((MR_Box) (parse_tree__write_deps_file__V_604_604));
#line 651 "write_deps_file.m"
            }
#line 650 "write_deps_file.m"
            {
#line 650 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_601_601);
            }
#line 646 "write_deps_file.m"
          }
#line 654 "write_deps_file.m"
        else
#line 650 "write_deps_file.m"
          {
#line 650 "write_deps_file.m"
          }
#line 658 "write_deps_file.m"
        {
#line 658 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_deps_file__IntFileName_131);
        }
#line 660 "write_deps_file.m"
        {
#line 660 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int2", (MR_Integer) 1, &parse_tree__write_deps_file__Int2FileName_132);
        }
#line 662 "write_deps_file.m"
        {
#line 662 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int3", (MR_Integer) 1, &parse_tree__write_deps_file__Int3FileName_133);
        }
#line 664 "write_deps_file.m"
        {
#line 664 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptFileName_134);
        }
#line 666 "write_deps_file.m"
        {
#line 666 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptFileName_135);
        }
#line 668 "write_deps_file.m"
        {
#line 668 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date3", (MR_Integer) 1, &parse_tree__write_deps_file__Date3FileName_136);
        }
#line 699 "write_deps_file.m"
        {
#line 699 "write_deps_file.m"
          parse_tree__write_deps_file__V_675_675 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_675_675, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_36));
#line 699 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_675_675, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[15])));
#line 699 "write_deps_file.m"
        }
#line 699 "write_deps_file.m"
        {
#line 699 "write_deps_file.m"
          parse_tree__write_deps_file__V_673_673 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_673_673, 0) = ((MR_Box) ((MR_String) " : "));
#line 699 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_673_673, 1) = ((MR_Box) (parse_tree__write_deps_file__V_675_675));
#line 699 "write_deps_file.m"
        }
#line 699 "write_deps_file.m"
        {
#line 699 "write_deps_file.m"
          parse_tree__write_deps_file__V_672_672 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_672_672, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptFileName_135));
#line 699 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_672_672, 1) = ((MR_Box) (parse_tree__write_deps_file__V_673_673));
#line 699 "write_deps_file.m"
        }
#line 698 "write_deps_file.m"
        {
#line 698 "write_deps_file.m"
          parse_tree__write_deps_file__V_670_670 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_670_670, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 698 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_670_670, 1) = ((MR_Box) (parse_tree__write_deps_file__V_672_672));
#line 698 "write_deps_file.m"
        }
#line 697 "write_deps_file.m"
        {
#line 697 "write_deps_file.m"
          parse_tree__write_deps_file__V_668_668 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_668_668, 0) = ((MR_Box) ((MR_String) "\n"));
#line 697 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_668_668, 1) = ((MR_Box) (parse_tree__write_deps_file__V_670_670));
#line 697 "write_deps_file.m"
        }
#line 697 "write_deps_file.m"
        {
#line 697 "write_deps_file.m"
          parse_tree__write_deps_file__V_667_667 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_667_667, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_63));
#line 697 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_667_667, 1) = ((MR_Box) (parse_tree__write_deps_file__V_668_668));
#line 697 "write_deps_file.m"
        }
#line 697 "write_deps_file.m"
        {
#line 697 "write_deps_file.m"
          parse_tree__write_deps_file__V_665_665 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_665_665, 0) = ((MR_Box) ((MR_String) " : "));
#line 697 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_665_665, 1) = ((MR_Box) (parse_tree__write_deps_file__V_667_667));
#line 697 "write_deps_file.m"
        }
#line 697 "write_deps_file.m"
        {
#line 697 "write_deps_file.m"
          parse_tree__write_deps_file__V_664_664 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_664_664, 0) = ((MR_Box) (parse_tree__write_deps_file__OptFileName_134));
#line 697 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_664_664, 1) = ((MR_Box) (parse_tree__write_deps_file__V_665_665));
#line 697 "write_deps_file.m"
        }
#line 696 "write_deps_file.m"
        {
#line 696 "write_deps_file.m"
          parse_tree__write_deps_file__V_662_662 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_662_662, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 696 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_662_662, 1) = ((MR_Box) (parse_tree__write_deps_file__V_664_664));
#line 696 "write_deps_file.m"
        }
#line 695 "write_deps_file.m"
        {
#line 695 "write_deps_file.m"
          parse_tree__write_deps_file__V_660_660 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_660_660, 0) = ((MR_Box) ((MR_String) "\n"));
#line 695 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_660_660, 1) = ((MR_Box) (parse_tree__write_deps_file__V_662_662));
#line 695 "write_deps_file.m"
        }
#line 695 "write_deps_file.m"
        {
#line 695 "write_deps_file.m"
          parse_tree__write_deps_file__V_659_659 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_659_659, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_136));
#line 695 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_659_659, 1) = ((MR_Box) (parse_tree__write_deps_file__V_660_660));
#line 695 "write_deps_file.m"
        }
#line 695 "write_deps_file.m"
        {
#line 695 "write_deps_file.m"
          parse_tree__write_deps_file__V_657_657 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_657_657, 0) = ((MR_Box) ((MR_String) " : "));
#line 695 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_657_657, 1) = ((MR_Box) (parse_tree__write_deps_file__V_659_659));
#line 695 "write_deps_file.m"
        }
#line 695 "write_deps_file.m"
        {
#line 695 "write_deps_file.m"
          parse_tree__write_deps_file__V_656_656 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_656_656, 0) = ((MR_Box) (parse_tree__write_deps_file__Int3FileName_133));
#line 695 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_656_656, 1) = ((MR_Box) (parse_tree__write_deps_file__V_657_657));
#line 695 "write_deps_file.m"
        }
#line 694 "write_deps_file.m"
        {
#line 694 "write_deps_file.m"
          parse_tree__write_deps_file__V_654_654 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_654_654, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 694 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_654_654, 1) = ((MR_Box) (parse_tree__write_deps_file__V_656_656));
#line 694 "write_deps_file.m"
        }
#line 693 "write_deps_file.m"
        {
#line 693 "write_deps_file.m"
          parse_tree__write_deps_file__V_652_652 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_652_652, 0) = ((MR_Box) ((MR_String) "\n"));
#line 693 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_652_652, 1) = ((MR_Box) (parse_tree__write_deps_file__V_654_654));
#line 693 "write_deps_file.m"
        }
#line 693 "write_deps_file.m"
        {
#line 693 "write_deps_file.m"
          parse_tree__write_deps_file__V_651_651 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_651_651, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_100));
#line 693 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_651_651, 1) = ((MR_Box) (parse_tree__write_deps_file__V_652_652));
#line 693 "write_deps_file.m"
        }
#line 693 "write_deps_file.m"
        {
#line 693 "write_deps_file.m"
          parse_tree__write_deps_file__V_649_649 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_649_649, 0) = ((MR_Box) ((MR_String) " : "));
#line 693 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_649_649, 1) = ((MR_Box) (parse_tree__write_deps_file__V_651_651));
#line 693 "write_deps_file.m"
        }
#line 693 "write_deps_file.m"
        {
#line 693 "write_deps_file.m"
          parse_tree__write_deps_file__V_648_648 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_648_648, 0) = ((MR_Box) (parse_tree__write_deps_file__Int2FileName_132));
#line 693 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_648_648, 1) = ((MR_Box) (parse_tree__write_deps_file__V_649_649));
#line 693 "write_deps_file.m"
        }
#line 692 "write_deps_file.m"
        {
#line 692 "write_deps_file.m"
          parse_tree__write_deps_file__V_646_646 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_646_646, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 692 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_646_646, 1) = ((MR_Box) (parse_tree__write_deps_file__V_648_648));
#line 692 "write_deps_file.m"
        }
#line 691 "write_deps_file.m"
        {
#line 691 "write_deps_file.m"
          parse_tree__write_deps_file__V_644_644 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_644_644, 0) = ((MR_Box) ((MR_String) "\n"));
#line 691 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_644_644, 1) = ((MR_Box) (parse_tree__write_deps_file__V_646_646));
#line 691 "write_deps_file.m"
        }
#line 691 "write_deps_file.m"
        {
#line 691 "write_deps_file.m"
          parse_tree__write_deps_file__V_643_643 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_643_643, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_100));
#line 691 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_643_643, 1) = ((MR_Box) (parse_tree__write_deps_file__V_644_644));
#line 691 "write_deps_file.m"
        }
#line 691 "write_deps_file.m"
        {
#line 691 "write_deps_file.m"
          parse_tree__write_deps_file__V_641_641 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_641_641, 0) = ((MR_Box) ((MR_String) " : "));
#line 691 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_641_641, 1) = ((MR_Box) (parse_tree__write_deps_file__V_643_643));
#line 691 "write_deps_file.m"
        }
#line 691 "write_deps_file.m"
        {
#line 691 "write_deps_file.m"
          parse_tree__write_deps_file__V_640_640 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_640_640, 0) = ((MR_Box) (parse_tree__write_deps_file__IntFileName_131));
#line 691 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_640_640, 1) = ((MR_Box) (parse_tree__write_deps_file__V_641_641));
#line 691 "write_deps_file.m"
        }
#line 690 "write_deps_file.m"
        {
#line 690 "write_deps_file.m"
          parse_tree__write_deps_file__V_638_638 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_638_638, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 690 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_638_638, 1) = ((MR_Box) (parse_tree__write_deps_file__V_640_640));
#line 690 "write_deps_file.m"
        }
#line 689 "write_deps_file.m"
        {
#line 689 "write_deps_file.m"
          parse_tree__write_deps_file__V_636_636 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_636_636, 0) = ((MR_Box) ((MR_String) "\n"));
#line 689 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_636_636, 1) = ((MR_Box) (parse_tree__write_deps_file__V_638_638));
#line 689 "write_deps_file.m"
        }
#line 689 "write_deps_file.m"
        {
#line 689 "write_deps_file.m"
          parse_tree__write_deps_file__V_635_635 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_635_635, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_101));
#line 689 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_635_635, 1) = ((MR_Box) (parse_tree__write_deps_file__V_636_636));
#line 689 "write_deps_file.m"
        }
#line 689 "write_deps_file.m"
        {
#line 689 "write_deps_file.m"
          parse_tree__write_deps_file__V_633_633 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_633_633, 0) = ((MR_Box) ((MR_String) " : "));
#line 689 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_633_633, 1) = ((MR_Box) (parse_tree__write_deps_file__V_635_635));
#line 689 "write_deps_file.m"
        }
#line 689 "write_deps_file.m"
        {
#line 689 "write_deps_file.m"
          parse_tree__write_deps_file__V_632_632 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_632_632, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_71));
#line 689 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_632_632, 1) = ((MR_Box) (parse_tree__write_deps_file__V_633_633));
#line 689 "write_deps_file.m"
        }
#line 688 "write_deps_file.m"
        {
#line 688 "write_deps_file.m"
          parse_tree__write_deps_file__V_629_629 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_629_629, 0) = ((MR_Box) ((MR_String) "\n"));
#line 688 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_629_629, 1) = ((MR_Box) (parse_tree__write_deps_file__V_632_632));
#line 688 "write_deps_file.m"
        }
#line 687 "write_deps_file.m"
        {
#line 687 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_629_629);
        }
#line 703 "write_deps_file.m"
        {
#line 703 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 643, &parse_tree__write_deps_file__UseSubdirs_137);
        }
#line 711 "write_deps_file.m"
        if ((parse_tree__write_deps_file__UseSubdirs_137 == (MR_Integer) 0))
#line 712 "write_deps_file.m"
          {
#line 712 "write_deps_file.m"
          }
#line 711 "write_deps_file.m"
        else
#line 705 "write_deps_file.m"
          {
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_683_683;
#line 707 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv6_STATE_VARIABLE_IO_685_685;

#line 706 "write_deps_file.m"
            {
#line 706 "write_deps_file.m"
              mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_42);
            }
#line 708 "write_deps_file.m"
            {
#line 708 "write_deps_file.m"
              parse_tree__write_deps_file__V_683_683 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 708 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_683_683, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0]));
#line 708 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_683_683, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_7));
#line 708 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_683_683, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 708 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_683_683, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 708 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_683_683, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_42));
#line 708 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_683_683, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 708 "write_deps_file.m"
            }
#line 707 "write_deps_file.m"
            {
#line 707 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_871_871, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_683_683, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[24]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv6_STATE_VARIABLE_IO_685_685);
            }
#line 705 "write_deps_file.m"
          }
#line 715 "write_deps_file.m"
        {
#line 715 "write_deps_file.m"
          parse_tree__write_deps_file__V_893_893 = parse_tree__source_file_map__default_source_file_1_f_0(parse_tree__write_deps_file__ModuleName_14);
        }
#line 715 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__SourceFileName_12, parse_tree__write_deps_file__V_893_893) == 0);
#line 715 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 761 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 731 "write_deps_file.m"
          {
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_704_704;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_707_707;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_708_708;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_710_710;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_711_711;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_713_713;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_715_715;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_717_717;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_718_718;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_720_720;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_721_721;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_723_723;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_724_724;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_726_726;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_728_728;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_729_729;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_731_731;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_732_732;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_734_734;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_735_735;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_737_737;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_739_739;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_740_740;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_742_742;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_743_743;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_745_745;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_746_746;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_748_748;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_750_750;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_751_751;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_753_753;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_754_754;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_756_756;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_757_757;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_759_759;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_761_761;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_763_763;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_764_764;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_766_766;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_767_767;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_769_769;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_770_770;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_772_772;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_774_774;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_775_775;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_777_777;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_778_778;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_780_780;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_781_781;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_783_783;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_785_785;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_787_787;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_788_788;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_790_790;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_791_791;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_793_793;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_794_794;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_796_796;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_798_798;
#line 731 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_800_800;

#line 758 "write_deps_file.m"
            {
#line 758 "write_deps_file.m"
              parse_tree__write_deps_file__V_800_800 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_800_800, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 758 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_800_800, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])));
#line 758 "write_deps_file.m"
            }
#line 758 "write_deps_file.m"
            {
#line 758 "write_deps_file.m"
              parse_tree__write_deps_file__V_798_798 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_798_798, 0) = ((MR_Box) ((MR_String) "--java-only "));
#line 758 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_798_798, 1) = ((MR_Box) (parse_tree__write_deps_file__V_800_800));
#line 758 "write_deps_file.m"
            }
#line 757 "write_deps_file.m"
            {
#line 757 "write_deps_file.m"
              parse_tree__write_deps_file__V_796_796 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_796_796, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 757 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_796_796, 1) = ((MR_Box) (parse_tree__write_deps_file__V_798_798));
#line 757 "write_deps_file.m"
            }
#line 756 "write_deps_file.m"
            {
#line 756 "write_deps_file.m"
              parse_tree__write_deps_file__V_794_794 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_794_794, 0) = ((MR_Box) ((MR_String) "\n"));
#line 756 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_794_794, 1) = ((MR_Box) (parse_tree__write_deps_file__V_796_796));
#line 756 "write_deps_file.m"
            }
#line 756 "write_deps_file.m"
            {
#line 756 "write_deps_file.m"
              parse_tree__write_deps_file__V_793_793 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_793_793, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 756 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_793_793, 1) = ((MR_Box) (parse_tree__write_deps_file__V_794_794));
#line 756 "write_deps_file.m"
            }
#line 756 "write_deps_file.m"
            {
#line 756 "write_deps_file.m"
              parse_tree__write_deps_file__V_791_791 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_791_791, 0) = ((MR_Box) ((MR_String) " : "));
#line 756 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_791_791, 1) = ((MR_Box) (parse_tree__write_deps_file__V_793_793));
#line 756 "write_deps_file.m"
            }
#line 756 "write_deps_file.m"
            {
#line 756 "write_deps_file.m"
              parse_tree__write_deps_file__V_790_790 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_790_790, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_69));
#line 756 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_790_790, 1) = ((MR_Box) (parse_tree__write_deps_file__V_791_791));
#line 756 "write_deps_file.m"
            }
#line 755 "write_deps_file.m"
            {
#line 755 "write_deps_file.m"
              parse_tree__write_deps_file__V_788_788 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 755 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_788_788, 0) = ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n"));
#line 755 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_788_788, 1) = ((MR_Box) (parse_tree__write_deps_file__V_790_790));
#line 755 "write_deps_file.m"
            }
#line 754 "write_deps_file.m"
            {
#line 754 "write_deps_file.m"
              parse_tree__write_deps_file__V_787_787 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_787_787, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 754 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_787_787, 1) = ((MR_Box) (parse_tree__write_deps_file__V_788_788));
#line 754 "write_deps_file.m"
            }
#line 754 "write_deps_file.m"
            {
#line 754 "write_deps_file.m"
              parse_tree__write_deps_file__V_785_785 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_785_785, 0) = ((MR_Box) ((MR_String) "--il-only "));
#line 754 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_785_785, 1) = ((MR_Box) (parse_tree__write_deps_file__V_787_787));
#line 754 "write_deps_file.m"
            }
#line 753 "write_deps_file.m"
            {
#line 753 "write_deps_file.m"
              parse_tree__write_deps_file__V_783_783 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_783_783, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 753 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_783_783, 1) = ((MR_Box) (parse_tree__write_deps_file__V_785_785));
#line 753 "write_deps_file.m"
            }
#line 752 "write_deps_file.m"
            {
#line 752 "write_deps_file.m"
              parse_tree__write_deps_file__V_781_781 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_781_781, 0) = ((MR_Box) ((MR_String) "\n"));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_781_781, 1) = ((MR_Box) (parse_tree__write_deps_file__V_783_783));
#line 752 "write_deps_file.m"
            }
#line 752 "write_deps_file.m"
            {
#line 752 "write_deps_file.m"
              parse_tree__write_deps_file__V_780_780 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_780_780, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_780_780, 1) = ((MR_Box) (parse_tree__write_deps_file__V_781_781));
#line 752 "write_deps_file.m"
            }
#line 752 "write_deps_file.m"
            {
#line 752 "write_deps_file.m"
              parse_tree__write_deps_file__V_778_778 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_778_778, 0) = ((MR_Box) ((MR_String) " : "));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_778_778, 1) = ((MR_Box) (parse_tree__write_deps_file__V_780_780));
#line 752 "write_deps_file.m"
            }
#line 752 "write_deps_file.m"
            {
#line 752 "write_deps_file.m"
              parse_tree__write_deps_file__V_777_777 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_777_777, 0) = ((MR_Box) (parse_tree__write_deps_file__ILDateFileName_68));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_777_777, 1) = ((MR_Box) (parse_tree__write_deps_file__V_778_778));
#line 752 "write_deps_file.m"
            }
#line 751 "write_deps_file.m"
            {
#line 751 "write_deps_file.m"
              parse_tree__write_deps_file__V_775_775 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_775_775, 0) = ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n"));
#line 751 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_775_775, 1) = ((MR_Box) (parse_tree__write_deps_file__V_777_777));
#line 751 "write_deps_file.m"
            }
#line 751 "write_deps_file.m"
            {
#line 751 "write_deps_file.m"
              parse_tree__write_deps_file__V_774_774 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_774_774, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 751 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_774_774, 1) = ((MR_Box) (parse_tree__write_deps_file__V_775_775));
#line 751 "write_deps_file.m"
            }
#line 750 "write_deps_file.m"
            {
#line 750 "write_deps_file.m"
              parse_tree__write_deps_file__V_772_772 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_772_772, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 750 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_772_772, 1) = ((MR_Box) (parse_tree__write_deps_file__V_774_774));
#line 750 "write_deps_file.m"
            }
#line 749 "write_deps_file.m"
            {
#line 749 "write_deps_file.m"
              parse_tree__write_deps_file__V_770_770 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_770_770, 0) = ((MR_Box) ((MR_String) "\n"));
#line 749 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_770_770, 1) = ((MR_Box) (parse_tree__write_deps_file__V_772_772));
#line 749 "write_deps_file.m"
            }
#line 749 "write_deps_file.m"
            {
#line 749 "write_deps_file.m"
              parse_tree__write_deps_file__V_769_769 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_769_769, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 749 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_769_769, 1) = ((MR_Box) (parse_tree__write_deps_file__V_770_770));
#line 749 "write_deps_file.m"
            }
#line 749 "write_deps_file.m"
            {
#line 749 "write_deps_file.m"
              parse_tree__write_deps_file__V_767_767 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_767_767, 0) = ((MR_Box) ((MR_String) " : "));
#line 749 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_767_767, 1) = ((MR_Box) (parse_tree__write_deps_file__V_769_769));
#line 749 "write_deps_file.m"
            }
#line 749 "write_deps_file.m"
            {
#line 749 "write_deps_file.m"
              parse_tree__write_deps_file__V_766_766 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_766_766, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_64));
#line 749 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_766_766, 1) = ((MR_Box) (parse_tree__write_deps_file__V_767_767));
#line 749 "write_deps_file.m"
            }
#line 748 "write_deps_file.m"
            {
#line 748 "write_deps_file.m"
              parse_tree__write_deps_file__V_764_764 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_764_764, 0) = ((MR_Box) ((MR_String) "\n"));
#line 748 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_764_764, 1) = ((MR_Box) (parse_tree__write_deps_file__V_766_766));
#line 748 "write_deps_file.m"
            }
#line 748 "write_deps_file.m"
            {
#line 748 "write_deps_file.m"
              parse_tree__write_deps_file__V_763_763 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_763_763, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 748 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_763_763, 1) = ((MR_Box) (parse_tree__write_deps_file__V_764_764));
#line 748 "write_deps_file.m"
            }
#line 748 "write_deps_file.m"
            {
#line 748 "write_deps_file.m"
              parse_tree__write_deps_file__V_761_761 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_761_761, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCTOIFLAGS) "));
#line 748 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_761_761, 1) = ((MR_Box) (parse_tree__write_deps_file__V_763_763));
#line 748 "write_deps_file.m"
            }
#line 747 "write_deps_file.m"
            {
#line 747 "write_deps_file.m"
              parse_tree__write_deps_file__V_759_759 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_759_759, 0) = ((MR_Box) ((MR_String) "\t\044(MCTOI) \044(ALL_GRADEFLAGS) "));
#line 747 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_759_759, 1) = ((MR_Box) (parse_tree__write_deps_file__V_761_761));
#line 747 "write_deps_file.m"
            }
#line 746 "write_deps_file.m"
            {
#line 746 "write_deps_file.m"
              parse_tree__write_deps_file__V_757_757 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_757_757, 0) = ((MR_Box) ((MR_String) "\n"));
#line 746 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_757_757, 1) = ((MR_Box) (parse_tree__write_deps_file__V_759_759));
#line 746 "write_deps_file.m"
            }
#line 745 "write_deps_file.m"
            {
#line 745 "write_deps_file.m"
              parse_tree__write_deps_file__V_756_756 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_756_756, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 745 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_756_756, 1) = ((MR_Box) (parse_tree__write_deps_file__V_757_757));
#line 745 "write_deps_file.m"
            }
#line 745 "write_deps_file.m"
            {
#line 745 "write_deps_file.m"
              parse_tree__write_deps_file__V_754_754 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_754_754, 0) = ((MR_Box) ((MR_String) " : "));
#line 745 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_754_754, 1) = ((MR_Box) (parse_tree__write_deps_file__V_756_756));
#line 745 "write_deps_file.m"
            }
#line 745 "write_deps_file.m"
            {
#line 745 "write_deps_file.m"
              parse_tree__write_deps_file__V_753_753 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_753_753, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_36));
#line 745 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_753_753, 1) = ((MR_Box) (parse_tree__write_deps_file__V_754_754));
#line 745 "write_deps_file.m"
            }
#line 744 "write_deps_file.m"
            {
#line 744 "write_deps_file.m"
              parse_tree__write_deps_file__V_751_751 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_751_751, 0) = ((MR_Box) ((MR_String) "\n"));
#line 744 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_751_751, 1) = ((MR_Box) (parse_tree__write_deps_file__V_753_753));
#line 744 "write_deps_file.m"
            }
#line 744 "write_deps_file.m"
            {
#line 744 "write_deps_file.m"
              parse_tree__write_deps_file__V_750_750 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_750_750, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 744 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_750_750, 1) = ((MR_Box) (parse_tree__write_deps_file__V_751_751));
#line 744 "write_deps_file.m"
            }
#line 743 "write_deps_file.m"
            {
#line 743 "write_deps_file.m"
              parse_tree__write_deps_file__V_748_748 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_748_748, 0) = ((MR_Box) ((MR_String) "\t\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) "));
#line 743 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_748_748, 1) = ((MR_Box) (parse_tree__write_deps_file__V_750_750));
#line 743 "write_deps_file.m"
            }
#line 742 "write_deps_file.m"
            {
#line 742 "write_deps_file.m"
              parse_tree__write_deps_file__V_746_746 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_746_746, 0) = ((MR_Box) ((MR_String) "\n"));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_746_746, 1) = ((MR_Box) (parse_tree__write_deps_file__V_748_748));
#line 742 "write_deps_file.m"
            }
#line 742 "write_deps_file.m"
            {
#line 742 "write_deps_file.m"
              parse_tree__write_deps_file__V_745_745 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_745_745, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_745_745, 1) = ((MR_Box) (parse_tree__write_deps_file__V_746_746));
#line 742 "write_deps_file.m"
            }
#line 742 "write_deps_file.m"
            {
#line 742 "write_deps_file.m"
              parse_tree__write_deps_file__V_743_743 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_743_743, 0) = ((MR_Box) ((MR_String) " : "));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_743_743, 1) = ((MR_Box) (parse_tree__write_deps_file__V_745_745));
#line 742 "write_deps_file.m"
            }
#line 742 "write_deps_file.m"
            {
#line 742 "write_deps_file.m"
              parse_tree__write_deps_file__V_742_742 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_742_742, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_63));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_742_742, 1) = ((MR_Box) (parse_tree__write_deps_file__V_743_743));
#line 742 "write_deps_file.m"
            }
#line 741 "write_deps_file.m"
            {
#line 741 "write_deps_file.m"
              parse_tree__write_deps_file__V_740_740 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_740_740, 0) = ((MR_Box) ((MR_String) "\n"));
#line 741 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_740_740, 1) = ((MR_Box) (parse_tree__write_deps_file__V_742_742));
#line 741 "write_deps_file.m"
            }
#line 741 "write_deps_file.m"
            {
#line 741 "write_deps_file.m"
              parse_tree__write_deps_file__V_739_739 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_739_739, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 741 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_739_739, 1) = ((MR_Box) (parse_tree__write_deps_file__V_740_740));
#line 741 "write_deps_file.m"
            }
#line 740 "write_deps_file.m"
            {
#line 740 "write_deps_file.m"
              parse_tree__write_deps_file__V_737_737 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_737_737, 0) = ((MR_Box) ((MR_String) "\t\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) "));
#line 740 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_737_737, 1) = ((MR_Box) (parse_tree__write_deps_file__V_739_739));
#line 740 "write_deps_file.m"
            }
#line 739 "write_deps_file.m"
            {
#line 739 "write_deps_file.m"
              parse_tree__write_deps_file__V_735_735 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_735_735, 0) = ((MR_Box) ((MR_String) "\n"));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_735_735, 1) = ((MR_Box) (parse_tree__write_deps_file__V_737_737));
#line 739 "write_deps_file.m"
            }
#line 739 "write_deps_file.m"
            {
#line 739 "write_deps_file.m"
              parse_tree__write_deps_file__V_734_734 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_734_734, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_734_734, 1) = ((MR_Box) (parse_tree__write_deps_file__V_735_735));
#line 739 "write_deps_file.m"
            }
#line 739 "write_deps_file.m"
            {
#line 739 "write_deps_file.m"
              parse_tree__write_deps_file__V_732_732 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_732_732, 0) = ((MR_Box) ((MR_String) " : "));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_732_732, 1) = ((MR_Box) (parse_tree__write_deps_file__V_734_734));
#line 739 "write_deps_file.m"
            }
#line 739 "write_deps_file.m"
            {
#line 739 "write_deps_file.m"
              parse_tree__write_deps_file__V_731_731 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_731_731, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_136));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_731_731, 1) = ((MR_Box) (parse_tree__write_deps_file__V_732_732));
#line 739 "write_deps_file.m"
            }
#line 738 "write_deps_file.m"
            {
#line 738 "write_deps_file.m"
              parse_tree__write_deps_file__V_729_729 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_729_729, 0) = ((MR_Box) ((MR_String) "\n"));
#line 738 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_729_729, 1) = ((MR_Box) (parse_tree__write_deps_file__V_731_731));
#line 738 "write_deps_file.m"
            }
#line 738 "write_deps_file.m"
            {
#line 738 "write_deps_file.m"
              parse_tree__write_deps_file__V_728_728 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_728_728, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 738 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_728_728, 1) = ((MR_Box) (parse_tree__write_deps_file__V_729_729));
#line 738 "write_deps_file.m"
            }
#line 737 "write_deps_file.m"
            {
#line 737 "write_deps_file.m"
              parse_tree__write_deps_file__V_726_726 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_726_726, 0) = ((MR_Box) ((MR_String) "\t\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) "));
#line 737 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_726_726, 1) = ((MR_Box) (parse_tree__write_deps_file__V_728_728));
#line 737 "write_deps_file.m"
            }
#line 736 "write_deps_file.m"
            {
#line 736 "write_deps_file.m"
              parse_tree__write_deps_file__V_724_724 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_724_724, 0) = ((MR_Box) ((MR_String) "\n"));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_724_724, 1) = ((MR_Box) (parse_tree__write_deps_file__V_726_726));
#line 736 "write_deps_file.m"
            }
#line 736 "write_deps_file.m"
            {
#line 736 "write_deps_file.m"
              parse_tree__write_deps_file__V_723_723 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_723_723, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_723_723, 1) = ((MR_Box) (parse_tree__write_deps_file__V_724_724));
#line 736 "write_deps_file.m"
            }
#line 736 "write_deps_file.m"
            {
#line 736 "write_deps_file.m"
              parse_tree__write_deps_file__V_721_721 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_721_721, 0) = ((MR_Box) ((MR_String) " : "));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_721_721, 1) = ((MR_Box) (parse_tree__write_deps_file__V_723_723));
#line 736 "write_deps_file.m"
            }
#line 736 "write_deps_file.m"
            {
#line 736 "write_deps_file.m"
              parse_tree__write_deps_file__V_720_720 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_720_720, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_100));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_720_720, 1) = ((MR_Box) (parse_tree__write_deps_file__V_721_721));
#line 736 "write_deps_file.m"
            }
#line 735 "write_deps_file.m"
            {
#line 735 "write_deps_file.m"
              parse_tree__write_deps_file__V_718_718 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_718_718, 0) = ((MR_Box) ((MR_String) "\n"));
#line 735 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_718_718, 1) = ((MR_Box) (parse_tree__write_deps_file__V_720_720));
#line 735 "write_deps_file.m"
            }
#line 735 "write_deps_file.m"
            {
#line 735 "write_deps_file.m"
              parse_tree__write_deps_file__V_717_717 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_717_717, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 735 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_717_717, 1) = ((MR_Box) (parse_tree__write_deps_file__V_718_718));
#line 735 "write_deps_file.m"
            }
#line 735 "write_deps_file.m"
            {
#line 735 "write_deps_file.m"
              parse_tree__write_deps_file__V_715_715 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_715_715, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCPIFLAGS) "));
#line 735 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_715_715, 1) = ((MR_Box) (parse_tree__write_deps_file__V_717_717));
#line 735 "write_deps_file.m"
            }
#line 734 "write_deps_file.m"
            {
#line 734 "write_deps_file.m"
              parse_tree__write_deps_file__V_713_713 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_713_713, 0) = ((MR_Box) ((MR_String) "\t\044(MCPI) \044(ALL_GRADEFLAGS) "));
#line 734 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_713_713, 1) = ((MR_Box) (parse_tree__write_deps_file__V_715_715));
#line 734 "write_deps_file.m"
            }
#line 733 "write_deps_file.m"
            {
#line 733 "write_deps_file.m"
              parse_tree__write_deps_file__V_711_711 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_711_711, 0) = ((MR_Box) ((MR_String) "\n"));
#line 733 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_711_711, 1) = ((MR_Box) (parse_tree__write_deps_file__V_713_713));
#line 733 "write_deps_file.m"
            }
#line 733 "write_deps_file.m"
            {
#line 733 "write_deps_file.m"
              parse_tree__write_deps_file__V_710_710 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_710_710, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 733 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_710_710, 1) = ((MR_Box) (parse_tree__write_deps_file__V_711_711));
#line 733 "write_deps_file.m"
            }
#line 733 "write_deps_file.m"
            {
#line 733 "write_deps_file.m"
              parse_tree__write_deps_file__V_708_708 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_708_708, 0) = ((MR_Box) ((MR_String) " : "));
#line 733 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_708_708, 1) = ((MR_Box) (parse_tree__write_deps_file__V_710_710));
#line 733 "write_deps_file.m"
            }
#line 733 "write_deps_file.m"
            {
#line 733 "write_deps_file.m"
              parse_tree__write_deps_file__V_707_707 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_707_707, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_101));
#line 733 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_707_707, 1) = ((MR_Box) (parse_tree__write_deps_file__V_708_708));
#line 733 "write_deps_file.m"
            }
#line 732 "write_deps_file.m"
            {
#line 732 "write_deps_file.m"
              parse_tree__write_deps_file__V_704_704 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_704_704, 0) = ((MR_Box) ((MR_String) "\n"));
#line 732 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_704_704, 1) = ((MR_Box) (parse_tree__write_deps_file__V_707_707));
#line 732 "write_deps_file.m"
            }
#line 731 "write_deps_file.m"
            {
#line 731 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_704_704);
            }
#line 731 "write_deps_file.m"
          }
#line 761 "write_deps_file.m"
        else
#line 731 "write_deps_file.m"
          {
#line 731 "write_deps_file.m"
          }
#line 765 "write_deps_file.m"
        {
#line 765 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_42);
        }
#line 766 "write_deps_file.m"
        {
#line 766 "write_deps_file.m"
          mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_37, parse_tree__write_deps_file__DependencyFileName_35, &parse_tree__write_deps_file__Result3_138);
        }
#line 799 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Result3_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 800 "write_deps_file.m"
          {
#line 801 "write_deps_file.m"
            {
#line 801 "write_deps_file.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, (MR_String) " done.\n");
#line 801 "write_deps_file.m"
              return;
            }
#line 800 "write_deps_file.m"
          }
#line 799 "write_deps_file.m"
        else
#line 769 "write_deps_file.m"
          {
#line 769 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Result4_140;

#line 772 "write_deps_file.m"
            {
#line 772 "write_deps_file.m"
              mercury__io__remove_file_4_p_0(parse_tree__write_deps_file__DependencyFileName_35, &parse_tree__write_deps_file__Result4_140);
            }
#line 781 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Result4_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 782 "write_deps_file.m"
              {
#line 782 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__Result5_143;

#line 783 "write_deps_file.m"
                {
#line 783 "write_deps_file.m"
                  mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_37, parse_tree__write_deps_file__DependencyFileName_35, &parse_tree__write_deps_file__Result5_143);
                }
#line 794 "write_deps_file.m"
                if ((parse_tree__write_deps_file__Result5_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "write_deps_file.m"
                  {
#line 796 "write_deps_file.m"
                    {
#line 796 "write_deps_file.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, (MR_String) " done.\n");
#line 796 "write_deps_file.m"
                      return;
                    }
#line 795 "write_deps_file.m"
                  }
#line 794 "write_deps_file.m"
                else
#line 786 "write_deps_file.m"
                  {
#line 786 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__Error5_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result5_143, (MR_Integer) 0)));
#line 786 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_815_815;
#line 786 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_817_817;
#line 786 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_818_818;
#line 786 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_820_820;
#line 786 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_821_821;
#line 786 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_823_823;
#line 786 "write_deps_file.m"
                    MR_String parse_tree__write_deps_file__Message_860;
#line 786 "write_deps_file.m"
                    MR_String parse_tree__write_deps_file__ErrorMsg_861;

#line 787 "write_deps_file.m"
                    {
#line 787 "write_deps_file.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, (MR_String) " failed.\n");
                    }
#line 788 "write_deps_file.m"
                    {
#line 788 "write_deps_file.m"
                      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_33);
                    }
#line 789 "write_deps_file.m"
                    {
#line 789 "write_deps_file.m"
                      mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error5_144, &parse_tree__write_deps_file__ErrorMsg_861);
                    }
#line 792 "write_deps_file.m"
                    {
#line 792 "write_deps_file.m"
                      parse_tree__write_deps_file__V_823_823 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_823_823, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_861));
#line 792 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_823_823, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "write_deps_file.m"
                    }
#line 792 "write_deps_file.m"
                    {
#line 792 "write_deps_file.m"
                      parse_tree__write_deps_file__V_821_821 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_821_821, 0) = ((MR_Box) ((MR_String) "\': "));
#line 792 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_821_821, 1) = ((MR_Box) (parse_tree__write_deps_file__V_823_823));
#line 792 "write_deps_file.m"
                    }
#line 791 "write_deps_file.m"
                    {
#line 791 "write_deps_file.m"
                      parse_tree__write_deps_file__V_820_820 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_820_820, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_35));
#line 791 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_820_820, 1) = ((MR_Box) (parse_tree__write_deps_file__V_821_821));
#line 791 "write_deps_file.m"
                    }
#line 791 "write_deps_file.m"
                    {
#line 791 "write_deps_file.m"
                      parse_tree__write_deps_file__V_818_818 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_818_818, 0) = ((MR_Box) ((MR_String) "\' as \140"));
#line 791 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_818_818, 1) = ((MR_Box) (parse_tree__write_deps_file__V_820_820));
#line 791 "write_deps_file.m"
                    }
#line 791 "write_deps_file.m"
                    {
#line 791 "write_deps_file.m"
                      parse_tree__write_deps_file__V_817_817 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_817_817, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_37));
#line 791 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_817_817, 1) = ((MR_Box) (parse_tree__write_deps_file__V_818_818));
#line 791 "write_deps_file.m"
                    }
#line 790 "write_deps_file.m"
                    {
#line 790 "write_deps_file.m"
                      parse_tree__write_deps_file__V_815_815 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_815_815, 0) = ((MR_Box) ((MR_String) "can\'t rename file \140"));
#line 790 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_815_815, 1) = ((MR_Box) (parse_tree__write_deps_file__V_817_817));
#line 790 "write_deps_file.m"
                    }
#line 790 "write_deps_file.m"
                    {
#line 790 "write_deps_file.m"
                      mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_815_815, &parse_tree__write_deps_file__Message_860);
                    }
#line 793 "write_deps_file.m"
                    {
#line 793 "write_deps_file.m"
                      libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_860);
#line 793 "write_deps_file.m"
                      return;
                    }
#line 786 "write_deps_file.m"
                  }
#line 782 "write_deps_file.m"
              }
#line 781 "write_deps_file.m"
            else
#line 774 "write_deps_file.m"
              {
#line 774 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__Error4_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result4_140, (MR_Integer) 0)));
#line 774 "write_deps_file.m"
                MR_String parse_tree__write_deps_file__ErrorMsg_142;
#line 774 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_829_829;
#line 774 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_831_831;
#line 774 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_832_832;
#line 774 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_834_834;
#line 774 "write_deps_file.m"
                MR_String parse_tree__write_deps_file__Message_859;

#line 775 "write_deps_file.m"
                {
#line 775 "write_deps_file.m"
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, (MR_String) " failed.\n");
                }
#line 776 "write_deps_file.m"
                {
#line 776 "write_deps_file.m"
                  libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_33);
                }
#line 777 "write_deps_file.m"
                {
#line 777 "write_deps_file.m"
                  mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error4_141, &parse_tree__write_deps_file__ErrorMsg_142);
                }
#line 779 "write_deps_file.m"
                {
#line 779 "write_deps_file.m"
                  parse_tree__write_deps_file__V_834_834 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_834_834, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_142));
#line 779 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_834_834, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "write_deps_file.m"
                }
#line 779 "write_deps_file.m"
                {
#line 779 "write_deps_file.m"
                  parse_tree__write_deps_file__V_832_832 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_832_832, 0) = ((MR_Box) ((MR_String) "\': "));
#line 779 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_832_832, 1) = ((MR_Box) (parse_tree__write_deps_file__V_834_834));
#line 779 "write_deps_file.m"
                }
#line 778 "write_deps_file.m"
                {
#line 778 "write_deps_file.m"
                  parse_tree__write_deps_file__V_831_831 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_831_831, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_35));
#line 778 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_831_831, 1) = ((MR_Box) (parse_tree__write_deps_file__V_832_832));
#line 778 "write_deps_file.m"
                }
#line 778 "write_deps_file.m"
                {
#line 778 "write_deps_file.m"
                  parse_tree__write_deps_file__V_829_829 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_829_829, 0) = ((MR_Box) ((MR_String) "can\'t remove file \140"));
#line 778 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_829_829, 1) = ((MR_Box) (parse_tree__write_deps_file__V_831_831));
#line 778 "write_deps_file.m"
                }
#line 778 "write_deps_file.m"
                {
#line 778 "write_deps_file.m"
                  mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_829_829, &parse_tree__write_deps_file__Message_859);
                }
#line 780 "write_deps_file.m"
                {
#line 780 "write_deps_file.m"
                  libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_859);
#line 780 "write_deps_file.m"
                  return;
                }
#line 774 "write_deps_file.m"
              }
#line 769 "write_deps_file.m"
          }
#line 168 "write_deps_file.m"
      }
#line 132 "write_deps_file.m"
  }
#line 40 "write_deps_file.m"
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
