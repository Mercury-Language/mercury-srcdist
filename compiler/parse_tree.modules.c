/*
** Automatically generated from `modules.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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


/* :- module parse_tree.modules. */
/* :- implementation. */

/*
INIT mercury__parse_tree__modules__init
ENDINIT
*/

#include "parse_tree.modules.mih"


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
#include "libs.mih"
#include "list.mih"
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
#include "solutions.mih"
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
#include "parse_tree.item_util.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.write_deps_file.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 915 "modules.m"
struct parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0_s {
#line 915 "modules.m"
  MR_Word parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__ImportedModules_11;
#line 915 "modules.m"
  MR_Word parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__UsedModules_12;
#line 915 "modules.m"
  MR_Word * parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__HeadVar__4_23;
#line 915 "modules.m"
  MR_Cont parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__cont;
#line 915 "modules.m"
  void * parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__cont_env_ptr;
#line 915 "modules.m"
  MR_bool parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__succeeded;
#line 915 "modules.m"
  MR_Word parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__TypeCtorInfo_52_52;
#line 916 "modules.m"
  MR_Box parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__conv0_HeadVar__4_23;
#line 915 "modules.m"
};

#line 915 "modules.m"
struct parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0_s {
#line 915 "modules.m"
  MR_Box * parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__wrapper_arg_1;
#line 915 "modules.m"
  MR_Cont parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__cont;
#line 915 "modules.m"
  void * parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__cont_env_ptr;
#line 915 "modules.m"
  MR_Word parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__conv0_HeadVar__4_23;
#line 915 "modules.m"
};


#line 179 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

#line 182 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 185 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 188 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 191 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 194 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 197 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

#line 200 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 203 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0term__type_ctor_info_context_0;

#line 206 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0term__type_ctor_info_context_0;

#line 209 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0;

#line 212 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0;

#line 215 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_term__type_ctor_info_context_0;

#line 218 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 221 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_0;

#line 224 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_1;

#line 227 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_generate_dependencies_mode_0[2];

#line 230 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_generate_dependencies_mode_0[2];

#line 233 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_generate_dependencies_mode_0[2];

#line 236 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 239 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 242 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 245 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____generate_dependencies_mode_0_0_10001(
#line 248 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 250 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 253 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____generate_dependencies_mode_0_0_10001(
#line 256 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 258 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 260 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 263 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_list_0_0_10001(
#line 266 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 268 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 271 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_list_0_0_10001(
#line 274 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 276 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 278 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 281 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____submodule_map_0_0_10001(
#line 284 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 286 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 289 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____submodule_map_0_0_10001(
#line 292 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 294 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 296 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 335 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_102_97_99_101_95_95_51_51_53_95_95_49_95_95_91_49_93_95_48_2_f_0(void);

#line 1256 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(
#line 1256 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1256 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2);

#line 1013 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1(
#line 1013 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1013 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 995 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(
#line 995 "modules.m"
  MR_String parse_tree__modules__FileName_10,
#line 995 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportedModules_0_23,
#line 995 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportedModules_24,
#line 995 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_UsedModules_0_25,
#line 995 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_UsedModules_26,
#line 995 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_27,
#line 995 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_28);

#line 967 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_12_p_0(
#line 967 "modules.m"
  MR_String parse_tree__modules__FileName_14,
#line 967 "modules.m"
  MR_Word parse_tree__modules__IntImportedModules0_15,
#line 967 "modules.m"
  MR_Word * parse_tree__modules__IntImportedModules_16,
#line 967 "modules.m"
  MR_Word parse_tree__modules__IntUsedModules0_17,
#line 967 "modules.m"
  MR_Word * parse_tree__modules__IntUsedModules_18,
#line 967 "modules.m"
  MR_Word parse_tree__modules__ImpImportedModules0_19,
#line 967 "modules.m"
  MR_Word * parse_tree__modules__ImpImportedModules_20,
#line 967 "modules.m"
  MR_Word parse_tree__modules__ImpUsedModules0_21,
#line 967 "modules.m"
  MR_Word * parse_tree__modules__ImpUsedModules_22,
#line 967 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 967 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27);

#line 356 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_116_101_114_102_97_99_101_95_97_110_100_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_97_99_99_95_95_91_49_93_95_48_8_p_0(
#line 356 "modules.m"
  MR_Word parse_tree__modules__IncludeImplTypes_1,
#line 356 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 356 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InInterface_0_3,
#line 356 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevIntItems_0_4,
#line 356 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevIntItems_5,
#line 356 "modules.m"
  MR_Word parse_tree__modules__AddImplItem_6,
#line 356 "modules.m"
  MR_Box parse_tree__modules__STATE_VARIABLE_RevImplItems_0_7,
#line 356 "modules.m"
  MR_Box * parse_tree__modules__STATE_VARIABLE_RevImplItems_8);

#line 1513 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__generate_dependencies__1513__1_2_p_0(
#line 1513 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_101,
#line 1513 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_102);

#line 1316 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__check_module_accessibility__1316__1_3_p_0(
#line 1316 "modules.m"
  MR_Word parse_tree__modules__ImportedModule_10,
#line 1316 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_28,
#line 1316 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__3_29);

#line 916 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_2(
#line 916 "modules.m"
  void * parse_tree__modules__env_ptr_arg);

#line 915 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_1(
#line 915 "modules.m"
  void * parse_tree__modules__env_ptr_arg);

#line 915 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0(
#line 915 "modules.m"
  MR_Word parse_tree__modules__AncestorModules_10,
#line 915 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_11,
#line 915 "modules.m"
  MR_Word parse_tree__modules__UsedModules_12,
#line 915 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__4_23,
#line 915 "modules.m"
  MR_Cont parse_tree__modules__cont,
#line 915 "modules.m"
  void * parse_tree__modules__cont_env_ptr);

#line 346 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__IntroducedFrom__func__get_interface_and_implementation__346__1_2_f_0(
#line 346 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_17,
#line 346 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_18);

#line 335 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__func__get_interface__335__1_2_f_0(
#line 335 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_15);

#line 1673 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____submodule_map_0_0(
#line 1673 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1673 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1673 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1673 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____submodule_map_0_0(
#line 1673 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1673 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1455 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____generate_dependencies_mode_0_0(
#line 1455 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1455 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1455 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1455 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____generate_dependencies_mode_0_0(
#line 1455 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_1,
#line 1455 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1926 "modules.m"
static void MR_CALL 
parse_tree__modules__report_non_abstract_instance_in_interface_3_p_0(
#line 1926 "modules.m"
  MR_Word parse_tree__modules__Context_4,
#line 1926 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_9,
#line 1926 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_10);

#line 1894 "modules.m"
static void MR_CALL 
parse_tree__modules__report_error_duplicate_module_decl_3_p_0(
#line 1894 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1894 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_15,
#line 1894 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_16);

#line 1889 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__pair_with_context_2_f_0(
#line 1889 "modules.m"
  MR_Word parse_tree__modules__Context_4,
#line 1889 "modules.m"
  MR_Word parse_tree__modules__ModuleName_5);

#line 1886 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__is_duplicate_error_3_p_0_1(
#line 1886 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1886 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 1867 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__is_duplicate_error_3_p_0(
#line 1867 "modules.m"
  MR_Word parse_tree__modules__DuplicatesSet_4,
#line 1867 "modules.m"
  MR_Word parse_tree__modules__Item_5,
#line 1867 "modules.m"
  MR_Word * parse_tree__modules__SubModuleNameContexts_6);

#line 1834 "modules.m"
static void MR_CALL 
parse_tree__modules__report_error_implementation_in_interface_4_p_0(
#line 1834 "modules.m"
  MR_Word parse_tree__modules__ModuleName_5,
#line 1834 "modules.m"
  MR_Word parse_tree__modules__Context_6,
#line 1834 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_16,
#line 1834 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_17);

#line 1814 "modules.m"
static void MR_CALL 
parse_tree__modules__add_submodule_3_p_0(
#line 1814 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1814 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_SubModules_0_9,
#line 1814 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_SubModules_10);

#line 1744 "modules.m"
static void MR_CALL 
parse_tree__modules__split_into_submodules_3_9_p_0_1(
#line 1744 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1744 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1744 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1744 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1717 "modules.m"
static void MR_CALL 
parse_tree__modules__split_into_submodules_3_9_p_0(
#line 1717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1717 "modules.m"
  MR_Word parse_tree__modules__InParentInterface_3,
#line 1717 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InInterface_0_4,
#line 1717 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__5_5,
#line 1717 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__6_6,
#line 1717 "modules.m"
  MR_Word * parse_tree__modules__SubModules_7,
#line 1717 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_8,
#line 1717 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_9);

#line 1704 "modules.m"
static void MR_CALL 
parse_tree__modules__split_into_submodules_2_7_p_0(
#line 1704 "modules.m"
  MR_Word parse_tree__modules__ModuleName_8,
#line 1704 "modules.m"
  MR_Word parse_tree__modules__Items0_9,
#line 1704 "modules.m"
  MR_Word parse_tree__modules__InParentInterface_10,
#line 1704 "modules.m"
  MR_Word * parse_tree__modules__Items_11,
#line 1704 "modules.m"
  MR_Word * parse_tree__modules__ModuleList_12,
#line 1704 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_18,
#line 1704 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_19);

#line 1610 "modules.m"
static void MR_CALL 
parse_tree__modules__get_accessible_children_acc_4_p_0(
#line 1610 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Visible_0_1,
#line 1610 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1610 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3,
#line 1610 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IncludeDeps_4);

#line 1584 "modules.m"
static void MR_CALL 
parse_tree__modules__get_children_acc_3_p_0(
#line 1584 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1584 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_2,
#line 1584 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IncludeDeps_3);

#line 1513 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_dependencies_7_p_0_1(
#line 1513 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1513 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1513 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2);

#line 1459 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_dependencies_7_p_0(
#line 1459 "modules.m"
  MR_Word parse_tree__modules__Globals_8,
#line 1459 "modules.m"
  MR_Word parse_tree__modules__Mode_9,
#line 1459 "modules.m"
  MR_Word parse_tree__modules__Search_10,
#line 1459 "modules.m"
  MR_Word parse_tree__modules__ModuleName_11,
#line 1459 "modules.m"
  MR_Word parse_tree__modules__DepsMap0_12);

#line 1393 "modules.m"
static void MR_CALL 
parse_tree__modules__replace_section_decl_4_p_0(
#line 1393 "modules.m"
  MR_Word parse_tree__modules__IntStatusItem_5,
#line 1393 "modules.m"
  MR_Word parse_tree__modules__ImpStatusItem_6,
#line 1393 "modules.m"
  MR_Word parse_tree__modules__Item0_7,
#line 1393 "modules.m"
  MR_Word * parse_tree__modules__Item_8);

#line 1391 "modules.m"
static void MR_CALL 
parse_tree__modules__replace_section_decls_4_p_0_1(
#line 1391 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1391 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1391 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2);

#line 1387 "modules.m"
static void MR_CALL 
parse_tree__modules__replace_section_decls_4_p_0(
#line 1387 "modules.m"
  MR_Word parse_tree__modules__IntStatusItem_5,
#line 1387 "modules.m"
  MR_Word parse_tree__modules__ImpStatusItem_6,
#line 1387 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Items_0_8,
#line 1387 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Items_9);

#line 1345 "modules.m"
static void MR_CALL 
parse_tree__modules__report_inaccessible_module_error_6_p_0(
#line 1345 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1345 "modules.m"
  MR_Word parse_tree__modules__ParentModule_8,
#line 1345 "modules.m"
  MR_String parse_tree__modules__SubModule_9,
#line 1345 "modules.m"
  MR_Word parse_tree__modules__HeadVar__4_4,
#line 1345 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_17,
#line 1345 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_18);

#line 1336 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0_2(
#line 1336 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1336 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1336 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1336 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1316 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0_1(
#line 1316 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1316 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1316 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2);

#line 1302 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0(
#line 1302 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1302 "modules.m"
  MR_Word parse_tree__modules__AccessibleSubModules_8,
#line 1302 "modules.m"
  MR_Word parse_tree__modules__Items_9,
#line 1302 "modules.m"
  MR_Word parse_tree__modules__ImportedModule_10,
#line 1302 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 1302 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27);

#line 1299 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_5_p_0_1(
#line 1299 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1299 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1299 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1299 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1294 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_5_p_0(
#line 1294 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 1294 "modules.m"
  MR_Word parse_tree__modules__Imports_7,
#line 1294 "modules.m"
  MR_Word parse_tree__modules__Items_8,
#line 1294 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_11,
#line 1294 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_12);

#line 1262 "modules.m"
static void MR_CALL 
parse_tree__modules__maybe_record_timestamp_6_p_0(
#line 1262 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1262 "modules.m"
  MR_String parse_tree__modules__Suffix_8,
#line 1262 "modules.m"
  MR_Word parse_tree__modules__NeedQualifier_9,
#line 1262 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamp_10,
#line 1262 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Module_0_16,
#line 1262 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Module_17);

#line 534 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__init_module_and_imports_11_p_0_2(
#line 534 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 534 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 547 "modules.m"
static void MR_CALL 
parse_tree__modules__init_module_and_imports_11_p_0_1(
#line 547 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 547 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1233 "modules.m"
static void MR_CALL 
parse_tree__modules__init_module_and_imports_11_p_0(
#line 1233 "modules.m"
  MR_String parse_tree__modules__SourceFileName_12,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_13,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__ModuleName_14,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__Items0_15,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__Specs_16,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__PublicChildren_17,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__NestedChildren_18,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__FactDeps_19,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__ForeignIncludeFiles_20,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamps_21,
#line 1233 "modules.m"
  MR_Word * parse_tree__modules__Module_22);

#line 1029 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__wrap_symname_1_f_0(
#line 1029 "modules.m"
  MR_Word parse_tree__modules__ModuleName_3);

#line 941 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_imported_ancestor_5_p_0(
#line 941 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 941 "modules.m"
  MR_String parse_tree__modules__FileName_7,
#line 941 "modules.m"
  MR_Word parse_tree__modules__AncestorName_8,
#line 941 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_16,
#line 941 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_17);

#line 922 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_3(
#line 922 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 922 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 922 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 922 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 915 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_1(
#line 915 "modules.m"
  void * parse_tree__modules__env_ptr_arg);

#line 915 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2(
#line 915 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 915 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 915 "modules.m"
  MR_Cont parse_tree__modules__cont,
#line 915 "modules.m"
  void * parse_tree__modules__cont_env_ptr);

#line 908 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0(
#line 908 "modules.m"
  MR_Word parse_tree__modules__ModuleName_8,
#line 908 "modules.m"
  MR_String parse_tree__modules__FileName_9,
#line 908 "modules.m"
  MR_Word parse_tree__modules__AncestorModules_10,
#line 908 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_11,
#line 908 "modules.m"
  MR_Word parse_tree__modules__UsedModules_12,
#line 908 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_21,
#line 908 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_22);

#line 871 "modules.m"
static void MR_CALL 
parse_tree__modules__split_clauses_and_decls_3_p_0(
#line 871 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 871 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2,
#line 871 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__3_3);

#line 591 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_no_exports_warning_5_p_0(
#line 591 "modules.m"
  MR_Word parse_tree__modules__Globals_6,
#line 591 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 591 "modules.m"
  MR_Word * parse_tree__modules__Spec_8);

#line 550 "modules.m"
static void MR_CALL 
parse_tree__modules__accumulate_item_foreign_import_langs_3_p_0(
#line 550 "modules.m"
  MR_Word parse_tree__modules__Item_4,
#line 550 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_LangSet_0_7,
#line 550 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_LangSet_8);

#line 537 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__make_foreign_import_2_f_0(
#line 537 "modules.m"
  MR_Word parse_tree__modules__ModuleName_4,
#line 537 "modules.m"
  MR_Word parse_tree__modules__Lang_5);

#line 429 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__include_in_int_file_implementation_1_f_0(
#line 429 "modules.m"
  MR_Word parse_tree__modules__Item_3);

#line 534 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__get_interface_and_implementation_5_p_0_3(
#line 534 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 534 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 547 "modules.m"
static void MR_CALL 
parse_tree__modules__get_interface_and_implementation_5_p_0_2(
#line 547 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 547 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 346 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__get_interface_and_implementation_5_p_0_1(
#line 346 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 346 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 346 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 341 "modules.m"
static void MR_CALL 
parse_tree__modules__get_interface_and_implementation_5_p_0(
#line 341 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 341 "modules.m"
  MR_Word parse_tree__modules__IncludeImplTypes_7,
#line 341 "modules.m"
  MR_Word parse_tree__modules__Items0_8,
#line 341 "modules.m"
  MR_Word * parse_tree__modules__InterfaceItems_9,
#line 341 "modules.m"
  MR_Word * parse_tree__modules__ImplementationItems_10);

#line 1865 "modules.m"
static void MR_CALL 
parse_tree__modules__split_into_submodules_5_p_0_2(
#line 1865 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1865 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1865 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1865 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1862 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__split_into_submodules_5_p_0_1(
#line 1862 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1862 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1862 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2);

#line 547 "modules.m"
static void MR_CALL 
parse_tree__modules__get_foreign_self_imports_2_p_0_1(
#line 547 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 547 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1453 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependency_file_4_p_0_2(
#line 1453 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1453 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1453 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1453 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1450 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependency_file_4_p_0_1(
#line 1450 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1450 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1450 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2);

#line 1453 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependencies_4_p_0_2(
#line 1453 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1453 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1453 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1453 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1450 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependencies_4_p_0_1(
#line 1450 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1450 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1450 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2);

#line 534 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__get_interface_4_p_0_3(
#line 534 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 534 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 547 "modules.m"
static void MR_CALL 
parse_tree__modules__get_interface_4_p_0_2(
#line 547 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 547 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 335 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__get_interface_4_p_0_1(
#line 335 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 335 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 335 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__modules_scalar_common_1[18][3];

static /* final */ const MR_Box parse_tree__modules_scalar_common_2[109][2];

static /* final */ const MR_Box parse_tree__modules_scalar_common_3[2][4];

static /* final */ const MR_Box parse_tree__modules_scalar_common_4[12][1];

static /* final */ const MR_Box parse_tree__modules_scalar_common_5[10][6];

static /* final */ const MR_Box parse_tree__modules_scalar_common_6[1][11];

static /* final */ const MR_Box parse_tree__modules_scalar_common_7[2][7];

static /* final */ const MR_Box parse_tree__modules_scalar_common_8[1][8];

static /* final */ const MR_Box parse_tree__modules_scalar_common_9[2][9];

static /* final */ const MR_Box parse_tree__modules_scalar_common_10[2][5];




static /* final */ const MR_Box parse_tree__modules_scalar_common_1[18][3] = {
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
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules_scalar_common_2[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__get_interface_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__get_interface_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[3])),
    ((MR_Box) (parse_tree__modules__generate_file_dependencies_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[3])),
    ((MR_Box) (parse_tree__modules__generate_file_dependency_file_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__get_foreign_self_imports_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[5])),
    ((MR_Box) (parse_tree__modules__split_into_submodules_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[6])),
    ((MR_Box) (parse_tree__modules__get_interface_and_implementation_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__get_interface_and_implementation_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__init_module_and_imports_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_10[0])),
    ((MR_Box) (parse_tree__modules__generate_dependencies_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[8])),
    ((MR_Box) (parse_tree__modules__split_into_submodules_3_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_10[1])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_2[109][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__modules_scalar_common_1[5]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__modules_scalar_common_1[2]))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "inst"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "This would normally be a"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in its interface section(s)."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "other than"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "A file should contain at least one declaration"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "To be useful, a module should export something."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "There is no need to explicitly import them."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "implicitly imports its ancestors."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Every sub-module"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[50])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "imported using both"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is inaccessible."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[44])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[44])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "occurs in interface section of parent module."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration for sub-module\n"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "implementation"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[65])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[66])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "as both a separate sub-module and a nested sub-module."))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declared"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[70])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: non-abstract instance declaration"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[74])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: item(s) after end_module declaration."))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 79 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: interface for module"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "does not export anything."))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: module"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "imports itself!"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Module"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "imports its own ancestor, module"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_4[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error in"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Either there was no prior"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration to import module"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or the interface for module"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "does not contain an"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration for module"))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) "\'.")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In interface for module"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in definition of sub-module"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: sub-module"))
  },
  /* row 107 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_4[12][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[36])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[78])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[43])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[76])))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_5[10][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0term__type_ctor_info_context_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__modules__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__modules__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_term__type_ctor_info_context_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__modules__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_6[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__modules__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_7[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_9[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__modules__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_10[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
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



#line 2048 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
  }
};

#line 2056 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2064 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2072 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 2080 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2088 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__modules__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2097 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

#line 2106 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2114 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2123 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0term__type_ctor_info_context_0
  }
};

#line 2131 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2140 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2148 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2157 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__modules__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2166 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_0 = {
  (MR_String) "output_d_file_only",
  (MR_Integer) 0
};

#line 2172 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_1 = {
  (MR_String) "output_all_dependencies",
  (MR_Integer) 1
};

#line 2178 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_generate_dependencies_mode_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_1
};

#line 2184 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_generate_dependencies_mode_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_1,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_0
};

#line 2190 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_generate_dependencies_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2196 "parse_tree.modules.c"
const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_generate_dependencies_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__modules____Unify____generate_dependencies_mode_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____generate_dependencies_mode_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "generate_dependencies_mode",
  {
    parse_tree__modules__parse_tree__modules__enum_name_ordered_generate_dependencies_mode_0
  },
  {
    parse_tree__modules__parse_tree__modules__enum_value_ordered_generate_dependencies_mode_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__modules__parse_tree__modules__functor_number_map_generate_dependencies_mode_0
};

#line 2217 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__modules__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2226 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__modules__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2234 "parse_tree.modules.c"
const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_module_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__modules____Unify____module_list_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____module_list_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "module_list",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2255 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__modules__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2264 "parse_tree.modules.c"
const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_submodule_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__modules____Unify____submodule_map_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____submodule_map_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "submodule_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2285 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____generate_dependencies_mode_0_0_10001(
#line 2288 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2290 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2292 "parse_tree.modules.c"
{
#line 2294 "parse_tree.modules.c"
  {
#line 2296 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2299 "parse_tree.modules.c"
    {
#line 2301 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____generate_dependencies_mode_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2304 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2306 "parse_tree.modules.c"
  }
#line 2308 "parse_tree.modules.c"
}

#line 2311 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____generate_dependencies_mode_0_0_10001(
#line 2314 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2316 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2318 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2320 "parse_tree.modules.c"
{
#line 2322 "parse_tree.modules.c"
  {
#line 2324 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2327 "parse_tree.modules.c"
    {
#line 2329 "parse_tree.modules.c"
      parse_tree__modules____Compare____generate_dependencies_mode_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2332 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2334 "parse_tree.modules.c"
  }
#line 2336 "parse_tree.modules.c"
}

#line 2339 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_list_0_0_10001(
#line 2342 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2344 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2346 "parse_tree.modules.c"
{
#line 2348 "parse_tree.modules.c"
  {
#line 2350 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2353 "parse_tree.modules.c"
    {
#line 2355 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____module_list_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2358 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2360 "parse_tree.modules.c"
  }
#line 2362 "parse_tree.modules.c"
}

#line 2365 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_list_0_0_10001(
#line 2368 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2370 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2372 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2374 "parse_tree.modules.c"
{
#line 2376 "parse_tree.modules.c"
  {
#line 2378 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2381 "parse_tree.modules.c"
    {
#line 2383 "parse_tree.modules.c"
      parse_tree__modules____Compare____module_list_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2386 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2388 "parse_tree.modules.c"
  }
#line 2390 "parse_tree.modules.c"
}

#line 2393 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____submodule_map_0_0_10001(
#line 2396 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2398 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2400 "parse_tree.modules.c"
{
#line 2402 "parse_tree.modules.c"
  {
#line 2404 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2407 "parse_tree.modules.c"
    {
#line 2409 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____submodule_map_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2412 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2414 "parse_tree.modules.c"
  }
#line 2416 "parse_tree.modules.c"
}

#line 2419 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____submodule_map_0_0_10001(
#line 2422 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2424 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2426 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2428 "parse_tree.modules.c"
{
#line 2430 "parse_tree.modules.c"
  {
#line 2432 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2435 "parse_tree.modules.c"
    {
#line 2437 "parse_tree.modules.c"
      parse_tree__modules____Compare____submodule_map_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2440 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2442 "parse_tree.modules.c"
  }
#line 2444 "parse_tree.modules.c"
}

#line 335 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_102_97_99_101_95_95_51_51_53_95_95_49_95_95_91_49_93_95_48_2_f_0(void)
#line 335 "modules.m"
{
#line 335 "modules.m"
  {
#line 335 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 335 "modules.m"
  }
#line 335 "modules.m"
}

#line 1256 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(
#line 1256 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1256 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2)
#line 1256 "modules.m"
{
#line 1259 "modules.m"
  {
#line 1259 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1259 "modules.m"
    if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1260 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Integer) 1;
#line 1259 "modules.m"
    else
#line 1259 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Integer) 0;
#line 1259 "modules.m"
  }
#line 1256 "modules.m"
}

#line 1013 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1(
#line 1013 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1013 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 1013 "modules.m"
{
#line 1013 "modules.m"
  {
#line 1013 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 1013 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1013 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__2_2;

#line 1013 "modules.m"
    {
#line 1013 "modules.m"
      parse_tree__modules__conv1_HeadVar__2_2 = parse_tree__modules__wrap_symname_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 1013 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__2_2));
#line 1013 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 1013 "modules.m"
  }
#line 1013 "modules.m"
}

#line 995 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(
#line 995 "modules.m"
  MR_String parse_tree__modules__FileName_10,
#line 995 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportedModules_0_23,
#line 995 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportedModules_24,
#line 995 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_UsedModules_0_25,
#line 995 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_UsedModules_26,
#line 995 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_27,
#line 995 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_28)
#line 995 "modules.m"
{
#line 1001 "modules.m"
  {
#line 1001 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1001 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_83_83 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1001 "modules.m"
    MR_Word parse_tree__modules__ImportedSet_14;
#line 1001 "modules.m"
    MR_Word parse_tree__modules__UsedSet_15;
#line 1001 "modules.m"
    MR_Word parse_tree__modules__BothSet_16;

#line 1002 "modules.m"
    {
#line 1002 "modules.m"
      mercury__set__list_to_set_2_p_0(parse_tree__modules__TypeCtorInfo_83_83, parse_tree__modules__STATE_VARIABLE_ImportedModules_0_23, &parse_tree__modules__ImportedSet_14);
    }
#line 1003 "modules.m"
    {
#line 1003 "modules.m"
      mercury__set__list_to_set_2_p_0(parse_tree__modules__TypeCtorInfo_83_83, parse_tree__modules__STATE_VARIABLE_UsedModules_0_25, &parse_tree__modules__UsedSet_15);
    }
#line 1004 "modules.m"
    {
#line 1004 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_83_83, parse_tree__modules__ImportedSet_14, parse_tree__modules__UsedSet_15, &parse_tree__modules__BothSet_16);
    }
#line 1005 "modules.m"
    {
#line 1005 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_83_83, parse_tree__modules__BothSet_16);
    }
#line 1007 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1006 "modules.m"
      {
#line 1006 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_Specs_28 = parse_tree__modules__STATE_VARIABLE_Specs_0_27;
#line 1006 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_UsedModules_26 = parse_tree__modules__STATE_VARIABLE_UsedModules_0_25;
#line 1006 "modules.m"
      }
#line 1007 "modules.m"
    else
#line 1008 "modules.m"
      {
#line 1008 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_84_84;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_85_85;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__BothList_17;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__Context_18;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__Pieces_19;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__Msg_20;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__Spec_22;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__V_30_30;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__V_33_33;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__V_34_34;
#line 1008 "modules.m"
        MR_String parse_tree__modules__V_35_35;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__V_39_39;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__V_40_40;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__V_41_41;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__V_43_43;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__V_44_44;
#line 1008 "modules.m"
        MR_String parse_tree__modules__V_45_45;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__V_66_66;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__V_67_67;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__V_70_70;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__V_71_71;
#line 1008 "modules.m"
        MR_Word parse_tree__modules__V_79_79;
#line 1012 "modules.m"
        MR_Box parse_tree__modules__conv0_V_35_35;
#line 1014 "modules.m"
        MR_Box parse_tree__modules__conv2_V_45_45;

#line 1008 "modules.m"
        {
#line 1008 "modules.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__modules__TypeCtorInfo_83_83, parse_tree__modules__BothSet_16, &parse_tree__modules__BothList_17);
        }
#line 1010 "modules.m"
        {
#line 1010 "modules.m"
          mercury__term__context_init_3_p_0(parse_tree__modules__FileName_10, (MR_Integer) 1, &parse_tree__modules__Context_18);
        }
#line 2646 "parse_tree.modules.c"
        parse_tree__modules__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 2648 "parse_tree.modules.c"
        parse_tree__modules__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1012 "modules.m"
        {
#line 1012 "modules.m"
          parse_tree__modules__conv0_V_35_35 = parse_tree__error_util__choose_number_3_f_0(parse_tree__modules__TypeCtorInfo_83_83, parse_tree__modules__TypeCtorInfo_85_85, parse_tree__modules__BothList_17, ((MR_Box) ((MR_String) "module")), ((MR_Box) ((MR_String) "modules")));
        }
#line 1012 "modules.m"
        parse_tree__modules__V_35_35 = ((MR_String) parse_tree__modules__conv0_V_35_35);
#line 1012 "modules.m"
        {
#line 1012 "modules.m"
          parse_tree__modules__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1012 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_34_34, 1) = ((MR_Box) (parse_tree__modules__V_35_35));
#line 1012 "modules.m"
        }
#line 1012 "modules.m"
        {
#line 1012 "modules.m"
          parse_tree__modules__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 0) = ((MR_Box) (parse_tree__modules__V_34_34));
#line 1012 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "modules.m"
        }
#line 1011 "modules.m"
        {
#line 1011 "modules.m"
          parse_tree__modules__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[108])));
#line 1011 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_30_30, 1) = ((MR_Box) (parse_tree__modules__V_33_33));
#line 1011 "modules.m"
        }
#line 1013 "modules.m"
        {
#line 1013 "modules.m"
          parse_tree__modules__V_41_41 = mercury__list__map_2_f_0(parse_tree__modules__TypeCtorInfo_83_83, parse_tree__modules__TypeCtorInfo_84_84, (MR_Word) &parse_tree__modules_scalar_common_1[17], parse_tree__modules__BothList_17);
        }
#line 1013 "modules.m"
        {
#line 1013 "modules.m"
          parse_tree__modules__V_40_40 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__modules__V_41_41);
        }
#line 1014 "modules.m"
        {
#line 1014 "modules.m"
          parse_tree__modules__conv2_V_45_45 = parse_tree__error_util__choose_number_3_f_0(parse_tree__modules__TypeCtorInfo_83_83, parse_tree__modules__TypeCtorInfo_85_85, parse_tree__modules__BothList_17, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
        }
#line 1014 "modules.m"
        parse_tree__modules__V_45_45 = ((MR_String) parse_tree__modules__conv2_V_45_45);
#line 1014 "modules.m"
        {
#line 1014 "modules.m"
          parse_tree__modules__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1014 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_44_44, 1) = ((MR_Box) (parse_tree__modules__V_45_45));
#line 1014 "modules.m"
        }
#line 1014 "modules.m"
        {
#line 1014 "modules.m"
          parse_tree__modules__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 0) = ((MR_Box) (parse_tree__modules__V_44_44));
#line 1014 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[53])));
#line 1014 "modules.m"
        }
#line 1013 "modules.m"
        {
#line 1013 "modules.m"
          parse_tree__modules__V_39_39 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_84_84, parse_tree__modules__V_40_40, parse_tree__modules__V_43_43);
        }
#line 1012 "modules.m"
        {
#line 1012 "modules.m"
          parse_tree__modules__Pieces_19 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_84_84, parse_tree__modules__V_30_30, parse_tree__modules__V_39_39);
        }
#line 1018 "modules.m"
        {
#line 1018 "modules.m"
          parse_tree__modules__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_71_71, 0) = ((MR_Box) (parse_tree__modules__Pieces_19));
#line 1018 "modules.m"
        }
#line 1018 "modules.m"
        {
#line 1018 "modules.m"
          parse_tree__modules__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_70_70, 0) = ((MR_Box) (parse_tree__modules__V_71_71));
#line 1018 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1018 "modules.m"
        }
#line 1018 "modules.m"
        {
#line 1018 "modules.m"
          parse_tree__modules__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_67_67, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 1018 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_67_67, 1) = ((MR_Box) (parse_tree__modules__V_70_70));
#line 1018 "modules.m"
        }
#line 1018 "modules.m"
        {
#line 1018 "modules.m"
          parse_tree__modules__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 0) = ((MR_Box) (parse_tree__modules__V_67_67));
#line 1018 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1018 "modules.m"
        }
#line 1017 "modules.m"
        {
#line 1017 "modules.m"
          parse_tree__modules__Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_20, 0) = ((MR_Box) (parse_tree__modules__Context_18));
#line 1017 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_20, 1) = ((MR_Box) (parse_tree__modules__V_66_66));
#line 1017 "modules.m"
        }
#line 1021 "modules.m"
        {
#line 1021 "modules.m"
          parse_tree__modules__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_79_79, 0) = ((MR_Box) (parse_tree__modules__Msg_20));
#line 1021 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "modules.m"
        }
#line 1021 "modules.m"
        {
#line 1021 "modules.m"
          parse_tree__modules__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1021 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[1])));
#line 1021 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1021 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_22, 2) = ((MR_Box) (parse_tree__modules__V_79_79));
#line 1021 "modules.m"
        }
#line 1022 "modules.m"
        {
#line 1022 "modules.m"
          MR_Word base;
#line 1022 "modules.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Specs_28 = base;
#line 1022 "modules.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_22));
#line 1022 "modules.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_27));
#line 1022 "modules.m"
        }
#line 1026 "modules.m"
        {
#line 1026 "modules.m"
          mercury__list__delete_elems_3_p_0(parse_tree__modules__TypeCtorInfo_83_83, parse_tree__modules__STATE_VARIABLE_UsedModules_0_25, parse_tree__modules__BothList_17, parse_tree__modules__STATE_VARIABLE_UsedModules_26);
        }
#line 1008 "modules.m"
      }
#line 1026 "modules.m"
    *parse_tree__modules__STATE_VARIABLE_ImportedModules_24 = parse_tree__modules__STATE_VARIABLE_ImportedModules_0_23;
#line 1001 "modules.m"
  }
#line 995 "modules.m"
}

#line 967 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_12_p_0(
#line 967 "modules.m"
  MR_String parse_tree__modules__FileName_14,
#line 967 "modules.m"
  MR_Word parse_tree__modules__IntImportedModules0_15,
#line 967 "modules.m"
  MR_Word * parse_tree__modules__IntImportedModules_16,
#line 967 "modules.m"
  MR_Word parse_tree__modules__IntUsedModules0_17,
#line 967 "modules.m"
  MR_Word * parse_tree__modules__IntUsedModules_18,
#line 967 "modules.m"
  MR_Word parse_tree__modules__ImpImportedModules0_19,
#line 967 "modules.m"
  MR_Word * parse_tree__modules__ImpImportedModules_20,
#line 967 "modules.m"
  MR_Word parse_tree__modules__ImpUsedModules0_21,
#line 967 "modules.m"
  MR_Word * parse_tree__modules__ImpUsedModules_22,
#line 967 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 967 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27)
#line 967 "modules.m"
{
#line 978 "modules.m"
  {
#line 978 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 978 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules1_24;
#line 978 "modules.m"
    MR_Word parse_tree__modules__ImpUsedModules1_25;
#line 978 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_28_28;
#line 978 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_29_29;

#line 980 "modules.m"
    {
#line 980 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__FileName_14, parse_tree__modules__IntImportedModules0_15, &parse_tree__modules__IntImportedModules1_24, parse_tree__modules__IntUsedModules0_17, parse_tree__modules__IntUsedModules_18, parse_tree__modules__STATE_VARIABLE_Specs_0_26, &parse_tree__modules__STATE_VARIABLE_Specs_28_28);
    }
#line 983 "modules.m"
    {
#line 983 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__FileName_14, parse_tree__modules__IntImportedModules1_24, parse_tree__modules__IntImportedModules_16, parse_tree__modules__ImpUsedModules0_21, &parse_tree__modules__ImpUsedModules1_25, parse_tree__modules__STATE_VARIABLE_Specs_28_28, &parse_tree__modules__STATE_VARIABLE_Specs_29_29);
    }
#line 987 "modules.m"
    {
#line 987 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__FileName_14, parse_tree__modules__ImpImportedModules0_19, parse_tree__modules__ImpImportedModules_20, parse_tree__modules__ImpUsedModules1_25, parse_tree__modules__ImpUsedModules_22, parse_tree__modules__STATE_VARIABLE_Specs_29_29, parse_tree__modules__STATE_VARIABLE_Specs_27);
#line 987 "modules.m"
      return;
    }
#line 978 "modules.m"
  }
#line 967 "modules.m"
}

#line 356 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_116_101_114_102_97_99_101_95_97_110_100_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_97_99_99_95_95_91_49_93_95_48_8_p_0(
#line 356 "modules.m"
  MR_Word parse_tree__modules__IncludeImplTypes_1,
#line 356 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 356 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InInterface_0_3,
#line 356 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevIntItems_0_4,
#line 356 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevIntItems_5,
#line 356 "modules.m"
  MR_Word parse_tree__modules__AddImplItem_6,
#line 356 "modules.m"
  MR_Box parse_tree__modules__STATE_VARIABLE_RevImplItems_0_7,
#line 356 "modules.m"
  MR_Box * parse_tree__modules__STATE_VARIABLE_RevImplItems_8)
#line 356 "modules.m"
{
#line 360 "modules.m"
  while (MR_TRUE)
#line 360 "modules.m"
    {
#line 360 "modules.m"
      /* tailcall optimized into a loop */
#line 360 "modules.m"
      {
#line 360 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 360 "modules.m"
        if ((parse_tree__modules__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 360 "modules.m"
          {
#line 360 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_RevImplItems_8 = parse_tree__modules__STATE_VARIABLE_RevImplItems_0_7;
#line 360 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_RevIntItems_5 = parse_tree__modules__STATE_VARIABLE_RevIntItems_0_4;
#line 360 "modules.m"
          }
#line 360 "modules.m"
        else
#line 362 "modules.m"
          {
#line 362 "modules.m"
            MR_Word parse_tree__modules__Item_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__2_2, (MR_Integer) 0)));
#line 362 "modules.m"
            MR_Word parse_tree__modules__Rest_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__2_2, (MR_Integer) 1)));
#line 391 "modules.m"
            MR_Word parse_tree__modules__ModuleDefn_26;
#line 364 "modules.m"
            MR_Word parse_tree__modules__ItemModuleDefn_25;
#line 365 "modules.m"
            MR_Word parse_tree__modules__V_27_27;
#line 365 "modules.m"
            MR_Integer parse_tree__modules__V_28_28;

#line 364 "modules.m"
            parse_tree__modules__succeeded = ((MR_tag((MR_Word) parse_tree__modules__Item_19)) == (MR_mktag((MR_Integer) 2)));
#line 364 "modules.m"
            if (parse_tree__modules__succeeded)
#line 364 "modules.m"
              {
#line 364 "modules.m"
                parse_tree__modules__ItemModuleDefn_25 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_19), (MR_Integer) 2);
#line 365 "modules.m"
                parse_tree__modules__ModuleDefn_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_25, (MR_Integer) 0)));
#line 365 "modules.m"
                parse_tree__modules__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_25, (MR_Integer) 1)));
#line 365 "modules.m"
                parse_tree__modules__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_25, (MR_Integer) 2)));
#line 367 "modules.m"
                if ((parse_tree__modules__ModuleDefn_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 367 "modules.m"
                  parse_tree__modules__succeeded = MR_TRUE;
#line 367 "modules.m"
                else
#line 367 "modules.m"
                  if ((parse_tree__modules__ModuleDefn_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "modules.m"
                    parse_tree__modules__succeeded = MR_TRUE;
#line 367 "modules.m"
                  else
#line 367 "modules.m"
                    if (((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_26)) == (MR_mktag((MR_Integer) 1))))
#line 368 "modules.m"
                      parse_tree__modules__succeeded = MR_TRUE;
#line 367 "modules.m"
                    else
#line 367 "modules.m"
                      if (((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_26)) == (MR_mktag((MR_Integer) 2))))
#line 369 "modules.m"
                        parse_tree__modules__succeeded = MR_TRUE;
#line 367 "modules.m"
                      else
#line 367 "modules.m"
                        parse_tree__modules__succeeded = MR_FALSE;
#line 364 "modules.m"
              }
#line 391 "modules.m"
            if (parse_tree__modules__succeeded)
#line 378 "modules.m"
              if ((parse_tree__modules__ModuleDefn_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 379 "modules.m"
                {
#line 379 "modules.m"
                  MR_Word parse_tree__modules__STATE_VARIABLE_RevIntItems_42_42;

#line 380 "modules.m"
                  {
#line 380 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_RevIntItems_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevIntItems_42_42, 0) = ((MR_Box) (parse_tree__modules__Item_19));
#line 380 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevIntItems_42_42, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevIntItems_0_4));
#line 380 "modules.m"
                  }
#line 382 "modules.m"
                  /* direct tailcall eliminated */
#line 382 "modules.m"
                  {
#line 382 "modules.m"
                    MR_Word parse_tree__modules__HeadVar__2__tmp_copy_2 = parse_tree__modules__Rest_20;
#line 382 "modules.m"
                    MR_Word parse_tree__modules__STATE_VARIABLE_RevIntItems_0__tmp_copy_4 = parse_tree__modules__STATE_VARIABLE_RevIntItems_42_42;

#line 382 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_RevIntItems_0_4 = parse_tree__modules__STATE_VARIABLE_RevIntItems_0__tmp_copy_4;
#line 382 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_InInterface_0_3 = (MR_Integer) 0;
#line 382 "modules.m"
                    parse_tree__modules__HeadVar__2_2 = parse_tree__modules__HeadVar__2__tmp_copy_2;
#line 382 "modules.m"
                  }
#line 382 "modules.m"
                  continue;
#line 379 "modules.m"
                }
#line 378 "modules.m"
              else
#line 378 "modules.m"
                if ((parse_tree__modules__ModuleDefn_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 373 "modules.m"
                  {
#line 373 "modules.m"
                    MR_Word parse_tree__modules__STATE_VARIABLE_RevIntItems_46_46;

#line 374 "modules.m"
                    {
#line 374 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_RevIntItems_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "modules.m"
                      MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevIntItems_46_46, 0) = ((MR_Box) (parse_tree__modules__Item_19));
#line 374 "modules.m"
                      MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevIntItems_46_46, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevIntItems_0_4));
#line 374 "modules.m"
                    }
#line 376 "modules.m"
                    /* direct tailcall eliminated */
#line 376 "modules.m"
                    {
#line 376 "modules.m"
                      MR_Word parse_tree__modules__HeadVar__2__tmp_copy_2 = parse_tree__modules__Rest_20;
#line 376 "modules.m"
                      MR_Word parse_tree__modules__STATE_VARIABLE_RevIntItems_0__tmp_copy_4 = parse_tree__modules__STATE_VARIABLE_RevIntItems_46_46;

#line 376 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_RevIntItems_0_4 = parse_tree__modules__STATE_VARIABLE_RevIntItems_0__tmp_copy_4;
#line 376 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InInterface_0_3 = (MR_Integer) 1;
#line 376 "modules.m"
                      parse_tree__modules__HeadVar__2_2 = parse_tree__modules__HeadVar__2__tmp_copy_2;
#line 376 "modules.m"
                    }
#line 376 "modules.m"
                    continue;
#line 373 "modules.m"
                  }
#line 378 "modules.m"
                else
#line 378 "modules.m"
                  if (((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_26)) == (MR_mktag((MR_Integer) 1))))
#line 385 "modules.m"
                    {
#line 385 "modules.m"
                      *parse_tree__modules__STATE_VARIABLE_RevIntItems_5 = parse_tree__modules__STATE_VARIABLE_RevIntItems_0_4;
#line 385 "modules.m"
                      *parse_tree__modules__STATE_VARIABLE_RevImplItems_8 = parse_tree__modules__STATE_VARIABLE_RevImplItems_0_7;
#line 385 "modules.m"
                    }
#line 378 "modules.m"
                  else
#line 386 "modules.m"
                    {
#line 386 "modules.m"
                      *parse_tree__modules__STATE_VARIABLE_RevIntItems_5 = parse_tree__modules__STATE_VARIABLE_RevIntItems_0_4;
#line 386 "modules.m"
                      *parse_tree__modules__STATE_VARIABLE_RevImplItems_8 = parse_tree__modules__STATE_VARIABLE_RevImplItems_0_7;
#line 386 "modules.m"
                    }
#line 391 "modules.m"
            else
#line 424 "modules.m"
              {
#line 424 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_RevIntItems_55_55;
#line 424 "modules.m"
                MR_Box parse_tree__modules__STATE_VARIABLE_RevImplItems_56_56;

#line 406 "modules.m"
                if ((parse_tree__modules__STATE_VARIABLE_InInterface_0_3 == (MR_Integer) 0))
#line 407 "modules.m"
                  {
#line 408 "modules.m"
                    MR_Box MR_CALL (* parse_tree__modules__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__AddImplItem_6, (MR_Integer) 1)));
#line 410 "modules.m"
                    MR_Word parse_tree__modules__V_51_51;

#line 408 "modules.m"
                    {
#line 408 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_RevImplItems_56_56 = parse_tree__modules__func_0(((MR_Box) parse_tree__modules__AddImplItem_6), ((MR_Box) (parse_tree__modules__Item_19)), parse_tree__modules__STATE_VARIABLE_RevImplItems_0_7);
                    }
#line 410 "modules.m"
                    parse_tree__modules__succeeded = (parse_tree__modules__IncludeImplTypes_1 == (MR_Integer) 1);
#line 410 "modules.m"
                    if (parse_tree__modules__succeeded)
#line 410 "modules.m"
                      {
#line 411 "modules.m"
                        {
#line 411 "modules.m"
                          parse_tree__modules__V_51_51 = parse_tree__modules__include_in_int_file_implementation_1_f_0(parse_tree__modules__Item_19);
                        }
#line 411 "modules.m"
                        parse_tree__modules__succeeded = (parse_tree__modules__V_51_51 == (MR_Integer) 1);
#line 410 "modules.m"
                      }
#line 421 "modules.m"
                    if (parse_tree__modules__succeeded)
#line 419 "modules.m"
                      {
#line 419 "modules.m"
                        MR_Word parse_tree__modules__ItemToAdd_36;
#line 415 "modules.m"
                        MR_Word parse_tree__modules__AbstractItem_66;

#line 413 "modules.m"
                        {
#line 413 "modules.m"
                          parse_tree__modules__succeeded = parse_tree__item_util__make_abstract_defn_3_p_0(parse_tree__modules__Item_19, (MR_Integer) 0, &parse_tree__modules__AbstractItem_66);
                        }
#line 415 "modules.m"
                        if (parse_tree__modules__succeeded)
#line 414 "modules.m"
                          parse_tree__modules__ItemToAdd_36 = parse_tree__modules__AbstractItem_66;
#line 415 "modules.m"
                        else
#line 417 "modules.m"
                          {
#line 417 "modules.m"
                            MR_Word parse_tree__modules__AbstractItem_65;

#line 415 "modules.m"
                            {
#line 415 "modules.m"
                              parse_tree__modules__succeeded = parse_tree__item_util__make_abstract_unify_compare_3_p_0(parse_tree__modules__Item_19, (MR_Integer) 0, &parse_tree__modules__AbstractItem_65);
                            }
#line 417 "modules.m"
                            if (parse_tree__modules__succeeded)
#line 416 "modules.m"
                              parse_tree__modules__ItemToAdd_36 = parse_tree__modules__AbstractItem_65;
#line 417 "modules.m"
                            else
#line 418 "modules.m"
                              parse_tree__modules__ItemToAdd_36 = parse_tree__modules__Item_19;
#line 417 "modules.m"
                          }
#line 420 "modules.m"
                        {
#line 420 "modules.m"
                          parse_tree__modules__STATE_VARIABLE_RevIntItems_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "modules.m"
                          MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevIntItems_55_55, 0) = ((MR_Box) (parse_tree__modules__ItemToAdd_36));
#line 420 "modules.m"
                          MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevIntItems_55_55, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevIntItems_0_4));
#line 420 "modules.m"
                        }
#line 419 "modules.m"
                      }
#line 421 "modules.m"
                    else
#line 420 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_RevIntItems_55_55 = parse_tree__modules__STATE_VARIABLE_RevIntItems_0_4;
#line 407 "modules.m"
                  }
#line 406 "modules.m"
                else
#line 403 "modules.m"
                  {
#line 403 "modules.m"
                    MR_Word parse_tree__modules__ItemInstance_33;

#line 394 "modules.m"
                    parse_tree__modules__succeeded = ((((MR_tag((MR_Word) parse_tree__modules__Item_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_19, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 394 "modules.m"
                    if (parse_tree__modules__succeeded)
#line 394 "modules.m"
                      {
#line 394 "modules.m"
                        parse_tree__modules__ItemInstance_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_19, (MR_Integer) 1)));
#line 397 "modules.m"
                        {
#line 397 "modules.m"
                          MR_Word parse_tree__modules__AbstractItemInstance_34;
#line 397 "modules.m"
                          MR_Word parse_tree__modules__AbstractItem_35;
#line 402 "modules.m"
                          MR_Box MR_CALL (* parse_tree__modules__func_1)(MR_Box, MR_Box, MR_Box);

#line 397 "modules.m"
                          {
#line 397 "modules.m"
                            parse_tree__modules__AbstractItemInstance_34 = parse_tree__item_util__make_instance_abstract_1_f_0(parse_tree__modules__ItemInstance_33);
                          }
#line 398 "modules.m"
                          {
#line 398 "modules.m"
                            parse_tree__modules__AbstractItem_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "modules.m"
                            MR_hl_field(MR_mktag(3), parse_tree__modules__AbstractItem_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 398 "modules.m"
                            MR_hl_field(MR_mktag(3), parse_tree__modules__AbstractItem_35, 1) = ((MR_Box) (parse_tree__modules__AbstractItemInstance_34));
#line 398 "modules.m"
                          }
#line 399 "modules.m"
                          {
#line 399 "modules.m"
                            parse_tree__modules__STATE_VARIABLE_RevIntItems_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "modules.m"
                            MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevIntItems_55_55, 0) = ((MR_Box) (parse_tree__modules__AbstractItem_35));
#line 399 "modules.m"
                            MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevIntItems_55_55, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevIntItems_0_4));
#line 399 "modules.m"
                          }
#line 402 "modules.m"
                          parse_tree__modules__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__AddImplItem_6, (MR_Integer) 1)));
#line 402 "modules.m"
                          {
#line 402 "modules.m"
                            parse_tree__modules__STATE_VARIABLE_RevImplItems_56_56 = parse_tree__modules__func_1(((MR_Box) parse_tree__modules__AddImplItem_6), ((MR_Box) (parse_tree__modules__Item_19)), parse_tree__modules__STATE_VARIABLE_RevImplItems_0_7);
                          }
#line 397 "modules.m"
                        }
#line 394 "modules.m"
                      }
#line 394 "modules.m"
                    else
#line 404 "modules.m"
                      {
#line 404 "modules.m"
                        {
#line 404 "modules.m"
                          parse_tree__modules__STATE_VARIABLE_RevIntItems_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "modules.m"
                          MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevIntItems_55_55, 0) = ((MR_Box) (parse_tree__modules__Item_19));
#line 404 "modules.m"
                          MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevIntItems_55_55, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevIntItems_0_4));
#line 404 "modules.m"
                        }
#line 404 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_RevImplItems_56_56 = parse_tree__modules__STATE_VARIABLE_RevImplItems_0_7;
#line 404 "modules.m"
                      }
#line 403 "modules.m"
                  }
#line 425 "modules.m"
                /* direct tailcall eliminated */
#line 425 "modules.m"
                {
#line 425 "modules.m"
                  MR_Word parse_tree__modules__HeadVar__2__tmp_copy_2 = parse_tree__modules__Rest_20;
#line 425 "modules.m"
                  MR_Word parse_tree__modules__STATE_VARIABLE_RevIntItems_0__tmp_copy_4 = parse_tree__modules__STATE_VARIABLE_RevIntItems_55_55;
#line 425 "modules.m"
                  MR_Box parse_tree__modules__STATE_VARIABLE_RevImplItems_0__tmp_copy_7 = parse_tree__modules__STATE_VARIABLE_RevImplItems_56_56;

#line 425 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_RevImplItems_0_7 = parse_tree__modules__STATE_VARIABLE_RevImplItems_0__tmp_copy_7;
#line 425 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_RevIntItems_0_4 = parse_tree__modules__STATE_VARIABLE_RevIntItems_0__tmp_copy_4;
#line 425 "modules.m"
                  parse_tree__modules__HeadVar__2_2 = parse_tree__modules__HeadVar__2__tmp_copy_2;
#line 425 "modules.m"
                }
#line 425 "modules.m"
                continue;
#line 424 "modules.m"
              }
#line 362 "modules.m"
          }
#line 360 "modules.m"
      }
#line 360 "modules.m"
      break;
#line 360 "modules.m"
    }
#line 356 "modules.m"
}

#line 1513 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__generate_dependencies__1513__1_2_p_0(
#line 1513 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_101,
#line 1513 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_102)
#line 1513 "modules.m"
{
#line 1513 "modules.m"
  {
#line 1513 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1513 "modules.m"
    {
#line 1513 "modules.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__modules__HeadVar__1_101, parse_tree__modules__HeadVar__2_102);
#line 1513 "modules.m"
      return;
    }
#line 1513 "modules.m"
  }
#line 1513 "modules.m"
}

#line 1316 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__check_module_accessibility__1316__1_3_p_0(
#line 1316 "modules.m"
  MR_Word parse_tree__modules__ImportedModule_10,
#line 1316 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_28,
#line 1316 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__3_29)
#line 1316 "modules.m"
{
#line 1316 "modules.m"
  {
#line 1316 "modules.m"
    MR_bool parse_tree__modules__succeeded = ((MR_tag((MR_Word) parse_tree__modules__HeadVar__2_28)) == (MR_mktag((MR_Integer) 2)));
#line 1316 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_38_38;
#line 1316 "modules.m"
    MR_Word parse_tree__modules__ItemModuleDefn_17;
#line 1316 "modules.m"
    MR_Word parse_tree__modules__ModuleDefn_18;
#line 1316 "modules.m"
    MR_Word parse_tree__modules__Context_19;
#line 1316 "modules.m"
    MR_Word parse_tree__modules__ItemModuleSpecs_21;
#line 1316 "modules.m"
    MR_String parse_tree__modules__DeclName_22;
#line 1318 "modules.m"
    MR_Integer parse_tree__modules__V_20_20;

#line 1317 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1317 "modules.m"
      {
#line 1317 "modules.m"
        parse_tree__modules__ItemModuleDefn_17 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__HeadVar__2_28), (MR_Integer) 2);
#line 1318 "modules.m"
        parse_tree__modules__ModuleDefn_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_17, (MR_Integer) 0)));
#line 1318 "modules.m"
        parse_tree__modules__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_17, (MR_Integer) 1)));
#line 1318 "modules.m"
        parse_tree__modules__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_17, (MR_Integer) 2)));
#line 1322 "modules.m"
        if (((((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_18, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1320 "modules.m"
          {
#line 1320 "modules.m"
            parse_tree__modules__ItemModuleSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_18, (MR_Integer) 1)));
#line 1321 "modules.m"
            parse_tree__modules__DeclName_22 = (MR_String) "import_module";
#line 1320 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 1320 "modules.m"
          }
#line 1322 "modules.m"
        else
#line 1322 "modules.m"
          if (((((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_18, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1323 "modules.m"
            {
#line 1323 "modules.m"
              parse_tree__modules__ItemModuleSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_18, (MR_Integer) 1)));
#line 1324 "modules.m"
              parse_tree__modules__DeclName_22 = (MR_String) "use_module";
#line 1323 "modules.m"
              parse_tree__modules__succeeded = MR_TRUE;
#line 1323 "modules.m"
            }
#line 1322 "modules.m"
          else
#line 1322 "modules.m"
            parse_tree__modules__succeeded = MR_FALSE;
#line 1316 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1316 "modules.m"
          {
#line 3409 "parse_tree.modules.c"
            parse_tree__modules__TypeCtorInfo_38_38 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1326 "modules.m"
            {
#line 1326 "modules.m"
              parse_tree__modules__succeeded = mercury__list__member_2_p_0(parse_tree__modules__TypeCtorInfo_38_38, ((MR_Box) (parse_tree__modules__ImportedModule_10)), parse_tree__modules__ItemModuleSpecs_21);
            }
#line 1316 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1316 "modules.m"
              {
#line 1327 "modules.m"
                {
#line 1327 "modules.m"
                  MR_Word base;
#line 1327 "modules.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1327 "modules.m"
                  *parse_tree__modules__HeadVar__3_29 = base;
#line 1327 "modules.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__DeclName_22));
#line 1327 "modules.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__Context_19));
#line 1327 "modules.m"
                }
#line 1327 "modules.m"
                parse_tree__modules__succeeded = MR_TRUE;
#line 1316 "modules.m"
              }
#line 1316 "modules.m"
          }
#line 1317 "modules.m"
      }
#line 1316 "modules.m"
    return parse_tree__modules__succeeded;
#line 1316 "modules.m"
  }
#line 1316 "modules.m"
}

#line 916 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_2(
#line 916 "modules.m"
  void * parse_tree__modules__env_ptr_arg)
#line 916 "modules.m"
{
#line 916 "modules.m"
  {
#line 916 "modules.m"
    struct parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0_s * parse_tree__modules__env_ptr = (struct parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0_s *) parse_tree__modules__env_ptr_arg;

#line 916 "modules.m"
    *((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__HeadVar__4_23) = ((MR_Word) (parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__conv0_HeadVar__4_23);
#line 916 "modules.m"
    {
#line 916 "modules.m"
      parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_1(parse_tree__modules__env_ptr);
#line 916 "modules.m"
      return;
    }
#line 916 "modules.m"
  }
#line 916 "modules.m"
}

#line 915 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_1(
#line 915 "modules.m"
  void * parse_tree__modules__env_ptr_arg)
#line 915 "modules.m"
{
#line 915 "modules.m"
  {
#line 915 "modules.m"
    struct parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0_s * parse_tree__modules__env_ptr = (struct parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0_s *) parse_tree__modules__env_ptr_arg;

#line 917 "modules.m"
    {
#line 917 "modules.m"
      (parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__TypeCtorInfo_52_52, ((MR_Box) (*((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__HeadVar__4_23))), (parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__ImportedModules_11);
    }
#line 918 "modules.m"
    if (!((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__succeeded))
#line 918 "modules.m"
      {
#line 918 "modules.m"
        (parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__TypeCtorInfo_52_52, ((MR_Box) (*((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__HeadVar__4_23))), (parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__UsedModules_12);
      }
#line 918 "modules.m"
    if ((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__succeeded)
#line 918 "modules.m"
      {
#line 918 "modules.m"
        ((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__cont)((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__cont_env_ptr);
#line 918 "modules.m"
        return;
      }
#line 915 "modules.m"
  }
#line 915 "modules.m"
}

#line 915 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0(
#line 915 "modules.m"
  MR_Word parse_tree__modules__AncestorModules_10,
#line 915 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_11,
#line 915 "modules.m"
  MR_Word parse_tree__modules__UsedModules_12,
#line 915 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__4_23,
#line 915 "modules.m"
  MR_Cont parse_tree__modules__cont,
#line 915 "modules.m"
  void * parse_tree__modules__cont_env_ptr)
#line 915 "modules.m"
{
#line 915 "modules.m"
  {
#line 915 "modules.m"
    struct parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0_s parse_tree__modules__env;

#line 915 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__ImportedModules_11 = parse_tree__modules__ImportedModules_11;
#line 915 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__UsedModules_12 = parse_tree__modules__UsedModules_12;
#line 915 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__HeadVar__4_23 = parse_tree__modules__HeadVar__4_23;
#line 915 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__cont = parse_tree__modules__cont;
#line 915 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__cont_env_ptr = parse_tree__modules__cont_env_ptr;
#line 3545 "parse_tree.modules.c"
    (parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__TypeCtorInfo_52_52 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 916 "modules.m"
    {
#line 916 "modules.m"
      mercury__list__member_2_p_1((parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__TypeCtorInfo_52_52, &(parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_env_0__conv0_HeadVar__4_23, parse_tree__modules__AncestorModules_10, parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0_2, &parse_tree__modules__env);
    }
#line 915 "modules.m"
  }
#line 915 "modules.m"
}

#line 346 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__IntroducedFrom__func__get_interface_and_implementation__346__1_2_f_0(
#line 346 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_17,
#line 346 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_18)
#line 346 "modules.m"
{
#line 346 "modules.m"
  {
#line 346 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 346 "modules.m"
    MR_Word parse_tree__modules__HeadVar__3_19;

#line 346 "modules.m"
    {
#line 346 "modules.m"
      parse_tree__modules__HeadVar__3_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_19, 0) = ((MR_Box) (parse_tree__modules__HeadVar__1_17));
#line 346 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_19, 1) = ((MR_Box) (parse_tree__modules__HeadVar__2_18));
#line 346 "modules.m"
    }
#line 346 "modules.m"
    return parse_tree__modules__HeadVar__3_19;
#line 346 "modules.m"
  }
#line 346 "modules.m"
}

#line 335 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__func__get_interface__335__1_2_f_0(
#line 335 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_15)
#line 335 "modules.m"
{
#line 335 "modules.m"
  {
#line 335 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 335 "modules.m"
    {
#line 335 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_105_110_116_101_114_102_97_99_101_95_95_51_51_53_95_95_49_95_95_91_49_93_95_48_2_f_0();
#line 335 "modules.m"
      return;
    }
#line 335 "modules.m"
  }
#line 335 "modules.m"
}

#line 1673 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____submodule_map_0_0(
#line 1673 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1673 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1673 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1673 "modules.m"
{
#line 1673 "modules.m"
  {
#line 1673 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1673 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 1673 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 1673 "modules.m"
    {
#line 1673 "modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__modules_scalar_common_1[4], parse_tree__modules__HeadVar__1_1, ((MR_Box) (parse_tree__modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_5)));
#line 1673 "modules.m"
      return;
    }
#line 1673 "modules.m"
  }
#line 1673 "modules.m"
}

#line 1673 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____submodule_map_0_0(
#line 1673 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1673 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1673 "modules.m"
{
#line 1673 "modules.m"
  {
#line 1673 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1673 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 1673 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 1673 "modules.m"
    {
#line 1673 "modules.m"
      return parse_tree__modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__modules_scalar_common_1[4], ((MR_Box) (parse_tree__modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_4)));
    }
#line 1673 "modules.m"
    return parse_tree__modules__succeeded;
#line 1673 "modules.m"
  }
#line 1673 "modules.m"
}

#line 287 "modules.m"
void MR_CALL 
parse_tree__modules____Compare____module_list_0_0(
#line 287 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 287 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 287 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 287 "modules.m"
{
#line 287 "modules.m"
  {
#line 287 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 287 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 287 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 287 "modules.m"
    {
#line 287 "modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__modules_scalar_common_2[6], parse_tree__modules__HeadVar__1_1, ((MR_Box) (parse_tree__modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_5)));
#line 287 "modules.m"
      return;
    }
#line 287 "modules.m"
  }
#line 287 "modules.m"
}

#line 287 "modules.m"
MR_bool MR_CALL 
parse_tree__modules____Unify____module_list_0_0(
#line 287 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 287 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 287 "modules.m"
{
#line 287 "modules.m"
  {
#line 287 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 287 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 287 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 287 "modules.m"
    {
#line 287 "modules.m"
      return parse_tree__modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__modules_scalar_common_2[6], ((MR_Box) (parse_tree__modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_4)));
    }
#line 287 "modules.m"
    return parse_tree__modules__succeeded;
#line 287 "modules.m"
  }
#line 287 "modules.m"
}

#line 1455 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____generate_dependencies_mode_0_0(
#line 1455 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1455 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1455 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1455 "modules.m"
{
#line 1455 "modules.m"
  {
#line 1455 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1455 "modules.m"
    MR_Integer parse_tree__modules__Cast_HeadVar1_4 = (MR_Integer) parse_tree__modules__HeadVar__2_2;
#line 1455 "modules.m"
    MR_Integer parse_tree__modules__Cast_HeadVar2_5 = (MR_Integer) parse_tree__modules__HeadVar__3_3;

#line 1455 "modules.m"
    {
#line 1455 "modules.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__Cast_HeadVar1_4, parse_tree__modules__Cast_HeadVar2_5);
#line 1455 "modules.m"
      return;
    }
#line 1455 "modules.m"
  }
#line 1455 "modules.m"
}

#line 1455 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____generate_dependencies_mode_0_0(
#line 1455 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_1,
#line 1455 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1455 "modules.m"
{
#line 3779 "parse_tree.modules.c"
  {
#line 3781 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded = (parse_tree__modules__HeadVar__2_1 == parse_tree__modules__HeadVar__2_2);

#line 3784 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 3786 "parse_tree.modules.c"
  }
#line 1455 "modules.m"
}

#line 1926 "modules.m"
static void MR_CALL 
parse_tree__modules__report_non_abstract_instance_in_interface_3_p_0(
#line 1926 "modules.m"
  MR_Word parse_tree__modules__Context_4,
#line 1926 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_9,
#line 1926 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_10)
#line 1926 "modules.m"
{
#line 1929 "modules.m"
  {
#line 1929 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1929 "modules.m"
    MR_Word parse_tree__modules__Msg_7;
#line 1929 "modules.m"
    MR_Word parse_tree__modules__Spec_8;
#line 1929 "modules.m"
    MR_Word parse_tree__modules__V_22_22;

#line 1932 "modules.m"
    {
#line 1932 "modules.m"
      parse_tree__modules__Msg_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1932 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_7, 0) = ((MR_Box) (parse_tree__modules__Context_4));
#line 1932 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[107])));
#line 1932 "modules.m"
    }
#line 1933 "modules.m"
    {
#line 1933 "modules.m"
      parse_tree__modules__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1933 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_22_22, 0) = ((MR_Box) (parse_tree__modules__Msg_7));
#line 1933 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1933 "modules.m"
    }
#line 1933 "modules.m"
    {
#line 1933 "modules.m"
      parse_tree__modules__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1933 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1933 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1933 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_8, 2) = ((MR_Box) (parse_tree__modules__V_22_22));
#line 1933 "modules.m"
    }
#line 1934 "modules.m"
    {
#line 1934 "modules.m"
      MR_Word base;
#line 1934 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1934 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_10 = base;
#line 1934 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_8));
#line 1934 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_9));
#line 1934 "modules.m"
    }
#line 1929 "modules.m"
  }
#line 1926 "modules.m"
}

#line 1894 "modules.m"
static void MR_CALL 
parse_tree__modules__report_error_duplicate_module_decl_3_p_0(
#line 1894 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1894 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_15,
#line 1894 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_16)
#line 1894 "modules.m"
{
#line 1897 "modules.m"
  {
#line 1897 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1897 "modules.m"
    MR_Word parse_tree__modules__ModuleName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1897 "modules.m"
    MR_Word parse_tree__modules__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1897 "modules.m"
    MR_Word parse_tree__modules__ParentModule_9;
#line 1897 "modules.m"
    MR_String parse_tree__modules__ChildModule_10;
#line 1897 "modules.m"
    MR_Word parse_tree__modules__Pieces_12;
#line 1897 "modules.m"
    MR_Word parse_tree__modules__Msg_13;
#line 1897 "modules.m"
    MR_Word parse_tree__modules__Spec_14;
#line 1897 "modules.m"
    MR_Word parse_tree__modules__V_22_22;
#line 1897 "modules.m"
    MR_Word parse_tree__modules__V_23_23;
#line 1897 "modules.m"
    MR_Word parse_tree__modules__V_24_24;
#line 1897 "modules.m"
    MR_Word parse_tree__modules__V_27_27;
#line 1897 "modules.m"
    MR_Word parse_tree__modules__V_29_29;
#line 1897 "modules.m"
    MR_Word parse_tree__modules__V_32_32;
#line 1897 "modules.m"
    MR_Word parse_tree__modules__V_33_33;
#line 1897 "modules.m"
    MR_Word parse_tree__modules__V_41_41;
#line 1897 "modules.m"
    MR_Word parse_tree__modules__V_42_42;
#line 1897 "modules.m"
    MR_Word parse_tree__modules__V_46_46;

#line 1902 "modules.m"
    if (((MR_tag((MR_Word) parse_tree__modules__ModuleName_4)) == (MR_mktag((MR_Integer) 1))))
#line 1899 "modules.m"
      {
#line 1899 "modules.m"
        parse_tree__modules__ParentModule_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__ModuleName_4, (MR_Integer) 0)));
#line 1899 "modules.m"
        parse_tree__modules__ChildModule_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__modules__ModuleName_4, (MR_Integer) 1)));
#line 1899 "modules.m"
      }
#line 1902 "modules.m"
    else
#line 1903 "modules.m"
      {
#line 1904 "modules.m"
        {
#line 1904 "modules.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.modules", (MR_String) "predicate \140parse_tree.modules.report_error_duplicate_module_decl\'/3", (MR_String) "unqualified module name");
#line 1904 "modules.m"
          return;
        }
#line 1903 "modules.m"
      }
#line 1906 "modules.m"
    {
#line 1906 "modules.m"
      parse_tree__modules__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1906 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_23_23, 1) = ((MR_Box) (parse_tree__modules__ParentModule_9));
#line 1906 "modules.m"
    }
#line 1907 "modules.m"
    {
#line 1907 "modules.m"
      parse_tree__modules__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1907 "modules.m"
      MR_hl_field(MR_mktag(2), parse_tree__modules__V_33_33, 0) = ((MR_Box) (parse_tree__modules__ChildModule_10));
#line 1907 "modules.m"
    }
#line 1907 "modules.m"
    {
#line 1907 "modules.m"
      parse_tree__modules__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1907 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_32_32, 0) = ((MR_Box) (parse_tree__modules__V_33_33));
#line 1907 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[72])));
#line 1907 "modules.m"
    }
#line 1907 "modules.m"
    {
#line 1907 "modules.m"
      parse_tree__modules__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1907 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[106])));
#line 1907 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_29_29, 1) = ((MR_Box) (parse_tree__modules__V_32_32));
#line 1907 "modules.m"
    }
#line 1906 "modules.m"
    {
#line 1906 "modules.m"
      parse_tree__modules__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1906 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_27_27, 1) = ((MR_Box) (parse_tree__modules__V_29_29));
#line 1906 "modules.m"
    }
#line 1906 "modules.m"
    {
#line 1906 "modules.m"
      parse_tree__modules__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[92])));
#line 1906 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_24_24, 1) = ((MR_Box) (parse_tree__modules__V_27_27));
#line 1906 "modules.m"
    }
#line 1906 "modules.m"
    {
#line 1906 "modules.m"
      parse_tree__modules__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_22_22, 0) = ((MR_Box) (parse_tree__modules__V_23_23));
#line 1906 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_22_22, 1) = ((MR_Box) (parse_tree__modules__V_24_24));
#line 1906 "modules.m"
    }
#line 1906 "modules.m"
    {
#line 1906 "modules.m"
      parse_tree__modules__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[91])));
#line 1906 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__Pieces_12, 1) = ((MR_Box) (parse_tree__modules__V_22_22));
#line 1906 "modules.m"
    }
#line 1909 "modules.m"
    {
#line 1909 "modules.m"
      parse_tree__modules__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1909 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_42_42, 0) = ((MR_Box) (parse_tree__modules__Pieces_12));
#line 1909 "modules.m"
    }
#line 1909 "modules.m"
    {
#line 1909 "modules.m"
      parse_tree__modules__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1909 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_41_41, 0) = ((MR_Box) (parse_tree__modules__V_42_42));
#line 1909 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1909 "modules.m"
    }
#line 1909 "modules.m"
    {
#line 1909 "modules.m"
      parse_tree__modules__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1909 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_13, 0) = ((MR_Box) (parse_tree__modules__Context_5));
#line 1909 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_13, 1) = ((MR_Box) (parse_tree__modules__V_41_41));
#line 1909 "modules.m"
    }
#line 1910 "modules.m"
    {
#line 1910 "modules.m"
      parse_tree__modules__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1910 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_46_46, 0) = ((MR_Box) (parse_tree__modules__Msg_13));
#line 1910 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1910 "modules.m"
    }
#line 1910 "modules.m"
    {
#line 1910 "modules.m"
      parse_tree__modules__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1910 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1910 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1910 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_14, 2) = ((MR_Box) (parse_tree__modules__V_46_46));
#line 1910 "modules.m"
    }
#line 1911 "modules.m"
    {
#line 1911 "modules.m"
      MR_Word base;
#line 1911 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1911 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_16 = base;
#line 1911 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_14));
#line 1911 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_15));
#line 1911 "modules.m"
    }
#line 1897 "modules.m"
  }
#line 1894 "modules.m"
}

#line 1889 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__pair_with_context_2_f_0(
#line 1889 "modules.m"
  MR_Word parse_tree__modules__Context_4,
#line 1889 "modules.m"
  MR_Word parse_tree__modules__ModuleName_5)
#line 1889 "modules.m"
{
#line 1892 "modules.m"
  {
#line 1892 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1892 "modules.m"
    MR_Word parse_tree__modules__HeadVar__3_3;

#line 1892 "modules.m"
    {
#line 1892 "modules.m"
      parse_tree__modules__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1892 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__modules__ModuleName_5));
#line 1892 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__modules__Context_4));
#line 1892 "modules.m"
    }
#line 1892 "modules.m"
    return parse_tree__modules__HeadVar__3_3;
#line 1892 "modules.m"
  }
#line 1889 "modules.m"
}

#line 1886 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__is_duplicate_error_3_p_0_1(
#line 1886 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1886 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 1886 "modules.m"
{
#line 1886 "modules.m"
  {
#line 1886 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 1886 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1886 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__3_3;

#line 1886 "modules.m"
    {
#line 1886 "modules.m"
      parse_tree__modules__conv0_HeadVar__3_3 = parse_tree__modules__pair_with_context_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 1886 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__3_3));
#line 1886 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 1886 "modules.m"
  }
#line 1886 "modules.m"
}

#line 1867 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__is_duplicate_error_3_p_0(
#line 1867 "modules.m"
  MR_Word parse_tree__modules__DuplicatesSet_4,
#line 1867 "modules.m"
  MR_Word parse_tree__modules__Item_5,
#line 1867 "modules.m"
  MR_Word * parse_tree__modules__SubModuleNameContexts_6)
#line 1867 "modules.m"
{
#line 1872 "modules.m"
  {
#line 1872 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1872 "modules.m"
    if (((MR_tag((MR_Word) parse_tree__modules__Item_5)) == (MR_mktag((MR_Integer) 2))))
#line 1877 "modules.m"
      {
#line 1877 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_23_23;
#line 1877 "modules.m"
        MR_Word parse_tree__modules__TypeInfo_24_24;
#line 1877 "modules.m"
        MR_Word parse_tree__modules__ItemModuleDefn_11 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_5), (MR_Integer) 2);
#line 1877 "modules.m"
        MR_Word parse_tree__modules__ModuleDefn_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_11, (MR_Integer) 0)));
#line 1877 "modules.m"
        MR_Word parse_tree__modules__SubModuleNames_14;
#line 1877 "modules.m"
        MR_Word parse_tree__modules__SubModuleNamesSet_15;
#line 1877 "modules.m"
        MR_Word parse_tree__modules__DuplicatedSubModuleNamesSet_16;
#line 1877 "modules.m"
        MR_Word parse_tree__modules__DuplicatedSubModuleNames_17;
#line 1877 "modules.m"
        MR_Word parse_tree__modules__V_18_18;
#line 1877 "modules.m"
        MR_Word parse_tree__modules__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_11, (MR_Integer) 1)));
#line 1878 "modules.m"
        MR_Integer parse_tree__modules__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_11, (MR_Integer) 2)));

#line 1879 "modules.m"
        parse_tree__modules__succeeded = ((((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_12, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1879 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1879 "modules.m"
          {
#line 1879 "modules.m"
            parse_tree__modules__SubModuleNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_12, (MR_Integer) 1)));
#line 4200 "parse_tree.modules.c"
            parse_tree__modules__TypeCtorInfo_23_23 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1880 "modules.m"
            {
#line 1880 "modules.m"
              mercury__set__list_to_set_2_p_0(parse_tree__modules__TypeCtorInfo_23_23, parse_tree__modules__SubModuleNames_14, &parse_tree__modules__SubModuleNamesSet_15);
            }
#line 1881 "modules.m"
            {
#line 1881 "modules.m"
              mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_23_23, parse_tree__modules__SubModuleNamesSet_15, parse_tree__modules__DuplicatesSet_4, &parse_tree__modules__DuplicatedSubModuleNamesSet_16);
            }
#line 1883 "modules.m"
            {
#line 1883 "modules.m"
              mercury__set__to_sorted_list_2_p_0(parse_tree__modules__TypeCtorInfo_23_23, parse_tree__modules__DuplicatedSubModuleNamesSet_16, &parse_tree__modules__DuplicatedSubModuleNames_17);
            }
#line 4217 "parse_tree.modules.c"
            parse_tree__modules__TypeInfo_24_24 = (MR_Word) &parse_tree__modules_scalar_common_1[5];
#line 1886 "modules.m"
            {
#line 1886 "modules.m"
              parse_tree__modules__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1886 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_18_18, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[9]));
#line 1886 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_18_18, 1) = ((MR_Box) (parse_tree__modules__is_duplicate_error_3_p_0_1));
#line 1886 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1886 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_18_18, 3) = ((MR_Box) (parse_tree__modules__Context_21));
#line 1886 "modules.m"
            }
#line 1886 "modules.m"
            {
#line 1886 "modules.m"
              *parse_tree__modules__SubModuleNameContexts_6 = mercury__list__map_2_f_0(parse_tree__modules__TypeCtorInfo_23_23, parse_tree__modules__TypeInfo_24_24, parse_tree__modules__V_18_18, parse_tree__modules__DuplicatedSubModuleNames_17);
            }
#line 1886 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 1879 "modules.m"
          }
#line 1877 "modules.m"
      }
#line 1872 "modules.m"
    else
#line 1872 "modules.m"
      if (((MR_tag((MR_Word) parse_tree__modules__Item_5)) == (MR_mktag((MR_Integer) 0))))
#line 1872 "modules.m"
        {
#line 1872 "modules.m"
          MR_Word parse_tree__modules__ItemModuleStart_7 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_5), (MR_Integer) 0);
#line 1872 "modules.m"
          MR_Word parse_tree__modules__SubModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleStart_7, (MR_Integer) 0)));
#line 1872 "modules.m"
          MR_Word parse_tree__modules__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleStart_7, (MR_Integer) 1)));
#line 1872 "modules.m"
          MR_Word parse_tree__modules__V_19_19;
#line 1872 "modules.m"
          MR_Word parse_tree__modules__V_20_20;
#line 1873 "modules.m"
          MR_Integer parse_tree__modules__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleStart_7, (MR_Integer) 2)));

#line 1874 "modules.m"
          {
#line 1874 "modules.m"
            parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__SubModuleName_8)), parse_tree__modules__DuplicatesSet_4);
          }
#line 1872 "modules.m"
          if (parse_tree__modules__succeeded)
#line 1872 "modules.m"
            {
#line 1875 "modules.m"
              parse_tree__modules__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1875 "modules.m"
              {
#line 1875 "modules.m"
                parse_tree__modules__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1875 "modules.m"
                MR_hl_field(MR_mktag(0), parse_tree__modules__V_19_19, 0) = ((MR_Box) (parse_tree__modules__SubModuleName_8));
#line 1875 "modules.m"
                MR_hl_field(MR_mktag(0), parse_tree__modules__V_19_19, 1) = ((MR_Box) (parse_tree__modules__Context_9));
#line 1875 "modules.m"
              }
#line 1875 "modules.m"
              {
#line 1875 "modules.m"
                MR_Word base;
#line 1875 "modules.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1875 "modules.m"
                *parse_tree__modules__SubModuleNameContexts_6 = base;
#line 1875 "modules.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__V_19_19));
#line 1875 "modules.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__V_20_20));
#line 1875 "modules.m"
              }
#line 1875 "modules.m"
              parse_tree__modules__succeeded = MR_TRUE;
#line 1872 "modules.m"
            }
#line 1872 "modules.m"
        }
#line 1872 "modules.m"
      else
#line 1872 "modules.m"
        parse_tree__modules__succeeded = MR_FALSE;
#line 1872 "modules.m"
    return parse_tree__modules__succeeded;
#line 1872 "modules.m"
  }
#line 1867 "modules.m"
}

#line 1834 "modules.m"
static void MR_CALL 
parse_tree__modules__report_error_implementation_in_interface_4_p_0(
#line 1834 "modules.m"
  MR_Word parse_tree__modules__ModuleName_5,
#line 1834 "modules.m"
  MR_Word parse_tree__modules__Context_6,
#line 1834 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_16,
#line 1834 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_17)
#line 1834 "modules.m"
{
#line 1837 "modules.m"
  {
#line 1837 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1837 "modules.m"
    MR_Word parse_tree__modules__ParentModule_10;
#line 1837 "modules.m"
    MR_String parse_tree__modules__ChildModule_11;
#line 1837 "modules.m"
    MR_Word parse_tree__modules__Pieces_13;
#line 1837 "modules.m"
    MR_Word parse_tree__modules__Msg_14;
#line 1837 "modules.m"
    MR_Word parse_tree__modules__Spec_15;
#line 1837 "modules.m"
    MR_Word parse_tree__modules__V_23_23;
#line 1837 "modules.m"
    MR_Word parse_tree__modules__V_24_24;
#line 1837 "modules.m"
    MR_Word parse_tree__modules__V_25_25;
#line 1837 "modules.m"
    MR_Word parse_tree__modules__V_28_28;
#line 1837 "modules.m"
    MR_Word parse_tree__modules__V_30_30;
#line 1837 "modules.m"
    MR_Word parse_tree__modules__V_33_33;
#line 1837 "modules.m"
    MR_Word parse_tree__modules__V_34_34;
#line 1837 "modules.m"
    MR_Word parse_tree__modules__V_53_53;
#line 1837 "modules.m"
    MR_Word parse_tree__modules__V_54_54;
#line 1837 "modules.m"
    MR_Word parse_tree__modules__V_58_58;

#line 1842 "modules.m"
    if (((MR_tag((MR_Word) parse_tree__modules__ModuleName_5)) == (MR_mktag((MR_Integer) 1))))
#line 1839 "modules.m"
      {
#line 1839 "modules.m"
        parse_tree__modules__ParentModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__ModuleName_5, (MR_Integer) 0)));
#line 1839 "modules.m"
        parse_tree__modules__ChildModule_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__modules__ModuleName_5, (MR_Integer) 1)));
#line 1839 "modules.m"
      }
#line 1842 "modules.m"
    else
#line 1843 "modules.m"
      {
#line 1844 "modules.m"
        {
#line 1844 "modules.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.modules", (MR_String) "predicate \140parse_tree.modules.report_error_implementation_in_interface\'/4", (MR_String) "unqualified module name");
#line 1844 "modules.m"
          return;
        }
#line 1843 "modules.m"
      }
#line 1846 "modules.m"
    {
#line 1846 "modules.m"
      parse_tree__modules__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1846 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_24_24, 1) = ((MR_Box) (parse_tree__modules__ParentModule_10));
#line 1846 "modules.m"
    }
#line 1848 "modules.m"
    {
#line 1848 "modules.m"
      parse_tree__modules__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "modules.m"
      MR_hl_field(MR_mktag(2), parse_tree__modules__V_34_34, 0) = ((MR_Box) (parse_tree__modules__ChildModule_11));
#line 1848 "modules.m"
    }
#line 1848 "modules.m"
    {
#line 1848 "modules.m"
      parse_tree__modules__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 0) = ((MR_Box) (parse_tree__modules__V_34_34));
#line 1848 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[68])));
#line 1848 "modules.m"
    }
#line 1847 "modules.m"
    {
#line 1847 "modules.m"
      parse_tree__modules__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1847 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[105])));
#line 1847 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_30_30, 1) = ((MR_Box) (parse_tree__modules__V_33_33));
#line 1847 "modules.m"
    }
#line 1847 "modules.m"
    {
#line 1847 "modules.m"
      parse_tree__modules__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1847 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1847 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 1) = ((MR_Box) (parse_tree__modules__V_30_30));
#line 1847 "modules.m"
    }
#line 1847 "modules.m"
    {
#line 1847 "modules.m"
      parse_tree__modules__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1847 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[92])));
#line 1847 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_25_25, 1) = ((MR_Box) (parse_tree__modules__V_28_28));
#line 1847 "modules.m"
    }
#line 1846 "modules.m"
    {
#line 1846 "modules.m"
      parse_tree__modules__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 0) = ((MR_Box) (parse_tree__modules__V_24_24));
#line 1846 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 1) = ((MR_Box) (parse_tree__modules__V_25_25));
#line 1846 "modules.m"
    }
#line 1846 "modules.m"
    {
#line 1846 "modules.m"
      parse_tree__modules__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[104])));
#line 1846 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__Pieces_13, 1) = ((MR_Box) (parse_tree__modules__V_23_23));
#line 1846 "modules.m"
    }
#line 1852 "modules.m"
    {
#line 1852 "modules.m"
      parse_tree__modules__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1852 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_54_54, 0) = ((MR_Box) (parse_tree__modules__Pieces_13));
#line 1852 "modules.m"
    }
#line 1852 "modules.m"
    {
#line 1852 "modules.m"
      parse_tree__modules__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1852 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_53_53, 0) = ((MR_Box) (parse_tree__modules__V_54_54));
#line 1852 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1852 "modules.m"
    }
#line 1852 "modules.m"
    {
#line 1852 "modules.m"
      parse_tree__modules__Msg_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1852 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_14, 0) = ((MR_Box) (parse_tree__modules__Context_6));
#line 1852 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_14, 1) = ((MR_Box) (parse_tree__modules__V_53_53));
#line 1852 "modules.m"
    }
#line 1853 "modules.m"
    {
#line 1853 "modules.m"
      parse_tree__modules__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1853 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_58_58, 0) = ((MR_Box) (parse_tree__modules__Msg_14));
#line 1853 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1853 "modules.m"
    }
#line 1853 "modules.m"
    {
#line 1853 "modules.m"
      parse_tree__modules__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1853 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1853 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1853 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_15, 2) = ((MR_Box) (parse_tree__modules__V_58_58));
#line 1853 "modules.m"
    }
#line 1854 "modules.m"
    {
#line 1854 "modules.m"
      MR_Word base;
#line 1854 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1854 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_17 = base;
#line 1854 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_15));
#line 1854 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_16));
#line 1854 "modules.m"
    }
#line 1837 "modules.m"
  }
#line 1834 "modules.m"
}

#line 1814 "modules.m"
static void MR_CALL 
parse_tree__modules__add_submodule_3_p_0(
#line 1814 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1814 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_SubModules_0_9,
#line 1814 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_SubModules_10)
#line 1814 "modules.m"
{
#line 1817 "modules.m"
  {
#line 1817 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1817 "modules.m"
    MR_Word parse_tree__modules__ModuleName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1817 "modules.m"
    MR_Word parse_tree__modules__ModuleItemList_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1828 "modules.m"
    MR_Word parse_tree__modules__ItemList0_7;
#line 1825 "modules.m"
    MR_Box parse_tree__modules__conv0_ItemList0_7;

#line 1825 "modules.m"
    {
#line 1825 "modules.m"
      parse_tree__modules__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_2[1], parse_tree__modules__STATE_VARIABLE_SubModules_0_9, ((MR_Box) (parse_tree__modules__ModuleName_4)), &parse_tree__modules__conv0_ItemList0_7);
    }
#line 1825 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1825 "modules.m"
      {
#line 1825 "modules.m"
        parse_tree__modules__ItemList0_7 = ((MR_Word) parse_tree__modules__conv0_ItemList0_7);
#line 1825 "modules.m"
        parse_tree__modules__succeeded = MR_TRUE;
#line 1825 "modules.m"
      }
#line 1828 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1826 "modules.m"
      {
#line 1826 "modules.m"
        MR_Word parse_tree__modules__ItemList_8;

#line 1826 "modules.m"
        {
#line 1826 "modules.m"
          mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__modules__ModuleItemList_5, parse_tree__modules__ItemList0_7, &parse_tree__modules__ItemList_8);
        }
#line 1827 "modules.m"
        {
#line 1827 "modules.m"
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_2[1], ((MR_Box) (parse_tree__modules__ModuleName_4)), ((MR_Box) (parse_tree__modules__ItemList_8)), parse_tree__modules__STATE_VARIABLE_SubModules_0_9, parse_tree__modules__STATE_VARIABLE_SubModules_10);
#line 1827 "modules.m"
          return;
        }
#line 1826 "modules.m"
      }
#line 1828 "modules.m"
    else
#line 1829 "modules.m"
      {
#line 1829 "modules.m"
        {
#line 1829 "modules.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_2[1], ((MR_Box) (parse_tree__modules__ModuleName_4)), ((MR_Box) (parse_tree__modules__ModuleItemList_5)), parse_tree__modules__STATE_VARIABLE_SubModules_0_9, parse_tree__modules__STATE_VARIABLE_SubModules_10);
#line 1829 "modules.m"
          return;
        }
#line 1829 "modules.m"
      }
#line 1817 "modules.m"
  }
#line 1814 "modules.m"
}

#line 1744 "modules.m"
static void MR_CALL 
parse_tree__modules__split_into_submodules_3_9_p_0_1(
#line 1744 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1744 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1744 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1744 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 1744 "modules.m"
{
#line 1744 "modules.m"
  {
#line 1744 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1744 "modules.m"
    MR_Word parse_tree__modules__conv0_STATE_VARIABLE_SubModules_10;

#line 1744 "modules.m"
    {
#line 1744 "modules.m"
      parse_tree__modules__add_submodule_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv0_STATE_VARIABLE_SubModules_10);
    }
#line 1744 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_STATE_VARIABLE_SubModules_10));
#line 1744 "modules.m"
  }
#line 1744 "modules.m"
}

#line 1717 "modules.m"
static void MR_CALL 
parse_tree__modules__split_into_submodules_3_9_p_0(
#line 1717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1717 "modules.m"
  MR_Word parse_tree__modules__InParentInterface_3,
#line 1717 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InInterface_0_4,
#line 1717 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__5_5,
#line 1717 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__6_6,
#line 1717 "modules.m"
  MR_Word * parse_tree__modules__SubModules_7,
#line 1717 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_8,
#line 1717 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_9)
#line 1717 "modules.m"
{
#line 1722 "modules.m"
  {
#line 1722 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1722 "modules.m"
    if ((parse_tree__modules__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1722 "modules.m"
      {
#line 1722 "modules.m"
        *parse_tree__modules__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1722 "modules.m"
        *parse_tree__modules__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1723 "modules.m"
        {
#line 1723 "modules.m"
          mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_2[1], parse_tree__modules__SubModules_7);
        }
#line 1722 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_Specs_9 = parse_tree__modules__STATE_VARIABLE_Specs_0_8;
#line 1722 "modules.m"
      }
#line 1722 "modules.m"
    else
#line 1726 "modules.m"
      {
#line 1726 "modules.m"
        MR_Word parse_tree__modules__Item_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__2_2, (MR_Integer) 0)));
#line 1726 "modules.m"
        MR_Word parse_tree__modules__Items1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__2_2, (MR_Integer) 1)));
#line 1753 "modules.m"
        MR_Word parse_tree__modules__SubModuleName_27;
#line 1753 "modules.m"
        MR_Word parse_tree__modules__Context_28;
#line 1753 "modules.m"
        MR_Integer parse_tree__modules__SeqNum_29;
#line 1730 "modules.m"
        MR_Word parse_tree__modules__ItemModuleStart_26;

#line 1730 "modules.m"
        parse_tree__modules__succeeded = ((MR_tag((MR_Word) parse_tree__modules__Item_18)) == (MR_mktag((MR_Integer) 0)));
#line 1730 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1730 "modules.m"
          {
#line 1730 "modules.m"
            parse_tree__modules__ItemModuleStart_26 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_18), (MR_Integer) 0);
#line 1731 "modules.m"
            parse_tree__modules__SubModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleStart_26, (MR_Integer) 0)));
#line 1731 "modules.m"
            parse_tree__modules__Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleStart_26, (MR_Integer) 1)));
#line 1731 "modules.m"
            parse_tree__modules__SeqNum_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleStart_26, (MR_Integer) 2)));
#line 1731 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 1730 "modules.m"
          }
#line 1753 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1736 "modules.m"
          {
#line 1736 "modules.m"
            MR_Word parse_tree__modules__Items2_30;
#line 1736 "modules.m"
            MR_Word parse_tree__modules__SubModules0_31;
#line 1736 "modules.m"
            MR_Word parse_tree__modules__ThisModuleItems0_32;
#line 1736 "modules.m"
            MR_Word parse_tree__modules__SubModules1_34;
#line 1736 "modules.m"
            MR_Word parse_tree__modules__IncludeSubModModuleDefn_35;
#line 1736 "modules.m"
            MR_Word parse_tree__modules__IncludeSubModItemModuleDefn_36;
#line 1736 "modules.m"
            MR_Word parse_tree__modules__IncludeSubModItem_37;
#line 1736 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_Specs_50_50;
#line 1736 "modules.m"
            MR_Word parse_tree__modules__V_53_53;
#line 1744 "modules.m"
            MR_Box parse_tree__modules__conv1_SubModules_7;

#line 1735 "modules.m"
            {
#line 1735 "modules.m"
              parse_tree__modules__split_into_submodules_2_7_p_0(parse_tree__modules__SubModuleName_27, parse_tree__modules__Items1_19, parse_tree__modules__STATE_VARIABLE_InInterface_0_4, &parse_tree__modules__Items2_30, &parse_tree__modules__SubModules0_31, parse_tree__modules__STATE_VARIABLE_Specs_0_8, &parse_tree__modules__STATE_VARIABLE_Specs_50_50);
            }
#line 1739 "modules.m"
            {
#line 1739 "modules.m"
              parse_tree__modules__split_into_submodules_3_9_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__Items2_30, parse_tree__modules__InParentInterface_3, parse_tree__modules__STATE_VARIABLE_InInterface_0_4, &parse_tree__modules__ThisModuleItems0_32, parse_tree__modules__HeadVar__6_6, &parse_tree__modules__SubModules1_34, parse_tree__modules__STATE_VARIABLE_Specs_50_50, parse_tree__modules__STATE_VARIABLE_Specs_9);
            }
#line 1744 "modules.m"
            {
#line 1744 "modules.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__modules_scalar_common_1[2], (MR_Word) &parse_tree__modules_scalar_common_1[4], (MR_Word) &parse_tree__modules_scalar_common_1[16], parse_tree__modules__SubModules0_31, ((MR_Box) (parse_tree__modules__SubModules1_34)), &parse_tree__modules__conv1_SubModules_7);
            }
#line 1744 "modules.m"
            *parse_tree__modules__SubModules_7 = ((MR_Word) parse_tree__modules__conv1_SubModules_7);
#line 1747 "modules.m"
            {
#line 1747 "modules.m"
              parse_tree__modules__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1747 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_53_53, 0) = ((MR_Box) (parse_tree__modules__SubModuleName_27));
#line 1747 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1747 "modules.m"
            }
#line 1747 "modules.m"
            {
#line 1747 "modules.m"
              parse_tree__modules__IncludeSubModModuleDefn_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1747 "modules.m"
              MR_hl_field(MR_mktag(3), parse_tree__modules__IncludeSubModModuleDefn_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1747 "modules.m"
              MR_hl_field(MR_mktag(3), parse_tree__modules__IncludeSubModModuleDefn_35, 1) = ((MR_Box) (parse_tree__modules__V_53_53));
#line 1747 "modules.m"
            }
#line 1748 "modules.m"
            {
#line 1748 "modules.m"
              parse_tree__modules__IncludeSubModItemModuleDefn_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1748 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__IncludeSubModItemModuleDefn_36, 0) = ((MR_Box) (parse_tree__modules__IncludeSubModModuleDefn_35));
#line 1748 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__IncludeSubModItemModuleDefn_36, 1) = ((MR_Box) (parse_tree__modules__Context_28));
#line 1748 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__IncludeSubModItemModuleDefn_36, 2) = ((MR_Box) (parse_tree__modules__SeqNum_29));
#line 1748 "modules.m"
            }
#line 1750 "modules.m"
            parse_tree__modules__IncludeSubModItem_37 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__modules__IncludeSubModItemModuleDefn_36);
#line 1751 "modules.m"
            {
#line 1751 "modules.m"
              MR_Word base;
#line 1751 "modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1751 "modules.m"
              *parse_tree__modules__HeadVar__5_5 = base;
#line 1751 "modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__IncludeSubModItem_37));
#line 1751 "modules.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__ThisModuleItems0_32));
#line 1751 "modules.m"
            }
#line 1736 "modules.m"
          }
#line 1753 "modules.m"
        else
#line 1763 "modules.m"
          {
#line 1755 "modules.m"
            MR_Word parse_tree__modules__ItemModuleEnd_38;
#line 1755 "modules.m"
            MR_Word parse_tree__modules__EndModuleName_39;
#line 1756 "modules.m"
            MR_Word parse_tree__modules__V_40_40;
#line 1756 "modules.m"
            MR_Integer parse_tree__modules__V_41_41;

#line 1755 "modules.m"
            parse_tree__modules__succeeded = ((MR_tag((MR_Word) parse_tree__modules__Item_18)) == (MR_mktag((MR_Integer) 1)));
#line 1755 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1755 "modules.m"
              {
#line 1755 "modules.m"
                parse_tree__modules__ItemModuleEnd_38 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_18), (MR_Integer) 1);
#line 1756 "modules.m"
                parse_tree__modules__EndModuleName_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleEnd_38, (MR_Integer) 0)));
#line 1756 "modules.m"
                parse_tree__modules__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleEnd_38, (MR_Integer) 1)));
#line 1756 "modules.m"
                parse_tree__modules__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleEnd_38, (MR_Integer) 2)));
#line 1757 "modules.m"
                {
#line 1757 "modules.m"
                  parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__EndModuleName_39, parse_tree__modules__HeadVar__1_1);
                }
#line 1755 "modules.m"
              }
#line 1763 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1760 "modules.m"
              {
#line 1760 "modules.m"
                *parse_tree__modules__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1761 "modules.m"
                *parse_tree__modules__HeadVar__6_6 = parse_tree__modules__Items1_19;
#line 1762 "modules.m"
                {
#line 1762 "modules.m"
                  mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_2[1], parse_tree__modules__SubModules_7);
                }
#line 1762 "modules.m"
                *parse_tree__modules__STATE_VARIABLE_Specs_9 = parse_tree__modules__STATE_VARIABLE_Specs_0_8;
#line 1760 "modules.m"
              }
#line 1763 "modules.m"
            else
#line 1788 "modules.m"
              {
#line 1788 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_Specs_57_57;
#line 1788 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_Specs_59_59;
#line 1788 "modules.m"
                MR_Word parse_tree__modules__ThisModuleItems0_67;
#line 1788 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_InInterface_55_68;
#line 1786 "modules.m"
                MR_Word parse_tree__modules__ItemModuleDefn_42;
#line 1799 "modules.m"
                MR_Word parse_tree__modules__ItemInstance_45;
#line 1795 "modules.m"
                MR_Word parse_tree__modules__V_58_58;
#line 1795 "modules.m"
                MR_Word parse_tree__modules__V_73_73;
#line 1795 "modules.m"
                MR_Word parse_tree__modules__V_74_74;
#line 1795 "modules.m"
                MR_Word parse_tree__modules__V_75_75;
#line 1795 "modules.m"
                MR_Word parse_tree__modules__V_76_76;
#line 1795 "modules.m"
                MR_Word parse_tree__modules__V_77_77;
#line 1795 "modules.m"
                MR_Word parse_tree__modules__V_78_78;
#line 1795 "modules.m"
                MR_Word parse_tree__modules__V_79_79;
#line 1795 "modules.m"
                MR_Integer parse_tree__modules__V_80_80;

#line 1769 "modules.m"
                parse_tree__modules__succeeded = ((MR_tag((MR_Word) parse_tree__modules__Item_18)) == (MR_mktag((MR_Integer) 2)));
#line 1769 "modules.m"
                if (parse_tree__modules__succeeded)
#line 1769 "modules.m"
                  {
#line 1769 "modules.m"
                    parse_tree__modules__ItemModuleDefn_42 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_18), (MR_Integer) 2);
#line 1771 "modules.m"
                    {
#line 1771 "modules.m"
                      MR_Word parse_tree__modules__ModuleDefn_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_42, (MR_Integer) 0)));
#line 1771 "modules.m"
                      MR_Word parse_tree__modules__Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_42, (MR_Integer) 1)));
#line 1770 "modules.m"
                      MR_Integer parse_tree__modules___SeqNum_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_42, (MR_Integer) 2)));

#line 1772 "modules.m"
                      parse_tree__modules__succeeded = (parse_tree__modules__ModuleDefn_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1774 "modules.m"
                      if (parse_tree__modules__succeeded)
#line 1773 "modules.m"
                        {
#line 1773 "modules.m"
                          parse_tree__modules__STATE_VARIABLE_InInterface_55_68 = (MR_Integer) 1;
#line 1773 "modules.m"
                          parse_tree__modules__STATE_VARIABLE_Specs_57_57 = parse_tree__modules__STATE_VARIABLE_Specs_0_8;
#line 1773 "modules.m"
                        }
#line 1774 "modules.m"
                      else
#line 1783 "modules.m"
                        {
#line 1774 "modules.m"
                          parse_tree__modules__succeeded = (parse_tree__modules__ModuleDefn_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1783 "modules.m"
                          if (parse_tree__modules__succeeded)
#line 1775 "modules.m"
                            {
#line 1775 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_InInterface_55_68 = (MR_Integer) 0;
#line 1780 "modules.m"
                              if ((parse_tree__modules__InParentInterface_3 == (MR_Integer) 0))
#line 1781 "modules.m"
                                parse_tree__modules__STATE_VARIABLE_Specs_57_57 = parse_tree__modules__STATE_VARIABLE_Specs_0_8;
#line 1780 "modules.m"
                              else
#line 1778 "modules.m"
                                {
#line 1778 "modules.m"
                                  parse_tree__modules__report_error_implementation_in_interface_4_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__Context_63, parse_tree__modules__STATE_VARIABLE_Specs_0_8, &parse_tree__modules__STATE_VARIABLE_Specs_57_57);
                                }
#line 1775 "modules.m"
                            }
#line 1783 "modules.m"
                          else
#line 1784 "modules.m"
                            {
#line 1784 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_Specs_57_57 = parse_tree__modules__STATE_VARIABLE_Specs_0_8;
#line 1784 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_InInterface_55_68 = parse_tree__modules__STATE_VARIABLE_InInterface_0_4;
#line 1784 "modules.m"
                            }
#line 1783 "modules.m"
                        }
#line 1771 "modules.m"
                    }
#line 1769 "modules.m"
                  }
#line 1769 "modules.m"
                else
#line 1787 "modules.m"
                  {
#line 1787 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_Specs_57_57 = parse_tree__modules__STATE_VARIABLE_Specs_0_8;
#line 1787 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_InInterface_55_68 = parse_tree__modules__STATE_VARIABLE_InInterface_0_4;
#line 1787 "modules.m"
                  }
#line 1793 "modules.m"
                parse_tree__modules__succeeded = (parse_tree__modules__STATE_VARIABLE_InInterface_55_68 == (MR_Integer) 1);
#line 1793 "modules.m"
                if (parse_tree__modules__succeeded)
#line 1793 "modules.m"
                  {
#line 1794 "modules.m"
                    parse_tree__modules__succeeded = ((((MR_tag((MR_Word) parse_tree__modules__Item_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_18, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1794 "modules.m"
                    if (parse_tree__modules__succeeded)
#line 1794 "modules.m"
                      {
#line 1794 "modules.m"
                        parse_tree__modules__ItemInstance_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_18, (MR_Integer) 1)));
#line 1795 "modules.m"
                        parse_tree__modules__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 0)));
#line 1795 "modules.m"
                        parse_tree__modules__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 1)));
#line 1795 "modules.m"
                        parse_tree__modules__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 2)));
#line 1795 "modules.m"
                        parse_tree__modules__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 3)));
#line 1795 "modules.m"
                        parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 4)));
#line 1795 "modules.m"
                        parse_tree__modules__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 5)));
#line 1795 "modules.m"
                        parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 6)));
#line 1795 "modules.m"
                        parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 7)));
#line 1795 "modules.m"
                        parse_tree__modules__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 8)));
#line 1795 "modules.m"
                        parse_tree__modules__succeeded = (parse_tree__modules__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1795 "modules.m"
                        parse_tree__modules__succeeded = !(parse_tree__modules__succeeded);
#line 1794 "modules.m"
                      }
#line 1793 "modules.m"
                  }
#line 1799 "modules.m"
                if (parse_tree__modules__succeeded)
#line 1797 "modules.m"
                  {
#line 1797 "modules.m"
                    MR_Word parse_tree__modules__InstanceContext_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 7)));
#line 1797 "modules.m"
                    MR_Word parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 0)));
#line 1797 "modules.m"
                    MR_Word parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 1)));
#line 1797 "modules.m"
                    MR_Word parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 2)));
#line 1797 "modules.m"
                    MR_Word parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 3)));
#line 1797 "modules.m"
                    MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 4)));
#line 1797 "modules.m"
                    MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 5)));
#line 1797 "modules.m"
                    MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 6)));
#line 1797 "modules.m"
                    MR_Integer parse_tree__modules__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemInstance_45, (MR_Integer) 8)));

#line 1798 "modules.m"
                    {
#line 1798 "modules.m"
                      parse_tree__modules__report_non_abstract_instance_in_interface_3_p_0(parse_tree__modules__InstanceContext_46, parse_tree__modules__STATE_VARIABLE_Specs_57_57, &parse_tree__modules__STATE_VARIABLE_Specs_59_59);
                    }
#line 1797 "modules.m"
                  }
#line 1799 "modules.m"
                else
#line 1798 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_Specs_59_59 = parse_tree__modules__STATE_VARIABLE_Specs_57_57;
#line 1804 "modules.m"
                {
#line 1804 "modules.m"
                  parse_tree__modules__split_into_submodules_3_9_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__Items1_19, parse_tree__modules__InParentInterface_3, parse_tree__modules__STATE_VARIABLE_InInterface_55_68, &parse_tree__modules__ThisModuleItems0_67, parse_tree__modules__HeadVar__6_6, parse_tree__modules__SubModules_7, parse_tree__modules__STATE_VARIABLE_Specs_59_59, parse_tree__modules__STATE_VARIABLE_Specs_9);
                }
#line 1810 "modules.m"
                {
#line 1810 "modules.m"
                  MR_Word base;
#line 1810 "modules.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1810 "modules.m"
                  *parse_tree__modules__HeadVar__5_5 = base;
#line 1810 "modules.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Item_18));
#line 1810 "modules.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__ThisModuleItems0_67));
#line 1810 "modules.m"
                }
#line 1788 "modules.m"
              }
#line 1763 "modules.m"
          }
#line 1726 "modules.m"
      }
#line 1722 "modules.m"
  }
#line 1717 "modules.m"
}

#line 1704 "modules.m"
static void MR_CALL 
parse_tree__modules__split_into_submodules_2_7_p_0(
#line 1704 "modules.m"
  MR_Word parse_tree__modules__ModuleName_8,
#line 1704 "modules.m"
  MR_Word parse_tree__modules__Items0_9,
#line 1704 "modules.m"
  MR_Word parse_tree__modules__InParentInterface_10,
#line 1704 "modules.m"
  MR_Word * parse_tree__modules__Items_11,
#line 1704 "modules.m"
  MR_Word * parse_tree__modules__ModuleList_12,
#line 1704 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_18,
#line 1704 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_19)
#line 1704 "modules.m"
{
#line 1709 "modules.m"
  {
#line 1709 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1709 "modules.m"
    MR_Word parse_tree__modules__ThisModuleItems_15;
#line 1709 "modules.m"
    MR_Word parse_tree__modules__SubModules_16;
#line 1709 "modules.m"
    MR_Word parse_tree__modules__SubModuleList_17;
#line 1709 "modules.m"
    MR_Word parse_tree__modules__V_21_21;

#line 1711 "modules.m"
    {
#line 1711 "modules.m"
      parse_tree__modules__split_into_submodules_3_9_p_0(parse_tree__modules__ModuleName_8, parse_tree__modules__Items0_9, parse_tree__modules__InParentInterface_10, (MR_Integer) 0, &parse_tree__modules__ThisModuleItems_15, parse_tree__modules__Items_11, &parse_tree__modules__SubModules_16, parse_tree__modules__STATE_VARIABLE_Specs_0_18, parse_tree__modules__STATE_VARIABLE_Specs_19);
    }
#line 1714 "modules.m"
    {
#line 1714 "modules.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_2[1], parse_tree__modules__SubModules_16, &parse_tree__modules__SubModuleList_17);
    }
#line 1715 "modules.m"
    {
#line 1715 "modules.m"
      parse_tree__modules__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1715 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 0) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 1715 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 1) = ((MR_Box) (parse_tree__modules__ThisModuleItems_15));
#line 1715 "modules.m"
    }
#line 1715 "modules.m"
    {
#line 1715 "modules.m"
      MR_Word base;
#line 1715 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "modules.m"
      *parse_tree__modules__ModuleList_12 = base;
#line 1715 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__V_21_21));
#line 1715 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__SubModuleList_17));
#line 1715 "modules.m"
    }
#line 1709 "modules.m"
  }
#line 1704 "modules.m"
}

#line 1610 "modules.m"
static void MR_CALL 
parse_tree__modules__get_accessible_children_acc_4_p_0(
#line 1610 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Visible_0_1,
#line 1610 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1610 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3,
#line 1610 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IncludeDeps_4)
#line 1610 "modules.m"
{
#line 1613 "modules.m"
  while (MR_TRUE)
#line 1613 "modules.m"
    {
#line 1613 "modules.m"
      /* tailcall optimized into a loop */
#line 1613 "modules.m"
      {
#line 1613 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1613 "modules.m"
        if ((parse_tree__modules__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1613 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_IncludeDeps_4 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1613 "modules.m"
        else
#line 1614 "modules.m"
          {
#line 1614 "modules.m"
            MR_Word parse_tree__modules__Item_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__2_2, (MR_Integer) 0)));
#line 1614 "modules.m"
            MR_Word parse_tree__modules__Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__2_2, (MR_Integer) 1)));
#line 1614 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46;
#line 1614 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_Visible_48_48;

#line 1649 "modules.m"
            if (((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 2))))
#line 1616 "modules.m"
              {
#line 1616 "modules.m"
                MR_Word parse_tree__modules__ItemModuleDefn_13 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_10), (MR_Integer) 2);
#line 1616 "modules.m"
                MR_Word parse_tree__modules__ModuleDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_13, (MR_Integer) 0)));
#line 1617 "modules.m"
                MR_Word parse_tree__modules__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_13, (MR_Integer) 1)));
#line 1617 "modules.m"
                MR_Integer parse_tree__modules__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_13, (MR_Integer) 2)));

#line 1624 "modules.m"
                if ((((((parse_tree__modules__ModuleDefn_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))) || ((parse_tree__modules__ModuleDefn_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))))) || ((parse_tree__modules__ModuleDefn_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))))
#line 1622 "modules.m"
                  {
#line 1623 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_Visible_48_48 = (MR_Integer) 0;
#line 1623 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1622 "modules.m"
                  }
#line 1624 "modules.m"
                else
#line 1624 "modules.m"
                  if (((((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_14, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1642 "modules.m"
                    {
#line 1642 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1642 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1642 "modules.m"
                    }
#line 1624 "modules.m"
                  else
#line 1624 "modules.m"
                    if (((((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_14, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1641 "modules.m"
                      {
#line 1641 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1641 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1641 "modules.m"
                      }
#line 1624 "modules.m"
                    else
#line 1624 "modules.m"
                      if (((((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_14, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1643 "modules.m"
                        {
#line 1643 "modules.m"
                          parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1643 "modules.m"
                          parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1643 "modules.m"
                        }
#line 1624 "modules.m"
                      else
#line 1624 "modules.m"
                        if (((((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_14, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1633 "modules.m"
                          {
#line 1633 "modules.m"
                            MR_Word parse_tree__modules__Modules_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_14, (MR_Integer) 1)));

#line 1637 "modules.m"
                            if ((parse_tree__modules__STATE_VARIABLE_Visible_0_1 == (MR_Integer) 0))
#line 1638 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1637 "modules.m"
                            else
#line 1635 "modules.m"
                              {
#line 1636 "modules.m"
                                {
#line 1636 "modules.m"
                                  parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = mercury__list__f_43_43_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3, parse_tree__modules__Modules_19);
                                }
#line 1635 "modules.m"
                              }
#line 1638 "modules.m"
                            parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1633 "modules.m"
                          }
#line 1624 "modules.m"
                        else
#line 1624 "modules.m"
                          if (((((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1644 "modules.m"
                            {
#line 1644 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1644 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1644 "modules.m"
                            }
#line 1624 "modules.m"
                          else
#line 1624 "modules.m"
                            if (((((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_14, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1645 "modules.m"
                              {
#line 1645 "modules.m"
                                parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1645 "modules.m"
                                parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1645 "modules.m"
                              }
#line 1624 "modules.m"
                            else
#line 1630 "modules.m"
                              {
#line 1631 "modules.m"
                                parse_tree__modules__STATE_VARIABLE_Visible_48_48 = (MR_Integer) 1;
#line 1631 "modules.m"
                                parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1630 "modules.m"
                              }
#line 1616 "modules.m"
              }
#line 1649 "modules.m"
            else
#line 1649 "modules.m"
              if (((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 1))))
#line 1651 "modules.m"
                {
#line 1651 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1651 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1651 "modules.m"
                }
#line 1649 "modules.m"
              else
#line 1649 "modules.m"
                if (((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 0))))
#line 1650 "modules.m"
                  {
#line 1650 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1650 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1650 "modules.m"
                  }
#line 1649 "modules.m"
                else
#line 1649 "modules.m"
                  if (((((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1652 "modules.m"
                    {
#line 1652 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1652 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1652 "modules.m"
                    }
#line 1649 "modules.m"
                  else
#line 1649 "modules.m"
                    if (((((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_10, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1663 "modules.m"
                      {
#line 1663 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1663 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1663 "modules.m"
                      }
#line 1649 "modules.m"
                    else
#line 1649 "modules.m"
                      if (((((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_10, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1662 "modules.m"
                        {
#line 1662 "modules.m"
                          parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1662 "modules.m"
                          parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1662 "modules.m"
                        }
#line 1649 "modules.m"
                      else
#line 1649 "modules.m"
                        if (((((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1654 "modules.m"
                          {
#line 1654 "modules.m"
                            parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1654 "modules.m"
                            parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1654 "modules.m"
                          }
#line 1649 "modules.m"
                        else
#line 1649 "modules.m"
                          if (((((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_10, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1661 "modules.m"
                            {
#line 1661 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1661 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1661 "modules.m"
                            }
#line 1649 "modules.m"
                          else
#line 1649 "modules.m"
                            if (((((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1657 "modules.m"
                              {
#line 1657 "modules.m"
                                parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1657 "modules.m"
                                parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1657 "modules.m"
                              }
#line 1649 "modules.m"
                            else
#line 1649 "modules.m"
                              if (((((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1655 "modules.m"
                                {
#line 1655 "modules.m"
                                  parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1655 "modules.m"
                                  parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1655 "modules.m"
                                }
#line 1649 "modules.m"
                              else
#line 1649 "modules.m"
                                if (((((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_10, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1664 "modules.m"
                                  {
#line 1664 "modules.m"
                                    parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1664 "modules.m"
                                    parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1664 "modules.m"
                                  }
#line 1649 "modules.m"
                                else
#line 1649 "modules.m"
                                  if (((((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_10, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1665 "modules.m"
                                    {
#line 1665 "modules.m"
                                      parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1665 "modules.m"
                                      parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1665 "modules.m"
                                    }
#line 1649 "modules.m"
                                  else
#line 1649 "modules.m"
                                    if (((((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1658 "modules.m"
                                      {
#line 1658 "modules.m"
                                        parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1658 "modules.m"
                                        parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1658 "modules.m"
                                      }
#line 1649 "modules.m"
                                    else
#line 1649 "modules.m"
                                      if (((((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1656 "modules.m"
                                        {
#line 1656 "modules.m"
                                          parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1656 "modules.m"
                                          parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1656 "modules.m"
                                        }
#line 1649 "modules.m"
                                      else
#line 1649 "modules.m"
                                        if (((((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1659 "modules.m"
                                          {
#line 1659 "modules.m"
                                            parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1659 "modules.m"
                                            parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1659 "modules.m"
                                          }
#line 1649 "modules.m"
                                        else
#line 1649 "modules.m"
                                          if (((((MR_tag((MR_Word) parse_tree__modules__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1653 "modules.m"
                                            {
#line 1653 "modules.m"
                                              parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1653 "modules.m"
                                              parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1653 "modules.m"
                                            }
#line 1649 "modules.m"
                                          else
#line 1660 "modules.m"
                                            {
#line 1660 "modules.m"
                                              parse_tree__modules__STATE_VARIABLE_Visible_48_48 = parse_tree__modules__STATE_VARIABLE_Visible_0_1;
#line 1660 "modules.m"
                                              parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3;
#line 1660 "modules.m"
                                            }
#line 1668 "modules.m"
            /* direct tailcall eliminated */
#line 1668 "modules.m"
            {
#line 1668 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_Visible_0__tmp_copy_1 = parse_tree__modules__STATE_VARIABLE_Visible_48_48;
#line 1668 "modules.m"
              MR_Word parse_tree__modules__HeadVar__2__tmp_copy_2 = parse_tree__modules__Items_11;
#line 1668 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IncludeDeps_0__tmp_copy_3 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_46_46;

#line 1668 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_3 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0__tmp_copy_3;
#line 1668 "modules.m"
              parse_tree__modules__HeadVar__2_2 = parse_tree__modules__HeadVar__2__tmp_copy_2;
#line 1668 "modules.m"
              parse_tree__modules__STATE_VARIABLE_Visible_0_1 = parse_tree__modules__STATE_VARIABLE_Visible_0__tmp_copy_1;
#line 1668 "modules.m"
            }
#line 1668 "modules.m"
            continue;
#line 1614 "modules.m"
          }
#line 1613 "modules.m"
      }
#line 1613 "modules.m"
      break;
#line 1613 "modules.m"
    }
#line 1610 "modules.m"
}

#line 1584 "modules.m"
static void MR_CALL 
parse_tree__modules__get_children_acc_3_p_0(
#line 1584 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1584 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_2,
#line 1584 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IncludeDeps_3)
#line 1584 "modules.m"
{
#line 1587 "modules.m"
  while (MR_TRUE)
#line 1587 "modules.m"
    {
#line 1587 "modules.m"
      /* tailcall optimized into a loop */
#line 1587 "modules.m"
      {
#line 1587 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1587 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1587 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_IncludeDeps_3 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_2;
#line 1587 "modules.m"
        else
#line 1588 "modules.m"
          {
#line 1588 "modules.m"
            MR_Word parse_tree__modules__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1588 "modules.m"
            MR_Word parse_tree__modules__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1588 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IncludeDeps_17_17;
#line 1595 "modules.m"
            MR_Word parse_tree__modules__Modules_14;
#line 1590 "modules.m"
            MR_Word parse_tree__modules__ItemModuleDefn_10;
#line 1590 "modules.m"
            MR_Word parse_tree__modules__ModuleDefn_11;
#line 1591 "modules.m"
            MR_Word parse_tree__modules__V_12_12;
#line 1591 "modules.m"
            MR_Integer parse_tree__modules__V_13_13;

#line 1590 "modules.m"
            parse_tree__modules__succeeded = ((MR_tag((MR_Word) parse_tree__modules__Item_7)) == (MR_mktag((MR_Integer) 2)));
#line 1590 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1590 "modules.m"
              {
#line 1590 "modules.m"
                parse_tree__modules__ItemModuleDefn_10 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_7), (MR_Integer) 2);
#line 1591 "modules.m"
                parse_tree__modules__ModuleDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_10, (MR_Integer) 0)));
#line 1591 "modules.m"
                parse_tree__modules__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_10, (MR_Integer) 1)));
#line 1591 "modules.m"
                parse_tree__modules__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_10, (MR_Integer) 2)));
#line 1592 "modules.m"
                parse_tree__modules__succeeded = ((((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1592 "modules.m"
                if (parse_tree__modules__succeeded)
#line 1592 "modules.m"
                  parse_tree__modules__Modules_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_11, (MR_Integer) 1)));
#line 1590 "modules.m"
              }
#line 1595 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1594 "modules.m"
              {
#line 1594 "modules.m"
                {
#line 1594 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_IncludeDeps_17_17 = mercury__list__f_43_43_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_2, parse_tree__modules__Modules_14);
                }
#line 1594 "modules.m"
              }
#line 1595 "modules.m"
            else
#line 1594 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IncludeDeps_17_17 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_2;
#line 1598 "modules.m"
            /* direct tailcall eliminated */
#line 1598 "modules.m"
            {
#line 1598 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__Items_8;
#line 1598 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IncludeDeps_0__tmp_copy_2 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_17_17;

#line 1598 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IncludeDeps_0_2 = parse_tree__modules__STATE_VARIABLE_IncludeDeps_0__tmp_copy_2;
#line 1598 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1598 "modules.m"
            }
#line 1598 "modules.m"
            continue;
#line 1588 "modules.m"
          }
#line 1587 "modules.m"
      }
#line 1587 "modules.m"
      break;
#line 1587 "modules.m"
    }
#line 1584 "modules.m"
}

#line 1513 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_dependencies_7_p_0_1(
#line 1513 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1513 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1513 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2)
#line 1513 "modules.m"
{
#line 1513 "modules.m"
  {
#line 1513 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1513 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__2_102;

#line 1513 "modules.m"
    {
#line 1513 "modules.m"
      parse_tree__modules__IntroducedFrom__pred__generate_dependencies__1513__1_2_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv1_HeadVar__2_102);
    }
#line 1513 "modules.m"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__2_102));
#line 1513 "modules.m"
  }
#line 1513 "modules.m"
}

#line 1459 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_dependencies_7_p_0(
#line 1459 "modules.m"
  MR_Word parse_tree__modules__Globals_8,
#line 1459 "modules.m"
  MR_Word parse_tree__modules__Mode_9,
#line 1459 "modules.m"
  MR_Word parse_tree__modules__Search_10,
#line 1459 "modules.m"
  MR_Word parse_tree__modules__ModuleName_11,
#line 1459 "modules.m"
  MR_Word parse_tree__modules__DepsMap0_12)
#line 1459 "modules.m"
{
#line 1462 "modules.m"
  {
#line 1462 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1462 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_98_98;
#line 1462 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_99_99;
#line 1462 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_100_100;
#line 1462 "modules.m"
    MR_Word parse_tree__modules__DepsMap_14;
#line 1462 "modules.m"
    MR_Word parse_tree__modules__ModuleDep_15;
#line 1462 "modules.m"
    MR_Word parse_tree__modules__ModuleImports_17;
#line 1462 "modules.m"
    MR_Word parse_tree__modules__Errors_18;
#line 1462 "modules.m"
    MR_Word parse_tree__modules__FatalErrors_19;
#line 1462 "modules.m"
    MR_Word parse_tree__modules__Target_39;
#line 1462 "modules.m"
    MR_Word parse_tree__modules__V_44_44;
#line 1468 "modules.m"
    MR_Box parse_tree__modules__conv0_ModuleDep_15;
#line 1469 "modules.m"
    MR_Word parse_tree__modules__V_16_16;
#line 1470 "modules.m"
    MR_String parse_tree__modules__V_78_78;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_79_79;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_80_80;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_81_81;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_82_82;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_83_83;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_84_84;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_85_85;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_86_86;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_87_87;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_88_88;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_89_89;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_90_90;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_91_91;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_92_92;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_93_93;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_94_94;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_95_95;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__V_96_96;
#line 1470 "modules.m"
    MR_String parse_tree__modules__V_97_97;

#line 1464 "modules.m"
    {
#line 1464 "modules.m"
      parse_tree__deps_map__generate_deps_map_7_p_0(parse_tree__modules__Globals_8, parse_tree__modules__ModuleName_11, parse_tree__modules__Search_10, parse_tree__modules__DepsMap0_12, &parse_tree__modules__DepsMap_14);
    }
#line 5773 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_98_98 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 5775 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_99_99 = (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0;
#line 1468 "modules.m"
    {
#line 1468 "modules.m"
      mercury__map__lookup_3_p_0(parse_tree__modules__TypeCtorInfo_98_98, parse_tree__modules__TypeCtorInfo_99_99, parse_tree__modules__DepsMap_14, ((MR_Box) (parse_tree__modules__ModuleName_11)), &parse_tree__modules__conv0_ModuleDep_15);
    }
#line 1468 "modules.m"
    parse_tree__modules__ModuleDep_15 = ((MR_Word) parse_tree__modules__conv0_ModuleDep_15);
#line 1469 "modules.m"
    parse_tree__modules__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleDep_15, (MR_Integer) 0)));
#line 1469 "modules.m"
    parse_tree__modules__ModuleImports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleDep_15, (MR_Integer) 1)));
#line 1470 "modules.m"
    parse_tree__modules__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 0)));
#line 1470 "modules.m"
    parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 1)));
#line 1470 "modules.m"
    parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 2)));
#line 1470 "modules.m"
    parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 3)));
#line 1470 "modules.m"
    parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 4)));
#line 1470 "modules.m"
    parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 5)));
#line 1470 "modules.m"
    parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 6)));
#line 1470 "modules.m"
    parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 7)));
#line 1470 "modules.m"
    parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 8)));
#line 1470 "modules.m"
    parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 9)));
#line 1470 "modules.m"
    parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 10)));
#line 1470 "modules.m"
    parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 11)));
#line 1470 "modules.m"
    parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 12)));
#line 1470 "modules.m"
    parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 13)));
#line 1470 "modules.m"
    parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 14)));
#line 1470 "modules.m"
    parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 15)));
#line 1470 "modules.m"
    parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 16)));
#line 1470 "modules.m"
    parse_tree__modules__Errors_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 17)));
#line 1470 "modules.m"
    parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 18)));
#line 1470 "modules.m"
    parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 19)));
#line 1470 "modules.m"
    parse_tree__modules__V_97_97 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 20)));
#line 1471 "modules.m"
    {
#line 1471 "modules.m"
      parse_tree__modules__V_44_44 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
    }
#line 5835 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1471 "modules.m"
    {
#line 1471 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_100_100, parse_tree__modules__Errors_18, parse_tree__modules__V_44_44, &parse_tree__modules__FatalErrors_19);
    }
#line 1472 "modules.m"
    {
#line 1472 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__modules__TypeCtorInfo_100_100, parse_tree__modules__FatalErrors_19);
    }
#line 1482 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1473 "modules.m"
      {
#line 1473 "modules.m"
        MR_String parse_tree__modules__ModuleString_20;
#line 1473 "modules.m"
        MR_String parse_tree__modules__Message_21;

#line 1473 "modules.m"
        {
#line 1473 "modules.m"
          parse_tree__modules__ModuleString_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__modules__ModuleName_11);
        }
#line 1474 "modules.m"
        {
#line 1474 "modules.m"
          parse_tree__modules__succeeded = mercury__set__contains_2_p_0(parse_tree__modules__TypeCtorInfo_100_100, parse_tree__modules__FatalErrors_19, ((MR_Box) ((MR_Integer) 0)));
        }
#line 1477 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1475 "modules.m"
          {
#line 1475 "modules.m"
            MR_Word parse_tree__modules__V_46_46;
#line 1475 "modules.m"
            MR_Word parse_tree__modules__V_48_48;

#line 1476 "modules.m"
            {
#line 1476 "modules.m"
              parse_tree__modules__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1476 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_48_48, 0) = ((MR_Box) (parse_tree__modules__ModuleString_20));
#line 1476 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[103])));
#line 1476 "modules.m"
            }
#line 1475 "modules.m"
            {
#line 1475 "modules.m"
              parse_tree__modules__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1475 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_46_46, 0) = ((MR_Box) ((MR_String) "cannot read source file for module \140"));
#line 1475 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_46_46, 1) = ((MR_Box) (parse_tree__modules__V_48_48));
#line 1475 "modules.m"
            }
#line 1475 "modules.m"
            {
#line 1475 "modules.m"
              mercury__string__append_list_2_p_0(parse_tree__modules__V_46_46, &parse_tree__modules__Message_21);
            }
#line 1475 "modules.m"
          }
#line 1477 "modules.m"
        else
#line 1478 "modules.m"
          {
#line 1478 "modules.m"
            MR_Word parse_tree__modules__V_52_52;
#line 1478 "modules.m"
            MR_Word parse_tree__modules__V_54_54;

#line 1479 "modules.m"
            {
#line 1479 "modules.m"
              parse_tree__modules__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_54_54, 0) = ((MR_Box) (parse_tree__modules__ModuleString_20));
#line 1479 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[103])));
#line 1479 "modules.m"
            }
#line 1478 "modules.m"
            {
#line 1478 "modules.m"
              parse_tree__modules__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_52_52, 0) = ((MR_Box) ((MR_String) "cannot parse source file for module \140"));
#line 1478 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_52_52, 1) = ((MR_Box) (parse_tree__modules__V_54_54));
#line 1478 "modules.m"
            }
#line 1478 "modules.m"
            {
#line 1478 "modules.m"
              mercury__string__append_list_2_p_0(parse_tree__modules__V_52_52, &parse_tree__modules__Message_21);
            }
#line 1478 "modules.m"
          }
#line 1481 "modules.m"
        {
#line 1481 "modules.m"
          libs__file_util__report_error_3_p_0(parse_tree__modules__Message_21);
        }
#line 1473 "modules.m"
      }
#line 1482 "modules.m"
    else
#line 1493 "modules.m"
      {
#line 1493 "modules.m"
        MR_Word parse_tree__modules__IntDepsGraph0_23;
#line 1493 "modules.m"
        MR_Word parse_tree__modules__ImplDepsGraph0_24;
#line 1493 "modules.m"
        MR_Word parse_tree__modules__DepsList_25;
#line 1493 "modules.m"
        MR_Word parse_tree__modules__IntDepsGraph_26;
#line 1493 "modules.m"
        MR_Word parse_tree__modules__ImplDepsGraph_27;
#line 1493 "modules.m"
        MR_Word parse_tree__modules__ImplDepsOrdering0_28;
#line 1493 "modules.m"
        MR_Word parse_tree__modules__ImplDepsOrdering_29;
#line 1493 "modules.m"
        MR_Word parse_tree__modules__TransOptDepsOrdering0_30;
#line 1493 "modules.m"
        MR_Word parse_tree__modules__IntermodDirs_31;
#line 1493 "modules.m"
        MR_Word parse_tree__modules__TransOptDepsOrdering_32;
#line 1493 "modules.m"
        MR_Word parse_tree__modules__TransImplDepsGraph_35;
#line 1493 "modules.m"
        MR_Word parse_tree__modules__IndirectDepsGraph_36;
#line 1493 "modules.m"
        MR_Word parse_tree__modules__IndirectOptDepsGraph_37;
#line 1493 "modules.m"
        MR_Word parse_tree__modules__DFilesToWrite_38;

#line 1498 "modules.m"
        {
#line 1498 "modules.m"
          mercury__digraph__init_1_p_0(parse_tree__modules__TypeCtorInfo_98_98, &parse_tree__modules__IntDepsGraph0_23);
        }
#line 1499 "modules.m"
        {
#line 1499 "modules.m"
          mercury__digraph__init_1_p_0(parse_tree__modules__TypeCtorInfo_98_98, &parse_tree__modules__ImplDepsGraph0_24);
        }
#line 1500 "modules.m"
        {
#line 1500 "modules.m"
          mercury__map__values_2_p_0(parse_tree__modules__TypeCtorInfo_98_98, parse_tree__modules__TypeCtorInfo_99_99, parse_tree__modules__DepsMap_14, &parse_tree__modules__DepsList_25);
        }
#line 1501 "modules.m"
        {
#line 1501 "modules.m"
          parse_tree__module_deps_graph__deps_list_to_deps_graph_6_p_0(parse_tree__modules__DepsList_25, parse_tree__modules__DepsMap_14, parse_tree__modules__IntDepsGraph0_23, &parse_tree__modules__IntDepsGraph_26, parse_tree__modules__ImplDepsGraph0_24, &parse_tree__modules__ImplDepsGraph_27);
        }
#line 1511 "modules.m"
        {
#line 1511 "modules.m"
          mercury__digraph__atsort_2_p_0(parse_tree__modules__TypeCtorInfo_98_98, parse_tree__modules__ImplDepsGraph_27, &parse_tree__modules__ImplDepsOrdering0_28);
        }
#line 1513 "modules.m"
        {
#line 1513 "modules.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__modules_scalar_common_2[3], (MR_Word) &parse_tree__modules_scalar_common_2[4], (MR_Word) &parse_tree__modules_scalar_common_1[15], parse_tree__modules__ImplDepsOrdering0_28, &parse_tree__modules__ImplDepsOrdering_29);
        }
#line 1514 "modules.m"
        {
#line 1514 "modules.m"
          mercury__list__condense_2_p_0(parse_tree__modules__TypeCtorInfo_98_98, parse_tree__modules__ImplDepsOrdering_29, &parse_tree__modules__TransOptDepsOrdering0_30);
        }
#line 1515 "modules.m"
        {
#line 1515 "modules.m"
          libs__globals__lookup_accumulating_option_3_p_0(parse_tree__modules__Globals_8, (MR_Integer) 645, &parse_tree__modules__IntermodDirs_31);
        }
#line 1535 "modules.m"
        {
#line 1535 "modules.m"
          mercury__digraph__tc_2_p_0(parse_tree__modules__TypeCtorInfo_98_98, parse_tree__modules__ImplDepsGraph_27, &parse_tree__modules__TransImplDepsGraph_35);
        }
#line 1536 "modules.m"
        {
#line 1536 "modules.m"
          mercury__digraph__compose_3_p_0(parse_tree__modules__TypeCtorInfo_98_98, parse_tree__modules__ImplDepsGraph_27, parse_tree__modules__TransImplDepsGraph_35, &parse_tree__modules__IndirectDepsGraph_36);
        }
#line 1547 "modules.m"
        {
#line 1547 "modules.m"
          mercury__digraph__tc_2_p_0(parse_tree__modules__TypeCtorInfo_98_98, parse_tree__modules__ImplDepsGraph_27, &parse_tree__modules__IndirectOptDepsGraph_37);
        }
#line 6033 "parse_tree.modules.c"
        if ((parse_tree__modules__Mode_9 == (MR_Integer) 1))
#line 6035 "parse_tree.modules.c"
          {
#line 6037 "parse_tree.modules.c"
            MR_String parse_tree__modules__SourceFileName_22;

#line 1487 "modules.m"
            {
#line 1487 "modules.m"
              parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(parse_tree__modules__ModuleImports_17, &parse_tree__modules__SourceFileName_22);
            }
#line 1489 "modules.m"
            {
#line 1489 "modules.m"
              parse_tree__write_deps_file__generate_dependencies_write_dv_file_6_p_0(parse_tree__modules__Globals_8, parse_tree__modules__SourceFileName_22, parse_tree__modules__ModuleName_11, parse_tree__modules__DepsMap_14);
            }
#line 1491 "modules.m"
            {
#line 1491 "modules.m"
              parse_tree__write_deps_file__generate_dependencies_write_dep_file_6_p_0(parse_tree__modules__Globals_8, parse_tree__modules__SourceFileName_22, parse_tree__modules__ModuleName_11, parse_tree__modules__DepsMap_14);
            }
#line 1554 "modules.m"
            parse_tree__modules__DFilesToWrite_38 = parse_tree__modules__DepsList_25;
#line 6057 "parse_tree.modules.c"
          }
#line 6059 "parse_tree.modules.c"
        else
#line 6061 "parse_tree.modules.c"
          {
#line 1551 "modules.m"
            {
#line 1551 "modules.m"
              parse_tree__modules__DFilesToWrite_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1551 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__DFilesToWrite_38, 0) = ((MR_Box) (parse_tree__modules__ModuleDep_15));
#line 1551 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__DFilesToWrite_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1551 "modules.m"
            }
#line 6073 "parse_tree.modules.c"
          }
#line 1503 "modules.m"
        {
#line 1503 "modules.m"
          parse_tree__module_deps_graph__maybe_output_imports_graph_6_p_0(parse_tree__modules__Globals_8, parse_tree__modules__ModuleName_11, parse_tree__modules__IntDepsGraph_26, parse_tree__modules__ImplDepsGraph_27);
        }
#line 1512 "modules.m"
        {
#line 1512 "modules.m"
          parse_tree__write_deps_file__maybe_output_module_order_5_p_0(parse_tree__modules__Globals_8, parse_tree__modules__ModuleName_11, parse_tree__modules__ImplDepsOrdering0_28);
        }
#line 1517 "modules.m"
        {
#line 1517 "modules.m"
          parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__modules__Globals_8, (MR_Integer) 1, parse_tree__modules__TransOptDepsOrdering0_30, parse_tree__modules__IntermodDirs_31, (MR_String) ".trans_opt", &parse_tree__modules__TransOptDepsOrdering_32);
        }
#line 1556 "modules.m"
        {
#line 1556 "modules.m"
          parse_tree__write_deps_file__generate_dependencies_write_d_files_10_p_0(parse_tree__modules__Globals_8, parse_tree__modules__DFilesToWrite_38, parse_tree__modules__IntDepsGraph_26, parse_tree__modules__ImplDepsGraph_27, parse_tree__modules__IndirectDepsGraph_36, parse_tree__modules__IndirectOptDepsGraph_37, parse_tree__modules__TransOptDepsOrdering_32, parse_tree__modules__DepsMap_14);
        }
#line 1493 "modules.m"
      }
#line 1568 "modules.m"
    {
#line 1568 "modules.m"
      libs__globals__get_target_2_p_0(parse_tree__modules__Globals_8, &parse_tree__modules__Target_39);
    }
#line 1570 "modules.m"
    parse_tree__modules__succeeded = (parse_tree__modules__Target_39 == (MR_Integer) 3);
#line 1570 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1571 "modules.m"
      parse_tree__modules__succeeded = (parse_tree__modules__Mode_9 == (MR_Integer) 1);
#line 1574 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1573 "modules.m"
      {
#line 1573 "modules.m"
        MR_Word parse_tree__modules___Succeeded_40;

#line 1573 "modules.m"
        {
#line 1573 "modules.m"
          parse_tree__module_cmds__create_java_shell_script_5_p_0(parse_tree__modules__Globals_8, parse_tree__modules__ModuleName_11, &parse_tree__modules___Succeeded_40);
        }
#line 1573 "modules.m"
      }
#line 1574 "modules.m"
    else
#line 1573 "modules.m"
      {
#line 1573 "modules.m"
      }
#line 1462 "modules.m"
  }
#line 1459 "modules.m"
}

#line 1393 "modules.m"
static void MR_CALL 
parse_tree__modules__replace_section_decl_4_p_0(
#line 1393 "modules.m"
  MR_Word parse_tree__modules__IntStatusItem_5,
#line 1393 "modules.m"
  MR_Word parse_tree__modules__ImpStatusItem_6,
#line 1393 "modules.m"
  MR_Word parse_tree__modules__Item0_7,
#line 1393 "modules.m"
  MR_Word * parse_tree__modules__Item_8)
#line 1393 "modules.m"
{
#line 1408 "modules.m"
  {
#line 1408 "modules.m"
    MR_bool parse_tree__modules__succeeded = ((MR_tag((MR_Word) parse_tree__modules__Item0_7)) == (MR_mktag((MR_Integer) 2)));
#line 1408 "modules.m"
    MR_Word parse_tree__modules__ItemPrime_13;
#line 1397 "modules.m"
    MR_Word parse_tree__modules__ItemModuleDefn0_9;
#line 1397 "modules.m"
    MR_Word parse_tree__modules__ModuleDefn0_10;
#line 1398 "modules.m"
    MR_Word parse_tree__modules__V_11_11;
#line 1398 "modules.m"
    MR_Integer parse_tree__modules__V_12_12;

#line 1397 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1397 "modules.m"
      {
#line 1397 "modules.m"
        parse_tree__modules__ItemModuleDefn0_9 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item0_7), (MR_Integer) 2);
#line 1398 "modules.m"
        parse_tree__modules__ModuleDefn0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn0_9, (MR_Integer) 0)));
#line 1398 "modules.m"
        parse_tree__modules__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn0_9, (MR_Integer) 1)));
#line 1398 "modules.m"
        parse_tree__modules__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn0_9, (MR_Integer) 2)));
#line 1402 "modules.m"
        if ((parse_tree__modules__ModuleDefn0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1404 "modules.m"
          {
#line 1404 "modules.m"
            parse_tree__modules__ItemPrime_13 = parse_tree__modules__ImpStatusItem_6;
#line 1404 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 1404 "modules.m"
          }
#line 1402 "modules.m"
        else
#line 1402 "modules.m"
          if ((parse_tree__modules__ModuleDefn0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1401 "modules.m"
            {
#line 1401 "modules.m"
              parse_tree__modules__ItemPrime_13 = parse_tree__modules__IntStatusItem_5;
#line 1401 "modules.m"
              parse_tree__modules__succeeded = MR_TRUE;
#line 1401 "modules.m"
            }
#line 1402 "modules.m"
          else
#line 1402 "modules.m"
            parse_tree__modules__succeeded = MR_FALSE;
#line 1397 "modules.m"
      }
#line 1408 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1407 "modules.m"
      *parse_tree__modules__Item_8 = parse_tree__modules__ItemPrime_13;
#line 1408 "modules.m"
    else
#line 1409 "modules.m"
      *parse_tree__modules__Item_8 = parse_tree__modules__Item0_7;
#line 1408 "modules.m"
  }
#line 1393 "modules.m"
}

#line 1391 "modules.m"
static void MR_CALL 
parse_tree__modules__replace_section_decls_4_p_0_1(
#line 1391 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1391 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1391 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2)
#line 1391 "modules.m"
{
#line 1391 "modules.m"
  {
#line 1391 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1391 "modules.m"
    MR_Word parse_tree__modules__conv0_Item_8;

#line 1391 "modules.m"
    {
#line 1391 "modules.m"
      parse_tree__modules__replace_section_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_Item_8);
    }
#line 1391 "modules.m"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_Item_8));
#line 1391 "modules.m"
  }
#line 1391 "modules.m"
}

#line 1387 "modules.m"
static void MR_CALL 
parse_tree__modules__replace_section_decls_4_p_0(
#line 1387 "modules.m"
  MR_Word parse_tree__modules__IntStatusItem_5,
#line 1387 "modules.m"
  MR_Word parse_tree__modules__ImpStatusItem_6,
#line 1387 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Items_0_8,
#line 1387 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Items_9)
#line 1387 "modules.m"
{
#line 1390 "modules.m"
  {
#line 1390 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1390 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_14_14;
#line 1390 "modules.m"
    MR_Word parse_tree__modules__V_10_10;

#line 1391 "modules.m"
    {
#line 1391 "modules.m"
      parse_tree__modules__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1391 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_10_10, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_7[1]));
#line 1391 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_10_10, 1) = ((MR_Box) (parse_tree__modules__replace_section_decls_4_p_0_1));
#line 1391 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1391 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_10_10, 3) = ((MR_Box) (parse_tree__modules__IntStatusItem_5));
#line 1391 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_10_10, 4) = ((MR_Box) (parse_tree__modules__ImpStatusItem_6));
#line 1391 "modules.m"
    }
#line 6282 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1391 "modules.m"
    {
#line 1391 "modules.m"
      mercury__list__map_3_p_0(parse_tree__modules__TypeCtorInfo_14_14, parse_tree__modules__TypeCtorInfo_14_14, parse_tree__modules__V_10_10, parse_tree__modules__STATE_VARIABLE_Items_0_8, parse_tree__modules__STATE_VARIABLE_Items_9);
#line 1391 "modules.m"
      return;
    }
#line 1390 "modules.m"
  }
#line 1387 "modules.m"
}

#line 1345 "modules.m"
static void MR_CALL 
parse_tree__modules__report_inaccessible_module_error_6_p_0(
#line 1345 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1345 "modules.m"
  MR_Word parse_tree__modules__ParentModule_8,
#line 1345 "modules.m"
  MR_String parse_tree__modules__SubModule_9,
#line 1345 "modules.m"
  MR_Word parse_tree__modules__HeadVar__4_4,
#line 1345 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_17,
#line 1345 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_18)
#line 1345 "modules.m"
{
#line 1361 "modules.m"
  {
#line 1361 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1361 "modules.m"
    MR_String parse_tree__modules__DeclName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__4_4, (MR_Integer) 0)));
#line 1361 "modules.m"
    MR_Word parse_tree__modules__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__4_4, (MR_Integer) 1)));
#line 1361 "modules.m"
    MR_Word parse_tree__modules__MainPieces_13;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__VerbosePieces_14;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__Msg_15;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__Spec_16;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_21_21;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_22_22;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_23_23;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_26_26;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_28_28;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_31_31;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_32_32;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_33_33;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_36_36;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_38_38;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_41_41;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_42_42;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_43_43;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_52_52;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_55_55;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_58_58;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_61_61;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_64_64;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_65_65;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_66_66;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_69_69;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_72_72;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_74_74;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_77_77;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_80_80;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_83_83;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_84_84;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_91_91;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_92_92;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_93_93;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_94_94;
#line 1361 "modules.m"
    MR_Word parse_tree__modules__V_98_98;

#line 1362 "modules.m"
    {
#line 1362 "modules.m"
      parse_tree__modules__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1362 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_22_22, 1) = ((MR_Box) (parse_tree__modules__ModuleName_7));
#line 1362 "modules.m"
    }
#line 1363 "modules.m"
    {
#line 1363 "modules.m"
      parse_tree__modules__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "modules.m"
      MR_hl_field(MR_mktag(2), parse_tree__modules__V_32_32, 0) = ((MR_Box) (parse_tree__modules__DeclName_10));
#line 1363 "modules.m"
    }
#line 1364 "modules.m"
    {
#line 1364 "modules.m"
      parse_tree__modules__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 0) = ((MR_Box) (parse_tree__modules__ParentModule_8));
#line 1364 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 1) = ((MR_Box) (parse_tree__modules__SubModule_9));
#line 1364 "modules.m"
    }
#line 1364 "modules.m"
    {
#line 1364 "modules.m"
      parse_tree__modules__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1364 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_42_42, 1) = ((MR_Box) (parse_tree__modules__V_43_43));
#line 1364 "modules.m"
    }
#line 1364 "modules.m"
    {
#line 1364 "modules.m"
      parse_tree__modules__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_41_41, 0) = ((MR_Box) (parse_tree__modules__V_42_42));
#line 1364 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[55])));
#line 1364 "modules.m"
    }
#line 1364 "modules.m"
    {
#line 1364 "modules.m"
      parse_tree__modules__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[95])));
#line 1364 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_38_38, 1) = ((MR_Box) (parse_tree__modules__V_41_41));
#line 1364 "modules.m"
    }
#line 1363 "modules.m"
    {
#line 1363 "modules.m"
      parse_tree__modules__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1363 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_36_36, 1) = ((MR_Box) (parse_tree__modules__V_38_38));
#line 1363 "modules.m"
    }
#line 1363 "modules.m"
    {
#line 1363 "modules.m"
      parse_tree__modules__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[94])));
#line 1363 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 1) = ((MR_Box) (parse_tree__modules__V_36_36));
#line 1363 "modules.m"
    }
#line 1363 "modules.m"
    {
#line 1363 "modules.m"
      parse_tree__modules__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_31_31, 0) = ((MR_Box) (parse_tree__modules__V_32_32));
#line 1363 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_31_31, 1) = ((MR_Box) (parse_tree__modules__V_33_33));
#line 1363 "modules.m"
    }
#line 1363 "modules.m"
    {
#line 1363 "modules.m"
      parse_tree__modules__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[93])));
#line 1363 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 1) = ((MR_Box) (parse_tree__modules__V_31_31));
#line 1363 "modules.m"
    }
#line 1362 "modules.m"
    {
#line 1362 "modules.m"
      parse_tree__modules__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1362 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_26_26, 1) = ((MR_Box) (parse_tree__modules__V_28_28));
#line 1362 "modules.m"
    }
#line 1362 "modules.m"
    {
#line 1362 "modules.m"
      parse_tree__modules__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[92])));
#line 1362 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 1) = ((MR_Box) (parse_tree__modules__V_26_26));
#line 1362 "modules.m"
    }
#line 1362 "modules.m"
    {
#line 1362 "modules.m"
      parse_tree__modules__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_21_21, 0) = ((MR_Box) (parse_tree__modules__V_22_22));
#line 1362 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_21_21, 1) = ((MR_Box) (parse_tree__modules__V_23_23));
#line 1362 "modules.m"
    }
#line 1362 "modules.m"
    {
#line 1362 "modules.m"
      parse_tree__modules__MainPieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[91])));
#line 1362 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_13, 1) = ((MR_Box) (parse_tree__modules__V_21_21));
#line 1362 "modules.m"
    }
#line 1369 "modules.m"
    {
#line 1369 "modules.m"
      parse_tree__modules__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1369 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_65_65, 1) = ((MR_Box) (parse_tree__modules__ParentModule_8));
#line 1369 "modules.m"
    }
#line 1373 "modules.m"
    {
#line 1373 "modules.m"
      parse_tree__modules__V_84_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "modules.m"
      MR_hl_field(MR_mktag(2), parse_tree__modules__V_84_84, 0) = ((MR_Box) (parse_tree__modules__SubModule_9));
#line 1373 "modules.m"
    }
#line 1373 "modules.m"
    {
#line 1373 "modules.m"
      parse_tree__modules__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_83_83, 0) = ((MR_Box) (parse_tree__modules__V_84_84));
#line 1373 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[57])));
#line 1373 "modules.m"
    }
#line 1372 "modules.m"
    {
#line 1372 "modules.m"
      parse_tree__modules__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1372 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_80_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[102])));
#line 1372 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_80_80, 1) = ((MR_Box) (parse_tree__modules__V_83_83));
#line 1372 "modules.m"
    }
#line 1372 "modules.m"
    {
#line 1372 "modules.m"
      parse_tree__modules__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1372 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_4[10])));
#line 1372 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 1) = ((MR_Box) (parse_tree__modules__V_80_80));
#line 1372 "modules.m"
    }
#line 1371 "modules.m"
    {
#line 1371 "modules.m"
      parse_tree__modules__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1371 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[101])));
#line 1371 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_74_74, 1) = ((MR_Box) (parse_tree__modules__V_77_77));
#line 1371 "modules.m"
    }
#line 1371 "modules.m"
    {
#line 1371 "modules.m"
      parse_tree__modules__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1371 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 0) = ((MR_Box) (parse_tree__modules__V_65_65));
#line 1371 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 1) = ((MR_Box) (parse_tree__modules__V_74_74));
#line 1371 "modules.m"
    }
#line 1370 "modules.m"
    {
#line 1370 "modules.m"
      parse_tree__modules__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1370 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_69_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[100])));
#line 1370 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_69_69, 1) = ((MR_Box) (parse_tree__modules__V_72_72));
#line 1370 "modules.m"
    }
#line 1370 "modules.m"
    {
#line 1370 "modules.m"
      parse_tree__modules__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1370 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[99])));
#line 1370 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 1) = ((MR_Box) (parse_tree__modules__V_69_69));
#line 1370 "modules.m"
    }
#line 1369 "modules.m"
    {
#line 1369 "modules.m"
      parse_tree__modules__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_64_64, 0) = ((MR_Box) (parse_tree__modules__V_65_65));
#line 1369 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_64_64, 1) = ((MR_Box) (parse_tree__modules__V_66_66));
#line 1369 "modules.m"
    }
#line 1369 "modules.m"
    {
#line 1369 "modules.m"
      parse_tree__modules__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_61_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[98])));
#line 1369 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_61_61, 1) = ((MR_Box) (parse_tree__modules__V_64_64));
#line 1369 "modules.m"
    }
#line 1368 "modules.m"
    {
#line 1368 "modules.m"
      parse_tree__modules__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_4[9])));
#line 1368 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_58_58, 1) = ((MR_Box) (parse_tree__modules__V_61_61));
#line 1368 "modules.m"
    }
#line 1368 "modules.m"
    {
#line 1368 "modules.m"
      parse_tree__modules__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[97])));
#line 1368 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_55_55, 1) = ((MR_Box) (parse_tree__modules__V_58_58));
#line 1368 "modules.m"
    }
#line 1367 "modules.m"
    {
#line 1367 "modules.m"
      parse_tree__modules__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_4[8])));
#line 1367 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_52_52, 1) = ((MR_Box) (parse_tree__modules__V_55_55));
#line 1367 "modules.m"
    }
#line 1366 "modules.m"
    {
#line 1366 "modules.m"
      parse_tree__modules__VerbosePieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__VerbosePieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[96])));
#line 1366 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__VerbosePieces_14, 1) = ((MR_Box) (parse_tree__modules__V_52_52));
#line 1366 "modules.m"
    }
#line 1375 "modules.m"
    {
#line 1375 "modules.m"
      parse_tree__modules__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1375 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_92_92, 0) = ((MR_Box) (parse_tree__modules__MainPieces_13));
#line 1375 "modules.m"
    }
#line 1375 "modules.m"
    {
#line 1375 "modules.m"
      parse_tree__modules__V_94_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "modules.m"
      MR_hl_field(MR_mktag(2), parse_tree__modules__V_94_94, 0) = ((MR_Box) (parse_tree__modules__VerbosePieces_14));
#line 1375 "modules.m"
    }
#line 1375 "modules.m"
    {
#line 1375 "modules.m"
      parse_tree__modules__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_93_93, 0) = ((MR_Box) (parse_tree__modules__V_94_94));
#line 1375 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1375 "modules.m"
    }
#line 1375 "modules.m"
    {
#line 1375 "modules.m"
      parse_tree__modules__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_91_91, 0) = ((MR_Box) (parse_tree__modules__V_92_92));
#line 1375 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_91_91, 1) = ((MR_Box) (parse_tree__modules__V_93_93));
#line 1375 "modules.m"
    }
#line 1374 "modules.m"
    {
#line 1374 "modules.m"
      parse_tree__modules__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1374 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_15, 0) = ((MR_Box) (parse_tree__modules__Context_11));
#line 1374 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_15, 1) = ((MR_Box) (parse_tree__modules__V_91_91));
#line 1374 "modules.m"
    }
#line 1376 "modules.m"
    {
#line 1376 "modules.m"
      parse_tree__modules__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_98_98, 0) = ((MR_Box) (parse_tree__modules__Msg_15));
#line 1376 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1376 "modules.m"
    }
#line 1376 "modules.m"
    {
#line 1376 "modules.m"
      parse_tree__modules__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1376 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1376 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1376 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_16, 2) = ((MR_Box) (parse_tree__modules__V_98_98));
#line 1376 "modules.m"
    }
#line 1377 "modules.m"
    {
#line 1377 "modules.m"
      MR_Word base;
#line 1377 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_18 = base;
#line 1377 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_16));
#line 1377 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_17));
#line 1377 "modules.m"
    }
#line 1361 "modules.m"
  }
#line 1345 "modules.m"
}

#line 1336 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0_2(
#line 1336 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1336 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1336 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1336 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 1336 "modules.m"
{
#line 1336 "modules.m"
  {
#line 1336 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1336 "modules.m"
    MR_Word parse_tree__modules__conv1_STATE_VARIABLE_Specs_18;

#line 1336 "modules.m"
    {
#line 1336 "modules.m"
      parse_tree__modules__report_inaccessible_module_error_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv1_STATE_VARIABLE_Specs_18);
    }
#line 1336 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_STATE_VARIABLE_Specs_18));
#line 1336 "modules.m"
  }
#line 1336 "modules.m"
}

#line 1316 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0_1(
#line 1316 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1316 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1316 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2)
#line 1316 "modules.m"
{
#line 1316 "modules.m"
  {
#line 1316 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1316 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1316 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__3_29;

#line 1316 "modules.m"
    {
#line 1316 "modules.m"
      parse_tree__modules__succeeded = parse_tree__modules__IntroducedFrom__pred__check_module_accessibility__1316__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_HeadVar__3_29);
    }
#line 1316 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1316 "modules.m"
      {
#line 1316 "modules.m"
        *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__3_29));
#line 1316 "modules.m"
        parse_tree__modules__succeeded = MR_TRUE;
#line 1316 "modules.m"
      }
#line 1316 "modules.m"
    return parse_tree__modules__succeeded;
#line 1316 "modules.m"
  }
#line 1316 "modules.m"
}

#line 1302 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0(
#line 1302 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1302 "modules.m"
  MR_Word parse_tree__modules__AccessibleSubModules_8,
#line 1302 "modules.m"
  MR_Word parse_tree__modules__Items_9,
#line 1302 "modules.m"
  MR_Word parse_tree__modules__ImportedModule_10,
#line 1302 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 1302 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27)
#line 1302 "modules.m"
{
#line 1341 "modules.m"
  {
#line 1341 "modules.m"
    MR_bool parse_tree__modules__succeeded = ((MR_tag((MR_Word) parse_tree__modules__ImportedModule_10)) == (MR_mktag((MR_Integer) 1)));
#line 1341 "modules.m"
    MR_Word parse_tree__modules__ParentModule_12;
#line 1341 "modules.m"
    MR_String parse_tree__modules__SubModule_13;

#line 1308 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1308 "modules.m"
      {
#line 1308 "modules.m"
        parse_tree__modules__ParentModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__ImportedModule_10, (MR_Integer) 0)));
#line 1308 "modules.m"
        parse_tree__modules__SubModule_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__modules__ImportedModule_10, (MR_Integer) 1)));
#line 1309 "modules.m"
        {
#line 1309 "modules.m"
          parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__ImportedModule_10)), parse_tree__modules__AccessibleSubModules_8);
        }
#line 1311 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1309 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Specs_27 = parse_tree__modules__STATE_VARIABLE_Specs_0_26;
#line 1311 "modules.m"
        else
#line 1328 "modules.m"
          {
#line 1328 "modules.m"
            MR_Word parse_tree__modules__TypeInfo_40_40;
#line 1328 "modules.m"
            MR_Word parse_tree__modules__FindImports_14;
#line 1328 "modules.m"
            MR_Word parse_tree__modules__ImportInfos_23;

#line 1316 "modules.m"
            {
#line 1316 "modules.m"
              parse_tree__modules__FindImports_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1316 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__FindImports_14, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[7]));
#line 1316 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__FindImports_14, 1) = ((MR_Box) (parse_tree__modules__check_module_accessibility_6_p_0_1));
#line 1316 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__FindImports_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1316 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__FindImports_14, 3) = ((MR_Box) (parse_tree__modules__ImportedModule_10));
#line 1316 "modules.m"
            }
#line 6909 "parse_tree.modules.c"
            parse_tree__modules__TypeInfo_40_40 = (MR_Word) &parse_tree__modules_scalar_common_1[1];
#line 1329 "modules.m"
            {
#line 1329 "modules.m"
              mercury__list__filter_map_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__modules__TypeInfo_40_40, parse_tree__modules__FindImports_14, parse_tree__modules__Items_9, &parse_tree__modules__ImportInfos_23);
            }
#line 1333 "modules.m"
            if ((parse_tree__modules__ImportInfos_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1331 "modules.m"
              {
#line 1332 "modules.m"
                {
#line 1332 "modules.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.modules", (MR_String) "predicate \140parse_tree.modules.check_module_accessibility\'/6", (MR_String) "check_parent_module");
#line 1332 "modules.m"
                  return;
                }
#line 1331 "modules.m"
              }
#line 1333 "modules.m"
            else
#line 1334 "modules.m"
              {
#line 1334 "modules.m"
                MR_Word parse_tree__modules__V_30_30;
#line 1335 "modules.m"
                MR_Box parse_tree__modules__conv2_STATE_VARIABLE_Specs_27;

#line 1336 "modules.m"
                {
#line 1336 "modules.m"
                  parse_tree__modules__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1336 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__V_30_30, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_9[1]));
#line 1336 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__V_30_30, 1) = ((MR_Box) (parse_tree__modules__check_module_accessibility_6_p_0_2));
#line 1336 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1336 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__V_30_30, 3) = ((MR_Box) (parse_tree__modules__ModuleName_7));
#line 1336 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__V_30_30, 4) = ((MR_Box) (parse_tree__modules__ParentModule_12));
#line 1336 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__V_30_30, 5) = ((MR_Box) (parse_tree__modules__SubModule_13));
#line 1336 "modules.m"
                }
#line 1335 "modules.m"
                {
#line 1335 "modules.m"
                  mercury__list__foldl_4_p_0(parse_tree__modules__TypeInfo_40_40, (MR_Word) &parse_tree__modules_scalar_common_2[2], parse_tree__modules__V_30_30, parse_tree__modules__ImportInfos_23, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_26)), &parse_tree__modules__conv2_STATE_VARIABLE_Specs_27);
                }
#line 1335 "modules.m"
                *parse_tree__modules__STATE_VARIABLE_Specs_27 = ((MR_Word) parse_tree__modules__conv2_STATE_VARIABLE_Specs_27);
#line 1334 "modules.m"
              }
#line 1328 "modules.m"
          }
#line 1308 "modules.m"
      }
#line 1308 "modules.m"
    else
#line 1335 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_27 = parse_tree__modules__STATE_VARIABLE_Specs_0_26;
#line 1341 "modules.m"
  }
#line 1302 "modules.m"
}

#line 1299 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_5_p_0_1(
#line 1299 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1299 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1299 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1299 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 1299 "modules.m"
{
#line 1299 "modules.m"
  {
#line 1299 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1299 "modules.m"
    MR_Word parse_tree__modules__conv0_STATE_VARIABLE_Specs_27;

#line 1299 "modules.m"
    {
#line 1299 "modules.m"
      parse_tree__modules__check_module_accessibility_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv0_STATE_VARIABLE_Specs_27);
    }
#line 1299 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_STATE_VARIABLE_Specs_27));
#line 1299 "modules.m"
  }
#line 1299 "modules.m"
}

#line 1294 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_5_p_0(
#line 1294 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 1294 "modules.m"
  MR_Word parse_tree__modules__Imports_7,
#line 1294 "modules.m"
  MR_Word parse_tree__modules__Items_8,
#line 1294 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_11,
#line 1294 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_12)
#line 1294 "modules.m"
{
#line 1297 "modules.m"
  {
#line 1297 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1297 "modules.m"
    MR_Word parse_tree__modules__AccessibleSubModules_10;
#line 1297 "modules.m"
    MR_Word parse_tree__modules__V_13_13;
#line 1299 "modules.m"
    MR_Box parse_tree__modules__conv1_STATE_VARIABLE_Specs_12;

#line 1608 "modules.m"
    {
#line 1608 "modules.m"
      parse_tree__modules__get_accessible_children_acc_4_p_0((MR_Integer) 1, parse_tree__modules__Items_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__AccessibleSubModules_10);
    }
#line 1299 "modules.m"
    {
#line 1299 "modules.m"
      parse_tree__modules__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_13_13, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_9[0]));
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_13_13, 1) = ((MR_Box) (parse_tree__modules__check_imports_accessibility_5_p_0_1));
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_13_13, 3) = ((MR_Box) (parse_tree__modules__ModuleName_6));
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_13_13, 4) = ((MR_Box) (parse_tree__modules__AccessibleSubModules_10));
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_13_13, 5) = ((MR_Box) (parse_tree__modules__Items_8));
#line 1299 "modules.m"
    }
#line 1299 "modules.m"
    {
#line 1299 "modules.m"
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_2[2], parse_tree__modules__V_13_13, parse_tree__modules__Imports_7, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_11)), &parse_tree__modules__conv1_STATE_VARIABLE_Specs_12);
    }
#line 1299 "modules.m"
    *parse_tree__modules__STATE_VARIABLE_Specs_12 = ((MR_Word) parse_tree__modules__conv1_STATE_VARIABLE_Specs_12);
#line 1297 "modules.m"
  }
#line 1294 "modules.m"
}

#line 1262 "modules.m"
static void MR_CALL 
parse_tree__modules__maybe_record_timestamp_6_p_0(
#line 1262 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1262 "modules.m"
  MR_String parse_tree__modules__Suffix_8,
#line 1262 "modules.m"
  MR_Word parse_tree__modules__NeedQualifier_9,
#line 1262 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamp_10,
#line 1262 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Module_0_16,
#line 1262 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Module_17)
#line 1262 "modules.m"
{
#line 1269 "modules.m"
  {
#line 1269 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 18)));
#line 1269 "modules.m"
    MR_String parse_tree__modules__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 20)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 19)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 17)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 16)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 15)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 14)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 13)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 12)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 11)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 10)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 9)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 8)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 7)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 6)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 5)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 4)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 3)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 2)));
#line 1269 "modules.m"
    MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 1)));
#line 1269 "modules.m"
    MR_String parse_tree__modules__V_105_105 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 0)));

#line 1269 "modules.m"
    if ((parse_tree__modules__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1279 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Module_17 = parse_tree__modules__STATE_VARIABLE_Module_0_16;
#line 1269 "modules.m"
    else
#line 1269 "modules.m"
      {
#line 1269 "modules.m"
        MR_Word parse_tree__modules__Timestamps0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__V_87_87, (MR_Integer) 0)));

#line 1275 "modules.m"
        if ((parse_tree__modules__MaybeTimestamp_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1276 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Module_17 = parse_tree__modules__STATE_VARIABLE_Module_0_16;
#line 1275 "modules.m"
        else
#line 1271 "modules.m"
          {
#line 1271 "modules.m"
            MR_Word parse_tree__modules__Timestamp_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__MaybeTimestamp_10, (MR_Integer) 0)));
#line 1271 "modules.m"
            MR_Word parse_tree__modules__TimestampInfo_14;
#line 1271 "modules.m"
            MR_Word parse_tree__modules__Timestamps_15;
#line 1271 "modules.m"
            MR_Word parse_tree__modules__V_21_21;
#line 1274 "modules.m"
            MR_String parse_tree__modules__V_42_42;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_43_43;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_44_44;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_45_45;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_46_46;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_47_47;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_48_48;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_49_49;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_50_50;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_51_51;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_52_52;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_53_53;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_54_54;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_55_55;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_56_56;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_57_57;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_58_58;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_59_59;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_61_61;
#line 1274 "modules.m"
            MR_String parse_tree__modules__V_62_62;
#line 1274 "modules.m"
            MR_Word parse_tree__modules__V_60_60;

#line 1272 "modules.m"
            {
#line 1272 "modules.m"
              parse_tree__modules__TimestampInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1272 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__TimestampInfo_14, 0) = ((MR_Box) (parse_tree__modules__Suffix_8));
#line 1272 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__TimestampInfo_14, 1) = ((MR_Box) (parse_tree__modules__Timestamp_13));
#line 1272 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__TimestampInfo_14, 2) = ((MR_Box) (parse_tree__modules__NeedQualifier_9));
#line 1272 "modules.m"
            }
#line 1273 "modules.m"
            {
#line 1273 "modules.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, ((MR_Box) (parse_tree__modules__ModuleName_7)), ((MR_Box) (parse_tree__modules__TimestampInfo_14)), parse_tree__modules__Timestamps0_12, &parse_tree__modules__Timestamps_15);
            }
#line 1274 "modules.m"
            {
#line 1274 "modules.m"
              parse_tree__modules__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_21_21, 0) = ((MR_Box) (parse_tree__modules__Timestamps_15));
#line 1274 "modules.m"
            }
#line 1274 "modules.m"
            parse_tree__modules__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 0)));
#line 1274 "modules.m"
            parse_tree__modules__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 1)));
#line 1274 "modules.m"
            parse_tree__modules__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 2)));
#line 1274 "modules.m"
            parse_tree__modules__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 3)));
#line 1274 "modules.m"
            parse_tree__modules__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 4)));
#line 1274 "modules.m"
            parse_tree__modules__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 5)));
#line 1274 "modules.m"
            parse_tree__modules__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 6)));
#line 1274 "modules.m"
            parse_tree__modules__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 7)));
#line 1274 "modules.m"
            parse_tree__modules__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 8)));
#line 1274 "modules.m"
            parse_tree__modules__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 9)));
#line 1274 "modules.m"
            parse_tree__modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 10)));
#line 1274 "modules.m"
            parse_tree__modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 11)));
#line 1274 "modules.m"
            parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 12)));
#line 1274 "modules.m"
            parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 13)));
#line 1274 "modules.m"
            parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 14)));
#line 1274 "modules.m"
            parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 15)));
#line 1274 "modules.m"
            parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 16)));
#line 1274 "modules.m"
            parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 17)));
#line 1274 "modules.m"
            parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 18)));
#line 1274 "modules.m"
            parse_tree__modules__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 19)));
#line 1274 "modules.m"
            parse_tree__modules__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_16, (MR_Integer) 20)));
#line 1274 "modules.m"
            {
#line 1274 "modules.m"
              MR_Word base;
#line 1274 "modules.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "modules.m"
              *parse_tree__modules__STATE_VARIABLE_Module_17 = base;
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_42_42));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_43_43));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_44_44));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_45_45));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__V_46_46));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_47_47));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__V_48_48));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__V_49_49));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_50_50));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_51_51));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_52_52));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_53_53));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_54_54));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_55_55));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_56_56));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_57_57));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_58_58));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_59_59));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_21_21));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_61_61));
#line 1274 "modules.m"
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_62_62));
#line 1274 "modules.m"
            }
#line 1271 "modules.m"
          }
#line 1269 "modules.m"
      }
#line 1269 "modules.m"
  }
#line 1262 "modules.m"
}

#line 534 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__init_module_and_imports_11_p_0_2(
#line 534 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 534 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 534 "modules.m"
{
#line 534 "modules.m"
  {
#line 534 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 534 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 534 "modules.m"
    MR_Word parse_tree__modules__conv2_Item_6;

#line 534 "modules.m"
    {
#line 534 "modules.m"
      parse_tree__modules__conv2_Item_6 = parse_tree__modules__make_foreign_import_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 534 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv2_Item_6));
#line 534 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 534 "modules.m"
  }
#line 534 "modules.m"
}

#line 547 "modules.m"
static void MR_CALL 
parse_tree__modules__init_module_and_imports_11_p_0_1(
#line 547 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 547 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 547 "modules.m"
{
#line 547 "modules.m"
  {
#line 547 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 547 "modules.m"
    MR_Word parse_tree__modules__conv0_STATE_VARIABLE_LangSet_8;

#line 547 "modules.m"
    {
#line 547 "modules.m"
      parse_tree__modules__accumulate_item_foreign_import_langs_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv0_STATE_VARIABLE_LangSet_8);
    }
#line 547 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_STATE_VARIABLE_LangSet_8));
#line 547 "modules.m"
  }
#line 547 "modules.m"
}

#line 1233 "modules.m"
static void MR_CALL 
parse_tree__modules__init_module_and_imports_11_p_0(
#line 1233 "modules.m"
  MR_String parse_tree__modules__SourceFileName_12,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_13,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__ModuleName_14,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__Items0_15,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__Specs_16,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__PublicChildren_17,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__NestedChildren_18,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__FactDeps_19,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__ForeignIncludeFiles_20,
#line 1233 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamps_21,
#line 1233 "modules.m"
  MR_Word * parse_tree__modules__Module_22)
#line 1233 "modules.m"
{
#line 1241 "modules.m"
  {
#line 1241 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1241 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_11_45;
#line 1241 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_11_56 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 1241 "modules.m"
    MR_Word parse_tree__modules__Items_23;
#line 1241 "modules.m"
    MR_Word parse_tree__modules__ItemsCord_24;
#line 1241 "modules.m"
    MR_Word parse_tree__modules__Errors_25;
#line 1241 "modules.m"
    MR_String parse_tree__modules__V_35_35;
#line 1241 "modules.m"
    MR_Word parse_tree__modules__Langs_41;
#line 1241 "modules.m"
    MR_Word parse_tree__modules__ImportItems_42;
#line 1241 "modules.m"
    MR_Word parse_tree__modules__V_43_43;
#line 1241 "modules.m"
    MR_Word parse_tree__modules__LangSet_50;
#line 1241 "modules.m"
    MR_Word parse_tree__modules__V_52_52;
#line 547 "modules.m"
    MR_Box parse_tree__modules__conv1_LangSet_50;

#line 547 "modules.m"
    {
#line 547 "modules.m"
      parse_tree__modules__V_52_52 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_11_56);
    }
#line 547 "modules.m"
    {
#line 547 "modules.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__modules_scalar_common_2[0], (MR_Word) &parse_tree__modules_scalar_common_1[14], parse_tree__modules__Items0_15, ((MR_Box) (parse_tree__modules__V_52_52)), &parse_tree__modules__conv1_LangSet_50);
    }
#line 547 "modules.m"
    parse_tree__modules__LangSet_50 = ((MR_Word) parse_tree__modules__conv1_LangSet_50);
#line 548 "modules.m"
    {
#line 548 "modules.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__modules__TypeCtorInfo_11_56, parse_tree__modules__LangSet_50, &parse_tree__modules__Langs_41);
    }
#line 7470 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_11_45 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 534 "modules.m"
    {
#line 534 "modules.m"
      parse_tree__modules__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 534 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_43_43, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[2]));
#line 534 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_43_43, 1) = ((MR_Box) (parse_tree__modules__init_module_and_imports_11_p_0_2));
#line 534 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 534 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_43_43, 3) = ((MR_Box) (parse_tree__modules__ModuleName_14));
#line 534 "modules.m"
    }
#line 534 "modules.m"
    {
#line 534 "modules.m"
      parse_tree__modules__ImportItems_42 = mercury__list__map_2_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__modules__TypeCtorInfo_11_45, parse_tree__modules__V_43_43, parse_tree__modules__Langs_41);
    }
#line 535 "modules.m"
    {
#line 535 "modules.m"
      parse_tree__modules__Items_23 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_11_45, parse_tree__modules__ImportItems_42, parse_tree__modules__Items0_15);
    }
#line 1246 "modules.m"
    {
#line 1246 "modules.m"
      parse_tree__modules__ItemsCord_24 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__modules__Items_23);
    }
#line 1247 "modules.m"
    {
#line 1247 "modules.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__modules__Errors_25);
    }
#line 1252 "modules.m"
    {
#line 1252 "modules.m"
      parse_tree__modules__V_35_35 = mercury__dir__this_directory_0_f_0();
    }
#line 1248 "modules.m"
    {
#line 1248 "modules.m"
      MR_Word base;
#line 1248 "modules.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 1248 "modules.m"
      *parse_tree__modules__Module_22 = base;
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__SourceFileName_12));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__SourceFileModuleName_13));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__ModuleName_14));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__PublicChildren_17));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__NestedChildren_18));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__FactDeps_19));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__ForeignIncludeFiles_20));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) ((MR_Integer) 1));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__ItemsCord_24));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__Specs_16));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__Errors_25));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__MaybeTimestamps_21));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) ((MR_Integer) 1));
#line 1248 "modules.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_35_35));
#line 1248 "modules.m"
    }
#line 1241 "modules.m"
  }
#line 1233 "modules.m"
}

#line 1029 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__wrap_symname_1_f_0(
#line 1029 "modules.m"
  MR_Word parse_tree__modules__ModuleName_3)
#line 1029 "modules.m"
{
#line 1031 "modules.m"
  {
#line 1031 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1031 "modules.m"
    MR_Word parse_tree__modules__HeadVar__2_2;

#line 1031 "modules.m"
    {
#line 1031 "modules.m"
      parse_tree__modules__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1031 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__modules__ModuleName_3));
#line 1031 "modules.m"
    }
#line 1031 "modules.m"
    return parse_tree__modules__HeadVar__2_2;
#line 1031 "modules.m"
  }
#line 1029 "modules.m"
}

#line 941 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_imported_ancestor_5_p_0(
#line 941 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 941 "modules.m"
  MR_String parse_tree__modules__FileName_7,
#line 941 "modules.m"
  MR_Word parse_tree__modules__AncestorName_8,
#line 941 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_16,
#line 941 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_17)
#line 941 "modules.m"
{
#line 944 "modules.m"
  {
#line 944 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 944 "modules.m"
    MR_Word parse_tree__modules__Context_10;
#line 944 "modules.m"
    MR_Word parse_tree__modules__MainPieces_11;
#line 944 "modules.m"
    MR_Word parse_tree__modules__Msg_13;
#line 944 "modules.m"
    MR_Word parse_tree__modules__Spec_15;
#line 944 "modules.m"
    MR_Word parse_tree__modules__V_21_21;
#line 944 "modules.m"
    MR_Word parse_tree__modules__V_22_22;
#line 944 "modules.m"
    MR_Word parse_tree__modules__V_23_23;
#line 944 "modules.m"
    MR_Word parse_tree__modules__V_26_26;
#line 944 "modules.m"
    MR_Word parse_tree__modules__V_27_27;
#line 944 "modules.m"
    MR_Word parse_tree__modules__V_41_41;
#line 944 "modules.m"
    MR_Word parse_tree__modules__V_42_42;
#line 944 "modules.m"
    MR_Word parse_tree__modules__V_45_45;
#line 944 "modules.m"
    MR_Word parse_tree__modules__V_46_46;
#line 944 "modules.m"
    MR_Word parse_tree__modules__V_56_56;

#line 945 "modules.m"
    {
#line 945 "modules.m"
      mercury__term__context_init_3_p_0(parse_tree__modules__FileName_7, (MR_Integer) 1, &parse_tree__modules__Context_10);
    }
#line 946 "modules.m"
    {
#line 946 "modules.m"
      parse_tree__modules__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 946 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_22_22, 1) = ((MR_Box) (parse_tree__modules__ModuleName_6));
#line 946 "modules.m"
    }
#line 948 "modules.m"
    {
#line 948 "modules.m"
      parse_tree__modules__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 948 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_27_27, 1) = ((MR_Box) (parse_tree__modules__AncestorName_8));
#line 948 "modules.m"
    }
#line 948 "modules.m"
    {
#line 948 "modules.m"
      parse_tree__modules__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_26_26, 0) = ((MR_Box) (parse_tree__modules__V_27_27));
#line 948 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[89])));
#line 948 "modules.m"
    }
#line 947 "modules.m"
    {
#line 947 "modules.m"
      parse_tree__modules__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[87])));
#line 947 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 1) = ((MR_Box) (parse_tree__modules__V_26_26));
#line 947 "modules.m"
    }
#line 946 "modules.m"
    {
#line 946 "modules.m"
      parse_tree__modules__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_21_21, 0) = ((MR_Box) (parse_tree__modules__V_22_22));
#line 946 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_21_21, 1) = ((MR_Box) (parse_tree__modules__V_23_23));
#line 946 "modules.m"
    }
#line 946 "modules.m"
    {
#line 946 "modules.m"
      parse_tree__modules__MainPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[86])));
#line 946 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_11, 1) = ((MR_Box) (parse_tree__modules__V_21_21));
#line 946 "modules.m"
    }
#line 954 "modules.m"
    {
#line 954 "modules.m"
      parse_tree__modules__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 954 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_46_46, 0) = ((MR_Box) (parse_tree__modules__MainPieces_11));
#line 954 "modules.m"
    }
#line 954 "modules.m"
    {
#line 954 "modules.m"
      parse_tree__modules__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_45_45, 0) = ((MR_Box) (parse_tree__modules__V_46_46));
#line 954 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[90])));
#line 954 "modules.m"
    }
#line 953 "modules.m"
    {
#line 953 "modules.m"
      parse_tree__modules__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 953 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_42_42, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 953 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_42_42, 1) = ((MR_Box) (parse_tree__modules__V_45_45));
#line 953 "modules.m"
    }
#line 954 "modules.m"
    {
#line 954 "modules.m"
      parse_tree__modules__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_41_41, 0) = ((MR_Box) (parse_tree__modules__V_42_42));
#line 954 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 954 "modules.m"
    }
#line 952 "modules.m"
    {
#line 952 "modules.m"
      parse_tree__modules__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 952 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_13, 0) = ((MR_Box) (parse_tree__modules__Context_10));
#line 952 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_13, 1) = ((MR_Box) (parse_tree__modules__V_41_41));
#line 952 "modules.m"
    }
#line 957 "modules.m"
    {
#line 957 "modules.m"
      parse_tree__modules__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_56_56, 0) = ((MR_Box) (parse_tree__modules__Msg_13));
#line 957 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 957 "modules.m"
    }
#line 957 "modules.m"
    {
#line 957 "modules.m"
      parse_tree__modules__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 957 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[1])));
#line 957 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 957 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_15, 2) = ((MR_Box) (parse_tree__modules__V_56_56));
#line 957 "modules.m"
    }
#line 958 "modules.m"
    {
#line 958 "modules.m"
      MR_Word base;
#line 958 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_17 = base;
#line 958 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_15));
#line 958 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_16));
#line 958 "modules.m"
    }
#line 944 "modules.m"
  }
#line 941 "modules.m"
}

#line 922 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_3(
#line 922 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 922 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 922 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 922 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 922 "modules.m"
{
#line 922 "modules.m"
  {
#line 922 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 922 "modules.m"
    MR_Word parse_tree__modules__conv1_STATE_VARIABLE_Specs_17;

#line 922 "modules.m"
    {
#line 922 "modules.m"
      parse_tree__modules__warn_imported_ancestor_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv1_STATE_VARIABLE_Specs_17);
    }
#line 922 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_STATE_VARIABLE_Specs_17));
#line 922 "modules.m"
  }
#line 922 "modules.m"
}

#line 915 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_1(
#line 915 "modules.m"
  void * parse_tree__modules__env_ptr_arg)
#line 915 "modules.m"
{
#line 915 "modules.m"
  {
#line 915 "modules.m"
    struct parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0_s * parse_tree__modules__env_ptr = (struct parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0_s *) parse_tree__modules__env_ptr_arg;

#line 915 "modules.m"
    *((parse_tree__modules__env_ptr)->parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((parse_tree__modules__env_ptr)->parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__conv0_HeadVar__4_23));
#line 915 "modules.m"
    {
#line 915 "modules.m"
      ((parse_tree__modules__env_ptr)->parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__cont)((parse_tree__modules__env_ptr)->parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__cont_env_ptr);
#line 915 "modules.m"
      return;
    }
#line 915 "modules.m"
  }
#line 915 "modules.m"
}

#line 915 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2(
#line 915 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 915 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 915 "modules.m"
  MR_Cont parse_tree__modules__cont,
#line 915 "modules.m"
  void * parse_tree__modules__cont_env_ptr)
#line 915 "modules.m"
{
#line 915 "modules.m"
  {
#line 915 "modules.m"
    struct parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0_s parse_tree__modules__env;

#line 915 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__wrapper_arg_1 = parse_tree__modules__wrapper_arg_1;
#line 915 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__cont = parse_tree__modules__cont;
#line 915 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__cont_env_ptr = parse_tree__modules__cont_env_ptr;
#line 915 "modules.m"
    {
#line 915 "modules.m"
      MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;

#line 915 "modules.m"
      {
#line 915 "modules.m"
        parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__915__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), &(parse_tree__modules__env).parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__conv0_HeadVar__4_23, parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_1, &parse_tree__modules__env);
      }
#line 915 "modules.m"
    }
#line 915 "modules.m"
  }
#line 915 "modules.m"
}

#line 908 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0(
#line 908 "modules.m"
  MR_Word parse_tree__modules__ModuleName_8,
#line 908 "modules.m"
  MR_String parse_tree__modules__FileName_9,
#line 908 "modules.m"
  MR_Word parse_tree__modules__AncestorModules_10,
#line 908 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_11,
#line 908 "modules.m"
  MR_Word parse_tree__modules__UsedModules_12,
#line 908 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_21,
#line 908 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_22)
#line 908 "modules.m"
{
#line 913 "modules.m"
  {
#line 913 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 913 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_56_56;
#line 913 "modules.m"
    MR_Word parse_tree__modules__IsImportedAncestor_14;
#line 913 "modules.m"
    MR_Word parse_tree__modules__V_24_24;
#line 913 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_25_25;
#line 921 "modules.m"
    MR_Box parse_tree__modules__conv2_STATE_VARIABLE_Specs_25_25;

#line 915 "modules.m"
    {
#line 915 "modules.m"
      parse_tree__modules__IsImportedAncestor_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 915 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__IsImportedAncestor_14, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_7[0]));
#line 915 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__IsImportedAncestor_14, 1) = ((MR_Box) (parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2));
#line 915 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__IsImportedAncestor_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 915 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__IsImportedAncestor_14, 3) = ((MR_Box) (parse_tree__modules__AncestorModules_10));
#line 915 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__IsImportedAncestor_14, 4) = ((MR_Box) (parse_tree__modules__ImportedModules_11));
#line 915 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__IsImportedAncestor_14, 5) = ((MR_Box) (parse_tree__modules__UsedModules_12));
#line 915 "modules.m"
    }
#line 922 "modules.m"
    {
#line 922 "modules.m"
      parse_tree__modules__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 922 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_24_24, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_8[0]));
#line 922 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_24_24, 1) = ((MR_Box) (parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_3));
#line 922 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 922 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_24_24, 3) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 922 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_24_24, 4) = ((MR_Box) (parse_tree__modules__FileName_9));
#line 922 "modules.m"
    }
#line 7968 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_56_56 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 921 "modules.m"
    {
#line 921 "modules.m"
      mercury__solutions__aggregate_4_p_3(parse_tree__modules__TypeCtorInfo_56_56, (MR_Word) &parse_tree__modules_scalar_common_2[2], parse_tree__modules__IsImportedAncestor_14, parse_tree__modules__V_24_24, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_21)), &parse_tree__modules__conv2_STATE_VARIABLE_Specs_25_25);
    }
#line 921 "modules.m"
    parse_tree__modules__STATE_VARIABLE_Specs_25_25 = ((MR_Word) parse_tree__modules__conv2_STATE_VARIABLE_Specs_25_25);
#line 924 "modules.m"
    {
#line 924 "modules.m"
      parse_tree__modules__succeeded = mercury__list__member_2_p_0(parse_tree__modules__TypeCtorInfo_56_56, ((MR_Box) (parse_tree__modules__ModuleName_8)), parse_tree__modules__ImportedModules_11);
    }
#line 925 "modules.m"
    if (!(parse_tree__modules__succeeded))
#line 925 "modules.m"
      {
#line 925 "modules.m"
        parse_tree__modules__succeeded = mercury__list__member_2_p_0(parse_tree__modules__TypeCtorInfo_56_56, ((MR_Box) (parse_tree__modules__ModuleName_8)), parse_tree__modules__UsedModules_12);
      }
#line 937 "modules.m"
    if (parse_tree__modules__succeeded)
#line 928 "modules.m"
      {
#line 928 "modules.m"
        MR_Word parse_tree__modules__Context_16;
#line 928 "modules.m"
        MR_Word parse_tree__modules__SelfPieces_17;
#line 928 "modules.m"
        MR_Word parse_tree__modules__SelfMsg_18;
#line 928 "modules.m"
        MR_Word parse_tree__modules__SelfSpec_20;
#line 928 "modules.m"
        MR_Word parse_tree__modules__V_29_29;
#line 928 "modules.m"
        MR_Word parse_tree__modules__V_30_30;
#line 928 "modules.m"
        MR_Word parse_tree__modules__V_35_35;
#line 928 "modules.m"
        MR_Word parse_tree__modules__V_36_36;
#line 928 "modules.m"
        MR_Word parse_tree__modules__V_39_39;
#line 928 "modules.m"
        MR_Word parse_tree__modules__V_40_40;
#line 928 "modules.m"
        MR_Word parse_tree__modules__V_48_48;

#line 928 "modules.m"
        {
#line 928 "modules.m"
          mercury__term__context_init_3_p_0(parse_tree__modules__FileName_9, (MR_Integer) 1, &parse_tree__modules__Context_16);
        }
#line 930 "modules.m"
        {
#line 930 "modules.m"
          parse_tree__modules__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 930 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_30_30, 1) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 930 "modules.m"
        }
#line 930 "modules.m"
        {
#line 930 "modules.m"
          parse_tree__modules__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_29_29, 0) = ((MR_Box) (parse_tree__modules__V_30_30));
#line 930 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[85])));
#line 930 "modules.m"
        }
#line 929 "modules.m"
        {
#line 929 "modules.m"
          parse_tree__modules__SelfPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 929 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__SelfPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[83])));
#line 929 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__SelfPieces_17, 1) = ((MR_Box) (parse_tree__modules__V_29_29));
#line 929 "modules.m"
        }
#line 932 "modules.m"
        {
#line 932 "modules.m"
          parse_tree__modules__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 932 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_40_40, 0) = ((MR_Box) (parse_tree__modules__SelfPieces_17));
#line 932 "modules.m"
        }
#line 932 "modules.m"
        {
#line 932 "modules.m"
          parse_tree__modules__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_39_39, 0) = ((MR_Box) (parse_tree__modules__V_40_40));
#line 932 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 932 "modules.m"
        }
#line 932 "modules.m"
        {
#line 932 "modules.m"
          parse_tree__modules__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_36_36, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 932 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_36_36, 1) = ((MR_Box) (parse_tree__modules__V_39_39));
#line 932 "modules.m"
        }
#line 932 "modules.m"
        {
#line 932 "modules.m"
          parse_tree__modules__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_35_35, 0) = ((MR_Box) (parse_tree__modules__V_36_36));
#line 932 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 932 "modules.m"
        }
#line 931 "modules.m"
        {
#line 931 "modules.m"
          parse_tree__modules__SelfMsg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 931 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfMsg_18, 0) = ((MR_Box) (parse_tree__modules__Context_16));
#line 931 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfMsg_18, 1) = ((MR_Box) (parse_tree__modules__V_35_35));
#line 931 "modules.m"
        }
#line 935 "modules.m"
        {
#line 935 "modules.m"
          parse_tree__modules__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_48_48, 0) = ((MR_Box) (parse_tree__modules__SelfMsg_18));
#line 935 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "modules.m"
        }
#line 935 "modules.m"
        {
#line 935 "modules.m"
          parse_tree__modules__SelfSpec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 935 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfSpec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[1])));
#line 935 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfSpec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 935 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfSpec_20, 2) = ((MR_Box) (parse_tree__modules__V_48_48));
#line 935 "modules.m"
        }
#line 936 "modules.m"
        {
#line 936 "modules.m"
          MR_Word base;
#line 936 "modules.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Specs_22 = base;
#line 936 "modules.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__SelfSpec_20));
#line 936 "modules.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_25_25));
#line 936 "modules.m"
        }
#line 928 "modules.m"
      }
#line 937 "modules.m"
    else
#line 936 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_22 = parse_tree__modules__STATE_VARIABLE_Specs_25_25;
#line 913 "modules.m"
  }
#line 908 "modules.m"
}

#line 871 "modules.m"
static void MR_CALL 
parse_tree__modules__split_clauses_and_decls_3_p_0(
#line 871 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 871 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2,
#line 871 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__3_3)
#line 871 "modules.m"
{
#line 874 "modules.m"
  while (MR_TRUE)
#line 874 "modules.m"
    {
#line 874 "modules.m"
      /* tailcall optimized into a loop */
#line 874 "modules.m"
      {
#line 874 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 874 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "modules.m"
          {
#line 874 "modules.m"
            *parse_tree__modules__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 874 "modules.m"
            *parse_tree__modules__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 874 "modules.m"
          }
#line 874 "modules.m"
        else
#line 875 "modules.m"
          {
#line 875 "modules.m"
            MR_Word parse_tree__modules__Item_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 875 "modules.m"
            MR_Word parse_tree__modules__Items_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 877 "modules.m"
            MR_Word parse_tree__modules__ItemModuleDefn_8;
#line 877 "modules.m"
            MR_Word parse_tree__modules__ModuleDefn_9;
#line 878 "modules.m"
            MR_Word parse_tree__modules__V_10_10;
#line 878 "modules.m"
            MR_Integer parse_tree__modules__V_11_11;

#line 877 "modules.m"
            parse_tree__modules__succeeded = ((MR_tag((MR_Word) parse_tree__modules__Item_4)) == (MR_mktag((MR_Integer) 2)));
#line 877 "modules.m"
            if (parse_tree__modules__succeeded)
#line 877 "modules.m"
              {
#line 877 "modules.m"
                parse_tree__modules__ItemModuleDefn_8 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_4), (MR_Integer) 2);
#line 878 "modules.m"
                parse_tree__modules__ModuleDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_8, (MR_Integer) 0)));
#line 878 "modules.m"
                parse_tree__modules__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_8, (MR_Integer) 1)));
#line 878 "modules.m"
                parse_tree__modules__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_8, (MR_Integer) 2)));
#line 880 "modules.m"
                if ((parse_tree__modules__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 880 "modules.m"
                  parse_tree__modules__succeeded = MR_TRUE;
#line 880 "modules.m"
                else
#line 880 "modules.m"
                  if ((parse_tree__modules__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 879 "modules.m"
                    parse_tree__modules__succeeded = MR_TRUE;
#line 880 "modules.m"
                  else
#line 880 "modules.m"
                    parse_tree__modules__succeeded = MR_FALSE;
#line 877 "modules.m"
              }
#line 884 "modules.m"
            if (parse_tree__modules__succeeded)
#line 883 "modules.m"
              {
#line 883 "modules.m"
                /* direct tailcall eliminated */
#line 883 "modules.m"
                {
#line 883 "modules.m"
                  MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__Items_5;

#line 883 "modules.m"
                  parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 883 "modules.m"
                }
#line 883 "modules.m"
                continue;
#line 883 "modules.m"
              }
#line 884 "modules.m"
            else
#line 899 "modules.m"
              {
#line 887 "modules.m"
                if (((((MR_tag((MR_Word) parse_tree__modules__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 886 "modules.m"
                  parse_tree__modules__succeeded = MR_TRUE;
#line 887 "modules.m"
                else
#line 887 "modules.m"
                  if (((((MR_tag((MR_Word) parse_tree__modules__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_4, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 894 "modules.m"
                    parse_tree__modules__succeeded = MR_TRUE;
#line 887 "modules.m"
                  else
#line 887 "modules.m"
                    if (((((MR_tag((MR_Word) parse_tree__modules__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_4, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 892 "modules.m"
                      parse_tree__modules__succeeded = MR_TRUE;
#line 887 "modules.m"
                    else
#line 887 "modules.m"
                      if (((((MR_tag((MR_Word) parse_tree__modules__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 888 "modules.m"
                        {
#line 888 "modules.m"
                          MR_Word parse_tree__modules__ItemPragma_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_4, (MR_Integer) 1)));
#line 888 "modules.m"
                          MR_Word parse_tree__modules__Pragma_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_13, (MR_Integer) 1)));
#line 888 "modules.m"
                          MR_Word parse_tree__modules__V_24_24;
#line 889 "modules.m"
                          MR_Word parse_tree__modules__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_13, (MR_Integer) 0)));
#line 889 "modules.m"
                          MR_Word parse_tree__modules__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_13, (MR_Integer) 2)));
#line 889 "modules.m"
                          MR_Integer parse_tree__modules__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_13, (MR_Integer) 3)));

#line 890 "modules.m"
                          {
#line 890 "modules.m"
                            parse_tree__modules__V_24_24 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(parse_tree__modules__Pragma_15);
                          }
#line 890 "modules.m"
                          parse_tree__modules__succeeded = (parse_tree__modules__V_24_24 == (MR_Integer) 0);
#line 888 "modules.m"
                        }
#line 887 "modules.m"
                      else
#line 887 "modules.m"
                        parse_tree__modules__succeeded = MR_FALSE;
#line 899 "modules.m"
                if (parse_tree__modules__succeeded)
#line 897 "modules.m"
                  {
#line 897 "modules.m"
                    MR_Word parse_tree__modules__STATE_VARIABLE_ClauseItems_25_25;

#line 897 "modules.m"
                    {
#line 897 "modules.m"
                      parse_tree__modules__split_clauses_and_decls_3_p_0(parse_tree__modules__Items_5, &parse_tree__modules__STATE_VARIABLE_ClauseItems_25_25, parse_tree__modules__HeadVar__3_3);
                    }
#line 898 "modules.m"
                    {
#line 898 "modules.m"
                      MR_Word base;
#line 898 "modules.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "modules.m"
                      *parse_tree__modules__HeadVar__2_2 = base;
#line 898 "modules.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Item_4));
#line 898 "modules.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ClauseItems_25_25));
#line 898 "modules.m"
                    }
#line 897 "modules.m"
                  }
#line 899 "modules.m"
                else
#line 900 "modules.m"
                  {
#line 900 "modules.m"
                    MR_Word parse_tree__modules__STATE_VARIABLE_InterfaceItems_29_29;

#line 900 "modules.m"
                    {
#line 900 "modules.m"
                      parse_tree__modules__split_clauses_and_decls_3_p_0(parse_tree__modules__Items_5, parse_tree__modules__HeadVar__2_2, &parse_tree__modules__STATE_VARIABLE_InterfaceItems_29_29);
                    }
#line 901 "modules.m"
                    {
#line 901 "modules.m"
                      MR_Word base;
#line 901 "modules.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "modules.m"
                      *parse_tree__modules__HeadVar__3_3 = base;
#line 901 "modules.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Item_4));
#line 901 "modules.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_InterfaceItems_29_29));
#line 901 "modules.m"
                    }
#line 900 "modules.m"
                  }
#line 899 "modules.m"
              }
#line 875 "modules.m"
          }
#line 874 "modules.m"
      }
#line 874 "modules.m"
      break;
#line 874 "modules.m"
    }
#line 871 "modules.m"
}

#line 591 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_no_exports_warning_5_p_0(
#line 591 "modules.m"
  MR_Word parse_tree__modules__Globals_6,
#line 591 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 591 "modules.m"
  MR_Word * parse_tree__modules__Spec_8)
#line 591 "modules.m"
{
#line 594 "modules.m"
  {
#line 594 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 594 "modules.m"
    MR_String parse_tree__modules__FileName_10;
#line 594 "modules.m"
    MR_Word parse_tree__modules__Context_11;
#line 594 "modules.m"
    MR_Word parse_tree__modules__Component_13;
#line 594 "modules.m"
    MR_Word parse_tree__modules__Msg_14;
#line 594 "modules.m"
    MR_Word parse_tree__modules__V_27_27;
#line 594 "modules.m"
    MR_Word parse_tree__modules__V_28_28;
#line 594 "modules.m"
    MR_Word parse_tree__modules__V_29_29;
#line 594 "modules.m"
    MR_Word parse_tree__modules__V_32_32;
#line 594 "modules.m"
    MR_Word parse_tree__modules__V_33_33;
#line 594 "modules.m"
    MR_Word parse_tree__modules__V_90_90;
#line 594 "modules.m"
    MR_Word parse_tree__modules__V_93_93;

#line 597 "modules.m"
    {
#line 597 "modules.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__modules__Globals_6, parse_tree__modules__ModuleName_7, (MR_String) ".m", (MR_Integer) 1, &parse_tree__modules__FileName_10);
    }
#line 601 "modules.m"
    {
#line 601 "modules.m"
      parse_tree__modules__Context_11 = mercury__term__context_init_2_f_0(parse_tree__modules__FileName_10, (MR_Integer) 1);
    }
#line 606 "modules.m"
    {
#line 606 "modules.m"
      parse_tree__modules__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 606 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_33_33, 1) = ((MR_Box) (parse_tree__modules__ModuleName_7));
#line 606 "modules.m"
    }
#line 606 "modules.m"
    {
#line 606 "modules.m"
      parse_tree__modules__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_32_32, 0) = ((MR_Box) (parse_tree__modules__V_33_33));
#line 606 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[82])));
#line 606 "modules.m"
    }
#line 605 "modules.m"
    {
#line 605 "modules.m"
      parse_tree__modules__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_2[80])));
#line 605 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_29_29, 1) = ((MR_Box) (parse_tree__modules__V_32_32));
#line 605 "modules.m"
    }
#line 605 "modules.m"
    {
#line 605 "modules.m"
      parse_tree__modules__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 605 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_28_28, 0) = ((MR_Box) (parse_tree__modules__V_29_29));
#line 605 "modules.m"
    }
#line 606 "modules.m"
    {
#line 606 "modules.m"
      parse_tree__modules__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_27_27, 0) = ((MR_Box) (parse_tree__modules__V_28_28));
#line 606 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[37])));
#line 606 "modules.m"
    }
#line 604 "modules.m"
    {
#line 604 "modules.m"
      parse_tree__modules__Component_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__Component_13, 0) = ((MR_Box) (((MR_Integer) 9 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 604 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__Component_13, 1) = ((MR_Box) (parse_tree__modules__V_27_27));
#line 604 "modules.m"
    }
#line 617 "modules.m"
    {
#line 617 "modules.m"
      parse_tree__modules__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_90_90, 0) = ((MR_Box) (parse_tree__modules__Component_13));
#line 617 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "modules.m"
    }
#line 617 "modules.m"
    {
#line 617 "modules.m"
      parse_tree__modules__Msg_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 617 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_14, 0) = ((MR_Box) (parse_tree__modules__Context_11));
#line 617 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_14, 1) = ((MR_Box) (parse_tree__modules__V_90_90));
#line 617 "modules.m"
    }
#line 618 "modules.m"
    {
#line 618 "modules.m"
      parse_tree__modules__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_93_93, 0) = ((MR_Box) (parse_tree__modules__Msg_14));
#line 618 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 618 "modules.m"
    }
#line 618 "modules.m"
    {
#line 618 "modules.m"
      MR_Word base;
#line 618 "modules.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 618 "modules.m"
      *parse_tree__modules__Spec_8 = base;
#line 618 "modules.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[0])));
#line 618 "modules.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 618 "modules.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_93_93));
#line 618 "modules.m"
    }
#line 594 "modules.m"
  }
#line 591 "modules.m"
}

#line 550 "modules.m"
static void MR_CALL 
parse_tree__modules__accumulate_item_foreign_import_langs_3_p_0(
#line 550 "modules.m"
  MR_Word parse_tree__modules__Item_4,
#line 550 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_LangSet_0_7,
#line 550 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_LangSet_8)
#line 550 "modules.m"
{
#line 553 "modules.m"
  {
#line 553 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 553 "modules.m"
    MR_Word parse_tree__modules__Langs_6;

#line 554 "modules.m"
    {
#line 554 "modules.m"
      parse_tree__modules__Langs_6 = parse_tree__item_util__item_needs_foreign_imports_1_f_0(parse_tree__modules__Item_4);
    }
#line 555 "modules.m"
    {
#line 555 "modules.m"
      mercury__set__insert_list_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__modules__Langs_6, parse_tree__modules__STATE_VARIABLE_LangSet_0_7, parse_tree__modules__STATE_VARIABLE_LangSet_8);
#line 555 "modules.m"
      return;
    }
#line 553 "modules.m"
  }
#line 550 "modules.m"
}

#line 537 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__make_foreign_import_2_f_0(
#line 537 "modules.m"
  MR_Word parse_tree__modules__ModuleName_4,
#line 537 "modules.m"
  MR_Word parse_tree__modules__Lang_5)
#line 537 "modules.m"
{
#line 539 "modules.m"
  {
#line 539 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 539 "modules.m"
    MR_Word parse_tree__modules__Item_6;
#line 539 "modules.m"
    MR_Word parse_tree__modules__Info_8;
#line 539 "modules.m"
    MR_Word parse_tree__modules__Pragma_9;
#line 539 "modules.m"
    MR_Word parse_tree__modules__ItemPragma_10;
#line 539 "modules.m"
    MR_Word parse_tree__modules__V_12_12;

#line 541 "modules.m"
    {
#line 541 "modules.m"
      parse_tree__modules__Info_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 541 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Info_8, 0) = ((MR_Box) (parse_tree__modules__Lang_5));
#line 541 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Info_8, 1) = ((MR_Box) (parse_tree__modules__ModuleName_4));
#line 541 "modules.m"
    }
#line 542 "modules.m"
    {
#line 542 "modules.m"
      parse_tree__modules__Pragma_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__Pragma_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 542 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__Pragma_9, 1) = ((MR_Box) (parse_tree__modules__Info_8));
#line 542 "modules.m"
    }
#line 543 "modules.m"
    {
#line 543 "modules.m"
      parse_tree__modules__V_12_12 = mercury__term__context_init_0_f_0();
    }
#line 543 "modules.m"
    {
#line 543 "modules.m"
      parse_tree__modules__ItemPragma_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 543 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_4[6])));
#line 543 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_10, 1) = ((MR_Box) (parse_tree__modules__Pragma_9));
#line 543 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_10, 2) = ((MR_Box) (parse_tree__modules__V_12_12));
#line 543 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_10, 3) = ((MR_Box) ((MR_Integer) -1));
#line 543 "modules.m"
    }
#line 544 "modules.m"
    {
#line 544 "modules.m"
      parse_tree__modules__Item_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__Item_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 544 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__Item_6, 1) = ((MR_Box) (parse_tree__modules__ItemPragma_10));
#line 544 "modules.m"
    }
#line 539 "modules.m"
    return parse_tree__modules__Item_6;
#line 539 "modules.m"
  }
#line 537 "modules.m"
}

#line 429 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__include_in_int_file_implementation_1_f_0(
#line 429 "modules.m"
  MR_Word parse_tree__modules__Item_3)
#line 429 "modules.m"
{
#line 438 "modules.m"
  {
#line 438 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 438 "modules.m"
    MR_Word parse_tree__modules__Include_4;

#line 438 "modules.m"
    if (((MR_tag((MR_Word) parse_tree__modules__Item_3)) == (MR_mktag((MR_Integer) 2))))
#line 441 "modules.m"
      {
#line 441 "modules.m"
        MR_Word parse_tree__modules__ItemModuleDefn_7 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_3), (MR_Integer) 2);
#line 441 "modules.m"
        MR_Word parse_tree__modules__ModuleDefn_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_7, (MR_Integer) 0)));
#line 442 "modules.m"
        MR_Word parse_tree__modules__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_7, (MR_Integer) 1)));
#line 442 "modules.m"
        MR_Integer parse_tree__modules__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_7, (MR_Integer) 2)));

#line 460 "modules.m"
        if (((((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 462 "modules.m"
          parse_tree__modules__Include_4 = (MR_Integer) 0;
#line 460 "modules.m"
        else
#line 459 "modules.m"
          parse_tree__modules__Include_4 = (MR_Integer) 1;
#line 441 "modules.m"
      }
#line 438 "modules.m"
    else
#line 438 "modules.m"
      if (((((MR_tag((MR_Word) parse_tree__modules__Item_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 465 "modules.m"
        {
#line 465 "modules.m"
          MR_Word parse_tree__modules__ItemPragma_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_3, (MR_Integer) 1)));
#line 465 "modules.m"
          MR_Word parse_tree__modules__Pragma_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_21, (MR_Integer) 1)));
#line 466 "modules.m"
          MR_Word parse_tree__modules__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_21, (MR_Integer) 0)));
#line 466 "modules.m"
          MR_Word parse_tree__modules__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_21, (MR_Integer) 2)));
#line 466 "modules.m"
          MR_Integer parse_tree__modules__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_21, (MR_Integer) 3)));

#line 472 "modules.m"
          if (((((((MR_tag((MR_Word) parse_tree__modules__Pragma_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Pragma_23, (MR_Integer) 0)))) == (MR_Integer) 3)))) || (((((MR_tag((MR_Word) parse_tree__modules__Pragma_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Pragma_23, (MR_Integer) 0)))) == (MR_Integer) 0))))))
#line 471 "modules.m"
            parse_tree__modules__Include_4 = (MR_Integer) 1;
#line 472 "modules.m"
          else
#line 507 "modules.m"
            parse_tree__modules__Include_4 = (MR_Integer) 0;
#line 465 "modules.m"
        }
#line 438 "modules.m"
      else
#line 438 "modules.m"
        if (((((((MR_tag((MR_Word) parse_tree__modules__Item_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_3, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) parse_tree__modules__Item_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_3, (MR_Integer) 0)))) == (MR_Integer) 8))))))
#line 439 "modules.m"
          parse_tree__modules__Include_4 = (MR_Integer) 1;
#line 438 "modules.m"
        else
#line 524 "modules.m"
          parse_tree__modules__Include_4 = (MR_Integer) 0;
#line 438 "modules.m"
    return parse_tree__modules__Include_4;
#line 438 "modules.m"
  }
#line 429 "modules.m"
}

#line 534 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__get_interface_and_implementation_5_p_0_3(
#line 534 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 534 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 534 "modules.m"
{
#line 534 "modules.m"
  {
#line 534 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 534 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 534 "modules.m"
    MR_Word parse_tree__modules__conv4_Item_6;

#line 534 "modules.m"
    {
#line 534 "modules.m"
      parse_tree__modules__conv4_Item_6 = parse_tree__modules__make_foreign_import_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 534 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv4_Item_6));
#line 534 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 534 "modules.m"
  }
#line 534 "modules.m"
}

#line 547 "modules.m"
static void MR_CALL 
parse_tree__modules__get_interface_and_implementation_5_p_0_2(
#line 547 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 547 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 547 "modules.m"
{
#line 547 "modules.m"
  {
#line 547 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 547 "modules.m"
    MR_Word parse_tree__modules__conv2_STATE_VARIABLE_LangSet_8;

#line 547 "modules.m"
    {
#line 547 "modules.m"
      parse_tree__modules__accumulate_item_foreign_import_langs_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv2_STATE_VARIABLE_LangSet_8);
    }
#line 547 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_STATE_VARIABLE_LangSet_8));
#line 547 "modules.m"
  }
#line 547 "modules.m"
}

#line 346 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__get_interface_and_implementation_5_p_0_1(
#line 346 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 346 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 346 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 346 "modules.m"
{
#line 346 "modules.m"
  {
#line 346 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 346 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 346 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__3_19;

#line 346 "modules.m"
    {
#line 346 "modules.m"
      parse_tree__modules__conv0_HeadVar__3_19 = parse_tree__modules__IntroducedFrom__func__get_interface_and_implementation__346__1_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 346 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__3_19));
#line 346 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 346 "modules.m"
  }
#line 346 "modules.m"
}

#line 341 "modules.m"
static void MR_CALL 
parse_tree__modules__get_interface_and_implementation_5_p_0(
#line 341 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 341 "modules.m"
  MR_Word parse_tree__modules__IncludeImplTypes_7,
#line 341 "modules.m"
  MR_Word parse_tree__modules__Items0_8,
#line 341 "modules.m"
  MR_Word * parse_tree__modules__InterfaceItems_9,
#line 341 "modules.m"
  MR_Word * parse_tree__modules__ImplementationItems_10)
#line 341 "modules.m"
{
#line 345 "modules.m"
  {
#line 345 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 345 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_26_26;
#line 345 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_11_34;
#line 345 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_11_45;
#line 345 "modules.m"
    MR_Word parse_tree__modules__RevIntItems_14;
#line 345 "modules.m"
    MR_Word parse_tree__modules__RevImplItems_15;
#line 345 "modules.m"
    MR_Word parse_tree__modules__InterfaceItems0_16;
#line 345 "modules.m"
    MR_Word parse_tree__modules__Langs_30;
#line 345 "modules.m"
    MR_Word parse_tree__modules__ImportItems_31;
#line 345 "modules.m"
    MR_Word parse_tree__modules__V_32_32;
#line 345 "modules.m"
    MR_Word parse_tree__modules__LangSet_39;
#line 345 "modules.m"
    MR_Word parse_tree__modules__V_41_41;
#line 347 "modules.m"
    MR_Box parse_tree__modules__conv1_RevImplItems_15;
#line 547 "modules.m"
    MR_Box parse_tree__modules__conv3_LangSet_39;

#line 347 "modules.m"
    {
#line 347 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_116_101_114_102_97_99_101_95_97_110_100_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_97_99_99_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__IncludeImplTypes_7, parse_tree__modules__Items0_8, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__RevIntItems_14, (MR_Word) &parse_tree__modules_scalar_common_1[12], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &parse_tree__modules__conv1_RevImplItems_15);
    }
#line 347 "modules.m"
    parse_tree__modules__RevImplItems_15 = ((MR_Word) parse_tree__modules__conv1_RevImplItems_15);
#line 8869 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 349 "modules.m"
    {
#line 349 "modules.m"
      mercury__list__reverse_2_p_0(parse_tree__modules__TypeCtorInfo_26_26, parse_tree__modules__RevIntItems_14, &parse_tree__modules__InterfaceItems0_16);
    }
#line 350 "modules.m"
    {
#line 350 "modules.m"
      mercury__list__reverse_2_p_0(parse_tree__modules__TypeCtorInfo_26_26, parse_tree__modules__RevImplItems_15, parse_tree__modules__ImplementationItems_10);
    }
#line 8881 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_11_45 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 547 "modules.m"
    {
#line 547 "modules.m"
      parse_tree__modules__V_41_41 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_11_45);
    }
#line 547 "modules.m"
    {
#line 547 "modules.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__modules_scalar_common_2[0], (MR_Word) &parse_tree__modules_scalar_common_1[13], parse_tree__modules__InterfaceItems0_16, ((MR_Box) (parse_tree__modules__V_41_41)), &parse_tree__modules__conv3_LangSet_39);
    }
#line 547 "modules.m"
    parse_tree__modules__LangSet_39 = ((MR_Word) parse_tree__modules__conv3_LangSet_39);
#line 548 "modules.m"
    {
#line 548 "modules.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__modules__TypeCtorInfo_11_45, parse_tree__modules__LangSet_39, &parse_tree__modules__Langs_30);
    }
#line 8900 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_11_34 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 534 "modules.m"
    {
#line 534 "modules.m"
      parse_tree__modules__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 534 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_32_32, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[2]));
#line 534 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_32_32, 1) = ((MR_Box) (parse_tree__modules__get_interface_and_implementation_5_p_0_3));
#line 534 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 534 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_32_32, 3) = ((MR_Box) (parse_tree__modules__ModuleName_6));
#line 534 "modules.m"
    }
#line 534 "modules.m"
    {
#line 534 "modules.m"
      parse_tree__modules__ImportItems_31 = mercury__list__map_2_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__modules__TypeCtorInfo_11_34, parse_tree__modules__V_32_32, parse_tree__modules__Langs_30);
    }
#line 535 "modules.m"
    {
#line 535 "modules.m"
      *parse_tree__modules__InterfaceItems_9 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_11_34, parse_tree__modules__ImportItems_31, parse_tree__modules__InterfaceItems0_16);
    }
#line 345 "modules.m"
  }
#line 341 "modules.m"
}

#line 1865 "modules.m"
static void MR_CALL 
parse_tree__modules__split_into_submodules_5_p_0_2(
#line 1865 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1865 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1865 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1865 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 1865 "modules.m"
{
#line 1865 "modules.m"
  {
#line 1865 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1865 "modules.m"
    MR_Word parse_tree__modules__conv1_STATE_VARIABLE_Specs_16;

#line 1865 "modules.m"
    {
#line 1865 "modules.m"
      parse_tree__modules__report_error_duplicate_module_decl_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv1_STATE_VARIABLE_Specs_16);
    }
#line 1865 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_STATE_VARIABLE_Specs_16));
#line 1865 "modules.m"
  }
#line 1865 "modules.m"
}

#line 1862 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__split_into_submodules_5_p_0_1(
#line 1862 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1862 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1862 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2)
#line 1862 "modules.m"
{
#line 1862 "modules.m"
  {
#line 1862 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1862 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1862 "modules.m"
    MR_Word parse_tree__modules__conv0_SubModuleNameContexts_6;

#line 1862 "modules.m"
    {
#line 1862 "modules.m"
      parse_tree__modules__succeeded = parse_tree__modules__is_duplicate_error_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_SubModuleNameContexts_6);
    }
#line 1862 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1862 "modules.m"
      {
#line 1862 "modules.m"
        *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_SubModuleNameContexts_6));
#line 1862 "modules.m"
        parse_tree__modules__succeeded = MR_TRUE;
#line 1862 "modules.m"
      }
#line 1862 "modules.m"
    return parse_tree__modules__succeeded;
#line 1862 "modules.m"
  }
#line 1862 "modules.m"
}

#line 301 "modules.m"
void MR_CALL 
parse_tree__modules__split_into_submodules_5_p_0(
#line 301 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 301 "modules.m"
  MR_Word parse_tree__modules__Items0_7,
#line 301 "modules.m"
  MR_Word * parse_tree__modules__ModuleList_8,
#line 301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_18,
#line 301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_19)
#line 301 "modules.m"
{
#line 1678 "modules.m"
  {
#line 1678 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1678 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_25_25;
#line 1678 "modules.m"
    MR_Word parse_tree__modules__LeftOverItems_11;
#line 1678 "modules.m"
    MR_Word parse_tree__modules__NestedSubmodules_15;
#line 1678 "modules.m"
    MR_Word parse_tree__modules__SeparateSubModules_16;
#line 1678 "modules.m"
    MR_Word parse_tree__modules__Duplicates_17;
#line 1678 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_20_20;
#line 1678 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_21_21;
#line 1678 "modules.m"
    MR_Word parse_tree__modules__V_22_22;
#line 1678 "modules.m"
    MR_Word parse_tree__modules__V_23_23;
#line 1678 "modules.m"
    MR_Word parse_tree__modules__ThisModuleItems_36;
#line 1678 "modules.m"
    MR_Word parse_tree__modules__SubModules_37;
#line 1678 "modules.m"
    MR_Word parse_tree__modules__SubModuleList_38;
#line 1678 "modules.m"
    MR_Word parse_tree__modules__V_40_40;

#line 1711 "modules.m"
    {
#line 1711 "modules.m"
      parse_tree__modules__split_into_submodules_3_9_p_0(parse_tree__modules__ModuleName_6, parse_tree__modules__Items0_7, (MR_Integer) 0, (MR_Integer) 0, &parse_tree__modules__ThisModuleItems_36, &parse_tree__modules__LeftOverItems_11, &parse_tree__modules__SubModules_37, parse_tree__modules__STATE_VARIABLE_Specs_0_18, &parse_tree__modules__STATE_VARIABLE_Specs_20_20);
    }
#line 1714 "modules.m"
    {
#line 1714 "modules.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_2[1], parse_tree__modules__SubModules_37, &parse_tree__modules__SubModuleList_38);
    }
#line 1715 "modules.m"
    {
#line 1715 "modules.m"
      parse_tree__modules__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1715 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_40_40, 0) = ((MR_Box) (parse_tree__modules__ModuleName_6));
#line 1715 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_40_40, 1) = ((MR_Box) (parse_tree__modules__ThisModuleItems_36));
#line 1715 "modules.m"
    }
#line 1715 "modules.m"
    {
#line 1715 "modules.m"
      MR_Word base;
#line 1715 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "modules.m"
      *parse_tree__modules__ModuleList_8 = base;
#line 1715 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__V_40_40));
#line 1715 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__SubModuleList_38));
#line 1715 "modules.m"
    }
#line 1686 "modules.m"
    if ((parse_tree__modules__LeftOverItems_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1685 "modules.m"
      parse_tree__modules__STATE_VARIABLE_Specs_21_21 = parse_tree__modules__STATE_VARIABLE_Specs_20_20;
#line 1686 "modules.m"
    else
#line 1687 "modules.m"
      {
#line 1687 "modules.m"
        MR_Word parse_tree__modules__FirstLeftOverItem_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__LeftOverItems_11, (MR_Integer) 0)));
#line 1687 "modules.m"
        MR_Word parse_tree__modules__Context_14;
#line 1687 "modules.m"
        MR_Word parse_tree__modules__Msg_48;
#line 1687 "modules.m"
        MR_Word parse_tree__modules__Spec_49;
#line 1687 "modules.m"
        MR_Word parse_tree__modules__V_58_58;
#line 1687 "modules.m"
        MR_Word parse_tree__modules__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__LeftOverItems_11, (MR_Integer) 1)));

#line 1688 "modules.m"
        {
#line 1688 "modules.m"
          parse_tree__modules__Context_14 = parse_tree__prog_item__get_item_context_1_f_0(parse_tree__modules__FirstLeftOverItem_12);
        }
#line 1920 "modules.m"
        {
#line 1920 "modules.m"
          parse_tree__modules__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1920 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_48, 0) = ((MR_Box) (parse_tree__modules__Context_14));
#line 1920 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_2[79])));
#line 1920 "modules.m"
        }
#line 1921 "modules.m"
        {
#line 1921 "modules.m"
          parse_tree__modules__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1921 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_58_58, 0) = ((MR_Box) (parse_tree__modules__Msg_48));
#line 1921 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1921 "modules.m"
        }
#line 1921 "modules.m"
        {
#line 1921 "modules.m"
          parse_tree__modules__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1921 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1921 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1921 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_49, 2) = ((MR_Box) (parse_tree__modules__V_58_58));
#line 1921 "modules.m"
        }
#line 1922 "modules.m"
        {
#line 1922 "modules.m"
          parse_tree__modules__STATE_VARIABLE_Specs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1922 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_Specs_21_21, 0) = ((MR_Box) (parse_tree__modules__Spec_49));
#line 1922 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_Specs_21_21, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_20_20));
#line 1922 "modules.m"
        }
#line 1687 "modules.m"
      }
#line 1582 "modules.m"
    {
#line 1582 "modules.m"
      parse_tree__modules__get_children_acc_3_p_0(parse_tree__modules__Items0_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__NestedSubmodules_15);
    }
#line 9160 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_25_25 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1694 "modules.m"
    {
#line 1694 "modules.m"
      mercury__assoc_list__keys_2_p_0(parse_tree__modules__TypeCtorInfo_25_25, (MR_Word) &parse_tree__modules_scalar_common_2[1], *parse_tree__modules__ModuleList_8, &parse_tree__modules__SeparateSubModules_16);
    }
#line 1696 "modules.m"
    {
#line 1696 "modules.m"
      parse_tree__modules__V_22_22 = mercury__set__list_to_set_1_f_0(parse_tree__modules__TypeCtorInfo_25_25, parse_tree__modules__NestedSubmodules_15);
    }
#line 1697 "modules.m"
    {
#line 1697 "modules.m"
      parse_tree__modules__V_23_23 = mercury__set__list_to_set_1_f_0(parse_tree__modules__TypeCtorInfo_25_25, parse_tree__modules__SeparateSubModules_16);
    }
#line 1695 "modules.m"
    {
#line 1695 "modules.m"
      parse_tree__modules__Duplicates_17 = mercury__set__intersect_2_f_0(parse_tree__modules__TypeCtorInfo_25_25, parse_tree__modules__V_22_22, parse_tree__modules__V_23_23);
    }
#line 1698 "modules.m"
    {
#line 1698 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_25_25, parse_tree__modules__Duplicates_17);
    }
#line 1700 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1698 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_19 = parse_tree__modules__STATE_VARIABLE_Specs_21_21;
#line 1700 "modules.m"
    else
#line 1861 "modules.m"
      {
#line 1861 "modules.m"
        MR_Word parse_tree__modules__TypeInfo_19_78;
#line 1861 "modules.m"
        MR_Word parse_tree__modules__DuplicateErrorLists_69;
#line 1861 "modules.m"
        MR_Word parse_tree__modules__DuplicateErrors_70;
#line 1861 "modules.m"
        MR_Word parse_tree__modules__V_71_71;
#line 1865 "modules.m"
        MR_Box parse_tree__modules__conv2_STATE_VARIABLE_Specs_19;

#line 1862 "modules.m"
        {
#line 1862 "modules.m"
          parse_tree__modules__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1862 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_71_71, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[4]));
#line 1862 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_71_71, 1) = ((MR_Box) (parse_tree__modules__split_into_submodules_5_p_0_1));
#line 1862 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1862 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_71_71, 3) = ((MR_Box) (parse_tree__modules__Duplicates_17));
#line 1862 "modules.m"
        }
#line 1862 "modules.m"
        {
#line 1862 "modules.m"
          mercury__list__filter_map_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__modules_scalar_common_2[5], parse_tree__modules__V_71_71, parse_tree__modules__Items0_7, &parse_tree__modules__DuplicateErrorLists_69);
        }
#line 9225 "parse_tree.modules.c"
        parse_tree__modules__TypeInfo_19_78 = (MR_Word) &parse_tree__modules_scalar_common_1[5];
#line 1864 "modules.m"
        {
#line 1864 "modules.m"
          mercury__list__condense_2_p_0(parse_tree__modules__TypeInfo_19_78, parse_tree__modules__DuplicateErrorLists_69, &parse_tree__modules__DuplicateErrors_70);
        }
#line 1865 "modules.m"
        {
#line 1865 "modules.m"
          mercury__list__foldl_4_p_0(parse_tree__modules__TypeInfo_19_78, (MR_Word) &parse_tree__modules_scalar_common_2[2], (MR_Word) &parse_tree__modules_scalar_common_1[11], parse_tree__modules__DuplicateErrors_70, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_21_21)), &parse_tree__modules__conv2_STATE_VARIABLE_Specs_19);
        }
#line 1865 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_Specs_19 = ((MR_Word) parse_tree__modules__conv2_STATE_VARIABLE_Specs_19);
#line 1861 "modules.m"
      }
#line 1678 "modules.m"
  }
#line 301 "modules.m"
}

#line 547 "modules.m"
static void MR_CALL 
parse_tree__modules__get_foreign_self_imports_2_p_0_1(
#line 547 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 547 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 547 "modules.m"
{
#line 547 "modules.m"
  {
#line 547 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 547 "modules.m"
    MR_Word parse_tree__modules__conv0_STATE_VARIABLE_LangSet_8;

#line 547 "modules.m"
    {
#line 547 "modules.m"
      parse_tree__modules__accumulate_item_foreign_import_langs_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv0_STATE_VARIABLE_LangSet_8);
    }
#line 547 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_STATE_VARIABLE_LangSet_8));
#line 547 "modules.m"
  }
#line 547 "modules.m"
}

#line 281 "modules.m"
void MR_CALL 
parse_tree__modules__get_foreign_self_imports_2_p_0(
#line 281 "modules.m"
  MR_Word parse_tree__modules__Items_3,
#line 281 "modules.m"
  MR_Word * parse_tree__modules__Langs_4)
#line 281 "modules.m"
{
#line 546 "modules.m"
  {
#line 546 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 546 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_11_11 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 546 "modules.m"
    MR_Word parse_tree__modules__LangSet_5;
#line 546 "modules.m"
    MR_Word parse_tree__modules__V_7_7;
#line 547 "modules.m"
    MR_Box parse_tree__modules__conv1_LangSet_5;

#line 547 "modules.m"
    {
#line 547 "modules.m"
      parse_tree__modules__V_7_7 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_11_11);
    }
#line 547 "modules.m"
    {
#line 547 "modules.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__modules_scalar_common_2[0], (MR_Word) &parse_tree__modules_scalar_common_1[10], parse_tree__modules__Items_3, ((MR_Box) (parse_tree__modules__V_7_7)), &parse_tree__modules__conv1_LangSet_5);
    }
#line 547 "modules.m"
    parse_tree__modules__LangSet_5 = ((MR_Word) parse_tree__modules__conv1_LangSet_5);
#line 548 "modules.m"
    {
#line 548 "modules.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__modules__TypeCtorInfo_11_11, parse_tree__modules__LangSet_5, parse_tree__modules__Langs_4);
#line 548 "modules.m"
      return;
    }
#line 546 "modules.m"
  }
#line 281 "modules.m"
}

#line 279 "modules.m"
void MR_CALL 
parse_tree__modules__get_children_2_p_0(
#line 279 "modules.m"
  MR_Word parse_tree__modules__Items_3,
#line 279 "modules.m"
  MR_Word * parse_tree__modules__IncludeDeps_4)
#line 279 "modules.m"
{
#line 1581 "modules.m"
  {
#line 1581 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1582 "modules.m"
    {
#line 1582 "modules.m"
      parse_tree__modules__get_children_acc_3_p_0(parse_tree__modules__Items_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__modules__IncludeDeps_4);
#line 1582 "modules.m"
      return;
    }
#line 1581 "modules.m"
  }
#line 279 "modules.m"
}

#line 1453 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependency_file_4_p_0_2(
#line 1453 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1453 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1453 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1453 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 1453 "modules.m"
{
#line 1453 "modules.m"
  {
#line 1453 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1453 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__3_3;

#line 1453 "modules.m"
    {
#line 1453 "modules.m"
      parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv1_HeadVar__3_3);
    }
#line 1453 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__3_3));
#line 1453 "modules.m"
  }
#line 1453 "modules.m"
}

#line 1450 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependency_file_4_p_0_1(
#line 1450 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1450 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1450 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2)
#line 1450 "modules.m"
{
#line 1450 "modules.m"
  {
#line 1450 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__8_8;

#line 1450 "modules.m"
    {
#line 1450 "modules.m"
      parse_tree__module_imports__init_dependencies_8_p_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 8))), ((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_HeadVar__8_8);
    }
#line 1450 "modules.m"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__8_8));
#line 1450 "modules.m"
  }
#line 1450 "modules.m"
}

#line 263 "modules.m"
void MR_CALL 
parse_tree__modules__generate_file_dependency_file_4_p_0(
#line 263 "modules.m"
  MR_Word parse_tree__modules__Globals_5,
#line 263 "modules.m"
  MR_String parse_tree__modules__FileName_6)
#line 263 "modules.m"
{
#line 1430 "modules.m"
  {
#line 1430 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1430 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_38_47;
#line 1430 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_43_52;
#line 1430 "modules.m"
    MR_Word parse_tree__modules__ModuleName_8;
#line 1430 "modules.m"
    MR_Word parse_tree__modules__DepsMap_9;
#line 1430 "modules.m"
    MR_Word parse_tree__modules__Items_23;
#line 1430 "modules.m"
    MR_Word parse_tree__modules__Specs0_24;
#line 1430 "modules.m"
    MR_Word parse_tree__modules__Error_25;
#line 1430 "modules.m"
    MR_Word parse_tree__modules__SubModuleList_27;
#line 1430 "modules.m"
    MR_Word parse_tree__modules__Specs_28;
#line 1430 "modules.m"
    MR_Word parse_tree__modules__SubModuleNames_31;
#line 1430 "modules.m"
    MR_String parse_tree__modules__SourceFileName_32;
#line 1430 "modules.m"
    MR_Word parse_tree__modules__ModuleImportsList_33;
#line 1430 "modules.m"
    MR_Word parse_tree__modules__DepsMap0_34;
#line 1430 "modules.m"
    MR_Word parse_tree__modules__V_44_44;
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_26_26;
#line 1447 "modules.m"
    MR_Integer parse_tree__modules___NumWarnings_29;
#line 1447 "modules.m"
    MR_Integer parse_tree__modules___NumErrors_30;
#line 1453 "modules.m"
    MR_Box parse_tree__modules__conv2_DepsMap_9;

#line 1442 "modules.m"
    {
#line 1442 "modules.m"
      parse_tree__read_modules__read_module_from_file_13_p_0(parse_tree__modules__Globals_5, parse_tree__modules__FileName_6, (MR_String) ".m", (MR_String) "Reading file", (MR_Integer) 1, (MR_Integer) 1, &parse_tree__modules__Items_23, &parse_tree__modules__Specs0_24, &parse_tree__modules__Error_25, &parse_tree__modules__ModuleName_8, &parse_tree__modules__V_26_26);
    }
#line 1445 "modules.m"
    {
#line 1445 "modules.m"
      parse_tree__modules__split_into_submodules_5_p_0(parse_tree__modules__ModuleName_8, parse_tree__modules__Items_23, &parse_tree__modules__SubModuleList_27, parse_tree__modules__Specs0_24, &parse_tree__modules__Specs_28);
    }
#line 1447 "modules.m"
    {
#line 1447 "modules.m"
      parse_tree__error_util__write_error_specs_8_p_0(parse_tree__modules__Specs_28, parse_tree__modules__Globals_5, (MR_Integer) 0, &parse_tree__modules___NumWarnings_29, (MR_Integer) 0, &parse_tree__modules___NumErrors_30);
    }
#line 9477 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_38_47 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1448 "modules.m"
    {
#line 1448 "modules.m"
      mercury__assoc_list__keys_2_p_0(parse_tree__modules__TypeCtorInfo_38_47, (MR_Word) &parse_tree__modules_scalar_common_2[1], parse_tree__modules__SubModuleList_27, &parse_tree__modules__SubModuleNames_31);
    }
#line 1449 "modules.m"
    {
#line 1449 "modules.m"
      parse_tree__modules__SourceFileName_32 = mercury__string__f_43_43_2_f_0(parse_tree__modules__FileName_6, (MR_String) ".m");
    }
#line 1450 "modules.m"
    {
#line 1450 "modules.m"
      parse_tree__modules__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_6[0]));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 1) = ((MR_Box) (parse_tree__modules__generate_file_dependency_file_4_p_0_1));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 3) = ((MR_Box) (parse_tree__modules__SourceFileName_32));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 4) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 5) = ((MR_Box) (parse_tree__modules__SubModuleNames_31));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 7) = ((MR_Box) (parse_tree__modules__Error_25));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 8) = ((MR_Box) (parse_tree__modules__Globals_5));
#line 1450 "modules.m"
    }
#line 9513 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_43_52 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
#line 1450 "modules.m"
    {
#line 1450 "modules.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__modules_scalar_common_1[2], parse_tree__modules__TypeCtorInfo_43_52, parse_tree__modules__V_44_44, parse_tree__modules__SubModuleList_27, &parse_tree__modules__ModuleImportsList_33);
    }
#line 1452 "modules.m"
    {
#line 1452 "modules.m"
      mercury__map__init_1_p_0(parse_tree__modules__TypeCtorInfo_38_47, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__modules__DepsMap0_34);
    }
#line 1453 "modules.m"
    {
#line 1453 "modules.m"
      mercury__list__foldl_4_p_0(parse_tree__modules__TypeCtorInfo_43_52, (MR_Word) &parse_tree__modules_scalar_common_1[3], (MR_Word) &parse_tree__modules_scalar_common_1[9], parse_tree__modules__ModuleImportsList_33, ((MR_Box) (parse_tree__modules__DepsMap0_34)), &parse_tree__modules__conv2_DepsMap_9);
    }
#line 1453 "modules.m"
    parse_tree__modules__DepsMap_9 = ((MR_Word) parse_tree__modules__conv2_DepsMap_9);
#line 1432 "modules.m"
    {
#line 1432 "modules.m"
      parse_tree__modules__generate_dependencies_7_p_0(parse_tree__modules__Globals_5, (MR_Integer) 0, (MR_Integer) 0, parse_tree__modules__ModuleName_8, parse_tree__modules__DepsMap_9);
#line 1432 "modules.m"
      return;
    }
#line 1430 "modules.m"
  }
#line 263 "modules.m"
}

#line 255 "modules.m"
void MR_CALL 
parse_tree__modules__generate_module_dependency_file_4_p_0(
#line 255 "modules.m"
  MR_Word parse_tree__modules__Globals_5,
#line 255 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6)
#line 255 "modules.m"
{
#line 1425 "modules.m"
  {
#line 1425 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1425 "modules.m"
    MR_Word parse_tree__modules__DepsMap_8;

#line 1426 "modules.m"
    {
#line 1426 "modules.m"
      mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__modules__DepsMap_8);
    }
#line 1427 "modules.m"
    {
#line 1427 "modules.m"
      parse_tree__modules__generate_dependencies_7_p_0(parse_tree__modules__Globals_5, (MR_Integer) 0, (MR_Integer) 0, parse_tree__modules__ModuleName_6, parse_tree__modules__DepsMap_8);
#line 1427 "modules.m"
      return;
    }
#line 1425 "modules.m"
  }
#line 255 "modules.m"
}

#line 1453 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependencies_4_p_0_2(
#line 1453 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1453 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1453 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1453 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 1453 "modules.m"
{
#line 1453 "modules.m"
  {
#line 1453 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1453 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__3_3;

#line 1453 "modules.m"
    {
#line 1453 "modules.m"
      parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv1_HeadVar__3_3);
    }
#line 1453 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__3_3));
#line 1453 "modules.m"
  }
#line 1453 "modules.m"
}

#line 1450 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependencies_4_p_0_1(
#line 1450 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1450 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1450 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2)
#line 1450 "modules.m"
{
#line 1450 "modules.m"
  {
#line 1450 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__8_8;

#line 1450 "modules.m"
    {
#line 1450 "modules.m"
      parse_tree__module_imports__init_dependencies_8_p_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 8))), ((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_HeadVar__8_8);
    }
#line 1450 "modules.m"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__8_8));
#line 1450 "modules.m"
  }
#line 1450 "modules.m"
}

#line 247 "modules.m"
void MR_CALL 
parse_tree__modules__generate_file_dependencies_4_p_0(
#line 247 "modules.m"
  MR_Word parse_tree__modules__Globals_5,
#line 247 "modules.m"
  MR_String parse_tree__modules__FileName_6)
#line 247 "modules.m"
{
#line 1420 "modules.m"
  {
#line 1420 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1420 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_38_47;
#line 1420 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_43_52;
#line 1420 "modules.m"
    MR_Word parse_tree__modules__ModuleName_8;
#line 1420 "modules.m"
    MR_Word parse_tree__modules__DepsMap_9;
#line 1420 "modules.m"
    MR_Word parse_tree__modules__Items_23;
#line 1420 "modules.m"
    MR_Word parse_tree__modules__Specs0_24;
#line 1420 "modules.m"
    MR_Word parse_tree__modules__Error_25;
#line 1420 "modules.m"
    MR_Word parse_tree__modules__SubModuleList_27;
#line 1420 "modules.m"
    MR_Word parse_tree__modules__Specs_28;
#line 1420 "modules.m"
    MR_Word parse_tree__modules__SubModuleNames_31;
#line 1420 "modules.m"
    MR_String parse_tree__modules__SourceFileName_32;
#line 1420 "modules.m"
    MR_Word parse_tree__modules__ModuleImportsList_33;
#line 1420 "modules.m"
    MR_Word parse_tree__modules__DepsMap0_34;
#line 1420 "modules.m"
    MR_Word parse_tree__modules__V_44_44;
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_26_26;
#line 1447 "modules.m"
    MR_Integer parse_tree__modules___NumWarnings_29;
#line 1447 "modules.m"
    MR_Integer parse_tree__modules___NumErrors_30;
#line 1453 "modules.m"
    MR_Box parse_tree__modules__conv2_DepsMap_9;

#line 1442 "modules.m"
    {
#line 1442 "modules.m"
      parse_tree__read_modules__read_module_from_file_13_p_0(parse_tree__modules__Globals_5, parse_tree__modules__FileName_6, (MR_String) ".m", (MR_String) "Reading file", (MR_Integer) 1, (MR_Integer) 1, &parse_tree__modules__Items_23, &parse_tree__modules__Specs0_24, &parse_tree__modules__Error_25, &parse_tree__modules__ModuleName_8, &parse_tree__modules__V_26_26);
    }
#line 1445 "modules.m"
    {
#line 1445 "modules.m"
      parse_tree__modules__split_into_submodules_5_p_0(parse_tree__modules__ModuleName_8, parse_tree__modules__Items_23, &parse_tree__modules__SubModuleList_27, parse_tree__modules__Specs0_24, &parse_tree__modules__Specs_28);
    }
#line 1447 "modules.m"
    {
#line 1447 "modules.m"
      parse_tree__error_util__write_error_specs_8_p_0(parse_tree__modules__Specs_28, parse_tree__modules__Globals_5, (MR_Integer) 0, &parse_tree__modules___NumWarnings_29, (MR_Integer) 0, &parse_tree__modules___NumErrors_30);
    }
#line 9704 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_38_47 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1448 "modules.m"
    {
#line 1448 "modules.m"
      mercury__assoc_list__keys_2_p_0(parse_tree__modules__TypeCtorInfo_38_47, (MR_Word) &parse_tree__modules_scalar_common_2[1], parse_tree__modules__SubModuleList_27, &parse_tree__modules__SubModuleNames_31);
    }
#line 1449 "modules.m"
    {
#line 1449 "modules.m"
      parse_tree__modules__SourceFileName_32 = mercury__string__f_43_43_2_f_0(parse_tree__modules__FileName_6, (MR_String) ".m");
    }
#line 1450 "modules.m"
    {
#line 1450 "modules.m"
      parse_tree__modules__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_6[0]));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 1) = ((MR_Box) (parse_tree__modules__generate_file_dependencies_4_p_0_1));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 3) = ((MR_Box) (parse_tree__modules__SourceFileName_32));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 4) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 5) = ((MR_Box) (parse_tree__modules__SubModuleNames_31));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 7) = ((MR_Box) (parse_tree__modules__Error_25));
#line 1450 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 8) = ((MR_Box) (parse_tree__modules__Globals_5));
#line 1450 "modules.m"
    }
#line 9740 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_43_52 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
#line 1450 "modules.m"
    {
#line 1450 "modules.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__modules_scalar_common_1[2], parse_tree__modules__TypeCtorInfo_43_52, parse_tree__modules__V_44_44, parse_tree__modules__SubModuleList_27, &parse_tree__modules__ModuleImportsList_33);
    }
#line 1452 "modules.m"
    {
#line 1452 "modules.m"
      mercury__map__init_1_p_0(parse_tree__modules__TypeCtorInfo_38_47, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__modules__DepsMap0_34);
    }
#line 1453 "modules.m"
    {
#line 1453 "modules.m"
      mercury__list__foldl_4_p_0(parse_tree__modules__TypeCtorInfo_43_52, (MR_Word) &parse_tree__modules_scalar_common_1[3], (MR_Word) &parse_tree__modules_scalar_common_1[8], parse_tree__modules__ModuleImportsList_33, ((MR_Box) (parse_tree__modules__DepsMap0_34)), &parse_tree__modules__conv2_DepsMap_9);
    }
#line 1453 "modules.m"
    parse_tree__modules__DepsMap_9 = ((MR_Word) parse_tree__modules__conv2_DepsMap_9);
#line 1422 "modules.m"
    {
#line 1422 "modules.m"
      parse_tree__modules__generate_dependencies_7_p_0(parse_tree__modules__Globals_5, (MR_Integer) 1, (MR_Integer) 1, parse_tree__modules__ModuleName_8, parse_tree__modules__DepsMap_9);
#line 1422 "modules.m"
      return;
    }
#line 1420 "modules.m"
  }
#line 247 "modules.m"
}

#line 239 "modules.m"
void MR_CALL 
parse_tree__modules__generate_module_dependencies_4_p_0(
#line 239 "modules.m"
  MR_Word parse_tree__modules__Globals_5,
#line 239 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6)
#line 239 "modules.m"
{
#line 1415 "modules.m"
  {
#line 1415 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1415 "modules.m"
    MR_Word parse_tree__modules__DepsMap_8;

#line 1416 "modules.m"
    {
#line 1416 "modules.m"
      mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__modules__DepsMap_8);
    }
#line 1417 "modules.m"
    {
#line 1417 "modules.m"
      parse_tree__modules__generate_dependencies_7_p_0(parse_tree__modules__Globals_5, (MR_Integer) 1, (MR_Integer) 1, parse_tree__modules__ModuleName_6, parse_tree__modules__DepsMap_8);
#line 1417 "modules.m"
      return;
    }
#line 1415 "modules.m"
  }
#line 239 "modules.m"
}

#line 218 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_short_interfaces_14_p_0(
#line 218 "modules.m"
  MR_Word parse_tree__modules__Globals_1,
#line 218 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMap_2,
#line 218 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3,
#line 218 "modules.m"
  MR_String parse_tree__modules__Ext_4,
#line 218 "modules.m"
  MR_Word parse_tree__modules__IntStatusItem_5,
#line 218 "modules.m"
  MR_Word parse_tree__modules__ImpStatusItem_6,
#line 218 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_7,
#line 218 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_8,
#line 218 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_9,
#line 218 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_10,
#line 218 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Module_0_11,
#line 218 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Module_12)
#line 218 "modules.m"
{
#line 1181 "modules.m"
  while (MR_TRUE)
#line 1181 "modules.m"
    {
#line 1181 "modules.m"
      /* tailcall optimized into a loop */
#line 1181 "modules.m"
      {
#line 1181 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1181 "modules.m"
        if ((parse_tree__modules__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1181 "modules.m"
          {
#line 1182 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_Module_12 = parse_tree__modules__STATE_VARIABLE_Module_0_11;
#line 1182 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_10 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_9;
#line 1181 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_8 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_7;
#line 1181 "modules.m"
          }
#line 1181 "modules.m"
        else
#line 1185 "modules.m"
          {
#line 1185 "modules.m"
            MR_Word parse_tree__modules__Import_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 0)));
#line 1185 "modules.m"
            MR_Word parse_tree__modules__Imports_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 1)));
#line 1185 "modules.m"
            MR_Word parse_tree__modules__ModIndirectImports0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 6)));
#line 1186 "modules.m"
            MR_String parse_tree__modules__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 0)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 1)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 2)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 3)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 4)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 5)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 7)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 8)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 9)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 10)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 11)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 12)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 13)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 14)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 15)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 16)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 17)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 18)));
#line 1186 "modules.m"
            MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 19)));
#line 1186 "modules.m"
            MR_String parse_tree__modules__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 20)));

#line 1189 "modules.m"
            {
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 2)));
#line 1189 "modules.m"
              MR_String parse_tree__modules__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 0)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 1)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 3)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 4)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 5)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 6)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 7)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 8)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 9)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 10)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 11)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 12)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 13)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 14)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 15)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 16)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 17)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 18)));
#line 1189 "modules.m"
              MR_Word parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 19)));
#line 1189 "modules.m"
              MR_String parse_tree__modules__V_132_132 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 20)));

#line 1189 "modules.m"
              {
#line 1189 "modules.m"
                parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__Import_34, parse_tree__modules__V_241_241);
              }
#line 1189 "modules.m"
            }
#line 1190 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 1190 "modules.m"
              {
#line 1190 "modules.m"
                {
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 3)));
#line 1190 "modules.m"
                  MR_String parse_tree__modules__V_133_133 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 0)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 1)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 2)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 4)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 5)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 6)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 7)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 8)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 9)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 10)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 11)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 12)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 13)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 14)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 15)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 16)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 17)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 18)));
#line 1190 "modules.m"
                  MR_Word parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 19)));
#line 1190 "modules.m"
                  MR_String parse_tree__modules__V_152_152 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 20)));

#line 1190 "modules.m"
                  {
#line 1190 "modules.m"
                    parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_34)), parse_tree__modules__V_67_67);
                  }
#line 1190 "modules.m"
                }
#line 1190 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 1190 "modules.m"
                  {
#line 1191 "modules.m"
                    {
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 4)));
#line 1191 "modules.m"
                      MR_String parse_tree__modules__V_153_153 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 0)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 1)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 2)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 3)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 5)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 6)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 7)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 8)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 9)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 10)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 11)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 12)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 13)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 14)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 15)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 16)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 17)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 18)));
#line 1191 "modules.m"
                      MR_Word parse_tree__modules__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 19)));
#line 1191 "modules.m"
                      MR_String parse_tree__modules__V_172_172 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 20)));

#line 1191 "modules.m"
                      {
#line 1191 "modules.m"
                        parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_34)), parse_tree__modules__V_66_66);
                      }
#line 1191 "modules.m"
                    }
#line 1190 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 1190 "modules.m"
                      {
#line 1192 "modules.m"
                        {
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 5)));
#line 1192 "modules.m"
                          MR_String parse_tree__modules__V_173_173 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 0)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 1)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 2)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 3)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 4)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 6)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 7)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 8)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 9)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 10)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 11)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 12)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 13)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 14)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 15)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 16)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 17)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 18)));
#line 1192 "modules.m"
                          MR_Word parse_tree__modules__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 19)));
#line 1192 "modules.m"
                          MR_String parse_tree__modules__V_192_192 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 20)));

#line 1192 "modules.m"
                          {
#line 1192 "modules.m"
                            parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_34)), parse_tree__modules__V_65_65);
                          }
#line 1192 "modules.m"
                        }
#line 1190 "modules.m"
                        if (!(parse_tree__modules__succeeded))
#line 1193 "modules.m"
                          {
#line 1193 "modules.m"
                            {
#line 1193 "modules.m"
                              parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_34)), parse_tree__modules__ModIndirectImports0_43);
                            }
#line 1193 "modules.m"
                          }
#line 1190 "modules.m"
                      }
#line 1190 "modules.m"
                  }
#line 1190 "modules.m"
              }
#line 1199 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1196 "modules.m"
              {
#line 1196 "modules.m"
                /* direct tailcall eliminated */
#line 1196 "modules.m"
                {
#line 1196 "modules.m"
                  MR_Word parse_tree__modules__HeadVar__3__tmp_copy_3 = parse_tree__modules__Imports_35;

#line 1196 "modules.m"
                  parse_tree__modules__HeadVar__3_3 = parse_tree__modules__HeadVar__3__tmp_copy_3;
#line 1196 "modules.m"
                }
#line 1196 "modules.m"
                continue;
#line 1196 "modules.m"
              }
#line 1199 "modules.m"
            else
#line 1201 "modules.m"
              {
#line 1201 "modules.m"
                MR_Word parse_tree__modules__TypeCtorInfo_240_240;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__ReturnTimestamp_44;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__ShortIntItems0_45;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__ShortIntSpecs_46;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__ShortIntError_47;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__MaybeTimestamp_49;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__IntImports1_50;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__IntUses1_51;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__ImpImports1_52;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__ImpUses1_53;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__ShortIntItems_54;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__Statistics_55;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__ModIndirectImports_56;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 18)));
#line 1201 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_Module_77_77;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__V_78_78;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_Module_79_79;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_Module_80_80;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_Module_81_81;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_84_84;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__V_85_85;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_86_86;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__V_87_87;
#line 1201 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_Module_88_88;
#line 1200 "modules.m"
                MR_String parse_tree__modules__V_193_193 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 0)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 1)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 2)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 3)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 4)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 5)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 6)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 7)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 8)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 9)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 10)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 11)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 12)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 13)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 14)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 15)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 16)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 17)));
#line 1200 "modules.m"
                MR_Word parse_tree__modules__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 19)));
#line 1200 "modules.m"
                MR_String parse_tree__modules__V_212_212 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_11, (MR_Integer) 20)));
#line 1202 "modules.m"
                MR_String parse_tree__modules___ImportFileName_48;
#line 1224 "modules.m"
                MR_String parse_tree__modules__V_213_213;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_214_214;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_215_215;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_216_216;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_217_217;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_218_218;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_220_220;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_221_221;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_222_222;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_223_223;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_224_224;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_225_225;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_226_226;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_227_227;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_228_228;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_229_229;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_230_230;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_231_231;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_232_232;
#line 1224 "modules.m"
                MR_String parse_tree__modules__V_233_233;
#line 1224 "modules.m"
                MR_Word parse_tree__modules__V_219_219;

#line 1200 "modules.m"
                {
#line 1200 "modules.m"
                  parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_72_72, &parse_tree__modules__ReturnTimestamp_44);
                }
#line 1202 "modules.m"
                {
#line 1202 "modules.m"
                  parse_tree__read_modules__maybe_read_module_14_p_0(parse_tree__modules__Globals_1, parse_tree__modules__HaveReadModuleMap_2, parse_tree__modules__Import_34, parse_tree__modules__Ext_4, (MR_String) "Reading short interface for module", (MR_Integer) 0, parse_tree__modules__ReturnTimestamp_44, &parse_tree__modules__ShortIntItems0_45, &parse_tree__modules__ShortIntSpecs_46, &parse_tree__modules__ShortIntError_47, &parse_tree__modules___ImportFileName_48, &parse_tree__modules__MaybeTimestamp_49);
                }
#line 1206 "modules.m"
                {
#line 1206 "modules.m"
                  parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Import_34, parse_tree__modules__Ext_4, (MR_Integer) 0, parse_tree__modules__MaybeTimestamp_49, parse_tree__modules__STATE_VARIABLE_Module_0_11, &parse_tree__modules__STATE_VARIABLE_Module_77_77);
                }
#line 1209 "modules.m"
                {
#line 1209 "modules.m"
                  parse_tree__module_imports__get_dependencies_int_imp_5_p_0(parse_tree__modules__ShortIntItems0_45, &parse_tree__modules__IntImports1_50, &parse_tree__modules__IntUses1_51, &parse_tree__modules__ImpImports1_52, &parse_tree__modules__ImpUses1_53);
                }
#line 1211 "modules.m"
                {
#line 1211 "modules.m"
                  parse_tree__modules__replace_section_decls_4_p_0(parse_tree__modules__IntStatusItem_5, parse_tree__modules__ImpStatusItem_6, parse_tree__modules__ShortIntItems0_45, &parse_tree__modules__ShortIntItems_54);
                }
#line 1214 "modules.m"
                {
#line 1214 "modules.m"
                  parse_tree__modules__V_78_78 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__modules__ShortIntItems_54);
                }
#line 1214 "modules.m"
                {
#line 1214 "modules.m"
                  parse_tree__module_imports__module_and_imports_add_items_3_p_0(parse_tree__modules__V_78_78, parse_tree__modules__STATE_VARIABLE_Module_77_77, &parse_tree__modules__STATE_VARIABLE_Module_79_79);
                }
#line 1215 "modules.m"
                {
#line 1215 "modules.m"
                  parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__ShortIntSpecs_46, parse_tree__modules__STATE_VARIABLE_Module_79_79, &parse_tree__modules__STATE_VARIABLE_Module_80_80);
                }
#line 1216 "modules.m"
                {
#line 1216 "modules.m"
                  parse_tree__module_imports__module_and_imports_add_interface_error_3_p_0(parse_tree__modules__ShortIntError_47, parse_tree__modules__STATE_VARIABLE_Module_80_80, &parse_tree__modules__STATE_VARIABLE_Module_81_81);
                }
#line 1218 "modules.m"
                {
#line 1218 "modules.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_1, (MR_Integer) 55, &parse_tree__modules__Statistics_55);
                }
#line 1219 "modules.m"
                {
#line 1219 "modules.m"
                  libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_55);
                }
#line 1221 "modules.m"
                {
#line 1221 "modules.m"
                  parse_tree__modules__ModIndirectImports_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "modules.m"
                  MR_hl_field(MR_mktag(1), parse_tree__modules__ModIndirectImports_56, 0) = ((MR_Box) (parse_tree__modules__Import_34));
#line 1221 "modules.m"
                  MR_hl_field(MR_mktag(1), parse_tree__modules__ModIndirectImports_56, 1) = ((MR_Box) (parse_tree__modules__ModIndirectImports0_43));
#line 1221 "modules.m"
                }
#line 10365 "parse_tree.modules.c"
                parse_tree__modules__TypeCtorInfo_240_240 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1222 "modules.m"
                {
#line 1222 "modules.m"
                  parse_tree__modules__V_85_85 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_240_240, parse_tree__modules__IntImports1_50, parse_tree__modules__IntUses1_51);
                }
#line 1222 "modules.m"
                {
#line 1222 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_IndirectImports_84_84 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_240_240, parse_tree__modules__STATE_VARIABLE_IndirectImports_0_7, parse_tree__modules__V_85_85);
                }
#line 1223 "modules.m"
                {
#line 1223 "modules.m"
                  parse_tree__modules__V_87_87 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_240_240, parse_tree__modules__ImpImports1_52, parse_tree__modules__ImpUses1_53);
                }
#line 1223 "modules.m"
                {
#line 1223 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_86_86 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_240_240, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_9, parse_tree__modules__V_87_87);
                }
#line 1224 "modules.m"
                parse_tree__modules__V_213_213 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 0)));
#line 1224 "modules.m"
                parse_tree__modules__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 1)));
#line 1224 "modules.m"
                parse_tree__modules__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 2)));
#line 1224 "modules.m"
                parse_tree__modules__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 3)));
#line 1224 "modules.m"
                parse_tree__modules__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 4)));
#line 1224 "modules.m"
                parse_tree__modules__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 5)));
#line 1224 "modules.m"
                parse_tree__modules__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 6)));
#line 1224 "modules.m"
                parse_tree__modules__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 7)));
#line 1224 "modules.m"
                parse_tree__modules__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 8)));
#line 1224 "modules.m"
                parse_tree__modules__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 9)));
#line 1224 "modules.m"
                parse_tree__modules__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 10)));
#line 1224 "modules.m"
                parse_tree__modules__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 11)));
#line 1224 "modules.m"
                parse_tree__modules__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 12)));
#line 1224 "modules.m"
                parse_tree__modules__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 13)));
#line 1224 "modules.m"
                parse_tree__modules__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 14)));
#line 1224 "modules.m"
                parse_tree__modules__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 15)));
#line 1224 "modules.m"
                parse_tree__modules__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 16)));
#line 1224 "modules.m"
                parse_tree__modules__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 17)));
#line 1224 "modules.m"
                parse_tree__modules__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 18)));
#line 1224 "modules.m"
                parse_tree__modules__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 19)));
#line 1224 "modules.m"
                parse_tree__modules__V_233_233 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_81_81, (MR_Integer) 20)));
#line 1224 "modules.m"
                {
#line 1224 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_Module_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 0) = ((MR_Box) (parse_tree__modules__V_213_213));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 1) = ((MR_Box) (parse_tree__modules__V_214_214));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 2) = ((MR_Box) (parse_tree__modules__V_215_215));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 3) = ((MR_Box) (parse_tree__modules__V_216_216));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 4) = ((MR_Box) (parse_tree__modules__V_217_217));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 5) = ((MR_Box) (parse_tree__modules__V_218_218));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 6) = ((MR_Box) (parse_tree__modules__ModIndirectImports_56));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 7) = ((MR_Box) (parse_tree__modules__V_220_220));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 8) = ((MR_Box) (parse_tree__modules__V_221_221));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 9) = ((MR_Box) (parse_tree__modules__V_222_222));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 10) = ((MR_Box) (parse_tree__modules__V_223_223));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 11) = ((MR_Box) (parse_tree__modules__V_224_224));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 12) = ((MR_Box) (parse_tree__modules__V_225_225));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 13) = ((MR_Box) (parse_tree__modules__V_226_226));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 14) = ((MR_Box) (parse_tree__modules__V_227_227));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 15) = ((MR_Box) (parse_tree__modules__V_228_228));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 16) = ((MR_Box) (parse_tree__modules__V_229_229));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 17) = ((MR_Box) (parse_tree__modules__V_230_230));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 18) = ((MR_Box) (parse_tree__modules__V_231_231));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 19) = ((MR_Box) (parse_tree__modules__V_232_232));
#line 1224 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_88_88, 20) = ((MR_Box) (parse_tree__modules__V_233_233));
#line 1224 "modules.m"
                }
#line 1226 "modules.m"
                /* direct tailcall eliminated */
#line 1226 "modules.m"
                {
#line 1226 "modules.m"
                  MR_Word parse_tree__modules__HeadVar__3__tmp_copy_3 = parse_tree__modules__Imports_35;
#line 1226 "modules.m"
                  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_7 = parse_tree__modules__STATE_VARIABLE_IndirectImports_84_84;
#line 1226 "modules.m"
                  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_9 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_86_86;
#line 1226 "modules.m"
                  MR_Word parse_tree__modules__STATE_VARIABLE_Module_0__tmp_copy_11 = parse_tree__modules__STATE_VARIABLE_Module_88_88;

#line 1226 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_Module_0_11 = parse_tree__modules__STATE_VARIABLE_Module_0__tmp_copy_11;
#line 1226 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_9 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_9;
#line 1226 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_IndirectImports_0_7 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_7;
#line 1226 "modules.m"
                  parse_tree__modules__HeadVar__3_3 = parse_tree__modules__HeadVar__3__tmp_copy_3;
#line 1226 "modules.m"
                }
#line 1226 "modules.m"
                continue;
#line 1201 "modules.m"
              }
#line 1185 "modules.m"
          }
#line 1181 "modules.m"
      }
#line 1181 "modules.m"
      break;
#line 1181 "modules.m"
    }
#line 218 "modules.m"
}

#line 199 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_short_interfaces_and_impls_transitively_10_p_0(
#line 199 "modules.m"
  MR_Word parse_tree__modules__Globals_11,
#line 199 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMap_12,
#line 199 "modules.m"
  MR_Word parse_tree__modules__Imports_13,
#line 199 "modules.m"
  MR_String parse_tree__modules__Ext_14,
#line 199 "modules.m"
  MR_Word parse_tree__modules__IntStatusItem_15,
#line 199 "modules.m"
  MR_Word parse_tree__modules__ImpStatusItem_16,
#line 199 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Module_0_22,
#line 199 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Module_23)
#line 199 "modules.m"
{
#line 1153 "modules.m"
  while (MR_TRUE)
#line 1153 "modules.m"
    {
#line 1153 "modules.m"
      /* tailcall optimized into a loop */
#line 1153 "modules.m"
      {
#line 1153 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 1153 "modules.m"
        MR_Word parse_tree__modules__ImpIndirectImports_19;
#line 1153 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_Module_27_27;

#line 1154 "modules.m"
        {
#line 1154 "modules.m"
          parse_tree__modules__process_module_short_interfaces_transitively_12_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMap_12, parse_tree__modules__Imports_13, parse_tree__modules__Ext_14, parse_tree__modules__IntStatusItem_15, parse_tree__modules__ImpStatusItem_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ImpIndirectImports_19, parse_tree__modules__STATE_VARIABLE_Module_0_22, &parse_tree__modules__STATE_VARIABLE_Module_27_27);
        }
#line 1159 "modules.m"
        if ((parse_tree__modules__ImpIndirectImports_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1158 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Module_23 = parse_tree__modules__STATE_VARIABLE_Module_27_27;
#line 1159 "modules.m"
        else
#line 1161 "modules.m"
          {
#line 1161 "modules.m"
            /* direct tailcall eliminated */
#line 1161 "modules.m"
            {
#line 1161 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_13 = parse_tree__modules__ImpIndirectImports_19;
#line 1161 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_Module_0__tmp_copy_22 = parse_tree__modules__STATE_VARIABLE_Module_27_27;

#line 1161 "modules.m"
              parse_tree__modules__STATE_VARIABLE_Module_0_22 = parse_tree__modules__STATE_VARIABLE_Module_0__tmp_copy_22;
#line 1161 "modules.m"
              parse_tree__modules__Imports_13 = parse_tree__modules__Imports__tmp_copy_13;
#line 1161 "modules.m"
            }
#line 1161 "modules.m"
            continue;
#line 1161 "modules.m"
          }
#line 1153 "modules.m"
      }
#line 1153 "modules.m"
      break;
#line 1153 "modules.m"
    }
#line 199 "modules.m"
}

#line 181 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively_12_p_0(
#line 181 "modules.m"
  MR_Word parse_tree__modules__Globals_13,
#line 181 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMap_14,
#line 181 "modules.m"
  MR_Word parse_tree__modules__Imports_15,
#line 181 "modules.m"
  MR_String parse_tree__modules__Ext_16,
#line 181 "modules.m"
  MR_Word parse_tree__modules__IntStatusItem_17,
#line 181 "modules.m"
  MR_Word parse_tree__modules__ImpStatusItem_18,
#line 181 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 181 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 181 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Module_0_27,
#line 181 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Module_28)
#line 181 "modules.m"
{
#line 1168 "modules.m"
  while (MR_TRUE)
#line 1168 "modules.m"
    {
#line 1168 "modules.m"
      /* tailcall optimized into a loop */
#line 1168 "modules.m"
      {
#line 1168 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 1168 "modules.m"
        MR_Word parse_tree__modules__IndirectImports_22;
#line 1168 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1168 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_Module_33_33;

#line 1169 "modules.m"
        {
#line 1169 "modules.m"
          parse_tree__modules__process_module_short_interfaces_14_p_0(parse_tree__modules__Globals_13, parse_tree__modules__HaveReadModuleMap_14, parse_tree__modules__Imports_15, parse_tree__modules__Ext_16, parse_tree__modules__IntStatusItem_17, parse_tree__modules__ImpStatusItem_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IndirectImports_22, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32, parse_tree__modules__STATE_VARIABLE_Module_0_27, &parse_tree__modules__STATE_VARIABLE_Module_33_33);
        }
#line 1174 "modules.m"
        if ((parse_tree__modules__IndirectImports_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1173 "modules.m"
          {
#line 1173 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1173 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_Module_28 = parse_tree__modules__STATE_VARIABLE_Module_33_33;
#line 1173 "modules.m"
          }
#line 1174 "modules.m"
        else
#line 1176 "modules.m"
          {
#line 1176 "modules.m"
            /* direct tailcall eliminated */
#line 1176 "modules.m"
            {
#line 1176 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_15 = parse_tree__modules__IndirectImports_22;
#line 1176 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1176 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_Module_0__tmp_copy_27 = parse_tree__modules__STATE_VARIABLE_Module_33_33;

#line 1176 "modules.m"
              parse_tree__modules__STATE_VARIABLE_Module_0_27 = parse_tree__modules__STATE_VARIABLE_Module_0__tmp_copy_27;
#line 1176 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25;
#line 1176 "modules.m"
              parse_tree__modules__Imports_15 = parse_tree__modules__Imports__tmp_copy_15;
#line 1176 "modules.m"
            }
#line 1176 "modules.m"
            continue;
#line 1176 "modules.m"
          }
#line 1168 "modules.m"
      }
#line 1168 "modules.m"
      break;
#line 1168 "modules.m"
    }
#line 181 "modules.m"
}

#line 162 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_long_interfaces_15_p_0(
#line 162 "modules.m"
  MR_Word parse_tree__modules__Globals_1,
#line 162 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMap_2,
#line 162 "modules.m"
  MR_Word parse_tree__modules__NeedQualifier_3,
#line 162 "modules.m"
  MR_Word parse_tree__modules__HeadVar__4_4,
#line 162 "modules.m"
  MR_String parse_tree__modules__HeadVar__5_5,
#line 162 "modules.m"
  MR_Word parse_tree__modules__IntStatusItem_6,
#line 162 "modules.m"
  MR_Word parse_tree__modules__ImpStatusItem_7,
#line 162 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_8,
#line 162 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_9,
#line 162 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImplIndirectImports_0_10,
#line 162 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImplIndirectImports_11,
#line 162 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Module_0_12,
#line 162 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Module_13)
#line 162 "modules.m"
{
#line 1090 "modules.m"
  while (MR_TRUE)
#line 1090 "modules.m"
    {
#line 1090 "modules.m"
      /* tailcall optimized into a loop */
#line 1090 "modules.m"
      {
#line 1090 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1090 "modules.m"
        if ((parse_tree__modules__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1090 "modules.m"
          {
#line 1091 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_Module_13 = parse_tree__modules__STATE_VARIABLE_Module_0_12;
#line 1091 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImplIndirectImports_11 = parse_tree__modules__STATE_VARIABLE_ImplIndirectImports_0_10;
#line 1091 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_9 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_8;
#line 1090 "modules.m"
          }
#line 1090 "modules.m"
        else
#line 1094 "modules.m"
          {
#line 1094 "modules.m"
            MR_Word parse_tree__modules__Import_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__4_4, (MR_Integer) 0)));
#line 1094 "modules.m"
            MR_Word parse_tree__modules__Imports_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__4_4, (MR_Integer) 1)));
#line 1094 "modules.m"
            MR_Word parse_tree__modules__ModuleName_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 2)));
#line 1094 "modules.m"
            MR_Word parse_tree__modules__ModImplementationImports0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 5)));
#line 1095 "modules.m"
            MR_String parse_tree__modules__V_97_97 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 0)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 1)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 3)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 4)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 6)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 7)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 8)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 9)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 10)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 11)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 12)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 13)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 14)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 15)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 16)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 17)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 18)));
#line 1095 "modules.m"
            MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 19)));
#line 1095 "modules.m"
            MR_String parse_tree__modules__V_116_116 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 20)));

#line 1099 "modules.m"
            {
#line 1099 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__Import_37, parse_tree__modules__ModuleName_46);
            }
#line 1100 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 1100 "modules.m"
              {
#line 1100 "modules.m"
                {
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 3)));
#line 1100 "modules.m"
                  MR_String parse_tree__modules__V_137_137 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 0)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 1)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 2)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 4)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 5)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 6)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 7)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 8)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 9)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 10)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 11)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 12)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 13)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 14)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 15)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 16)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 17)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 18)));
#line 1100 "modules.m"
                  MR_Word parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 19)));
#line 1100 "modules.m"
                  MR_String parse_tree__modules__V_156_156 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 20)));

#line 1100 "modules.m"
                  {
#line 1100 "modules.m"
                    parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_37)), parse_tree__modules__V_71_71);
                  }
#line 1100 "modules.m"
                }
#line 1100 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 1100 "modules.m"
                  {
#line 1101 "modules.m"
                    {
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 4)));
#line 1101 "modules.m"
                      MR_String parse_tree__modules__V_157_157 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 0)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 1)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 2)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 3)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 5)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 6)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 7)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 8)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 9)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 10)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 11)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 12)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 13)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 14)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 15)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 16)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 17)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 18)));
#line 1101 "modules.m"
                      MR_Word parse_tree__modules__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 19)));
#line 1101 "modules.m"
                      MR_String parse_tree__modules__V_176_176 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 20)));

#line 1101 "modules.m"
                      {
#line 1101 "modules.m"
                        parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_37)), parse_tree__modules__V_70_70);
                      }
#line 1101 "modules.m"
                    }
#line 1100 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 1102 "modules.m"
                      {
#line 1102 "modules.m"
                        {
#line 1102 "modules.m"
                          parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_37)), parse_tree__modules__ModImplementationImports0_47);
                        }
#line 1102 "modules.m"
                      }
#line 1100 "modules.m"
                  }
#line 1100 "modules.m"
              }
#line 1108 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1105 "modules.m"
              {
#line 1105 "modules.m"
                /* direct tailcall eliminated */
#line 1105 "modules.m"
                {
#line 1105 "modules.m"
                  MR_Word parse_tree__modules__HeadVar__4__tmp_copy_4 = parse_tree__modules__Imports_38;

#line 1105 "modules.m"
                  parse_tree__modules__HeadVar__4_4 = parse_tree__modules__HeadVar__4__tmp_copy_4;
#line 1105 "modules.m"
                }
#line 1105 "modules.m"
                continue;
#line 1105 "modules.m"
              }
#line 1108 "modules.m"
            else
#line 1110 "modules.m"
              {
#line 1110 "modules.m"
                MR_Word parse_tree__modules__TypeCtorInfo_223_223;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__TypeCtorInfo_224_224;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__ReturnTimestamp_48;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__LongIntItems0_49;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__LongIntSpecs_50;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__LongIntErrors_51;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__MaybeTimestamp_53;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__IndirectImports1_54;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__IndirectUses1_55;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__ImplIndirectImports1_56;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__ImplIndirectUses1_57;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__LongIntItems_58;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__Statistics_59;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__FatalLongIntErrors_60;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__ModImplementationImports_61;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 18)));
#line 1110 "modules.m"
                MR_Word parse_tree__modules__V_80_80;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_Module_81_81;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_Module_82_82;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_Module_83_83;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__V_86_86;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_Module_87_87;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_88_88;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__V_89_89;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ImplIndirectImports_90_90;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__V_91_91;
#line 1110 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_Module_92_92;
#line 1109 "modules.m"
                MR_String parse_tree__modules__V_177_177 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 0)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 1)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 2)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 3)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 4)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 5)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 6)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 7)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 8)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 9)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 10)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 11)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 12)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 13)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 14)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 15)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 16)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 17)));
#line 1109 "modules.m"
                MR_Word parse_tree__modules__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 19)));
#line 1109 "modules.m"
                MR_String parse_tree__modules__V_196_196 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_12, (MR_Integer) 20)));
#line 1111 "modules.m"
                MR_String parse_tree__modules___LongIntFileName_52;
#line 1142 "modules.m"
                MR_String parse_tree__modules__V_197_197;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_198_198;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_199_199;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_200_200;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_201_201;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_203_203;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_204_204;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_205_205;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_206_206;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_207_207;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_208_208;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_209_209;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_210_210;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_211_211;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_212_212;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_213_213;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_214_214;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_215_215;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_216_216;
#line 1142 "modules.m"
                MR_String parse_tree__modules__V_217_217;
#line 1142 "modules.m"
                MR_Word parse_tree__modules__V_202_202;

#line 1109 "modules.m"
                {
#line 1109 "modules.m"
                  parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_76_76, &parse_tree__modules__ReturnTimestamp_48);
                }
#line 1111 "modules.m"
                {
#line 1111 "modules.m"
                  parse_tree__read_modules__maybe_read_module_14_p_0(parse_tree__modules__Globals_1, parse_tree__modules__HaveReadModuleMap_2, parse_tree__modules__Import_37, parse_tree__modules__HeadVar__5_5, (MR_String) "Reading interface for module", (MR_Integer) 0, parse_tree__modules__ReturnTimestamp_48, &parse_tree__modules__LongIntItems0_49, &parse_tree__modules__LongIntSpecs_50, &parse_tree__modules__LongIntErrors_51, &parse_tree__modules___LongIntFileName_52, &parse_tree__modules__MaybeTimestamp_53);
                }
#line 1116 "modules.m"
                {
#line 1116 "modules.m"
                  parse_tree__module_imports__get_dependencies_int_imp_5_p_0(parse_tree__modules__LongIntItems0_49, &parse_tree__modules__IndirectImports1_54, &parse_tree__modules__IndirectUses1_55, &parse_tree__modules__ImplIndirectImports1_56, &parse_tree__modules__ImplIndirectUses1_57);
                }
#line 1119 "modules.m"
                {
#line 1119 "modules.m"
                  parse_tree__modules__replace_section_decls_4_p_0(parse_tree__modules__IntStatusItem_6, parse_tree__modules__ImpStatusItem_7, parse_tree__modules__LongIntItems0_49, &parse_tree__modules__LongIntItems_58);
                }
#line 1122 "modules.m"
                {
#line 1122 "modules.m"
                  parse_tree__modules__V_80_80 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__modules__LongIntItems_58);
                }
#line 1122 "modules.m"
                {
#line 1122 "modules.m"
                  parse_tree__module_imports__module_and_imports_add_items_3_p_0(parse_tree__modules__V_80_80, parse_tree__modules__STATE_VARIABLE_Module_0_12, &parse_tree__modules__STATE_VARIABLE_Module_81_81);
                }
#line 1123 "modules.m"
                {
#line 1123 "modules.m"
                  parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__LongIntSpecs_50, parse_tree__modules__STATE_VARIABLE_Module_81_81, &parse_tree__modules__STATE_VARIABLE_Module_82_82);
                }
#line 1124 "modules.m"
                {
#line 1124 "modules.m"
                  parse_tree__module_imports__module_and_imports_add_interface_error_3_p_0(parse_tree__modules__LongIntErrors_51, parse_tree__modules__STATE_VARIABLE_Module_82_82, &parse_tree__modules__STATE_VARIABLE_Module_83_83);
                }
#line 1126 "modules.m"
                {
#line 1126 "modules.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_1, (MR_Integer) 55, &parse_tree__modules__Statistics_59);
                }
#line 1127 "modules.m"
                {
#line 1127 "modules.m"
                  libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_59);
                }
#line 1129 "modules.m"
                {
#line 1129 "modules.m"
                  parse_tree__modules__V_86_86 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
                }
#line 11139 "parse_tree.modules.c"
                parse_tree__modules__TypeCtorInfo_223_223 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1129 "modules.m"
                {
#line 1129 "modules.m"
                  mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_223_223, parse_tree__modules__LongIntErrors_51, parse_tree__modules__V_86_86, &parse_tree__modules__FatalLongIntErrors_60);
                }
#line 1131 "modules.m"
                {
#line 1131 "modules.m"
                  parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_223_223, parse_tree__modules__FatalLongIntErrors_60);
                }
#line 1135 "modules.m"
                if (parse_tree__modules__succeeded)
#line 1133 "modules.m"
                  {
#line 1132 "modules.m"
                    {
#line 1132 "modules.m"
                      parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Import_37, parse_tree__modules__HeadVar__5_5, parse_tree__modules__NeedQualifier_3, parse_tree__modules__MaybeTimestamp_53, parse_tree__modules__STATE_VARIABLE_Module_83_83, &parse_tree__modules__STATE_VARIABLE_Module_87_87);
                    }
#line 1134 "modules.m"
                    {
#line 1134 "modules.m"
                      parse_tree__modules__ModImplementationImports_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "modules.m"
                      MR_hl_field(MR_mktag(1), parse_tree__modules__ModImplementationImports_61, 0) = ((MR_Box) (parse_tree__modules__Import_37));
#line 1134 "modules.m"
                      MR_hl_field(MR_mktag(1), parse_tree__modules__ModImplementationImports_61, 1) = ((MR_Box) (parse_tree__modules__ModImplementationImports0_47));
#line 1134 "modules.m"
                    }
#line 1133 "modules.m"
                  }
#line 1135 "modules.m"
                else
#line 1136 "modules.m"
                  {
#line 1136 "modules.m"
                    parse_tree__modules__ModImplementationImports_61 = parse_tree__modules__ModImplementationImports0_47;
#line 1136 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_Module_87_87 = parse_tree__modules__STATE_VARIABLE_Module_83_83;
#line 1136 "modules.m"
                  }
#line 11182 "parse_tree.modules.c"
                parse_tree__modules__TypeCtorInfo_224_224 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1139 "modules.m"
                {
#line 1139 "modules.m"
                  parse_tree__modules__V_89_89 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_224_224, parse_tree__modules__IndirectImports1_54, parse_tree__modules__IndirectUses1_55);
                }
#line 1138 "modules.m"
                {
#line 1138 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_IndirectImports_88_88 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_224_224, parse_tree__modules__STATE_VARIABLE_IndirectImports_0_8, parse_tree__modules__V_89_89);
                }
#line 1141 "modules.m"
                {
#line 1141 "modules.m"
                  parse_tree__modules__V_91_91 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_224_224, parse_tree__modules__ImplIndirectImports1_56, parse_tree__modules__ImplIndirectUses1_57);
                }
#line 1141 "modules.m"
                {
#line 1141 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ImplIndirectImports_90_90 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_224_224, parse_tree__modules__STATE_VARIABLE_ImplIndirectImports_0_10, parse_tree__modules__V_91_91);
                }
#line 1142 "modules.m"
                parse_tree__modules__V_197_197 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 0)));
#line 1142 "modules.m"
                parse_tree__modules__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 1)));
#line 1142 "modules.m"
                parse_tree__modules__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 2)));
#line 1142 "modules.m"
                parse_tree__modules__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 3)));
#line 1142 "modules.m"
                parse_tree__modules__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 4)));
#line 1142 "modules.m"
                parse_tree__modules__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 5)));
#line 1142 "modules.m"
                parse_tree__modules__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 6)));
#line 1142 "modules.m"
                parse_tree__modules__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 7)));
#line 1142 "modules.m"
                parse_tree__modules__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 8)));
#line 1142 "modules.m"
                parse_tree__modules__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 9)));
#line 1142 "modules.m"
                parse_tree__modules__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 10)));
#line 1142 "modules.m"
                parse_tree__modules__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 11)));
#line 1142 "modules.m"
                parse_tree__modules__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 12)));
#line 1142 "modules.m"
                parse_tree__modules__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 13)));
#line 1142 "modules.m"
                parse_tree__modules__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 14)));
#line 1142 "modules.m"
                parse_tree__modules__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 15)));
#line 1142 "modules.m"
                parse_tree__modules__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 16)));
#line 1142 "modules.m"
                parse_tree__modules__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 17)));
#line 1142 "modules.m"
                parse_tree__modules__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 18)));
#line 1142 "modules.m"
                parse_tree__modules__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 19)));
#line 1142 "modules.m"
                parse_tree__modules__V_217_217 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_87_87, (MR_Integer) 20)));
#line 1142 "modules.m"
                {
#line 1142 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_Module_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 0) = ((MR_Box) (parse_tree__modules__V_197_197));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 1) = ((MR_Box) (parse_tree__modules__V_198_198));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 2) = ((MR_Box) (parse_tree__modules__V_199_199));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 3) = ((MR_Box) (parse_tree__modules__V_200_200));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 4) = ((MR_Box) (parse_tree__modules__V_201_201));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 5) = ((MR_Box) (parse_tree__modules__ModImplementationImports_61));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 6) = ((MR_Box) (parse_tree__modules__V_203_203));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 7) = ((MR_Box) (parse_tree__modules__V_204_204));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 8) = ((MR_Box) (parse_tree__modules__V_205_205));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 9) = ((MR_Box) (parse_tree__modules__V_206_206));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 10) = ((MR_Box) (parse_tree__modules__V_207_207));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 11) = ((MR_Box) (parse_tree__modules__V_208_208));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 12) = ((MR_Box) (parse_tree__modules__V_209_209));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 13) = ((MR_Box) (parse_tree__modules__V_210_210));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 14) = ((MR_Box) (parse_tree__modules__V_211_211));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 15) = ((MR_Box) (parse_tree__modules__V_212_212));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 16) = ((MR_Box) (parse_tree__modules__V_213_213));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 17) = ((MR_Box) (parse_tree__modules__V_214_214));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 18) = ((MR_Box) (parse_tree__modules__V_215_215));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 19) = ((MR_Box) (parse_tree__modules__V_216_216));
#line 1142 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_92_92, 20) = ((MR_Box) (parse_tree__modules__V_217_217));
#line 1142 "modules.m"
                }
#line 1144 "modules.m"
                /* direct tailcall eliminated */
#line 1144 "modules.m"
                {
#line 1144 "modules.m"
                  MR_Word parse_tree__modules__HeadVar__4__tmp_copy_4 = parse_tree__modules__Imports_38;
#line 1144 "modules.m"
                  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_8 = parse_tree__modules__STATE_VARIABLE_IndirectImports_88_88;
#line 1144 "modules.m"
                  MR_Word parse_tree__modules__STATE_VARIABLE_ImplIndirectImports_0__tmp_copy_10 = parse_tree__modules__STATE_VARIABLE_ImplIndirectImports_90_90;
#line 1144 "modules.m"
                  MR_Word parse_tree__modules__STATE_VARIABLE_Module_0__tmp_copy_12 = parse_tree__modules__STATE_VARIABLE_Module_92_92;

#line 1144 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_Module_0_12 = parse_tree__modules__STATE_VARIABLE_Module_0__tmp_copy_12;
#line 1144 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ImplIndirectImports_0_10 = parse_tree__modules__STATE_VARIABLE_ImplIndirectImports_0__tmp_copy_10;
#line 1144 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_IndirectImports_0_8 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_8;
#line 1144 "modules.m"
                  parse_tree__modules__HeadVar__4_4 = parse_tree__modules__HeadVar__4__tmp_copy_4;
#line 1144 "modules.m"
                }
#line 1144 "modules.m"
                continue;
#line 1110 "modules.m"
              }
#line 1094 "modules.m"
          }
#line 1090 "modules.m"
      }
#line 1090 "modules.m"
      break;
#line 1090 "modules.m"
    }
#line 162 "modules.m"
}

#line 143 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_private_interfaces_13_p_0(
#line 143 "modules.m"
  MR_Word parse_tree__modules__Globals_1,
#line 143 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMap_2,
#line 143 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3,
#line 143 "modules.m"
  MR_Word parse_tree__modules__IntStatusItem_4,
#line 143 "modules.m"
  MR_Word parse_tree__modules__ImpStatusItem_5,
#line 143 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_6,
#line 143 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_7,
#line 143 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_8,
#line 143 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_9,
#line 143 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Module_0_10,
#line 143 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Module_11)
#line 143 "modules.m"
{
#line 1036 "modules.m"
  while (MR_TRUE)
#line 1036 "modules.m"
    {
#line 1036 "modules.m"
      /* tailcall optimized into a loop */
#line 1036 "modules.m"
      {
#line 1036 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1036 "modules.m"
        if ((parse_tree__modules__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1036 "modules.m"
          {
#line 1037 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_Module_11 = parse_tree__modules__STATE_VARIABLE_Module_0_10;
#line 1037 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_DirectUses_9 = parse_tree__modules__STATE_VARIABLE_DirectUses_0_8;
#line 1036 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_DirectImports_7 = parse_tree__modules__STATE_VARIABLE_DirectImports_0_6;
#line 1036 "modules.m"
          }
#line 1036 "modules.m"
        else
#line 1040 "modules.m"
          {
#line 1040 "modules.m"
            MR_Word parse_tree__modules__Ancestor_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 0)));
#line 1040 "modules.m"
            MR_Word parse_tree__modules__Ancestors_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 1)));
#line 1040 "modules.m"
            MR_Word parse_tree__modules__ModuleName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 2)));
#line 1040 "modules.m"
            MR_Word parse_tree__modules__ModAncestors0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 3)));
#line 1041 "modules.m"
            MR_String parse_tree__modules__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 0)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 1)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 4)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 5)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 6)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 7)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 8)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 9)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 10)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 11)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 12)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 13)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 14)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 15)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 16)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 17)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 18)));
#line 1041 "modules.m"
            MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 19)));
#line 1041 "modules.m"
            MR_String parse_tree__modules__V_110_110 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 20)));

#line 1043 "modules.m"
            {
#line 1043 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__Ancestor_32, parse_tree__modules__ModuleName_40);
            }
#line 1045 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1044 "modules.m"
              {
#line 1044 "modules.m"
                {
#line 1044 "modules.m"
                  mercury__require__unexpected_3_p_0((MR_String) "parse_tree.modules", (MR_String) "predicate \140parse_tree.modules.process_module_private_interfaces\'/13", (MR_String) "module is its own ancestor\?");
#line 1044 "modules.m"
                  return;
                }
#line 1044 "modules.m"
              }
#line 1045 "modules.m"
            else
#line 1050 "modules.m"
              {
#line 1045 "modules.m"
                {
#line 1045 "modules.m"
                  parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Ancestor_32)), parse_tree__modules__ModAncestors0_41);
                }
#line 1050 "modules.m"
                if (parse_tree__modules__succeeded)
#line 1047 "modules.m"
                  {
#line 1047 "modules.m"
                    /* direct tailcall eliminated */
#line 1047 "modules.m"
                    {
#line 1047 "modules.m"
                      MR_Word parse_tree__modules__HeadVar__3__tmp_copy_3 = parse_tree__modules__Ancestors_33;

#line 1047 "modules.m"
                      parse_tree__modules__HeadVar__3_3 = parse_tree__modules__HeadVar__3__tmp_copy_3;
#line 1047 "modules.m"
                    }
#line 1047 "modules.m"
                    continue;
#line 1047 "modules.m"
                  }
#line 1050 "modules.m"
                else
#line 1052 "modules.m"
                  {
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__TypeCtorInfo_175_175;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__TypeCtorInfo_176_176;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__ReturnTimestamp_42;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__PrivateIntItems0_43;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__PrivateIntSpecs_44;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__PrivateIntErrors_45;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__MaybeTimestamp_47;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__PrivateIntItems_48;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__Statistics_49;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__FatalPrivateIntErrors_50;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__ModAncestors_51;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__AncDirectImports_52;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__AncDirectUses_53;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 18)));
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__STATE_VARIABLE_Module_76_76;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__V_77_77;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__STATE_VARIABLE_Module_78_78;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__STATE_VARIABLE_Module_79_79;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__STATE_VARIABLE_Module_80_80;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__V_83_83;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_84_84;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_85_85;
#line 1052 "modules.m"
                    MR_Word parse_tree__modules__STATE_VARIABLE_Module_86_86;
#line 1051 "modules.m"
                    MR_String parse_tree__modules__V_131_131 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 0)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 1)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 2)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 3)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 4)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 5)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 6)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 7)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 8)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 9)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 10)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 11)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 12)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 13)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 14)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 15)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 16)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 17)));
#line 1051 "modules.m"
                    MR_Word parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 19)));
#line 1051 "modules.m"
                    MR_String parse_tree__modules__V_150_150 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_0_10, (MR_Integer) 20)));
#line 1053 "modules.m"
                    MR_String parse_tree__modules___AncestorFileName_46;
#line 1081 "modules.m"
                    MR_String parse_tree__modules__V_151_151;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_152_152;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_153_153;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_155_155;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_156_156;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_157_157;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_158_158;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_159_159;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_160_160;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_161_161;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_162_162;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_163_163;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_164_164;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_165_165;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_166_166;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_167_167;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_168_168;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_169_169;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_170_170;
#line 1081 "modules.m"
                    MR_String parse_tree__modules__V_171_171;
#line 1081 "modules.m"
                    MR_Word parse_tree__modules__V_154_154;

#line 1051 "modules.m"
                    {
#line 1051 "modules.m"
                      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_69_69, &parse_tree__modules__ReturnTimestamp_42);
                    }
#line 1053 "modules.m"
                    {
#line 1053 "modules.m"
                      parse_tree__read_modules__maybe_read_module_14_p_0(parse_tree__modules__Globals_1, parse_tree__modules__HaveReadModuleMap_2, parse_tree__modules__Ancestor_32, (MR_String) ".int0", (MR_String) "Reading private interface for module", (MR_Integer) 0, parse_tree__modules__ReturnTimestamp_42, &parse_tree__modules__PrivateIntItems0_43, &parse_tree__modules__PrivateIntSpecs_44, &parse_tree__modules__PrivateIntErrors_45, &parse_tree__modules___AncestorFileName_46, &parse_tree__modules__MaybeTimestamp_47);
                    }
#line 1058 "modules.m"
                    {
#line 1058 "modules.m"
                      parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Ancestor_32, (MR_String) ".int0", (MR_Integer) 1, parse_tree__modules__MaybeTimestamp_47, parse_tree__modules__STATE_VARIABLE_Module_0_10, &parse_tree__modules__STATE_VARIABLE_Module_76_76);
                    }
#line 1061 "modules.m"
                    {
#line 1061 "modules.m"
                      parse_tree__modules__replace_section_decls_4_p_0(parse_tree__modules__IntStatusItem_4, parse_tree__modules__ImpStatusItem_5, parse_tree__modules__PrivateIntItems0_43, &parse_tree__modules__PrivateIntItems_48);
                    }
#line 1064 "modules.m"
                    {
#line 1064 "modules.m"
                      parse_tree__modules__V_77_77 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__modules__PrivateIntItems_48);
                    }
#line 1064 "modules.m"
                    {
#line 1064 "modules.m"
                      parse_tree__module_imports__module_and_imports_add_items_3_p_0(parse_tree__modules__V_77_77, parse_tree__modules__STATE_VARIABLE_Module_76_76, &parse_tree__modules__STATE_VARIABLE_Module_78_78);
                    }
#line 1065 "modules.m"
                    {
#line 1065 "modules.m"
                      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__PrivateIntSpecs_44, parse_tree__modules__STATE_VARIABLE_Module_78_78, &parse_tree__modules__STATE_VARIABLE_Module_79_79);
                    }
#line 1066 "modules.m"
                    {
#line 1066 "modules.m"
                      parse_tree__module_imports__module_and_imports_add_interface_error_3_p_0(parse_tree__modules__PrivateIntErrors_45, parse_tree__modules__STATE_VARIABLE_Module_79_79, &parse_tree__modules__STATE_VARIABLE_Module_80_80);
                    }
#line 1068 "modules.m"
                    {
#line 1068 "modules.m"
                      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_1, (MR_Integer) 55, &parse_tree__modules__Statistics_49);
                    }
#line 1069 "modules.m"
                    {
#line 1069 "modules.m"
                      libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_49);
                    }
#line 1071 "modules.m"
                    {
#line 1071 "modules.m"
                      parse_tree__modules__V_83_83 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
                    }
#line 11669 "parse_tree.modules.c"
                    parse_tree__modules__TypeCtorInfo_175_175 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1071 "modules.m"
                    {
#line 1071 "modules.m"
                      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_175_175, parse_tree__modules__PrivateIntErrors_45, parse_tree__modules__V_83_83, &parse_tree__modules__FatalPrivateIntErrors_50);
                    }
#line 1073 "modules.m"
                    {
#line 1073 "modules.m"
                      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_175_175, parse_tree__modules__FatalPrivateIntErrors_50);
                    }
#line 1075 "modules.m"
                    if (parse_tree__modules__succeeded)
#line 1074 "modules.m"
                      {
#line 1074 "modules.m"
                        parse_tree__modules__ModAncestors_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__ModAncestors_51, 0) = ((MR_Box) (parse_tree__modules__Ancestor_32));
#line 1074 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__ModAncestors_51, 1) = ((MR_Box) (parse_tree__modules__ModAncestors0_41));
#line 1074 "modules.m"
                      }
#line 1075 "modules.m"
                    else
#line 1076 "modules.m"
                      parse_tree__modules__ModAncestors_51 = parse_tree__modules__ModAncestors0_41;
#line 1078 "modules.m"
                    {
#line 1078 "modules.m"
                      parse_tree__module_imports__get_dependencies_3_p_0(parse_tree__modules__PrivateIntItems_48, &parse_tree__modules__AncDirectImports_52, &parse_tree__modules__AncDirectUses_53);
                    }
#line 11702 "parse_tree.modules.c"
                    parse_tree__modules__TypeCtorInfo_176_176 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1079 "modules.m"
                    {
#line 1079 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_DirectImports_84_84 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_176_176, parse_tree__modules__STATE_VARIABLE_DirectImports_0_6, parse_tree__modules__AncDirectImports_52);
                    }
#line 1080 "modules.m"
                    {
#line 1080 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_DirectUses_85_85 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_176_176, parse_tree__modules__STATE_VARIABLE_DirectUses_0_8, parse_tree__modules__AncDirectUses_53);
                    }
#line 1081 "modules.m"
                    parse_tree__modules__V_151_151 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 0)));
#line 1081 "modules.m"
                    parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 1)));
#line 1081 "modules.m"
                    parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 2)));
#line 1081 "modules.m"
                    parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 3)));
#line 1081 "modules.m"
                    parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 4)));
#line 1081 "modules.m"
                    parse_tree__modules__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 5)));
#line 1081 "modules.m"
                    parse_tree__modules__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 6)));
#line 1081 "modules.m"
                    parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 7)));
#line 1081 "modules.m"
                    parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 8)));
#line 1081 "modules.m"
                    parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 9)));
#line 1081 "modules.m"
                    parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 10)));
#line 1081 "modules.m"
                    parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 11)));
#line 1081 "modules.m"
                    parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 12)));
#line 1081 "modules.m"
                    parse_tree__modules__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 13)));
#line 1081 "modules.m"
                    parse_tree__modules__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 14)));
#line 1081 "modules.m"
                    parse_tree__modules__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 15)));
#line 1081 "modules.m"
                    parse_tree__modules__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 16)));
#line 1081 "modules.m"
                    parse_tree__modules__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 17)));
#line 1081 "modules.m"
                    parse_tree__modules__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 18)));
#line 1081 "modules.m"
                    parse_tree__modules__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 19)));
#line 1081 "modules.m"
                    parse_tree__modules__V_171_171 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_80_80, (MR_Integer) 20)));
#line 1081 "modules.m"
                    {
#line 1081 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_Module_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 0) = ((MR_Box) (parse_tree__modules__V_151_151));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 1) = ((MR_Box) (parse_tree__modules__V_152_152));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 2) = ((MR_Box) (parse_tree__modules__V_153_153));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 3) = ((MR_Box) (parse_tree__modules__ModAncestors_51));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 4) = ((MR_Box) (parse_tree__modules__V_155_155));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 5) = ((MR_Box) (parse_tree__modules__V_156_156));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 6) = ((MR_Box) (parse_tree__modules__V_157_157));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 7) = ((MR_Box) (parse_tree__modules__V_158_158));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 8) = ((MR_Box) (parse_tree__modules__V_159_159));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 9) = ((MR_Box) (parse_tree__modules__V_160_160));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 10) = ((MR_Box) (parse_tree__modules__V_161_161));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 11) = ((MR_Box) (parse_tree__modules__V_162_162));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 12) = ((MR_Box) (parse_tree__modules__V_163_163));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 13) = ((MR_Box) (parse_tree__modules__V_164_164));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 14) = ((MR_Box) (parse_tree__modules__V_165_165));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 15) = ((MR_Box) (parse_tree__modules__V_166_166));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 16) = ((MR_Box) (parse_tree__modules__V_167_167));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 17) = ((MR_Box) (parse_tree__modules__V_168_168));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 18) = ((MR_Box) (parse_tree__modules__V_169_169));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 19) = ((MR_Box) (parse_tree__modules__V_170_170));
#line 1081 "modules.m"
                      MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_86_86, 20) = ((MR_Box) (parse_tree__modules__V_171_171));
#line 1081 "modules.m"
                    }
#line 1083 "modules.m"
                    /* direct tailcall eliminated */
#line 1083 "modules.m"
                    {
#line 1083 "modules.m"
                      MR_Word parse_tree__modules__HeadVar__3__tmp_copy_3 = parse_tree__modules__Ancestors_33;
#line 1083 "modules.m"
                      MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0__tmp_copy_6 = parse_tree__modules__STATE_VARIABLE_DirectImports_84_84;
#line 1083 "modules.m"
                      MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0__tmp_copy_8 = parse_tree__modules__STATE_VARIABLE_DirectUses_85_85;
#line 1083 "modules.m"
                      MR_Word parse_tree__modules__STATE_VARIABLE_Module_0__tmp_copy_10 = parse_tree__modules__STATE_VARIABLE_Module_86_86;

#line 1083 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_Module_0_10 = parse_tree__modules__STATE_VARIABLE_Module_0__tmp_copy_10;
#line 1083 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_DirectUses_0_8 = parse_tree__modules__STATE_VARIABLE_DirectUses_0__tmp_copy_8;
#line 1083 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_DirectImports_0_6 = parse_tree__modules__STATE_VARIABLE_DirectImports_0__tmp_copy_6;
#line 1083 "modules.m"
                      parse_tree__modules__HeadVar__3_3 = parse_tree__modules__HeadVar__3__tmp_copy_3;
#line 1083 "modules.m"
                    }
#line 1083 "modules.m"
                    continue;
#line 1052 "modules.m"
                  }
#line 1050 "modules.m"
              }
#line 1040 "modules.m"
          }
#line 1036 "modules.m"
      }
#line 1036 "modules.m"
      break;
#line 1036 "modules.m"
    }
#line 143 "modules.m"
}

#line 129 "modules.m"
void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_8_p_0(
#line 129 "modules.m"
  MR_Word parse_tree__modules__Globals_9,
#line 129 "modules.m"
  MR_String parse_tree__modules__SourceFileName_10,
#line 129 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_11,
#line 129 "modules.m"
  MR_Word parse_tree__modules__ModuleName_12,
#line 129 "modules.m"
  MR_Word parse_tree__modules__Items0_13,
#line 129 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Module_44)
#line 129 "modules.m"
{
#line 785 "modules.m"
  {
#line 785 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 785 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_151_151;
#line 785 "modules.m"
    MR_Word parse_tree__modules__ParentDeps_16;
#line 785 "modules.m"
    MR_Word parse_tree__modules__IntImportDeps0_17;
#line 785 "modules.m"
    MR_Word parse_tree__modules__IntUseDeps0_18;
#line 785 "modules.m"
    MR_Word parse_tree__modules__ImpImportDeps_19;
#line 785 "modules.m"
    MR_Word parse_tree__modules__ImpUseDeps_20;
#line 785 "modules.m"
    MR_Word parse_tree__modules__IntImportDeps_21;
#line 785 "modules.m"
    MR_Word parse_tree__modules__IntUseDeps_22;
#line 785 "modules.m"
    MR_Word parse_tree__modules__HaveReadModuleMap_23;
#line 785 "modules.m"
    MR_Word parse_tree__modules__ParentImportDeps_24;
#line 785 "modules.m"
    MR_Word parse_tree__modules__ParentUseDeps_25;
#line 785 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps0_26;
#line 785 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps1_28;
#line 785 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImportDeps0_30;
#line 785 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps2_32;
#line 785 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps_34;
#line 785 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImportDeps_36;
#line 785 "modules.m"
    MR_Word parse_tree__modules__Items_40;
#line 785 "modules.m"
    MR_Word parse_tree__modules__AccessSpecs_43;
#line 785 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_53_53;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_54_54;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_55_55;
#line 785 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_58_58;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_60_60;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_66_66;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_67_67;
#line 785 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_70_70;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_72_72;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_77_77;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_78_78;
#line 785 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_80_80;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_87_87;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_88_88;
#line 785 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_91_91;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_98_98;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_99_99;
#line 785 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_101_101;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_108_108;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_109_109;
#line 785 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_111_111;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_113_113;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_118_118;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_119_119;
#line 785 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_121_121;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_123_123;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_127_127;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_128_128;
#line 785 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_130_130;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_136_136;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_137_137;
#line 785 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_139_139;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_144_144;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_146_146;
#line 785 "modules.m"
    MR_Word parse_tree__modules__V_147_147;
#line 810 "modules.m"
    MR_Word parse_tree__modules__V_27_27;
#line 815 "modules.m"
    MR_Word parse_tree__modules__V_29_29;
#line 821 "modules.m"
    MR_Word parse_tree__modules__V_31_31;
#line 830 "modules.m"
    MR_Word parse_tree__modules__V_33_33;
#line 836 "modules.m"
    MR_Word parse_tree__modules__V_35_35;
#line 842 "modules.m"
    MR_Word parse_tree__modules__V_37_37;
#line 851 "modules.m"
    MR_Word parse_tree__modules__V_38_38;
#line 857 "modules.m"
    MR_Word parse_tree__modules__V_39_39;
#line 863 "modules.m"
    MR_Word parse_tree__modules__V_41_41;
#line 863 "modules.m"
    MR_Word parse_tree__modules__V_42_42;

#line 787 "modules.m"
    {
#line 787 "modules.m"
      parse_tree__modules__ParentDeps_16 = mdbcomp__sym_name__get_ancestors_1_f_0(parse_tree__modules__ModuleName_12);
    }
#line 788 "modules.m"
    {
#line 788 "modules.m"
      parse_tree__module_imports__get_dependencies_int_imp_5_p_0(parse_tree__modules__Items0_13, &parse_tree__modules__IntImportDeps0_17, &parse_tree__modules__IntUseDeps0_18, &parse_tree__modules__ImpImportDeps_19, &parse_tree__modules__ImpUseDeps_20);
    }
#line 792 "modules.m"
    {
#line 792 "modules.m"
      parse_tree__modules__init_module_and_imports_11_p_0(parse_tree__modules__SourceFileName_10, parse_tree__modules__SourceFileModuleName_11, parse_tree__modules__ModuleName_12, parse_tree__modules__Items0_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__STATE_VARIABLE_Module_53_53);
    }
#line 796 "modules.m"
    {
#line 796 "modules.m"
      parse_tree__module_imports__add_implicit_imports_6_p_0(parse_tree__modules__Items0_13, parse_tree__modules__Globals_9, parse_tree__modules__IntImportDeps0_17, &parse_tree__modules__IntImportDeps_21, parse_tree__modules__IntUseDeps0_18, &parse_tree__modules__IntUseDeps_22);
    }
#line 800 "modules.m"
    {
#line 800 "modules.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__modules_scalar_common_1[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, &parse_tree__modules__HaveReadModuleMap_23);
    }
#line 804 "modules.m"
    parse_tree__modules__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_4[1]);
#line 804 "modules.m"
    {
#line 804 "modules.m"
      parse_tree__modules__V_54_54 = parse_tree__item_util__make_pseudo_decl_1_f_0(parse_tree__modules__V_60_60);
    }
#line 805 "modules.m"
    {
#line 805 "modules.m"
      parse_tree__modules__V_55_55 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_4[2]));
    }
#line 803 "modules.m"
    {
#line 803 "modules.m"
      parse_tree__modules__process_module_private_interfaces_13_p_0(parse_tree__modules__Globals_9, parse_tree__modules__HaveReadModuleMap_23, parse_tree__modules__ParentDeps_16, parse_tree__modules__V_54_54, parse_tree__modules__V_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ParentImportDeps_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ParentUseDeps_25, parse_tree__modules__STATE_VARIABLE_Module_53_53, &parse_tree__modules__STATE_VARIABLE_Module_58_58);
    }
#line 812 "modules.m"
    parse_tree__modules__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_4[4]);
#line 812 "modules.m"
    {
#line 812 "modules.m"
      parse_tree__modules__V_66_66 = parse_tree__item_util__make_pseudo_decl_1_f_0(parse_tree__modules__V_72_72);
    }
#line 813 "modules.m"
    {
#line 813 "modules.m"
      parse_tree__modules__V_67_67 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 810 "modules.m"
    {
#line 810 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_9, parse_tree__modules__HaveReadModuleMap_23, (MR_Integer) 1, parse_tree__modules__ParentImportDeps_24, (MR_String) ".int3", parse_tree__modules__V_66_66, parse_tree__modules__V_67_67, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IntIndirectImportDeps0_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_27_27, parse_tree__modules__STATE_VARIABLE_Module_58_58, &parse_tree__modules__STATE_VARIABLE_Module_70_70);
    }
#line 817 "modules.m"
    {
#line 817 "modules.m"
      parse_tree__modules__V_77_77 = parse_tree__item_util__make_pseudo_decl_1_f_0(parse_tree__modules__V_60_60);
    }
#line 818 "modules.m"
    {
#line 818 "modules.m"
      parse_tree__modules__V_78_78 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 815 "modules.m"
    {
#line 815 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_9, parse_tree__modules__HaveReadModuleMap_23, (MR_Integer) 1, parse_tree__modules__IntImportDeps_21, (MR_String) ".int3", parse_tree__modules__V_77_77, parse_tree__modules__V_78_78, parse_tree__modules__IntIndirectImportDeps0_26, &parse_tree__modules__IntIndirectImportDeps1_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_29_29, parse_tree__modules__STATE_VARIABLE_Module_70_70, &parse_tree__modules__STATE_VARIABLE_Module_80_80);
    }
#line 823 "modules.m"
    {
#line 823 "modules.m"
      parse_tree__modules__V_87_87 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_4[3]));
    }
#line 824 "modules.m"
    {
#line 824 "modules.m"
      parse_tree__modules__V_88_88 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 821 "modules.m"
    {
#line 821 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_9, parse_tree__modules__HaveReadModuleMap_23, (MR_Integer) 1, parse_tree__modules__ImpImportDeps_19, (MR_String) ".int3", parse_tree__modules__V_87_87, parse_tree__modules__V_88_88, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ImpIndirectImportDeps0_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_31_31, parse_tree__modules__STATE_VARIABLE_Module_80_80, &parse_tree__modules__STATE_VARIABLE_Module_91_91);
    }
#line 832 "modules.m"
    {
#line 832 "modules.m"
      parse_tree__modules__V_98_98 = parse_tree__item_util__make_pseudo_decl_1_f_0(parse_tree__modules__V_72_72);
    }
#line 833 "modules.m"
    {
#line 833 "modules.m"
      parse_tree__modules__V_99_99 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 830 "modules.m"
    {
#line 830 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_9, parse_tree__modules__HaveReadModuleMap_23, (MR_Integer) 1, parse_tree__modules__ParentUseDeps_25, (MR_String) ".int3", parse_tree__modules__V_98_98, parse_tree__modules__V_99_99, parse_tree__modules__IntIndirectImportDeps1_28, &parse_tree__modules__IntIndirectImportDeps2_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_33_33, parse_tree__modules__STATE_VARIABLE_Module_91_91, &parse_tree__modules__STATE_VARIABLE_Module_101_101);
    }
#line 838 "modules.m"
    parse_tree__modules__V_113_113 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_4[1]);
#line 838 "modules.m"
    {
#line 838 "modules.m"
      parse_tree__modules__V_108_108 = parse_tree__item_util__make_pseudo_decl_1_f_0(parse_tree__modules__V_113_113);
    }
#line 839 "modules.m"
    {
#line 839 "modules.m"
      parse_tree__modules__V_109_109 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 836 "modules.m"
    {
#line 836 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_9, parse_tree__modules__HaveReadModuleMap_23, (MR_Integer) 0, parse_tree__modules__IntUseDeps_22, (MR_String) ".int3", parse_tree__modules__V_108_108, parse_tree__modules__V_109_109, parse_tree__modules__IntIndirectImportDeps2_32, &parse_tree__modules__IntIndirectImportDeps_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_35_35, parse_tree__modules__STATE_VARIABLE_Module_101_101, &parse_tree__modules__STATE_VARIABLE_Module_111_111);
    }
#line 844 "modules.m"
    parse_tree__modules__V_123_123 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_4[3]);
#line 844 "modules.m"
    {
#line 844 "modules.m"
      parse_tree__modules__V_118_118 = parse_tree__item_util__make_pseudo_decl_1_f_0(parse_tree__modules__V_123_123);
    }
#line 845 "modules.m"
    {
#line 845 "modules.m"
      parse_tree__modules__V_119_119 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 842 "modules.m"
    {
#line 842 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_9, parse_tree__modules__HaveReadModuleMap_23, (MR_Integer) 0, parse_tree__modules__ImpUseDeps_20, (MR_String) ".int3", parse_tree__modules__V_118_118, parse_tree__modules__V_119_119, parse_tree__modules__ImpIndirectImportDeps0_30, &parse_tree__modules__ImpIndirectImportDeps_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_37_37, parse_tree__modules__STATE_VARIABLE_Module_111_111, &parse_tree__modules__STATE_VARIABLE_Module_121_121);
    }
#line 853 "modules.m"
    {
#line 853 "modules.m"
      parse_tree__modules__V_127_127 = parse_tree__item_util__make_pseudo_decl_1_f_0(parse_tree__modules__V_113_113);
    }
#line 854 "modules.m"
    {
#line 854 "modules.m"
      parse_tree__modules__V_128_128 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 851 "modules.m"
    {
#line 851 "modules.m"
      parse_tree__modules__process_module_short_interfaces_transitively_12_p_0(parse_tree__modules__Globals_9, parse_tree__modules__HaveReadModuleMap_23, parse_tree__modules__IntIndirectImportDeps_34, (MR_String) ".int3", parse_tree__modules__V_127_127, parse_tree__modules__V_128_128, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_38_38, parse_tree__modules__STATE_VARIABLE_Module_121_121, &parse_tree__modules__STATE_VARIABLE_Module_130_130);
    }
#line 859 "modules.m"
    {
#line 859 "modules.m"
      parse_tree__modules__V_136_136 = parse_tree__item_util__make_pseudo_decl_1_f_0(parse_tree__modules__V_123_123);
    }
#line 860 "modules.m"
    {
#line 860 "modules.m"
      parse_tree__modules__V_137_137 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 857 "modules.m"
    {
#line 857 "modules.m"
      parse_tree__modules__process_module_short_interfaces_transitively_12_p_0(parse_tree__modules__Globals_9, parse_tree__modules__HaveReadModuleMap_23, parse_tree__modules__ImpIndirectImportDeps_36, (MR_String) ".int3", parse_tree__modules__V_136_136, parse_tree__modules__V_137_137, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_39_39, parse_tree__modules__STATE_VARIABLE_Module_130_130, &parse_tree__modules__STATE_VARIABLE_Module_139_139);
    }
#line 863 "modules.m"
    {
#line 863 "modules.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(parse_tree__modules__STATE_VARIABLE_Module_139_139, &parse_tree__modules__Items_40, &parse_tree__modules__V_41_41, &parse_tree__modules__V_42_42);
    }
#line 12167 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_151_151 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 865 "modules.m"
    {
#line 865 "modules.m"
      parse_tree__modules__V_147_147 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_151_151, parse_tree__modules__ImpImportDeps_19, parse_tree__modules__ImpUseDeps_20);
    }
#line 865 "modules.m"
    {
#line 865 "modules.m"
      parse_tree__modules__V_146_146 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_151_151, parse_tree__modules__IntUseDeps_22, parse_tree__modules__V_147_147);
    }
#line 865 "modules.m"
    {
#line 865 "modules.m"
      parse_tree__modules__V_144_144 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_151_151, parse_tree__modules__IntImportDeps_21, parse_tree__modules__V_146_146);
    }
#line 864 "modules.m"
    {
#line 864 "modules.m"
      parse_tree__modules__check_imports_accessibility_5_p_0(parse_tree__modules__ModuleName_12, parse_tree__modules__V_144_144, parse_tree__modules__Items_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__AccessSpecs_43);
    }
#line 867 "modules.m"
    {
#line 867 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__AccessSpecs_43, parse_tree__modules__STATE_VARIABLE_Module_139_139, parse_tree__modules__STATE_VARIABLE_Module_44);
#line 867 "modules.m"
      return;
    }
#line 785 "modules.m"
  }
#line 129 "modules.m"
}

#line 115 "modules.m"
void MR_CALL 
parse_tree__modules__grab_imported_modules_11_p_0(
#line 115 "modules.m"
  MR_Word parse_tree__modules__Globals_12,
#line 115 "modules.m"
  MR_String parse_tree__modules__SourceFileName_13,
#line 115 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_14,
#line 115 "modules.m"
  MR_Word parse_tree__modules__ModuleName_15,
#line 115 "modules.m"
  MR_Word parse_tree__modules__NestedChildren_16,
#line 115 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMap_17,
#line 115 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamp_18,
#line 115 "modules.m"
  MR_Word parse_tree__modules__Items0_19,
#line 115 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Module_70)
#line 115 "modules.m"
{
#line 625 "modules.m"
  {
#line 625 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 625 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_199_199;
#line 625 "modules.m"
    MR_Word parse_tree__modules__AncestorModules_22;
#line 625 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules0_23;
#line 625 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules0_24;
#line 625 "modules.m"
    MR_Word parse_tree__modules__ImpImportedModules0_25;
#line 625 "modules.m"
    MR_Word parse_tree__modules__ImpUsedModules0_26;
#line 625 "modules.m"
    MR_Word parse_tree__modules__ImportedModules0_27;
#line 625 "modules.m"
    MR_Word parse_tree__modules__UsedModules0_28;
#line 625 "modules.m"
    MR_String parse_tree__modules__FileName_30;
#line 625 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules1_31;
#line 625 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules1_32;
#line 625 "modules.m"
    MR_Word parse_tree__modules__ImpImportedModules_33;
#line 625 "modules.m"
    MR_Word parse_tree__modules__ImpUsedModules_34;
#line 625 "modules.m"
    MR_Word parse_tree__modules__InterfaceItems_35;
#line 625 "modules.m"
    MR_Word parse_tree__modules__ImplItems_36;
#line 625 "modules.m"
    MR_Word parse_tree__modules__PublicChildren_37;
#line 625 "modules.m"
    MR_Word parse_tree__modules__FactDeps_38;
#line 625 "modules.m"
    MR_Word parse_tree__modules__ForeignIncludeFiles_39;
#line 625 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestamps_41;
#line 625 "modules.m"
    MR_Word parse_tree__modules__Children_42;
#line 625 "modules.m"
    MR_Word parse_tree__modules__Items1_43;
#line 625 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules2_48;
#line 625 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules2_49;
#line 625 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules_50;
#line 625 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules_51;
#line 625 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImports1_54;
#line 625 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports1_55;
#line 625 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImports1_58;
#line 625 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports1_59;
#line 625 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImports_60;
#line 625 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports2_61;
#line 625 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImports_62;
#line 625 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports2_63;
#line 625 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports_64;
#line 625 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports_65;
#line 625 "modules.m"
    MR_Word parse_tree__modules__Items_66;
#line 625 "modules.m"
    MR_Word parse_tree__modules__AccessSpecs_69;
#line 625 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_77_77;
#line 625 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_78_78;
#line 625 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_84_84;
#line 625 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_95_95;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_97_97;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_98_98;
#line 625 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_99_99;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_101_101;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_107_107;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_108_108;
#line 625 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_109_109;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_116_116;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_117_117;
#line 625 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_118_118;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_125_125;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_126_126;
#line 625 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_127_127;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_129_129;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_134_134;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_135_135;
#line 625 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_136_136;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_138_138;
#line 625 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_142_142;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_144_144;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_145_145;
#line 625 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_146_146;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_152_152;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_153_153;
#line 625 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_154_154;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_160_160;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_161_161;
#line 625 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_162_162;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_167_167;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_168_168;
#line 625 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_169_169;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_173_173;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_175_175;
#line 625 "modules.m"
    MR_Word parse_tree__modules__V_176_176;
#line 772 "modules.m"
    MR_Word parse_tree__modules__V_67_67;
#line 772 "modules.m"
    MR_Word parse_tree__modules__V_68_68;

#line 627 "modules.m"
    {
#line 627 "modules.m"
      parse_tree__modules__AncestorModules_22 = mdbcomp__sym_name__get_ancestors_1_f_0(parse_tree__modules__ModuleName_15);
    }
#line 628 "modules.m"
    {
#line 628 "modules.m"
      parse_tree__module_imports__get_dependencies_int_imp_5_p_0(parse_tree__modules__Items0_19, &parse_tree__modules__IntImportedModules0_23, &parse_tree__modules__IntUsedModules0_24, &parse_tree__modules__ImpImportedModules0_25, &parse_tree__modules__ImpUsedModules0_26);
    }
#line 12393 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_199_199 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 631 "modules.m"
    {
#line 631 "modules.m"
      parse_tree__modules__ImportedModules0_27 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_199_199, parse_tree__modules__IntImportedModules0_23, parse_tree__modules__ImpImportedModules0_25);
    }
#line 632 "modules.m"
    {
#line 632 "modules.m"
      parse_tree__modules__UsedModules0_28 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_199_199, parse_tree__modules__IntUsedModules0_24, parse_tree__modules__ImpUsedModules0_26);
    }
#line 637 "modules.m"
    {
#line 637 "modules.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__modules__Globals_12, parse_tree__modules__ModuleName_15, (MR_String) ".m", (MR_Integer) 1, &parse_tree__modules__FileName_30);
    }
#line 639 "modules.m"
    {
#line 639 "modules.m"
      parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0(parse_tree__modules__ModuleName_15, parse_tree__modules__FileName_30, parse_tree__modules__AncestorModules_22, parse_tree__modules__ImportedModules0_27, parse_tree__modules__UsedModules0_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__STATE_VARIABLE_Specs_77_77);
    }
#line 642 "modules.m"
    {
#line 642 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_12_p_0(parse_tree__modules__FileName_30, parse_tree__modules__IntImportedModules0_23, &parse_tree__modules__IntImportedModules1_31, parse_tree__modules__IntUsedModules0_24, &parse_tree__modules__IntUsedModules1_32, parse_tree__modules__ImpImportedModules0_25, &parse_tree__modules__ImpImportedModules_33, parse_tree__modules__ImpUsedModules0_26, &parse_tree__modules__ImpUsedModules_34, parse_tree__modules__STATE_VARIABLE_Specs_77_77, &parse_tree__modules__STATE_VARIABLE_Specs_78_78);
    }
#line 648 "modules.m"
    {
#line 648 "modules.m"
      parse_tree__modules__get_interface_and_implementation_5_p_0(parse_tree__modules__ModuleName_15, (MR_Integer) 0, parse_tree__modules__Items0_19, &parse_tree__modules__InterfaceItems_35, &parse_tree__modules__ImplItems_36);
    }
#line 650 "modules.m"
    {
#line 650 "modules.m"
      parse_tree__modules__get_children_2_p_0(parse_tree__modules__InterfaceItems_35, &parse_tree__modules__PublicChildren_37);
    }
#line 651 "modules.m"
    {
#line 651 "modules.m"
      parse_tree__module_imports__get_fact_table_dependencies_2_p_0(parse_tree__modules__Items0_19, &parse_tree__modules__FactDeps_38);
    }
#line 652 "modules.m"
    {
#line 652 "modules.m"
      parse_tree__module_imports__get_foreign_include_files_2_p_0(parse_tree__modules__Items0_19, &parse_tree__modules__ForeignIncludeFiles_39);
    }
#line 657 "modules.m"
    if ((parse_tree__modules__MaybeTimestamp_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 659 "modules.m"
      parse_tree__modules__MaybeTimestamps_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "modules.m"
    else
#line 654 "modules.m"
      {
#line 654 "modules.m"
        MR_Word parse_tree__modules__Timestamp_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__MaybeTimestamp_18, (MR_Integer) 0)));
#line 654 "modules.m"
        MR_Word parse_tree__modules__V_80_80;
#line 654 "modules.m"
        MR_Word parse_tree__modules__V_81_81;

#line 656 "modules.m"
        {
#line 656 "modules.m"
          parse_tree__modules__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 656 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_81_81, 0) = ((MR_Box) ((MR_String) ".m"));
#line 656 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_81_81, 1) = ((MR_Box) (parse_tree__modules__Timestamp_40));
#line 656 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_81_81, 2) = ((MR_Box) ((MR_Integer) 1));
#line 656 "modules.m"
        }
#line 655 "modules.m"
        {
#line 655 "modules.m"
          parse_tree__modules__V_80_80 = mercury__map__singleton_2_f_0(parse_tree__modules__TypeCtorInfo_199_199, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, ((MR_Box) (parse_tree__modules__ModuleName_15)), ((MR_Box) (parse_tree__modules__V_81_81)));
        }
#line 655 "modules.m"
        {
#line 655 "modules.m"
          parse_tree__modules__MaybeTimestamps_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 655 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__MaybeTimestamps_41, 0) = ((MR_Box) (parse_tree__modules__V_80_80));
#line 655 "modules.m"
        }
#line 654 "modules.m"
      }
#line 661 "modules.m"
    {
#line 661 "modules.m"
      parse_tree__modules__init_module_and_imports_11_p_0(parse_tree__modules__SourceFileName_13, parse_tree__modules__SourceFileModuleName_14, parse_tree__modules__ModuleName_15, parse_tree__modules__Items0_19, parse_tree__modules__STATE_VARIABLE_Specs_78_78, parse_tree__modules__PublicChildren_37, parse_tree__modules__NestedChildren_16, parse_tree__modules__FactDeps_38, parse_tree__modules__ForeignIncludeFiles_39, parse_tree__modules__MaybeTimestamps_41, &parse_tree__modules__STATE_VARIABLE_Module_84_84);
    }
#line 671 "modules.m"
    {
#line 671 "modules.m"
      parse_tree__modules__get_children_2_p_0(parse_tree__modules__Items0_19, &parse_tree__modules__Children_42);
    }
#line 675 "modules.m"
    if ((parse_tree__modules__Children_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 673 "modules.m"
      {
#line 674 "modules.m"
        parse_tree__modules__Items1_43 = parse_tree__modules__Items0_19;
#line 674 "modules.m"
        parse_tree__modules__STATE_VARIABLE_Module_95_95 = parse_tree__modules__STATE_VARIABLE_Module_84_84;
#line 673 "modules.m"
      }
#line 675 "modules.m"
    else
#line 676 "modules.m"
      {
#line 676 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_201_201;
#line 676 "modules.m"
        MR_Word parse_tree__modules__Clauses_46;
#line 676 "modules.m"
        MR_Word parse_tree__modules__ImplDecls_47;
#line 676 "modules.m"
        MR_Word parse_tree__modules__V_85_85;
#line 676 "modules.m"
        MR_Word parse_tree__modules__V_86_86;
#line 676 "modules.m"
        MR_Word parse_tree__modules__V_88_88;
#line 676 "modules.m"
        MR_Word parse_tree__modules__V_89_89;
#line 676 "modules.m"
        MR_Word parse_tree__modules__V_90_90;
#line 676 "modules.m"
        MR_Word parse_tree__modules__V_92_92;
#line 676 "modules.m"
        MR_Word parse_tree__modules__V_93_93;
#line 676 "modules.m"
        MR_Word parse_tree__modules__V_96_96;
#line 683 "modules.m"
        MR_String parse_tree__modules__V_178_178;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_179_179;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_180_180;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_181_181;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_182_182;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_183_183;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_184_184;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_185_185;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_186_186;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_187_187;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_188_188;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_189_189;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_190_190;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_191_191;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_192_192;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_194_194;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_195_195;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_196_196;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_197_197;
#line 683 "modules.m"
        MR_String parse_tree__modules__V_198_198;
#line 683 "modules.m"
        MR_Word parse_tree__modules__V_193_193;

#line 677 "modules.m"
        {
#line 677 "modules.m"
          parse_tree__modules__split_clauses_and_decls_3_p_0(parse_tree__modules__ImplItems_36, &parse_tree__modules__Clauses_46, &parse_tree__modules__ImplDecls_47);
        }
#line 12576 "parse_tree.modules.c"
        parse_tree__modules__TypeCtorInfo_201_201 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 679 "modules.m"
        {
#line 679 "modules.m"
          parse_tree__modules__V_86_86 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 679 "modules.m"
        {
#line 679 "modules.m"
          parse_tree__modules__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_85_85, 0) = ((MR_Box) (parse_tree__modules__V_86_86));
#line 679 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_85_85, 1) = ((MR_Box) (parse_tree__modules__InterfaceItems_35));
#line 679 "modules.m"
        }
#line 680 "modules.m"
        {
#line 680 "modules.m"
          parse_tree__modules__V_90_90 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
        }
#line 681 "modules.m"
        {
#line 681 "modules.m"
          parse_tree__modules__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_89_89, 0) = ((MR_Box) (parse_tree__modules__V_90_90));
#line 681 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_89_89, 1) = ((MR_Box) (parse_tree__modules__ImplDecls_47));
#line 681 "modules.m"
        }
#line 682 "modules.m"
        {
#line 682 "modules.m"
          parse_tree__modules__V_93_93 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
        }
#line 682 "modules.m"
        {
#line 682 "modules.m"
          parse_tree__modules__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_92_92, 0) = ((MR_Box) (parse_tree__modules__V_93_93));
#line 682 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_92_92, 1) = ((MR_Box) (parse_tree__modules__Clauses_46));
#line 682 "modules.m"
        }
#line 681 "modules.m"
        {
#line 681 "modules.m"
          parse_tree__modules__V_88_88 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_201_201, parse_tree__modules__V_89_89, parse_tree__modules__V_92_92);
        }
#line 679 "modules.m"
        {
#line 679 "modules.m"
          parse_tree__modules__Items1_43 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_201_201, parse_tree__modules__V_85_85, parse_tree__modules__V_88_88);
        }
#line 683 "modules.m"
        {
#line 683 "modules.m"
          parse_tree__modules__V_96_96 = mercury__cord__from_list_1_f_0(parse_tree__modules__TypeCtorInfo_201_201, parse_tree__modules__Items1_43);
        }
#line 683 "modules.m"
        parse_tree__modules__V_178_178 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 0)));
#line 683 "modules.m"
        parse_tree__modules__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 1)));
#line 683 "modules.m"
        parse_tree__modules__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 2)));
#line 683 "modules.m"
        parse_tree__modules__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 3)));
#line 683 "modules.m"
        parse_tree__modules__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 4)));
#line 683 "modules.m"
        parse_tree__modules__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 5)));
#line 683 "modules.m"
        parse_tree__modules__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 6)));
#line 683 "modules.m"
        parse_tree__modules__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 7)));
#line 683 "modules.m"
        parse_tree__modules__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 8)));
#line 683 "modules.m"
        parse_tree__modules__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 9)));
#line 683 "modules.m"
        parse_tree__modules__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 10)));
#line 683 "modules.m"
        parse_tree__modules__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 11)));
#line 683 "modules.m"
        parse_tree__modules__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 12)));
#line 683 "modules.m"
        parse_tree__modules__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 13)));
#line 683 "modules.m"
        parse_tree__modules__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 14)));
#line 683 "modules.m"
        parse_tree__modules__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 15)));
#line 683 "modules.m"
        parse_tree__modules__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 16)));
#line 683 "modules.m"
        parse_tree__modules__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 17)));
#line 683 "modules.m"
        parse_tree__modules__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 18)));
#line 683 "modules.m"
        parse_tree__modules__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 19)));
#line 683 "modules.m"
        parse_tree__modules__V_198_198 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_84_84, (MR_Integer) 20)));
#line 683 "modules.m"
        {
#line 683 "modules.m"
          parse_tree__modules__STATE_VARIABLE_Module_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 0) = ((MR_Box) (parse_tree__modules__V_178_178));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 1) = ((MR_Box) (parse_tree__modules__V_179_179));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 2) = ((MR_Box) (parse_tree__modules__V_180_180));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 3) = ((MR_Box) (parse_tree__modules__V_181_181));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 4) = ((MR_Box) (parse_tree__modules__V_182_182));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 5) = ((MR_Box) (parse_tree__modules__V_183_183));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 6) = ((MR_Box) (parse_tree__modules__V_184_184));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 7) = ((MR_Box) (parse_tree__modules__V_185_185));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 8) = ((MR_Box) (parse_tree__modules__V_186_186));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 9) = ((MR_Box) (parse_tree__modules__V_187_187));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 10) = ((MR_Box) (parse_tree__modules__V_188_188));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 11) = ((MR_Box) (parse_tree__modules__V_189_189));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 12) = ((MR_Box) (parse_tree__modules__V_190_190));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 13) = ((MR_Box) (parse_tree__modules__V_191_191));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 14) = ((MR_Box) (parse_tree__modules__V_192_192));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 15) = ((MR_Box) (parse_tree__modules__V_96_96));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 16) = ((MR_Box) (parse_tree__modules__V_194_194));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 17) = ((MR_Box) (parse_tree__modules__V_195_195));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 18) = ((MR_Box) (parse_tree__modules__V_196_196));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 19) = ((MR_Box) (parse_tree__modules__V_197_197));
#line 683 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_Module_95_95, 20) = ((MR_Box) (parse_tree__modules__V_198_198));
#line 683 "modules.m"
        }
#line 676 "modules.m"
      }
#line 687 "modules.m"
    {
#line 687 "modules.m"
      parse_tree__module_imports__add_implicit_imports_6_p_0(parse_tree__modules__Items1_43, parse_tree__modules__Globals_12, parse_tree__modules__IntImportedModules1_31, &parse_tree__modules__IntImportedModules2_48, parse_tree__modules__IntUsedModules1_32, &parse_tree__modules__IntUsedModules2_49);
    }
#line 698 "modules.m"
    parse_tree__modules__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_4[1]);
#line 698 "modules.m"
    {
#line 698 "modules.m"
      parse_tree__modules__V_97_97 = parse_tree__item_util__make_pseudo_decl_1_f_0(parse_tree__modules__V_101_101);
    }
#line 699 "modules.m"
    {
#line 699 "modules.m"
      parse_tree__modules__V_98_98 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_4[2]));
    }
#line 696 "modules.m"
    {
#line 696 "modules.m"
      parse_tree__modules__process_module_private_interfaces_13_p_0(parse_tree__modules__Globals_12, parse_tree__modules__HaveReadModuleMap_17, parse_tree__modules__AncestorModules_22, parse_tree__modules__V_97_97, parse_tree__modules__V_98_98, parse_tree__modules__IntImportedModules2_48, &parse_tree__modules__IntImportedModules_50, parse_tree__modules__IntUsedModules2_49, &parse_tree__modules__IntUsedModules_51, parse_tree__modules__STATE_VARIABLE_Module_95_95, &parse_tree__modules__STATE_VARIABLE_Module_99_99);
    }
#line 710 "modules.m"
    {
#line 710 "modules.m"
      parse_tree__modules__V_107_107 = parse_tree__item_util__make_pseudo_decl_1_f_0(parse_tree__modules__V_101_101);
    }
#line 711 "modules.m"
    {
#line 711 "modules.m"
      parse_tree__modules__V_108_108 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 708 "modules.m"
    {
#line 708 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_12, parse_tree__modules__HaveReadModuleMap_17, (MR_Integer) 1, parse_tree__modules__IntImportedModules_50, (MR_String) ".int", parse_tree__modules__V_107_107, parse_tree__modules__V_108_108, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IntIndirectImports1_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IntImpIndirectImports1_55, parse_tree__modules__STATE_VARIABLE_Module_99_99, &parse_tree__modules__STATE_VARIABLE_Module_109_109);
    }
#line 720 "modules.m"
    {
#line 720 "modules.m"
      parse_tree__modules__V_116_116 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_4[3]));
    }
#line 721 "modules.m"
    {
#line 721 "modules.m"
      parse_tree__modules__V_117_117 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 718 "modules.m"
    {
#line 718 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_12, parse_tree__modules__HaveReadModuleMap_17, (MR_Integer) 1, parse_tree__modules__ImpImportedModules_33, (MR_String) ".int", parse_tree__modules__V_116_116, parse_tree__modules__V_117_117, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ImpIndirectImports1_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ImpImpIndirectImports1_59, parse_tree__modules__STATE_VARIABLE_Module_109_109, &parse_tree__modules__STATE_VARIABLE_Module_118_118);
    }
#line 729 "modules.m"
    parse_tree__modules__V_129_129 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_4[1]);
#line 729 "modules.m"
    {
#line 729 "modules.m"
      parse_tree__modules__V_125_125 = parse_tree__item_util__make_pseudo_decl_1_f_0(parse_tree__modules__V_129_129);
    }
#line 730 "modules.m"
    {
#line 730 "modules.m"
      parse_tree__modules__V_126_126 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 727 "modules.m"
    {
#line 727 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_12, parse_tree__modules__HaveReadModuleMap_17, (MR_Integer) 0, parse_tree__modules__IntUsedModules_51, (MR_String) ".int", parse_tree__modules__V_125_125, parse_tree__modules__V_126_126, parse_tree__modules__IntIndirectImports1_54, &parse_tree__modules__IntIndirectImports_60, parse_tree__modules__IntImpIndirectImports1_55, &parse_tree__modules__IntImpIndirectImports2_61, parse_tree__modules__STATE_VARIABLE_Module_118_118, &parse_tree__modules__STATE_VARIABLE_Module_127_127);
    }
#line 736 "modules.m"
    parse_tree__modules__V_138_138 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_4[3]);
#line 736 "modules.m"
    {
#line 736 "modules.m"
      parse_tree__modules__V_134_134 = parse_tree__item_util__make_pseudo_decl_1_f_0(parse_tree__modules__V_138_138);
    }
#line 737 "modules.m"
    {
#line 737 "modules.m"
      parse_tree__modules__V_135_135 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 734 "modules.m"
    {
#line 734 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_12, parse_tree__modules__HaveReadModuleMap_17, (MR_Integer) 0, parse_tree__modules__ImpUsedModules_34, (MR_String) ".int", parse_tree__modules__V_134_134, parse_tree__modules__V_135_135, parse_tree__modules__ImpIndirectImports1_58, &parse_tree__modules__ImpIndirectImports_62, parse_tree__modules__ImpImpIndirectImports1_59, &parse_tree__modules__ImpImpIndirectImports2_63, parse_tree__modules__STATE_VARIABLE_Module_127_127, &parse_tree__modules__STATE_VARIABLE_Module_136_136);
    }
#line 745 "modules.m"
    {
#line 745 "modules.m"
      parse_tree__item_util__append_pseudo_decl_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), parse_tree__modules__STATE_VARIABLE_Module_136_136, &parse_tree__modules__STATE_VARIABLE_Module_142_142);
    }
#line 748 "modules.m"
    {
#line 748 "modules.m"
      parse_tree__modules__V_144_144 = parse_tree__item_util__make_pseudo_decl_1_f_0(parse_tree__modules__V_129_129);
    }
#line 749 "modules.m"
    {
#line 749 "modules.m"
      parse_tree__modules__V_145_145 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 746 "modules.m"
    {
#line 746 "modules.m"
      parse_tree__modules__process_module_short_interfaces_transitively_12_p_0(parse_tree__modules__Globals_12, parse_tree__modules__HaveReadModuleMap_17, parse_tree__modules__IntIndirectImports_60, (MR_String) ".int2", parse_tree__modules__V_144_144, parse_tree__modules__V_145_145, parse_tree__modules__IntImpIndirectImports2_61, &parse_tree__modules__IntImpIndirectImports_64, parse_tree__modules__STATE_VARIABLE_Module_142_142, &parse_tree__modules__STATE_VARIABLE_Module_146_146);
    }
#line 753 "modules.m"
    {
#line 753 "modules.m"
      parse_tree__modules__V_152_152 = parse_tree__item_util__make_pseudo_decl_1_f_0(parse_tree__modules__V_138_138);
    }
#line 754 "modules.m"
    {
#line 754 "modules.m"
      parse_tree__modules__V_153_153 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 751 "modules.m"
    {
#line 751 "modules.m"
      parse_tree__modules__process_module_short_interfaces_transitively_12_p_0(parse_tree__modules__Globals_12, parse_tree__modules__HaveReadModuleMap_17, parse_tree__modules__ImpIndirectImports_62, (MR_String) ".int2", parse_tree__modules__V_152_152, parse_tree__modules__V_153_153, parse_tree__modules__ImpImpIndirectImports2_63, &parse_tree__modules__ImpImpIndirectImports_65, parse_tree__modules__STATE_VARIABLE_Module_146_146, &parse_tree__modules__STATE_VARIABLE_Module_154_154);
    }
#line 763 "modules.m"
    {
#line 763 "modules.m"
      parse_tree__modules__V_160_160 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 764 "modules.m"
    {
#line 764 "modules.m"
      parse_tree__modules__V_161_161 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 761 "modules.m"
    {
#line 761 "modules.m"
      parse_tree__modules__process_module_short_interfaces_and_impls_transitively_10_p_0(parse_tree__modules__Globals_12, parse_tree__modules__HaveReadModuleMap_17, parse_tree__modules__IntImpIndirectImports_64, (MR_String) ".int2", parse_tree__modules__V_160_160, parse_tree__modules__V_161_161, parse_tree__modules__STATE_VARIABLE_Module_154_154, &parse_tree__modules__STATE_VARIABLE_Module_162_162);
    }
#line 768 "modules.m"
    {
#line 768 "modules.m"
      parse_tree__modules__V_167_167 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 769 "modules.m"
    {
#line 769 "modules.m"
      parse_tree__modules__V_168_168 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 766 "modules.m"
    {
#line 766 "modules.m"
      parse_tree__modules__process_module_short_interfaces_and_impls_transitively_10_p_0(parse_tree__modules__Globals_12, parse_tree__modules__HaveReadModuleMap_17, parse_tree__modules__ImpImpIndirectImports_65, (MR_String) ".int2", parse_tree__modules__V_167_167, parse_tree__modules__V_168_168, parse_tree__modules__STATE_VARIABLE_Module_162_162, &parse_tree__modules__STATE_VARIABLE_Module_169_169);
    }
#line 772 "modules.m"
    {
#line 772 "modules.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(parse_tree__modules__STATE_VARIABLE_Module_169_169, &parse_tree__modules__Items_66, &parse_tree__modules__V_67_67, &parse_tree__modules__V_68_68);
    }
#line 775 "modules.m"
    {
#line 775 "modules.m"
      parse_tree__modules__V_176_176 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_199_199, parse_tree__modules__ImpImportedModules_33, parse_tree__modules__ImpUsedModules_34);
    }
#line 774 "modules.m"
    {
#line 774 "modules.m"
      parse_tree__modules__V_175_175 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_199_199, parse_tree__modules__IntUsedModules_51, parse_tree__modules__V_176_176);
    }
#line 774 "modules.m"
    {
#line 774 "modules.m"
      parse_tree__modules__V_173_173 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_199_199, parse_tree__modules__IntImportedModules_50, parse_tree__modules__V_175_175);
    }
#line 773 "modules.m"
    {
#line 773 "modules.m"
      parse_tree__modules__check_imports_accessibility_5_p_0(parse_tree__modules__ModuleName_15, parse_tree__modules__V_173_173, parse_tree__modules__Items_66, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__AccessSpecs_69);
    }
#line 776 "modules.m"
    {
#line 776 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__AccessSpecs_69, parse_tree__modules__STATE_VARIABLE_Module_169_169, parse_tree__modules__STATE_VARIABLE_Module_70);
#line 776 "modules.m"
      return;
    }
#line 625 "modules.m"
  }
#line 115 "modules.m"
}

#line 95 "modules.m"
void MR_CALL 
parse_tree__modules__check_int_for_no_exports_7_p_0(
#line 95 "modules.m"
  MR_Word parse_tree__modules__Globals_1,
#line 95 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 95 "modules.m"
  MR_Word parse_tree__modules__ModuleName_3,
#line 95 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_4,
#line 95 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_5)
#line 95 "modules.m"
{
#line 571 "modules.m"
  while (MR_TRUE)
#line 571 "modules.m"
    {
#line 571 "modules.m"
      /* tailcall optimized into a loop */
#line 571 "modules.m"
      {
#line 571 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 571 "modules.m"
        if ((parse_tree__modules__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 571 "modules.m"
          {
#line 571 "modules.m"
            MR_Word parse_tree__modules__WarnSpec_12;

#line 572 "modules.m"
            {
#line 572 "modules.m"
              parse_tree__modules__generate_no_exports_warning_5_p_0(parse_tree__modules__Globals_1, parse_tree__modules__ModuleName_3, &parse_tree__modules__WarnSpec_12);
            }
#line 573 "modules.m"
            {
#line 573 "modules.m"
              MR_Word base;
#line 573 "modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "modules.m"
              *parse_tree__modules__STATE_VARIABLE_Specs_5 = base;
#line 573 "modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__WarnSpec_12));
#line 573 "modules.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_4));
#line 573 "modules.m"
            }
#line 571 "modules.m"
          }
#line 571 "modules.m"
        else
#line 574 "modules.m"
          {
#line 574 "modules.m"
            MR_Word parse_tree__modules__Item_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__2_2, (MR_Integer) 0)));
#line 574 "modules.m"
            MR_Word parse_tree__modules__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__2_2, (MR_Integer) 1)));

#line 578 "modules.m"
            if (((MR_tag((MR_Word) parse_tree__modules__Item_20)) == (MR_mktag((MR_Integer) 2))))
#line 579 "modules.m"
              {
#line 579 "modules.m"
                MR_Word parse_tree__modules__ItemModuleDefn_26 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_20), (MR_Integer) 2);
#line 579 "modules.m"
                MR_Word parse_tree__modules__ModuleDefn_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_26, (MR_Integer) 0)));
#line 580 "modules.m"
                MR_Word parse_tree__modules__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_26, (MR_Integer) 1)));
#line 580 "modules.m"
                MR_Integer parse_tree__modules__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_26, (MR_Integer) 2)));
#line 581 "modules.m"
                MR_Word parse_tree__modules__V_30_30;

#line 581 "modules.m"
                parse_tree__modules__succeeded = ((((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_27, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 581 "modules.m"
                if (parse_tree__modules__succeeded)
#line 581 "modules.m"
                  parse_tree__modules__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_27, (MR_Integer) 1)));
#line 581 "modules.m"
                parse_tree__modules__succeeded = !(parse_tree__modules__succeeded);
#line 579 "modules.m"
              }
#line 578 "modules.m"
            else
#line 578 "modules.m"
              if (((((MR_tag((MR_Word) parse_tree__modules__Item_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_20, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 577 "modules.m"
                parse_tree__modules__succeeded = MR_TRUE;
#line 578 "modules.m"
              else
#line 578 "modules.m"
                parse_tree__modules__succeeded = MR_FALSE;
#line 586 "modules.m"
            if (parse_tree__modules__succeeded)
#line 585 "modules.m"
              {
#line 585 "modules.m"
                /* direct tailcall eliminated */
#line 585 "modules.m"
                {
#line 585 "modules.m"
                  MR_Word parse_tree__modules__HeadVar__2__tmp_copy_2 = parse_tree__modules__Items_21;

#line 585 "modules.m"
                  parse_tree__modules__HeadVar__2_2 = parse_tree__modules__HeadVar__2__tmp_copy_2;
#line 585 "modules.m"
                }
#line 585 "modules.m"
                continue;
#line 585 "modules.m"
              }
#line 586 "modules.m"
            else
#line 588 "modules.m"
              *parse_tree__modules__STATE_VARIABLE_Specs_5 = parse_tree__modules__STATE_VARIABLE_Specs_0_4;
#line 574 "modules.m"
          }
#line 571 "modules.m"
      }
#line 571 "modules.m"
      break;
#line 571 "modules.m"
    }
#line 95 "modules.m"
}

#line 88 "modules.m"
void MR_CALL 
parse_tree__modules__check_for_no_exports_7_p_0(
#line 88 "modules.m"
  MR_Word parse_tree__modules__Globals_8,
#line 88 "modules.m"
  MR_Word parse_tree__modules__Items_9,
#line 88 "modules.m"
  MR_Word parse_tree__modules__ModuleName_10,
#line 88 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_15,
#line 88 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_16)
#line 88 "modules.m"
{
#line 560 "modules.m"
  {
#line 560 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 560 "modules.m"
    MR_Word parse_tree__modules__ExportWarning_13;

#line 561 "modules.m"
    {
#line 561 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_8, (MR_Integer) 9, &parse_tree__modules__ExportWarning_13);
    }
#line 564 "modules.m"
    if ((parse_tree__modules__ExportWarning_13 == (MR_Integer) 0))
#line 563 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_16 = parse_tree__modules__STATE_VARIABLE_Specs_0_15;
#line 564 "modules.m"
    else
#line 565 "modules.m"
      {
#line 565 "modules.m"
        MR_Word parse_tree__modules__InterfaceItems_14;

#line 566 "modules.m"
        {
#line 566 "modules.m"
          parse_tree__modules__get_interface_4_p_0(parse_tree__modules__ModuleName_10, (MR_Integer) 0, parse_tree__modules__Items_9, &parse_tree__modules__InterfaceItems_14);
        }
#line 567 "modules.m"
        {
#line 567 "modules.m"
          parse_tree__modules__check_int_for_no_exports_7_p_0(parse_tree__modules__Globals_8, parse_tree__modules__InterfaceItems_14, parse_tree__modules__ModuleName_10, parse_tree__modules__STATE_VARIABLE_Specs_0_15, parse_tree__modules__STATE_VARIABLE_Specs_16);
#line 567 "modules.m"
          return;
        }
#line 565 "modules.m"
      }
#line 560 "modules.m"
  }
#line 88 "modules.m"
}

#line 534 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__get_interface_4_p_0_3(
#line 534 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 534 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 534 "modules.m"
{
#line 534 "modules.m"
  {
#line 534 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 534 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 534 "modules.m"
    MR_Word parse_tree__modules__conv3_Item_6;

#line 534 "modules.m"
    {
#line 534 "modules.m"
      parse_tree__modules__conv3_Item_6 = parse_tree__modules__make_foreign_import_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 534 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv3_Item_6));
#line 534 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 534 "modules.m"
  }
#line 534 "modules.m"
}

#line 547 "modules.m"
static void MR_CALL 
parse_tree__modules__get_interface_4_p_0_2(
#line 547 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 547 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 547 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 547 "modules.m"
{
#line 547 "modules.m"
  {
#line 547 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 547 "modules.m"
    MR_Word parse_tree__modules__conv1_STATE_VARIABLE_LangSet_8;

#line 547 "modules.m"
    {
#line 547 "modules.m"
      parse_tree__modules__accumulate_item_foreign_import_langs_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv1_STATE_VARIABLE_LangSet_8);
    }
#line 547 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_STATE_VARIABLE_LangSet_8));
#line 547 "modules.m"
  }
#line 547 "modules.m"
}

#line 335 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__get_interface_4_p_0_1(
#line 335 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 335 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 335 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 335 "modules.m"
{
#line 335 "modules.m"
  {
#line 335 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 335 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;

#line 335 "modules.m"
    {
#line 335 "modules.m"
      parse_tree__modules__IntroducedFrom__func__get_interface__335__1_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 335 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 335 "modules.m"
  }
#line 335 "modules.m"
}

#line 77 "modules.m"
void MR_CALL 
parse_tree__modules__get_interface_4_p_0(
#line 77 "modules.m"
  MR_Word parse_tree__modules__ModuleName_5,
#line 77 "modules.m"
  MR_Word parse_tree__modules__IncludeImplTypes_6,
#line 77 "modules.m"
  MR_Word parse_tree__modules__Items0_7,
#line 77 "modules.m"
  MR_Word * parse_tree__modules__Items_8)
#line 77 "modules.m"
{
#line 334 "modules.m"
  {
#line 334 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 334 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_11_33;
#line 334 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_11_44;
#line 334 "modules.m"
    MR_Word parse_tree__modules__RevItems_12;
#line 334 "modules.m"
    MR_Word parse_tree__modules__Items1_14;
#line 334 "modules.m"
    MR_Word parse_tree__modules__Langs_29;
#line 334 "modules.m"
    MR_Word parse_tree__modules__ImportItems_30;
#line 334 "modules.m"
    MR_Word parse_tree__modules__V_31_31;
#line 334 "modules.m"
    MR_Word parse_tree__modules__LangSet_38;
#line 334 "modules.m"
    MR_Word parse_tree__modules__V_40_40;
#line 336 "modules.m"
    MR_Box parse_tree__modules__conv0_V_13_13;
#line 547 "modules.m"
    MR_Box parse_tree__modules__conv2_LangSet_38;

#line 337 "modules.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 336 "modules.m"
    {
#line 336 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_116_101_114_102_97_99_101_95_97_110_100_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_97_99_99_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__IncludeImplTypes_6, parse_tree__modules__Items0_7, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__RevItems_12, (MR_Word) &parse_tree__modules_scalar_common_1[6], ((MR_Box) ((MR_Integer) 0)), &parse_tree__modules__conv0_V_13_13);
    }
#line 338 "modules.m"
    {
#line 338 "modules.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__modules__RevItems_12, &parse_tree__modules__Items1_14);
    }
#line 13253 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_11_44 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 547 "modules.m"
    {
#line 547 "modules.m"
      parse_tree__modules__V_40_40 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_11_44);
    }
#line 547 "modules.m"
    {
#line 547 "modules.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__modules_scalar_common_2[0], (MR_Word) &parse_tree__modules_scalar_common_1[7], parse_tree__modules__Items1_14, ((MR_Box) (parse_tree__modules__V_40_40)), &parse_tree__modules__conv2_LangSet_38);
    }
#line 547 "modules.m"
    parse_tree__modules__LangSet_38 = ((MR_Word) parse_tree__modules__conv2_LangSet_38);
#line 548 "modules.m"
    {
#line 548 "modules.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__modules__TypeCtorInfo_11_44, parse_tree__modules__LangSet_38, &parse_tree__modules__Langs_29);
    }
#line 13272 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_11_33 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 534 "modules.m"
    {
#line 534 "modules.m"
      parse_tree__modules__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 534 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_31_31, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[2]));
#line 534 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_31_31, 1) = ((MR_Box) (parse_tree__modules__get_interface_4_p_0_3));
#line 534 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 534 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_31_31, 3) = ((MR_Box) (parse_tree__modules__ModuleName_5));
#line 534 "modules.m"
    }
#line 534 "modules.m"
    {
#line 534 "modules.m"
      parse_tree__modules__ImportItems_30 = mercury__list__map_2_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__modules__TypeCtorInfo_11_33, parse_tree__modules__V_31_31, parse_tree__modules__Langs_29);
    }
#line 535 "modules.m"
    {
#line 535 "modules.m"
      *parse_tree__modules__Items_8 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_11_33, parse_tree__modules__ImportItems_30, parse_tree__modules__Items1_14);
    }
#line 334 "modules.m"
  }
#line 77 "modules.m"
}

void mercury__parse_tree__modules__init(void)
{
}

void mercury__parse_tree__modules__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_generate_dependencies_mode_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_module_list_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_submodule_map_0);
}

void mercury__parse_tree__modules__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.modules. */
