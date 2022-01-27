/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version rotd-2014-09-30
** configured for x86_64-apple-darwin13.3.0.
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
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_find.mih"
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



#line 1920 "write_deps_file.m"
struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s {
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17;
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20;
#line 1926 "write_deps_file.m"
  MR_bool parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded;
#line 1942 "write_deps_file.m"
  jmp_buf parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0;
#line 1942 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30;
#line 1942 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46;
#line 1942 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47;
#line 1943 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_28_28;
#line 1943 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_28_28;
#line 1943 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_46_46;
#line 1920 "write_deps_file.m"
};


#line 169 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 172 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;

#line 175 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

#line 178 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 181 "parse_tree.write_deps_file.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 184 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 187 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 1560 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 1560 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1560 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 1560 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
#line 1560 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5);

#line 1553 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
#line 1553 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_5,
#line 1553 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_6,
#line 1553 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8);

#line 1525 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1523__1_3_p_0_1(
#line 1525 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1525 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1525 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1523 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1523__1_3_p_0(
#line 1523 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5,
#line 1523 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_15,
#line 1523 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_16);

#line 1525 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__foreign_modules__1525__1_2_f_0(
#line 1525 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_15,
#line 1525 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_18,
#line 1525 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_19);

#line 1170 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1170__1_5_p_0(
#line 1170 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1170 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_119,
#line 1170 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__HeadVar__3_120);

#line 1121 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1121__1_2_p_0(
#line 1121 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1121 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_92);

#line 980 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__write_foreign_dependency_for_il__980__1_2_f_0(
#line 980 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 980 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_63);

#line 792 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__submodules__792__1_3_p_0(
#line 792 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 792 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Str_7,
#line 792 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_10);

#line 2258 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2258__1_1_f_0(
#line 2258 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_16);

#line 588 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__588__1_7_p_0(
#line 588 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 588 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_42,
#line 588 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImportedModules_121,
#line 588 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ForeignImportExt_125,
#line 588 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_584);

#line 549 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__549__1_3_p_0(
#line 549 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_13,
#line 549 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_574,
#line 549 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_575);

#line 267 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__267__1_7_p_0(
#line 267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_14,
#line 267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__NestedDeps_21,
#line 267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_42,
#line 267 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_307);

#line 2374 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
#line 2374 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym1_4,
#line 2374 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym2_5,
#line 2374 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Result_6);

#line 2283 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
#line 2283 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 2283 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 2283 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 2283 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_4,
#line 2283 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
#line 2283 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6);

#line 2233 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
#line 2233 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_4,
#line 2233 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 2233 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__FileName_6);

#line 2143 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
#line 2143 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_17,
#line 2143 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_18,
#line 2143 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_19,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_20,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ExeFileName_21,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_22,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_25,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LibFileName_26,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__JarFileName_28,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DepFileName_29,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DvFileName_30);

#line 2130 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
#line 2130 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 2130 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_9,
#line 2130 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 2130 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_11,
#line 2130 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5);

#line 2113 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
#line 2113 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2113 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2113 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2113 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 2107 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 2107 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_10);

#line 1942 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
#line 1942 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1943 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
#line 1943 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1942 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
#line 1942 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1942 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
#line 1942 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1920 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_14,
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_15,
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_16,
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_17,
#line 1920 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_18,
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_20,
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_21,
#line 1920 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
#line 1920 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
#line 1920 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24);

#line 1877 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
#line 1877 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_11,
#line 1877 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12,
#line 1877 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_13,
#line 1877 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_14,
#line 1877 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_15,
#line 1877 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_16,
#line 1877 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DepFileName_17,
#line 1877 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DvFileName_18);

#line 1643 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
#line 1643 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_19,
#line 1643 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_20,
#line 1643 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_21,
#line 1643 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_22,
#line 1643 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_23,
#line 1643 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
#line 1643 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_25,
#line 1643 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_26,
#line 1643 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
#line 1643 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
#line 1643 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
#line 1643 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
#line 1643 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
#line 1643 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__JarFileName_32,
#line 1643 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LibFileName_33,
#line 1643 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34);

#line 1585 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
#line 1585 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1585 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1585 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1585 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1585 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12);

#line 1523 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0_1(
#line 1523 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1523 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1523 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1519 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0(
#line 1519 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_4,
#line 1519 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5);

#line 1496 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
#line 1496 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1496 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_2,
#line 1496 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3);

#line 1170 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
#line 1170 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1170 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1170 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
#line 1170 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
#line 1170 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

#line 1121 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
#line 1121 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1121 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 1102 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
#line 1102 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1102 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1102 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1099 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
#line 1099 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1099 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1099 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1099 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 1075 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
#line 1075 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1075 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1075 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1075 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1075 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12);

#line 1003 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
#line 1003 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 1003 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 1003 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 1003 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Ext_10);

#line 979 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0_1(
#line 979 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 979 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 935 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0(
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__AllDeps_12,
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImports_13,
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignLang_14);

#line 909 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
#line 909 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 909 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_2,
#line 909 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_3);

#line 895 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
#line 895 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 895 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 895 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 895 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4);

#line 881 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
#line 881 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 881 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_2,
#line 881 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 881 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_4,
#line 881 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_5);

#line 871 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(
#line 871 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 871 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 871 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFile_8);

#line 868 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1(
#line 868 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 868 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 868 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 868 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 862 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 862 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFiles_8);

#line 843 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(
#line 843 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 843 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 843 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__3_3,
#line 843 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4);

#line 836 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
#line 836 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 836 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2);

#line 814 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
#line 814 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 814 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_10,
#line 814 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Prefix_11,
#line 814 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_12,
#line 814 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Basis_13,
#line 814 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_14);

#line 803 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
#line 803 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 803 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 803 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 803 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4);

#line 792 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0_1(
#line 792 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 792 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 785 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0(
#line 785 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 785 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules0_5);

#line 2258 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0_1(
#line 2258 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2258 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 682 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_7(
#line 682 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 682 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 682 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 682 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 605 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_6(
#line 605 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 605 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 605 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 605 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 588 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_5(
#line 588 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 588 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 588 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 588 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 549 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_4(
#line 549 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 549 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 549 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 375 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_3(
#line 375 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 375 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 353 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_2(
#line 353 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 353 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 267 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_1(
#line 267 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 267 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 267 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 267 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[122][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[3][10];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[3][5];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[6][6];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[1][11];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][9];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[3][1];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[2][8];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[122][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[6][6] = {
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0))
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[2][8] = {
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



#line 1781 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1789 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0
  }
};

#line 1797 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

#line 1806 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1815 "parse_tree.write_deps_file.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1824 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__write_deps_file__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0
  }
};

#line 1832 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1560 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 1560 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1560 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 1560 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
#line 1560 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5)
#line 1560 "write_deps_file.m"
{
#line 1565 "write_deps_file.m"
  while (MR_TRUE)
#line 1565 "write_deps_file.m"
    {
#line 1565 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 1565 "write_deps_file.m"
      {
#line 1565 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 1565 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1565 "write_deps_file.m"
          *parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4;
#line 1565 "write_deps_file.m"
        else
#line 1567 "write_deps_file.m"
          {
#line 1567 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_48_48 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1567 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_50_50;
#line 1567 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1567 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1567 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleImports_17;
#line 1567 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FactDeps_18;
#line 1567 "write_deps_file.m"
            MR_Integer parse_tree__write_deps_file__NumFactDeps_19;
#line 1567 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleList_20;
#line 1567 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__NewLinkObjs_22;
#line 1567 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_25_25;
#line 1567 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;
#line 1568 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv0_V_25_25;
#line 1568 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_16_16;
#line 1571 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_28_28;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_29_29;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_30_30;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_31_31;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_32_32;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_33_33;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_34_34;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_35_35;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_36_36;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_37_37;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_38_38;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_39_39;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_40_40;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_41_41;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_42_42;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_43_43;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_44_44;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_45_45;
#line 1571 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_46_46;
#line 1571 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_47_47;

#line 1568 "write_deps_file.m"
            {
#line 1568 "write_deps_file.m"
              mercury__map__lookup_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_48_48, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__HeadVar__2_2, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__conv0_V_25_25);
            }
#line 1568 "write_deps_file.m"
            parse_tree__write_deps_file__V_25_25 = ((MR_Word) parse_tree__write_deps_file__conv0_V_25_25);
#line 1568 "write_deps_file.m"
            parse_tree__write_deps_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_25_25, (MR_Integer) 0)));
#line 1568 "write_deps_file.m"
            parse_tree__write_deps_file__ModuleImports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_25_25, (MR_Integer) 1)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 0)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 1)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 2)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 3)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 4)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 5)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 6)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 7)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 8)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 9)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__FactDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 10)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 11)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 12)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 13)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 14)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 15)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 16)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 17)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 18)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 19)));
#line 1571 "write_deps_file.m"
            parse_tree__write_deps_file__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 20)));
#line 1993 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_50_50 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1572 "write_deps_file.m"
            {
#line 1572 "write_deps_file.m"
              mercury__list__length_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_50_50, parse_tree__write_deps_file__FactDeps_18, &parse_tree__write_deps_file__NumFactDeps_19);
            }
#line 1573 "write_deps_file.m"
            {
#line 1573 "write_deps_file.m"
              mercury__list__duplicate_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_48_48, parse_tree__write_deps_file__NumFactDeps_19, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__ModuleList_20);
            }
#line 1574 "write_deps_file.m"
            {
#line 1574 "write_deps_file.m"
              mercury__assoc_list__from_corresponding_lists_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_50_50, parse_tree__write_deps_file__TypeCtorInfo_48_48, parse_tree__write_deps_file__FactDeps_18, parse_tree__write_deps_file__ModuleList_20, &parse_tree__write_deps_file__NewLinkObjs_22);
            }
#line 1580 "write_deps_file.m"
            {
#line 1580 "write_deps_file.m"
              mercury__list__append_3_p_1((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], parse_tree__write_deps_file__NewLinkObjs_22, parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4, &parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26);
            }
#line 1581 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 1581 "write_deps_file.m"
            {
#line 1581 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__1__tmp_copy_1 = parse_tree__write_deps_file__Modules_12;
#line 1581 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0__tmp_copy_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;

#line 1581 "write_deps_file.m"
              parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0__tmp_copy_4;
#line 1581 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__1_1 = parse_tree__write_deps_file__HeadVar__1__tmp_copy_1;
#line 1581 "write_deps_file.m"
            }
#line 1581 "write_deps_file.m"
            continue;
#line 1567 "write_deps_file.m"
          }
#line 1565 "write_deps_file.m"
      }
#line 1565 "write_deps_file.m"
      break;
#line 1565 "write_deps_file.m"
    }
#line 1560 "write_deps_file.m"
}

#line 1553 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
#line 1553 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_5,
#line 1553 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_6,
#line 1553 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8)
#line 1553 "write_deps_file.m"
{
#line 1556 "write_deps_file.m"
  {
#line 1556 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1556 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs0_9;

#line 1557 "write_deps_file.m"
    {
#line 1557 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(parse_tree__write_deps_file__Modules_5, parse_tree__write_deps_file__DepsMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_deps_file__ExtraLinkObjs0_9);
    }
#line 1558 "write_deps_file.m"
    {
#line 1558 "write_deps_file.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], parse_tree__write_deps_file__ExtraLinkObjs0_9, parse_tree__write_deps_file__ExtraLinkObjs_8);
#line 1558 "write_deps_file.m"
      return;
    }
#line 1556 "write_deps_file.m"
  }
#line 1553 "write_deps_file.m"
}

#line 1525 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1523__1_3_p_0_1(
#line 1525 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1525 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1525 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1525 "write_deps_file.m"
{
#line 1525 "write_deps_file.m"
  {
#line 1525 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1525 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1525 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv1_HeadVar__3_19;

#line 1525 "write_deps_file.m"
    {
#line 1525 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__func__foreign_modules__1525__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_HeadVar__3_19);
    }
#line 1525 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1525 "write_deps_file.m"
      {
#line 1525 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_HeadVar__3_19));
#line 1525 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1525 "write_deps_file.m"
      }
#line 1525 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1525 "write_deps_file.m"
  }
#line 1525 "write_deps_file.m"
}

#line 1523 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1523__1_3_p_0(
#line 1523 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5,
#line 1523 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_15,
#line 1523 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_16)
#line 1523 "write_deps_file.m"
{
#line 1523 "write_deps_file.m"
  {
#line 1523 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1523 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_23_23;
#line 1523 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeInfo_24_24;
#line 1523 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_34_58;
#line 1523 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LangList_10;
#line 1523 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_17_17;
#line 1523 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_32;
#line 1523 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Langs_33;
#line 1523 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_34_34;
#line 1523 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_35_35;
#line 1541 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_V_34_34;
#line 1541 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_31_31;
#line 1542 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_36_36;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_37_37;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_38_38;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_40_40;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_41_41;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_42_42;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_44_44;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_45_45;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_46_46;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_47_47;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_48_48;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_49_49;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_51_51;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 1542 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_54_54;
#line 1542 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_55_55;

#line 1541 "write_deps_file.m"
    {
#line 1541 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_5, ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_15)), &parse_tree__write_deps_file__conv0_V_34_34);
    }
#line 1541 "write_deps_file.m"
    parse_tree__write_deps_file__V_34_34 = ((MR_Word) parse_tree__write_deps_file__conv0_V_34_34);
#line 1541 "write_deps_file.m"
    parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_34_34, (MR_Integer) 0)));
#line 1541 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_34_34, (MR_Integer) 1)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 0)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 1)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 2)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 3)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 4)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 5)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 6)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 7)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 8)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 9)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 10)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 11)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 12)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 13)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 14)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 15)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 16)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 17)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 18)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 19)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 20)));
#line 1542 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 1542 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1542 "write_deps_file.m"
      {
#line 1542 "write_deps_file.m"
        parse_tree__write_deps_file__Langs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, (MR_Integer) 0)));
#line 2259 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_34_58 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 1543 "write_deps_file.m"
        {
#line 1543 "write_deps_file.m"
          parse_tree__write_deps_file__LangList_10 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_34_58, parse_tree__write_deps_file__Langs_33);
        }
#line 2266 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_23_23 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 2268 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeInfo_24_24 = (MR_Word) &parse_tree__write_deps_file_scalar_common_2[0];
#line 1525 "write_deps_file.m"
        {
#line 1525 "write_deps_file.m"
          parse_tree__write_deps_file__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1525 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[5]));
#line 1525 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 1) = ((MR_Box) (parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1523__1_3_p_0_1));
#line 1525 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1525 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 3) = ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_15));
#line 1525 "write_deps_file.m"
        }
#line 1525 "write_deps_file.m"
        {
#line 1525 "write_deps_file.m"
          *parse_tree__write_deps_file__HeadVar__3_16 = mercury__list__filter_map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__TypeInfo_24_24, parse_tree__write_deps_file__V_17_17, parse_tree__write_deps_file__LangList_10);
        }
#line 1525 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1542 "write_deps_file.m"
      }
#line 1523 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1523 "write_deps_file.m"
  }
#line 1523 "write_deps_file.m"
}

#line 1525 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__foreign_modules__1525__1_2_f_0(
#line 1525 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_15,
#line 1525 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_18,
#line 1525 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_19)
#line 1525 "write_deps_file.m"
{
#line 1525 "write_deps_file.m"
  {
#line 1525 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1525 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__NewM_12;
#line 1525 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Ext_13;

#line 1526 "write_deps_file.m"
    {
#line 1526 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(parse_tree__write_deps_file__HeadVar__1_15, parse_tree__write_deps_file__HeadVar__2_18, &parse_tree__write_deps_file__NewM_12);
    }
#line 1525 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1525 "write_deps_file.m"
      {
#line 1527 "write_deps_file.m"
        {
#line 1527 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(parse_tree__write_deps_file__HeadVar__2_18, &parse_tree__write_deps_file__Ext_13);
        }
#line 1525 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 1525 "write_deps_file.m"
          {
#line 1525 "write_deps_file.m"
            {
#line 1525 "write_deps_file.m"
              MR_Word base;
#line 1525 "write_deps_file.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1525 "write_deps_file.m"
              *parse_tree__write_deps_file__HeadVar__3_19 = base;
#line 1525 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__write_deps_file__NewM_12));
#line 1525 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__write_deps_file__Ext_13));
#line 1525 "write_deps_file.m"
            }
#line 1525 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1525 "write_deps_file.m"
          }
#line 1525 "write_deps_file.m"
      }
#line 1525 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1525 "write_deps_file.m"
  }
#line 1525 "write_deps_file.m"
}

#line 1170 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1170__1_5_p_0(
#line 1170 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1170 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_119,
#line 1170 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__HeadVar__3_120)
#line 1170 "write_deps_file.m"
{
#line 1170 "write_deps_file.m"
  {
#line 1170 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1170 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__F0_45;
#line 1170 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__M_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_119, (MR_Integer) 0)));
#line 1170 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__E_462 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_119, (MR_Integer) 1)));

#line 1171 "write_deps_file.m"
    {
#line 1171 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__M_461, parse_tree__write_deps_file__E_462, (MR_Integer) 0, &parse_tree__write_deps_file__F0_45);
    }
#line 1172 "write_deps_file.m"
    {
#line 1172 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_120 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", parse_tree__write_deps_file__F0_45);
    }
#line 1170 "write_deps_file.m"
  }
#line 1170 "write_deps_file.m"
}

#line 1121 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1121__1_2_p_0(
#line 1121 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1121 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_92)
#line 1121 "write_deps_file.m"
{
#line 1121 "write_deps_file.m"
  {
#line 1121 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1121 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_26;
#line 1121 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1121 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 1123 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_V_93_93;
#line 1123 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_25_25;
#line 1124 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_465_465;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_466_466;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_467_467;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_468_468;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_469_469;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_470_470;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_471_471;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_472_472;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_473_473;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_474_474;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_475_475;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_476_476;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_477_477;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_478_478;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_479_479;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_480_480;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_481_481;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_482_482;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_483_483;
#line 1124 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_484_484;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_27_27;
#line 1124 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_28_28;

#line 1123 "write_deps_file.m"
    {
#line 1123 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_92)), &parse_tree__write_deps_file__conv0_V_93_93);
    }
#line 1123 "write_deps_file.m"
    parse_tree__write_deps_file__V_93_93 = ((MR_Word) parse_tree__write_deps_file__conv0_V_93_93);
#line 1123 "write_deps_file.m"
    parse_tree__write_deps_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_93_93, (MR_Integer) 0)));
#line 1123 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_93_93, (MR_Integer) 1)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_465_465 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 0)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_466_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 1)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_467_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 2)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_468_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 3)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_469_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 4)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 5)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 6)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 7)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 8)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 9)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_474_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 10)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 11)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 12)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_477_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 13)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_478_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 14)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_479_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 15)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_480_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 16)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_481_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 17)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_482_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 18)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 19)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__V_484_484 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 20)));
#line 1124 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__V_94_94)) == (MR_mktag((MR_Integer) 1)));
#line 1124 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1124 "write_deps_file.m"
      {
#line 1124 "write_deps_file.m"
        parse_tree__write_deps_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, (MR_Integer) 0)));
#line 1124 "write_deps_file.m"
        parse_tree__write_deps_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, (MR_Integer) 1)));
#line 1124 "write_deps_file.m"
      }
#line 1121 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1121 "write_deps_file.m"
  }
#line 1121 "write_deps_file.m"
}

#line 980 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__write_foreign_dependency_for_il__980__1_2_f_0(
#line 980 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 980 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_63)
#line 980 "write_deps_file.m"
{
#line 980 "write_deps_file.m"
  {
#line 980 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 980 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HeadVar__3_64;

#line 980 "write_deps_file.m"
    {
#line 980 "write_deps_file.m"
      return parse_tree__write_deps_file__HeadVar__3_64 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(parse_tree__write_deps_file__HeadVar__2_63, parse_tree__write_deps_file__ModuleName_11);
    }
#line 980 "write_deps_file.m"
    return parse_tree__write_deps_file__HeadVar__3_64;
#line 980 "write_deps_file.m"
  }
#line 980 "write_deps_file.m"
}

#line 792 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__submodules__792__1_3_p_0(
#line 792 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 792 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Str_7,
#line 792 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_10)
#line 792 "write_deps_file.m"
{
#line 792 "write_deps_file.m"
  {
#line 792 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 792 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_13_13;

#line 793 "write_deps_file.m"
    {
#line 793 "write_deps_file.m"
      parse_tree__write_deps_file__V_13_13 = mdbcomp__sym_name__outermost_qualifier_1_f_0(parse_tree__write_deps_file__HeadVar__3_10);
    }
#line 793 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__Str_7, parse_tree__write_deps_file__V_13_13) == 0);
#line 792 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 792 "write_deps_file.m"
      {
#line 794 "write_deps_file.m"
        {
#line 794 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__write_deps_file__HeadVar__3_10, parse_tree__write_deps_file__Module_4);
        }
#line 794 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 792 "write_deps_file.m"
      }
#line 792 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 792 "write_deps_file.m"
  }
#line 792 "write_deps_file.m"
}

#line 2258 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2258__1_1_f_0(
#line 2258 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_16)
#line 2258 "write_deps_file.m"
{
#line 2258 "write_deps_file.m"
  {
#line 2258 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2258 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HeadVar__2_17;

#line 2259 "write_deps_file.m"
    {
#line 2259 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__HeadVar__1_16);
    }
#line 2258 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2260 "write_deps_file.m"
      {
#line 2260 "write_deps_file.m"
        parse_tree__write_deps_file__HeadVar__2_17 = (MR_Word) &parse_tree__write_deps_file_scalar_common_8[2];
#line 2260 "write_deps_file.m"
      }
#line 2258 "write_deps_file.m"
    else
#line 2263 "write_deps_file.m"
      {
#line 2263 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_19_19;

#line 2263 "write_deps_file.m"
        {
#line 2263 "write_deps_file.m"
          parse_tree__write_deps_file__V_19_19 = mdbcomp__sym_name__outermost_qualifier_1_f_0(parse_tree__write_deps_file__HeadVar__1_16);
        }
#line 2263 "write_deps_file.m"
        {
#line 2263 "write_deps_file.m"
          parse_tree__write_deps_file__HeadVar__2_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2263 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_17, 0) = ((MR_Box) (parse_tree__write_deps_file__V_19_19));
#line 2263 "write_deps_file.m"
        }
#line 2263 "write_deps_file.m"
      }
#line 2258 "write_deps_file.m"
    return parse_tree__write_deps_file__HeadVar__2_17;
#line 2258 "write_deps_file.m"
  }
#line 2258 "write_deps_file.m"
}

#line 588 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__588__1_7_p_0(
#line 588 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 588 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_42,
#line 588 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImportedModules_121,
#line 588 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ForeignImportExt_125,
#line 588 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_584)
#line 588 "write_deps_file.m"
{
#line 588 "write_deps_file.m"
  {
#line 588 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 590 "write_deps_file.m"
    {
#line 590 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_42, (MR_String) "\n\n");
    }
#line 591 "write_deps_file.m"
    {
#line 591 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__HeadVar__5_584);
    }
#line 592 "write_deps_file.m"
    {
#line 592 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_42, (MR_String) " : ");
    }
#line 593 "write_deps_file.m"
    {
#line 593 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ForeignImportedModules_121, parse_tree__write_deps_file__ForeignImportExt_125, parse_tree__write_deps_file__DepStream_42);
    }
#line 595 "write_deps_file.m"
    {
#line 595 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_42, (MR_String) "\n\n");
#line 595 "write_deps_file.m"
      return;
    }
#line 588 "write_deps_file.m"
  }
#line 588 "write_deps_file.m"
}

#line 549 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__549__1_3_p_0(
#line 549 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_13,
#line 549 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_574,
#line 549 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_575)
#line 549 "write_deps_file.m"
{
#line 549 "write_deps_file.m"
  {
#line 549 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 556 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_576_576;

#line 551 "write_deps_file.m"
    {
#line 551 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_575 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(parse_tree__write_deps_file__HeadVar__2_574, parse_tree__write_deps_file__SourceFileModuleName_13);
    }
#line 556 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) *parse_tree__write_deps_file__HeadVar__3_575)) == (MR_mktag((MR_Integer) 0)));
#line 556 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 556 "write_deps_file.m"
      {
#line 556 "write_deps_file.m"
        parse_tree__write_deps_file__V_576_576 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__write_deps_file__HeadVar__3_575, (MR_Integer) 0)));
#line 556 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__V_576_576, (MR_String) "mercury") == 0);
#line 556 "write_deps_file.m"
      }
#line 556 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 549 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 549 "write_deps_file.m"
  }
#line 549 "write_deps_file.m"
}

#line 267 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__267__1_7_p_0(
#line 267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_14,
#line 267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__NestedDeps_21,
#line 267 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_42,
#line 267 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_307)
#line 267 "write_deps_file.m"
{
#line 267 "write_deps_file.m"
  {
#line 267 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 267 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ExtName_80;
#line 267 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_312_312;
#line 267 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_315_315;

#line 268 "write_deps_file.m"
    {
#line 268 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__HeadVar__5_307, (MR_Integer) 1, &parse_tree__write_deps_file__ExtName_80);
    }
#line 270 "write_deps_file.m"
    {
#line 270 "write_deps_file.m"
      parse_tree__write_deps_file__V_315_315 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_315_315, 0) = ((MR_Box) (parse_tree__write_deps_file__ExtName_80));
#line 270 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_315_315, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 270 "write_deps_file.m"
    }
#line 270 "write_deps_file.m"
    {
#line 270 "write_deps_file.m"
      parse_tree__write_deps_file__V_312_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_312_312, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 270 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_312_312, 1) = ((MR_Box) (parse_tree__write_deps_file__V_315_315));
#line 270 "write_deps_file.m"
    }
#line 270 "write_deps_file.m"
    {
#line 270 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_312_312);
    }
#line 271 "write_deps_file.m"
    {
#line 271 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__NestedDeps_21, parse_tree__write_deps_file__HeadVar__5_307, parse_tree__write_deps_file__DepStream_42);
#line 271 "write_deps_file.m"
      return;
    }
#line 267 "write_deps_file.m"
  }
#line 267 "write_deps_file.m"
}

#line 2374 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
#line 2374 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym1_4,
#line 2374 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym2_5,
#line 2374 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Result_6)
#line 2374 "write_deps_file.m"
{
#line 2377 "write_deps_file.m"
  {
#line 2377 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2377 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str1_7;
#line 2377 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str2_8;

#line 2378 "write_deps_file.m"
    {
#line 2378 "write_deps_file.m"
      parse_tree__write_deps_file__Str1_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym1_4);
    }
#line 2379 "write_deps_file.m"
    {
#line 2379 "write_deps_file.m"
      parse_tree__write_deps_file__Str2_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym2_5);
    }
#line 2380 "write_deps_file.m"
    {
#line 2380 "write_deps_file.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__write_deps_file__Result_6, parse_tree__write_deps_file__Str1_7, parse_tree__write_deps_file__Str2_8);
#line 2380 "write_deps_file.m"
      return;
    }
#line 2377 "write_deps_file.m"
  }
#line 2374 "write_deps_file.m"
}

#line 2283 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
#line 2283 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 2283 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 2283 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 2283 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_4,
#line 2283 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
#line 2283 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6)
#line 2283 "write_deps_file.m"
{
#line 2287 "write_deps_file.m"
  {
#line 2287 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 2287 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2287 "write_deps_file.m"
      {
#line 2287 "write_deps_file.m"
        *parse_tree__write_deps_file__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2287 "write_deps_file.m"
        *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2287 "write_deps_file.m"
      }
#line 2287 "write_deps_file.m"
    else
#line 2289 "write_deps_file.m"
      {
#line 2289 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Dep_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
#line 2289 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Deps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));
#line 2289 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2289 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;

#line 2290 "write_deps_file.m"
        {
#line 2290 "write_deps_file.m"
          parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__BuildOptFiles_2, parse_tree__write_deps_file__Deps_18, parse_tree__write_deps_file__IntermodDirs_4, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39, &parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40);
        }
#line 2927 "parse_tree.write_deps_file.c"
        if ((parse_tree__write_deps_file__BuildOptFiles_2 == (MR_Integer) 0))
#line 2929 "parse_tree.write_deps_file.c"
          {
#line 2931 "parse_tree.write_deps_file.c"
            MR_String parse_tree__write_deps_file__OptName_27;
#line 2933 "parse_tree.write_deps_file.c"
            MR_Word parse_tree__write_deps_file__Result2_28;
#line 2935 "parse_tree.write_deps_file.c"
            MR_String parse_tree__write_deps_file__TransOptName_31;
#line 2937 "parse_tree.write_deps_file.c"
            MR_Word parse_tree__write_deps_file__Result3_32;

#line 2312 "write_deps_file.m"
            {
#line 2312 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_27);
            }
#line 2314 "write_deps_file.m"
            {
#line 2314 "write_deps_file.m"
              libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_27, &parse_tree__write_deps_file__Result2_28);
            }
#line 2319 "write_deps_file.m"
            if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_28)) == (MR_mktag((MR_Integer) 1))))
#line 2320 "write_deps_file.m"
              *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2319 "write_deps_file.m"
            else
#line 2318 "write_deps_file.m"
              {
#line 2318 "write_deps_file.m"
                MR_Word base;
#line 2318 "write_deps_file.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2318 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2318 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2318 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2318 "write_deps_file.m"
              }
#line 2322 "write_deps_file.m"
            {
#line 2322 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_31);
            }
#line 2324 "write_deps_file.m"
            {
#line 2324 "write_deps_file.m"
              libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__TransOptName_31, &parse_tree__write_deps_file__Result3_32);
            }
#line 2329 "write_deps_file.m"
            if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result3_32)) == (MR_mktag((MR_Integer) 1))))
#line 2330 "write_deps_file.m"
              *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
#line 2329 "write_deps_file.m"
            else
#line 2328 "write_deps_file.m"
              {
#line 2328 "write_deps_file.m"
                MR_Word base;
#line 2328 "write_deps_file.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2328 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2328 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2328 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2328 "write_deps_file.m"
              }
#line 3000 "parse_tree.write_deps_file.c"
          }
#line 3002 "parse_tree.write_deps_file.c"
        else
#line 3004 "parse_tree.write_deps_file.c"
          {
#line 3006 "parse_tree.write_deps_file.c"
            MR_Word parse_tree__write_deps_file__Result1_23;

#line 2294 "write_deps_file.m"
            {
#line 2294 "write_deps_file.m"
              parse_tree__prog_io_find__search_for_module_source_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__Dep_17, &parse_tree__write_deps_file__Result1_23);
            }
#line 3014 "parse_tree.write_deps_file.c"
            if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_23)) == (MR_mktag((MR_Integer) 1))))
#line 3016 "parse_tree.write_deps_file.c"
              {
#line 3018 "parse_tree.write_deps_file.c"
                MR_String parse_tree__write_deps_file__OptName_59;
#line 3020 "parse_tree.write_deps_file.c"
                MR_Word parse_tree__write_deps_file__Result2_60;
#line 3022 "parse_tree.write_deps_file.c"
                MR_String parse_tree__write_deps_file__TransOptName_61;
#line 3024 "parse_tree.write_deps_file.c"
                MR_Word parse_tree__write_deps_file__Result3_62;

#line 2312 "write_deps_file.m"
                {
#line 2312 "write_deps_file.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_59);
                }
#line 2314 "write_deps_file.m"
                {
#line 2314 "write_deps_file.m"
                  libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_59, &parse_tree__write_deps_file__Result2_60);
                }
#line 2319 "write_deps_file.m"
                if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_60)) == (MR_mktag((MR_Integer) 1))))
#line 2320 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2319 "write_deps_file.m"
                else
#line 2318 "write_deps_file.m"
                  {
#line 2318 "write_deps_file.m"
                    MR_Word base;
#line 2318 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2318 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2318 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2318 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2318 "write_deps_file.m"
                  }
#line 2322 "write_deps_file.m"
                {
#line 2322 "write_deps_file.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_61);
                }
#line 2324 "write_deps_file.m"
                {
#line 2324 "write_deps_file.m"
                  libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__TransOptName_61, &parse_tree__write_deps_file__Result3_62);
                }
#line 2329 "write_deps_file.m"
                if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result3_62)) == (MR_mktag((MR_Integer) 1))))
#line 2330 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
#line 2329 "write_deps_file.m"
                else
#line 2328 "write_deps_file.m"
                  {
#line 2328 "write_deps_file.m"
                    MR_Word base;
#line 2328 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2328 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2328 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2328 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2328 "write_deps_file.m"
                  }
#line 3087 "parse_tree.write_deps_file.c"
              }
#line 3089 "parse_tree.write_deps_file.c"
            else
#line 3091 "parse_tree.write_deps_file.c"
              {
#line 2298 "write_deps_file.m"
                {
#line 2298 "write_deps_file.m"
                  MR_Word base;
#line 2298 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2298 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2298 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2298 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2298 "write_deps_file.m"
                }
#line 2299 "write_deps_file.m"
                {
#line 2299 "write_deps_file.m"
                  MR_Word base;
#line 2299 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2299 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2299 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2299 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2299 "write_deps_file.m"
                }
#line 2300 "write_deps_file.m"
                {
#line 2300 "write_deps_file.m"
                  mercury__io__seen_2_p_0();
#line 2300 "write_deps_file.m"
                  return;
                }
#line 3128 "parse_tree.write_deps_file.c"
              }
#line 3130 "parse_tree.write_deps_file.c"
          }
#line 2289 "write_deps_file.m"
      }
#line 2287 "write_deps_file.m"
  }
#line 2283 "write_deps_file.m"
}

#line 2233 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
#line 2233 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_4,
#line 2233 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 2233 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__FileName_6)
#line 2233 "write_deps_file.m"
{
#line 2235 "write_deps_file.m"
  {
#line 2235 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Deps_7;
#line 2235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_9;
#line 2235 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileName_10;
#line 2236 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_Deps_7;
#line 2237 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_8_8;
#line 2241 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileBase_11;

#line 2236 "write_deps_file.m"
    {
#line 2236 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_4, ((MR_Box) (parse_tree__write_deps_file__ModuleName_5)), &parse_tree__write_deps_file__conv0_Deps_7);
    }
#line 2236 "write_deps_file.m"
    parse_tree__write_deps_file__Deps_7 = ((MR_Word) parse_tree__write_deps_file__conv0_Deps_7);
#line 2237 "write_deps_file.m"
    parse_tree__write_deps_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 0)));
#line 2237 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 1)));
#line 2238 "write_deps_file.m"
    {
#line 2238 "write_deps_file.m"
      parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(parse_tree__write_deps_file__ModuleImports_9, &parse_tree__write_deps_file__SourceFileName_10);
    }
#line 2239 "write_deps_file.m"
    {
#line 2239 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_10, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_11);
    }
#line 2241 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2240 "write_deps_file.m"
      *parse_tree__write_deps_file__FileName_6 = parse_tree__write_deps_file__SourceFileBase_11;
#line 2241 "write_deps_file.m"
    else
#line 2242 "write_deps_file.m"
      {
#line 2242 "write_deps_file.m"
        {
#line 2242 "write_deps_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_deps_file", (MR_String) "predicate \140parse_tree.write_deps_file.get_source_file\'/3", (MR_String) "source file name doesn\'t end in \140.m\'");
#line 2242 "write_deps_file.m"
          return;
        }
#line 2242 "write_deps_file.m"
      }
#line 2235 "write_deps_file.m"
  }
#line 2233 "write_deps_file.m"
}

#line 2143 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
#line 2143 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_17,
#line 2143 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_18,
#line 2143 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_19,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_20,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ExeFileName_21,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_22,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_25,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LibFileName_26,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__JarFileName_28,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DepFileName_29,
#line 2143 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DvFileName_30)
#line 2143 "write_deps_file.m"
{
#line 2151 "write_deps_file.m"
  {
#line 2151 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2151 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__CleanTargetName_32;
#line 2151 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__RealCleanTargetName_33;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_42_42;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_46_46;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_49_49;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_57_57;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_58_58;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_60_60;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_62_62;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_63_63;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_65_65;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_66_66;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_68_68;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_70_70;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_71_71;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_73_73;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_75_75;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_76_76;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_78_78;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_79_79;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_81_81;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_83_83;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_84_84;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_86_86;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_87_87;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_89_89;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_92_92;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_96_96;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_97_97;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_99_99;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_101_101;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_102_102;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_104_104;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_106_106;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_107_107;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_109_109;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_111_111;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_112_112;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_114_114;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_116_116;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_117_117;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_119_119;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_121_121;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_122_122;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_124_124;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_126_126;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_127_127;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_129_129;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_131_131;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_140_140;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_143_143;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_147_147;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_150_150;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_151_151;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_153_153;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_154_154;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_156_156;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_157_157;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_159_159;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_161_161;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_162_162;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_164_164;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_166_166;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_167_167;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_169_169;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_171_171;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_172_172;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_174_174;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_176_176;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_177_177;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_179_179;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_181_181;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_182_182;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_184_184;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_186_186;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_187_187;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_189_189;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_191_191;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_192_192;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_194_194;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_196_196;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_197_197;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_199_199;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_201_201;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_202_202;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_204_204;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_206_206;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_207_207;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_209_209;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_211_211;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_212_212;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_214_214;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_216_216;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_217_217;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_219_219;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_221_221;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_222_222;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_224_224;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_226_226;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_227_227;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_229_229;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_231_231;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_232_232;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_234_234;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_236_236;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_237_237;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_239_239;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_241_241;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_242_242;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_244_244;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_246_246;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_247_247;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_249_249;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_251_251;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_252_252;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_254_254;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_256_256;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_260_260;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_263_263;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_264_264;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_266_266;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_267_267;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_269_269;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_270_270;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_272_272;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_273_273;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_275_275;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_276_276;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_278_278;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_279_279;
#line 2151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_281_281;

#line 2160 "write_deps_file.m"
    {
#line 2160 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".clean", (MR_Integer) 1, &parse_tree__write_deps_file__CleanTargetName_32);
    }
#line 2164 "write_deps_file.m"
    parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96]);
#line 2163 "write_deps_file.m"
    {
#line 2163 "write_deps_file.m"
      parse_tree__write_deps_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2163 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2163 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2163 "write_deps_file.m"
    }
#line 2163 "write_deps_file.m"
    {
#line 2163 "write_deps_file.m"
      parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2163 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) ((MR_String) "clean_local : "));
#line 2163 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (parse_tree__write_deps_file__V_42_42));
#line 2163 "write_deps_file.m"
    }
#line 2162 "write_deps_file.m"
    {
#line 2162 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_39_39);
    }
#line 2184 "write_deps_file.m"
    {
#line 2184 "write_deps_file.m"
      parse_tree__write_deps_file__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])));
#line 2184 "write_deps_file.m"
    }
#line 2184 "write_deps_file.m"
    {
#line 2184 "write_deps_file.m"
      parse_tree__write_deps_file__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 1) = ((MR_Box) (parse_tree__write_deps_file__V_131_131));
#line 2184 "write_deps_file.m"
    }
#line 2183 "write_deps_file.m"
    {
#line 2183 "write_deps_file.m"
      parse_tree__write_deps_file__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_127_127, 0) = ((MR_Box) ((MR_String) ".errs) | xargs rm -f\n"));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_127_127, 1) = ((MR_Box) (parse_tree__write_deps_file__V_129_129));
#line 2183 "write_deps_file.m"
    }
#line 2183 "write_deps_file.m"
    {
#line 2183 "write_deps_file.m"
      parse_tree__write_deps_file__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 1) = ((MR_Box) (parse_tree__write_deps_file__V_127_127));
#line 2183 "write_deps_file.m"
    }
#line 2183 "write_deps_file.m"
    {
#line 2183 "write_deps_file.m"
      parse_tree__write_deps_file__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_124_124, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_124_124, 1) = ((MR_Box) (parse_tree__write_deps_file__V_126_126));
#line 2183 "write_deps_file.m"
    }
#line 2182 "write_deps_file.m"
    {
#line 2182 "write_deps_file.m"
      parse_tree__write_deps_file__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_122_122, 0) = ((MR_Box) ((MR_String) ".profs) | xargs rm -f\n"));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_122_122, 1) = ((MR_Box) (parse_tree__write_deps_file__V_124_124));
#line 2182 "write_deps_file.m"
    }
#line 2182 "write_deps_file.m"
    {
#line 2182 "write_deps_file.m"
      parse_tree__write_deps_file__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 1) = ((MR_Box) (parse_tree__write_deps_file__V_122_122));
#line 2182 "write_deps_file.m"
    }
#line 2182 "write_deps_file.m"
    {
#line 2182 "write_deps_file.m"
      parse_tree__write_deps_file__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_119_119, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_119_119, 1) = ((MR_Box) (parse_tree__write_deps_file__V_121_121));
#line 2182 "write_deps_file.m"
    }
#line 2181 "write_deps_file.m"
    {
#line 2181 "write_deps_file.m"
      parse_tree__write_deps_file__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 0) = ((MR_Box) ((MR_String) ".javas) | xargs rm -f\n"));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 1) = ((MR_Box) (parse_tree__write_deps_file__V_119_119));
#line 2181 "write_deps_file.m"
    }
#line 2181 "write_deps_file.m"
    {
#line 2181 "write_deps_file.m"
      parse_tree__write_deps_file__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_116_116, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_116_116, 1) = ((MR_Box) (parse_tree__write_deps_file__V_117_117));
#line 2181 "write_deps_file.m"
    }
#line 2181 "write_deps_file.m"
    {
#line 2181 "write_deps_file.m"
      parse_tree__write_deps_file__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 1) = ((MR_Box) (parse_tree__write_deps_file__V_116_116));
#line 2181 "write_deps_file.m"
    }
#line 2180 "write_deps_file.m"
    {
#line 2180 "write_deps_file.m"
      parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) ((MR_String) ".ils) | xargs rm -f\n"));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) (parse_tree__write_deps_file__V_114_114));
#line 2180 "write_deps_file.m"
    }
#line 2180 "write_deps_file.m"
    {
#line 2180 "write_deps_file.m"
      parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 2180 "write_deps_file.m"
    }
#line 2180 "write_deps_file.m"
    {
#line 2180 "write_deps_file.m"
      parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 2180 "write_deps_file.m"
    }
#line 2179 "write_deps_file.m"
    {
#line 2179 "write_deps_file.m"
      parse_tree__write_deps_file__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_107_107, 0) = ((MR_Box) ((MR_String) ".useds) | xargs rm -f\n"));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_107_107, 1) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 2179 "write_deps_file.m"
    }
#line 2179 "write_deps_file.m"
    {
#line 2179 "write_deps_file.m"
      parse_tree__write_deps_file__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 1) = ((MR_Box) (parse_tree__write_deps_file__V_107_107));
#line 2179 "write_deps_file.m"
    }
#line 2179 "write_deps_file.m"
    {
#line 2179 "write_deps_file.m"
      parse_tree__write_deps_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 1) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 2179 "write_deps_file.m"
    }
#line 2178 "write_deps_file.m"
    {
#line 2178 "write_deps_file.m"
      parse_tree__write_deps_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 0) = ((MR_Box) ((MR_String) ".java_dates) | xargs rm -f\n"));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 1) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 2178 "write_deps_file.m"
    }
#line 2178 "write_deps_file.m"
    {
#line 2178 "write_deps_file.m"
      parse_tree__write_deps_file__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 1) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 2178 "write_deps_file.m"
    }
#line 2178 "write_deps_file.m"
    {
#line 2178 "write_deps_file.m"
      parse_tree__write_deps_file__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 1) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 2178 "write_deps_file.m"
    }
#line 2177 "write_deps_file.m"
    {
#line 2177 "write_deps_file.m"
      parse_tree__write_deps_file__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2177 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_97_97, 0) = ((MR_Box) ((MR_String) ".il_dates) | xargs rm -f\n"));
#line 2177 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_97_97, 1) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 2177 "write_deps_file.m"
    }
#line 2177 "write_deps_file.m"
    {
#line 2177 "write_deps_file.m"
      parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2177 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2177 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_97_97));
#line 2177 "write_deps_file.m"
    }
#line 2177 "write_deps_file.m"
    {
#line 2177 "write_deps_file.m"
      parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2177 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2177 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 2177 "write_deps_file.m"
    }
#line 2176 "write_deps_file.m"
    {
#line 2176 "write_deps_file.m"
      parse_tree__write_deps_file__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2176 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 0) = ((MR_Box) ((MR_String) ".c_dates) | xargs rm -f\n"));
#line 2176 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 2176 "write_deps_file.m"
    }
#line 2176 "write_deps_file.m"
    {
#line 2176 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2176 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2176 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 2176 "write_deps_file.m"
    }
#line 2176 "write_deps_file.m"
    {
#line 2176 "write_deps_file.m"
      parse_tree__write_deps_file__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2176 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_89_89, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2176 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_89_89, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 2176 "write_deps_file.m"
    }
#line 2175 "write_deps_file.m"
    {
#line 2175 "write_deps_file.m"
      parse_tree__write_deps_file__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2175 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 1) = ((MR_Box) (parse_tree__write_deps_file__V_89_89));
#line 2175 "write_deps_file.m"
    }
#line 2175 "write_deps_file.m"
    {
#line 2175 "write_deps_file.m"
      parse_tree__write_deps_file__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 0) = ((MR_Box) (parse_tree__write_deps_file__InitPicObjFileName_24));
#line 2175 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 1) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 2175 "write_deps_file.m"
    }
#line 2174 "write_deps_file.m"
    {
#line 2174 "write_deps_file.m"
      parse_tree__write_deps_file__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 0) = ((MR_Box) ((MR_String) ".all_pic_os) "));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 1) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 2174 "write_deps_file.m"
    }
#line 2174 "write_deps_file.m"
    {
#line 2174 "write_deps_file.m"
      parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 2174 "write_deps_file.m"
    }
#line 2174 "write_deps_file.m"
    {
#line 2174 "write_deps_file.m"
      parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 2174 "write_deps_file.m"
    }
#line 2173 "write_deps_file.m"
    {
#line 2173 "write_deps_file.m"
      parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2173 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2173 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 2173 "write_deps_file.m"
    }
#line 2172 "write_deps_file.m"
    {
#line 2172 "write_deps_file.m"
      parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_23));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 2172 "write_deps_file.m"
    }
#line 2172 "write_deps_file.m"
    {
#line 2172 "write_deps_file.m"
      parse_tree__write_deps_file__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 0) = ((MR_Box) ((MR_String) ".all_os) "));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 2172 "write_deps_file.m"
    }
#line 2172 "write_deps_file.m"
    {
#line 2172 "write_deps_file.m"
      parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_76_76));
#line 2172 "write_deps_file.m"
    }
#line 2172 "write_deps_file.m"
    {
#line 2172 "write_deps_file.m"
      parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 2172 "write_deps_file.m"
    }
#line 2171 "write_deps_file.m"
    {
#line 2171 "write_deps_file.m"
      parse_tree__write_deps_file__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 0) = ((MR_Box) ((MR_String) ".mihs) | xargs rm -f\n"));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 2171 "write_deps_file.m"
    }
#line 2171 "write_deps_file.m"
    {
#line 2171 "write_deps_file.m"
      parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_71_71));
#line 2171 "write_deps_file.m"
    }
#line 2171 "write_deps_file.m"
    {
#line 2171 "write_deps_file.m"
      parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 1) = ((MR_Box) (parse_tree__write_deps_file__V_70_70));
#line 2171 "write_deps_file.m"
    }
#line 2170 "write_deps_file.m"
    {
#line 2170 "write_deps_file.m"
      parse_tree__write_deps_file__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2170 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2170 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 1) = ((MR_Box) (parse_tree__write_deps_file__V_68_68));
#line 2170 "write_deps_file.m"
    }
#line 2169 "write_deps_file.m"
    {
#line 2169 "write_deps_file.m"
      parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_22));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_66_66));
#line 2169 "write_deps_file.m"
    }
#line 2169 "write_deps_file.m"
    {
#line 2169 "write_deps_file.m"
      parse_tree__write_deps_file__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 0) = ((MR_Box) ((MR_String) ".cs) "));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 1) = ((MR_Box) (parse_tree__write_deps_file__V_65_65));
#line 2169 "write_deps_file.m"
    }
#line 2169 "write_deps_file.m"
    {
#line 2169 "write_deps_file.m"
      parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (parse_tree__write_deps_file__V_63_63));
#line 2169 "write_deps_file.m"
    }
#line 2169 "write_deps_file.m"
    {
#line 2169 "write_deps_file.m"
      parse_tree__write_deps_file__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 1) = ((MR_Box) (parse_tree__write_deps_file__V_62_62));
#line 2169 "write_deps_file.m"
    }
#line 2168 "write_deps_file.m"
    {
#line 2168 "write_deps_file.m"
      parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) ((MR_String) ".dirs) | xargs rm -rf \n"));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_60_60));
#line 2168 "write_deps_file.m"
    }
#line 2168 "write_deps_file.m"
    {
#line 2168 "write_deps_file.m"
      parse_tree__write_deps_file__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 2168 "write_deps_file.m"
    }
#line 2168 "write_deps_file.m"
    {
#line 2168 "write_deps_file.m"
      parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_57_57));
#line 2168 "write_deps_file.m"
    }
#line 2167 "write_deps_file.m"
    {
#line 2167 "write_deps_file.m"
      parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) " :\n"));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 2167 "write_deps_file.m"
    }
#line 2167 "write_deps_file.m"
    {
#line 2167 "write_deps_file.m"
      parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 2167 "write_deps_file.m"
    }
#line 2166 "write_deps_file.m"
    {
#line 2166 "write_deps_file.m"
      parse_tree__write_deps_file__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 2166 "write_deps_file.m"
    }
#line 2166 "write_deps_file.m"
    {
#line 2166 "write_deps_file.m"
      parse_tree__write_deps_file__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 1) = ((MR_Box) (parse_tree__write_deps_file__V_50_50));
#line 2166 "write_deps_file.m"
    }
#line 2166 "write_deps_file.m"
    {
#line 2166 "write_deps_file.m"
      parse_tree__write_deps_file__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_46_46, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_46_46, 1) = ((MR_Box) (parse_tree__write_deps_file__V_49_49));
#line 2166 "write_deps_file.m"
    }
#line 2165 "write_deps_file.m"
    {
#line 2165 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_46_46);
    }
#line 2188 "write_deps_file.m"
    {
#line 2188 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".realclean", (MR_Integer) 1, &parse_tree__write_deps_file__RealCleanTargetName_33);
    }
#line 2191 "write_deps_file.m"
    {
#line 2191 "write_deps_file.m"
      parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2191 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2191 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2191 "write_deps_file.m"
    }
#line 2191 "write_deps_file.m"
    {
#line 2191 "write_deps_file.m"
      parse_tree__write_deps_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2191 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) ((MR_String) "realclean_local : "));
#line 2191 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 2191 "write_deps_file.m"
    }
#line 2190 "write_deps_file.m"
    {
#line 2190 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_140_140);
    }
#line 2218 "write_deps_file.m"
    {
#line 2218 "write_deps_file.m"
      parse_tree__write_deps_file__V_256_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2218 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2218 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[121])));
#line 2218 "write_deps_file.m"
    }
#line 2218 "write_deps_file.m"
    {
#line 2218 "write_deps_file.m"
      parse_tree__write_deps_file__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2218 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2218 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 1) = ((MR_Box) (parse_tree__write_deps_file__V_256_256));
#line 2218 "write_deps_file.m"
    }
#line 2217 "write_deps_file.m"
    {
#line 2217 "write_deps_file.m"
      parse_tree__write_deps_file__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2217 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 0) = ((MR_Box) ((MR_String) ".foreign_dlls) | xargs rm -f\n"));
#line 2217 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 1) = ((MR_Box) (parse_tree__write_deps_file__V_254_254));
#line 2217 "write_deps_file.m"
    }
#line 2217 "write_deps_file.m"
    {
#line 2217 "write_deps_file.m"
      parse_tree__write_deps_file__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2217 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2217 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 1) = ((MR_Box) (parse_tree__write_deps_file__V_252_252));
#line 2217 "write_deps_file.m"
    }
#line 2217 "write_deps_file.m"
    {
#line 2217 "write_deps_file.m"
      parse_tree__write_deps_file__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2217 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2217 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 1) = ((MR_Box) (parse_tree__write_deps_file__V_251_251));
#line 2217 "write_deps_file.m"
    }
#line 2216 "write_deps_file.m"
    {
#line 2216 "write_deps_file.m"
      parse_tree__write_deps_file__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2216 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 0) = ((MR_Box) ((MR_String) ".dlls) | xargs rm -f\n"));
#line 2216 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 1) = ((MR_Box) (parse_tree__write_deps_file__V_249_249));
#line 2216 "write_deps_file.m"
    }
#line 2216 "write_deps_file.m"
    {
#line 2216 "write_deps_file.m"
      parse_tree__write_deps_file__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2216 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2216 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 1) = ((MR_Box) (parse_tree__write_deps_file__V_247_247));
#line 2216 "write_deps_file.m"
    }
#line 2216 "write_deps_file.m"
    {
#line 2216 "write_deps_file.m"
      parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2216 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2216 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_246_246));
#line 2216 "write_deps_file.m"
    }
#line 2215 "write_deps_file.m"
    {
#line 2215 "write_deps_file.m"
      parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2215 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) ".all_mihs) | xargs rm -f\n"));
#line 2215 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 2215 "write_deps_file.m"
    }
#line 2215 "write_deps_file.m"
    {
#line 2215 "write_deps_file.m"
      parse_tree__write_deps_file__V_241_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2215 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2215 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 2215 "write_deps_file.m"
    }
#line 2215 "write_deps_file.m"
    {
#line 2215 "write_deps_file.m"
      parse_tree__write_deps_file__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2215 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2215 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 1) = ((MR_Box) (parse_tree__write_deps_file__V_241_241));
#line 2215 "write_deps_file.m"
    }
#line 2214 "write_deps_file.m"
    {
#line 2214 "write_deps_file.m"
      parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2214 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) ((MR_String) ".all_mhs) | xargs rm -f\n"));
#line 2214 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_239_239));
#line 2214 "write_deps_file.m"
    }
#line 2214 "write_deps_file.m"
    {
#line 2214 "write_deps_file.m"
      parse_tree__write_deps_file__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2214 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2214 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 2214 "write_deps_file.m"
    }
#line 2214 "write_deps_file.m"
    {
#line 2214 "write_deps_file.m"
      parse_tree__write_deps_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2214 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2214 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 1) = ((MR_Box) (parse_tree__write_deps_file__V_236_236));
#line 2214 "write_deps_file.m"
    }
#line 2213 "write_deps_file.m"
    {
#line 2213 "write_deps_file.m"
      parse_tree__write_deps_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2213 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 0) = ((MR_Box) ((MR_String) ".module_deps) | xargs rm -f\n"));
#line 2213 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 1) = ((MR_Box) (parse_tree__write_deps_file__V_234_234));
#line 2213 "write_deps_file.m"
    }
#line 2213 "write_deps_file.m"
    {
#line 2213 "write_deps_file.m"
      parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2213 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2213 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (parse_tree__write_deps_file__V_232_232));
#line 2213 "write_deps_file.m"
    }
#line 2213 "write_deps_file.m"
    {
#line 2213 "write_deps_file.m"
      parse_tree__write_deps_file__V_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2213 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2213 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 2213 "write_deps_file.m"
    }
#line 2212 "write_deps_file.m"
    {
#line 2212 "write_deps_file.m"
      parse_tree__write_deps_file__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2212 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 0) = ((MR_Box) ((MR_String) ".ds) | xargs rm -f\n"));
#line 2212 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 1) = ((MR_Box) (parse_tree__write_deps_file__V_229_229));
#line 2212 "write_deps_file.m"
    }
#line 2212 "write_deps_file.m"
    {
#line 2212 "write_deps_file.m"
      parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2212 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2212 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 2212 "write_deps_file.m"
    }
#line 2212 "write_deps_file.m"
    {
#line 2212 "write_deps_file.m"
      parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2212 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2212 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 2212 "write_deps_file.m"
    }
#line 2211 "write_deps_file.m"
    {
#line 2211 "write_deps_file.m"
      parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) ((MR_String) ".imdgs) | xargs rm -f\n"));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 2211 "write_deps_file.m"
    }
#line 2211 "write_deps_file.m"
    {
#line 2211 "write_deps_file.m"
      parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 2211 "write_deps_file.m"
    }
#line 2211 "write_deps_file.m"
    {
#line 2211 "write_deps_file.m"
      parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 2211 "write_deps_file.m"
    }
#line 2210 "write_deps_file.m"
    {
#line 2210 "write_deps_file.m"
      parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".requests) | xargs rm -f\n"));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_219_219));
#line 2210 "write_deps_file.m"
    }
#line 2210 "write_deps_file.m"
    {
#line 2210 "write_deps_file.m"
      parse_tree__write_deps_file__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 1) = ((MR_Box) (parse_tree__write_deps_file__V_217_217));
#line 2210 "write_deps_file.m"
    }
#line 2210 "write_deps_file.m"
    {
#line 2210 "write_deps_file.m"
      parse_tree__write_deps_file__V_214_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 1) = ((MR_Box) (parse_tree__write_deps_file__V_216_216));
#line 2210 "write_deps_file.m"
    }
#line 2209 "write_deps_file.m"
    {
#line 2209 "write_deps_file.m"
      parse_tree__write_deps_file__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 0) = ((MR_Box) ((MR_String) ".analysiss) | xargs rm -f\n"));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 1) = ((MR_Box) (parse_tree__write_deps_file__V_214_214));
#line 2209 "write_deps_file.m"
    }
#line 2209 "write_deps_file.m"
    {
#line 2209 "write_deps_file.m"
      parse_tree__write_deps_file__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 1) = ((MR_Box) (parse_tree__write_deps_file__V_212_212));
#line 2209 "write_deps_file.m"
    }
#line 2209 "write_deps_file.m"
    {
#line 2209 "write_deps_file.m"
      parse_tree__write_deps_file__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 1) = ((MR_Box) (parse_tree__write_deps_file__V_211_211));
#line 2209 "write_deps_file.m"
    }
#line 2208 "write_deps_file.m"
    {
#line 2208 "write_deps_file.m"
      parse_tree__write_deps_file__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 0) = ((MR_Box) ((MR_String) ".trans_opts) | xargs rm -f\n"));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 1) = ((MR_Box) (parse_tree__write_deps_file__V_209_209));
#line 2208 "write_deps_file.m"
    }
#line 2208 "write_deps_file.m"
    {
#line 2208 "write_deps_file.m"
      parse_tree__write_deps_file__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 1) = ((MR_Box) (parse_tree__write_deps_file__V_207_207));
#line 2208 "write_deps_file.m"
    }
#line 2208 "write_deps_file.m"
    {
#line 2208 "write_deps_file.m"
      parse_tree__write_deps_file__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 1) = ((MR_Box) (parse_tree__write_deps_file__V_206_206));
#line 2208 "write_deps_file.m"
    }
#line 2207 "write_deps_file.m"
    {
#line 2207 "write_deps_file.m"
      parse_tree__write_deps_file__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 0) = ((MR_Box) ((MR_String) ".opts) | xargs rm -f\n"));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 1) = ((MR_Box) (parse_tree__write_deps_file__V_204_204));
#line 2207 "write_deps_file.m"
    }
#line 2207 "write_deps_file.m"
    {
#line 2207 "write_deps_file.m"
      parse_tree__write_deps_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 1) = ((MR_Box) (parse_tree__write_deps_file__V_202_202));
#line 2207 "write_deps_file.m"
    }
#line 2207 "write_deps_file.m"
    {
#line 2207 "write_deps_file.m"
      parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__V_201_201));
#line 2207 "write_deps_file.m"
    }
#line 2206 "write_deps_file.m"
    {
#line 2206 "write_deps_file.m"
      parse_tree__write_deps_file__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 0) = ((MR_Box) ((MR_String) ".int3s) | xargs rm -f\n"));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 1) = ((MR_Box) (parse_tree__write_deps_file__V_199_199));
#line 2206 "write_deps_file.m"
    }
#line 2206 "write_deps_file.m"
    {
#line 2206 "write_deps_file.m"
      parse_tree__write_deps_file__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 1) = ((MR_Box) (parse_tree__write_deps_file__V_197_197));
#line 2206 "write_deps_file.m"
    }
#line 2206 "write_deps_file.m"
    {
#line 2206 "write_deps_file.m"
      parse_tree__write_deps_file__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 1) = ((MR_Box) (parse_tree__write_deps_file__V_196_196));
#line 2206 "write_deps_file.m"
    }
#line 2205 "write_deps_file.m"
    {
#line 2205 "write_deps_file.m"
      parse_tree__write_deps_file__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2205 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 0) = ((MR_Box) ((MR_String) ".all_int0s) | xargs rm -f\n"));
#line 2205 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 1) = ((MR_Box) (parse_tree__write_deps_file__V_194_194));
#line 2205 "write_deps_file.m"
    }
#line 2205 "write_deps_file.m"
    {
#line 2205 "write_deps_file.m"
      parse_tree__write_deps_file__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2205 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2205 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 1) = ((MR_Box) (parse_tree__write_deps_file__V_192_192));
#line 2205 "write_deps_file.m"
    }
#line 2205 "write_deps_file.m"
    {
#line 2205 "write_deps_file.m"
      parse_tree__write_deps_file__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2205 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2205 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 1) = ((MR_Box) (parse_tree__write_deps_file__V_191_191));
#line 2205 "write_deps_file.m"
    }
#line 2201 "write_deps_file.m"
    {
#line 2201 "write_deps_file.m"
      parse_tree__write_deps_file__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 0) = ((MR_Box) ((MR_String) ".ints) | xargs rm -f\n"));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 1) = ((MR_Box) (parse_tree__write_deps_file__V_189_189));
#line 2201 "write_deps_file.m"
    }
#line 2201 "write_deps_file.m"
    {
#line 2201 "write_deps_file.m"
      parse_tree__write_deps_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 1) = ((MR_Box) (parse_tree__write_deps_file__V_187_187));
#line 2201 "write_deps_file.m"
    }
#line 2201 "write_deps_file.m"
    {
#line 2201 "write_deps_file.m"
      parse_tree__write_deps_file__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 1) = ((MR_Box) (parse_tree__write_deps_file__V_186_186));
#line 2201 "write_deps_file.m"
    }
#line 2200 "write_deps_file.m"
    {
#line 2200 "write_deps_file.m"
      parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) ((MR_String) ".trans_opt_dates) | xargs rm -f\n"));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (parse_tree__write_deps_file__V_184_184));
#line 2200 "write_deps_file.m"
    }
#line 2200 "write_deps_file.m"
    {
#line 2200 "write_deps_file.m"
      parse_tree__write_deps_file__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_181_181, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_181_181, 1) = ((MR_Box) (parse_tree__write_deps_file__V_182_182));
#line 2200 "write_deps_file.m"
    }
#line 2200 "write_deps_file.m"
    {
#line 2200 "write_deps_file.m"
      parse_tree__write_deps_file__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_179_179, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_179_179, 1) = ((MR_Box) (parse_tree__write_deps_file__V_181_181));
#line 2200 "write_deps_file.m"
    }
#line 2199 "write_deps_file.m"
    {
#line 2199 "write_deps_file.m"
      parse_tree__write_deps_file__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_177_177, 0) = ((MR_Box) ((MR_String) ".optdates) | xargs rm -f\n"));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_177_177, 1) = ((MR_Box) (parse_tree__write_deps_file__V_179_179));
#line 2199 "write_deps_file.m"
    }
#line 2199 "write_deps_file.m"
    {
#line 2199 "write_deps_file.m"
      parse_tree__write_deps_file__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 1) = ((MR_Box) (parse_tree__write_deps_file__V_177_177));
#line 2199 "write_deps_file.m"
    }
#line 2199 "write_deps_file.m"
    {
#line 2199 "write_deps_file.m"
      parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (parse_tree__write_deps_file__V_176_176));
#line 2199 "write_deps_file.m"
    }
#line 2198 "write_deps_file.m"
    {
#line 2198 "write_deps_file.m"
      parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) ".date3s) | xargs rm -f\n"));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 2198 "write_deps_file.m"
    }
#line 2198 "write_deps_file.m"
    {
#line 2198 "write_deps_file.m"
      parse_tree__write_deps_file__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 2198 "write_deps_file.m"
    }
#line 2198 "write_deps_file.m"
    {
#line 2198 "write_deps_file.m"
      parse_tree__write_deps_file__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 1) = ((MR_Box) (parse_tree__write_deps_file__V_171_171));
#line 2198 "write_deps_file.m"
    }
#line 2197 "write_deps_file.m"
    {
#line 2197 "write_deps_file.m"
      parse_tree__write_deps_file__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 0) = ((MR_Box) ((MR_String) ".date0s) | xargs rm -f\n"));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 1) = ((MR_Box) (parse_tree__write_deps_file__V_169_169));
#line 2197 "write_deps_file.m"
    }
#line 2197 "write_deps_file.m"
    {
#line 2197 "write_deps_file.m"
      parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_167_167));
#line 2197 "write_deps_file.m"
    }
#line 2197 "write_deps_file.m"
    {
#line 2197 "write_deps_file.m"
      parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 2197 "write_deps_file.m"
    }
#line 2196 "write_deps_file.m"
    {
#line 2196 "write_deps_file.m"
      parse_tree__write_deps_file__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 0) = ((MR_Box) ((MR_String) ".dates) | xargs rm -f\n"));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 2196 "write_deps_file.m"
    }
#line 2196 "write_deps_file.m"
    {
#line 2196 "write_deps_file.m"
      parse_tree__write_deps_file__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 1) = ((MR_Box) (parse_tree__write_deps_file__V_162_162));
#line 2196 "write_deps_file.m"
    }
#line 2196 "write_deps_file.m"
    {
#line 2196 "write_deps_file.m"
      parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_161_161));
#line 2196 "write_deps_file.m"
    }
#line 2195 "write_deps_file.m"
    {
#line 2195 "write_deps_file.m"
      parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 2195 "write_deps_file.m"
    }
#line 2195 "write_deps_file.m"
    {
#line 2195 "write_deps_file.m"
      parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 2195 "write_deps_file.m"
    }
#line 2195 "write_deps_file.m"
    {
#line 2195 "write_deps_file.m"
      parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) " : "));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 2195 "write_deps_file.m"
    }
#line 2195 "write_deps_file.m"
    {
#line 2195 "write_deps_file.m"
      parse_tree__write_deps_file__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 2195 "write_deps_file.m"
    }
#line 2194 "write_deps_file.m"
    {
#line 2194 "write_deps_file.m"
      parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2194 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2194 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_153_153));
#line 2194 "write_deps_file.m"
    }
#line 2194 "write_deps_file.m"
    {
#line 2194 "write_deps_file.m"
      parse_tree__write_deps_file__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2194 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2194 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 2194 "write_deps_file.m"
    }
#line 2194 "write_deps_file.m"
    {
#line 2194 "write_deps_file.m"
      parse_tree__write_deps_file__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2194 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2194 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 1) = ((MR_Box) (parse_tree__write_deps_file__V_150_150));
#line 2194 "write_deps_file.m"
    }
#line 2193 "write_deps_file.m"
    {
#line 2193 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_147_147);
    }
#line 2228 "write_deps_file.m"
    {
#line 2228 "write_deps_file.m"
      parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2228 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_30));
#line 2228 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])));
#line 2228 "write_deps_file.m"
    }
#line 2227 "write_deps_file.m"
    {
#line 2227 "write_deps_file.m"
      parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2227 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) ((MR_String) " "));
#line 2227 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 2227 "write_deps_file.m"
    }
#line 2227 "write_deps_file.m"
    {
#line 2227 "write_deps_file.m"
      parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2227 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_29));
#line 2227 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 2227 "write_deps_file.m"
    }
#line 2226 "write_deps_file.m"
    {
#line 2226 "write_deps_file.m"
      parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2226 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) ((MR_String) " "));
#line 2226 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (parse_tree__write_deps_file__V_278_278));
#line 2226 "write_deps_file.m"
    }
#line 2226 "write_deps_file.m"
    {
#line 2226 "write_deps_file.m"
      parse_tree__write_deps_file__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2226 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 0) = ((MR_Box) (parse_tree__write_deps_file__JarFileName_28));
#line 2226 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 2226 "write_deps_file.m"
    }
#line 2225 "write_deps_file.m"
    {
#line 2225 "write_deps_file.m"
      parse_tree__write_deps_file__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2225 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 0) = ((MR_Box) ((MR_String) " "));
#line 2225 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 1) = ((MR_Box) (parse_tree__write_deps_file__V_275_275));
#line 2225 "write_deps_file.m"
    }
#line 2225 "write_deps_file.m"
    {
#line 2225 "write_deps_file.m"
      parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2225 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibFileName_27));
#line 2225 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_273_273));
#line 2225 "write_deps_file.m"
    }
#line 2224 "write_deps_file.m"
    {
#line 2224 "write_deps_file.m"
      parse_tree__write_deps_file__V_270_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2224 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 0) = ((MR_Box) ((MR_String) " "));
#line 2224 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 2224 "write_deps_file.m"
    }
#line 2224 "write_deps_file.m"
    {
#line 2224 "write_deps_file.m"
      parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2224 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) (parse_tree__write_deps_file__LibFileName_26));
#line 2224 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_270_270));
#line 2224 "write_deps_file.m"
    }
#line 2223 "write_deps_file.m"
    {
#line 2223 "write_deps_file.m"
      parse_tree__write_deps_file__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2223 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 0) = ((MR_Box) ((MR_String) " "));
#line 2223 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 2223 "write_deps_file.m"
    }
#line 2223 "write_deps_file.m"
    {
#line 2223 "write_deps_file.m"
      parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2223 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_25));
#line 2223 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_267_267));
#line 2223 "write_deps_file.m"
    }
#line 2222 "write_deps_file.m"
    {
#line 2222 "write_deps_file.m"
      parse_tree__write_deps_file__V_264_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2222 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
#line 2222 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 2222 "write_deps_file.m"
    }
#line 2222 "write_deps_file.m"
    {
#line 2222 "write_deps_file.m"
      parse_tree__write_deps_file__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2222 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 0) = ((MR_Box) (parse_tree__write_deps_file__ExeFileName_21));
#line 2222 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 1) = ((MR_Box) (parse_tree__write_deps_file__V_264_264));
#line 2222 "write_deps_file.m"
    }
#line 2221 "write_deps_file.m"
    {
#line 2221 "write_deps_file.m"
      parse_tree__write_deps_file__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2221 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 0) = ((MR_Box) ((MR_String) "\t-rm -f "));
#line 2221 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 1) = ((MR_Box) (parse_tree__write_deps_file__V_263_263));
#line 2221 "write_deps_file.m"
    }
#line 2220 "write_deps_file.m"
    {
#line 2220 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_260_260);
#line 2220 "write_deps_file.m"
      return;
    }
#line 2151 "write_deps_file.m"
  }
#line 2143 "write_deps_file.m"
}

#line 2130 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
#line 2130 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 2130 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_9,
#line 2130 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 2130 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_11,
#line 2130 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5)
#line 2130 "write_deps_file.m"
{
#line 2135 "write_deps_file.m"
  {
#line 2135 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2135 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Extension_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
#line 2135 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__VarExtension_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
#line 2135 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TargetName_15;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_20_20;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_23_23;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_24_24;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_26_26;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_27_27;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_29_29;
#line 2135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_30_30;

#line 2136 "write_deps_file.m"
    {
#line 2136 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__Extension_12, (MR_Integer) 1, &parse_tree__write_deps_file__TargetName_15);
    }
#line 2140 "write_deps_file.m"
    {
#line 2140 "write_deps_file.m"
      parse_tree__write_deps_file__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2140 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_30_30, 0) = ((MR_Box) (parse_tree__write_deps_file__VarExtension_13));
#line 2140 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[120])));
#line 2140 "write_deps_file.m"
    }
#line 2140 "write_deps_file.m"
    {
#line 2140 "write_deps_file.m"
      parse_tree__write_deps_file__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2140 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_29_29, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_11));
#line 2140 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_29_29, 1) = ((MR_Box) (parse_tree__write_deps_file__V_30_30));
#line 2140 "write_deps_file.m"
    }
#line 2140 "write_deps_file.m"
    {
#line 2140 "write_deps_file.m"
      parse_tree__write_deps_file__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2140 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_27_27, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 2140 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_27_27, 1) = ((MR_Box) (parse_tree__write_deps_file__V_29_29));
#line 2140 "write_deps_file.m"
    }
#line 2140 "write_deps_file.m"
    {
#line 2140 "write_deps_file.m"
      parse_tree__write_deps_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2140 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_26_26, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
#line 2140 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_26_26, 1) = ((MR_Box) (parse_tree__write_deps_file__V_27_27));
#line 2140 "write_deps_file.m"
    }
#line 2139 "write_deps_file.m"
    {
#line 2139 "write_deps_file.m"
      parse_tree__write_deps_file__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2139 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_24_24, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2139 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_24_24, 1) = ((MR_Box) (parse_tree__write_deps_file__V_26_26));
#line 2139 "write_deps_file.m"
    }
#line 2139 "write_deps_file.m"
    {
#line 2139 "write_deps_file.m"
      parse_tree__write_deps_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2139 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_23_23, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
#line 2139 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_23_23, 1) = ((MR_Box) (parse_tree__write_deps_file__V_24_24));
#line 2139 "write_deps_file.m"
    }
#line 2139 "write_deps_file.m"
    {
#line 2139 "write_deps_file.m"
      parse_tree__write_deps_file__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2139 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_20_20, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2139 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_20_20, 1) = ((MR_Box) (parse_tree__write_deps_file__V_23_23));
#line 2139 "write_deps_file.m"
    }
#line 2138 "write_deps_file.m"
    {
#line 2138 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_9, parse_tree__write_deps_file__V_20_20);
#line 2138 "write_deps_file.m"
      return;
    }
#line 2135 "write_deps_file.m"
  }
#line 2130 "write_deps_file.m"
}

#line 2113 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
#line 2113 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2113 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2113 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2113 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2113 "write_deps_file.m"
{
#line 2113 "write_deps_file.m"
  {
#line 2113 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2113 "write_deps_file.m"
    {
#line 2113 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2113 "write_deps_file.m"
      return;
    }
#line 2113 "write_deps_file.m"
  }
#line 2113 "write_deps_file.m"
}

#line 2107 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 2107 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_10)
#line 2107 "write_deps_file.m"
{
#line 2111 "write_deps_file.m"
  {
#line 2111 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2111 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_14_14;
#line 2112 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13;

#line 2113 "write_deps_file.m"
    {
#line 2113 "write_deps_file.m"
      parse_tree__write_deps_file__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2113 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[2]));
#line 2113 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1));
#line 2113 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2113 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 2113 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_8));
#line 2113 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_9));
#line 2113 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 6) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_10));
#line 2113 "write_deps_file.m"
    }
#line 2112 "write_deps_file.m"
    {
#line 2112 "write_deps_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_14_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[95]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13);
    }
#line 2111 "write_deps_file.m"
  }
#line 2107 "write_deps_file.m"
}

#line 1942 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
#line 1942 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1942 "write_deps_file.m"
{
#line 1942 "write_deps_file.m"
  {
#line 1942 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1942 "write_deps_file.m"
    MR_builtin_longjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0, 1);
#line 1942 "write_deps_file.m"
  }
#line 1942 "write_deps_file.m"
}

#line 1943 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
#line 1943 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1943 "write_deps_file.m"
{
#line 1943 "write_deps_file.m"
  {
#line 1943 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1943 "write_deps_file.m"
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_28_28 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_28_28);
#line 1943 "write_deps_file.m"
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_46_46);
#line 1943 "write_deps_file.m"
    {
#line 1943 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(parse_tree__write_deps_file__env_ptr);
#line 1943 "write_deps_file.m"
      return;
    }
#line 1943 "write_deps_file.m"
  }
#line 1943 "write_deps_file.m"
}

#line 1942 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
#line 1942 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1942 "write_deps_file.m"
{
#line 1942 "write_deps_file.m"
  {
#line 1942 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1942 "write_deps_file.m"
    {
#line 1943 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46, (MR_Integer) 0)));
#line 1944 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__V_341_341;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_342_342;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_343_343;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_344_344;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_345_345;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_346_346;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_347_347;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_348_348;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_349_349;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_350_350;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_351_351;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_352_352;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_353_353;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_354_354;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_355_355;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_356_356;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_357_357;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_358_358;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_359_359;
#line 1944 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__V_360_360;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_31_31;
#line 1944 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_32_32;

#line 1943 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46, (MR_Integer) 1)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_341_341 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 0)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 1)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 2)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 3)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 4)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 5)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 6)));
#line 1944 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 7)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 8)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 9)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 10)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 11)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 12)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 13)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 14)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 15)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 16)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 17)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 18)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 19)));
#line 1944 "write_deps_file.m"
      parse_tree__write_deps_file__V_360_360 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 20)));
#line 1944 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 1944 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1944 "write_deps_file.m"
        {
#line 1944 "write_deps_file.m"
          {
#line 1944 "write_deps_file.m"
            parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47, (MR_Integer) 0)));
#line 1944 "write_deps_file.m"
            parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47, (MR_Integer) 1)));
#line 1944 "write_deps_file.m"
          }
#line 1944 "write_deps_file.m"
          {
#line 1944 "write_deps_file.m"
            parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(parse_tree__write_deps_file__env_ptr);
#line 1944 "write_deps_file.m"
            return;
          }
#line 1944 "write_deps_file.m"
        }
#line 1942 "write_deps_file.m"
    }
#line 1942 "write_deps_file.m"
  }
#line 1942 "write_deps_file.m"
}

#line 1942 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
#line 1942 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1942 "write_deps_file.m"
{
#line 1942 "write_deps_file.m"
  {
#line 1942 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1942 "write_deps_file.m"
    if (MR_builtin_setjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0) == 0)
#line 1942 "write_deps_file.m"
      {
#line 1942 "write_deps_file.m"
        {
#line 1942 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_361_361;
#line 1942 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_362_362;

#line 1942 "write_deps_file.m"
          (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20 == (MR_Integer) 1);
#line 1942 "write_deps_file.m"
          if ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1942 "write_deps_file.m"
            {
#line 5350 "parse_tree.write_deps_file.c"
              parse_tree__write_deps_file__TypeCtorInfo_361_361 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 5352 "parse_tree.write_deps_file.c"
              parse_tree__write_deps_file__TypeCtorInfo_362_362 = (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0;
#line 1943 "write_deps_file.m"
              {
#line 1943 "write_deps_file.m"
                mercury__map__member_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_361_361, parse_tree__write_deps_file__TypeCtorInfo_362_362, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_28_28, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_46_46, parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3, parse_tree__write_deps_file__env_ptr);
              }
#line 1942 "write_deps_file.m"
            }
#line 1942 "write_deps_file.m"
        }
#line 1942 "write_deps_file.m"
        (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_FALSE;
#line 1942 "write_deps_file.m"
      }
#line 1942 "write_deps_file.m"
    else
#line 1942 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_TRUE;
#line 1942 "write_deps_file.m"
  }
#line 1942 "write_deps_file.m"
}

#line 1920 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_14,
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_15,
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_16,
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_17,
#line 1920 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_18,
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_20,
#line 1920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_21,
#line 1920 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
#line 1920 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
#line 1920 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24)
#line 1920 "write_deps_file.m"
{
#line 1920 "write_deps_file.m"
  {
#line 1920 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s parse_tree__write_deps_file__env;

#line 1920 "write_deps_file.m"
    (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17 = parse_tree__write_deps_file__DepsMap_17;
#line 1920 "write_deps_file.m"
    (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20 = parse_tree__write_deps_file__Intermod_20;
#line 1926 "write_deps_file.m"
    {
#line 1926 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallIntsTargetName_26;
#line 1926 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__OptStr_27;
#line 1926 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__Int0Str_33;
#line 1926 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__MaybeInt0sVar_34;
#line 1926 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__TransOptStr_35;
#line 1926 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__DepStr_36;
#line 1926 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallOptsTargetName_37;
#line 1926 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallHdrsTargetName_38;
#line 1926 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_51_51;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_54_54;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_55_55;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_57_57;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_58_58;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_60_60;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_61_61;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_63_63;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_64_64;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_66_66;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_67_67;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_68_68;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_69_69;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_70_70;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_72_72;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_74_74;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_75_75;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_77_77;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_78_78;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_80_80;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_81_81;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_82_82;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_83_83;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_84_84;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_86_86;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_88_88;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_90_90;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_92_92;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_94_94;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_96_96;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_98_98;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_100_100;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_102_102;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_104_104;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_106_106;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_108_108;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_110_110;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_112_112;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_113_113;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_114_114;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_115_115;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_139_139;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_142_142;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_143_143;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_145_145;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_219_219;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_222_222;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_223_223;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_225_225;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_226_226;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_228_228;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_230_230;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_231_231;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_233_233;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_235_235;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_237_237;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_238_238;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_240_240;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_242_242;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_244_244;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_246_246;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_262_262;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_265_265;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_266_266;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_268_268;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_269_269;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_271_271;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_273_273;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_274_274;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_276_276;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_278_278;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_280_280;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_281_281;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_283_283;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_285_285;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_287_287;
#line 1926 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_289_289;

#line 1932 "write_deps_file.m"
      {
#line 1932 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_ints", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallIntsTargetName_26);
      }
#line 1937 "write_deps_file.m"
      if (((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20 == (MR_Integer) 0))
#line 1939 "write_deps_file.m"
        parse_tree__write_deps_file__OptStr_27 = (MR_String) "";
#line 1937 "write_deps_file.m"
      else
#line 1936 "write_deps_file.m"
        parse_tree__write_deps_file__OptStr_27 = (MR_String) " opt";
#line 1942 "write_deps_file.m"
      {
#line 1942 "write_deps_file.m"
        parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(&parse_tree__write_deps_file__env);
      }
#line 1950 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1948 "write_deps_file.m"
        {
#line 1948 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_49_49;

#line 1948 "write_deps_file.m"
          parse_tree__write_deps_file__Int0Str_33 = (MR_String) " int0";
#line 1949 "write_deps_file.m"
          {
#line 1949 "write_deps_file.m"
            parse_tree__write_deps_file__V_49_49 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_18, (MR_String) ".int0s) ");
          }
#line 1949 "write_deps_file.m"
          {
#line 1949 "write_deps_file.m"
            parse_tree__write_deps_file__MaybeInt0sVar_34 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_49_49);
          }
#line 1948 "write_deps_file.m"
        }
#line 1950 "write_deps_file.m"
      else
#line 1951 "write_deps_file.m"
        {
#line 1951 "write_deps_file.m"
          parse_tree__write_deps_file__Int0Str_33 = (MR_String) "";
#line 1952 "write_deps_file.m"
          parse_tree__write_deps_file__MaybeInt0sVar_34 = (MR_String) "";
#line 1951 "write_deps_file.m"
        }
#line 1957 "write_deps_file.m"
      if ((parse_tree__write_deps_file__TransOpt_21 == (MR_Integer) 0))
#line 1959 "write_deps_file.m"
        parse_tree__write_deps_file__TransOptStr_35 = (MR_String) "";
#line 1957 "write_deps_file.m"
      else
#line 1956 "write_deps_file.m"
        parse_tree__write_deps_file__TransOptStr_35 = (MR_String) " trans_opt";
#line 1964 "write_deps_file.m"
      if ((parse_tree__write_deps_file__MmcMakeDeps_19 == (MR_Integer) 0))
#line 1966 "write_deps_file.m"
        parse_tree__write_deps_file__DepStr_36 = (MR_String) "";
#line 1964 "write_deps_file.m"
      else
#line 1963 "write_deps_file.m"
        parse_tree__write_deps_file__DepStr_36 = (MR_String) " module_dep";
#line 1991 "write_deps_file.m"
      {
#line 1991 "write_deps_file.m"
        parse_tree__write_deps_file__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1991 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_115_115, 0) = ((MR_Box) (parse_tree__write_deps_file__DepStr_36));
#line 1991 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[35])));
#line 1991 "write_deps_file.m"
      }
#line 1991 "write_deps_file.m"
      {
#line 1991 "write_deps_file.m"
        parse_tree__write_deps_file__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1991 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_35));
#line 1991 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 1) = ((MR_Box) (parse_tree__write_deps_file__V_115_115));
#line 1991 "write_deps_file.m"
      }
#line 1991 "write_deps_file.m"
      {
#line 1991 "write_deps_file.m"
        parse_tree__write_deps_file__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1991 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
#line 1991 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 1) = ((MR_Box) (parse_tree__write_deps_file__V_114_114));
#line 1991 "write_deps_file.m"
      }
#line 1991 "write_deps_file.m"
      {
#line 1991 "write_deps_file.m"
        parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1991 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0Str_33));
#line 1991 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) (parse_tree__write_deps_file__V_113_113));
#line 1991 "write_deps_file.m"
      }
#line 1990 "write_deps_file.m"
      {
#line 1990 "write_deps_file.m"
        parse_tree__write_deps_file__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1990 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 0) = ((MR_Box) ((MR_String) "\tfor ext in int int2 int3"));
#line 1990 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 1) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 1990 "write_deps_file.m"
      }
#line 1989 "write_deps_file.m"
      {
#line 1989 "write_deps_file.m"
        parse_tree__write_deps_file__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1989 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_108_108, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
#line 1989 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_108_108, 1) = ((MR_Box) (parse_tree__write_deps_file__V_110_110));
#line 1989 "write_deps_file.m"
      }
#line 1988 "write_deps_file.m"
      {
#line 1988 "write_deps_file.m"
        parse_tree__write_deps_file__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1988 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n"));
#line 1988 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 1) = ((MR_Box) (parse_tree__write_deps_file__V_108_108));
#line 1988 "write_deps_file.m"
      }
#line 1987 "write_deps_file.m"
      {
#line 1987 "write_deps_file.m"
        parse_tree__write_deps_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1987 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n"));
#line 1987 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 1) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 1987 "write_deps_file.m"
      }
#line 1986 "write_deps_file.m"
      {
#line 1986 "write_deps_file.m"
        parse_tree__write_deps_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1986 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
#line 1986 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 1) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 1986 "write_deps_file.m"
      }
#line 1985 "write_deps_file.m"
      {
#line 1985 "write_deps_file.m"
        parse_tree__write_deps_file__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1985 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_100_100, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
#line 1985 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_100_100, 1) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 1985 "write_deps_file.m"
      }
#line 1984 "write_deps_file.m"
      {
#line 1984 "write_deps_file.m"
        parse_tree__write_deps_file__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1984 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
#line 1984 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 1) = ((MR_Box) (parse_tree__write_deps_file__V_100_100));
#line 1984 "write_deps_file.m"
      }
#line 1983 "write_deps_file.m"
      {
#line 1983 "write_deps_file.m"
        parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
#line 1983 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 1983 "write_deps_file.m"
      }
#line 1982 "write_deps_file.m"
      {
#line 1982 "write_deps_file.m"
        parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1982 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
#line 1982 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 1982 "write_deps_file.m"
      }
#line 1981 "write_deps_file.m"
      {
#line 1981 "write_deps_file.m"
        parse_tree__write_deps_file__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1981 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
#line 1981 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 1981 "write_deps_file.m"
      }
#line 1980 "write_deps_file.m"
      {
#line 1980 "write_deps_file.m"
        parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
#line 1980 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 1980 "write_deps_file.m"
      }
#line 1979 "write_deps_file.m"
      {
#line 1979 "write_deps_file.m"
        parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1979 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\\n"));
#line 1979 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1979 "write_deps_file.m"
      }
#line 1978 "write_deps_file.m"
      {
#line 1978 "write_deps_file.m"
        parse_tree__write_deps_file__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1978 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
#line 1978 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1978 "write_deps_file.m"
      }
#line 1977 "write_deps_file.m"
      {
#line 1977 "write_deps_file.m"
        parse_tree__write_deps_file__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1977 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
#line 1977 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 1) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 1977 "write_deps_file.m"
      }
#line 1977 "write_deps_file.m"
      {
#line 1977 "write_deps_file.m"
        parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1977 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
#line 1977 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 1977 "write_deps_file.m"
      }
#line 1977 "write_deps_file.m"
      {
#line 1977 "write_deps_file.m"
        parse_tree__write_deps_file__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1977 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_82_82, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 1977 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_82_82, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 1977 "write_deps_file.m"
      }
#line 1976 "write_deps_file.m"
      {
#line 1976 "write_deps_file.m"
        parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1976 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 1976 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_82_82));
#line 1976 "write_deps_file.m"
      }
#line 1976 "write_deps_file.m"
      {
#line 1976 "write_deps_file.m"
        parse_tree__write_deps_file__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1976 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_34));
#line 1976 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 1976 "write_deps_file.m"
      }
#line 1976 "write_deps_file.m"
      {
#line 1976 "write_deps_file.m"
        parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1976 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 1976 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 1976 "write_deps_file.m"
      }
#line 1975 "write_deps_file.m"
      {
#line 1975 "write_deps_file.m"
        parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 1975 "write_deps_file.m"
      }
#line 1975 "write_deps_file.m"
      {
#line 1975 "write_deps_file.m"
        parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_77_77));
#line 1975 "write_deps_file.m"
      }
#line 1975 "write_deps_file.m"
      {
#line 1975 "write_deps_file.m"
        parse_tree__write_deps_file__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 1975 "write_deps_file.m"
      }
#line 1975 "write_deps_file.m"
      {
#line 1975 "write_deps_file.m"
        parse_tree__write_deps_file__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 0) = ((MR_Box) ((MR_String) "\tfiles=\"\044("));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 1) = ((MR_Box) (parse_tree__write_deps_file__V_74_74));
#line 1975 "write_deps_file.m"
      }
#line 1974 "write_deps_file.m"
      {
#line 1974 "write_deps_file.m"
        parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1974 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) ((MR_String) " install_lib_dirs\n"));
#line 1974 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_72_72));
#line 1974 "write_deps_file.m"
      }
#line 1973 "write_deps_file.m"
      {
#line 1973 "write_deps_file.m"
        parse_tree__write_deps_file__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_69_69, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
#line 1973 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_69_69, 1) = ((MR_Box) (parse_tree__write_deps_file__V_70_70));
#line 1973 "write_deps_file.m"
      }
#line 1973 "write_deps_file.m"
      {
#line 1973 "write_deps_file.m"
        parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 1973 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 1) = ((MR_Box) (parse_tree__write_deps_file__V_69_69));
#line 1973 "write_deps_file.m"
      }
#line 1972 "write_deps_file.m"
      {
#line 1972 "write_deps_file.m"
        parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 1972 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (parse_tree__write_deps_file__V_68_68));
#line 1972 "write_deps_file.m"
      }
#line 1972 "write_deps_file.m"
      {
#line 1972 "write_deps_file.m"
        parse_tree__write_deps_file__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_34));
#line 1972 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 1) = ((MR_Box) (parse_tree__write_deps_file__V_67_67));
#line 1972 "write_deps_file.m"
      }
#line 1972 "write_deps_file.m"
      {
#line 1972 "write_deps_file.m"
        parse_tree__write_deps_file__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_64_64, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 1972 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_64_64, 1) = ((MR_Box) (parse_tree__write_deps_file__V_66_66));
#line 1972 "write_deps_file.m"
      }
#line 1972 "write_deps_file.m"
      {
#line 1972 "write_deps_file.m"
        parse_tree__write_deps_file__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1972 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 1) = ((MR_Box) (parse_tree__write_deps_file__V_64_64));
#line 1972 "write_deps_file.m"
      }
#line 1971 "write_deps_file.m"
      {
#line 1971 "write_deps_file.m"
        parse_tree__write_deps_file__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1971 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
#line 1971 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 1) = ((MR_Box) (parse_tree__write_deps_file__V_63_63));
#line 1971 "write_deps_file.m"
      }
#line 1971 "write_deps_file.m"
      {
#line 1971 "write_deps_file.m"
        parse_tree__write_deps_file__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1971 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1971 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 1) = ((MR_Box) (parse_tree__write_deps_file__V_61_61));
#line 1971 "write_deps_file.m"
      }
#line 1971 "write_deps_file.m"
      {
#line 1971 "write_deps_file.m"
        parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1971 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1971 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_60_60));
#line 1971 "write_deps_file.m"
      }
#line 1971 "write_deps_file.m"
      {
#line 1971 "write_deps_file.m"
        parse_tree__write_deps_file__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1971 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
#line 1971 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 1971 "write_deps_file.m"
      }
#line 1970 "write_deps_file.m"
      {
#line 1970 "write_deps_file.m"
        parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1970 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1970 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_57_57));
#line 1970 "write_deps_file.m"
      }
#line 1970 "write_deps_file.m"
      {
#line 1970 "write_deps_file.m"
        parse_tree__write_deps_file__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1970 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_54_54, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
#line 1970 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_54_54, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 1970 "write_deps_file.m"
      }
#line 1970 "write_deps_file.m"
      {
#line 1970 "write_deps_file.m"
        parse_tree__write_deps_file__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1970 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1970 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 1) = ((MR_Box) (parse_tree__write_deps_file__V_54_54));
#line 1970 "write_deps_file.m"
      }
#line 1969 "write_deps_file.m"
      {
#line 1969 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_51_51);
      }
#line 2003 "write_deps_file.m"
      {
#line 2003 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_opts", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallOptsTargetName_37);
      }
#line 2007 "write_deps_file.m"
      {
#line 2007 "write_deps_file.m"
        parse_tree__write_deps_file__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2007 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_37));
#line 2007 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 2007 "write_deps_file.m"
      }
#line 2006 "write_deps_file.m"
      {
#line 2006 "write_deps_file.m"
        parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2006 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2006 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_145_145));
#line 2006 "write_deps_file.m"
      }
#line 2006 "write_deps_file.m"
      {
#line 2006 "write_deps_file.m"
        parse_tree__write_deps_file__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2006 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_37));
#line 2006 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 2006 "write_deps_file.m"
      }
#line 2006 "write_deps_file.m"
      {
#line 2006 "write_deps_file.m"
        parse_tree__write_deps_file__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2006 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_139_139, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2006 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_139_139, 1) = ((MR_Box) (parse_tree__write_deps_file__V_142_142));
#line 2006 "write_deps_file.m"
      }
#line 2005 "write_deps_file.m"
      {
#line 2005 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_139_139);
      }
#line 2009 "write_deps_file.m"
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20 == (MR_Integer) 0);
#line 2009 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2010 "write_deps_file.m"
        (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__TransOpt_21 == (MR_Integer) 0);
#line 2013 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2012 "write_deps_file.m"
        {
#line 2012 "write_deps_file.m"
          {
#line 2012 "write_deps_file.m"
            mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_15, (MR_String) "\n\t\100:\n\n");
          }
#line 2012 "write_deps_file.m"
        }
#line 2013 "write_deps_file.m"
      else
#line 2014 "write_deps_file.m"
        {
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_151_151;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_153_153;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_154_154;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_156_156;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_158_158;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_159_159;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_160_160;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_162_162;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_164_164;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_166_166;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_168_168;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_170_170;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_172_172;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_174_174;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_176_176;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_178_178;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_180_180;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_182_182;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_184_184;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_186_186;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_188_188;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_190_190;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_192_192;
#line 2014 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_193_193;

#line 2031 "write_deps_file.m"
          {
#line 2031 "write_deps_file.m"
            parse_tree__write_deps_file__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2031 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_193_193, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_35));
#line 2031 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_193_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[43])));
#line 2031 "write_deps_file.m"
          }
#line 2031 "write_deps_file.m"
          {
#line 2031 "write_deps_file.m"
            parse_tree__write_deps_file__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2031 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
#line 2031 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 1) = ((MR_Box) (parse_tree__write_deps_file__V_193_193));
#line 2031 "write_deps_file.m"
          }
#line 2031 "write_deps_file.m"
          {
#line 2031 "write_deps_file.m"
            parse_tree__write_deps_file__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2031 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 0) = ((MR_Box) ((MR_String) "\tfor ext in "));
#line 2031 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 1) = ((MR_Box) (parse_tree__write_deps_file__V_192_192));
#line 2031 "write_deps_file.m"
          }
#line 2030 "write_deps_file.m"
          {
#line 2030 "write_deps_file.m"
            parse_tree__write_deps_file__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
#line 2030 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 1) = ((MR_Box) (parse_tree__write_deps_file__V_190_190));
#line 2030 "write_deps_file.m"
          }
#line 2029 "write_deps_file.m"
          {
#line 2029 "write_deps_file.m"
            parse_tree__write_deps_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2029 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 0) = ((MR_Box) ((MR_String) " then we just use\n"));
#line 2029 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 1) = ((MR_Box) (parse_tree__write_deps_file__V_188_188));
#line 2029 "write_deps_file.m"
          }
#line 2028 "write_deps_file.m"
          {
#line 2028 "write_deps_file.m"
            parse_tree__write_deps_file__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2028 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails,"));
#line 2028 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 1) = ((MR_Box) (parse_tree__write_deps_file__V_186_186));
#line 2028 "write_deps_file.m"
          }
#line 2027 "write_deps_file.m"
          {
#line 2027 "write_deps_file.m"
            parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2027 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) ((MR_String) " \140--use-subdirs\' option\n"));
#line 2027 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (parse_tree__write_deps_file__V_184_184));
#line 2027 "write_deps_file.m"
          }
#line 2026 "write_deps_file.m"
          {
#line 2026 "write_deps_file.m"
            parse_tree__write_deps_file__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2026 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the"));
#line 2026 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 1) = ((MR_Box) (parse_tree__write_deps_file__V_182_182));
#line 2026 "write_deps_file.m"
          }
#line 2025 "write_deps_file.m"
          {
#line 2025 "write_deps_file.m"
            parse_tree__write_deps_file__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2025 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_178_178, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
#line 2025 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_178_178, 1) = ((MR_Box) (parse_tree__write_deps_file__V_180_180));
#line 2025 "write_deps_file.m"
          }
#line 2024 "write_deps_file.m"
          {
#line 2024 "write_deps_file.m"
            parse_tree__write_deps_file__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2024 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
#line 2024 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 1) = ((MR_Box) (parse_tree__write_deps_file__V_178_178));
#line 2024 "write_deps_file.m"
          }
#line 2023 "write_deps_file.m"
          {
#line 2023 "write_deps_file.m"
            parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2023 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
#line 2023 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (parse_tree__write_deps_file__V_176_176));
#line 2023 "write_deps_file.m"
          }
#line 2022 "write_deps_file.m"
          {
#line 2022 "write_deps_file.m"
            parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2022 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
#line 2022 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 2022 "write_deps_file.m"
          }
#line 2021 "write_deps_file.m"
          {
#line 2021 "write_deps_file.m"
            parse_tree__write_deps_file__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2021 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_170_170, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
#line 2021 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_170_170, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 2021 "write_deps_file.m"
          }
#line 2020 "write_deps_file.m"
          {
#line 2020 "write_deps_file.m"
            parse_tree__write_deps_file__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2020 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_168_168, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
#line 2020 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_168_168, 1) = ((MR_Box) (parse_tree__write_deps_file__V_170_170));
#line 2020 "write_deps_file.m"
          }
#line 2019 "write_deps_file.m"
          {
#line 2019 "write_deps_file.m"
            parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2019 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
#line 2019 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_168_168));
#line 2019 "write_deps_file.m"
          }
#line 2018 "write_deps_file.m"
          {
#line 2018 "write_deps_file.m"
            parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2018 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\\n"));
#line 2018 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 2018 "write_deps_file.m"
          }
#line 2017 "write_deps_file.m"
          {
#line 2017 "write_deps_file.m"
            parse_tree__write_deps_file__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2017 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
#line 2017 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 2017 "write_deps_file.m"
          }
#line 2016 "write_deps_file.m"
          {
#line 2016 "write_deps_file.m"
            parse_tree__write_deps_file__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2016 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_160_160, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
#line 2016 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_160_160, 1) = ((MR_Box) (parse_tree__write_deps_file__V_162_162));
#line 2016 "write_deps_file.m"
          }
#line 2016 "write_deps_file.m"
          {
#line 2016 "write_deps_file.m"
            parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2016 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2016 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_160_160));
#line 2016 "write_deps_file.m"
          }
#line 2016 "write_deps_file.m"
          {
#line 2016 "write_deps_file.m"
            parse_tree__write_deps_file__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2016 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_158_158, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2016 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_158_158, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 2016 "write_deps_file.m"
          }
#line 2016 "write_deps_file.m"
          {
#line 2016 "write_deps_file.m"
            parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2016 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) ((MR_String) "\tfiles=\""));
#line 2016 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_158_158));
#line 2016 "write_deps_file.m"
          }
#line 2015 "write_deps_file.m"
          {
#line 2015 "write_deps_file.m"
            parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2015 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
#line 2015 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 2015 "write_deps_file.m"
          }
#line 2015 "write_deps_file.m"
          {
#line 2015 "write_deps_file.m"
            parse_tree__write_deps_file__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2015 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2015 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 2015 "write_deps_file.m"
          }
#line 2015 "write_deps_file.m"
          {
#line 2015 "write_deps_file.m"
            parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2015 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2015 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_153_153));
#line 2015 "write_deps_file.m"
          }
#line 2014 "write_deps_file.m"
          {
#line 2014 "write_deps_file.m"
            mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_151_151);
          }
#line 2014 "write_deps_file.m"
        }
#line 2054 "write_deps_file.m"
      {
#line 2054 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallHdrsTargetName_38);
      }
#line 2064 "write_deps_file.m"
      {
#line 2064 "write_deps_file.m"
        parse_tree__write_deps_file__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2064 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2064 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[47])));
#line 2064 "write_deps_file.m"
      }
#line 2064 "write_deps_file.m"
      {
#line 2064 "write_deps_file.m"
        parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2064 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
#line 2064 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_246_246));
#line 2064 "write_deps_file.m"
      }
#line 2063 "write_deps_file.m"
      {
#line 2063 "write_deps_file.m"
        parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2063 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 2063 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 2063 "write_deps_file.m"
      }
#line 2062 "write_deps_file.m"
      {
#line 2062 "write_deps_file.m"
        parse_tree__write_deps_file__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 2062 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 2062 "write_deps_file.m"
      }
#line 2061 "write_deps_file.m"
      {
#line 2061 "write_deps_file.m"
        parse_tree__write_deps_file__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 0) = ((MR_Box) ((MR_String) ".mhs),)\n"));
#line 2061 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 1) = ((MR_Box) (parse_tree__write_deps_file__V_240_240));
#line 2061 "write_deps_file.m"
      }
#line 2061 "write_deps_file.m"
      {
#line 2061 "write_deps_file.m"
        parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2061 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_238_238));
#line 2061 "write_deps_file.m"
      }
#line 2061 "write_deps_file.m"
      {
#line 2061 "write_deps_file.m"
        parse_tree__write_deps_file__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
#line 2061 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 2061 "write_deps_file.m"
      }
#line 2060 "write_deps_file.m"
      {
#line 2060 "write_deps_file.m"
        parse_tree__write_deps_file__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2060 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 0) = ((MR_Box) ((MR_String) "install_lib_dirs\n"));
#line 2060 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 1) = ((MR_Box) (parse_tree__write_deps_file__V_235_235));
#line 2060 "write_deps_file.m"
      }
#line 2059 "write_deps_file.m"
      {
#line 2059 "write_deps_file.m"
        parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) ((MR_String) ".mhs) "));
#line 2059 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (parse_tree__write_deps_file__V_233_233));
#line 2059 "write_deps_file.m"
      }
#line 2059 "write_deps_file.m"
      {
#line 2059 "write_deps_file.m"
        parse_tree__write_deps_file__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2059 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 2059 "write_deps_file.m"
      }
#line 2059 "write_deps_file.m"
      {
#line 2059 "write_deps_file.m"
        parse_tree__write_deps_file__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2059 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 1) = ((MR_Box) (parse_tree__write_deps_file__V_230_230));
#line 2059 "write_deps_file.m"
      }
#line 2058 "write_deps_file.m"
      {
#line 2058 "write_deps_file.m"
        parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2058 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) ((MR_String) " : "));
#line 2058 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_228_228));
#line 2058 "write_deps_file.m"
      }
#line 2058 "write_deps_file.m"
      {
#line 2058 "write_deps_file.m"
        parse_tree__write_deps_file__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2058 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_38));
#line 2058 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 2058 "write_deps_file.m"
      }
#line 2057 "write_deps_file.m"
      {
#line 2057 "write_deps_file.m"
        parse_tree__write_deps_file__V_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2057 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 1) = ((MR_Box) (parse_tree__write_deps_file__V_225_225));
#line 2057 "write_deps_file.m"
      }
#line 2057 "write_deps_file.m"
      {
#line 2057 "write_deps_file.m"
        parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_38));
#line 2057 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_223_223));
#line 2057 "write_deps_file.m"
      }
#line 2057 "write_deps_file.m"
      {
#line 2057 "write_deps_file.m"
        parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2057 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 2057 "write_deps_file.m"
      }
#line 2056 "write_deps_file.m"
      {
#line 2056 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_219_219);
      }
#line 2070 "write_deps_file.m"
      {
#line 2070 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_grade_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39);
      }
#line 2081 "write_deps_file.m"
      {
#line 2081 "write_deps_file.m"
        parse_tree__write_deps_file__V_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_289_289, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_289_289, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[71])));
#line 2081 "write_deps_file.m"
      }
#line 2081 "write_deps_file.m"
      {
#line 2081 "write_deps_file.m"
        parse_tree__write_deps_file__V_287_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 1) = ((MR_Box) (parse_tree__write_deps_file__V_289_289));
#line 2081 "write_deps_file.m"
      }
#line 2080 "write_deps_file.m"
      {
#line 2080 "write_deps_file.m"
        parse_tree__write_deps_file__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 1) = ((MR_Box) (parse_tree__write_deps_file__V_287_287));
#line 2080 "write_deps_file.m"
      }
#line 2079 "write_deps_file.m"
      {
#line 2079 "write_deps_file.m"
        parse_tree__write_deps_file__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2079 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 2079 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 1) = ((MR_Box) (parse_tree__write_deps_file__V_285_285));
#line 2079 "write_deps_file.m"
      }
#line 2078 "write_deps_file.m"
      {
#line 2078 "write_deps_file.m"
        parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) ((MR_String) ".mihs),)\n"));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (parse_tree__write_deps_file__V_283_283));
#line 2078 "write_deps_file.m"
      }
#line 2078 "write_deps_file.m"
      {
#line 2078 "write_deps_file.m"
        parse_tree__write_deps_file__V_280_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 2078 "write_deps_file.m"
      }
#line 2078 "write_deps_file.m"
      {
#line 2078 "write_deps_file.m"
        parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (parse_tree__write_deps_file__V_280_280));
#line 2078 "write_deps_file.m"
      }
#line 2077 "write_deps_file.m"
      {
#line 2077 "write_deps_file.m"
        parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2077 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
#line 2077 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (parse_tree__write_deps_file__V_278_278));
#line 2077 "write_deps_file.m"
      }
#line 2076 "write_deps_file.m"
      {
#line 2076 "write_deps_file.m"
        parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2076 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) ((MR_String) ".mihs) "));
#line 2076 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 2076 "write_deps_file.m"
      }
#line 2076 "write_deps_file.m"
      {
#line 2076 "write_deps_file.m"
        parse_tree__write_deps_file__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2076 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2076 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 1) = ((MR_Box) (parse_tree__write_deps_file__V_274_274));
#line 2076 "write_deps_file.m"
      }
#line 2076 "write_deps_file.m"
      {
#line 2076 "write_deps_file.m"
        parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2076 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2076 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_273_273));
#line 2076 "write_deps_file.m"
      }
#line 2075 "write_deps_file.m"
      {
#line 2075 "write_deps_file.m"
        parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2075 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) ((MR_String) " : "));
#line 2075 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 2075 "write_deps_file.m"
      }
#line 2075 "write_deps_file.m"
      {
#line 2075 "write_deps_file.m"
        parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2075 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39));
#line 2075 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 2075 "write_deps_file.m"
      }
#line 2074 "write_deps_file.m"
      {
#line 2074 "write_deps_file.m"
        parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2074 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2074 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_268_268));
#line 2074 "write_deps_file.m"
      }
#line 2074 "write_deps_file.m"
      {
#line 2074 "write_deps_file.m"
        parse_tree__write_deps_file__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2074 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39));
#line 2074 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 2074 "write_deps_file.m"
      }
#line 2074 "write_deps_file.m"
      {
#line 2074 "write_deps_file.m"
        parse_tree__write_deps_file__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2074 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2074 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 1) = ((MR_Box) (parse_tree__write_deps_file__V_265_265));
#line 2074 "write_deps_file.m"
      }
#line 2073 "write_deps_file.m"
      {
#line 2073 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_262_262);
#line 2073 "write_deps_file.m"
        return;
      }
#line 1926 "write_deps_file.m"
    }
#line 1920 "write_deps_file.m"
  }
#line 1920 "write_deps_file.m"
}

#line 1877 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
#line 1877 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_11,
#line 1877 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12,
#line 1877 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_13,
#line 1877 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_14,
#line 1877 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_15,
#line 1877 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_16,
#line 1877 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DepFileName_17,
#line 1877 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DvFileName_18)
#line 1877 "write_deps_file.m"
{
#line 1883 "write_deps_file.m"
  {
#line 1883 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1883 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleFileName_20;
#line 1883 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ForceC2InitTarget_21;
#line 1883 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TmpInitCFileName_22;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_31_31;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_33_33;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_35_35;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_36_36;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_38_38;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_41_41;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_47_47;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 1883 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_67_67;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_70_70;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_72_72;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_74_74;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_75_75;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_77_77;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_78_78;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_80_80;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_81_81;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_83_83;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_85_85;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_87_87;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_88_88;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_90_90;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_95_95;

#line 1884 "write_deps_file.m"
    {
#line 1884 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dep", (MR_Integer) 1, parse_tree__write_deps_file__DepFileName_17);
    }
#line 1886 "write_deps_file.m"
    {
#line 1886 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dv", (MR_Integer) 1, parse_tree__write_deps_file__DvFileName_18);
    }
#line 1891 "write_deps_file.m"
    {
#line 1891 "write_deps_file.m"
      parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_43_43, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
#line 1891 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])));
#line 1891 "write_deps_file.m"
    }
#line 1891 "write_deps_file.m"
    {
#line 1891 "write_deps_file.m"
      parse_tree__write_deps_file__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_41_41, 0) = ((MR_Box) ((MR_String) "\techo > "));
#line 1891 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_41_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 1891 "write_deps_file.m"
    }
#line 1890 "write_deps_file.m"
    {
#line 1890 "write_deps_file.m"
      parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (parse_tree__write_deps_file__V_41_41));
#line 1890 "write_deps_file.m"
    }
#line 1890 "write_deps_file.m"
    {
#line 1890 "write_deps_file.m"
      parse_tree__write_deps_file__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_38_38, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_38_38, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1890 "write_deps_file.m"
    }
#line 1890 "write_deps_file.m"
    {
#line 1890 "write_deps_file.m"
      parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) ((MR_String) " \044("));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_38_38));
#line 1890 "write_deps_file.m"
    }
#line 1890 "write_deps_file.m"
    {
#line 1890 "write_deps_file.m"
      parse_tree__write_deps_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, 0) = ((MR_Box) (*parse_tree__write_deps_file__DepFileName_17));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1890 "write_deps_file.m"
    }
#line 1890 "write_deps_file.m"
    {
#line 1890 "write_deps_file.m"
      parse_tree__write_deps_file__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_33_33, 0) = ((MR_Box) ((MR_String) " : "));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_33_33, 1) = ((MR_Box) (parse_tree__write_deps_file__V_35_35));
#line 1890 "write_deps_file.m"
    }
#line 1890 "write_deps_file.m"
    {
#line 1890 "write_deps_file.m"
      parse_tree__write_deps_file__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_31_31, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_31_31, 1) = ((MR_Box) (parse_tree__write_deps_file__V_33_33));
#line 1890 "write_deps_file.m"
    }
#line 1889 "write_deps_file.m"
    {
#line 1889 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_31_31);
    }
#line 1894 "write_deps_file.m"
    {
#line 1894 "write_deps_file.m"
      parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) " >> "));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 1894 "write_deps_file.m"
    }
#line 1894 "write_deps_file.m"
    {
#line 1894 "write_deps_file.m"
      parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) ".cs)"));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 1894 "write_deps_file.m"
    }
#line 1894 "write_deps_file.m"
    {
#line 1894 "write_deps_file.m"
      parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 1894 "write_deps_file.m"
    }
#line 1894 "write_deps_file.m"
    {
#line 1894 "write_deps_file.m"
      parse_tree__write_deps_file__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 1894 "write_deps_file.m"
    }
#line 1894 "write_deps_file.m"
    {
#line 1894 "write_deps_file.m"
      parse_tree__write_deps_file__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 0) = ((MR_Box) ((MR_String) "\t\044(MKLIBINIT) "));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 1) = ((MR_Box) (parse_tree__write_deps_file__V_50_50));
#line 1894 "write_deps_file.m"
    }
#line 1893 "write_deps_file.m"
    {
#line 1893 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_47_47);
    }
#line 1901 "write_deps_file.m"
    {
#line 1901 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\t\044(EXTRA_INIT_COMMAND) >> ");
    }
#line 1902 "write_deps_file.m"
    {
#line 1902 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__InitFileName_16);
    }
#line 1903 "write_deps_file.m"
    {
#line 1903 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1908 "write_deps_file.m"
    {
#line 1908 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleFileName_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_13);
    }
#line 1909 "write_deps_file.m"
    {
#line 1909 "write_deps_file.m"
      parse_tree__write_deps_file__V_67_67 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleFileName_20, (MR_String) "_init");
    }
#line 1909 "write_deps_file.m"
    {
#line 1909 "write_deps_file.m"
      parse_tree__write_deps_file__ForceC2InitTarget_21 = mercury__string__f_43_43_2_f_0((MR_String) "force-", parse_tree__write_deps_file__V_67_67);
    }
#line 1910 "write_deps_file.m"
    {
#line 1910 "write_deps_file.m"
      parse_tree__write_deps_file__TmpInitCFileName_22 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__InitCFileName_15, (MR_String) ".tmp");
    }
#line 1917 "write_deps_file.m"
    {
#line 1917 "write_deps_file.m"
      parse_tree__write_deps_file__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1917 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_95_95, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
#line 1917 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])));
#line 1917 "write_deps_file.m"
    }
#line 1917 "write_deps_file.m"
    {
#line 1917 "write_deps_file.m"
      parse_tree__write_deps_file__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1917 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 0) = ((MR_Box) ((MR_String) "\t\100mercury_update_interface "));
#line 1917 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 1) = ((MR_Box) (parse_tree__write_deps_file__V_95_95));
#line 1917 "write_deps_file.m"
    }
#line 1916 "write_deps_file.m"
    {
#line 1916 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) ((MR_String) ".init_cs) \044(ALL_C2INITARGS)\n"));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_93_93));
#line 1916 "write_deps_file.m"
    }
#line 1916 "write_deps_file.m"
    {
#line 1916 "write_deps_file.m"
      parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 1916 "write_deps_file.m"
    }
#line 1916 "write_deps_file.m"
    {
#line 1916 "write_deps_file.m"
      parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) " \044("));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1916 "write_deps_file.m"
    }
#line 1915 "write_deps_file.m"
    {
#line 1915 "write_deps_file.m"
      parse_tree__write_deps_file__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpInitCFileName_22));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1915 "write_deps_file.m"
    }
#line 1915 "write_deps_file.m"
    {
#line 1915 "write_deps_file.m"
      parse_tree__write_deps_file__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 0) = ((MR_Box) ((MR_String) "--init-c-file "));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 1) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 1915 "write_deps_file.m"
    }
#line 1914 "write_deps_file.m"
    {
#line 1914 "write_deps_file.m"
      parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) ((MR_String) "\t\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) "));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_85_85));
#line 1914 "write_deps_file.m"
    }
#line 1913 "write_deps_file.m"
    {
#line 1913 "write_deps_file.m"
      parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1913 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
#line 1913 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 1913 "write_deps_file.m"
    }
#line 1913 "write_deps_file.m"
    {
#line 1913 "write_deps_file.m"
      parse_tree__write_deps_file__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1913 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1913 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 1913 "write_deps_file.m"
    }
#line 1913 "write_deps_file.m"
    {
#line 1913 "write_deps_file.m"
      parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1913 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) ((MR_String) " \044("));
#line 1913 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 1913 "write_deps_file.m"
    }
#line 1913 "write_deps_file.m"
    {
#line 1913 "write_deps_file.m"
      parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1913 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
#line 1913 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 1913 "write_deps_file.m"
    }
#line 1913 "write_deps_file.m"
    {
#line 1913 "write_deps_file.m"
      parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1913 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) ((MR_String) " : "));
#line 1913 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_77_77));
#line 1913 "write_deps_file.m"
    }
#line 1913 "write_deps_file.m"
    {
#line 1913 "write_deps_file.m"
      parse_tree__write_deps_file__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1913 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
#line 1913 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 1913 "write_deps_file.m"
    }
#line 1912 "write_deps_file.m"
    {
#line 1912 "write_deps_file.m"
      parse_tree__write_deps_file__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1912 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 0) = ((MR_Box) ((MR_String) " :\n\n"));
#line 1912 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 1) = ((MR_Box) (parse_tree__write_deps_file__V_74_74));
#line 1912 "write_deps_file.m"
    }
#line 1912 "write_deps_file.m"
    {
#line 1912 "write_deps_file.m"
      parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1912 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
#line 1912 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_72_72));
#line 1912 "write_deps_file.m"
    }
#line 1911 "write_deps_file.m"
    {
#line 1911 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_70_70);
#line 1911 "write_deps_file.m"
      return;
    }
#line 1883 "write_deps_file.m"
  }
#line 1877 "write_deps_file.m"
}

#line 1643 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
#line 1643 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_19,
#line 1643 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_20,
#line 1643 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_21,
#line 1643 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_22,
#line 1643 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_23,
#line 1643 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
#line 1643 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_25,
#line 1643 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_26,
#line 1643 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
#line 1643 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
#line 1643 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
#line 1643 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
#line 1643 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
#line 1643 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__JarFileName_32,
#line 1643 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LibFileName_33,
#line 1643 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34)
#line 1643 "write_deps_file.m"
{
#line 1652 "write_deps_file.m"
  {
#line 1652 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Gmake_36;
#line 1652 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLLibsDepString_37;
#line 1652 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLObjsString_38;
#line 1652 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLPicObjsString_39;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IfIL_40;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ILMainRule_41;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IfJava2_42;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__JavaMainRule_43;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Else_44;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Else2_45;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__EndIf_46;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__EndIf2_47;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MainRule_48;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Target_49;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Rules_50;
#line 1652 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__LibTargetName_51;
#line 1652 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeSharedLibFileName_52;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__UseInstallName_53;
#line 1652 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InstallNameOpt_54;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__AllInts_55;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ILLibRule_56;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__JavaLibRule_57;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LibRule_58;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LibRules_59;
#line 1652 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ClassFiles_60;
#line 1652 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ListClassFiles_61;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_88_88;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_90_90;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_96_96;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_98_98;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_99_99;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_101_101;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_103_103;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_109_109;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_111_111;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_123_123;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_126_126;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_128_128;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_129_129;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_131_131;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_132_132;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_134_134;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_140_140;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_142_142;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_143_143;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_145_145;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_147_147;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_148_148;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_150_150;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_151_151;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_153_153;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_154_154;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_156_156;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_157_157;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_159_159;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_161_161;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_163_163;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_164_164;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_166_166;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_167_167;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_169_169;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_171_171;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_172_172;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_174_174;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_216_216;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_217_217;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_219_219;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_221_221;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_222_222;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_224_224;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_225_225;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_226_226;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_227_227;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_230_230;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_232_232;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_234_234;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_235_235;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_237_237;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_239_239;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_240_240;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_242_242;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_244_244;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_245_245;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_247_247;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_249_249;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_250_250;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_252_252;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_262_262;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_265_265;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_266_266;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_268_268;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_271_271;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_272_272;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_274_274;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_275_275;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_277_277;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_279_279;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_280_280;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_282_282;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_283_283;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_285_285;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_286_286;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_288_288;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_290_290;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_292_292;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_293_293;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_295_295;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_296_296;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_298_298;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_300_300;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_301_301;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_303_303;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_309_309;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_311_311;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_313_313;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_314_314;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_316_316;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_318_318;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_319_319;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_321_321;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_322_322;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_324_324;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_326_326;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_327_327;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_329_329;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_331_331;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_332_332;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_334_334;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_336_336;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_337_337;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_339_339;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_340_340;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_342_342;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_344_344;
#line 1652 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_349_349;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_351_351;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_353_353;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_355_355;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_357_357;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_358_358;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_360_360;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_362_362;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_363_363;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_365_365;

#line 1658 "write_deps_file.m"
    {
#line 1658 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 114, &parse_tree__write_deps_file__Gmake_36);
    }
#line 1671 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Gmake_36 == (MR_Integer) 0))
#line 1672 "write_deps_file.m"
      {
#line 1673 "write_deps_file.m"
        parse_tree__write_deps_file__All_MLLibsDepString_37 = (MR_String) "\044(ALL_MLLIBS_DEP)";
#line 1674 "write_deps_file.m"
        parse_tree__write_deps_file__All_MLObjsString_38 = (MR_String) "\044(ALL_MLOBJS)";
#line 1675 "write_deps_file.m"
        parse_tree__write_deps_file__All_MLPicObjsString_39 = (MR_String) "\044(ALL_MLPICOBJS)";
#line 1672 "write_deps_file.m"
      }
#line 1671 "write_deps_file.m"
    else
#line 1660 "write_deps_file.m"
      {
#line 1660 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_65_65;
#line 1660 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_67_67;
#line 1660 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_71_71;
#line 1660 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_73_73;
#line 1660 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_77_77;
#line 1660 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_79_79;

#line 1661 "write_deps_file.m"
        {
#line 1661 "write_deps_file.m"
          parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1661 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1661 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])));
#line 1661 "write_deps_file.m"
        }
#line 1661 "write_deps_file.m"
        {
#line 1661 "write_deps_file.m"
          parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1661 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
#line 1661 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_67_67));
#line 1661 "write_deps_file.m"
        }
#line 1661 "write_deps_file.m"
        {
#line 1661 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_65_65, &parse_tree__write_deps_file__All_MLLibsDepString_37);
        }
#line 1664 "write_deps_file.m"
        {
#line 1664 "write_deps_file.m"
          parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[110])));
#line 1664 "write_deps_file.m"
        }
#line 1664 "write_deps_file.m"
        {
#line 1664 "write_deps_file.m"
          parse_tree__write_deps_file__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
#line 1664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 1664 "write_deps_file.m"
        }
#line 1664 "write_deps_file.m"
        {
#line 1664 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_71_71, &parse_tree__write_deps_file__All_MLObjsString_38);
        }
#line 1669 "write_deps_file.m"
        {
#line 1669 "write_deps_file.m"
          parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1669 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1669 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[111])));
#line 1669 "write_deps_file.m"
        }
#line 1668 "write_deps_file.m"
        {
#line 1668 "write_deps_file.m"
          parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),\044(foreach \100,"));
#line 1668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 1668 "write_deps_file.m"
        }
#line 1667 "write_deps_file.m"
        {
#line 1667 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_77_77, &parse_tree__write_deps_file__All_MLPicObjsString_39);
        }
#line 1660 "write_deps_file.m"
      }
#line 1689 "write_deps_file.m"
    {
#line 1689 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, parse_tree__write_deps_file__ExeFileName_31);
    }
#line 1692 "write_deps_file.m"
    parse_tree__write_deps_file__IfIL_40 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[112]);
#line 1695 "write_deps_file.m"
    {
#line 1695 "write_deps_file.m"
      parse_tree__write_deps_file__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_103_103, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[113])));
#line 1695 "write_deps_file.m"
    }
#line 1695 "write_deps_file.m"
    {
#line 1695 "write_deps_file.m"
      parse_tree__write_deps_file__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 1) = ((MR_Box) (parse_tree__write_deps_file__V_103_103));
#line 1695 "write_deps_file.m"
    }
#line 1694 "write_deps_file.m"
    {
#line 1694 "write_deps_file.m"
      parse_tree__write_deps_file__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 0) = ((MR_Box) ((MR_String) ".dlls) "));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 1) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 1694 "write_deps_file.m"
    }
#line 1694 "write_deps_file.m"
    {
#line 1694 "write_deps_file.m"
      parse_tree__write_deps_file__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 1) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 1694 "write_deps_file.m"
    }
#line 1694 "write_deps_file.m"
    {
#line 1694 "write_deps_file.m"
      parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 1694 "write_deps_file.m"
    }
#line 1694 "write_deps_file.m"
    {
#line 1694 "write_deps_file.m"
      parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) ".exe : "));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 1694 "write_deps_file.m"
    }
#line 1694 "write_deps_file.m"
    {
#line 1694 "write_deps_file.m"
      parse_tree__write_deps_file__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 1694 "write_deps_file.m"
    }
#line 1693 "write_deps_file.m"
    {
#line 1693 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) ((MR_String) ".exe\n"));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_93_93));
#line 1693 "write_deps_file.m"
    }
#line 1693 "write_deps_file.m"
    {
#line 1693 "write_deps_file.m"
      parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 1693 "write_deps_file.m"
    }
#line 1693 "write_deps_file.m"
    {
#line 1693 "write_deps_file.m"
      parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) " : "));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1693 "write_deps_file.m"
    }
#line 1693 "write_deps_file.m"
    {
#line 1693 "write_deps_file.m"
      parse_tree__write_deps_file__ILMainRule_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILMainRule_41, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1693 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILMainRule_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1693 "write_deps_file.m"
    }
#line 1696 "write_deps_file.m"
    parse_tree__write_deps_file__IfJava2_42 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[114]);
#line 1697 "write_deps_file.m"
    {
#line 1697 "write_deps_file.m"
      parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1697 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1697 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[115])));
#line 1697 "write_deps_file.m"
    }
#line 1697 "write_deps_file.m"
    {
#line 1697 "write_deps_file.m"
      parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1697 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1697 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 1697 "write_deps_file.m"
    }
#line 1697 "write_deps_file.m"
    {
#line 1697 "write_deps_file.m"
      parse_tree__write_deps_file__JavaMainRule_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1697 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_43, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1697 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_43, 1) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 1697 "write_deps_file.m"
    }
#line 1699 "write_deps_file.m"
    parse_tree__write_deps_file__Else_44 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[116]);
#line 1700 "write_deps_file.m"
    parse_tree__write_deps_file__Else2_45 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[117]);
#line 1701 "write_deps_file.m"
    parse_tree__write_deps_file__EndIf_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[10]);
#line 1702 "write_deps_file.m"
    parse_tree__write_deps_file__EndIf2_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[118]);
#line 1708 "write_deps_file.m"
    {
#line 1708 "write_deps_file.m"
      parse_tree__write_deps_file__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1708 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_134_134, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1708 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[24])));
#line 1708 "write_deps_file.m"
    }
#line 1708 "write_deps_file.m"
    {
#line 1708 "write_deps_file.m"
      parse_tree__write_deps_file__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1708 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_132_132, 0) = ((MR_Box) ((MR_String) " : "));
#line 1708 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_132_132, 1) = ((MR_Box) (parse_tree__write_deps_file__V_134_134));
#line 1708 "write_deps_file.m"
    }
#line 1708 "write_deps_file.m"
    {
#line 1708 "write_deps_file.m"
      parse_tree__write_deps_file__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1708 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1708 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 1) = ((MR_Box) (parse_tree__write_deps_file__V_132_132));
#line 1708 "write_deps_file.m"
    }
#line 1707 "write_deps_file.m"
    {
#line 1707 "write_deps_file.m"
      parse_tree__write_deps_file__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1707 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1707 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 1) = ((MR_Box) (parse_tree__write_deps_file__V_131_131));
#line 1707 "write_deps_file.m"
    }
#line 1707 "write_deps_file.m"
    {
#line 1707 "write_deps_file.m"
      parse_tree__write_deps_file__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1707 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_128_128, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1707 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_128_128, 1) = ((MR_Box) (parse_tree__write_deps_file__V_129_129));
#line 1707 "write_deps_file.m"
    }
#line 1707 "write_deps_file.m"
    {
#line 1707 "write_deps_file.m"
      parse_tree__write_deps_file__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1707 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1707 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 1) = ((MR_Box) (parse_tree__write_deps_file__V_128_128));
#line 1707 "write_deps_file.m"
    }
#line 1706 "write_deps_file.m"
    {
#line 1706 "write_deps_file.m"
      parse_tree__write_deps_file__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1706 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_123_123, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_EXE),)\n"));
#line 1706 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_123_123, 1) = ((MR_Box) (parse_tree__write_deps_file__V_126_126));
#line 1706 "write_deps_file.m"
    }
#line 1705 "write_deps_file.m"
    {
#line 1705 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_123_123);
    }
#line 1719 "write_deps_file.m"
    {
#line 1719 "write_deps_file.m"
      parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1719 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1719 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[119])));
#line 1719 "write_deps_file.m"
    }
#line 1719 "write_deps_file.m"
    {
#line 1719 "write_deps_file.m"
      parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1719 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1719 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 1719 "write_deps_file.m"
    }
#line 1719 "write_deps_file.m"
    {
#line 1719 "write_deps_file.m"
      parse_tree__write_deps_file__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1719 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1719 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 1719 "write_deps_file.m"
    }
#line 1719 "write_deps_file.m"
    {
#line 1719 "write_deps_file.m"
      parse_tree__write_deps_file__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1719 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
#line 1719 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 1) = ((MR_Box) (parse_tree__write_deps_file__V_171_171));
#line 1719 "write_deps_file.m"
    }
#line 1718 "write_deps_file.m"
    {
#line 1718 "write_deps_file.m"
      parse_tree__write_deps_file__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1718 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 0) = ((MR_Box) ((MR_String) " \\\n"));
#line 1718 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 1) = ((MR_Box) (parse_tree__write_deps_file__V_169_169));
#line 1718 "write_deps_file.m"
    }
#line 1718 "write_deps_file.m"
    {
#line 1718 "write_deps_file.m"
      parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1718 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
#line 1718 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_167_167));
#line 1718 "write_deps_file.m"
    }
#line 1717 "write_deps_file.m"
    {
#line 1717 "write_deps_file.m"
      parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1717 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
#line 1717 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 1717 "write_deps_file.m"
    }
#line 1717 "write_deps_file.m"
    {
#line 1717 "write_deps_file.m"
      parse_tree__write_deps_file__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1717 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_163_163, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1717 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_163_163, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 1717 "write_deps_file.m"
    }
#line 1717 "write_deps_file.m"
    {
#line 1717 "write_deps_file.m"
      parse_tree__write_deps_file__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1717 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 0) = ((MR_Box) ((MR_String) "\044(EXEFILE_OPT)"));
#line 1717 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 1) = ((MR_Box) (parse_tree__write_deps_file__V_163_163));
#line 1717 "write_deps_file.m"
    }
#line 1716 "write_deps_file.m"
    {
#line 1716 "write_deps_file.m"
      parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1716 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) ((MR_String) "\t\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) "));
#line 1716 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_161_161));
#line 1716 "write_deps_file.m"
    }
#line 1715 "write_deps_file.m"
    {
#line 1715 "write_deps_file.m"
      parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1715 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 1715 "write_deps_file.m"
    }
#line 1715 "write_deps_file.m"
    {
#line 1715 "write_deps_file.m"
      parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
#line 1715 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 1715 "write_deps_file.m"
    }
#line 1715 "write_deps_file.m"
    {
#line 1715 "write_deps_file.m"
      parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) " "));
#line 1715 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 1715 "write_deps_file.m"
    }
#line 1715 "write_deps_file.m"
    {
#line 1715 "write_deps_file.m"
      parse_tree__write_deps_file__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1715 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 1715 "write_deps_file.m"
    }
#line 1714 "write_deps_file.m"
    {
#line 1714 "write_deps_file.m"
      parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1714 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) ((MR_String) " "));
#line 1714 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_153_153));
#line 1714 "write_deps_file.m"
    }
#line 1714 "write_deps_file.m"
    {
#line 1714 "write_deps_file.m"
      parse_tree__write_deps_file__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1714 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
#line 1714 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 1714 "write_deps_file.m"
    }
#line 1714 "write_deps_file.m"
    {
#line 1714 "write_deps_file.m"
      parse_tree__write_deps_file__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1714 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_148_148, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1714 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_148_148, 1) = ((MR_Box) (parse_tree__write_deps_file__V_150_150));
#line 1714 "write_deps_file.m"
    }
#line 1714 "write_deps_file.m"
    {
#line 1714 "write_deps_file.m"
      parse_tree__write_deps_file__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1714 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1714 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 1) = ((MR_Box) (parse_tree__write_deps_file__V_148_148));
#line 1714 "write_deps_file.m"
    }
#line 1714 "write_deps_file.m"
    {
#line 1714 "write_deps_file.m"
      parse_tree__write_deps_file__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1714 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1714 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 1) = ((MR_Box) (parse_tree__write_deps_file__V_147_147));
#line 1714 "write_deps_file.m"
    }
#line 1713 "write_deps_file.m"
    {
#line 1713 "write_deps_file.m"
      parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1713 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1713 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_145_145));
#line 1713 "write_deps_file.m"
    }
#line 1713 "write_deps_file.m"
    {
#line 1713 "write_deps_file.m"
      parse_tree__write_deps_file__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1713 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1713 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 1713 "write_deps_file.m"
    }
#line 1713 "write_deps_file.m"
    {
#line 1713 "write_deps_file.m"
      parse_tree__write_deps_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1713 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) : \044("));
#line 1713 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 1) = ((MR_Box) (parse_tree__write_deps_file__V_142_142));
#line 1713 "write_deps_file.m"
    }
#line 1713 "write_deps_file.m"
    {
#line 1713 "write_deps_file.m"
      parse_tree__write_deps_file__MainRule_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1713 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_48, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1713 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_48, 1) = ((MR_Box) (parse_tree__write_deps_file__V_140_140));
#line 1713 "write_deps_file.m"
    }
#line 1721 "write_deps_file.m"
    {
#line 1721 "write_deps_file.m"
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_19, &parse_tree__write_deps_file__Target_49);
    }
#line 1727 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Gmake_36 == (MR_Integer) 0))
#line 1732 "write_deps_file.m"
      if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 0))
#line 1745 "write_deps_file.m"
        parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__MainRule_48;
#line 1732 "write_deps_file.m"
      else
#line 1732 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 2))
#line 1735 "write_deps_file.m"
          parse_tree__write_deps_file__Rules_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1732 "write_deps_file.m"
        else
#line 1732 "write_deps_file.m"
          if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 4))
#line 1742 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1732 "write_deps_file.m"
          else
#line 1732 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 1))
#line 1731 "write_deps_file.m"
              parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__ILMainRule_41;
#line 1732 "write_deps_file.m"
            else
#line 1738 "write_deps_file.m"
              parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__JavaMainRule_43;
#line 1727 "write_deps_file.m"
    else
#line 1723 "write_deps_file.m"
      {
#line 1723 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_369_369 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1723 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_178_178;
#line 1723 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_179_179;
#line 1723 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_180_180;
#line 1723 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_181_181;
#line 1723 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_182_182;
#line 1723 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_183_183;
#line 1723 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_184_184;

#line 1726 "write_deps_file.m"
        {
#line 1726 "write_deps_file.m"
          parse_tree__write_deps_file__V_184_184 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__EndIf2_47, parse_tree__write_deps_file__EndIf_46);
        }
#line 1726 "write_deps_file.m"
        {
#line 1726 "write_deps_file.m"
          parse_tree__write_deps_file__V_183_183 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__MainRule_48, parse_tree__write_deps_file__V_184_184);
        }
#line 1725 "write_deps_file.m"
        {
#line 1725 "write_deps_file.m"
          parse_tree__write_deps_file__V_182_182 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__Else2_45, parse_tree__write_deps_file__V_183_183);
        }
#line 1725 "write_deps_file.m"
        {
#line 1725 "write_deps_file.m"
          parse_tree__write_deps_file__V_181_181 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__JavaMainRule_43, parse_tree__write_deps_file__V_182_182);
        }
#line 1725 "write_deps_file.m"
        {
#line 1725 "write_deps_file.m"
          parse_tree__write_deps_file__V_180_180 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__IfJava2_42, parse_tree__write_deps_file__V_181_181);
        }
#line 1724 "write_deps_file.m"
        {
#line 1724 "write_deps_file.m"
          parse_tree__write_deps_file__V_179_179 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__Else_44, parse_tree__write_deps_file__V_180_180);
        }
#line 1724 "write_deps_file.m"
        {
#line 1724 "write_deps_file.m"
          parse_tree__write_deps_file__V_178_178 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__ILMainRule_41, parse_tree__write_deps_file__V_179_179);
        }
#line 1724 "write_deps_file.m"
        {
#line 1724 "write_deps_file.m"
          parse_tree__write_deps_file__Rules_50 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__IfIL_40, parse_tree__write_deps_file__V_178_178);
        }
#line 1723 "write_deps_file.m"
      }
#line 1748 "write_deps_file.m"
    {
#line 1748 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Rules_50);
    }
#line 1753 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Intermod_25 == (MR_Integer) 0))
#line 1755 "write_deps_file.m"
      *parse_tree__write_deps_file__MaybeOptsVar_28 = (MR_String) "";
#line 1753 "write_deps_file.m"
    else
#line 1751 "write_deps_file.m"
      {
#line 1751 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_187_187;

#line 1752 "write_deps_file.m"
        {
#line 1752 "write_deps_file.m"
          parse_tree__write_deps_file__V_187_187 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".opts) ");
        }
#line 1752 "write_deps_file.m"
        {
#line 1752 "write_deps_file.m"
          *parse_tree__write_deps_file__MaybeOptsVar_28 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_187_187);
        }
#line 1751 "write_deps_file.m"
      }
#line 1760 "write_deps_file.m"
    if ((parse_tree__write_deps_file__TransOpt_26 == (MR_Integer) 0))
#line 1762 "write_deps_file.m"
      *parse_tree__write_deps_file__MaybeTransOptsVar_29 = (MR_String) "";
#line 1760 "write_deps_file.m"
    else
#line 1758 "write_deps_file.m"
      {
#line 1758 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_190_190;

#line 1759 "write_deps_file.m"
        {
#line 1759 "write_deps_file.m"
          parse_tree__write_deps_file__V_190_190 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".trans_opts) ");
        }
#line 1759 "write_deps_file.m"
        {
#line 1759 "write_deps_file.m"
          *parse_tree__write_deps_file__MaybeTransOptsVar_29 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_190_190);
        }
#line 1758 "write_deps_file.m"
      }
#line 1767 "write_deps_file.m"
    if ((parse_tree__write_deps_file__MmcMakeDeps_27 == (MR_Integer) 0))
#line 1769 "write_deps_file.m"
      *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = (MR_String) "";
#line 1767 "write_deps_file.m"
    else
#line 1765 "write_deps_file.m"
      {
#line 1765 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_193_193;

#line 1766 "write_deps_file.m"
        {
#line 1766 "write_deps_file.m"
          parse_tree__write_deps_file__V_193_193 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".module_deps) ");
        }
#line 1766 "write_deps_file.m"
        {
#line 1766 "write_deps_file.m"
          *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_193_193);
        }
#line 1765 "write_deps_file.m"
      }
#line 1772 "write_deps_file.m"
    {
#line 1772 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, &parse_tree__write_deps_file__LibTargetName_51);
    }
#line 1774 "write_deps_file.m"
    {
#line 1774 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044A", (MR_Integer) 0, parse_tree__write_deps_file__LibFileName_33);
    }
#line 1776 "write_deps_file.m"
    {
#line 1776 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 0, parse_tree__write_deps_file__SharedLibFileName_34);
    }
#line 1778 "write_deps_file.m"
    {
#line 1778 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 1, &parse_tree__write_deps_file__MaybeSharedLibFileName_52);
    }
#line 1781 "write_deps_file.m"
    {
#line 1781 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) ".jar", (MR_Integer) 1, parse_tree__write_deps_file__JarFileName_32);
    }
#line 1786 "write_deps_file.m"
    {
#line 1786 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 610, &parse_tree__write_deps_file__UseInstallName_53);
    }
#line 1791 "write_deps_file.m"
    if ((parse_tree__write_deps_file__UseInstallName_53 == (MR_Integer) 0))
#line 1793 "write_deps_file.m"
      parse_tree__write_deps_file__InstallNameOpt_54 = (MR_String) "";
#line 1791 "write_deps_file.m"
    else
#line 1790 "write_deps_file.m"
      {
#line 1790 "write_deps_file.m"
        libs__file_util__get_install_name_option_3_p_0(parse_tree__write_deps_file__Globals_19, *parse_tree__write_deps_file__SharedLibFileName_34, &parse_tree__write_deps_file__InstallNameOpt_54);
      }
#line 1801 "write_deps_file.m"
    parse_tree__write_deps_file__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106]);
#line 1800 "write_deps_file.m"
    {
#line 1800 "write_deps_file.m"
      parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1800 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_23));
#line 1800 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1800 "write_deps_file.m"
    }
#line 1799 "write_deps_file.m"
    {
#line 1799 "write_deps_file.m"
      parse_tree__write_deps_file__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1799 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeTransOptsVar_29));
#line 1799 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 1799 "write_deps_file.m"
    }
#line 1799 "write_deps_file.m"
    {
#line 1799 "write_deps_file.m"
      parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1799 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeOptsVar_28));
#line 1799 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_225_225));
#line 1799 "write_deps_file.m"
    }
#line 1798 "write_deps_file.m"
    {
#line 1798 "write_deps_file.m"
      parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1798 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 1798 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 1798 "write_deps_file.m"
    }
#line 1798 "write_deps_file.m"
    {
#line 1798 "write_deps_file.m"
      parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1798 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1798 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 1798 "write_deps_file.m"
    }
#line 1798 "write_deps_file.m"
    {
#line 1798 "write_deps_file.m"
      parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1798 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1798 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 1798 "write_deps_file.m"
    }
#line 1797 "write_deps_file.m"
    {
#line 1797 "write_deps_file.m"
      parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1797 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".ints) "));
#line 1797 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_219_219));
#line 1797 "write_deps_file.m"
    }
#line 1797 "write_deps_file.m"
    {
#line 1797 "write_deps_file.m"
      parse_tree__write_deps_file__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1797 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1797 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 1) = ((MR_Box) (parse_tree__write_deps_file__V_217_217));
#line 1797 "write_deps_file.m"
    }
#line 1797 "write_deps_file.m"
    {
#line 1797 "write_deps_file.m"
      parse_tree__write_deps_file__AllInts_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1797 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_55, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1797 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_216_216));
#line 1797 "write_deps_file.m"
    }
#line 1805 "write_deps_file.m"
    {
#line 1805 "write_deps_file.m"
      parse_tree__write_deps_file__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 0) = ((MR_Box) ((MR_String) ".foreign_dlls) \\\n\t\t"));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 1) = ((MR_Box) (parse_tree__write_deps_file__AllInts_55));
#line 1805 "write_deps_file.m"
    }
#line 1804 "write_deps_file.m"
    {
#line 1804 "write_deps_file.m"
      parse_tree__write_deps_file__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 1) = ((MR_Box) (parse_tree__write_deps_file__V_240_240));
#line 1804 "write_deps_file.m"
    }
#line 1804 "write_deps_file.m"
    {
#line 1804 "write_deps_file.m"
      parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_239_239));
#line 1804 "write_deps_file.m"
    }
#line 1803 "write_deps_file.m"
    {
#line 1803 "write_deps_file.m"
      parse_tree__write_deps_file__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 0) = ((MR_Box) ((MR_String) ".dlls) "));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 1803 "write_deps_file.m"
    }
#line 1803 "write_deps_file.m"
    {
#line 1803 "write_deps_file.m"
      parse_tree__write_deps_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 1) = ((MR_Box) (parse_tree__write_deps_file__V_235_235));
#line 1803 "write_deps_file.m"
    }
#line 1803 "write_deps_file.m"
    {
#line 1803 "write_deps_file.m"
      parse_tree__write_deps_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 1) = ((MR_Box) (parse_tree__write_deps_file__V_234_234));
#line 1803 "write_deps_file.m"
    }
#line 1803 "write_deps_file.m"
    {
#line 1803 "write_deps_file.m"
      parse_tree__write_deps_file__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 0) = ((MR_Box) ((MR_String) " : "));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 1) = ((MR_Box) (parse_tree__write_deps_file__V_232_232));
#line 1803 "write_deps_file.m"
    }
#line 1803 "write_deps_file.m"
    {
#line 1803 "write_deps_file.m"
      parse_tree__write_deps_file__ILLibRule_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILLibRule_56, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILLibRule_56, 1) = ((MR_Box) (parse_tree__write_deps_file__V_230_230));
#line 1803 "write_deps_file.m"
    }
#line 1809 "write_deps_file.m"
    {
#line 1809 "write_deps_file.m"
      parse_tree__write_deps_file__V_245_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1809 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 0) = ((MR_Box) ((MR_String) " \\\n\t\t"));
#line 1809 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 1) = ((MR_Box) (parse_tree__write_deps_file__AllInts_55));
#line 1809 "write_deps_file.m"
    }
#line 1808 "write_deps_file.m"
    {
#line 1808 "write_deps_file.m"
      parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_245_245));
#line 1808 "write_deps_file.m"
    }
#line 1808 "write_deps_file.m"
    {
#line 1808 "write_deps_file.m"
      parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) " : "));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 1808 "write_deps_file.m"
    }
#line 1808 "write_deps_file.m"
    {
#line 1808 "write_deps_file.m"
      parse_tree__write_deps_file__JavaLibRule_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_57, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 1808 "write_deps_file.m"
    }
#line 1813 "write_deps_file.m"
    {
#line 1813 "write_deps_file.m"
      parse_tree__write_deps_file__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1813 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSharedLibFileName_52));
#line 1813 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 1) = ((MR_Box) (parse_tree__write_deps_file__V_245_245));
#line 1813 "write_deps_file.m"
    }
#line 1812 "write_deps_file.m"
    {
#line 1812 "write_deps_file.m"
      parse_tree__write_deps_file__V_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1812 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 0) = ((MR_Box) ((MR_String) " "));
#line 1812 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 1) = ((MR_Box) (parse_tree__write_deps_file__V_252_252));
#line 1812 "write_deps_file.m"
    }
#line 1812 "write_deps_file.m"
    {
#line 1812 "write_deps_file.m"
      parse_tree__write_deps_file__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1812 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1812 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 1) = ((MR_Box) (parse_tree__write_deps_file__V_250_250));
#line 1812 "write_deps_file.m"
    }
#line 1812 "write_deps_file.m"
    {
#line 1812 "write_deps_file.m"
      parse_tree__write_deps_file__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1812 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 0) = ((MR_Box) ((MR_String) " : "));
#line 1812 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 1) = ((MR_Box) (parse_tree__write_deps_file__V_249_249));
#line 1812 "write_deps_file.m"
    }
#line 1812 "write_deps_file.m"
    {
#line 1812 "write_deps_file.m"
      parse_tree__write_deps_file__LibRule_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1812 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_58, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1812 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_247_247));
#line 1812 "write_deps_file.m"
    }
#line 1821 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Gmake_36 == (MR_Integer) 0))
#line 1826 "write_deps_file.m"
      if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 0))
#line 1839 "write_deps_file.m"
        parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__LibRule_58;
#line 1826 "write_deps_file.m"
      else
#line 1826 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 2))
#line 1829 "write_deps_file.m"
          parse_tree__write_deps_file__LibRules_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1826 "write_deps_file.m"
        else
#line 1826 "write_deps_file.m"
          if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 4))
#line 1836 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1826 "write_deps_file.m"
          else
#line 1826 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Target_49 == (MR_Integer) 1))
#line 1825 "write_deps_file.m"
              parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__ILLibRule_56;
#line 1826 "write_deps_file.m"
            else
#line 1832 "write_deps_file.m"
              parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__JavaLibRule_57;
#line 1821 "write_deps_file.m"
    else
#line 1817 "write_deps_file.m"
      {
#line 1817 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_370_370 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1817 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_255_255;
#line 1817 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_256_256;
#line 1817 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_257_257;
#line 1817 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_258_258;
#line 1817 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_259_259;
#line 1817 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_260_260;
#line 1817 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_261_261;

#line 1820 "write_deps_file.m"
        {
#line 1820 "write_deps_file.m"
          parse_tree__write_deps_file__V_261_261 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__EndIf2_47, parse_tree__write_deps_file__EndIf_46);
        }
#line 1820 "write_deps_file.m"
        {
#line 1820 "write_deps_file.m"
          parse_tree__write_deps_file__V_260_260 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__LibRule_58, parse_tree__write_deps_file__V_261_261);
        }
#line 1819 "write_deps_file.m"
        {
#line 1819 "write_deps_file.m"
          parse_tree__write_deps_file__V_259_259 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__Else2_45, parse_tree__write_deps_file__V_260_260);
        }
#line 1819 "write_deps_file.m"
        {
#line 1819 "write_deps_file.m"
          parse_tree__write_deps_file__V_258_258 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__JavaLibRule_57, parse_tree__write_deps_file__V_259_259);
        }
#line 1819 "write_deps_file.m"
        {
#line 1819 "write_deps_file.m"
          parse_tree__write_deps_file__V_257_257 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__IfJava2_42, parse_tree__write_deps_file__V_258_258);
        }
#line 1818 "write_deps_file.m"
        {
#line 1818 "write_deps_file.m"
          parse_tree__write_deps_file__V_256_256 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__Else_44, parse_tree__write_deps_file__V_257_257);
        }
#line 1818 "write_deps_file.m"
        {
#line 1818 "write_deps_file.m"
          parse_tree__write_deps_file__V_255_255 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__ILLibRule_56, parse_tree__write_deps_file__V_256_256);
        }
#line 1818 "write_deps_file.m"
        {
#line 1818 "write_deps_file.m"
          parse_tree__write_deps_file__LibRules_59 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__IfIL_40, parse_tree__write_deps_file__V_255_255);
        }
#line 1817 "write_deps_file.m"
      }
#line 1843 "write_deps_file.m"
    {
#line 1843 "write_deps_file.m"
      parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1843 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1843 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__LibRules_59));
#line 1843 "write_deps_file.m"
    }
#line 1843 "write_deps_file.m"
    {
#line 1843 "write_deps_file.m"
      parse_tree__write_deps_file__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1843 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1843 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 1843 "write_deps_file.m"
    }
#line 1843 "write_deps_file.m"
    {
#line 1843 "write_deps_file.m"
      parse_tree__write_deps_file__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1843 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1843 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 1) = ((MR_Box) (parse_tree__write_deps_file__V_265_265));
#line 1843 "write_deps_file.m"
    }
#line 1842 "write_deps_file.m"
    {
#line 1842 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_262_262);
    }
#line 1855 "write_deps_file.m"
    {
#line 1855 "write_deps_file.m"
      parse_tree__write_deps_file__V_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_303_303, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_303_303, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])));
#line 1855 "write_deps_file.m"
    }
#line 1855 "write_deps_file.m"
    {
#line 1855 "write_deps_file.m"
      parse_tree__write_deps_file__V_301_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 1) = ((MR_Box) (parse_tree__write_deps_file__V_303_303));
#line 1855 "write_deps_file.m"
    }
#line 1855 "write_deps_file.m"
    {
#line 1855 "write_deps_file.m"
      parse_tree__write_deps_file__V_300_300 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_300_300, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_300_300, 1) = ((MR_Box) (parse_tree__write_deps_file__V_301_301));
#line 1855 "write_deps_file.m"
    }
#line 1855 "write_deps_file.m"
    {
#line 1855 "write_deps_file.m"
      parse_tree__write_deps_file__V_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_298_298, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_298_298, 1) = ((MR_Box) (parse_tree__write_deps_file__V_300_300));
#line 1855 "write_deps_file.m"
    }
#line 1854 "write_deps_file.m"
    {
#line 1854 "write_deps_file.m"
      parse_tree__write_deps_file__V_296_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1854 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_296_296, 0) = ((MR_Box) ((MR_String) " \\\n"));
#line 1854 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_296_296, 1) = ((MR_Box) (parse_tree__write_deps_file__V_298_298));
#line 1854 "write_deps_file.m"
    }
#line 1854 "write_deps_file.m"
    {
#line 1854 "write_deps_file.m"
      parse_tree__write_deps_file__V_295_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1854 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_295_295, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
#line 1854 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_295_295, 1) = ((MR_Box) (parse_tree__write_deps_file__V_296_296));
#line 1854 "write_deps_file.m"
    }
#line 1853 "write_deps_file.m"
    {
#line 1853 "write_deps_file.m"
      parse_tree__write_deps_file__V_293_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1853 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_293_293, 0) = ((MR_Box) ((MR_String) " \044(ALL_LD_LIBFLAGS) -o "));
#line 1853 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_293_293, 1) = ((MR_Box) (parse_tree__write_deps_file__V_295_295));
#line 1853 "write_deps_file.m"
    }
#line 1853 "write_deps_file.m"
    {
#line 1853 "write_deps_file.m"
      parse_tree__write_deps_file__V_292_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1853 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 0) = ((MR_Box) (parse_tree__write_deps_file__InstallNameOpt_54));
#line 1853 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 1) = ((MR_Box) (parse_tree__write_deps_file__V_293_293));
#line 1853 "write_deps_file.m"
    }
#line 1853 "write_deps_file.m"
    {
#line 1853 "write_deps_file.m"
      parse_tree__write_deps_file__V_290_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1853 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 0) = ((MR_Box) ((MR_String) "-- "));
#line 1853 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 1) = ((MR_Box) (parse_tree__write_deps_file__V_292_292));
#line 1853 "write_deps_file.m"
    }
#line 1852 "write_deps_file.m"
    {
#line 1852 "write_deps_file.m"
      parse_tree__write_deps_file__V_288_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1852 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_288_288, 0) = ((MR_Box) ((MR_String) "\t\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) "));
#line 1852 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_288_288, 1) = ((MR_Box) (parse_tree__write_deps_file__V_290_290));
#line 1852 "write_deps_file.m"
    }
#line 1851 "write_deps_file.m"
    {
#line 1851 "write_deps_file.m"
      parse_tree__write_deps_file__V_286_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 1) = ((MR_Box) (parse_tree__write_deps_file__V_288_288));
#line 1851 "write_deps_file.m"
    }
#line 1851 "write_deps_file.m"
    {
#line 1851 "write_deps_file.m"
      parse_tree__write_deps_file__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 1) = ((MR_Box) (parse_tree__write_deps_file__V_286_286));
#line 1851 "write_deps_file.m"
    }
#line 1851 "write_deps_file.m"
    {
#line 1851 "write_deps_file.m"
      parse_tree__write_deps_file__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 0) = ((MR_Box) ((MR_String) " "));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 1) = ((MR_Box) (parse_tree__write_deps_file__V_285_285));
#line 1851 "write_deps_file.m"
    }
#line 1851 "write_deps_file.m"
    {
#line 1851 "write_deps_file.m"
      parse_tree__write_deps_file__V_282_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 1) = ((MR_Box) (parse_tree__write_deps_file__V_283_283));
#line 1851 "write_deps_file.m"
    }
#line 1850 "write_deps_file.m"
    {
#line 1850 "write_deps_file.m"
      parse_tree__write_deps_file__V_280_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1850 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
#line 1850 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 1) = ((MR_Box) (parse_tree__write_deps_file__V_282_282));
#line 1850 "write_deps_file.m"
    }
#line 1850 "write_deps_file.m"
    {
#line 1850 "write_deps_file.m"
      parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1850 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1850 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_280_280));
#line 1850 "write_deps_file.m"
    }
#line 1850 "write_deps_file.m"
    {
#line 1850 "write_deps_file.m"
      parse_tree__write_deps_file__V_277_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1850 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1850 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 1850 "write_deps_file.m"
    }
#line 1849 "write_deps_file.m"
    {
#line 1849 "write_deps_file.m"
      parse_tree__write_deps_file__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 1) = ((MR_Box) (parse_tree__write_deps_file__V_277_277));
#line 1849 "write_deps_file.m"
    }
#line 1849 "write_deps_file.m"
    {
#line 1849 "write_deps_file.m"
      parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (parse_tree__write_deps_file__V_275_275));
#line 1849 "write_deps_file.m"
    }
#line 1849 "write_deps_file.m"
    {
#line 1849 "write_deps_file.m"
      parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_274_274));
#line 1849 "write_deps_file.m"
    }
#line 1849 "write_deps_file.m"
    {
#line 1849 "write_deps_file.m"
      parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
#line 1849 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 1849 "write_deps_file.m"
    }
#line 1848 "write_deps_file.m"
    {
#line 1848 "write_deps_file.m"
      parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_SHARED_LIB),\044A)\n"));
#line 1848 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 1848 "write_deps_file.m"
    }
#line 1847 "write_deps_file.m"
    {
#line 1847 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_268_268);
    }
#line 1866 "write_deps_file.m"
    {
#line 1866 "write_deps_file.m"
      parse_tree__write_deps_file__V_344_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1866 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1866 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1866 "write_deps_file.m"
    }
#line 1866 "write_deps_file.m"
    {
#line 1866 "write_deps_file.m"
      parse_tree__write_deps_file__V_342_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1866 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 0) = ((MR_Box) ((MR_String) "\t\044(RANLIB) \044(ALL_RANLIBFLAGS) "));
#line 1866 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 1) = ((MR_Box) (parse_tree__write_deps_file__V_344_344));
#line 1866 "write_deps_file.m"
    }
#line 1865 "write_deps_file.m"
    {
#line 1865 "write_deps_file.m"
      parse_tree__write_deps_file__V_340_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 1) = ((MR_Box) (parse_tree__write_deps_file__V_342_342));
#line 1865 "write_deps_file.m"
    }
#line 1865 "write_deps_file.m"
    {
#line 1865 "write_deps_file.m"
      parse_tree__write_deps_file__V_339_339 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 1) = ((MR_Box) (parse_tree__write_deps_file__V_340_340));
#line 1865 "write_deps_file.m"
    }
#line 1865 "write_deps_file.m"
    {
#line 1865 "write_deps_file.m"
      parse_tree__write_deps_file__V_337_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 1) = ((MR_Box) (parse_tree__write_deps_file__V_339_339));
#line 1865 "write_deps_file.m"
    }
#line 1865 "write_deps_file.m"
    {
#line 1865 "write_deps_file.m"
      parse_tree__write_deps_file__V_336_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 1) = ((MR_Box) (parse_tree__write_deps_file__V_337_337));
#line 1865 "write_deps_file.m"
    }
#line 1865 "write_deps_file.m"
    {
#line 1865 "write_deps_file.m"
      parse_tree__write_deps_file__V_334_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 1) = ((MR_Box) (parse_tree__write_deps_file__V_336_336));
#line 1865 "write_deps_file.m"
    }
#line 1864 "write_deps_file.m"
    {
#line 1864 "write_deps_file.m"
      parse_tree__write_deps_file__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 0) = ((MR_Box) ((MR_String) " "));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 1) = ((MR_Box) (parse_tree__write_deps_file__V_334_334));
#line 1864 "write_deps_file.m"
    }
#line 1864 "write_deps_file.m"
    {
#line 1864 "write_deps_file.m"
      parse_tree__write_deps_file__V_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 1) = ((MR_Box) (parse_tree__write_deps_file__V_332_332));
#line 1864 "write_deps_file.m"
    }
#line 1864 "write_deps_file.m"
    {
#line 1864 "write_deps_file.m"
      parse_tree__write_deps_file__V_329_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 0) = ((MR_Box) ((MR_String) "\t\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)"));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 1) = ((MR_Box) (parse_tree__write_deps_file__V_331_331));
#line 1864 "write_deps_file.m"
    }
#line 1863 "write_deps_file.m"
    {
#line 1863 "write_deps_file.m"
      parse_tree__write_deps_file__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1863 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1863 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 1) = ((MR_Box) (parse_tree__write_deps_file__V_329_329));
#line 1863 "write_deps_file.m"
    }
#line 1863 "write_deps_file.m"
    {
#line 1863 "write_deps_file.m"
      parse_tree__write_deps_file__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1863 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1863 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 1) = ((MR_Box) (parse_tree__write_deps_file__V_327_327));
#line 1863 "write_deps_file.m"
    }
#line 1863 "write_deps_file.m"
    {
#line 1863 "write_deps_file.m"
      parse_tree__write_deps_file__V_324_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1863 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_324_324, 0) = ((MR_Box) ((MR_String) "\trm -f "));
#line 1863 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_324_324, 1) = ((MR_Box) (parse_tree__write_deps_file__V_326_326));
#line 1863 "write_deps_file.m"
    }
#line 1862 "write_deps_file.m"
    {
#line 1862 "write_deps_file.m"
      parse_tree__write_deps_file__V_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1862 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1862 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 1) = ((MR_Box) (parse_tree__write_deps_file__V_324_324));
#line 1862 "write_deps_file.m"
    }
#line 1862 "write_deps_file.m"
    {
#line 1862 "write_deps_file.m"
      parse_tree__write_deps_file__V_321_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1862 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_321_321, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1862 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_321_321, 1) = ((MR_Box) (parse_tree__write_deps_file__V_322_322));
#line 1862 "write_deps_file.m"
    }
#line 1862 "write_deps_file.m"
    {
#line 1862 "write_deps_file.m"
      parse_tree__write_deps_file__V_319_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1862 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_319_319, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1862 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_319_319, 1) = ((MR_Box) (parse_tree__write_deps_file__V_321_321));
#line 1862 "write_deps_file.m"
    }
#line 1862 "write_deps_file.m"
    {
#line 1862 "write_deps_file.m"
      parse_tree__write_deps_file__V_318_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1862 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_318_318, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1862 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_318_318, 1) = ((MR_Box) (parse_tree__write_deps_file__V_319_319));
#line 1862 "write_deps_file.m"
    }
#line 1862 "write_deps_file.m"
    {
#line 1862 "write_deps_file.m"
      parse_tree__write_deps_file__V_316_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1862 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_316_316, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1862 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_316_316, 1) = ((MR_Box) (parse_tree__write_deps_file__V_318_318));
#line 1862 "write_deps_file.m"
    }
#line 1861 "write_deps_file.m"
    {
#line 1861 "write_deps_file.m"
      parse_tree__write_deps_file__V_314_314 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1861 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_314_314, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1861 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_314_314, 1) = ((MR_Box) (parse_tree__write_deps_file__V_316_316));
#line 1861 "write_deps_file.m"
    }
#line 1861 "write_deps_file.m"
    {
#line 1861 "write_deps_file.m"
      parse_tree__write_deps_file__V_313_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1861 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1861 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 1) = ((MR_Box) (parse_tree__write_deps_file__V_314_314));
#line 1861 "write_deps_file.m"
    }
#line 1861 "write_deps_file.m"
    {
#line 1861 "write_deps_file.m"
      parse_tree__write_deps_file__V_311_311 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1861 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_311_311, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1861 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_311_311, 1) = ((MR_Box) (parse_tree__write_deps_file__V_313_313));
#line 1861 "write_deps_file.m"
    }
#line 1861 "write_deps_file.m"
    {
#line 1861 "write_deps_file.m"
      parse_tree__write_deps_file__V_309_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1861 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_309_309, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1861 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_309_309, 1) = ((MR_Box) (parse_tree__write_deps_file__V_311_311));
#line 1861 "write_deps_file.m"
    }
#line 1860 "write_deps_file.m"
    {
#line 1860 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_309_309);
    }
#line 1869 "write_deps_file.m"
    {
#line 1869 "write_deps_file.m"
      parse_tree__write_deps_file__V_349_349 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".classes)");
    }
#line 1869 "write_deps_file.m"
    {
#line 1869 "write_deps_file.m"
      parse_tree__write_deps_file__ClassFiles_60 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_349_349);
    }
#line 1870 "write_deps_file.m"
    {
#line 1870 "write_deps_file.m"
      parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ClassFiles_60, &parse_tree__write_deps_file__ListClassFiles_61);
    }
#line 1874 "write_deps_file.m"
    {
#line 1874 "write_deps_file.m"
      parse_tree__write_deps_file__V_365_365 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 0) = ((MR_Box) (parse_tree__write_deps_file__ListClassFiles_61));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1874 "write_deps_file.m"
    }
#line 1873 "write_deps_file.m"
    {
#line 1873 "write_deps_file.m"
      parse_tree__write_deps_file__V_363_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 0) = ((MR_Box) ((MR_String) " "));
#line 1873 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 1) = ((MR_Box) (parse_tree__write_deps_file__V_365_365));
#line 1873 "write_deps_file.m"
    }
#line 1873 "write_deps_file.m"
    {
#line 1873 "write_deps_file.m"
      parse_tree__write_deps_file__V_362_362 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_362_362, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1873 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_362_362, 1) = ((MR_Box) (parse_tree__write_deps_file__V_363_363));
#line 1873 "write_deps_file.m"
    }
#line 1873 "write_deps_file.m"
    {
#line 1873 "write_deps_file.m"
      parse_tree__write_deps_file__V_360_360 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 0) = ((MR_Box) ((MR_String) "\t\044(JAR) \044(JAR_CREATE_FLAGS) "));
#line 1873 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 1) = ((MR_Box) (parse_tree__write_deps_file__V_362_362));
#line 1873 "write_deps_file.m"
    }
#line 1872 "write_deps_file.m"
    {
#line 1872 "write_deps_file.m"
      parse_tree__write_deps_file__V_358_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1872 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 0) = ((MR_Box) ((MR_String) ".classes)\n"));
#line 1872 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 1) = ((MR_Box) (parse_tree__write_deps_file__V_360_360));
#line 1872 "write_deps_file.m"
    }
#line 1872 "write_deps_file.m"
    {
#line 1872 "write_deps_file.m"
      parse_tree__write_deps_file__V_357_357 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1872 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1872 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 1) = ((MR_Box) (parse_tree__write_deps_file__V_358_358));
#line 1872 "write_deps_file.m"
    }
#line 1872 "write_deps_file.m"
    {
#line 1872 "write_deps_file.m"
      parse_tree__write_deps_file__V_355_355 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1872 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1872 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 1) = ((MR_Box) (parse_tree__write_deps_file__V_357_357));
#line 1872 "write_deps_file.m"
    }
#line 1872 "write_deps_file.m"
    {
#line 1872 "write_deps_file.m"
      parse_tree__write_deps_file__V_353_353 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1872 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_353_353, 0) = ((MR_Box) ((MR_String) " : "));
#line 1872 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_353_353, 1) = ((MR_Box) (parse_tree__write_deps_file__V_355_355));
#line 1872 "write_deps_file.m"
    }
#line 1872 "write_deps_file.m"
    {
#line 1872 "write_deps_file.m"
      parse_tree__write_deps_file__V_351_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1872 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1872 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 1) = ((MR_Box) (parse_tree__write_deps_file__V_353_353));
#line 1872 "write_deps_file.m"
    }
#line 1871 "write_deps_file.m"
    {
#line 1871 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_351_351);
#line 1871 "write_deps_file.m"
      return;
    }
#line 1652 "write_deps_file.m"
  }
#line 1643 "write_deps_file.m"
}

#line 1585 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
#line 1585 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1585 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1585 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1585 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1585 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12)
#line 1585 "write_deps_file.m"
{
#line 1589 "write_deps_file.m"
  {
#line 1589 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Version_15;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Fullarch_16;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_17;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitFileName_18;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitCFileName_19;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitObjFileName_20;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitPicObjFileName_21;
#line 1589 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Intermod_22;
#line 1589 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TransOpt_23;
#line 1589 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MmcMakeDeps_24;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeOptsVar_25;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeTransOptsVar_26;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_27;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ExeFileName_28;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__JarFileName_29;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__LibFileName_30;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SharedLibFileName_31;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DepFileName_32;
#line 1589 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DvFileName_33;

#line 1590 "write_deps_file.m"
    {
#line 1590 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependencies for module \140");
    }
#line 1592 "write_deps_file.m"
    {
#line 1592 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
#line 1593 "write_deps_file.m"
    {
#line 1593 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
#line 1594 "write_deps_file.m"
    {
#line 1594 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1595 "write_deps_file.m"
    {
#line 1595 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
#line 1597 "write_deps_file.m"
    {
#line 1597 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
#line 1598 "write_deps_file.m"
    {
#line 1598 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1600 "write_deps_file.m"
    {
#line 1600 "write_deps_file.m"
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_15, &parse_tree__write_deps_file__Fullarch_16);
    }
#line 1601 "write_deps_file.m"
    {
#line 1601 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
#line 1603 "write_deps_file.m"
    {
#line 1603 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
#line 1604 "write_deps_file.m"
    {
#line 1604 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n# configured for ");
    }
#line 1605 "write_deps_file.m"
    {
#line 1605 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_16);
    }
#line 1606 "write_deps_file.m"
    {
#line 1606 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
#line 1608 "write_deps_file.m"
    {
#line 1608 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_17);
    }
#line 1610 "write_deps_file.m"
    {
#line 1610 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) ".init", (MR_Integer) 0, &parse_tree__write_deps_file__InitFileName_18);
    }
#line 1612 "write_deps_file.m"
    {
#line 1612 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.c", (MR_Integer) 0, &parse_tree__write_deps_file__InitCFileName_19);
    }
#line 1614 "write_deps_file.m"
    {
#line 1614 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.\044O", (MR_Integer) 0, &parse_tree__write_deps_file__InitObjFileName_20);
    }
#line 1616 "write_deps_file.m"
    {
#line 1616 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.pic_o", (MR_Integer) 0, &parse_tree__write_deps_file__InitPicObjFileName_21);
    }
#line 1619 "write_deps_file.m"
    {
#line 1619 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 323, &parse_tree__write_deps_file__Intermod_22);
    }
#line 1620 "write_deps_file.m"
    {
#line 1620 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 327, &parse_tree__write_deps_file__TransOpt_23);
    }
#line 1621 "write_deps_file.m"
    {
#line 1621 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 113, &parse_tree__write_deps_file__MmcMakeDeps_24);
    }
#line 1624 "write_deps_file.m"
    {
#line 1624 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__InitFileName_18, parse_tree__write_deps_file__InitObjFileName_20, parse_tree__write_deps_file__Intermod_22, parse_tree__write_deps_file__TransOpt_23, parse_tree__write_deps_file__MmcMakeDeps_24, &parse_tree__write_deps_file__MaybeOptsVar_25, &parse_tree__write_deps_file__MaybeTransOptsVar_26, &parse_tree__write_deps_file__MaybeModuleDepsVar_27, &parse_tree__write_deps_file__ExeFileName_28, &parse_tree__write_deps_file__JarFileName_29, &parse_tree__write_deps_file__LibFileName_30, &parse_tree__write_deps_file__SharedLibFileName_31);
    }
#line 1629 "write_deps_file.m"
    {
#line 1629 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__InitCFileName_19, parse_tree__write_deps_file__InitFileName_18, &parse_tree__write_deps_file__DepFileName_32, &parse_tree__write_deps_file__DvFileName_33);
    }
#line 1632 "write_deps_file.m"
    {
#line 1632 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__DepsMap_11, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__MmcMakeDeps_24, parse_tree__write_deps_file__Intermod_22, parse_tree__write_deps_file__TransOpt_23, parse_tree__write_deps_file__MaybeModuleDepsVar_27, parse_tree__write_deps_file__MaybeOptsVar_25, parse_tree__write_deps_file__MaybeTransOptsVar_26);
    }
#line 1635 "write_deps_file.m"
    {
#line 1635 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17);
    }
#line 1637 "write_deps_file.m"
    {
#line 1637 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__ExeFileName_28, parse_tree__write_deps_file__InitCFileName_19, parse_tree__write_deps_file__InitObjFileName_20, parse_tree__write_deps_file__InitPicObjFileName_21, parse_tree__write_deps_file__InitFileName_18, parse_tree__write_deps_file__LibFileName_30, parse_tree__write_deps_file__SharedLibFileName_31, parse_tree__write_deps_file__JarFileName_29, parse_tree__write_deps_file__DepFileName_32, parse_tree__write_deps_file__DvFileName_33);
#line 1637 "write_deps_file.m"
      return;
    }
#line 1589 "write_deps_file.m"
  }
#line 1585 "write_deps_file.m"
}

#line 1523 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0_1(
#line 1523 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1523 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1523 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1523 "write_deps_file.m"
{
#line 1523 "write_deps_file.m"
  {
#line 1523 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1523 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1523 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__3_16;

#line 1523 "write_deps_file.m"
    {
#line 1523 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1523__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv0_HeadVar__3_16);
    }
#line 1523 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1523 "write_deps_file.m"
      {
#line 1523 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__3_16));
#line 1523 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1523 "write_deps_file.m"
      }
#line 1523 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1523 "write_deps_file.m"
  }
#line 1523 "write_deps_file.m"
}

#line 1519 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0(
#line 1519 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_4,
#line 1519 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5)
#line 1519 "write_deps_file.m"
{
#line 1522 "write_deps_file.m"
  {
#line 1522 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1522 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModules_6;
#line 1522 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__P_7;
#line 1522 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModulesList_14;

#line 1523 "write_deps_file.m"
    {
#line 1523 "write_deps_file.m"
      parse_tree__write_deps_file__P_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1523 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[4]));
#line 1523 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 1) = ((MR_Box) (parse_tree__write_deps_file__foreign_modules_2_f_0_1));
#line 1523 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1523 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_5));
#line 1523 "write_deps_file.m"
    }
#line 1531 "write_deps_file.m"
    {
#line 1531 "write_deps_file.m"
      mercury__list__filter_map_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[1], parse_tree__write_deps_file__P_7, parse_tree__write_deps_file__Modules_4, &parse_tree__write_deps_file__ForeignModulesList_14);
    }
#line 1532 "write_deps_file.m"
    {
#line 1532 "write_deps_file.m"
      parse_tree__write_deps_file__ForeignModules_6 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[0], parse_tree__write_deps_file__ForeignModulesList_14);
    }
#line 1522 "write_deps_file.m"
    return parse_tree__write_deps_file__ForeignModules_6;
#line 1522 "write_deps_file.m"
  }
#line 1519 "write_deps_file.m"
}

#line 1496 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
#line 1496 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1496 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_2,
#line 1496 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3)
#line 1496 "write_deps_file.m"
{
#line 1499 "write_deps_file.m"
  {
#line 1499 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 1499 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1499 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1499 "write_deps_file.m"
    else
#line 1500 "write_deps_file.m"
      {
#line 1500 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1500 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Modules0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1500 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ModulesTail_9;
#line 1500 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ModuleImports_11;
#line 1500 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Error_14;
#line 1500 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_15_15;
#line 1502 "write_deps_file.m"
        MR_Box parse_tree__write_deps_file__conv0_V_15_15;
#line 1502 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_10_10;
#line 1503 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file___Items_12;
#line 1503 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file___Specs_13;

#line 1501 "write_deps_file.m"
        {
#line 1501 "write_deps_file.m"
          parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_6, parse_tree__write_deps_file__DepsMap_2, &parse_tree__write_deps_file__ModulesTail_9);
        }
#line 1502 "write_deps_file.m"
        {
#line 1502 "write_deps_file.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_2, ((MR_Box) (parse_tree__write_deps_file__Module_5)), &parse_tree__write_deps_file__conv0_V_15_15);
        }
#line 1502 "write_deps_file.m"
        parse_tree__write_deps_file__V_15_15 = ((MR_Word) parse_tree__write_deps_file__conv0_V_15_15);
#line 1502 "write_deps_file.m"
        parse_tree__write_deps_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_15_15, (MR_Integer) 0)));
#line 1502 "write_deps_file.m"
        parse_tree__write_deps_file__ModuleImports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_15_15, (MR_Integer) 1)));
#line 1503 "write_deps_file.m"
        {
#line 1503 "write_deps_file.m"
          parse_tree__module_imports__module_and_imports_get_results_4_p_0(parse_tree__write_deps_file__ModuleImports_11, &parse_tree__write_deps_file___Items_12, &parse_tree__write_deps_file___Specs_13, &parse_tree__write_deps_file__Error_14);
        }
#line 1507 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Error_14 == (MR_Integer) 2))
#line 1506 "write_deps_file.m"
          *parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__ModulesTail_9;
#line 1507 "write_deps_file.m"
        else
#line 1511 "write_deps_file.m"
          {
#line 1511 "write_deps_file.m"
            MR_Word base;
#line 1511 "write_deps_file.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "write_deps_file.m"
            *parse_tree__write_deps_file__HeadVar__3_3 = base;
#line 1511 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Module_5));
#line 1511 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__ModulesTail_9));
#line 1511 "write_deps_file.m"
          }
#line 1500 "write_deps_file.m"
      }
#line 1499 "write_deps_file.m"
  }
#line 1496 "write_deps_file.m"
}

#line 1170 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
#line 1170 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1170 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1170 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
#line 1170 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
#line 1170 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
#line 1170 "write_deps_file.m"
{
#line 1170 "write_deps_file.m"
  {
#line 1170 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1170 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__conv2_HeadVar__3_120;

#line 1170 "write_deps_file.m"
    {
#line 1170 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1170__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv2_HeadVar__3_120);
    }
#line 1170 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__3_120));
#line 1170 "write_deps_file.m"
  }
#line 1170 "write_deps_file.m"
}

#line 1121 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
#line 1121 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1121 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1121 "write_deps_file.m"
{
#line 1121 "write_deps_file.m"
  {
#line 1121 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1121 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 1121 "write_deps_file.m"
    {
#line 1121 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1121__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1121 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1121 "write_deps_file.m"
  }
#line 1121 "write_deps_file.m"
}

#line 1102 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
#line 1102 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1102 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1102 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1102 "write_deps_file.m"
{
#line 1102 "write_deps_file.m"
  {
#line 1102 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1102 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__conv1_FileName_6;

#line 1102 "write_deps_file.m"
    {
#line 1102 "write_deps_file.m"
      parse_tree__write_deps_file__get_source_file_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_FileName_6);
    }
#line 1102 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_FileName_6));
#line 1102 "write_deps_file.m"
  }
#line 1102 "write_deps_file.m"
}

#line 1099 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
#line 1099 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1099 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1099 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1099 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 1099 "write_deps_file.m"
{
#line 1099 "write_deps_file.m"
  {
#line 1099 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1099 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_Result_6;

#line 1099 "write_deps_file.m"
    {
#line 1099 "write_deps_file.m"
      parse_tree__write_deps_file__compare_module_names_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_Result_6);
    }
#line 1099 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_3 = ((MR_Box) (parse_tree__write_deps_file__conv0_Result_6));
#line 1099 "write_deps_file.m"
  }
#line 1099 "write_deps_file.m"
}

#line 1075 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
#line 1075 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1075 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1075 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1075 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1075 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12)
#line 1075 "write_deps_file.m"
{
#line 1079 "write_deps_file.m"
  {
#line 1079 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_485_485;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_492_492;
#line 1079 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
#line 1079 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Version_15;
#line 1079 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Fullarch_16;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules0_17;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules1_18;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_19;
#line 1079 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_20;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFiles0_21;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFiles_22;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModulesWithSubModules_23;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Target_29;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModulesAndExts_30;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModules_31;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Gmake_32;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Basis_34;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignBasis_36;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ParentBasis_38;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs_39;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MakeFileName_40;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignFileNames_46;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HighLevelCode_47;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_69_69;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_199_199;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_201_201;
#line 1079 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_203_203;
#line 1079 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_338_338;
#line 1175 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_125_125;

#line 1080 "write_deps_file.m"
    {
#line 1080 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependency variables for module \140");
    }
#line 1082 "write_deps_file.m"
    {
#line 1082 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
#line 1083 "write_deps_file.m"
    {
#line 1083 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
#line 1084 "write_deps_file.m"
    {
#line 1084 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1085 "write_deps_file.m"
    {
#line 1085 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
#line 1086 "write_deps_file.m"
    {
#line 1086 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
#line 1087 "write_deps_file.m"
    {
#line 1087 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1089 "write_deps_file.m"
    {
#line 1089 "write_deps_file.m"
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_15, &parse_tree__write_deps_file__Fullarch_16);
    }
#line 1090 "write_deps_file.m"
    {
#line 1090 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
#line 1092 "write_deps_file.m"
    {
#line 1092 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
#line 1093 "write_deps_file.m"
    {
#line 1093 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ",\n# configured for ");
    }
#line 1094 "write_deps_file.m"
    {
#line 1094 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_16);
    }
#line 1095 "write_deps_file.m"
    {
#line 1095 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
#line 9959 "parse_tree.write_deps_file.c"
    parse_tree__write_deps_file__TypeCtorInfo_485_485 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1097 "write_deps_file.m"
    {
#line 1097 "write_deps_file.m"
      mercury__map__keys_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_485_485, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules0_17);
    }
#line 1098 "write_deps_file.m"
    {
#line 1098 "write_deps_file.m"
      parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_17, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules1_18);
    }
#line 1099 "write_deps_file.m"
    {
#line 1099 "write_deps_file.m"
      mercury__list__sort_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_485_485, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[6], parse_tree__write_deps_file__Modules1_18, &parse_tree__write_deps_file__Modules_19);
    }
#line 1101 "write_deps_file.m"
    {
#line 1101 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1102 "write_deps_file.m"
    {
#line 1102 "write_deps_file.m"
      parse_tree__write_deps_file__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_69_69, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[3]));
#line 1102 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_69_69, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_2));
#line 1102 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1102 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_69_69, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
#line 1102 "write_deps_file.m"
    }
#line 9995 "parse_tree.write_deps_file.c"
    parse_tree__write_deps_file__TypeCtorInfo_492_492 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1102 "write_deps_file.m"
    {
#line 1102 "write_deps_file.m"
      mercury__list__map_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_485_485, parse_tree__write_deps_file__TypeCtorInfo_492_492, parse_tree__write_deps_file__V_69_69, parse_tree__write_deps_file__Modules_19, &parse_tree__write_deps_file__SourceFiles0_21);
    }
#line 1103 "write_deps_file.m"
    {
#line 1103 "write_deps_file.m"
      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_492_492, parse_tree__write_deps_file__SourceFiles0_21, &parse_tree__write_deps_file__SourceFiles_22);
    }
#line 1105 "write_deps_file.m"
    {
#line 1105 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1106 "write_deps_file.m"
    {
#line 1106 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ms =");
    }
#line 1107 "write_deps_file.m"
    {
#line 1107 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__SourceFiles_22, (MR_String) ".m", parse_tree__write_deps_file__DepStream_12);
    }
#line 1108 "write_deps_file.m"
    {
#line 1108 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1110 "write_deps_file.m"
    {
#line 1110 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1111 "write_deps_file.m"
    {
#line 1111 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".errs =");
    }
#line 1112 "write_deps_file.m"
    {
#line 1112 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__SourceFiles_22, (MR_String) ".err", parse_tree__write_deps_file__DepStream_12);
    }
#line 1113 "write_deps_file.m"
    {
#line 1113 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1115 "write_deps_file.m"
    {
#line 1115 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1116 "write_deps_file.m"
    {
#line 1116 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mods =");
    }
#line 1117 "write_deps_file.m"
    {
#line 1117 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1118 "write_deps_file.m"
    {
#line 1118 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1121 "write_deps_file.m"
    {
#line 1121 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[2]));
#line 1121 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_3));
#line 1121 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1121 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
#line 1121 "write_deps_file.m"
    }
#line 1121 "write_deps_file.m"
    {
#line 1121 "write_deps_file.m"
      parse_tree__write_deps_file__ModulesWithSubModules_23 = mercury__list__filter_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_485_485, parse_tree__write_deps_file__V_91_91, parse_tree__write_deps_file__Modules_19);
    }
#line 1126 "write_deps_file.m"
    {
#line 1126 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1127 "write_deps_file.m"
    {
#line 1127 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".parent_mods =");
    }
#line 1128 "write_deps_file.m"
    {
#line 1128 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModulesWithSubModules_23, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1130 "write_deps_file.m"
    {
#line 1130 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1132 "write_deps_file.m"
    {
#line 1132 "write_deps_file.m"
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_8, &parse_tree__write_deps_file__Target_29);
    }
#line 1136 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 1))
#line 1135 "write_deps_file.m"
      {
#line 1135 "write_deps_file.m"
        parse_tree__write_deps_file__ForeignModulesAndExts_30 = parse_tree__write_deps_file__foreign_modules_2_f_0(parse_tree__write_deps_file__Modules_19, parse_tree__write_deps_file__DepsMap_11);
      }
#line 1136 "write_deps_file.m"
    else
#line 1142 "write_deps_file.m"
      parse_tree__write_deps_file__ForeignModulesAndExts_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1144 "write_deps_file.m"
    {
#line 1144 "write_deps_file.m"
      parse_tree__write_deps_file__ForeignModules_31 = mercury__assoc_list__keys_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_485_485, parse_tree__write_deps_file__TypeCtorInfo_492_492, parse_tree__write_deps_file__ForeignModulesAndExts_30);
    }
#line 1145 "write_deps_file.m"
    {
#line 1145 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1146 "write_deps_file.m"
    {
#line 1146 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign =");
    }
#line 1147 "write_deps_file.m"
    {
#line 1147 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ForeignModules_31, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1148 "write_deps_file.m"
    {
#line 1148 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
    }
#line 1150 "write_deps_file.m"
    {
#line 1150 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 114, &parse_tree__write_deps_file__Gmake_32);
    }
#line 1161 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Gmake_32 == (MR_Integer) 0))
#line 1162 "write_deps_file.m"
      {
#line 1163 "write_deps_file.m"
        parse_tree__write_deps_file__Basis_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1164 "write_deps_file.m"
        parse_tree__write_deps_file__ForeignBasis_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1165 "write_deps_file.m"
        parse_tree__write_deps_file__ParentBasis_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1162 "write_deps_file.m"
      }
#line 1161 "write_deps_file.m"
    else
#line 1152 "write_deps_file.m"
      {
#line 1152 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModsVarName_33;
#line 1152 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignVarName_35;
#line 1152 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ParentModsVarName_37;
#line 1152 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_111_111;
#line 1152 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_114_114;
#line 1152 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_117_117;

#line 1153 "write_deps_file.m"
        {
#line 1153 "write_deps_file.m"
          mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".mods", &parse_tree__write_deps_file__ModsVarName_33);
        }
#line 1154 "write_deps_file.m"
        {
#line 1154 "write_deps_file.m"
          parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1154 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__ModsVarName_33));
#line 1154 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) ((MR_String) ""));
#line 1154 "write_deps_file.m"
        }
#line 1154 "write_deps_file.m"
        {
#line 1154 "write_deps_file.m"
          parse_tree__write_deps_file__Basis_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_34, 0) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 1154 "write_deps_file.m"
        }
#line 1156 "write_deps_file.m"
        {
#line 1156 "write_deps_file.m"
          mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".foreign", &parse_tree__write_deps_file__ForeignVarName_35);
        }
#line 1157 "write_deps_file.m"
        {
#line 1157 "write_deps_file.m"
          parse_tree__write_deps_file__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1157 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_114_114, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignVarName_35));
#line 1157 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_114_114, 1) = ((MR_Box) ((MR_String) ""));
#line 1157 "write_deps_file.m"
        }
#line 1157 "write_deps_file.m"
        {
#line 1157 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignBasis_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignBasis_36, 0) = ((MR_Box) (parse_tree__write_deps_file__V_114_114));
#line 1157 "write_deps_file.m"
        }
#line 1159 "write_deps_file.m"
        {
#line 1159 "write_deps_file.m"
          mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".parent_mods", &parse_tree__write_deps_file__ParentModsVarName_37);
        }
#line 1160 "write_deps_file.m"
        {
#line 1160 "write_deps_file.m"
          parse_tree__write_deps_file__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1160 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_117_117, 0) = ((MR_Box) (parse_tree__write_deps_file__ParentModsVarName_37));
#line 1160 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_117_117, 1) = ((MR_Box) ((MR_String) ""));
#line 1160 "write_deps_file.m"
        }
#line 1160 "write_deps_file.m"
        {
#line 1160 "write_deps_file.m"
          parse_tree__write_deps_file__ParentBasis_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ParentBasis_38, 0) = ((MR_Box) (parse_tree__write_deps_file__V_117_117));
#line 1160 "write_deps_file.m"
        }
#line 1152 "write_deps_file.m"
      }
#line 1168 "write_deps_file.m"
    {
#line 1168 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(parse_tree__write_deps_file__Modules_19, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__ExtraLinkObjs_39);
    }
#line 1170 "write_deps_file.m"
    {
#line 1170 "write_deps_file.m"
      parse_tree__write_deps_file__MakeFileName_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1170 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[1]));
#line 1170 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_4));
#line 1170 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1170 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_8));
#line 1170 "write_deps_file.m"
    }
#line 1175 "write_deps_file.m"
    {
#line 1175 "write_deps_file.m"
      mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[0], parse_tree__write_deps_file__TypeCtorInfo_492_492, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__MakeFileName_40, parse_tree__write_deps_file__ForeignModulesAndExts_30, &parse_tree__write_deps_file__ForeignFileNames_46, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_125_125);
    }
#line 1179 "write_deps_file.m"
    {
#line 1179 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1180 "write_deps_file.m"
    {
#line 1180 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_cs = ");
    }
#line 1181 "write_deps_file.m"
    {
#line 1181 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__ForeignFileNames_46, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1182 "write_deps_file.m"
    {
#line 1182 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1185 "write_deps_file.m"
    {
#line 1185 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1186 "write_deps_file.m"
    {
#line 1186 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_dlls = ");
    }
#line 1187 "write_deps_file.m"
    {
#line 1187 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ForeignModules_31, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__ForeignBasis_36, parse_tree__write_deps_file__DepStream_12);
    }
#line 1189 "write_deps_file.m"
    {
#line 1189 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1191 "write_deps_file.m"
    {
#line 1191 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1192 "write_deps_file.m"
    {
#line 1192 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs = ");
    }
#line 1193 "write_deps_file.m"
    {
#line 1193 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(cs_subdir)", (MR_String) ".c", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1195 "write_deps_file.m"
    {
#line 1195 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1197 "write_deps_file.m"
    {
#line 1197 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1198 "write_deps_file.m"
    {
#line 1198 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".cs = \044(");
    }
#line 1199 "write_deps_file.m"
    {
#line 1199 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1200 "write_deps_file.m"
    {
#line 1200 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs) ");
    }
#line 1201 "write_deps_file.m"
    {
#line 1201 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ExtraLinkObjs_39, (MR_String) ".c", parse_tree__write_deps_file__DepStream_12);
    }
#line 1203 "write_deps_file.m"
    {
#line 1203 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1205 "write_deps_file.m"
    {
#line 1205 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1206 "write_deps_file.m"
    {
#line 1206 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dlls = ");
    }
#line 1207 "write_deps_file.m"
    {
#line 1207 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1209 "write_deps_file.m"
    {
#line 1209 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1211 "write_deps_file.m"
    {
#line 1211 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1212 "write_deps_file.m"
    {
#line 1212 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os = ");
    }
#line 1213 "write_deps_file.m"
    {
#line 1213 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(os_subdir)", (MR_String) ".\044O", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1215 "write_deps_file.m"
    {
#line 1215 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ExtraLinkObjs_39, (MR_String) ".\044O", parse_tree__write_deps_file__DepStream_12);
    }
#line 1217 "write_deps_file.m"
    {
#line 1217 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1219 "write_deps_file.m"
    {
#line 1219 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1220 "write_deps_file.m"
    {
#line 1220 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os = ");
    }
#line 1221 "write_deps_file.m"
    {
#line 1221 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(os_subdir)", (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1223 "write_deps_file.m"
    {
#line 1223 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ExtraLinkObjs_39, (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__DepStream_12);
    }
#line 1225 "write_deps_file.m"
    {
#line 1225 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1227 "write_deps_file.m"
    {
#line 1227 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1228 "write_deps_file.m"
    {
#line 1228 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".os = \044(");
    }
#line 1229 "write_deps_file.m"
    {
#line 1229 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1230 "write_deps_file.m"
    {
#line 1230 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os)\n");
    }
#line 1232 "write_deps_file.m"
    {
#line 1232 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1233 "write_deps_file.m"
    {
#line 1233 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".pic_os = \044(");
    }
#line 1234 "write_deps_file.m"
    {
#line 1234 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1235 "write_deps_file.m"
    {
#line 1235 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os)\n");
    }
#line 1246 "write_deps_file.m"
    {
#line 1246 "write_deps_file.m"
      parse_tree__write_deps_file__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 1246 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[108])));
#line 1246 "write_deps_file.m"
    }
#line 1246 "write_deps_file.m"
    {
#line 1246 "write_deps_file.m"
      parse_tree__write_deps_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 0) = ((MR_Box) ((MR_String) ".cs_or_ss =\044("));
#line 1246 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 1) = ((MR_Box) (parse_tree__write_deps_file__V_203_203));
#line 1246 "write_deps_file.m"
    }
#line 1246 "write_deps_file.m"
    {
#line 1246 "write_deps_file.m"
      parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 1246 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__V_201_201));
#line 1246 "write_deps_file.m"
    }
#line 1245 "write_deps_file.m"
    {
#line 1245 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_199_199);
    }
#line 1249 "write_deps_file.m"
    {
#line 1249 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1250 "write_deps_file.m"
    {
#line 1250 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".useds = ");
    }
#line 1251 "write_deps_file.m"
    {
#line 1251 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(useds_subdir)", (MR_String) ".used", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1253 "write_deps_file.m"
    {
#line 1253 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1255 "write_deps_file.m"
    {
#line 1255 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1256 "write_deps_file.m"
    {
#line 1256 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ils = ");
    }
#line 1257 "write_deps_file.m"
    {
#line 1257 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(ils_subdir)", (MR_String) ".il", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1259 "write_deps_file.m"
    {
#line 1259 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1261 "write_deps_file.m"
    {
#line 1261 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1262 "write_deps_file.m"
    {
#line 1262 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".javas = ");
    }
#line 1263 "write_deps_file.m"
    {
#line 1263 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(javas_subdir)", (MR_String) ".java", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1265 "write_deps_file.m"
    {
#line 1265 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1267 "write_deps_file.m"
    {
#line 1267 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1268 "write_deps_file.m"
    {
#line 1268 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".classes = ");
    }
#line 1269 "write_deps_file.m"
    {
#line 1269 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(classes_subdir)", (MR_String) ".class", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1271 "write_deps_file.m"
    {
#line 1271 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) " ");
    }
#line 1279 "write_deps_file.m"
    {
#line 1279 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(wildcard ");
    }
#line 1280 "write_deps_file.m"
    {
#line 1280 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(classes_subdir)", (MR_String) "\\\044\044*.class", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1282 "write_deps_file.m"
    {
#line 1282 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ")\n");
    }
#line 1284 "write_deps_file.m"
    {
#line 1284 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1285 "write_deps_file.m"
    {
#line 1285 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dirs = ");
    }
#line 1286 "write_deps_file.m"
    {
#line 1286 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1288 "write_deps_file.m"
    {
#line 1288 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1290 "write_deps_file.m"
    {
#line 1290 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1291 "write_deps_file.m"
    {
#line 1291 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dir_os = ");
    }
#line 1292 "write_deps_file.m"
    {
#line 1292 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir/*.\044O", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1294 "write_deps_file.m"
    {
#line 1294 "write_deps_file.m"
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dates = ");
    }
#line 1298 "write_deps_file.m"
    {
#line 1298 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(dates_subdir)", (MR_String) ".date", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date0s = ");
    }
#line 1304 "write_deps_file.m"
    {
#line 1304 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(date0s_subdir)", (MR_String) ".date0", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date3s = ");
    }
#line 1310 "write_deps_file.m"
    {
#line 1310 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(date3s_subdir)", (MR_String) ".date3", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1312 "write_deps_file.m"
    {
#line 1312 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1314 "write_deps_file.m"
    {
#line 1314 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1315 "write_deps_file.m"
    {
#line 1315 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".optdates = ");
    }
#line 1316 "write_deps_file.m"
    {
#line 1316 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(optdates_subdir)", (MR_String) ".optdate", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1318 "write_deps_file.m"
    {
#line 1318 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1320 "write_deps_file.m"
    {
#line 1320 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1321 "write_deps_file.m"
    {
#line 1321 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opt_dates = ");
    }
#line 1322 "write_deps_file.m"
    {
#line 1322 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(trans_opt_dates_subdir)", (MR_String) ".trans_opt_date", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1324 "write_deps_file.m"
    {
#line 1324 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1326 "write_deps_file.m"
    {
#line 1326 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1327 "write_deps_file.m"
    {
#line 1327 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".c_dates = ");
    }
#line 1328 "write_deps_file.m"
    {
#line 1328 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(c_dates_subdir)", (MR_String) ".c_date", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1330 "write_deps_file.m"
    {
#line 1330 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1332 "write_deps_file.m"
    {
#line 1332 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1333 "write_deps_file.m"
    {
#line 1333 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".il_dates = ");
    }
#line 1334 "write_deps_file.m"
    {
#line 1334 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(il_dates_subdir)", (MR_String) ".il_date", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".java_dates = ");
    }
#line 1340 "write_deps_file.m"
    {
#line 1340 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(java_dates_subdir)", (MR_String) ".java_date", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1342 "write_deps_file.m"
    {
#line 1342 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1344 "write_deps_file.m"
    {
#line 1344 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1345 "write_deps_file.m"
    {
#line 1345 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ds = ");
    }
#line 1346 "write_deps_file.m"
    {
#line 1346 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(ds_subdir)", (MR_String) ".d", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1348 "write_deps_file.m"
    {
#line 1348 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1350 "write_deps_file.m"
    {
#line 1350 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1351 "write_deps_file.m"
    {
#line 1351 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".module_deps = ");
    }
#line 1353 "write_deps_file.m"
    {
#line 1353 "write_deps_file.m"
      parse_tree__write_deps_file__V_338_338 = make__make_module_dep_file_extension_0_f_0();
    }
#line 1352 "write_deps_file.m"
    {
#line 1352 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(module_deps_subdir)", parse_tree__write_deps_file__V_338_338, parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1355 "write_deps_file.m"
    {
#line 1355 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1357 "write_deps_file.m"
    {
#line 1357 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1358 "write_deps_file.m"
    {
#line 1358 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mihs = ");
    }
#line 1359 "write_deps_file.m"
    {
#line 1359 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 248, &parse_tree__write_deps_file__HighLevelCode_47);
    }
#line 1377 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HighLevelCode_47 == (MR_Integer) 0))
#line 1379 "write_deps_file.m"
      {
#line 1379 "write_deps_file.m"
      }
#line 1377 "write_deps_file.m"
    else
#line 1368 "write_deps_file.m"
      if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 0))
#line 1363 "write_deps_file.m"
        {
#line 1366 "write_deps_file.m"
          {
#line 1366 "write_deps_file.m"
            parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
          }
#line 1363 "write_deps_file.m"
        }
#line 1368 "write_deps_file.m"
      else
#line 1368 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 2))
#line 1372 "write_deps_file.m"
          {
#line 1372 "write_deps_file.m"
          }
#line 1368 "write_deps_file.m"
        else
#line 1368 "write_deps_file.m"
          if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 4))
#line 1374 "write_deps_file.m"
            {
#line 1374 "write_deps_file.m"
            }
#line 1368 "write_deps_file.m"
          else
#line 1368 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 1))
#line 1371 "write_deps_file.m"
              {
#line 1371 "write_deps_file.m"
              }
#line 1368 "write_deps_file.m"
            else
#line 1373 "write_deps_file.m"
              {
#line 1373 "write_deps_file.m"
              }
#line 1381 "write_deps_file.m"
    {
#line 1381 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1383 "write_deps_file.m"
    {
#line 1383 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1384 "write_deps_file.m"
    {
#line 1384 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mhs = ");
    }
#line 1389 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 0))
#line 1386 "write_deps_file.m"
      {
#line 1387 "write_deps_file.m"
        {
#line 1387 "write_deps_file.m"
          parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
        }
#line 1386 "write_deps_file.m"
      }
#line 1389 "write_deps_file.m"
    else
#line 1389 "write_deps_file.m"
      if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 2))
#line 1391 "write_deps_file.m"
        {
#line 1391 "write_deps_file.m"
        }
#line 1389 "write_deps_file.m"
      else
#line 1389 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 4))
#line 1393 "write_deps_file.m"
          {
#line 1393 "write_deps_file.m"
          }
#line 1389 "write_deps_file.m"
        else
#line 1389 "write_deps_file.m"
          if ((parse_tree__write_deps_file__Target_29 == (MR_Integer) 1))
#line 1390 "write_deps_file.m"
            {
#line 1390 "write_deps_file.m"
            }
#line 1389 "write_deps_file.m"
          else
#line 1392 "write_deps_file.m"
            {
#line 1392 "write_deps_file.m"
            }
#line 1396 "write_deps_file.m"
    {
#line 1396 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1404 "write_deps_file.m"
    {
#line 1404 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1405 "write_deps_file.m"
    {
#line 1405 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mihs = ");
    }
#line 1406 "write_deps_file.m"
    {
#line 1406 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1408 "write_deps_file.m"
    {
#line 1408 "write_deps_file.m"
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mhs = ");
    }
#line 1415 "write_deps_file.m"
    {
#line 1415 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ints = ");
    }
#line 1421 "write_deps_file.m"
    {
#line 1421 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(ints_subdir)", (MR_String) ".int", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1423 "write_deps_file.m"
    {
#line 1423 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1424 "write_deps_file.m"
    {
#line 1424 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(int2s_subdir)", (MR_String) ".int2", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1426 "write_deps_file.m"
    {
#line 1426 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1433 "write_deps_file.m"
    {
#line 1433 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1434 "write_deps_file.m"
    {
#line 1434 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int0s = ");
    }
#line 1435 "write_deps_file.m"
    {
#line 1435 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModulesWithSubModules_23, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__ParentBasis_38, parse_tree__write_deps_file__DepStream_12);
    }
#line 1437 "write_deps_file.m"
    {
#line 1437 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1446 "write_deps_file.m"
    {
#line 1446 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1447 "write_deps_file.m"
    {
#line 1447 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_int0s = ");
    }
#line 1448 "write_deps_file.m"
    {
#line 1448 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1450 "write_deps_file.m"
    {
#line 1450 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1452 "write_deps_file.m"
    {
#line 1452 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1453 "write_deps_file.m"
    {
#line 1453 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int3s = ");
    }
#line 1454 "write_deps_file.m"
    {
#line 1454 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(int3s_subdir)", (MR_String) ".int3", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1456 "write_deps_file.m"
    {
#line 1456 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1458 "write_deps_file.m"
    {
#line 1458 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1459 "write_deps_file.m"
    {
#line 1459 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".opts = ");
    }
#line 1460 "write_deps_file.m"
    {
#line 1460 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(opts_subdir)", (MR_String) ".opt", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1462 "write_deps_file.m"
    {
#line 1462 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1464 "write_deps_file.m"
    {
#line 1464 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1465 "write_deps_file.m"
    {
#line 1465 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opts = ");
    }
#line 1466 "write_deps_file.m"
    {
#line 1466 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(trans_opts_subdir)", (MR_String) ".trans_opt", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1468 "write_deps_file.m"
    {
#line 1468 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1470 "write_deps_file.m"
    {
#line 1470 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1471 "write_deps_file.m"
    {
#line 1471 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".analysiss = ");
    }
#line 1472 "write_deps_file.m"
    {
#line 1472 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(analysiss_subdir)", (MR_String) ".analysis", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1474 "write_deps_file.m"
    {
#line 1474 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1476 "write_deps_file.m"
    {
#line 1476 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1477 "write_deps_file.m"
    {
#line 1477 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".requests = ");
    }
#line 1478 "write_deps_file.m"
    {
#line 1478 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(requests_subdir)", (MR_String) ".request", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1480 "write_deps_file.m"
    {
#line 1480 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1482 "write_deps_file.m"
    {
#line 1482 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1483 "write_deps_file.m"
    {
#line 1483 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".imdgs = ");
    }
#line 1484 "write_deps_file.m"
    {
#line 1484 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(imdgs_subdir)", (MR_String) ".imdg", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1486 "write_deps_file.m"
    {
#line 1486 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1488 "write_deps_file.m"
    {
#line 1488 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1489 "write_deps_file.m"
    {
#line 1489 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".profs = ");
    }
#line 1490 "write_deps_file.m"
    {
#line 1490 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "", (MR_String) ".prof", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1492 "write_deps_file.m"
    {
#line 1492 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
#line 1492 "write_deps_file.m"
      return;
    }
#line 1079 "write_deps_file.m"
  }
#line 1075 "write_deps_file.m"
}

#line 1003 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
#line 1003 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 1003 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 1003 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 1003 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Ext_10)
#line 1003 "write_deps_file.m"
{
#line 1006 "write_deps_file.m"
  {
#line 1006 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1006 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleStr_12;
#line 1006 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Target_13;
#line 1006 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ShorthandTarget_14;

#line 1007 "write_deps_file.m"
    {
#line 1007 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__ModuleName_9, &parse_tree__write_deps_file__ModuleStr_12);
    }
#line 1008 "write_deps_file.m"
    {
#line 1008 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__Ext_10, (MR_Integer) 1, &parse_tree__write_deps_file__Target_13);
    }
#line 1010 "write_deps_file.m"
    {
#line 1010 "write_deps_file.m"
      parse_tree__write_deps_file__ShorthandTarget_14 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleStr_12, parse_tree__write_deps_file__Ext_10);
    }
#line 1011 "write_deps_file.m"
    {
#line 1011 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ".PHONY: ");
    }
#line 1012 "write_deps_file.m"
    {
#line 1012 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
#line 1013 "write_deps_file.m"
    {
#line 1013 "write_deps_file.m"
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
    }
#line 1014 "write_deps_file.m"
    {
#line 1014 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
#line 1015 "write_deps_file.m"
    {
#line 1015 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ": ");
    }
#line 1016 "write_deps_file.m"
    {
#line 1016 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Target_13);
    }
#line 1017 "write_deps_file.m"
    {
#line 1017 "write_deps_file.m"
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
#line 1017 "write_deps_file.m"
      return;
    }
#line 1006 "write_deps_file.m"
  }
#line 1003 "write_deps_file.m"
}

#line 979 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0_1(
#line 979 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 979 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 979 "write_deps_file.m"
{
#line 979 "write_deps_file.m"
  {
#line 979 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 979 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 979 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__3_64;

#line 979 "write_deps_file.m"
    {
#line 979 "write_deps_file.m"
      parse_tree__write_deps_file__conv0_HeadVar__3_64 = parse_tree__write_deps_file__IntroducedFrom__func__write_foreign_dependency_for_il__980__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 979 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__3_64));
#line 979 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 979 "write_deps_file.m"
  }
#line 979 "write_deps_file.m"
}

#line 935 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0(
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__AllDeps_12,
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImports_13,
#line 935 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignLang_14)
#line 935 "write_deps_file.m"
{
#line 994 "write_deps_file.m"
  {
#line 994 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModuleName_16;
#line 994 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ForeignExt_17;

#line 942 "write_deps_file.m"
    {
#line 942 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(parse_tree__write_deps_file__ModuleName_11, parse_tree__write_deps_file__ForeignLang_14, &parse_tree__write_deps_file__ForeignModuleName_16);
    }
#line 943 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 944 "write_deps_file.m"
      {
#line 944 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(parse_tree__write_deps_file__ForeignLang_14, &parse_tree__write_deps_file__ForeignExt_17);
      }
#line 994 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 947 "write_deps_file.m"
      {
#line 947 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignModuleNameString_18;
#line 947 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignFileName_19;
#line 947 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IlFileName_20;
#line 947 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DllFileName_21;
#line 947 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignDllFileName_22;
#line 947 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_40_40;
#line 947 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_42_42;
#line 947 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_44_44;
#line 947 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_47_47;
#line 947 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_49_49;
#line 947 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_51_51;

#line 946 "write_deps_file.m"
        {
#line 946 "write_deps_file.m"
          parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ForeignModuleName_16, &parse_tree__write_deps_file__ForeignModuleNameString_18);
        }
#line 948 "write_deps_file.m"
        {
#line 948 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ForeignModuleName_16, parse_tree__write_deps_file__ForeignExt_17, (MR_Integer) 1, &parse_tree__write_deps_file__ForeignFileName_19);
        }
#line 950 "write_deps_file.m"
        {
#line 950 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ModuleName_11, (MR_String) ".il", (MR_Integer) 1, &parse_tree__write_deps_file__IlFileName_20);
        }
#line 952 "write_deps_file.m"
        {
#line 952 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ModuleName_11, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__DllFileName_21);
        }
#line 954 "write_deps_file.m"
        {
#line 954 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ForeignModuleName_16, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__ForeignDllFileName_22);
        }
#line 958 "write_deps_file.m"
        {
#line 958 "write_deps_file.m"
          parse_tree__write_deps_file__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_44_44, 0) = ((MR_Box) (parse_tree__write_deps_file__DllFileName_21));
#line 958 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 958 "write_deps_file.m"
        }
#line 958 "write_deps_file.m"
        {
#line 958 "write_deps_file.m"
          parse_tree__write_deps_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 0) = ((MR_Box) ((MR_String) " : "));
#line 958 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 1) = ((MR_Box) (parse_tree__write_deps_file__V_44_44));
#line 958 "write_deps_file.m"
        }
#line 958 "write_deps_file.m"
        {
#line 958 "write_deps_file.m"
          parse_tree__write_deps_file__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_40_40, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignDllFileName_22));
#line 958 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_40_40, 1) = ((MR_Box) (parse_tree__write_deps_file__V_42_42));
#line 958 "write_deps_file.m"
        }
#line 957 "write_deps_file.m"
        {
#line 957 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__V_40_40);
        }
#line 962 "write_deps_file.m"
        {
#line 962 "write_deps_file.m"
          mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_10);
        }
#line 965 "write_deps_file.m"
        {
#line 965 "write_deps_file.m"
          parse_tree__write_deps_file__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 0) = ((MR_Box) (parse_tree__write_deps_file__IlFileName_20));
#line 965 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])));
#line 965 "write_deps_file.m"
        }
#line 965 "write_deps_file.m"
        {
#line 965 "write_deps_file.m"
          parse_tree__write_deps_file__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 0) = ((MR_Box) ((MR_String) " : "));
#line 965 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 1) = ((MR_Box) (parse_tree__write_deps_file__V_51_51));
#line 965 "write_deps_file.m"
        }
#line 965 "write_deps_file.m"
        {
#line 965 "write_deps_file.m"
          parse_tree__write_deps_file__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignFileName_19));
#line 965 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 1) = ((MR_Box) (parse_tree__write_deps_file__V_49_49));
#line 965 "write_deps_file.m"
        }
#line 964 "write_deps_file.m"
        {
#line 964 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__V_47_47);
        }
#line 987 "write_deps_file.m"
        if ((parse_tree__write_deps_file__ForeignLang_14 == (MR_Integer) 0))
#line 988 "write_deps_file.m"
          {
#line 988 "write_deps_file.m"
          }
#line 987 "write_deps_file.m"
        else
#line 987 "write_deps_file.m"
          if ((parse_tree__write_deps_file__ForeignLang_14 == (MR_Integer) 1))
#line 968 "write_deps_file.m"
            {
#line 968 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__TypeCtorInfo_70_70;
#line 968 "write_deps_file.m"
              MR_String parse_tree__write_deps_file__Prefix_23;
#line 968 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__ForeignDeps_24;
#line 968 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__Deps_26;
#line 968 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_55_55;
#line 968 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_58_58;
#line 968 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_62_62;
#line 968 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_65_65;

#line 973 "write_deps_file.m"
              {
#line 973 "write_deps_file.m"
                parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignModuleNameString_18));
#line 973 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107])));
#line 973 "write_deps_file.m"
              }
#line 973 "write_deps_file.m"
              {
#line 973 "write_deps_file.m"
                parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "CSHARP_ASSEMBLY_REFS-"));
#line 973 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 973 "write_deps_file.m"
              }
#line 972 "write_deps_file.m"
              {
#line 972 "write_deps_file.m"
                mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__V_55_55);
              }
#line 974 "write_deps_file.m"
              {
#line 974 "write_deps_file.m"
                parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__ModuleName_11);
              }
#line 976 "write_deps_file.m"
              if (parse_tree__write_deps_file__succeeded)
#line 975 "write_deps_file.m"
                parse_tree__write_deps_file__Prefix_23 = (MR_String) "/addmodule:";
#line 976 "write_deps_file.m"
              else
#line 977 "write_deps_file.m"
                parse_tree__write_deps_file__Prefix_23 = (MR_String) "/r:";
#line 11578 "parse_tree.write_deps_file.c"
              parse_tree__write_deps_file__TypeCtorInfo_70_70 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 979 "write_deps_file.m"
              {
#line 979 "write_deps_file.m"
                parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 979 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
#line 979 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0_1));
#line 979 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 979 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_11));
#line 979 "write_deps_file.m"
              }
#line 979 "write_deps_file.m"
              {
#line 979 "write_deps_file.m"
                parse_tree__write_deps_file__ForeignDeps_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__TypeCtorInfo_70_70, parse_tree__write_deps_file__V_62_62, parse_tree__write_deps_file__ForeignImports_13);
              }
#line 983 "write_deps_file.m"
              {
#line 983 "write_deps_file.m"
                parse_tree__write_deps_file__Deps_26 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_70_70, parse_tree__write_deps_file__AllDeps_12, parse_tree__write_deps_file__ForeignDeps_24);
              }
#line 985 "write_deps_file.m"
              {
#line 985 "write_deps_file.m"
                parse_tree__write_deps_file__V_65_65 = parse_tree__write_deps_file__referenced_dlls_2_f_0(parse_tree__write_deps_file__ModuleName_11, parse_tree__write_deps_file__Deps_26);
              }
#line 984 "write_deps_file.m"
              {
#line 984 "write_deps_file.m"
                parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__V_65_65, parse_tree__write_deps_file__Prefix_23, parse_tree__write_deps_file__DepStream_10);
              }
#line 986 "write_deps_file.m"
              {
#line 986 "write_deps_file.m"
                mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_10);
#line 986 "write_deps_file.m"
                return;
              }
#line 968 "write_deps_file.m"
            }
#line 987 "write_deps_file.m"
          else
#line 987 "write_deps_file.m"
            if ((parse_tree__write_deps_file__ForeignLang_14 == (MR_Integer) 4))
#line 991 "write_deps_file.m"
              {
#line 991 "write_deps_file.m"
              }
#line 987 "write_deps_file.m"
            else
#line 987 "write_deps_file.m"
              if ((parse_tree__write_deps_file__ForeignLang_14 == (MR_Integer) 3))
#line 990 "write_deps_file.m"
                {
#line 990 "write_deps_file.m"
                }
#line 987 "write_deps_file.m"
              else
#line 989 "write_deps_file.m"
                {
#line 989 "write_deps_file.m"
                }
#line 947 "write_deps_file.m"
      }
#line 994 "write_deps_file.m"
    else
#line 991 "write_deps_file.m"
      {
#line 991 "write_deps_file.m"
      }
#line 994 "write_deps_file.m"
  }
#line 935 "write_deps_file.m"
}

#line 909 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
#line 909 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 909 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_2,
#line 909 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_3)
#line 909 "write_deps_file.m"
{
#line 912 "write_deps_file.m"
  while (MR_TRUE)
#line 912 "write_deps_file.m"
    {
#line 912 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 912 "write_deps_file.m"
      {
#line 912 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 912 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 912 "write_deps_file.m"
          {
#line 912 "write_deps_file.m"
          }
#line 912 "write_deps_file.m"
        else
#line 913 "write_deps_file.m"
          {
#line 913 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 913 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FileNames_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));

#line 914 "write_deps_file.m"
            {
#line 914 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_3, (MR_String) " \\\n\t");
            }
#line 915 "write_deps_file.m"
            {
#line 915 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_3, parse_tree__write_deps_file__FileName_11);
            }
#line 916 "write_deps_file.m"
            {
#line 916 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_3, parse_tree__write_deps_file__Suffix_2);
            }
#line 917 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 917 "write_deps_file.m"
            {
#line 917 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__1__tmp_copy_1 = parse_tree__write_deps_file__FileNames_12;

#line 917 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__1_1 = parse_tree__write_deps_file__HeadVar__1__tmp_copy_1;
#line 917 "write_deps_file.m"
            }
#line 917 "write_deps_file.m"
            continue;
#line 913 "write_deps_file.m"
          }
#line 912 "write_deps_file.m"
      }
#line 912 "write_deps_file.m"
      break;
#line 912 "write_deps_file.m"
    }
#line 909 "write_deps_file.m"
}

#line 895 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
#line 895 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 895 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 895 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 895 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4)
#line 895 "write_deps_file.m"
{
#line 899 "write_deps_file.m"
  while (MR_TRUE)
#line 899 "write_deps_file.m"
    {
#line 899 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 899 "write_deps_file.m"
      {
#line 899 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 899 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 899 "write_deps_file.m"
          {
#line 899 "write_deps_file.m"
          }
#line 899 "write_deps_file.m"
        else
#line 901 "write_deps_file.m"
          {
#line 901 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ExtraLink_14;
#line 901 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_15;
#line 901 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ExtraLinks_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 901 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_20;
#line 901 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));

#line 900 "write_deps_file.m"
            parse_tree__write_deps_file__ExtraLink_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_23_23, (MR_Integer) 0)));
#line 900 "write_deps_file.m"
            parse_tree__write_deps_file__Module_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_23_23, (MR_Integer) 1)));
#line 902 "write_deps_file.m"
            {
#line 902 "write_deps_file.m"
              parse_tree__file_names__extra_link_obj_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_15, parse_tree__write_deps_file__ExtraLink_14, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_20);
            }
#line 904 "write_deps_file.m"
            {
#line 904 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, (MR_String) " \\\n\t");
            }
#line 905 "write_deps_file.m"
            {
#line 905 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, parse_tree__write_deps_file__FileName_20);
            }
#line 906 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 906 "write_deps_file.m"
            {
#line 906 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__ExtraLinks_16;

#line 906 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 906 "write_deps_file.m"
            }
#line 906 "write_deps_file.m"
            continue;
#line 901 "write_deps_file.m"
          }
#line 899 "write_deps_file.m"
      }
#line 899 "write_deps_file.m"
      break;
#line 899 "write_deps_file.m"
    }
#line 895 "write_deps_file.m"
}

#line 881 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
#line 881 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 881 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_2,
#line 881 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 881 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_4,
#line 881 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_5)
#line 881 "write_deps_file.m"
{
#line 885 "write_deps_file.m"
  while (MR_TRUE)
#line 885 "write_deps_file.m"
    {
#line 885 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 885 "write_deps_file.m"
      {
#line 885 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 885 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 885 "write_deps_file.m"
          {
#line 885 "write_deps_file.m"
          }
#line 885 "write_deps_file.m"
        else
#line 887 "write_deps_file.m"
          {
#line 887 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FactTable_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
#line 887 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FactTables_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));
#line 887 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_22;

#line 888 "write_deps_file.m"
            {
#line 888 "write_deps_file.m"
              parse_tree__file_names__fact_table_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_2, parse_tree__write_deps_file__FactTable_17, parse_tree__write_deps_file__Suffix_4, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_22);
            }
#line 890 "write_deps_file.m"
            {
#line 890 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_5, (MR_String) " \\\n\t");
            }
#line 891 "write_deps_file.m"
            {
#line 891 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_5, parse_tree__write_deps_file__FileName_22);
            }
#line 892 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 892 "write_deps_file.m"
            {
#line 892 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__3__tmp_copy_3 = parse_tree__write_deps_file__FactTables_18;

#line 892 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__HeadVar__3__tmp_copy_3;
#line 892 "write_deps_file.m"
            }
#line 892 "write_deps_file.m"
            continue;
#line 887 "write_deps_file.m"
          }
#line 885 "write_deps_file.m"
      }
#line 885 "write_deps_file.m"
      break;
#line 885 "write_deps_file.m"
    }
#line 881 "write_deps_file.m"
}

#line 871 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(
#line 871 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 871 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 871 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFile_8)
#line 871 "write_deps_file.m"
{
#line 875 "write_deps_file.m"
  {
#line 875 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 875 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__IncludeFileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_8, (MR_Integer) 1)));
#line 875 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__IncludePath_12;
#line 876 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_8, (MR_Integer) 0)));

#line 877 "write_deps_file.m"
    {
#line 877 "write_deps_file.m"
      parse_tree__file_names__make_include_file_path_3_p_0(parse_tree__write_deps_file__SourceFileName_7, parse_tree__write_deps_file__IncludeFileName_11, &parse_tree__write_deps_file__IncludePath_12);
    }
#line 878 "write_deps_file.m"
    {
#line 878 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_6, (MR_String) " \\\n\t");
    }
#line 879 "write_deps_file.m"
    {
#line 879 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_6, parse_tree__write_deps_file__IncludePath_12);
#line 879 "write_deps_file.m"
      return;
    }
#line 875 "write_deps_file.m"
  }
#line 871 "write_deps_file.m"
}

#line 868 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1(
#line 868 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 868 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 868 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 868 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 868 "write_deps_file.m"
{
#line 868 "write_deps_file.m"
  {
#line 868 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 868 "write_deps_file.m"
    {
#line 868 "write_deps_file.m"
      parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 868 "write_deps_file.m"
      return;
    }
#line 868 "write_deps_file.m"
  }
#line 868 "write_deps_file.m"
}

#line 862 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 862 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFiles_8)
#line 862 "write_deps_file.m"
{
#line 866 "write_deps_file.m"
  {
#line 866 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 866 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_12_12;
#line 867 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_11;

#line 868 "write_deps_file.m"
    {
#line 868 "write_deps_file.m"
      parse_tree__write_deps_file__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 868 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[0]));
#line 868 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 1) = ((MR_Box) (parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1));
#line 868 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 868 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 3) = ((MR_Box) (parse_tree__write_deps_file__DepStream_6));
#line 868 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 4) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_7));
#line 868 "write_deps_file.m"
    }
#line 867 "write_deps_file.m"
    {
#line 867 "write_deps_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_12_12, parse_tree__write_deps_file__IncludeFiles_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_11);
    }
#line 866 "write_deps_file.m"
  }
#line 862 "write_deps_file.m"
}

#line 843 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(
#line 843 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 843 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 843 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__3_3,
#line 843 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4)
#line 843 "write_deps_file.m"
{
#line 846 "write_deps_file.m"
  while (MR_TRUE)
#line 846 "write_deps_file.m"
    {
#line 846 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 846 "write_deps_file.m"
      {
#line 846 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 846 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 846 "write_deps_file.m"
          {
#line 846 "write_deps_file.m"
          }
#line 846 "write_deps_file.m"
        else
#line 848 "write_deps_file.m"
          {
#line 848 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));
#line 848 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 848 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_30;

#line 856 "write_deps_file.m"
            {
#line 856 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__Module_14, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__FileName_30);
            }
#line 858 "write_deps_file.m"
            {
#line 858 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__4_4, (MR_String) " \\\n\t");
            }
#line 859 "write_deps_file.m"
            {
#line 859 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__HeadVar__3_3);
            }
#line 860 "write_deps_file.m"
            {
#line 860 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__FileName_30);
            }
#line 850 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 850 "write_deps_file.m"
            {
#line 850 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__Modules_15;

#line 850 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 850 "write_deps_file.m"
            }
#line 850 "write_deps_file.m"
            continue;
#line 848 "write_deps_file.m"
          }
#line 846 "write_deps_file.m"
      }
#line 846 "write_deps_file.m"
      break;
#line 846 "write_deps_file.m"
    }
#line 843 "write_deps_file.m"
}

#line 836 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
#line 836 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 836 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2)
#line 836 "write_deps_file.m"
{
#line 839 "write_deps_file.m"
  {
#line 839 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 839 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 839 "write_deps_file.m"
      {
#line 839 "write_deps_file.m"
      }
#line 839 "write_deps_file.m"
    else
#line 840 "write_deps_file.m"
      {
#line 841 "write_deps_file.m"
        {
#line 841 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__2_2, (MR_String) " ");
#line 841 "write_deps_file.m"
          return;
        }
#line 840 "write_deps_file.m"
      }
#line 839 "write_deps_file.m"
  }
#line 836 "write_deps_file.m"
}

#line 814 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
#line 814 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 814 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_10,
#line 814 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Prefix_11,
#line 814 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_12,
#line 814 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Basis_13,
#line 814 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_14)
#line 814 "write_deps_file.m"
{
#line 821 "write_deps_file.m"
  {
#line 821 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 821 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Basis_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "write_deps_file.m"
      {
#line 833 "write_deps_file.m"
        parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__Modules_10, parse_tree__write_deps_file__Suffix_12, parse_tree__write_deps_file__DepStream_14);
#line 833 "write_deps_file.m"
        return;
      }
#line 821 "write_deps_file.m"
    else
#line 821 "write_deps_file.m"
      {
#line 821 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__VarName_16;
#line 821 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OldSuffix_17;
#line 821 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_13, (MR_Integer) 0)));

#line 821 "write_deps_file.m"
        parse_tree__write_deps_file__VarName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_21_21, (MR_Integer) 0)));
#line 821 "write_deps_file.m"
        parse_tree__write_deps_file__OldSuffix_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_21_21, (MR_Integer) 1)));
#line 822 "write_deps_file.m"
        {
#line 822 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) "\044(");
        }
#line 823 "write_deps_file.m"
        {
#line 823 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__VarName_16);
        }
#line 824 "write_deps_file.m"
        {
#line 824 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) ":%");
        }
#line 825 "write_deps_file.m"
        {
#line 825 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__OldSuffix_17);
        }
#line 826 "write_deps_file.m"
        {
#line 826 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) "=");
        }
#line 827 "write_deps_file.m"
        {
#line 827 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__Prefix_11);
        }
#line 828 "write_deps_file.m"
        {
#line 828 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) "%");
        }
#line 829 "write_deps_file.m"
        {
#line 829 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__Suffix_12);
        }
#line 830 "write_deps_file.m"
        {
#line 830 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) ")");
#line 830 "write_deps_file.m"
          return;
        }
#line 821 "write_deps_file.m"
      }
#line 821 "write_deps_file.m"
  }
#line 814 "write_deps_file.m"
}

#line 803 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
#line 803 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 803 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 803 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 803 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4)
#line 803 "write_deps_file.m"
{
#line 806 "write_deps_file.m"
  while (MR_TRUE)
#line 806 "write_deps_file.m"
    {
#line 806 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 806 "write_deps_file.m"
      {
#line 806 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 806 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 806 "write_deps_file.m"
          {
#line 806 "write_deps_file.m"
          }
#line 806 "write_deps_file.m"
        else
#line 807 "write_deps_file.m"
          {
#line 807 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));
#line 807 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 807 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_19;

#line 808 "write_deps_file.m"
            {
#line 808 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_14, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_19);
            }
#line 810 "write_deps_file.m"
            {
#line 810 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, (MR_String) " \\\n\t");
            }
#line 811 "write_deps_file.m"
            {
#line 811 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, parse_tree__write_deps_file__FileName_19);
            }
#line 812 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 812 "write_deps_file.m"
            {
#line 812 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__Modules_15;

#line 812 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 812 "write_deps_file.m"
            }
#line 812 "write_deps_file.m"
            continue;
#line 807 "write_deps_file.m"
          }
#line 806 "write_deps_file.m"
      }
#line 806 "write_deps_file.m"
      break;
#line 806 "write_deps_file.m"
    }
#line 803 "write_deps_file.m"
}

#line 792 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0_1(
#line 792 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 792 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 792 "write_deps_file.m"
{
#line 792 "write_deps_file.m"
  {
#line 792 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 792 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 792 "write_deps_file.m"
    {
#line 792 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__submodules__792__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 792 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 792 "write_deps_file.m"
  }
#line 792 "write_deps_file.m"
}

#line 785 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0(
#line 785 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 785 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules0_5)
#line 785 "write_deps_file.m"
{
#line 797 "write_deps_file.m"
  {
#line 797 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__Module_4)) == (MR_mktag((MR_Integer) 0)));
#line 797 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_6;
#line 797 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str_7;

#line 789 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 789 "write_deps_file.m"
      {
#line 789 "write_deps_file.m"
        parse_tree__write_deps_file__Str_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_4, (MR_Integer) 0)));
#line 790 "write_deps_file.m"
        {
#line 790 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__Module_4);
        }
#line 790 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 789 "write_deps_file.m"
      }
#line 797 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 795 "write_deps_file.m"
      {
#line 795 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__P_8;

#line 792 "write_deps_file.m"
        {
#line 792 "write_deps_file.m"
          parse_tree__write_deps_file__P_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 792 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1]));
#line 792 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 1) = ((MR_Box) (parse_tree__write_deps_file__submodules_2_f_0_1));
#line 792 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 792 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 3) = ((MR_Box) (parse_tree__write_deps_file__Module_4));
#line 792 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 4) = ((MR_Box) (parse_tree__write_deps_file__Str_7));
#line 792 "write_deps_file.m"
        }
#line 796 "write_deps_file.m"
        {
#line 796 "write_deps_file.m"
          mercury__list__filter_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__P_8, parse_tree__write_deps_file__Modules0_5, &parse_tree__write_deps_file__Modules_6);
        }
#line 795 "write_deps_file.m"
      }
#line 797 "write_deps_file.m"
    else
#line 798 "write_deps_file.m"
      parse_tree__write_deps_file__Modules_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 797 "write_deps_file.m"
    return parse_tree__write_deps_file__Modules_6;
#line 797 "write_deps_file.m"
  }
#line 785 "write_deps_file.m"
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
#line 2336 "write_deps_file.m"
  {
#line 2336 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 2336 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2336 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2336 "write_deps_file.m"
    else
#line 2338 "write_deps_file.m"
      {
#line 2338 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Dep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
#line 2338 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Deps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));
#line 2338 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;

#line 2339 "write_deps_file.m"
        {
#line 2339 "write_deps_file.m"
          parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__BuildOptFiles_2, parse_tree__write_deps_file__Deps_19, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__Suffix_5, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35);
        }
#line 12471 "parse_tree.write_deps_file.c"
        if ((parse_tree__write_deps_file__BuildOptFiles_2 == (MR_Integer) 0))
#line 12473 "parse_tree.write_deps_file.c"
          {
#line 12475 "parse_tree.write_deps_file.c"
            MR_String parse_tree__write_deps_file__OptName_28;
#line 12477 "parse_tree.write_deps_file.c"
            MR_Word parse_tree__write_deps_file__Result2_29;

#line 2360 "write_deps_file.m"
            {
#line 2360 "write_deps_file.m"
              parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, parse_tree__write_deps_file__Suffix_5, &parse_tree__write_deps_file__OptName_28);
            }
#line 2361 "write_deps_file.m"
            {
#line 2361 "write_deps_file.m"
              libs__file_util__search_for_file_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_28, &parse_tree__write_deps_file__Result2_29);
            }
#line 2365 "write_deps_file.m"
            if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_29)) == (MR_mktag((MR_Integer) 1))))
#line 2366 "write_deps_file.m"
              *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
#line 2365 "write_deps_file.m"
            else
#line 2364 "write_deps_file.m"
              {
#line 2364 "write_deps_file.m"
                MR_Word base;
#line 2364 "write_deps_file.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2364 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2364 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2364 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2364 "write_deps_file.m"
              }
#line 12510 "parse_tree.write_deps_file.c"
          }
#line 12512 "parse_tree.write_deps_file.c"
        else
#line 12514 "parse_tree.write_deps_file.c"
          {
#line 12516 "parse_tree.write_deps_file.c"
            MR_Word parse_tree__write_deps_file__Result1_24;

#line 2343 "write_deps_file.m"
            {
#line 2343 "write_deps_file.m"
              parse_tree__prog_io_find__search_for_module_source_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__Result1_24);
            }
#line 12524 "parse_tree.write_deps_file.c"
            if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_24)) == (MR_mktag((MR_Integer) 1))))
#line 12526 "parse_tree.write_deps_file.c"
              {
#line 12528 "parse_tree.write_deps_file.c"
                MR_String parse_tree__write_deps_file__OptName_45;
#line 12530 "parse_tree.write_deps_file.c"
                MR_Word parse_tree__write_deps_file__Result2_46;

#line 2360 "write_deps_file.m"
                {
#line 2360 "write_deps_file.m"
                  parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, parse_tree__write_deps_file__Suffix_5, &parse_tree__write_deps_file__OptName_45);
                }
#line 2361 "write_deps_file.m"
                {
#line 2361 "write_deps_file.m"
                  libs__file_util__search_for_file_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_45, &parse_tree__write_deps_file__Result2_46);
                }
#line 2365 "write_deps_file.m"
                if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_46)) == (MR_mktag((MR_Integer) 1))))
#line 2366 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
#line 2365 "write_deps_file.m"
                else
#line 2364 "write_deps_file.m"
                  {
#line 2364 "write_deps_file.m"
                    MR_Word base;
#line 2364 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2364 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2364 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2364 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2364 "write_deps_file.m"
                  }
#line 12563 "parse_tree.write_deps_file.c"
              }
#line 12565 "parse_tree.write_deps_file.c"
            else
#line 12567 "parse_tree.write_deps_file.c"
              {
#line 2347 "write_deps_file.m"
                {
#line 2347 "write_deps_file.m"
                  MR_Word base;
#line 2347 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2347 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2347 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2347 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2347 "write_deps_file.m"
                }
#line 2349 "write_deps_file.m"
                {
#line 2349 "write_deps_file.m"
                  mercury__io__seen_2_p_0();
#line 2349 "write_deps_file.m"
                  return;
                }
#line 12590 "parse_tree.write_deps_file.c"
              }
#line 12592 "parse_tree.write_deps_file.c"
          }
#line 2338 "write_deps_file.m"
      }
#line 2336 "write_deps_file.m"
  }
#line 75 "write_deps_file.m"
}

#line 2258 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0_1(
#line 2258 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2258 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 2258 "write_deps_file.m"
{
#line 2258 "write_deps_file.m"
  {
#line 2258 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 2258 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 2258 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__2_17;

#line 2258 "write_deps_file.m"
    {
#line 2258 "write_deps_file.m"
      parse_tree__write_deps_file__conv0_HeadVar__2_17 = parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2258__1_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 2258 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__2_17));
#line 2258 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 2258 "write_deps_file.m"
  }
#line 2258 "write_deps_file.m"
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
#line 2247 "write_deps_file.m"
  {
#line 2247 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2247 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_6;
#line 2247 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepModules_7;

#line 2248 "write_deps_file.m"
    {
#line 2248 "write_deps_file.m"
      parse_tree__write_deps_file__DepModules_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepModules_7, 0) = ((MR_Box) (parse_tree__write_deps_file__Module_4));
#line 2248 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepModules_7, 1) = ((MR_Box) (parse_tree__write_deps_file__DepModules0_5));
#line 2248 "write_deps_file.m"
    }
#line 2252 "write_deps_file.m"
    {
#line 2252 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__Module_4);
    }
#line 2257 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2254 "write_deps_file.m"
      {
#line 2254 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_10_10;
#line 2254 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_13_13;

#line 2256 "write_deps_file.m"
        {
#line 2256 "write_deps_file.m"
          parse_tree__write_deps_file__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2256 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_13_13, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[1]));
#line 2256 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_13_13, 1) = ((MR_Box) (parse_tree__write_deps_file__DepModules_7));
#line 2256 "write_deps_file.m"
        }
#line 2255 "write_deps_file.m"
        {
#line 2255 "write_deps_file.m"
          parse_tree__write_deps_file__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2255 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_10_10, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[0]));
#line 2255 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_10_10, 1) = ((MR_Box) (parse_tree__write_deps_file__V_13_13));
#line 2255 "write_deps_file.m"
        }
#line 2254 "write_deps_file.m"
        {
#line 2254 "write_deps_file.m"
          parse_tree__write_deps_file__Modules_6 = mercury__list__remove_dups_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__V_10_10);
        }
#line 2254 "write_deps_file.m"
      }
#line 2257 "write_deps_file.m"
    else
#line 2265 "write_deps_file.m"
      {
#line 2265 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_23_23 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2265 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_20_20;

#line 2266 "write_deps_file.m"
        {
#line 2266 "write_deps_file.m"
          parse_tree__write_deps_file__V_20_20 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__TypeCtorInfo_23_23, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[5], parse_tree__write_deps_file__DepModules_7);
        }
#line 2266 "write_deps_file.m"
        {
#line 2266 "write_deps_file.m"
          parse_tree__write_deps_file__Modules_6 = mercury__list__remove_dups_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__V_20_20);
        }
#line 2265 "write_deps_file.m"
      }
#line 2247 "write_deps_file.m"
    return parse_tree__write_deps_file__Modules_6;
#line 2247 "write_deps_file.m"
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
#line 1049 "write_deps_file.m"
  {
#line 1049 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1049 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_12;
#line 1049 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DepFileName_13;
#line 1049 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepResult_14;

#line 1050 "write_deps_file.m"
    {
#line 1050 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 44, &parse_tree__write_deps_file__Verbose_12);
    }
#line 1051 "write_deps_file.m"
    {
#line 1051 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dep", (MR_Integer) 0, &parse_tree__write_deps_file__DepFileName_13);
    }
#line 1053 "write_deps_file.m"
    {
#line 1053 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
#line 1054 "write_deps_file.m"
    {
#line 1054 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DepFileName_13);
    }
#line 1055 "write_deps_file.m"
    {
#line 1055 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
#line 1056 "write_deps_file.m"
    {
#line 1056 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DepFileName_13, &parse_tree__write_deps_file__DepResult_14);
    }
#line 1063 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DepResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1064 "write_deps_file.m"
      {
#line 1064 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));
#line 1064 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
#line 1064 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DepMessage_18;
#line 1064 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_34_34;
#line 1064 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_36_36;
#line 1064 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_37_37;
#line 1064 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_39_39;

#line 1065 "write_deps_file.m"
        {
#line 1065 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
#line 1066 "write_deps_file.m"
        {
#line 1066 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
#line 1067 "write_deps_file.m"
        {
#line 1067 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
#line 1069 "write_deps_file.m"
        {
#line 1069 "write_deps_file.m"
          parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
#line 1069 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1069 "write_deps_file.m"
        }
#line 1069 "write_deps_file.m"
        {
#line 1069 "write_deps_file.m"
          parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 1069 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1069 "write_deps_file.m"
        }
#line 1068 "write_deps_file.m"
        {
#line 1068 "write_deps_file.m"
          parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_13));
#line 1068 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 1068 "write_deps_file.m"
        }
#line 1068 "write_deps_file.m"
        {
#line 1068 "write_deps_file.m"
          parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1068 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1068 "write_deps_file.m"
        }
#line 1068 "write_deps_file.m"
        {
#line 1068 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__DepMessage_18);
        }
#line 1070 "write_deps_file.m"
        {
#line 1070 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DepMessage_18);
#line 1070 "write_deps_file.m"
          return;
        }
#line 1064 "write_deps_file.m"
      }
#line 1063 "write_deps_file.m"
    else
#line 1058 "write_deps_file.m"
      {
#line 1058 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DepStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));

#line 1059 "write_deps_file.m"
        {
#line 1059 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dep_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DepStream_15);
        }
#line 1061 "write_deps_file.m"
        {
#line 1061 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_15);
        }
#line 1062 "write_deps_file.m"
        {
#line 1062 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
#line 1062 "write_deps_file.m"
          return;
        }
#line 1058 "write_deps_file.m"
      }
#line 1049 "write_deps_file.m"
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
#line 1022 "write_deps_file.m"
  {
#line 1022 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1022 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_12;
#line 1022 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DvFileName_13;
#line 1022 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DvResult_14;

#line 1023 "write_deps_file.m"
    {
#line 1023 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 44, &parse_tree__write_deps_file__Verbose_12);
    }
#line 1024 "write_deps_file.m"
    {
#line 1024 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dv", (MR_Integer) 0, &parse_tree__write_deps_file__DvFileName_13);
    }
#line 1026 "write_deps_file.m"
    {
#line 1026 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
#line 1027 "write_deps_file.m"
    {
#line 1027 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DvFileName_13);
    }
#line 1028 "write_deps_file.m"
    {
#line 1028 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
#line 1029 "write_deps_file.m"
    {
#line 1029 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DvFileName_13, &parse_tree__write_deps_file__DvResult_14);
    }
#line 1036 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DvResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1037 "write_deps_file.m"
      {
#line 1037 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));
#line 1037 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
#line 1037 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DvMessage_18;
#line 1037 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_34_34;
#line 1037 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_36_36;
#line 1037 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_37_37;
#line 1037 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_39_39;

#line 1038 "write_deps_file.m"
        {
#line 1038 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
#line 1039 "write_deps_file.m"
        {
#line 1039 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
#line 1040 "write_deps_file.m"
        {
#line 1040 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
#line 1042 "write_deps_file.m"
        {
#line 1042 "write_deps_file.m"
          parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
#line 1042 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "write_deps_file.m"
        }
#line 1042 "write_deps_file.m"
        {
#line 1042 "write_deps_file.m"
          parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 1042 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1042 "write_deps_file.m"
        }
#line 1041 "write_deps_file.m"
        {
#line 1041 "write_deps_file.m"
          parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_13));
#line 1041 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 1041 "write_deps_file.m"
        }
#line 1041 "write_deps_file.m"
        {
#line 1041 "write_deps_file.m"
          parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1041 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1041 "write_deps_file.m"
        }
#line 1041 "write_deps_file.m"
        {
#line 1041 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__DvMessage_18);
        }
#line 1043 "write_deps_file.m"
        {
#line 1043 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DvMessage_18);
#line 1043 "write_deps_file.m"
          return;
        }
#line 1037 "write_deps_file.m"
      }
#line 1036 "write_deps_file.m"
    else
#line 1031 "write_deps_file.m"
      {
#line 1031 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DvStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));

#line 1032 "write_deps_file.m"
        {
#line 1032 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dv_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DvStream_15);
        }
#line 1034 "write_deps_file.m"
        {
#line 1034 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DvStream_15);
        }
#line 1035 "write_deps_file.m"
        {
#line 1035 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
#line 1035 "write_deps_file.m"
          return;
        }
#line 1031 "write_deps_file.m"
      }
#line 1022 "write_deps_file.m"
  }
#line 45 "write_deps_file.m"
}

#line 682 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_7(
#line 682 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 682 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 682 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 682 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 682 "write_deps_file.m"
{
#line 682 "write_deps_file.m"
  {
#line 682 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 682 "write_deps_file.m"
    {
#line 682 "write_deps_file.m"
      parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 682 "write_deps_file.m"
      return;
    }
#line 682 "write_deps_file.m"
  }
#line 682 "write_deps_file.m"
}

#line 605 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_6(
#line 605 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 605 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 605 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 605 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 605 "write_deps_file.m"
{
#line 605 "write_deps_file.m"
  {
#line 605 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 605 "write_deps_file.m"
    {
#line 605 "write_deps_file.m"
      parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 7))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 605 "write_deps_file.m"
      return;
    }
#line 605 "write_deps_file.m"
  }
#line 605 "write_deps_file.m"
}

#line 588 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_5(
#line 588 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 588 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 588 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 588 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 588 "write_deps_file.m"
{
#line 588 "write_deps_file.m"
  {
#line 588 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 588 "write_deps_file.m"
    {
#line 588 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__588__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 588 "write_deps_file.m"
      return;
    }
#line 588 "write_deps_file.m"
  }
#line 588 "write_deps_file.m"
}

#line 549 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_4(
#line 549 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 549 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 549 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 549 "write_deps_file.m"
{
#line 549 "write_deps_file.m"
  {
#line 549 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 549 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 549 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv3_HeadVar__3_575;

#line 549 "write_deps_file.m"
    {
#line 549 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__549__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv3_HeadVar__3_575);
    }
#line 549 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 549 "write_deps_file.m"
      {
#line 549 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv3_HeadVar__3_575));
#line 549 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 549 "write_deps_file.m"
      }
#line 549 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 549 "write_deps_file.m"
  }
#line 549 "write_deps_file.m"
}

#line 375 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_3(
#line 375 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 375 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 375 "write_deps_file.m"
{
#line 375 "write_deps_file.m"
  {
#line 375 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 375 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 375 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv2_HeadVar__2_2;

#line 375 "write_deps_file.m"
    {
#line 375 "write_deps_file.m"
      parse_tree__write_deps_file__conv2_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 375 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__2_2));
#line 375 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 375 "write_deps_file.m"
  }
#line 375 "write_deps_file.m"
}

#line 353 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_2(
#line 353 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 353 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 353 "write_deps_file.m"
{
#line 353 "write_deps_file.m"
  {
#line 353 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 353 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 353 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv1_HeadVar__2_2;

#line 353 "write_deps_file.m"
    {
#line 353 "write_deps_file.m"
      parse_tree__write_deps_file__conv1_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 353 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_HeadVar__2_2));
#line 353 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 353 "write_deps_file.m"
  }
#line 353 "write_deps_file.m"
}

#line 267 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_1(
#line 267 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 267 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 267 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 267 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 267 "write_deps_file.m"
{
#line 267 "write_deps_file.m"
  {
#line 267 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 267 "write_deps_file.m"
    {
#line 267 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__267__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 267 "write_deps_file.m"
      return;
    }
#line 267 "write_deps_file.m"
  }
#line 267 "write_deps_file.m"
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
#line 106 "write_deps_file.m"
  {
#line 106 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 106 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 0)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFileModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 1)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 2)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ParentDeps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 3)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IntDeps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 4)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ImplDeps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 5)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IndirectDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 6)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__InclDeps_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 8)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__NestedDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 9)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__FactDeps0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 10)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ContainsForeignCode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 11)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignImports0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 12)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignIncludeFiles_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 13)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Items_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 15)));
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_33;
#line 106 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_34;
#line 106 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DependencyFileName_35;
#line 106 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TransOptDateFileName_36;
#line 106 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TmpDependencyFileName_37;
#line 106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Result_38;
#line 106 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_154_154;
#line 107 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Children_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 7)));
#line 107 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___ContainsForeignExport_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 14)));
#line 107 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Specs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 16)));
#line 107 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Error_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 17)));
#line 107 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Timestamps_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 18)));
#line 107 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___HasMain_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 19)));
#line 107 "write_deps_file.m"
    MR_String parse_tree__write_deps_file___Dir_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_8, (MR_Integer) 20)));

#line 114 "write_deps_file.m"
    {
#line 114 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 44, &parse_tree__write_deps_file__Verbose_33);
    }
#line 115 "write_deps_file.m"
    {
#line 115 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_14, &parse_tree__write_deps_file__MakeVarName_34);
    }
#line 116 "write_deps_file.m"
    {
#line 116 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".d", (MR_Integer) 0, &parse_tree__write_deps_file__DependencyFileName_35);
    }
#line 118 "write_deps_file.m"
    {
#line 118 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".trans_opt_date", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptDateFileName_36);
    }
#line 125 "write_deps_file.m"
    {
#line 125 "write_deps_file.m"
      parse_tree__write_deps_file__V_154_154 = mercury__dir__dirname_1_f_0(parse_tree__write_deps_file__DependencyFileName_35);
    }
#line 125 "write_deps_file.m"
    {
#line 125 "write_deps_file.m"
      mercury__io__make_temp_5_p_0(parse_tree__write_deps_file__V_154_154, (MR_String) "tmp_d", &parse_tree__write_deps_file__TmpDependencyFileName_37);
    }
#line 127 "write_deps_file.m"
    {
#line 127 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, (MR_String) "% Writing auto-dependency file \140");
    }
#line 128 "write_deps_file.m"
    {
#line 128 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, parse_tree__write_deps_file__DependencyFileName_35);
    }
#line 129 "write_deps_file.m"
    {
#line 129 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, (MR_String) "\'...");
    }
#line 130 "write_deps_file.m"
    {
#line 130 "write_deps_file.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_33);
    }
#line 131 "write_deps_file.m"
    {
#line 131 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__TmpDependencyFileName_37, &parse_tree__write_deps_file__Result_38);
    }
#line 141 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result_38)) == (MR_mktag((MR_Integer) 1))))
#line 133 "write_deps_file.m"
      {
#line 133 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result_38, (MR_Integer) 0)));
#line 133 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_40;
#line 133 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Message_41;
#line 133 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_840_840;
#line 133 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_842_842;
#line 133 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_843_843;
#line 133 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_845_845;

#line 134 "write_deps_file.m"
        {
#line 134 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, (MR_String) " failed.\n");
        }
#line 135 "write_deps_file.m"
        {
#line 135 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_33);
        }
#line 136 "write_deps_file.m"
        {
#line 136 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_39, &parse_tree__write_deps_file__IOErrorMessage_40);
        }
#line 139 "write_deps_file.m"
        {
#line 139 "write_deps_file.m"
          parse_tree__write_deps_file__V_845_845 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 139 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_845_845, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_40));
#line 139 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_845_845, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 139 "write_deps_file.m"
        }
#line 138 "write_deps_file.m"
        {
#line 138 "write_deps_file.m"
          parse_tree__write_deps_file__V_843_843 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 138 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_843_843, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 138 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_843_843, 1) = ((MR_Box) (parse_tree__write_deps_file__V_845_845));
#line 138 "write_deps_file.m"
        }
#line 138 "write_deps_file.m"
        {
#line 138 "write_deps_file.m"
          parse_tree__write_deps_file__V_842_842 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 138 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_842_842, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_37));
#line 138 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_842_842, 1) = ((MR_Box) (parse_tree__write_deps_file__V_843_843));
#line 138 "write_deps_file.m"
        }
#line 137 "write_deps_file.m"
        {
#line 137 "write_deps_file.m"
          parse_tree__write_deps_file__V_840_840 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_840_840, 0) = ((MR_Box) ((MR_String) "error opening temporary file \140"));
#line 137 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_840_840, 1) = ((MR_Box) (parse_tree__write_deps_file__V_842_842));
#line 137 "write_deps_file.m"
        }
#line 137 "write_deps_file.m"
        {
#line 137 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_840_840, &parse_tree__write_deps_file__Message_41);
        }
#line 140 "write_deps_file.m"
        {
#line 140 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_41);
#line 140 "write_deps_file.m"
          return;
        }
#line 133 "write_deps_file.m"
      }
#line 141 "write_deps_file.m"
    else
#line 142 "write_deps_file.m"
      {
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_870_870 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_871_871;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DepStream_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Result_38, (MR_Integer) 0)));
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDeps0_43;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDepsSet0_45;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDepsSet_46;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDepsSet0_47;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDepsSet1_48;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDepsSet_49;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDeps_50;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDeps_51;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__AllDeps_52;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__FactDeps_53;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ErrFileName_62;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OptDateFileName_63;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__CDateFileName_64;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__AsmDateFileName_65;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__PicAsmDateFileName_66;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ObjFileName_67;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ILDateFileName_68;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__JavaDateFileName_69;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__PicObjFileName_70;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int0FileName_71;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__UseOptFiles_83;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Intermod_84;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IntermodDirs_85;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__HighLevelCode_92;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__CompilationTarget_93;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__CFileName_94;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__HeaderFileName_95;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__HeaderFileName2_96;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ILFileName_97;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__JavaFileName_98;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModuleDepFileName_99;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DateFileName_100;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Date0FileName_101;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__HaveMap_102;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModuleArg_103;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Target_104;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__SignAssembly_105;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DllFileName_106;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ClassFileName_107;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__BeamFileName_108;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__SubModules_109;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LangSet_112;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImports_113;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImportedModules_121;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IntFileName_131;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int2FileName_132;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int3FileName_133;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OptFileName_134;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__TransOptFileName_135;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Date3FileName_136;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__UseSubdirs_137;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Result3_138;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_247_247;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_250_250;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_251_251;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_253_253;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_254_254;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_256_256;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_257_257;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_259_259;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_260_260;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_262_262;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_263_263;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_265_265;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_266_266;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_268_268;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_269_269;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_271_271;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_273_273;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_276_276;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_452_452;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_455_455;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_456_456;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_458_458;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_459_459;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_461_461;
#line 142 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_471_471;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_474_474;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_477_477;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_479_479;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_480_480;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_482_482;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_483_483;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_485_485;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_487_487;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_489_489;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_490_490;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_492_492;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_493_493;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_495_495;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_497_497;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_498_498;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_500_500;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_514_514;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_517_517;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_518_518;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_520_520;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_535_535;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_573_573;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_629_629;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_632_632;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_633_633;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_635_635;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_636_636;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_638_638;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_640_640;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_641_641;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_643_643;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_644_644;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_646_646;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_648_648;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_649_649;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_651_651;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_652_652;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_654_654;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_656_656;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_657_657;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_659_659;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_660_660;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_662_662;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_664_664;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_665_665;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_667_667;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_668_668;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_670_670;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_672_672;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_673_673;
#line 142 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_675_675;
#line 205 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__SourceFileBase_61;
#line 513 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_110_110;
#line 513 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_111_111;
#line 602 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_883_883;
#line 689 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_893_893;

#line 143 "write_deps_file.m"
        {
#line 143 "write_deps_file.m"
          mercury__list__append_3_p_1(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__IntDeps_16, parse_tree__write_deps_file__ImplDeps_17, &parse_tree__write_deps_file__LongDeps0_43);
        }
#line 145 "write_deps_file.m"
        {
#line 145 "write_deps_file.m"
          mercury__set__list_to_set_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__LongDeps0_43, &parse_tree__write_deps_file__LongDepsSet0_45);
        }
#line 146 "write_deps_file.m"
        {
#line 146 "write_deps_file.m"
          mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, ((MR_Box) (parse_tree__write_deps_file__ModuleName_14)), parse_tree__write_deps_file__LongDepsSet0_45, &parse_tree__write_deps_file__LongDepsSet_46);
        }
#line 147 "write_deps_file.m"
        {
#line 147 "write_deps_file.m"
          mercury__set__list_to_set_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__IndirectDeps_18, &parse_tree__write_deps_file__ShortDepsSet0_47);
        }
#line 148 "write_deps_file.m"
        {
#line 148 "write_deps_file.m"
          mercury__set__difference_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__ShortDepsSet0_47, parse_tree__write_deps_file__LongDepsSet_46, &parse_tree__write_deps_file__ShortDepsSet1_48);
        }
#line 149 "write_deps_file.m"
        {
#line 149 "write_deps_file.m"
          mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, ((MR_Box) (parse_tree__write_deps_file__ModuleName_14)), parse_tree__write_deps_file__ShortDepsSet1_48, &parse_tree__write_deps_file__ShortDepsSet_49);
        }
#line 150 "write_deps_file.m"
        {
#line 150 "write_deps_file.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__LongDepsSet_46, &parse_tree__write_deps_file__LongDeps_50);
        }
#line 151 "write_deps_file.m"
        {
#line 151 "write_deps_file.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__ShortDepsSet_49, &parse_tree__write_deps_file__ShortDeps_51);
        }
#line 152 "write_deps_file.m"
        {
#line 152 "write_deps_file.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__AllDepsSet_9, &parse_tree__write_deps_file__AllDeps_52);
        }
#line 13841 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_871_871 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 153 "write_deps_file.m"
        {
#line 153 "write_deps_file.m"
          mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__FactDeps0_22, &parse_tree__write_deps_file__FactDeps_53);
        }
#line 166 "write_deps_file.m"
        if ((parse_tree__write_deps_file__MaybeTransOptDeps_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "write_deps_file.m"
          {
#line 167 "write_deps_file.m"
          }
#line 166 "write_deps_file.m"
        else
#line 156 "write_deps_file.m"
          {
#line 156 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptDeps_10, (MR_Integer) 0)));
#line 156 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDepsSet0_55;
#line 156 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDepsSet_56;
#line 156 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDateDeps_57;
#line 156 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_164_164;

#line 157 "write_deps_file.m"
            {
#line 157 "write_deps_file.m"
              mercury__set__list_to_set_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__TransOptDeps0_54, &parse_tree__write_deps_file__TransOptDepsSet0_55);
            }
#line 158 "write_deps_file.m"
            {
#line 158 "write_deps_file.m"
              mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__TransOptDepsSet0_55, parse_tree__write_deps_file__LongDepsSet_46, &parse_tree__write_deps_file__TransOptDepsSet_56);
            }
#line 159 "write_deps_file.m"
            {
#line 159 "write_deps_file.m"
              mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__TransOptDepsSet_56, &parse_tree__write_deps_file__TransOptDateDeps_57);
            }
#line 163 "write_deps_file.m"
            {
#line 163 "write_deps_file.m"
              parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 163 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_36));
#line 163 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])));
#line 163 "write_deps_file.m"
            }
#line 163 "write_deps_file.m"
            {
#line 163 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_164_164);
            }
#line 164 "write_deps_file.m"
            {
#line 164 "write_deps_file.m"
              parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__TransOptDateDeps_57, (MR_String) ".trans_opt", parse_tree__write_deps_file__DepStream_42);
            }
#line 156 "write_deps_file.m"
          }
#line 199 "write_deps_file.m"
        if ((parse_tree__write_deps_file__FactDeps_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "write_deps_file.m"
          {
#line 200 "write_deps_file.m"
          }
#line 199 "write_deps_file.m"
        else
#line 171 "write_deps_file.m"
          {
#line 171 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__AssumeGmake_60;
#line 171 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_171_171;
#line 171 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_174_174;

#line 173 "write_deps_file.m"
            {
#line 173 "write_deps_file.m"
              parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 173 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])));
#line 173 "write_deps_file.m"
            }
#line 173 "write_deps_file.m"
            {
#line 173 "write_deps_file.m"
              parse_tree__write_deps_file__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 173 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 173 "write_deps_file.m"
            }
#line 172 "write_deps_file.m"
            {
#line 172 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_171_171);
            }
#line 174 "write_deps_file.m"
            {
#line 174 "write_deps_file.m"
              parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__FactDeps_53, (MR_String) "", parse_tree__write_deps_file__DepStream_42);
            }
#line 175 "write_deps_file.m"
            {
#line 175 "write_deps_file.m"
              mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_42);
            }
#line 176 "write_deps_file.m"
            {
#line 176 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 114, &parse_tree__write_deps_file__AssumeGmake_60);
            }
#line 187 "write_deps_file.m"
            if ((parse_tree__write_deps_file__AssumeGmake_60 == (MR_Integer) 0))
#line 188 "write_deps_file.m"
              {
#line 188 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_182_182;
#line 188 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_189_189;
#line 188 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_192_192;

#line 190 "write_deps_file.m"
                {
#line 190 "write_deps_file.m"
                  parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 190 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[100])));
#line 190 "write_deps_file.m"
                }
#line 189 "write_deps_file.m"
                {
#line 189 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_182_182);
                }
#line 191 "write_deps_file.m"
                {
#line 191 "write_deps_file.m"
                  parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__FactDeps_53, (MR_String) ".c", parse_tree__write_deps_file__DepStream_42);
                }
#line 193 "write_deps_file.m"
                {
#line 193 "write_deps_file.m"
                  parse_tree__write_deps_file__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 193 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[101])));
#line 193 "write_deps_file.m"
                }
#line 193 "write_deps_file.m"
                {
#line 193 "write_deps_file.m"
                  parse_tree__write_deps_file__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 193 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 1) = ((MR_Box) (parse_tree__write_deps_file__V_192_192));
#line 193 "write_deps_file.m"
                }
#line 193 "write_deps_file.m"
                {
#line 193 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_189_189);
                }
#line 195 "write_deps_file.m"
                {
#line 195 "write_deps_file.m"
                  parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__FactDeps_53, (MR_String) ".\044O", parse_tree__write_deps_file__DepStream_42);
                }
#line 197 "write_deps_file.m"
                {
#line 197 "write_deps_file.m"
                  mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_42);
                }
#line 188 "write_deps_file.m"
              }
#line 187 "write_deps_file.m"
            else
#line 178 "write_deps_file.m"
              {
#line 178 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_199_199;
#line 178 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_202_202;
#line 178 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_203_203;
#line 178 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_205_205;
#line 178 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_206_206;
#line 178 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_208_208;
#line 178 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_209_209;
#line 178 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_211_211;

#line 184 "write_deps_file.m"
                {
#line 184 "write_deps_file.m"
                  parse_tree__write_deps_file__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 184 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102])));
#line 184 "write_deps_file.m"
                }
#line 184 "write_deps_file.m"
                {
#line 184 "write_deps_file.m"
                  parse_tree__write_deps_file__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs = \044("));
#line 184 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 1) = ((MR_Box) (parse_tree__write_deps_file__V_211_211));
#line 184 "write_deps_file.m"
                }
#line 183 "write_deps_file.m"
                {
#line 183 "write_deps_file.m"
                  parse_tree__write_deps_file__V_208_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_208_208, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 183 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_208_208, 1) = ((MR_Box) (parse_tree__write_deps_file__V_209_209));
#line 183 "write_deps_file.m"
                }
#line 182 "write_deps_file.m"
                {
#line 182 "write_deps_file.m"
                  parse_tree__write_deps_file__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 0) = ((MR_Box) ((MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)\n\n"));
#line 182 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 1) = ((MR_Box) (parse_tree__write_deps_file__V_208_208));
#line 182 "write_deps_file.m"
                }
#line 181 "write_deps_file.m"
                {
#line 181 "write_deps_file.m"
                  parse_tree__write_deps_file__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_205_205, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 181 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_205_205, 1) = ((MR_Box) (parse_tree__write_deps_file__V_206_206));
#line 181 "write_deps_file.m"
                }
#line 181 "write_deps_file.m"
                {
#line 181 "write_deps_file.m"
                  parse_tree__write_deps_file__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 0) = ((MR_Box) ((MR_String) ".fact_tables.os = \044("));
#line 181 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 1) = ((MR_Box) (parse_tree__write_deps_file__V_205_205));
#line 181 "write_deps_file.m"
                }
#line 180 "write_deps_file.m"
                {
#line 180 "write_deps_file.m"
                  parse_tree__write_deps_file__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 180 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 1) = ((MR_Box) (parse_tree__write_deps_file__V_203_203));
#line 180 "write_deps_file.m"
                }
#line 180 "write_deps_file.m"
                {
#line 180 "write_deps_file.m"
                  parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 180 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__V_202_202));
#line 180 "write_deps_file.m"
                }
#line 179 "write_deps_file.m"
                {
#line 179 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_199_199);
                }
#line 178 "write_deps_file.m"
              }
#line 171 "write_deps_file.m"
          }
#line 203 "write_deps_file.m"
        {
#line 203 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_12, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_61);
        }
#line 205 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 204 "write_deps_file.m"
          {
#line 204 "write_deps_file.m"
            {
#line 204 "write_deps_file.m"
              parse_tree__write_deps_file__ErrFileName_62 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__SourceFileBase_61, (MR_String) ".err");
            }
#line 204 "write_deps_file.m"
          }
#line 205 "write_deps_file.m"
        else
#line 206 "write_deps_file.m"
          {
#line 206 "write_deps_file.m"
            {
#line 206 "write_deps_file.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_deps_file", (MR_String) "predicate \140parse_tree.write_deps_file.write_dependency_file\'/6", (MR_String) "source file doesn\'t end in \140.m\'");
#line 206 "write_deps_file.m"
              return;
            }
#line 206 "write_deps_file.m"
          }
#line 208 "write_deps_file.m"
        {
#line 208 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".optdate", (MR_Integer) 1, &parse_tree__write_deps_file__OptDateFileName_63);
        }
#line 210 "write_deps_file.m"
        {
#line 210 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".c_date", (MR_Integer) 1, &parse_tree__write_deps_file__CDateFileName_64);
        }
#line 212 "write_deps_file.m"
        {
#line 212 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".s_date", (MR_Integer) 1, &parse_tree__write_deps_file__AsmDateFileName_65);
        }
#line 214 "write_deps_file.m"
        {
#line 214 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".pic_s_date", (MR_Integer) 1, &parse_tree__write_deps_file__PicAsmDateFileName_66);
        }
#line 216 "write_deps_file.m"
        {
#line 216 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".\044O", (MR_Integer) 1, &parse_tree__write_deps_file__ObjFileName_67);
        }
#line 218 "write_deps_file.m"
        {
#line 218 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".il_date", (MR_Integer) 1, &parse_tree__write_deps_file__ILDateFileName_68);
        }
#line 220 "write_deps_file.m"
        {
#line 220 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".java_date", (MR_Integer) 1, &parse_tree__write_deps_file__JavaDateFileName_69);
        }
#line 224 "write_deps_file.m"
        {
#line 224 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".pic_o", (MR_Integer) 1, &parse_tree__write_deps_file__PicObjFileName_70);
        }
#line 226 "write_deps_file.m"
        {
#line 226 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int0", (MR_Integer) 1, &parse_tree__write_deps_file__Int0FileName_71);
        }
#line 237 "write_deps_file.m"
        {
#line 237 "write_deps_file.m"
          parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_69));
#line 237 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "write_deps_file.m"
        }
#line 235 "write_deps_file.m"
        {
#line 235 "write_deps_file.m"
          parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) ((MR_String) " "));
#line 235 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 235 "write_deps_file.m"
        }
#line 235 "write_deps_file.m"
        {
#line 235 "write_deps_file.m"
          parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) (parse_tree__write_deps_file__ILDateFileName_68));
#line 235 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 235 "write_deps_file.m"
        }
#line 234 "write_deps_file.m"
        {
#line 234 "write_deps_file.m"
          parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) " "));
#line 234 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_268_268));
#line 234 "write_deps_file.m"
        }
#line 234 "write_deps_file.m"
        {
#line 234 "write_deps_file.m"
          parse_tree__write_deps_file__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 0) = ((MR_Box) (parse_tree__write_deps_file__PicAsmDateFileName_66));
#line 234 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 234 "write_deps_file.m"
        }
#line 233 "write_deps_file.m"
        {
#line 233 "write_deps_file.m"
          parse_tree__write_deps_file__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 0) = ((MR_Box) ((MR_String) " "));
#line 233 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 1) = ((MR_Box) (parse_tree__write_deps_file__V_265_265));
#line 233 "write_deps_file.m"
        }
#line 233 "write_deps_file.m"
        {
#line 233 "write_deps_file.m"
          parse_tree__write_deps_file__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 0) = ((MR_Box) (parse_tree__write_deps_file__AsmDateFileName_65));
#line 233 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 1) = ((MR_Box) (parse_tree__write_deps_file__V_263_263));
#line 233 "write_deps_file.m"
        }
#line 232 "write_deps_file.m"
        {
#line 232 "write_deps_file.m"
          parse_tree__write_deps_file__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 0) = ((MR_Box) ((MR_String) " "));
#line 232 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 1) = ((MR_Box) (parse_tree__write_deps_file__V_262_262));
#line 232 "write_deps_file.m"
        }
#line 232 "write_deps_file.m"
        {
#line 232 "write_deps_file.m"
          parse_tree__write_deps_file__V_259_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_259_259, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_64));
#line 232 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_259_259, 1) = ((MR_Box) (parse_tree__write_deps_file__V_260_260));
#line 232 "write_deps_file.m"
        }
#line 231 "write_deps_file.m"
        {
#line 231 "write_deps_file.m"
          parse_tree__write_deps_file__V_257_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_257_257, 0) = ((MR_Box) ((MR_String) " "));
#line 231 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_257_257, 1) = ((MR_Box) (parse_tree__write_deps_file__V_259_259));
#line 231 "write_deps_file.m"
        }
#line 231 "write_deps_file.m"
        {
#line 231 "write_deps_file.m"
          parse_tree__write_deps_file__V_256_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_62));
#line 231 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 1) = ((MR_Box) (parse_tree__write_deps_file__V_257_257));
#line 231 "write_deps_file.m"
        }
#line 230 "write_deps_file.m"
        {
#line 230 "write_deps_file.m"
          parse_tree__write_deps_file__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 0) = ((MR_Box) ((MR_String) " "));
#line 230 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 1) = ((MR_Box) (parse_tree__write_deps_file__V_256_256));
#line 230 "write_deps_file.m"
        }
#line 230 "write_deps_file.m"
        {
#line 230 "write_deps_file.m"
          parse_tree__write_deps_file__V_253_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_253_253, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_36));
#line 230 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_253_253, 1) = ((MR_Box) (parse_tree__write_deps_file__V_254_254));
#line 230 "write_deps_file.m"
        }
#line 229 "write_deps_file.m"
        {
#line 229 "write_deps_file.m"
          parse_tree__write_deps_file__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 0) = ((MR_Box) ((MR_String) " "));
#line 229 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 1) = ((MR_Box) (parse_tree__write_deps_file__V_253_253));
#line 229 "write_deps_file.m"
        }
#line 229 "write_deps_file.m"
        {
#line 229 "write_deps_file.m"
          parse_tree__write_deps_file__V_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_63));
#line 229 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 1) = ((MR_Box) (parse_tree__write_deps_file__V_251_251));
#line 229 "write_deps_file.m"
        }
#line 228 "write_deps_file.m"
        {
#line 228 "write_deps_file.m"
          parse_tree__write_deps_file__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 228 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 1) = ((MR_Box) (parse_tree__write_deps_file__V_250_250));
#line 228 "write_deps_file.m"
        }
#line 228 "write_deps_file.m"
        {
#line 228 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_247_247);
        }
#line 238 "write_deps_file.m"
        {
#line 238 "write_deps_file.m"
          parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 238 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "write_deps_file.m"
        }
#line 238 "write_deps_file.m"
        {
#line 238 "write_deps_file.m"
          parse_tree__write_deps_file__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 0) = ((MR_Box) ((MR_String) " : "));
#line 238 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 238 "write_deps_file.m"
        }
#line 238 "write_deps_file.m"
        {
#line 238 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_273_273);
        }
#line 244 "write_deps_file.m"
        if ((parse_tree__write_deps_file__InclDeps_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "write_deps_file.m"
          {
#line 245 "write_deps_file.m"
          }
#line 244 "write_deps_file.m"
        else
#line 242 "write_deps_file.m"
          {
#line 242 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_278_278;
#line 242 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_281_281;

#line 243 "write_deps_file.m"
            {
#line 243 "write_deps_file.m"
              parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_71));
#line 243 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 243 "write_deps_file.m"
            }
#line 243 "write_deps_file.m"
            {
#line 243 "write_deps_file.m"
              parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) ((MR_String) " "));
#line 243 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 243 "write_deps_file.m"
            }
#line 243 "write_deps_file.m"
            {
#line 243 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_278_278);
            }
#line 242 "write_deps_file.m"
          }
#line 247 "write_deps_file.m"
        {
#line 247 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_15, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_42);
        }
#line 248 "write_deps_file.m"
        {
#line 248 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__LongDeps_50, (MR_String) ".int", parse_tree__write_deps_file__DepStream_42);
        }
#line 249 "write_deps_file.m"
        {
#line 249 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ShortDeps_51, (MR_String) ".int2", parse_tree__write_deps_file__DepStream_42);
        }
#line 265 "write_deps_file.m"
        if ((parse_tree__write_deps_file__NestedDeps_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "write_deps_file.m"
          {
#line 264 "write_deps_file.m"
          }
#line 265 "write_deps_file.m"
        else
#line 266 "write_deps_file.m"
          {
#line 266 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Write_77;
#line 274 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_320_320;

#line 267 "write_deps_file.m"
            {
#line 267 "write_deps_file.m"
              parse_tree__write_deps_file__Write_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 267 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_77, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
#line 267 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_77, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_1));
#line 267 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 267 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_77, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 267 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_77, 4) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 267 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_77, 5) = ((MR_Box) (parse_tree__write_deps_file__NestedDeps_21));
#line 267 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_77, 6) = ((MR_Box) (parse_tree__write_deps_file__DepStream_42));
#line 267 "write_deps_file.m"
            }
#line 274 "write_deps_file.m"
            {
#line 274 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_871_871, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Write_77, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[9]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_320_320);
            }
#line 266 "write_deps_file.m"
          }
#line 279 "write_deps_file.m"
        {
#line 279 "write_deps_file.m"
          parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__SourceFileName_12, parse_tree__write_deps_file__ForeignIncludeFiles_25);
        }
#line 292 "write_deps_file.m"
        if ((parse_tree__write_deps_file__FactDeps_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "write_deps_file.m"
          {
#line 293 "write_deps_file.m"
          }
#line 292 "write_deps_file.m"
        else
#line 283 "write_deps_file.m"
          {
#line 283 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_322_322;
#line 283 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_325_325;
#line 283 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_326_326;
#line 283 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_328_328;
#line 283 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_330_330;
#line 283 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_331_331;
#line 283 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_333_333;
#line 283 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_334_334;
#line 283 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_336_336;
#line 283 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_337_337;
#line 283 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_339_339;
#line 283 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_341_341;
#line 283 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_342_342;
#line 283 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_344_344;

#line 290 "write_deps_file.m"
            {
#line 290 "write_deps_file.m"
              parse_tree__write_deps_file__V_344_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_67));
#line 290 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])));
#line 290 "write_deps_file.m"
            }
#line 289 "write_deps_file.m"
            {
#line 289 "write_deps_file.m"
              parse_tree__write_deps_file__V_342_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs) : "));
#line 289 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 1) = ((MR_Box) (parse_tree__write_deps_file__V_344_344));
#line 289 "write_deps_file.m"
            }
#line 289 "write_deps_file.m"
            {
#line 289 "write_deps_file.m"
              parse_tree__write_deps_file__V_341_341 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_341_341, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 289 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_341_341, 1) = ((MR_Box) (parse_tree__write_deps_file__V_342_342));
#line 289 "write_deps_file.m"
            }
#line 289 "write_deps_file.m"
            {
#line 289 "write_deps_file.m"
              parse_tree__write_deps_file__V_339_339 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 0) = ((MR_Box) ((MR_String) "\044("));
#line 289 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 1) = ((MR_Box) (parse_tree__write_deps_file__V_341_341));
#line 289 "write_deps_file.m"
            }
#line 288 "write_deps_file.m"
            {
#line 288 "write_deps_file.m"
              parse_tree__write_deps_file__V_337_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 288 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 1) = ((MR_Box) (parse_tree__write_deps_file__V_339_339));
#line 288 "write_deps_file.m"
            }
#line 288 "write_deps_file.m"
            {
#line 288 "write_deps_file.m"
              parse_tree__write_deps_file__V_336_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 288 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 1) = ((MR_Box) (parse_tree__write_deps_file__V_337_337));
#line 288 "write_deps_file.m"
            }
#line 287 "write_deps_file.m"
            {
#line 287 "write_deps_file.m"
              parse_tree__write_deps_file__V_334_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 0) = ((MR_Box) ((MR_String) ".fact_tables) "));
#line 287 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 1) = ((MR_Box) (parse_tree__write_deps_file__V_336_336));
#line 287 "write_deps_file.m"
            }
#line 287 "write_deps_file.m"
            {
#line 287 "write_deps_file.m"
              parse_tree__write_deps_file__V_333_333 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_333_333, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 287 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_333_333, 1) = ((MR_Box) (parse_tree__write_deps_file__V_334_334));
#line 287 "write_deps_file.m"
            }
#line 286 "write_deps_file.m"
            {
#line 286 "write_deps_file.m"
              parse_tree__write_deps_file__V_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 0) = ((MR_Box) ((MR_String) ".fact_tables.os) : \044("));
#line 286 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 1) = ((MR_Box) (parse_tree__write_deps_file__V_333_333));
#line 286 "write_deps_file.m"
            }
#line 286 "write_deps_file.m"
            {
#line 286 "write_deps_file.m"
              parse_tree__write_deps_file__V_330_330 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_330_330, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 286 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_330_330, 1) = ((MR_Box) (parse_tree__write_deps_file__V_331_331));
#line 286 "write_deps_file.m"
            }
#line 286 "write_deps_file.m"
            {
#line 286 "write_deps_file.m"
              parse_tree__write_deps_file__V_328_328 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_328_328, 0) = ((MR_Box) ((MR_String) "\044("));
#line 286 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_328_328, 1) = ((MR_Box) (parse_tree__write_deps_file__V_330_330));
#line 286 "write_deps_file.m"
            }
#line 285 "write_deps_file.m"
            {
#line 285 "write_deps_file.m"
              parse_tree__write_deps_file__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 0) = ((MR_Box) ((MR_String) ".fact_tables)\n\n"));
#line 285 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 1) = ((MR_Box) (parse_tree__write_deps_file__V_328_328));
#line 285 "write_deps_file.m"
            }
#line 285 "write_deps_file.m"
            {
#line 285 "write_deps_file.m"
              parse_tree__write_deps_file__V_325_325 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_325_325, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_34));
#line 285 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_325_325, 1) = ((MR_Box) (parse_tree__write_deps_file__V_326_326));
#line 285 "write_deps_file.m"
            }
#line 285 "write_deps_file.m"
            {
#line 285 "write_deps_file.m"
              parse_tree__write_deps_file__V_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 0) = ((MR_Box) ((MR_String) " \\\n\t\044("));
#line 285 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 1) = ((MR_Box) (parse_tree__write_deps_file__V_325_325));
#line 285 "write_deps_file.m"
            }
#line 284 "write_deps_file.m"
            {
#line 284 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_322_322);
            }
#line 283 "write_deps_file.m"
          }
#line 296 "write_deps_file.m"
        {
#line 296 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 325, &parse_tree__write_deps_file__UseOptFiles_83);
        }
#line 297 "write_deps_file.m"
        {
#line 297 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 323, &parse_tree__write_deps_file__Intermod_84);
        }
#line 299 "write_deps_file.m"
        {
#line 299 "write_deps_file.m"
          libs__globals__lookup_accumulating_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 643, &parse_tree__write_deps_file__IntermodDirs_85);
        }
#line 309 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Intermod_84 == (MR_Integer) 0))
#line 310 "write_deps_file.m"
          {
#line 310 "write_deps_file.m"
          }
#line 309 "write_deps_file.m"
        else
#line 306 "write_deps_file.m"
          {
#line 306 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_351_351;
#line 306 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_354_354;

#line 307 "write_deps_file.m"
            {
#line 307 "write_deps_file.m"
              parse_tree__write_deps_file__V_354_354 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_354_354, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_67));
#line 307 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_354_354, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 307 "write_deps_file.m"
            }
#line 307 "write_deps_file.m"
            {
#line 307 "write_deps_file.m"
              parse_tree__write_deps_file__V_351_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 307 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 1) = ((MR_Box) (parse_tree__write_deps_file__V_354_354));
#line 307 "write_deps_file.m"
            }
#line 307 "write_deps_file.m"
            {
#line 307 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_351_351);
            }
#line 308 "write_deps_file.m"
            {
#line 308 "write_deps_file.m"
              parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__AllDeps_52, (MR_String) ".mh", parse_tree__write_deps_file__DepStream_42);
            }
#line 306 "write_deps_file.m"
          }
#line 313 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Intermod_84 == (MR_Integer) 1);
#line 314 "write_deps_file.m"
        if (!(parse_tree__write_deps_file__succeeded))
#line 314 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseOptFiles_83 == (MR_Integer) 1);
#line 381 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 326 "write_deps_file.m"
          {
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOpt_86;
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__UseTransOpt_87;
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_360_360;
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_363_363;
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_364_364;
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_366_366;
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_367_367;
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_369_369;
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_370_370;
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_372_372;
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_373_373;
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_375_375;
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_376_376;
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_378_378;
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_379_379;
#line 326 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_381_381;

#line 325 "write_deps_file.m"
            {
#line 325 "write_deps_file.m"
              parse_tree__write_deps_file__V_381_381 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_381_381, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_69));
#line 325 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_381_381, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 325 "write_deps_file.m"
            }
#line 324 "write_deps_file.m"
            {
#line 324 "write_deps_file.m"
              parse_tree__write_deps_file__V_379_379 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_379_379, 0) = ((MR_Box) ((MR_String) " "));
#line 324 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_379_379, 1) = ((MR_Box) (parse_tree__write_deps_file__V_381_381));
#line 324 "write_deps_file.m"
            }
#line 324 "write_deps_file.m"
            {
#line 324 "write_deps_file.m"
              parse_tree__write_deps_file__V_378_378 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_378_378, 0) = ((MR_Box) (parse_tree__write_deps_file__ILDateFileName_68));
#line 324 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_378_378, 1) = ((MR_Box) (parse_tree__write_deps_file__V_379_379));
#line 324 "write_deps_file.m"
            }
#line 323 "write_deps_file.m"
            {
#line 323 "write_deps_file.m"
              parse_tree__write_deps_file__V_376_376 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_376_376, 0) = ((MR_Box) ((MR_String) " "));
#line 323 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_376_376, 1) = ((MR_Box) (parse_tree__write_deps_file__V_378_378));
#line 323 "write_deps_file.m"
            }
#line 323 "write_deps_file.m"
            {
#line 323 "write_deps_file.m"
              parse_tree__write_deps_file__V_375_375 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_375_375, 0) = ((MR_Box) (parse_tree__write_deps_file__PicAsmDateFileName_66));
#line 323 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_375_375, 1) = ((MR_Box) (parse_tree__write_deps_file__V_376_376));
#line 323 "write_deps_file.m"
            }
#line 322 "write_deps_file.m"
            {
#line 322 "write_deps_file.m"
              parse_tree__write_deps_file__V_373_373 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_373_373, 0) = ((MR_Box) ((MR_String) " "));
#line 322 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_373_373, 1) = ((MR_Box) (parse_tree__write_deps_file__V_375_375));
#line 322 "write_deps_file.m"
            }
#line 322 "write_deps_file.m"
            {
#line 322 "write_deps_file.m"
              parse_tree__write_deps_file__V_372_372 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_372_372, 0) = ((MR_Box) (parse_tree__write_deps_file__AsmDateFileName_65));
#line 322 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_372_372, 1) = ((MR_Box) (parse_tree__write_deps_file__V_373_373));
#line 322 "write_deps_file.m"
            }
#line 321 "write_deps_file.m"
            {
#line 321 "write_deps_file.m"
              parse_tree__write_deps_file__V_370_370 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_370_370, 0) = ((MR_Box) ((MR_String) " "));
#line 321 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_370_370, 1) = ((MR_Box) (parse_tree__write_deps_file__V_372_372));
#line 321 "write_deps_file.m"
            }
#line 321 "write_deps_file.m"
            {
#line 321 "write_deps_file.m"
              parse_tree__write_deps_file__V_369_369 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_369_369, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_64));
#line 321 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_369_369, 1) = ((MR_Box) (parse_tree__write_deps_file__V_370_370));
#line 321 "write_deps_file.m"
            }
#line 320 "write_deps_file.m"
            {
#line 320 "write_deps_file.m"
              parse_tree__write_deps_file__V_367_367 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_367_367, 0) = ((MR_Box) ((MR_String) " "));
#line 320 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_367_367, 1) = ((MR_Box) (parse_tree__write_deps_file__V_369_369));
#line 320 "write_deps_file.m"
            }
#line 320 "write_deps_file.m"
            {
#line 320 "write_deps_file.m"
              parse_tree__write_deps_file__V_366_366 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_366_366, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_62));
#line 320 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_366_366, 1) = ((MR_Box) (parse_tree__write_deps_file__V_367_367));
#line 320 "write_deps_file.m"
            }
#line 319 "write_deps_file.m"
            {
#line 319 "write_deps_file.m"
              parse_tree__write_deps_file__V_364_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_364_364, 0) = ((MR_Box) ((MR_String) " "));
#line 319 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_364_364, 1) = ((MR_Box) (parse_tree__write_deps_file__V_366_366));
#line 319 "write_deps_file.m"
            }
#line 319 "write_deps_file.m"
            {
#line 319 "write_deps_file.m"
              parse_tree__write_deps_file__V_363_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_36));
#line 319 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 1) = ((MR_Box) (parse_tree__write_deps_file__V_364_364));
#line 319 "write_deps_file.m"
            }
#line 318 "write_deps_file.m"
            {
#line 318 "write_deps_file.m"
              parse_tree__write_deps_file__V_360_360 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 318 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 1) = ((MR_Box) (parse_tree__write_deps_file__V_363_363));
#line 318 "write_deps_file.m"
            }
#line 317 "write_deps_file.m"
            {
#line 317 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_360_360);
            }
#line 338 "write_deps_file.m"
            {
#line 338 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 327, &parse_tree__write_deps_file__TransOpt_86);
            }
#line 340 "write_deps_file.m"
            {
#line 340 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 326, &parse_tree__write_deps_file__UseTransOpt_87);
            }
#line 344 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__TransOpt_86 == (MR_Integer) 1);
#line 345 "write_deps_file.m"
            if (!(parse_tree__write_deps_file__succeeded))
#line 345 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseTransOpt_87 == (MR_Integer) 1);
#line 370 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 348 "write_deps_file.m"
              {
#line 348 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__BuildOptFiles_88;
#line 348 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptDeps_89;
#line 348 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__TransOptDeps_90;
#line 348 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptInt0Deps_91;
#line 348 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_387_387;
#line 348 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_389_389;
#line 348 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_390_390;
#line 348 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_396_396;

#line 348 "write_deps_file.m"
                {
#line 348 "write_deps_file.m"
                  mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseTransOpt_87, &parse_tree__write_deps_file__BuildOptFiles_88);
                }
#line 350 "write_deps_file.m"
                {
#line 350 "write_deps_file.m"
                  parse_tree__write_deps_file__V_387_387 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_387_387, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 350 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_387_387, 1) = ((MR_Box) (parse_tree__write_deps_file__LongDeps_50));
#line 350 "write_deps_file.m"
                }
#line 349 "write_deps_file.m"
                {
#line 349 "write_deps_file.m"
                  parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__BuildOptFiles_88, parse_tree__write_deps_file__V_387_387, parse_tree__write_deps_file__IntermodDirs_85, &parse_tree__write_deps_file__OptDeps_89, &parse_tree__write_deps_file__TransOptDeps_90);
                }
#line 353 "write_deps_file.m"
                {
#line 353 "write_deps_file.m"
                  parse_tree__write_deps_file__V_390_390 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[3], parse_tree__write_deps_file__OptDeps_89);
                }
#line 353 "write_deps_file.m"
                {
#line 353 "write_deps_file.m"
                  parse_tree__write_deps_file__V_389_389 = mercury__list__condense_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__V_390_390);
                }
#line 352 "write_deps_file.m"
                {
#line 352 "write_deps_file.m"
                  parse_tree__write_deps_file__OptInt0Deps_91 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__V_389_389);
                }
#line 354 "write_deps_file.m"
                {
#line 354 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptDeps_89, (MR_String) ".opt", parse_tree__write_deps_file__DepStream_42);
                }
#line 356 "write_deps_file.m"
                {
#line 356 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptInt0Deps_91, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_42);
                }
#line 360 "write_deps_file.m"
                {
#line 360 "write_deps_file.m"
                  parse_tree__write_deps_file__V_396_396 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_396_396, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 360 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_396_396, 1) = ((MR_Box) (parse_tree__write_deps_file__V_366_366));
#line 360 "write_deps_file.m"
                }
#line 359 "write_deps_file.m"
                {
#line 359 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_396_396);
                }
#line 368 "write_deps_file.m"
                {
#line 368 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__TransOptDeps_90, (MR_String) ".trans_opt", parse_tree__write_deps_file__DepStream_42);
                }
#line 348 "write_deps_file.m"
              }
#line 370 "write_deps_file.m"
            else
#line 371 "write_deps_file.m"
              {
#line 371 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_420_420;
#line 371 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_423_423;
#line 371 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_424_424;
#line 371 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__BuildOptFiles_851;
#line 371 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptDeps_852;
#line 371 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptInt0Deps_853;

#line 371 "write_deps_file.m"
                {
#line 371 "write_deps_file.m"
                  mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseOptFiles_83, &parse_tree__write_deps_file__BuildOptFiles_851);
                }
#line 372 "write_deps_file.m"
                {
#line 372 "write_deps_file.m"
                  parse_tree__write_deps_file__V_420_420 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_420_420, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 372 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_420_420, 1) = ((MR_Box) (parse_tree__write_deps_file__LongDeps_50));
#line 372 "write_deps_file.m"
                }
#line 372 "write_deps_file.m"
                {
#line 372 "write_deps_file.m"
                  parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__BuildOptFiles_851, parse_tree__write_deps_file__V_420_420, parse_tree__write_deps_file__IntermodDirs_85, (MR_String) ".opt", &parse_tree__write_deps_file__OptDeps_852);
                }
#line 375 "write_deps_file.m"
                {
#line 375 "write_deps_file.m"
                  parse_tree__write_deps_file__V_424_424 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[4], parse_tree__write_deps_file__OptDeps_852);
                }
#line 375 "write_deps_file.m"
                {
#line 375 "write_deps_file.m"
                  parse_tree__write_deps_file__V_423_423 = mercury__list__condense_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__V_424_424);
                }
#line 374 "write_deps_file.m"
                {
#line 374 "write_deps_file.m"
                  parse_tree__write_deps_file__OptInt0Deps_853 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__V_423_423);
                }
#line 376 "write_deps_file.m"
                {
#line 376 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptDeps_852, (MR_String) ".opt", parse_tree__write_deps_file__DepStream_42);
                }
#line 378 "write_deps_file.m"
                {
#line 378 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptInt0Deps_853, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_42);
                }
#line 371 "write_deps_file.m"
              }
#line 326 "write_deps_file.m"
          }
#line 381 "write_deps_file.m"
        else
#line 378 "write_deps_file.m"
          {
#line 378 "write_deps_file.m"
          }
#line 385 "write_deps_file.m"
        {
#line 385 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 248, &parse_tree__write_deps_file__HighLevelCode_92);
        }
#line 386 "write_deps_file.m"
        {
#line 386 "write_deps_file.m"
          libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_7, &parse_tree__write_deps_file__CompilationTarget_93);
        }
#line 388 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__HighLevelCode_92 == (MR_Integer) 1);
#line 388 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 389 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__CompilationTarget_93 == (MR_Integer) 0);
#line 402 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 400 "write_deps_file.m"
          {
#line 400 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_431_431;
#line 400 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_434_434;
#line 400 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_435_435;
#line 400 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_437_437;

#line 399 "write_deps_file.m"
            {
#line 399 "write_deps_file.m"
              parse_tree__write_deps_file__V_437_437 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_437_437, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_67));
#line 399 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_437_437, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])));
#line 399 "write_deps_file.m"
            }
#line 398 "write_deps_file.m"
            {
#line 398 "write_deps_file.m"
              parse_tree__write_deps_file__V_435_435 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_435_435, 0) = ((MR_Box) ((MR_String) " "));
#line 398 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_435_435, 1) = ((MR_Box) (parse_tree__write_deps_file__V_437_437));
#line 398 "write_deps_file.m"
            }
#line 398 "write_deps_file.m"
            {
#line 398 "write_deps_file.m"
              parse_tree__write_deps_file__V_434_434 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_434_434, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_70));
#line 398 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_434_434, 1) = ((MR_Box) (parse_tree__write_deps_file__V_435_435));
#line 398 "write_deps_file.m"
            }
#line 397 "write_deps_file.m"
            {
#line 397 "write_deps_file.m"
              parse_tree__write_deps_file__V_431_431 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_431_431, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 397 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_431_431, 1) = ((MR_Box) (parse_tree__write_deps_file__V_434_434));
#line 397 "write_deps_file.m"
            }
#line 396 "write_deps_file.m"
            {
#line 396 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_431_431);
            }
#line 401 "write_deps_file.m"
            {
#line 401 "write_deps_file.m"
              parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__AllDeps_52, (MR_String) ".mih", parse_tree__write_deps_file__DepStream_42);
            }
#line 400 "write_deps_file.m"
          }
#line 402 "write_deps_file.m"
        else
#line 401 "write_deps_file.m"
          {
#line 401 "write_deps_file.m"
          }
#line 415 "write_deps_file.m"
        {
#line 415 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".c", (MR_Integer) 1, &parse_tree__write_deps_file__CFileName_94);
        }
#line 417 "write_deps_file.m"
        {
#line 417 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".mh", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName_95);
        }
#line 419 "write_deps_file.m"
        {
#line 419 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".mih", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName2_96);
        }
#line 423 "write_deps_file.m"
        {
#line 423 "write_deps_file.m"
          parse_tree__write_deps_file__V_461_461 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_461_461, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_94));
#line 423 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_461_461, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])));
#line 423 "write_deps_file.m"
        }
#line 423 "write_deps_file.m"
        {
#line 423 "write_deps_file.m"
          parse_tree__write_deps_file__V_459_459 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_459_459, 0) = ((MR_Box) ((MR_String) " : "));
#line 423 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_459_459, 1) = ((MR_Box) (parse_tree__write_deps_file__V_461_461));
#line 423 "write_deps_file.m"
        }
#line 423 "write_deps_file.m"
        {
#line 423 "write_deps_file.m"
          parse_tree__write_deps_file__V_458_458 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_458_458, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName2_96));
#line 423 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_458_458, 1) = ((MR_Box) (parse_tree__write_deps_file__V_459_459));
#line 423 "write_deps_file.m"
        }
#line 423 "write_deps_file.m"
        {
#line 423 "write_deps_file.m"
          parse_tree__write_deps_file__V_456_456 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_456_456, 0) = ((MR_Box) ((MR_String) " "));
#line 423 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_456_456, 1) = ((MR_Box) (parse_tree__write_deps_file__V_458_458));
#line 423 "write_deps_file.m"
        }
#line 423 "write_deps_file.m"
        {
#line 423 "write_deps_file.m"
          parse_tree__write_deps_file__V_455_455 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_455_455, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName_95));
#line 423 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_455_455, 1) = ((MR_Box) (parse_tree__write_deps_file__V_456_456));
#line 423 "write_deps_file.m"
        }
#line 422 "write_deps_file.m"
        {
#line 422 "write_deps_file.m"
          parse_tree__write_deps_file__V_452_452 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_452_452, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 422 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_452_452, 1) = ((MR_Box) (parse_tree__write_deps_file__V_455_455));
#line 422 "write_deps_file.m"
        }
#line 421 "write_deps_file.m"
        {
#line 421 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_452_452);
        }
#line 429 "write_deps_file.m"
        {
#line 429 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".il", (MR_Integer) 1, &parse_tree__write_deps_file__ILFileName_97);
        }
#line 431 "write_deps_file.m"
        {
#line 431 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".java", (MR_Integer) 1, &parse_tree__write_deps_file__JavaFileName_98);
        }
#line 434 "write_deps_file.m"
        {
#line 434 "write_deps_file.m"
          parse_tree__write_deps_file__V_471_471 = make__make_module_dep_file_extension_0_f_0();
        }
#line 433 "write_deps_file.m"
        {
#line 433 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__V_471_471, (MR_Integer) 1, &parse_tree__write_deps_file__ModuleDepFileName_99);
        }
#line 444 "write_deps_file.m"
        {
#line 444 "write_deps_file.m"
          parse_tree__write_deps_file__V_500_500 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_500_500, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_94));
#line 444 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_500_500, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12])));
#line 444 "write_deps_file.m"
        }
#line 444 "write_deps_file.m"
        {
#line 444 "write_deps_file.m"
          parse_tree__write_deps_file__V_498_498 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_498_498, 0) = ((MR_Box) ((MR_String) " : "));
#line 444 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_498_498, 1) = ((MR_Box) (parse_tree__write_deps_file__V_500_500));
#line 444 "write_deps_file.m"
        }
#line 444 "write_deps_file.m"
        {
#line 444 "write_deps_file.m"
          parse_tree__write_deps_file__V_497_497 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_497_497, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_99));
#line 444 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_497_497, 1) = ((MR_Box) (parse_tree__write_deps_file__V_498_498));
#line 444 "write_deps_file.m"
        }
#line 443 "write_deps_file.m"
        {
#line 443 "write_deps_file.m"
          parse_tree__write_deps_file__V_495_495 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_495_495, 0) = ((MR_Box) ((MR_String) " else\n"));
#line 443 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_495_495, 1) = ((MR_Box) (parse_tree__write_deps_file__V_497_497));
#line 443 "write_deps_file.m"
        }
#line 442 "write_deps_file.m"
        {
#line 442 "write_deps_file.m"
          parse_tree__write_deps_file__V_493_493 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_493_493, 0) = ((MR_Box) ((MR_String) "\n"));
#line 442 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_493_493, 1) = ((MR_Box) (parse_tree__write_deps_file__V_495_495));
#line 442 "write_deps_file.m"
        }
#line 442 "write_deps_file.m"
        {
#line 442 "write_deps_file.m"
          parse_tree__write_deps_file__V_492_492 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_492_492, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaFileName_98));
#line 442 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_492_492, 1) = ((MR_Box) (parse_tree__write_deps_file__V_493_493));
#line 442 "write_deps_file.m"
        }
#line 442 "write_deps_file.m"
        {
#line 442 "write_deps_file.m"
          parse_tree__write_deps_file__V_490_490 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_490_490, 0) = ((MR_Box) ((MR_String) " : "));
#line 442 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_490_490, 1) = ((MR_Box) (parse_tree__write_deps_file__V_492_492));
#line 442 "write_deps_file.m"
        }
#line 442 "write_deps_file.m"
        {
#line 442 "write_deps_file.m"
          parse_tree__write_deps_file__V_489_489 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_489_489, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_99));
#line 442 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_489_489, 1) = ((MR_Box) (parse_tree__write_deps_file__V_490_490));
#line 442 "write_deps_file.m"
        }
#line 441 "write_deps_file.m"
        {
#line 441 "write_deps_file.m"
          parse_tree__write_deps_file__V_487_487 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_487_487, 0) = ((MR_Box) ((MR_String) " ifeq (\044(findstring java,\044(GRADE)),java)\n"));
#line 441 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_487_487, 1) = ((MR_Box) (parse_tree__write_deps_file__V_489_489));
#line 441 "write_deps_file.m"
        }
#line 440 "write_deps_file.m"
        {
#line 440 "write_deps_file.m"
          parse_tree__write_deps_file__V_485_485 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_485_485, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 440 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_485_485, 1) = ((MR_Box) (parse_tree__write_deps_file__V_487_487));
#line 440 "write_deps_file.m"
        }
#line 439 "write_deps_file.m"
        {
#line 439 "write_deps_file.m"
          parse_tree__write_deps_file__V_483_483 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_483_483, 0) = ((MR_Box) ((MR_String) "\n"));
#line 439 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_483_483, 1) = ((MR_Box) (parse_tree__write_deps_file__V_485_485));
#line 439 "write_deps_file.m"
        }
#line 439 "write_deps_file.m"
        {
#line 439 "write_deps_file.m"
          parse_tree__write_deps_file__V_482_482 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_482_482, 0) = ((MR_Box) (parse_tree__write_deps_file__ILFileName_97));
#line 439 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_482_482, 1) = ((MR_Box) (parse_tree__write_deps_file__V_483_483));
#line 439 "write_deps_file.m"
        }
#line 439 "write_deps_file.m"
        {
#line 439 "write_deps_file.m"
          parse_tree__write_deps_file__V_480_480 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_480_480, 0) = ((MR_Box) ((MR_String) " : "));
#line 439 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_480_480, 1) = ((MR_Box) (parse_tree__write_deps_file__V_482_482));
#line 439 "write_deps_file.m"
        }
#line 439 "write_deps_file.m"
        {
#line 439 "write_deps_file.m"
          parse_tree__write_deps_file__V_479_479 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_479_479, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_99));
#line 439 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_479_479, 1) = ((MR_Box) (parse_tree__write_deps_file__V_480_480));
#line 439 "write_deps_file.m"
        }
#line 438 "write_deps_file.m"
        {
#line 438 "write_deps_file.m"
          parse_tree__write_deps_file__V_477_477 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_477_477, 0) = ((MR_Box) ((MR_String) "ifeq (\044(findstring il,\044(GRADE)),il)\n"));
#line 438 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_477_477, 1) = ((MR_Box) (parse_tree__write_deps_file__V_479_479));
#line 438 "write_deps_file.m"
        }
#line 437 "write_deps_file.m"
        {
#line 437 "write_deps_file.m"
          parse_tree__write_deps_file__V_474_474 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_474_474, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 437 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_474_474, 1) = ((MR_Box) (parse_tree__write_deps_file__V_477_477));
#line 437 "write_deps_file.m"
        }
#line 436 "write_deps_file.m"
        {
#line 436 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_474_474);
        }
#line 462 "write_deps_file.m"
        {
#line 462 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date", (MR_Integer) 1, &parse_tree__write_deps_file__DateFileName_100);
        }
#line 464 "write_deps_file.m"
        {
#line 464 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date0", (MR_Integer) 1, &parse_tree__write_deps_file__Date0FileName_101);
        }
#line 468 "write_deps_file.m"
        {
#line 468 "write_deps_file.m"
          parse_tree__write_deps_file__V_520_520 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_520_520, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_101));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_520_520, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 468 "write_deps_file.m"
        }
#line 467 "write_deps_file.m"
        {
#line 467 "write_deps_file.m"
          parse_tree__write_deps_file__V_518_518 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_518_518, 0) = ((MR_Box) ((MR_String) " "));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_518_518, 1) = ((MR_Box) (parse_tree__write_deps_file__V_520_520));
#line 467 "write_deps_file.m"
        }
#line 467 "write_deps_file.m"
        {
#line 467 "write_deps_file.m"
          parse_tree__write_deps_file__V_517_517 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_517_517, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_100));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_517_517, 1) = ((MR_Box) (parse_tree__write_deps_file__V_518_518));
#line 467 "write_deps_file.m"
        }
#line 467 "write_deps_file.m"
        {
#line 467 "write_deps_file.m"
          parse_tree__write_deps_file__V_514_514 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_514_514, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_514_514, 1) = ((MR_Box) (parse_tree__write_deps_file__V_517_517));
#line 467 "write_deps_file.m"
        }
#line 466 "write_deps_file.m"
        {
#line 466 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_514_514);
        }
#line 469 "write_deps_file.m"
        {
#line 469 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_15, (MR_String) ".date", parse_tree__write_deps_file__DepStream_42);
        }
#line 470 "write_deps_file.m"
        {
#line 470 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_273_273);
        }
#line 471 "write_deps_file.m"
        {
#line 471 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_15, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_42);
        }
#line 472 "write_deps_file.m"
        {
#line 472 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__LongDeps_50, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_42);
        }
#line 473 "write_deps_file.m"
        {
#line 473 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ShortDeps_51, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_42);
        }
#line 475 "write_deps_file.m"
        {
#line 475 "write_deps_file.m"
          parse_tree__write_deps_file__V_535_535 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_535_535, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 475 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_535_535, 1) = ((MR_Box) (parse_tree__write_deps_file__V_520_520));
#line 475 "write_deps_file.m"
        }
#line 475 "write_deps_file.m"
        {
#line 475 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_535_535);
        }
#line 476 "write_deps_file.m"
        {
#line 476 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_15, (MR_String) ".date0", parse_tree__write_deps_file__DepStream_42);
        }
#line 477 "write_deps_file.m"
        {
#line 477 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_273_273);
        }
#line 478 "write_deps_file.m"
        {
#line 478 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__LongDeps_50, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_42);
        }
#line 479 "write_deps_file.m"
        {
#line 479 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ShortDeps_51, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_42);
        }
#line 480 "write_deps_file.m"
        {
#line 480 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_42, (MR_String) "\n\n");
        }
#line 486 "write_deps_file.m"
        {
#line 486 "write_deps_file.m"
          parse_tree__source_file_map__have_source_file_map_3_p_0(&parse_tree__write_deps_file__HaveMap_102);
        }
#line 490 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HaveMap_102 == (MR_Integer) 0))
#line 492 "write_deps_file.m"
          parse_tree__write_deps_file__ModuleArg_103 = parse_tree__write_deps_file__SourceFileName_12;
#line 490 "write_deps_file.m"
        else
#line 489 "write_deps_file.m"
          {
#line 489 "write_deps_file.m"
            parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__SourceFileModuleName_13, &parse_tree__write_deps_file__ModuleArg_103);
          }
#line 495 "write_deps_file.m"
        {
#line 495 "write_deps_file.m"
          libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_7, &parse_tree__write_deps_file__Target_104);
        }
#line 496 "write_deps_file.m"
        {
#line 496 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 155, &parse_tree__write_deps_file__SignAssembly_105);
        }
#line 504 "write_deps_file.m"
        {
#line 504 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__DllFileName_106);
        }
#line 506 "write_deps_file.m"
        {
#line 506 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".class", (MR_Integer) 1, &parse_tree__write_deps_file__ClassFileName_107);
        }
#line 508 "write_deps_file.m"
        {
#line 508 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".beam", (MR_Integer) 1, &parse_tree__write_deps_file__BeamFileName_108);
        }
#line 510 "write_deps_file.m"
        {
#line 510 "write_deps_file.m"
          parse_tree__write_deps_file__SubModules_109 = parse_tree__write_deps_file__submodules_2_f_0(parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__AllDeps_52);
        }
#line 512 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Target_104 == (MR_Integer) 1);
#line 512 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 512 "write_deps_file.m"
          {
#line 513 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__SubModules_109)) == (MR_mktag((MR_Integer) 1)));
#line 513 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 513 "write_deps_file.m"
              {
#line 513 "write_deps_file.m"
                parse_tree__write_deps_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__SubModules_109, (MR_Integer) 0)));
#line 513 "write_deps_file.m"
                parse_tree__write_deps_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__SubModules_109, (MR_Integer) 1)));
#line 513 "write_deps_file.m"
              }
#line 512 "write_deps_file.m"
          }
#line 519 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 515 "write_deps_file.m"
          {
#line 515 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_564_564;

#line 515 "write_deps_file.m"
            {
#line 515 "write_deps_file.m"
              parse_tree__write_deps_file__V_564_564 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_564_564, 0) = ((MR_Box) (parse_tree__write_deps_file__DllFileName_106));
#line 515 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_564_564, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 515 "write_deps_file.m"
            }
#line 515 "write_deps_file.m"
            {
#line 515 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_564_564);
            }
#line 516 "write_deps_file.m"
            {
#line 516 "write_deps_file.m"
              parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SubModules_109, (MR_String) "", parse_tree__write_deps_file__DepStream_42);
            }
#line 518 "write_deps_file.m"
            {
#line 518 "write_deps_file.m"
              mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_42);
            }
#line 515 "write_deps_file.m"
          }
#line 519 "write_deps_file.m"
        else
#line 518 "write_deps_file.m"
          {
#line 518 "write_deps_file.m"
          }
#line 526 "write_deps_file.m"
        if ((parse_tree__write_deps_file__ContainsForeignCode_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 527 "write_deps_file.m"
          {
#line 527 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImports1_114;
#line 527 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_572_572;
#line 528 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_115_115;
#line 528 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_116_116;

#line 528 "write_deps_file.m"
            {
#line 528 "write_deps_file.m"
              parse_tree__write_deps_file__V_572_572 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_deps_file__Items_27);
            }
#line 528 "write_deps_file.m"
            {
#line 528 "write_deps_file.m"
              parse_tree__prog_item__get_item_list_foreign_code_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__V_572_572, &parse_tree__write_deps_file__LangSet_112, &parse_tree__write_deps_file__ForeignImports1_114, &parse_tree__write_deps_file__V_115_115, &parse_tree__write_deps_file__V_116_116);
            }
#line 536 "write_deps_file.m"
            if ((parse_tree__write_deps_file__ForeignImports0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImports_113 = parse_tree__write_deps_file__ForeignImports1_114;
#line 536 "write_deps_file.m"
            else
#line 538 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImports_113 = parse_tree__write_deps_file__ForeignImports0_24;
#line 527 "write_deps_file.m"
          }
#line 526 "write_deps_file.m"
        else
#line 526 "write_deps_file.m"
          if ((parse_tree__write_deps_file__ContainsForeignCode_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 541 "write_deps_file.m"
            {
#line 542 "write_deps_file.m"
              {
#line 542 "write_deps_file.m"
                mercury__set__init_1_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, &parse_tree__write_deps_file__LangSet_112);
              }
#line 543 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImports_113 = parse_tree__write_deps_file__ForeignImports0_24;
#line 541 "write_deps_file.m"
            }
#line 526 "write_deps_file.m"
          else
#line 524 "write_deps_file.m"
            {
#line 524 "write_deps_file.m"
              parse_tree__write_deps_file__LangSet_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ContainsForeignCode_23, (MR_Integer) 0)));
#line 525 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImports_113 = parse_tree__write_deps_file__ForeignImports0_24;
#line 524 "write_deps_file.m"
            }
#line 549 "write_deps_file.m"
        {
#line 549 "write_deps_file.m"
          parse_tree__write_deps_file__V_573_573 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 549 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_573_573, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
#line 549 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_573_573, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_4));
#line 549 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_573_573, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 549 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_573_573, 3) = ((MR_Box) (parse_tree__write_deps_file__SourceFileModuleName_13));
#line 549 "write_deps_file.m"
        }
#line 549 "write_deps_file.m"
        {
#line 549 "write_deps_file.m"
          mercury__list__filter_map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__TypeCtorInfo_870_870, parse_tree__write_deps_file__V_573_573, parse_tree__write_deps_file__ForeignImports_113, &parse_tree__write_deps_file__ForeignImportedModules_121);
        }
#line 560 "write_deps_file.m"
        if ((parse_tree__write_deps_file__ForeignImportedModules_121 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "write_deps_file.m"
          {
#line 559 "write_deps_file.m"
          }
#line 560 "write_deps_file.m"
        else
#line 561 "write_deps_file.m"
          {
#line 561 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImportTargets_124;
#line 561 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ForeignImportExt_125;
#line 561 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__WriteForeignImportTarget_126;
#line 597 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_595_595;

#line 566 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Target_104 == (MR_Integer) 0))
#line 580 "write_deps_file.m"
              {
#line 580 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_577_577;

#line 585 "write_deps_file.m"
                {
#line 585 "write_deps_file.m"
                  parse_tree__write_deps_file__V_577_577 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_577_577, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_70));
#line 585 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_577_577, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "write_deps_file.m"
                }
#line 585 "write_deps_file.m"
                {
#line 585 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportTargets_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_67));
#line 585 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 1) = ((MR_Box) (parse_tree__write_deps_file__V_577_577));
#line 585 "write_deps_file.m"
                }
#line 586 "write_deps_file.m"
                parse_tree__write_deps_file__ForeignImportExt_125 = (MR_String) ".mh";
#line 580 "write_deps_file.m"
              }
#line 566 "write_deps_file.m"
            else
#line 566 "write_deps_file.m"
              if ((parse_tree__write_deps_file__Target_104 == (MR_Integer) 2))
#line 567 "write_deps_file.m"
                {
#line 569 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportTargets_124 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 570 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_125 = (MR_String) ".cs";
#line 567 "write_deps_file.m"
                }
#line 566 "write_deps_file.m"
              else
#line 566 "write_deps_file.m"
                if ((parse_tree__write_deps_file__Target_104 == (MR_Integer) 4))
#line 576 "write_deps_file.m"
                  {
#line 577 "write_deps_file.m"
                    {
#line 577 "write_deps_file.m"
                      parse_tree__write_deps_file__ForeignImportTargets_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 0) = ((MR_Box) (parse_tree__write_deps_file__BeamFileName_108));
#line 577 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 577 "write_deps_file.m"
                    }
#line 578 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportExt_125 = (MR_String) ".hrl";
#line 576 "write_deps_file.m"
                  }
#line 566 "write_deps_file.m"
                else
#line 566 "write_deps_file.m"
                  if ((parse_tree__write_deps_file__Target_104 == (MR_Integer) 1))
#line 563 "write_deps_file.m"
                    {
#line 564 "write_deps_file.m"
                      {
#line 564 "write_deps_file.m"
                        parse_tree__write_deps_file__ForeignImportTargets_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 0) = ((MR_Box) (parse_tree__write_deps_file__DllFileName_106));
#line 564 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 564 "write_deps_file.m"
                      }
#line 565 "write_deps_file.m"
                      parse_tree__write_deps_file__ForeignImportExt_125 = (MR_String) ".dll";
#line 563 "write_deps_file.m"
                    }
#line 566 "write_deps_file.m"
                  else
#line 572 "write_deps_file.m"
                    {
#line 573 "write_deps_file.m"
                      {
#line 573 "write_deps_file.m"
                        parse_tree__write_deps_file__ForeignImportTargets_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 0) = ((MR_Box) (parse_tree__write_deps_file__ClassFileName_107));
#line 573 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "write_deps_file.m"
                      }
#line 574 "write_deps_file.m"
                      parse_tree__write_deps_file__ForeignImportExt_125 = (MR_String) ".java";
#line 572 "write_deps_file.m"
                    }
#line 588 "write_deps_file.m"
            {
#line 588 "write_deps_file.m"
              parse_tree__write_deps_file__WriteForeignImportTarget_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 588 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_126, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[1]));
#line 588 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_126, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_5));
#line 588 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_126, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 588 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_126, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 588 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_126, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_42));
#line 588 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_126, 5) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportedModules_121));
#line 588 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_126, 6) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportExt_125));
#line 588 "write_deps_file.m"
            }
#line 597 "write_deps_file.m"
            {
#line 597 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_871_871, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__WriteForeignImportTarget_126, parse_tree__write_deps_file__ForeignImportTargets_124, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_595_595);
            }
#line 561 "write_deps_file.m"
          }
#line 601 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Target_104 == (MR_Integer) 1);
#line 601 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 601 "write_deps_file.m"
          {
#line 15929 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_883_883 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 602 "write_deps_file.m"
            {
#line 602 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = mercury__set__empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_883_883, parse_tree__write_deps_file__LangSet_112);
            }
#line 602 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 601 "write_deps_file.m"
          }
#line 607 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 604 "write_deps_file.m"
          {
#line 604 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_884_884 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 604 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Langs_128;
#line 604 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_596_596;
#line 605 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_597_597;

#line 604 "write_deps_file.m"
            {
#line 604 "write_deps_file.m"
              parse_tree__write_deps_file__Langs_128 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_884_884, parse_tree__write_deps_file__LangSet_112);
            }
#line 605 "write_deps_file.m"
            {
#line 605 "write_deps_file.m"
              parse_tree__write_deps_file__V_596_596 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 605 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
#line 605 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_6));
#line 605 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 605 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 605 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_42));
#line 605 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 605 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 6) = ((MR_Box) (parse_tree__write_deps_file__AllDeps_52));
#line 605 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_596_596, 7) = ((MR_Box) (parse_tree__write_deps_file__ForeignImports_113));
#line 605 "write_deps_file.m"
            }
#line 605 "write_deps_file.m"
            {
#line 605 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_884_884, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_596_596, parse_tree__write_deps_file__Langs_128, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_597_597);
            }
#line 604 "write_deps_file.m"
          }
#line 607 "write_deps_file.m"
        else
#line 605 "write_deps_file.m"
          {
#line 605 "write_deps_file.m"
          }
#line 617 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Target_104 == (MR_Integer) 1);
#line 617 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 618 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__SignAssembly_105 == (MR_Integer) 1);
#line 628 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 620 "write_deps_file.m"
          {
#line 620 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ModuleNameString_129;
#line 620 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__IlFileName_130;
#line 620 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_601_601;
#line 620 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_604_604;
#line 620 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_605_605;
#line 620 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_607_607;

#line 620 "write_deps_file.m"
            {
#line 620 "write_deps_file.m"
              parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_14, &parse_tree__write_deps_file__ModuleNameString_129);
            }
#line 621 "write_deps_file.m"
            {
#line 621 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".il", (MR_Integer) 1, &parse_tree__write_deps_file__IlFileName_130);
            }
#line 627 "write_deps_file.m"
            {
#line 627 "write_deps_file.m"
              parse_tree__write_deps_file__V_607_607 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_607_607, 0) = ((MR_Box) (parse_tree__write_deps_file__IlFileName_130));
#line 627 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_607_607, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])));
#line 627 "write_deps_file.m"
            }
#line 626 "write_deps_file.m"
            {
#line 626 "write_deps_file.m"
              parse_tree__write_deps_file__V_605_605 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_605_605, 0) = ((MR_Box) ((MR_String) " = /keyf=mercury.sn\n"));
#line 626 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_605_605, 1) = ((MR_Box) (parse_tree__write_deps_file__V_607_607));
#line 626 "write_deps_file.m"
            }
#line 625 "write_deps_file.m"
            {
#line 625 "write_deps_file.m"
              parse_tree__write_deps_file__V_604_604 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_604_604, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleNameString_129));
#line 625 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_604_604, 1) = ((MR_Box) (parse_tree__write_deps_file__V_605_605));
#line 625 "write_deps_file.m"
            }
#line 625 "write_deps_file.m"
            {
#line 625 "write_deps_file.m"
              parse_tree__write_deps_file__V_601_601 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_601_601, 0) = ((MR_Box) ((MR_String) "ILASM_KEYFLAG-"));
#line 625 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_601_601, 1) = ((MR_Box) (parse_tree__write_deps_file__V_604_604));
#line 625 "write_deps_file.m"
            }
#line 624 "write_deps_file.m"
            {
#line 624 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_601_601);
            }
#line 620 "write_deps_file.m"
          }
#line 628 "write_deps_file.m"
        else
#line 624 "write_deps_file.m"
          {
#line 624 "write_deps_file.m"
          }
#line 632 "write_deps_file.m"
        {
#line 632 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_deps_file__IntFileName_131);
        }
#line 634 "write_deps_file.m"
        {
#line 634 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int2", (MR_Integer) 1, &parse_tree__write_deps_file__Int2FileName_132);
        }
#line 636 "write_deps_file.m"
        {
#line 636 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int3", (MR_Integer) 1, &parse_tree__write_deps_file__Int3FileName_133);
        }
#line 638 "write_deps_file.m"
        {
#line 638 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptFileName_134);
        }
#line 640 "write_deps_file.m"
        {
#line 640 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptFileName_135);
        }
#line 642 "write_deps_file.m"
        {
#line 642 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date3", (MR_Integer) 1, &parse_tree__write_deps_file__Date3FileName_136);
        }
#line 673 "write_deps_file.m"
        {
#line 673 "write_deps_file.m"
          parse_tree__write_deps_file__V_675_675 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_675_675, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_36));
#line 673 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_675_675, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])));
#line 673 "write_deps_file.m"
        }
#line 673 "write_deps_file.m"
        {
#line 673 "write_deps_file.m"
          parse_tree__write_deps_file__V_673_673 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_673_673, 0) = ((MR_Box) ((MR_String) " : "));
#line 673 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_673_673, 1) = ((MR_Box) (parse_tree__write_deps_file__V_675_675));
#line 673 "write_deps_file.m"
        }
#line 673 "write_deps_file.m"
        {
#line 673 "write_deps_file.m"
          parse_tree__write_deps_file__V_672_672 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_672_672, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptFileName_135));
#line 673 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_672_672, 1) = ((MR_Box) (parse_tree__write_deps_file__V_673_673));
#line 673 "write_deps_file.m"
        }
#line 672 "write_deps_file.m"
        {
#line 672 "write_deps_file.m"
          parse_tree__write_deps_file__V_670_670 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_670_670, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 672 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_670_670, 1) = ((MR_Box) (parse_tree__write_deps_file__V_672_672));
#line 672 "write_deps_file.m"
        }
#line 671 "write_deps_file.m"
        {
#line 671 "write_deps_file.m"
          parse_tree__write_deps_file__V_668_668 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_668_668, 0) = ((MR_Box) ((MR_String) "\n"));
#line 671 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_668_668, 1) = ((MR_Box) (parse_tree__write_deps_file__V_670_670));
#line 671 "write_deps_file.m"
        }
#line 671 "write_deps_file.m"
        {
#line 671 "write_deps_file.m"
          parse_tree__write_deps_file__V_667_667 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_667_667, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_63));
#line 671 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_667_667, 1) = ((MR_Box) (parse_tree__write_deps_file__V_668_668));
#line 671 "write_deps_file.m"
        }
#line 671 "write_deps_file.m"
        {
#line 671 "write_deps_file.m"
          parse_tree__write_deps_file__V_665_665 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_665_665, 0) = ((MR_Box) ((MR_String) " : "));
#line 671 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_665_665, 1) = ((MR_Box) (parse_tree__write_deps_file__V_667_667));
#line 671 "write_deps_file.m"
        }
#line 671 "write_deps_file.m"
        {
#line 671 "write_deps_file.m"
          parse_tree__write_deps_file__V_664_664 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_664_664, 0) = ((MR_Box) (parse_tree__write_deps_file__OptFileName_134));
#line 671 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_664_664, 1) = ((MR_Box) (parse_tree__write_deps_file__V_665_665));
#line 671 "write_deps_file.m"
        }
#line 670 "write_deps_file.m"
        {
#line 670 "write_deps_file.m"
          parse_tree__write_deps_file__V_662_662 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_662_662, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 670 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_662_662, 1) = ((MR_Box) (parse_tree__write_deps_file__V_664_664));
#line 670 "write_deps_file.m"
        }
#line 669 "write_deps_file.m"
        {
#line 669 "write_deps_file.m"
          parse_tree__write_deps_file__V_660_660 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_660_660, 0) = ((MR_Box) ((MR_String) "\n"));
#line 669 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_660_660, 1) = ((MR_Box) (parse_tree__write_deps_file__V_662_662));
#line 669 "write_deps_file.m"
        }
#line 669 "write_deps_file.m"
        {
#line 669 "write_deps_file.m"
          parse_tree__write_deps_file__V_659_659 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_659_659, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_136));
#line 669 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_659_659, 1) = ((MR_Box) (parse_tree__write_deps_file__V_660_660));
#line 669 "write_deps_file.m"
        }
#line 669 "write_deps_file.m"
        {
#line 669 "write_deps_file.m"
          parse_tree__write_deps_file__V_657_657 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_657_657, 0) = ((MR_Box) ((MR_String) " : "));
#line 669 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_657_657, 1) = ((MR_Box) (parse_tree__write_deps_file__V_659_659));
#line 669 "write_deps_file.m"
        }
#line 669 "write_deps_file.m"
        {
#line 669 "write_deps_file.m"
          parse_tree__write_deps_file__V_656_656 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_656_656, 0) = ((MR_Box) (parse_tree__write_deps_file__Int3FileName_133));
#line 669 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_656_656, 1) = ((MR_Box) (parse_tree__write_deps_file__V_657_657));
#line 669 "write_deps_file.m"
        }
#line 668 "write_deps_file.m"
        {
#line 668 "write_deps_file.m"
          parse_tree__write_deps_file__V_654_654 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_654_654, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_654_654, 1) = ((MR_Box) (parse_tree__write_deps_file__V_656_656));
#line 668 "write_deps_file.m"
        }
#line 667 "write_deps_file.m"
        {
#line 667 "write_deps_file.m"
          parse_tree__write_deps_file__V_652_652 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_652_652, 0) = ((MR_Box) ((MR_String) "\n"));
#line 667 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_652_652, 1) = ((MR_Box) (parse_tree__write_deps_file__V_654_654));
#line 667 "write_deps_file.m"
        }
#line 667 "write_deps_file.m"
        {
#line 667 "write_deps_file.m"
          parse_tree__write_deps_file__V_651_651 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_651_651, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_100));
#line 667 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_651_651, 1) = ((MR_Box) (parse_tree__write_deps_file__V_652_652));
#line 667 "write_deps_file.m"
        }
#line 667 "write_deps_file.m"
        {
#line 667 "write_deps_file.m"
          parse_tree__write_deps_file__V_649_649 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_649_649, 0) = ((MR_Box) ((MR_String) " : "));
#line 667 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_649_649, 1) = ((MR_Box) (parse_tree__write_deps_file__V_651_651));
#line 667 "write_deps_file.m"
        }
#line 667 "write_deps_file.m"
        {
#line 667 "write_deps_file.m"
          parse_tree__write_deps_file__V_648_648 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_648_648, 0) = ((MR_Box) (parse_tree__write_deps_file__Int2FileName_132));
#line 667 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_648_648, 1) = ((MR_Box) (parse_tree__write_deps_file__V_649_649));
#line 667 "write_deps_file.m"
        }
#line 666 "write_deps_file.m"
        {
#line 666 "write_deps_file.m"
          parse_tree__write_deps_file__V_646_646 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_646_646, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_646_646, 1) = ((MR_Box) (parse_tree__write_deps_file__V_648_648));
#line 666 "write_deps_file.m"
        }
#line 665 "write_deps_file.m"
        {
#line 665 "write_deps_file.m"
          parse_tree__write_deps_file__V_644_644 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_644_644, 0) = ((MR_Box) ((MR_String) "\n"));
#line 665 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_644_644, 1) = ((MR_Box) (parse_tree__write_deps_file__V_646_646));
#line 665 "write_deps_file.m"
        }
#line 665 "write_deps_file.m"
        {
#line 665 "write_deps_file.m"
          parse_tree__write_deps_file__V_643_643 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_643_643, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_100));
#line 665 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_643_643, 1) = ((MR_Box) (parse_tree__write_deps_file__V_644_644));
#line 665 "write_deps_file.m"
        }
#line 665 "write_deps_file.m"
        {
#line 665 "write_deps_file.m"
          parse_tree__write_deps_file__V_641_641 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_641_641, 0) = ((MR_Box) ((MR_String) " : "));
#line 665 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_641_641, 1) = ((MR_Box) (parse_tree__write_deps_file__V_643_643));
#line 665 "write_deps_file.m"
        }
#line 665 "write_deps_file.m"
        {
#line 665 "write_deps_file.m"
          parse_tree__write_deps_file__V_640_640 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_640_640, 0) = ((MR_Box) (parse_tree__write_deps_file__IntFileName_131));
#line 665 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_640_640, 1) = ((MR_Box) (parse_tree__write_deps_file__V_641_641));
#line 665 "write_deps_file.m"
        }
#line 664 "write_deps_file.m"
        {
#line 664 "write_deps_file.m"
          parse_tree__write_deps_file__V_638_638 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_638_638, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_638_638, 1) = ((MR_Box) (parse_tree__write_deps_file__V_640_640));
#line 664 "write_deps_file.m"
        }
#line 663 "write_deps_file.m"
        {
#line 663 "write_deps_file.m"
          parse_tree__write_deps_file__V_636_636 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_636_636, 0) = ((MR_Box) ((MR_String) "\n"));
#line 663 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_636_636, 1) = ((MR_Box) (parse_tree__write_deps_file__V_638_638));
#line 663 "write_deps_file.m"
        }
#line 663 "write_deps_file.m"
        {
#line 663 "write_deps_file.m"
          parse_tree__write_deps_file__V_635_635 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_635_635, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_101));
#line 663 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_635_635, 1) = ((MR_Box) (parse_tree__write_deps_file__V_636_636));
#line 663 "write_deps_file.m"
        }
#line 663 "write_deps_file.m"
        {
#line 663 "write_deps_file.m"
          parse_tree__write_deps_file__V_633_633 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_633_633, 0) = ((MR_Box) ((MR_String) " : "));
#line 663 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_633_633, 1) = ((MR_Box) (parse_tree__write_deps_file__V_635_635));
#line 663 "write_deps_file.m"
        }
#line 663 "write_deps_file.m"
        {
#line 663 "write_deps_file.m"
          parse_tree__write_deps_file__V_632_632 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_632_632, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_71));
#line 663 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_632_632, 1) = ((MR_Box) (parse_tree__write_deps_file__V_633_633));
#line 663 "write_deps_file.m"
        }
#line 662 "write_deps_file.m"
        {
#line 662 "write_deps_file.m"
          parse_tree__write_deps_file__V_629_629 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_629_629, 0) = ((MR_Box) ((MR_String) "\n"));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_629_629, 1) = ((MR_Box) (parse_tree__write_deps_file__V_632_632));
#line 662 "write_deps_file.m"
        }
#line 661 "write_deps_file.m"
        {
#line 661 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_629_629);
        }
#line 677 "write_deps_file.m"
        {
#line 677 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 640, &parse_tree__write_deps_file__UseSubdirs_137);
        }
#line 685 "write_deps_file.m"
        if ((parse_tree__write_deps_file__UseSubdirs_137 == (MR_Integer) 0))
#line 686 "write_deps_file.m"
          {
#line 686 "write_deps_file.m"
          }
#line 685 "write_deps_file.m"
        else
#line 679 "write_deps_file.m"
          {
#line 679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_683_683;
#line 681 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv6_STATE_VARIABLE_IO_685_685;

#line 680 "write_deps_file.m"
            {
#line 680 "write_deps_file.m"
              mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_42);
            }
#line 682 "write_deps_file.m"
            {
#line 682 "write_deps_file.m"
              parse_tree__write_deps_file__V_683_683 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 682 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_683_683, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0]));
#line 682 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_683_683, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_7));
#line 682 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_683_683, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 682 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_683_683, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 682 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_683_683, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_42));
#line 682 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_683_683, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 682 "write_deps_file.m"
            }
#line 681 "write_deps_file.m"
            {
#line 681 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_871_871, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_683_683, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[23]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv6_STATE_VARIABLE_IO_685_685);
            }
#line 679 "write_deps_file.m"
          }
#line 689 "write_deps_file.m"
        {
#line 689 "write_deps_file.m"
          parse_tree__write_deps_file__V_893_893 = parse_tree__source_file_map__default_source_file_1_f_0(parse_tree__write_deps_file__ModuleName_14);
        }
#line 689 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__SourceFileName_12, parse_tree__write_deps_file__V_893_893) == 0);
#line 689 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 735 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 705 "write_deps_file.m"
          {
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_704_704;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_707_707;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_708_708;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_710_710;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_711_711;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_713_713;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_715_715;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_717_717;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_718_718;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_720_720;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_721_721;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_723_723;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_724_724;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_726_726;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_728_728;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_729_729;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_731_731;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_732_732;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_734_734;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_735_735;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_737_737;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_739_739;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_740_740;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_742_742;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_743_743;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_745_745;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_746_746;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_748_748;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_750_750;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_751_751;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_753_753;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_754_754;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_756_756;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_757_757;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_759_759;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_761_761;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_763_763;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_764_764;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_766_766;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_767_767;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_769_769;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_770_770;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_772_772;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_774_774;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_775_775;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_777_777;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_778_778;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_780_780;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_781_781;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_783_783;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_785_785;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_787_787;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_788_788;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_790_790;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_791_791;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_793_793;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_794_794;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_796_796;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_798_798;
#line 705 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_800_800;

#line 732 "write_deps_file.m"
            {
#line 732 "write_deps_file.m"
              parse_tree__write_deps_file__V_800_800 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_800_800, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 732 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_800_800, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105])));
#line 732 "write_deps_file.m"
            }
#line 732 "write_deps_file.m"
            {
#line 732 "write_deps_file.m"
              parse_tree__write_deps_file__V_798_798 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_798_798, 0) = ((MR_Box) ((MR_String) "--java-only "));
#line 732 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_798_798, 1) = ((MR_Box) (parse_tree__write_deps_file__V_800_800));
#line 732 "write_deps_file.m"
            }
#line 731 "write_deps_file.m"
            {
#line 731 "write_deps_file.m"
              parse_tree__write_deps_file__V_796_796 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_796_796, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 731 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_796_796, 1) = ((MR_Box) (parse_tree__write_deps_file__V_798_798));
#line 731 "write_deps_file.m"
            }
#line 730 "write_deps_file.m"
            {
#line 730 "write_deps_file.m"
              parse_tree__write_deps_file__V_794_794 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_794_794, 0) = ((MR_Box) ((MR_String) "\n"));
#line 730 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_794_794, 1) = ((MR_Box) (parse_tree__write_deps_file__V_796_796));
#line 730 "write_deps_file.m"
            }
#line 730 "write_deps_file.m"
            {
#line 730 "write_deps_file.m"
              parse_tree__write_deps_file__V_793_793 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_793_793, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 730 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_793_793, 1) = ((MR_Box) (parse_tree__write_deps_file__V_794_794));
#line 730 "write_deps_file.m"
            }
#line 730 "write_deps_file.m"
            {
#line 730 "write_deps_file.m"
              parse_tree__write_deps_file__V_791_791 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_791_791, 0) = ((MR_Box) ((MR_String) " : "));
#line 730 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_791_791, 1) = ((MR_Box) (parse_tree__write_deps_file__V_793_793));
#line 730 "write_deps_file.m"
            }
#line 730 "write_deps_file.m"
            {
#line 730 "write_deps_file.m"
              parse_tree__write_deps_file__V_790_790 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_790_790, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_69));
#line 730 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_790_790, 1) = ((MR_Box) (parse_tree__write_deps_file__V_791_791));
#line 730 "write_deps_file.m"
            }
#line 729 "write_deps_file.m"
            {
#line 729 "write_deps_file.m"
              parse_tree__write_deps_file__V_788_788 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_788_788, 0) = ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n"));
#line 729 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_788_788, 1) = ((MR_Box) (parse_tree__write_deps_file__V_790_790));
#line 729 "write_deps_file.m"
            }
#line 728 "write_deps_file.m"
            {
#line 728 "write_deps_file.m"
              parse_tree__write_deps_file__V_787_787 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_787_787, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 728 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_787_787, 1) = ((MR_Box) (parse_tree__write_deps_file__V_788_788));
#line 728 "write_deps_file.m"
            }
#line 728 "write_deps_file.m"
            {
#line 728 "write_deps_file.m"
              parse_tree__write_deps_file__V_785_785 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_785_785, 0) = ((MR_Box) ((MR_String) "--il-only "));
#line 728 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_785_785, 1) = ((MR_Box) (parse_tree__write_deps_file__V_787_787));
#line 728 "write_deps_file.m"
            }
#line 727 "write_deps_file.m"
            {
#line 727 "write_deps_file.m"
              parse_tree__write_deps_file__V_783_783 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_783_783, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 727 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_783_783, 1) = ((MR_Box) (parse_tree__write_deps_file__V_785_785));
#line 727 "write_deps_file.m"
            }
#line 726 "write_deps_file.m"
            {
#line 726 "write_deps_file.m"
              parse_tree__write_deps_file__V_781_781 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_781_781, 0) = ((MR_Box) ((MR_String) "\n"));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_781_781, 1) = ((MR_Box) (parse_tree__write_deps_file__V_783_783));
#line 726 "write_deps_file.m"
            }
#line 726 "write_deps_file.m"
            {
#line 726 "write_deps_file.m"
              parse_tree__write_deps_file__V_780_780 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_780_780, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_780_780, 1) = ((MR_Box) (parse_tree__write_deps_file__V_781_781));
#line 726 "write_deps_file.m"
            }
#line 726 "write_deps_file.m"
            {
#line 726 "write_deps_file.m"
              parse_tree__write_deps_file__V_778_778 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_778_778, 0) = ((MR_Box) ((MR_String) " : "));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_778_778, 1) = ((MR_Box) (parse_tree__write_deps_file__V_780_780));
#line 726 "write_deps_file.m"
            }
#line 726 "write_deps_file.m"
            {
#line 726 "write_deps_file.m"
              parse_tree__write_deps_file__V_777_777 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_777_777, 0) = ((MR_Box) (parse_tree__write_deps_file__ILDateFileName_68));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_777_777, 1) = ((MR_Box) (parse_tree__write_deps_file__V_778_778));
#line 726 "write_deps_file.m"
            }
#line 725 "write_deps_file.m"
            {
#line 725 "write_deps_file.m"
              parse_tree__write_deps_file__V_775_775 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_775_775, 0) = ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n"));
#line 725 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_775_775, 1) = ((MR_Box) (parse_tree__write_deps_file__V_777_777));
#line 725 "write_deps_file.m"
            }
#line 725 "write_deps_file.m"
            {
#line 725 "write_deps_file.m"
              parse_tree__write_deps_file__V_774_774 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_774_774, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 725 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_774_774, 1) = ((MR_Box) (parse_tree__write_deps_file__V_775_775));
#line 725 "write_deps_file.m"
            }
#line 724 "write_deps_file.m"
            {
#line 724 "write_deps_file.m"
              parse_tree__write_deps_file__V_772_772 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_772_772, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 724 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_772_772, 1) = ((MR_Box) (parse_tree__write_deps_file__V_774_774));
#line 724 "write_deps_file.m"
            }
#line 723 "write_deps_file.m"
            {
#line 723 "write_deps_file.m"
              parse_tree__write_deps_file__V_770_770 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_770_770, 0) = ((MR_Box) ((MR_String) "\n"));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_770_770, 1) = ((MR_Box) (parse_tree__write_deps_file__V_772_772));
#line 723 "write_deps_file.m"
            }
#line 723 "write_deps_file.m"
            {
#line 723 "write_deps_file.m"
              parse_tree__write_deps_file__V_769_769 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_769_769, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_769_769, 1) = ((MR_Box) (parse_tree__write_deps_file__V_770_770));
#line 723 "write_deps_file.m"
            }
#line 723 "write_deps_file.m"
            {
#line 723 "write_deps_file.m"
              parse_tree__write_deps_file__V_767_767 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_767_767, 0) = ((MR_Box) ((MR_String) " : "));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_767_767, 1) = ((MR_Box) (parse_tree__write_deps_file__V_769_769));
#line 723 "write_deps_file.m"
            }
#line 723 "write_deps_file.m"
            {
#line 723 "write_deps_file.m"
              parse_tree__write_deps_file__V_766_766 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_766_766, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_64));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_766_766, 1) = ((MR_Box) (parse_tree__write_deps_file__V_767_767));
#line 723 "write_deps_file.m"
            }
#line 722 "write_deps_file.m"
            {
#line 722 "write_deps_file.m"
              parse_tree__write_deps_file__V_764_764 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_764_764, 0) = ((MR_Box) ((MR_String) "\n"));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_764_764, 1) = ((MR_Box) (parse_tree__write_deps_file__V_766_766));
#line 722 "write_deps_file.m"
            }
#line 722 "write_deps_file.m"
            {
#line 722 "write_deps_file.m"
              parse_tree__write_deps_file__V_763_763 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_763_763, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_763_763, 1) = ((MR_Box) (parse_tree__write_deps_file__V_764_764));
#line 722 "write_deps_file.m"
            }
#line 722 "write_deps_file.m"
            {
#line 722 "write_deps_file.m"
              parse_tree__write_deps_file__V_761_761 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_761_761, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCTOIFLAGS) "));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_761_761, 1) = ((MR_Box) (parse_tree__write_deps_file__V_763_763));
#line 722 "write_deps_file.m"
            }
#line 721 "write_deps_file.m"
            {
#line 721 "write_deps_file.m"
              parse_tree__write_deps_file__V_759_759 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_759_759, 0) = ((MR_Box) ((MR_String) "\t\044(MCTOI) \044(ALL_GRADEFLAGS) "));
#line 721 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_759_759, 1) = ((MR_Box) (parse_tree__write_deps_file__V_761_761));
#line 721 "write_deps_file.m"
            }
#line 720 "write_deps_file.m"
            {
#line 720 "write_deps_file.m"
              parse_tree__write_deps_file__V_757_757 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_757_757, 0) = ((MR_Box) ((MR_String) "\n"));
#line 720 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_757_757, 1) = ((MR_Box) (parse_tree__write_deps_file__V_759_759));
#line 720 "write_deps_file.m"
            }
#line 719 "write_deps_file.m"
            {
#line 719 "write_deps_file.m"
              parse_tree__write_deps_file__V_756_756 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_756_756, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_756_756, 1) = ((MR_Box) (parse_tree__write_deps_file__V_757_757));
#line 719 "write_deps_file.m"
            }
#line 719 "write_deps_file.m"
            {
#line 719 "write_deps_file.m"
              parse_tree__write_deps_file__V_754_754 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_754_754, 0) = ((MR_Box) ((MR_String) " : "));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_754_754, 1) = ((MR_Box) (parse_tree__write_deps_file__V_756_756));
#line 719 "write_deps_file.m"
            }
#line 719 "write_deps_file.m"
            {
#line 719 "write_deps_file.m"
              parse_tree__write_deps_file__V_753_753 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_753_753, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_36));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_753_753, 1) = ((MR_Box) (parse_tree__write_deps_file__V_754_754));
#line 719 "write_deps_file.m"
            }
#line 718 "write_deps_file.m"
            {
#line 718 "write_deps_file.m"
              parse_tree__write_deps_file__V_751_751 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_751_751, 0) = ((MR_Box) ((MR_String) "\n"));
#line 718 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_751_751, 1) = ((MR_Box) (parse_tree__write_deps_file__V_753_753));
#line 718 "write_deps_file.m"
            }
#line 718 "write_deps_file.m"
            {
#line 718 "write_deps_file.m"
              parse_tree__write_deps_file__V_750_750 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_750_750, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 718 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_750_750, 1) = ((MR_Box) (parse_tree__write_deps_file__V_751_751));
#line 718 "write_deps_file.m"
            }
#line 717 "write_deps_file.m"
            {
#line 717 "write_deps_file.m"
              parse_tree__write_deps_file__V_748_748 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_748_748, 0) = ((MR_Box) ((MR_String) "\t\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) "));
#line 717 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_748_748, 1) = ((MR_Box) (parse_tree__write_deps_file__V_750_750));
#line 717 "write_deps_file.m"
            }
#line 716 "write_deps_file.m"
            {
#line 716 "write_deps_file.m"
              parse_tree__write_deps_file__V_746_746 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_746_746, 0) = ((MR_Box) ((MR_String) "\n"));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_746_746, 1) = ((MR_Box) (parse_tree__write_deps_file__V_748_748));
#line 716 "write_deps_file.m"
            }
#line 716 "write_deps_file.m"
            {
#line 716 "write_deps_file.m"
              parse_tree__write_deps_file__V_745_745 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_745_745, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_745_745, 1) = ((MR_Box) (parse_tree__write_deps_file__V_746_746));
#line 716 "write_deps_file.m"
            }
#line 716 "write_deps_file.m"
            {
#line 716 "write_deps_file.m"
              parse_tree__write_deps_file__V_743_743 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_743_743, 0) = ((MR_Box) ((MR_String) " : "));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_743_743, 1) = ((MR_Box) (parse_tree__write_deps_file__V_745_745));
#line 716 "write_deps_file.m"
            }
#line 716 "write_deps_file.m"
            {
#line 716 "write_deps_file.m"
              parse_tree__write_deps_file__V_742_742 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_742_742, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_63));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_742_742, 1) = ((MR_Box) (parse_tree__write_deps_file__V_743_743));
#line 716 "write_deps_file.m"
            }
#line 715 "write_deps_file.m"
            {
#line 715 "write_deps_file.m"
              parse_tree__write_deps_file__V_740_740 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_740_740, 0) = ((MR_Box) ((MR_String) "\n"));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_740_740, 1) = ((MR_Box) (parse_tree__write_deps_file__V_742_742));
#line 715 "write_deps_file.m"
            }
#line 715 "write_deps_file.m"
            {
#line 715 "write_deps_file.m"
              parse_tree__write_deps_file__V_739_739 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_739_739, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_739_739, 1) = ((MR_Box) (parse_tree__write_deps_file__V_740_740));
#line 715 "write_deps_file.m"
            }
#line 714 "write_deps_file.m"
            {
#line 714 "write_deps_file.m"
              parse_tree__write_deps_file__V_737_737 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_737_737, 0) = ((MR_Box) ((MR_String) "\t\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) "));
#line 714 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_737_737, 1) = ((MR_Box) (parse_tree__write_deps_file__V_739_739));
#line 714 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_735_735 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_735_735, 0) = ((MR_Box) ((MR_String) "\n"));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_735_735, 1) = ((MR_Box) (parse_tree__write_deps_file__V_737_737));
#line 713 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_734_734 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_734_734, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_734_734, 1) = ((MR_Box) (parse_tree__write_deps_file__V_735_735));
#line 713 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_732_732 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_732_732, 0) = ((MR_Box) ((MR_String) " : "));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_732_732, 1) = ((MR_Box) (parse_tree__write_deps_file__V_734_734));
#line 713 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_731_731 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_731_731, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_136));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_731_731, 1) = ((MR_Box) (parse_tree__write_deps_file__V_732_732));
#line 713 "write_deps_file.m"
            }
#line 712 "write_deps_file.m"
            {
#line 712 "write_deps_file.m"
              parse_tree__write_deps_file__V_729_729 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_729_729, 0) = ((MR_Box) ((MR_String) "\n"));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_729_729, 1) = ((MR_Box) (parse_tree__write_deps_file__V_731_731));
#line 712 "write_deps_file.m"
            }
#line 712 "write_deps_file.m"
            {
#line 712 "write_deps_file.m"
              parse_tree__write_deps_file__V_728_728 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_728_728, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_728_728, 1) = ((MR_Box) (parse_tree__write_deps_file__V_729_729));
#line 712 "write_deps_file.m"
            }
#line 711 "write_deps_file.m"
            {
#line 711 "write_deps_file.m"
              parse_tree__write_deps_file__V_726_726 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_726_726, 0) = ((MR_Box) ((MR_String) "\t\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) "));
#line 711 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_726_726, 1) = ((MR_Box) (parse_tree__write_deps_file__V_728_728));
#line 711 "write_deps_file.m"
            }
#line 710 "write_deps_file.m"
            {
#line 710 "write_deps_file.m"
              parse_tree__write_deps_file__V_724_724 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_724_724, 0) = ((MR_Box) ((MR_String) "\n"));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_724_724, 1) = ((MR_Box) (parse_tree__write_deps_file__V_726_726));
#line 710 "write_deps_file.m"
            }
#line 710 "write_deps_file.m"
            {
#line 710 "write_deps_file.m"
              parse_tree__write_deps_file__V_723_723 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_723_723, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_723_723, 1) = ((MR_Box) (parse_tree__write_deps_file__V_724_724));
#line 710 "write_deps_file.m"
            }
#line 710 "write_deps_file.m"
            {
#line 710 "write_deps_file.m"
              parse_tree__write_deps_file__V_721_721 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_721_721, 0) = ((MR_Box) ((MR_String) " : "));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_721_721, 1) = ((MR_Box) (parse_tree__write_deps_file__V_723_723));
#line 710 "write_deps_file.m"
            }
#line 710 "write_deps_file.m"
            {
#line 710 "write_deps_file.m"
              parse_tree__write_deps_file__V_720_720 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_720_720, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_100));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_720_720, 1) = ((MR_Box) (parse_tree__write_deps_file__V_721_721));
#line 710 "write_deps_file.m"
            }
#line 709 "write_deps_file.m"
            {
#line 709 "write_deps_file.m"
              parse_tree__write_deps_file__V_718_718 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_718_718, 0) = ((MR_Box) ((MR_String) "\n"));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_718_718, 1) = ((MR_Box) (parse_tree__write_deps_file__V_720_720));
#line 709 "write_deps_file.m"
            }
#line 709 "write_deps_file.m"
            {
#line 709 "write_deps_file.m"
              parse_tree__write_deps_file__V_717_717 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_717_717, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_103));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_717_717, 1) = ((MR_Box) (parse_tree__write_deps_file__V_718_718));
#line 709 "write_deps_file.m"
            }
#line 709 "write_deps_file.m"
            {
#line 709 "write_deps_file.m"
              parse_tree__write_deps_file__V_715_715 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_715_715, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCPIFLAGS) "));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_715_715, 1) = ((MR_Box) (parse_tree__write_deps_file__V_717_717));
#line 709 "write_deps_file.m"
            }
#line 708 "write_deps_file.m"
            {
#line 708 "write_deps_file.m"
              parse_tree__write_deps_file__V_713_713 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_713_713, 0) = ((MR_Box) ((MR_String) "\t\044(MCPI) \044(ALL_GRADEFLAGS) "));
#line 708 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_713_713, 1) = ((MR_Box) (parse_tree__write_deps_file__V_715_715));
#line 708 "write_deps_file.m"
            }
#line 707 "write_deps_file.m"
            {
#line 707 "write_deps_file.m"
              parse_tree__write_deps_file__V_711_711 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_711_711, 0) = ((MR_Box) ((MR_String) "\n"));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_711_711, 1) = ((MR_Box) (parse_tree__write_deps_file__V_713_713));
#line 707 "write_deps_file.m"
            }
#line 707 "write_deps_file.m"
            {
#line 707 "write_deps_file.m"
              parse_tree__write_deps_file__V_710_710 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_710_710, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_710_710, 1) = ((MR_Box) (parse_tree__write_deps_file__V_711_711));
#line 707 "write_deps_file.m"
            }
#line 707 "write_deps_file.m"
            {
#line 707 "write_deps_file.m"
              parse_tree__write_deps_file__V_708_708 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_708_708, 0) = ((MR_Box) ((MR_String) " : "));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_708_708, 1) = ((MR_Box) (parse_tree__write_deps_file__V_710_710));
#line 707 "write_deps_file.m"
            }
#line 707 "write_deps_file.m"
            {
#line 707 "write_deps_file.m"
              parse_tree__write_deps_file__V_707_707 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_707_707, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_101));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_707_707, 1) = ((MR_Box) (parse_tree__write_deps_file__V_708_708));
#line 707 "write_deps_file.m"
            }
#line 706 "write_deps_file.m"
            {
#line 706 "write_deps_file.m"
              parse_tree__write_deps_file__V_704_704 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_704_704, 0) = ((MR_Box) ((MR_String) "\n"));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_704_704, 1) = ((MR_Box) (parse_tree__write_deps_file__V_707_707));
#line 706 "write_deps_file.m"
            }
#line 705 "write_deps_file.m"
            {
#line 705 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_42, parse_tree__write_deps_file__V_704_704);
            }
#line 705 "write_deps_file.m"
          }
#line 735 "write_deps_file.m"
        else
#line 705 "write_deps_file.m"
          {
#line 705 "write_deps_file.m"
          }
#line 739 "write_deps_file.m"
        {
#line 739 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_42);
        }
#line 740 "write_deps_file.m"
        {
#line 740 "write_deps_file.m"
          mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_37, parse_tree__write_deps_file__DependencyFileName_35, &parse_tree__write_deps_file__Result3_138);
        }
#line 773 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Result3_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "write_deps_file.m"
          {
#line 775 "write_deps_file.m"
            {
#line 775 "write_deps_file.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, (MR_String) " done.\n");
#line 775 "write_deps_file.m"
              return;
            }
#line 774 "write_deps_file.m"
          }
#line 773 "write_deps_file.m"
        else
#line 743 "write_deps_file.m"
          {
#line 743 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Result4_140;

#line 746 "write_deps_file.m"
            {
#line 746 "write_deps_file.m"
              mercury__io__remove_file_4_p_0(parse_tree__write_deps_file__DependencyFileName_35, &parse_tree__write_deps_file__Result4_140);
            }
#line 755 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Result4_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 756 "write_deps_file.m"
              {
#line 756 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__Result5_143;

#line 757 "write_deps_file.m"
                {
#line 757 "write_deps_file.m"
                  mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_37, parse_tree__write_deps_file__DependencyFileName_35, &parse_tree__write_deps_file__Result5_143);
                }
#line 768 "write_deps_file.m"
                if ((parse_tree__write_deps_file__Result5_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 769 "write_deps_file.m"
                  {
#line 770 "write_deps_file.m"
                    {
#line 770 "write_deps_file.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, (MR_String) " done.\n");
#line 770 "write_deps_file.m"
                      return;
                    }
#line 769 "write_deps_file.m"
                  }
#line 768 "write_deps_file.m"
                else
#line 760 "write_deps_file.m"
                  {
#line 760 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__Error5_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result5_143, (MR_Integer) 0)));
#line 760 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_815_815;
#line 760 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_817_817;
#line 760 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_818_818;
#line 760 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_820_820;
#line 760 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_821_821;
#line 760 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_823_823;
#line 760 "write_deps_file.m"
                    MR_String parse_tree__write_deps_file__Message_860;
#line 760 "write_deps_file.m"
                    MR_String parse_tree__write_deps_file__ErrorMsg_861;

#line 761 "write_deps_file.m"
                    {
#line 761 "write_deps_file.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, (MR_String) " failed.\n");
                    }
#line 762 "write_deps_file.m"
                    {
#line 762 "write_deps_file.m"
                      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_33);
                    }
#line 763 "write_deps_file.m"
                    {
#line 763 "write_deps_file.m"
                      mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error5_144, &parse_tree__write_deps_file__ErrorMsg_861);
                    }
#line 766 "write_deps_file.m"
                    {
#line 766 "write_deps_file.m"
                      parse_tree__write_deps_file__V_823_823 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_823_823, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_861));
#line 766 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_823_823, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "write_deps_file.m"
                    }
#line 766 "write_deps_file.m"
                    {
#line 766 "write_deps_file.m"
                      parse_tree__write_deps_file__V_821_821 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_821_821, 0) = ((MR_Box) ((MR_String) "\': "));
#line 766 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_821_821, 1) = ((MR_Box) (parse_tree__write_deps_file__V_823_823));
#line 766 "write_deps_file.m"
                    }
#line 765 "write_deps_file.m"
                    {
#line 765 "write_deps_file.m"
                      parse_tree__write_deps_file__V_820_820 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_820_820, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_35));
#line 765 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_820_820, 1) = ((MR_Box) (parse_tree__write_deps_file__V_821_821));
#line 765 "write_deps_file.m"
                    }
#line 765 "write_deps_file.m"
                    {
#line 765 "write_deps_file.m"
                      parse_tree__write_deps_file__V_818_818 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_818_818, 0) = ((MR_Box) ((MR_String) "\' as \140"));
#line 765 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_818_818, 1) = ((MR_Box) (parse_tree__write_deps_file__V_820_820));
#line 765 "write_deps_file.m"
                    }
#line 765 "write_deps_file.m"
                    {
#line 765 "write_deps_file.m"
                      parse_tree__write_deps_file__V_817_817 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_817_817, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_37));
#line 765 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_817_817, 1) = ((MR_Box) (parse_tree__write_deps_file__V_818_818));
#line 765 "write_deps_file.m"
                    }
#line 764 "write_deps_file.m"
                    {
#line 764 "write_deps_file.m"
                      parse_tree__write_deps_file__V_815_815 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_815_815, 0) = ((MR_Box) ((MR_String) "can\'t rename file \140"));
#line 764 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_815_815, 1) = ((MR_Box) (parse_tree__write_deps_file__V_817_817));
#line 764 "write_deps_file.m"
                    }
#line 764 "write_deps_file.m"
                    {
#line 764 "write_deps_file.m"
                      mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_815_815, &parse_tree__write_deps_file__Message_860);
                    }
#line 767 "write_deps_file.m"
                    {
#line 767 "write_deps_file.m"
                      libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_860);
#line 767 "write_deps_file.m"
                      return;
                    }
#line 760 "write_deps_file.m"
                  }
#line 756 "write_deps_file.m"
              }
#line 755 "write_deps_file.m"
            else
#line 748 "write_deps_file.m"
              {
#line 748 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__Error4_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result4_140, (MR_Integer) 0)));
#line 748 "write_deps_file.m"
                MR_String parse_tree__write_deps_file__ErrorMsg_142;
#line 748 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_829_829;
#line 748 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_831_831;
#line 748 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_832_832;
#line 748 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_834_834;
#line 748 "write_deps_file.m"
                MR_String parse_tree__write_deps_file__Message_859;

#line 749 "write_deps_file.m"
                {
#line 749 "write_deps_file.m"
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_33, (MR_String) " failed.\n");
                }
#line 750 "write_deps_file.m"
                {
#line 750 "write_deps_file.m"
                  libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_33);
                }
#line 751 "write_deps_file.m"
                {
#line 751 "write_deps_file.m"
                  mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error4_141, &parse_tree__write_deps_file__ErrorMsg_142);
                }
#line 753 "write_deps_file.m"
                {
#line 753 "write_deps_file.m"
                  parse_tree__write_deps_file__V_834_834 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_834_834, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_142));
#line 753 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_834_834, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "write_deps_file.m"
                }
#line 753 "write_deps_file.m"
                {
#line 753 "write_deps_file.m"
                  parse_tree__write_deps_file__V_832_832 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_832_832, 0) = ((MR_Box) ((MR_String) "\': "));
#line 753 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_832_832, 1) = ((MR_Box) (parse_tree__write_deps_file__V_834_834));
#line 753 "write_deps_file.m"
                }
#line 752 "write_deps_file.m"
                {
#line 752 "write_deps_file.m"
                  parse_tree__write_deps_file__V_831_831 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_831_831, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_35));
#line 752 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_831_831, 1) = ((MR_Box) (parse_tree__write_deps_file__V_832_832));
#line 752 "write_deps_file.m"
                }
#line 752 "write_deps_file.m"
                {
#line 752 "write_deps_file.m"
                  parse_tree__write_deps_file__V_829_829 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_829_829, 0) = ((MR_Box) ((MR_String) "can\'t remove file \140"));
#line 752 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_829_829, 1) = ((MR_Box) (parse_tree__write_deps_file__V_831_831));
#line 752 "write_deps_file.m"
                }
#line 752 "write_deps_file.m"
                {
#line 752 "write_deps_file.m"
                  mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_829_829, &parse_tree__write_deps_file__Message_859);
                }
#line 754 "write_deps_file.m"
                {
#line 754 "write_deps_file.m"
                  libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_859);
#line 754 "write_deps_file.m"
                  return;
                }
#line 748 "write_deps_file.m"
              }
#line 743 "write_deps_file.m"
          }
#line 142 "write_deps_file.m"
      }
#line 106 "write_deps_file.m"
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
