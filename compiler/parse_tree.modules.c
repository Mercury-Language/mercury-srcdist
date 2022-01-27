/*
** Automatically generated from `modules.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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


#include "array.mih"
#include "assoc_list.mih"
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
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
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
#include "parse_tree.comp_unit_interface.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.split_parse_tree_src.mih"
#include "parse_tree.status.mih"
#include "parse_tree.write_deps_file.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 777 "modules.m"
struct parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0_s {
#line 777 "modules.m"
  MR_Word parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__ImportedModules_11;
#line 777 "modules.m"
  MR_Word parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__UsedModules_12;
#line 777 "modules.m"
  MR_Word * parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__HeadVar__4_22;
#line 777 "modules.m"
  MR_Cont parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__cont;
#line 777 "modules.m"
  void * parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__cont_env_ptr;
#line 777 "modules.m"
  MR_bool parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__succeeded;
#line 777 "modules.m"
  MR_Word parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__TypeCtorInfo_50_50;
#line 778 "modules.m"
  MR_Box parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__conv0_HeadVar__4_22;
#line 777 "modules.m"
};

#line 777 "modules.m"
struct parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0_s {
#line 777 "modules.m"
  MR_Box * parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__wrapper_arg_1;
#line 777 "modules.m"
  MR_Cont parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__cont;
#line 777 "modules.m"
  void * parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__cont_env_ptr;
#line 777 "modules.m"
  MR_Word parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__conv0_HeadVar__4_22;
#line 777 "modules.m"
};


#line 146 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__status__type_ctor_info_module_section_0;

#line 149 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__status__type_ctor_info_aug_module_section_0;

#line 152 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__pti_compilation_unit_1__plain_parse_tree__status__type_ctor_info_module_section_0;

#line 155 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 158 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 161 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 164 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

#line 167 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 170 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 173 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

#line 176 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

#line 179 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 182 "parse_tree.modules.c"
static const MR_VA_TypeInfo_Struct2 parse_tree__modules____vti_func_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__status__type_ctor_info_aug_module_section_0;

#line 185 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_0;

#line 188 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_1;

#line 191 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_generate_dependencies_mode_0[2];

#line 194 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_generate_dependencies_mode_0[2];

#line 197 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_generate_dependencies_mode_0[2];

#line 200 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_0;

#line 203 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_1;

#line 206 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_import_or_use_0[2];

#line 209 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_import_or_use_0[2];

#line 212 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_0[2];

#line 215 "parse_tree.modules.c"
static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_import_or_use_context_0_0[2];

#line 218 "parse_tree.modules.c"
static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0;

#line 221 "parse_tree.modules.c"
static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0[1];

#line 224 "parse_tree.modules.c"
static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_import_or_use_context_0[1];

#line 227 "parse_tree.modules.c"
static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_import_or_use_context_0[1];

#line 230 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_context_0[1];

#line 233 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

#line 236 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 239 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____aug_section_maker_0_0_10001(
#line 242 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 244 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 247 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____aug_section_maker_0_0_10001(
#line 250 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 252 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 254 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 257 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____generate_dependencies_mode_0_0_10001(
#line 260 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 262 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 265 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____generate_dependencies_mode_0_0_10001(
#line 268 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 270 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 272 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 275 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_0_0_10001(
#line 278 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 280 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 283 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_0_0_10001(
#line 286 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 288 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 290 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 293 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0_10001(
#line 296 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 298 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 301 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0_10001(
#line 304 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 306 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 308 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 311 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0_10001(
#line 314 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 316 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 319 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0_10001(
#line 322 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 324 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 326 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 329 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0_10001(
#line 332 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 334 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 337 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0_10001(
#line 340 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 342 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 344 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 347 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_95_95_91_49_93_95_48_12_p_0_1(
#line 350 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 352 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 183 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_95_95_91_49_93_95_48_12_p_0(
#line 183 "modules.m"
  MR_Word parse_tree__modules__Globals_13,
#line 183 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_14,
#line 183 "modules.m"
  MR_Word parse_tree__modules__Imports_15,
#line 183 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_16,
#line 183 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_17,
#line 183 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 183 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 183 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 183 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28);

#line 1614 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_99_108_117_100_101_100_95_109_111_100_117_108_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 1614 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1614 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2,
#line 1614 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_3);

#line 1131 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(
#line 1131 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1131 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2);

#line 873 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1(
#line 873 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 873 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 856 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(
#line 856 "modules.m"
  MR_Word parse_tree__modules__Context_10,
#line 856 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportedModules_0_22,
#line 856 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportedModules_23,
#line 856 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_UsedModules_0_24,
#line 856 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_UsedModules_25,
#line 856 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 856 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27);

#line 828 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_12_p_0(
#line 828 "modules.m"
  MR_Word parse_tree__modules__Context_14,
#line 828 "modules.m"
  MR_Word parse_tree__modules__IntImportedModules0_15,
#line 828 "modules.m"
  MR_Word * parse_tree__modules__IntImportedModules_16,
#line 828 "modules.m"
  MR_Word parse_tree__modules__IntUsedModules0_17,
#line 828 "modules.m"
  MR_Word * parse_tree__modules__IntUsedModules_18,
#line 828 "modules.m"
  MR_Word parse_tree__modules__ImpImportedModules0_19,
#line 828 "modules.m"
  MR_Word * parse_tree__modules__ImpImportedModules_20,
#line 828 "modules.m"
  MR_Word parse_tree__modules__ImpUsedModules0_21,
#line 828 "modules.m"
  MR_Word * parse_tree__modules__ImpUsedModules_22,
#line 828 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 828 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27);

#line 447 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho3_12_p_0_2(
#line 450 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 452 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 455 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho3_12_p_0_1(
#line 458 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 460 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 183 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho3_12_p_0(
#line 183 "modules.m"
  MR_Word parse_tree__modules__Globals_13,
#line 183 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_14,
#line 183 "modules.m"
  MR_Word parse_tree__modules__Imports_15,
#line 183 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_16,
#line 183 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 183 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 183 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 183 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28);

#line 202 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho2_10_p_0(
#line 202 "modules.m"
  MR_Word parse_tree__modules__Globals_11,
#line 202 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_12,
#line 202 "modules.m"
  MR_Word parse_tree__modules__Imports_13,
#line 202 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_14,
#line 202 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22,
#line 202 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23);

#line 1536 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__generate_dependencies__1536__1_2_p_0(
#line 1536 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_102,
#line 1536 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_103);

#line 1470 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__IntroducedFrom__func__build_deps_map__1470__1_1_f_0(
#line 1470 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_43);

#line 778 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_2(
#line 778 "modules.m"
  void * parse_tree__modules__env_ptr_arg);

#line 777 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_1(
#line 777 "modules.m"
  void * parse_tree__modules__env_ptr_arg);

#line 777 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0(
#line 777 "modules.m"
  MR_Word parse_tree__modules__AncestorModules_10,
#line 777 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_11,
#line 777 "modules.m"
  MR_Word parse_tree__modules__UsedModules_12,
#line 777 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__4_22,
#line 777 "modules.m"
  MR_Cont parse_tree__modules__cont,
#line 777 "modules.m"
  void * parse_tree__modules__cont_env_ptr);

#line 902 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__902__1_2_p_0(
#line 902 "modules.m"
  MR_Word parse_tree__modules__Ancestor_32,
#line 902 "modules.m"
  MR_Word parse_tree__modules__ModuleName_40);

#line 1197 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0(
#line 1197 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1197 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1197 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1197 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0(
#line 1197 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1197 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1209 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0(
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1209 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0(
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1203 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0(
#line 1203 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1203 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1203 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1203 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0(
#line 1203 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1203 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1199 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_0_0(
#line 1199 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1199 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1199 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1199 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_0_0(
#line 1199 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_1,
#line 1199 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1479 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____generate_dependencies_mode_0_0(
#line 1479 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1479 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1479 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1479 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____generate_dependencies_mode_0_0(
#line 1479 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_1,
#line 1479 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1624 "modules.m"
static void MR_CALL 
parse_tree__modules__get_included_modules_in_items_3_p_0(
#line 1624 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1624 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2,
#line 1624 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_3);

#line 1536 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_dependencies_7_p_0_1(
#line 1536 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1536 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1536 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2);

#line 1483 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_dependencies_7_p_0(
#line 1483 "modules.m"
  MR_Word parse_tree__modules__Globals_8,
#line 1483 "modules.m"
  MR_Word parse_tree__modules__Mode_9,
#line 1483 "modules.m"
  MR_Word parse_tree__modules__Search_10,
#line 1483 "modules.m"
  MR_Word parse_tree__modules__ModuleName_11,
#line 1483 "modules.m"
  MR_Word parse_tree__modules__DepsMap0_12);

#line 1368 "modules.m"
static void MR_CALL 
parse_tree__modules__report_inaccessible_module_error_6_p_0(
#line 1368 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1368 "modules.m"
  MR_Word parse_tree__modules__ParentModule_8,
#line 1368 "modules.m"
  MR_String parse_tree__modules__SubModule_9,
#line 1368 "modules.m"
  MR_Word parse_tree__modules__ImportOrUseContext_10,
#line 1368 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1368 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20);

#line 1359 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0_1(
#line 1359 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1359 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1359 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1359 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1343 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0(
#line 1343 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1343 "modules.m"
  MR_Word parse_tree__modules__InclMap_8,
#line 1343 "modules.m"
  MR_Word parse_tree__modules__ImportUseMap_9,
#line 1343 "modules.m"
  MR_Word parse_tree__modules__ImportedModule_10,
#line 1343 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1343 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20);

#line 1261 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_items_acc_6_p_0(
#line 1261 "modules.m"
  MR_Word parse_tree__modules__Visible_1,
#line 1261 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1261 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1261 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1261 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1261 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6);

#line 1231 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_aug_item_blocks_acc_5_p_0(
#line 1231 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1231 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_2,
#line 1231 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_3,
#line 1231 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_4,
#line 1231 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_5);

#line 1187 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_5_p_0_1(
#line 1187 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1187 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1187 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1187 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1181 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_5_p_0(
#line 1181 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 1181 "modules.m"
  MR_Word parse_tree__modules__AugItemBlocks_7,
#line 1181 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_8,
#line 1181 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_12,
#line 1181 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_13);

#line 1137 "modules.m"
static void MR_CALL 
parse_tree__modules__maybe_record_timestamp_6_p_0(
#line 1137 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_8,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__NeedQualifier_9,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamp_10,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17,
#line 1137 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18);

#line 1100 "modules.m"
static void MR_CALL 
parse_tree__modules__make_module_and_imports_12_p_0(
#line 1100 "modules.m"
  MR_String parse_tree__modules__SourceFileName_13,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_14,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__ModuleName_15,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__ModuleNameContext_16,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__ItemBlocks0_17,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__Specs_18,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__PublicChildren_19,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__NestedChildren_20,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__FactDeps_21,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__ForeignIncludeFiles_22,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestampMap_23,
#line 1100 "modules.m"
  MR_Word * parse_tree__modules__Module_24);

#line 889 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__wrap_symname_1_f_0(
#line 889 "modules.m"
  MR_Word parse_tree__modules__ModuleName_3);

#line 802 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_imported_ancestor_5_p_0(
#line 802 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 802 "modules.m"
  MR_Word parse_tree__modules__Context_7,
#line 802 "modules.m"
  MR_Word parse_tree__modules__AncestorName_8,
#line 802 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_15,
#line 802 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_16);

#line 784 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_3(
#line 784 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 784 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 784 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 784 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 777 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_1(
#line 777 "modules.m"
  void * parse_tree__modules__env_ptr_arg);

#line 777 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2(
#line 777 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 777 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 777 "modules.m"
  MR_Cont parse_tree__modules__cont,
#line 777 "modules.m"
  void * parse_tree__modules__cont_env_ptr);

#line 771 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0(
#line 771 "modules.m"
  MR_Word parse_tree__modules__ModuleName_8,
#line 771 "modules.m"
  MR_Word parse_tree__modules__Context_9,
#line 771 "modules.m"
  MR_Word parse_tree__modules__AncestorModules_10,
#line 771 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_11,
#line 771 "modules.m"
  MR_Word parse_tree__modules__UsedModules_12,
#line 771 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_20,
#line 771 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_21);

#line 724 "modules.m"
static void MR_CALL 
parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(
#line 724 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 724 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_0_2,
#line 724 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevClauses_3,
#line 724 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4,
#line 724 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevImplDecls_5);

#line 711 "modules.m"
static void MR_CALL 
parse_tree__modules__split_items_in_blocks_into_clauses_and_decls_5_p_0(
#line 711 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 711 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_0_2,
#line 711 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevClauses_3,
#line 711 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4,
#line 711 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevImplDecls_5);

#line 401 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_no_exports_warning_6_p_0(
#line 401 "modules.m"
  MR_Word parse_tree__modules__Globals_7,
#line 401 "modules.m"
  MR_Word parse_tree__modules__ModuleName_8,
#line 401 "modules.m"
  MR_Word parse_tree__modules__Context0_9,
#line 401 "modules.m"
  MR_Word * parse_tree__modules__Spec_10);

#line 380 "modules.m"
static void MR_CALL 
parse_tree__modules__do_ms_interface_items_export_anything_2_p_0(
#line 380 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 380 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2);

#line 363 "modules.m"
static void MR_CALL 
parse_tree__modules__do_ms_interface_item_blocks_export_anything_2_p_0(
#line 363 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 363 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2);

#line 1477 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependency_file_4_p_0_3(
#line 1477 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1477 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1477 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1477 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1473 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependency_file_4_p_0_2(
#line 1473 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1473 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1473 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2);

#line 1470 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__generate_file_dependency_file_4_p_0_1(
#line 1470 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1470 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 1477 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependencies_4_p_0_3(
#line 1477 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1477 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1477 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1477 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1473 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependencies_4_p_0_2(
#line 1473 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1473 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1473 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2);

#line 1470 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__generate_file_dependencies_4_p_0_1(
#line 1470 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1470 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 902 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__process_module_private_interfaces_13_p_0_1(
#line 902 "modules.m"
  MR_Box parse_tree__modules__closure_arg);

#line 687 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_13(
#line 687 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 687 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 687 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_12(
#line 687 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 687 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 682 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_11(
#line 682 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 682 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 682 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_10(
#line 682 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 682 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 677 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_9(
#line 677 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 677 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 669 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_8(
#line 669 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 669 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 668 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_7(
#line 668 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 668 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 663 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_6(
#line 663 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 663 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 658 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_5(
#line 658 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 658 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 658 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_4(
#line 658 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 658 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 652 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_3(
#line 652 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 652 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 651 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_2(
#line 651 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 651 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 632 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_1(
#line 632 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 632 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 632 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2);

#line 575 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_11(
#line 575 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 575 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 574 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_10(
#line 574 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 574 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 568 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_9(
#line 568 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 568 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 568 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_8(
#line 568 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 568 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 560 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_7(
#line 560 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 560 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 559 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_6(
#line 559 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 559 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 550 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_5(
#line 550 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 550 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 539 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_4(
#line 539 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 539 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 538 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_3(
#line 538 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 538 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 508 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_2(
#line 508 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 508 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 508 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2);

#line 501 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_1(
#line 501 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 501 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 501 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__modules_scalar_common_1[95][2];

static /* final */ const MR_Box parse_tree__modules_scalar_common_2[25][3];

static /* final */ const MR_Box parse_tree__modules_scalar_common_3[14][4];

static /* final */ const MR_Box parse_tree__modules_scalar_common_4[6][5];

static /* final */ const MR_Box parse_tree__modules_scalar_common_5[2][6];

static /* final */ const MR_Box parse_tree__modules_scalar_common_6[2][1];

static /* final */ const MR_Box parse_tree__modules_scalar_common_7[1][11];

static /* final */ const MR_Box parse_tree__modules_scalar_common_8[1][7];

static /* final */ const MR_Box parse_tree__modules_scalar_common_9[1][8];

static /* final */ const MR_Box parse_tree__modules_scalar_common_10[2][9];




static /* final */ const MR_Box parse_tree__modules_scalar_common_1[95][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_module_section_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_file_kind_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_file_kind_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_file_kind_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_compilation_unit_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_module_section_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not export anything."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[14])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "inst"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This would normally be a"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in its interface section(s)."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "other than"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A file should contain at least one declaration"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "To be useful, a module should export something."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There is no need to explicitly import them."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "implicitly imports its ancestors."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Every sub-module"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[14])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[56])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "imported using both"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is inaccessible."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[14])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[14])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: interface for module"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: module"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "imports itself!"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Module"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "imports its own ancestor, module"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[54])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error in"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Either there was no prior"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration to import module"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or the interface for module"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not contain an"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for module"))
  },
  /* row 93 */
  {
    ((MR_Box) ((MR_String) "\'.")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_2[25][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules_scalar_common_1[10]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules_scalar_common_1[9]))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[3])),
    ((MR_Box) (parse_tree__modules__generate_file_dependencies_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__generate_file_dependencies_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[3])),
    ((MR_Box) (parse_tree__modules__generate_file_dependency_file_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__generate_file_dependency_file_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[4])),
    ((MR_Box) (parse_tree__modules__generate_dependencies_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__process_module_short_interfaces_transitively__ho3_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__process_module_short_interfaces_transitively__ho3_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[5])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[1])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_95_95_91_49_93_95_48_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_3[14][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_func_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_4[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__modules__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__status__type_ctor_info_module_section_0)),
    ((MR_Box) (&parse_tree__modules__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__status__type_ctor_info_aug_module_section_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__modules__parse_tree__prog_item__pti_compilation_unit_1__plain_parse_tree__status__type_ctor_info_module_section_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_import_locn_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_6[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&parse_tree__modules__parse_tree__prog_item__pti_compilation_unit_1__plain_parse_tree__status__type_ctor_info_module_section_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_8[1][7] = {
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
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_9[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_10[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0)),
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
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 2128 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__status__type_ctor_info_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0
  }
};

#line 2136 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__status__type_ctor_info_aug_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0
  }
};

#line 2144 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__pti_compilation_unit_1__plain_parse_tree__status__type_ctor_info_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_compilation_unit_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0
  }
};

#line 2152 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2160 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2168 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 2176 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

#line 2185 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2193 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

#line 2202 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0
  }
};

#line 2210 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0
  }
};

#line 2219 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2227 "parse_tree.modules.c"
static const MR_VA_TypeInfo_Struct2 parse_tree__modules____vti_func_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__status__type_ctor_info_aug_module_section_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0
  }
};

#line 2237 "parse_tree.modules.c"
const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_aug_section_maker_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__modules____Unify____aug_section_maker_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____aug_section_maker_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "aug_section_maker",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__modules____vti_func_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__status__type_ctor_info_aug_module_section_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2254 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_0 = {
  (MR_String) "output_d_file_only",
  (MR_Integer) 0
};

#line 2260 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_1 = {
  (MR_String) "output_all_dependencies",
  (MR_Integer) 1
};

#line 2266 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_generate_dependencies_mode_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_1
};

#line 2272 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_generate_dependencies_mode_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_1,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_generate_dependencies_mode_0_0
};

#line 2278 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_generate_dependencies_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2284 "parse_tree.modules.c"
const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_generate_dependencies_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__modules____Unify____generate_dependencies_mode_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____generate_dependencies_mode_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "generate_dependencies_mode",
  {     parse_tree__modules__parse_tree__modules__enum_name_ordered_generate_dependencies_mode_0 },
  {     parse_tree__modules__parse_tree__modules__enum_value_ordered_generate_dependencies_mode_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__modules__parse_tree__modules__functor_number_map_generate_dependencies_mode_0
};

#line 2301 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_0 = {
  (MR_String) "import_decl",
  (MR_Integer) 0
};

#line 2307 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_1 = {
  (MR_String) "use_decl",
  (MR_Integer) 1
};

#line 2313 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_import_or_use_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_1
};

#line 2319 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_import_or_use_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_1
};

#line 2325 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2331 "parse_tree.modules.c"
const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__modules____Unify____import_or_use_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____import_or_use_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "import_or_use",
  {     parse_tree__modules__parse_tree__modules__enum_name_ordered_import_or_use_0 },
  {     parse_tree__modules__parse_tree__modules__enum_value_ordered_import_or_use_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_0
};

#line 2348 "parse_tree.modules.c"
static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_import_or_use_context_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2354 "parse_tree.modules.c"
static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0 = {
  (MR_String) "import_or_use_context",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__modules__parse_tree__modules__field_types_import_or_use_context_0_0,
  NULL,
  NULL,
  NULL
};

#line 2369 "parse_tree.modules.c"
static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0
};

#line 2374 "parse_tree.modules.c"
static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_import_or_use_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0
  }
};

#line 2383 "parse_tree.modules.c"
static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_import_or_use_context_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0
};

#line 2388 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_context_0[1] = {
  (MR_Integer) 0
};

#line 2393 "parse_tree.modules.c"
const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__modules____Unify____import_or_use_context_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____import_or_use_context_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "import_or_use_context",
  {     parse_tree__modules__parse_tree__modules__du_name_ordered_import_or_use_context_0 },
  {     parse_tree__modules__parse_tree__modules__du_ptag_ordered_import_or_use_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_context_0
};

#line 2410 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0
  }
};

#line 2419 "parse_tree.modules.c"
const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_module_import_or_use_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__modules____Unify____module_import_or_use_map_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____module_import_or_use_map_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "module_import_or_use_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2436 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

#line 2445 "parse_tree.modules.c"
const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_module_inclusion_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__modules____Unify____module_inclusion_map_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____module_inclusion_map_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "module_inclusion_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2462 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____aug_section_maker_0_0_10001(
#line 2465 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2467 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2469 "parse_tree.modules.c"
{
#line 2471 "parse_tree.modules.c"
  {
#line 2473 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2476 "parse_tree.modules.c"
    {
#line 2478 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____aug_section_maker_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2481 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2483 "parse_tree.modules.c"
  }
#line 2485 "parse_tree.modules.c"
}

#line 2488 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____aug_section_maker_0_0_10001(
#line 2491 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2493 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2495 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2497 "parse_tree.modules.c"
{
#line 2499 "parse_tree.modules.c"
  {
#line 2501 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2504 "parse_tree.modules.c"
    {
#line 2506 "parse_tree.modules.c"
      parse_tree__modules____Compare____aug_section_maker_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2509 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2511 "parse_tree.modules.c"
  }
#line 2513 "parse_tree.modules.c"
}

#line 2516 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____generate_dependencies_mode_0_0_10001(
#line 2519 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2521 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2523 "parse_tree.modules.c"
{
#line 2525 "parse_tree.modules.c"
  {
#line 2527 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2530 "parse_tree.modules.c"
    {
#line 2532 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____generate_dependencies_mode_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2535 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2537 "parse_tree.modules.c"
  }
#line 2539 "parse_tree.modules.c"
}

#line 2542 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____generate_dependencies_mode_0_0_10001(
#line 2545 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2547 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2549 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2551 "parse_tree.modules.c"
{
#line 2553 "parse_tree.modules.c"
  {
#line 2555 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2558 "parse_tree.modules.c"
    {
#line 2560 "parse_tree.modules.c"
      parse_tree__modules____Compare____generate_dependencies_mode_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2563 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2565 "parse_tree.modules.c"
  }
#line 2567 "parse_tree.modules.c"
}

#line 2570 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_0_0_10001(
#line 2573 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2575 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2577 "parse_tree.modules.c"
{
#line 2579 "parse_tree.modules.c"
  {
#line 2581 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2584 "parse_tree.modules.c"
    {
#line 2586 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____import_or_use_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2589 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2591 "parse_tree.modules.c"
  }
#line 2593 "parse_tree.modules.c"
}

#line 2596 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_0_0_10001(
#line 2599 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2601 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2603 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2605 "parse_tree.modules.c"
{
#line 2607 "parse_tree.modules.c"
  {
#line 2609 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2612 "parse_tree.modules.c"
    {
#line 2614 "parse_tree.modules.c"
      parse_tree__modules____Compare____import_or_use_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2617 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2619 "parse_tree.modules.c"
  }
#line 2621 "parse_tree.modules.c"
}

#line 2624 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0_10001(
#line 2627 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2629 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2631 "parse_tree.modules.c"
{
#line 2633 "parse_tree.modules.c"
  {
#line 2635 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2638 "parse_tree.modules.c"
    {
#line 2640 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____import_or_use_context_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2643 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2645 "parse_tree.modules.c"
  }
#line 2647 "parse_tree.modules.c"
}

#line 2650 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0_10001(
#line 2653 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2655 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2657 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2659 "parse_tree.modules.c"
{
#line 2661 "parse_tree.modules.c"
  {
#line 2663 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2666 "parse_tree.modules.c"
    {
#line 2668 "parse_tree.modules.c"
      parse_tree__modules____Compare____import_or_use_context_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2671 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2673 "parse_tree.modules.c"
  }
#line 2675 "parse_tree.modules.c"
}

#line 2678 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0_10001(
#line 2681 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2683 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2685 "parse_tree.modules.c"
{
#line 2687 "parse_tree.modules.c"
  {
#line 2689 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2692 "parse_tree.modules.c"
    {
#line 2694 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____module_import_or_use_map_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2697 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2699 "parse_tree.modules.c"
  }
#line 2701 "parse_tree.modules.c"
}

#line 2704 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0_10001(
#line 2707 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2709 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2711 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2713 "parse_tree.modules.c"
{
#line 2715 "parse_tree.modules.c"
  {
#line 2717 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2720 "parse_tree.modules.c"
    {
#line 2722 "parse_tree.modules.c"
      parse_tree__modules____Compare____module_import_or_use_map_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2725 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2727 "parse_tree.modules.c"
  }
#line 2729 "parse_tree.modules.c"
}

#line 2732 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0_10001(
#line 2735 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2737 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2739 "parse_tree.modules.c"
{
#line 2741 "parse_tree.modules.c"
  {
#line 2743 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2746 "parse_tree.modules.c"
    {
#line 2748 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____module_inclusion_map_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2751 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2753 "parse_tree.modules.c"
  }
#line 2755 "parse_tree.modules.c"
}

#line 2758 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0_10001(
#line 2761 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2763 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2765 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2767 "parse_tree.modules.c"
{
#line 2769 "parse_tree.modules.c"
  {
#line 2771 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2774 "parse_tree.modules.c"
    {
#line 2776 "parse_tree.modules.c"
      parse_tree__modules____Compare____module_inclusion_map_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2779 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2781 "parse_tree.modules.c"
  }
#line 2783 "parse_tree.modules.c"
}

#line 2786 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_95_95_91_49_93_95_48_12_p_0_1(
#line 2789 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 2791 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 2793 "parse_tree.modules.c"
{
#line 2795 "parse_tree.modules.c"
  {
#line 2797 "parse_tree.modules.c"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 2799 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 2801 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__2_2;

#line 2804 "parse_tree.modules.c"
    {
#line 2806 "parse_tree.modules.c"
      parse_tree__modules__conv0_HeadVar__2_2 = parse_tree__status__make_ams_abstract_imported_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 2809 "parse_tree.modules.c"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__2_2));
#line 2811 "parse_tree.modules.c"
    return parse_tree__modules__wrapper_arg_2;
#line 2813 "parse_tree.modules.c"
  }
#line 2815 "parse_tree.modules.c"
}

#line 183 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_95_95_91_49_93_95_48_12_p_0(
#line 183 "modules.m"
  MR_Word parse_tree__modules__Globals_13,
#line 183 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_14,
#line 183 "modules.m"
  MR_Word parse_tree__modules__Imports_15,
#line 183 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_16,
#line 183 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_17,
#line 183 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 183 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 183 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 183 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28)
#line 183 "modules.m"
{
#line 1032 "modules.m"
  while (MR_TRUE)
#line 1032 "modules.m"
    {
#line 1032 "modules.m"
      /* tailcall optimized into a loop */
#line 1032 "modules.m"
      {
#line 1032 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 1032 "modules.m"
        MR_Word parse_tree__modules__IndirectImports_22;
#line 1032 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1032 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 1033 "modules.m"
        {
#line 1033 "modules.m"
          parse_tree__modules__process_module_short_interfaces_14_p_0(parse_tree__modules__Globals_13, parse_tree__modules__HaveReadModuleMaps_14, parse_tree__modules__Imports_15, parse_tree__modules__IntFileKind_16, parse_tree__modules__NewIntSection_17, (MR_Word) &parse_tree__modules_scalar_common_2[24], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IndirectImports_22, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33);
        }
#line 1038 "modules.m"
        if ((parse_tree__modules__IndirectImports_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1037 "modules.m"
          {
#line 1037 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1037 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;
#line 1037 "modules.m"
          }
#line 1038 "modules.m"
        else
#line 1040 "modules.m"
          {
#line 1040 "modules.m"
            /* direct tailcall eliminated */
#line 1040 "modules.m"
            {
#line 1040 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_15 = parse_tree__modules__IndirectImports_22;
#line 1040 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1040 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 1040 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27;
#line 1040 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25;
#line 1040 "modules.m"
              parse_tree__modules__Imports_15 = parse_tree__modules__Imports__tmp_copy_15;
#line 1040 "modules.m"
            }
#line 1040 "modules.m"
            continue;
#line 1040 "modules.m"
          }
#line 1032 "modules.m"
      }
#line 1032 "modules.m"
      break;
#line 1032 "modules.m"
    }
#line 183 "modules.m"
}

#line 1614 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_99_108_117_100_101_100_95_109_111_100_117_108_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 1614 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1614 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2,
#line 1614 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_3)
#line 1614 "modules.m"
{
#line 1617 "modules.m"
  while (MR_TRUE)
#line 1617 "modules.m"
    {
#line 1617 "modules.m"
      /* tailcall optimized into a loop */
#line 1617 "modules.m"
      {
#line 1617 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1617 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1617 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_3 = parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2;
#line 1617 "modules.m"
        else
#line 1619 "modules.m"
          {
#line 1619 "modules.m"
            MR_Word parse_tree__modules__ItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1619 "modules.m"
            MR_Word parse_tree__modules__ItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1619 "modules.m"
            MR_Word parse_tree__modules__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_7, (MR_Integer) 2)));
#line 1619 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_15_15;
#line 1620 "modules.m"
            MR_Box parse_tree__modules__V_10_10 = (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_7, (MR_Integer) 0));
#line 1620 "modules.m"
            MR_Word parse_tree__modules__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_7, (MR_Integer) 1)));

#line 1621 "modules.m"
            {
#line 1621 "modules.m"
              parse_tree__modules__get_included_modules_in_items_3_p_0(parse_tree__modules__Items_12, parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2, &parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_15_15);
            }
#line 1622 "modules.m"
            /* direct tailcall eliminated */
#line 1622 "modules.m"
            {
#line 1622 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__ItemBlocks_8;
#line 1622 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0__tmp_copy_2 = parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_15_15;

#line 1622 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2 = parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0__tmp_copy_2;
#line 1622 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1622 "modules.m"
            }
#line 1622 "modules.m"
            continue;
#line 1619 "modules.m"
          }
#line 1617 "modules.m"
      }
#line 1617 "modules.m"
      break;
#line 1617 "modules.m"
    }
#line 1614 "modules.m"
}

#line 1131 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(
#line 1131 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1131 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2)
#line 1131 "modules.m"
{
#line 1134 "modules.m"
  {
#line 1134 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1134 "modules.m"
    if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1135 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Integer) 1;
#line 1134 "modules.m"
    else
#line 1134 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Integer) 0;
#line 1134 "modules.m"
  }
#line 1131 "modules.m"
}

#line 873 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1(
#line 873 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 873 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 873 "modules.m"
{
#line 873 "modules.m"
  {
#line 873 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 873 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 873 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__2_2;

#line 873 "modules.m"
    {
#line 873 "modules.m"
      parse_tree__modules__conv1_HeadVar__2_2 = parse_tree__modules__wrap_symname_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 873 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__2_2));
#line 873 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 873 "modules.m"
  }
#line 873 "modules.m"
}

#line 856 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(
#line 856 "modules.m"
  MR_Word parse_tree__modules__Context_10,
#line 856 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportedModules_0_22,
#line 856 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportedModules_23,
#line 856 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_UsedModules_0_24,
#line 856 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_UsedModules_25,
#line 856 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 856 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27)
#line 856 "modules.m"
{
#line 863 "modules.m"
  {
#line 863 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 863 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_81_81 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 863 "modules.m"
    MR_Word parse_tree__modules__ImportedSet_14;
#line 863 "modules.m"
    MR_Word parse_tree__modules__UsedSet_15;
#line 863 "modules.m"
    MR_Word parse_tree__modules__BothSet_16;

#line 864 "modules.m"
    {
#line 864 "modules.m"
      mercury__set__list_to_set_2_p_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__STATE_VARIABLE_ImportedModules_0_22, &parse_tree__modules__ImportedSet_14);
    }
#line 865 "modules.m"
    {
#line 865 "modules.m"
      mercury__set__list_to_set_2_p_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__STATE_VARIABLE_UsedModules_0_24, &parse_tree__modules__UsedSet_15);
    }
#line 866 "modules.m"
    {
#line 866 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__ImportedSet_14, parse_tree__modules__UsedSet_15, &parse_tree__modules__BothSet_16);
    }
#line 867 "modules.m"
    {
#line 867 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__BothSet_16);
    }
#line 869 "modules.m"
    if (parse_tree__modules__succeeded)
#line 868 "modules.m"
      {
#line 868 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_Specs_27 = parse_tree__modules__STATE_VARIABLE_Specs_0_26;
#line 868 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_UsedModules_25 = parse_tree__modules__STATE_VARIABLE_UsedModules_0_24;
#line 868 "modules.m"
      }
#line 869 "modules.m"
    else
#line 870 "modules.m"
      {
#line 870 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_82_82;
#line 870 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_83_83;
#line 870 "modules.m"
        MR_Word parse_tree__modules__BothList_17;
#line 870 "modules.m"
        MR_Word parse_tree__modules__Pieces_18;
#line 870 "modules.m"
        MR_Word parse_tree__modules__Msg_19;
#line 870 "modules.m"
        MR_Word parse_tree__modules__Spec_21;
#line 870 "modules.m"
        MR_Word parse_tree__modules__V_28_28;
#line 870 "modules.m"
        MR_Word parse_tree__modules__V_31_31;
#line 870 "modules.m"
        MR_Word parse_tree__modules__V_32_32;
#line 870 "modules.m"
        MR_String parse_tree__modules__V_33_33;
#line 870 "modules.m"
        MR_Word parse_tree__modules__V_37_37;
#line 870 "modules.m"
        MR_Word parse_tree__modules__V_38_38;
#line 870 "modules.m"
        MR_Word parse_tree__modules__V_39_39;
#line 870 "modules.m"
        MR_Word parse_tree__modules__V_41_41;
#line 870 "modules.m"
        MR_Word parse_tree__modules__V_42_42;
#line 870 "modules.m"
        MR_String parse_tree__modules__V_43_43;
#line 870 "modules.m"
        MR_Word parse_tree__modules__V_64_64;
#line 870 "modules.m"
        MR_Word parse_tree__modules__V_65_65;
#line 870 "modules.m"
        MR_Word parse_tree__modules__V_68_68;
#line 870 "modules.m"
        MR_Word parse_tree__modules__V_69_69;
#line 870 "modules.m"
        MR_Word parse_tree__modules__V_77_77;
#line 872 "modules.m"
        MR_Box parse_tree__modules__conv0_V_33_33;
#line 874 "modules.m"
        MR_Box parse_tree__modules__conv2_V_43_43;

#line 870 "modules.m"
        {
#line 870 "modules.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__BothSet_16, &parse_tree__modules__BothList_17);
        }
#line 3162 "parse_tree.modules.c"
        parse_tree__modules__TypeCtorInfo_82_82 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 3164 "parse_tree.modules.c"
        parse_tree__modules__TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 872 "modules.m"
        {
#line 872 "modules.m"
          parse_tree__modules__conv0_V_33_33 = parse_tree__error_util__choose_number_3_f_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__TypeCtorInfo_83_83, parse_tree__modules__BothList_17, ((MR_Box) ((MR_String) "module")), ((MR_Box) ((MR_String) "modules")));
        }
#line 872 "modules.m"
        parse_tree__modules__V_33_33 = ((MR_String) parse_tree__modules__conv0_V_33_33);
#line 872 "modules.m"
        {
#line 872 "modules.m"
          parse_tree__modules__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 872 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_32_32, 1) = ((MR_Box) (parse_tree__modules__V_33_33));
#line 872 "modules.m"
        }
#line 872 "modules.m"
        {
#line 872 "modules.m"
          parse_tree__modules__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_31_31, 0) = ((MR_Box) (parse_tree__modules__V_32_32));
#line 872 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 872 "modules.m"
        }
#line 871 "modules.m"
        {
#line 871 "modules.m"
          parse_tree__modules__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[94])));
#line 871 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 1) = ((MR_Box) (parse_tree__modules__V_31_31));
#line 871 "modules.m"
        }
#line 873 "modules.m"
        {
#line 873 "modules.m"
          parse_tree__modules__V_39_39 = mercury__list__map_2_f_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__TypeCtorInfo_82_82, (MR_Word) &parse_tree__modules_scalar_common_2[23], parse_tree__modules__BothList_17);
        }
#line 873 "modules.m"
        {
#line 873 "modules.m"
          parse_tree__modules__V_38_38 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__modules__V_39_39);
        }
#line 874 "modules.m"
        {
#line 874 "modules.m"
          parse_tree__modules__conv2_V_43_43 = parse_tree__error_util__choose_number_3_f_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__TypeCtorInfo_83_83, parse_tree__modules__BothList_17, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
        }
#line 874 "modules.m"
        parse_tree__modules__V_43_43 = ((MR_String) parse_tree__modules__conv2_V_43_43);
#line 874 "modules.m"
        {
#line 874 "modules.m"
          parse_tree__modules__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 874 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_42_42, 1) = ((MR_Box) (parse_tree__modules__V_43_43));
#line 874 "modules.m"
        }
#line 874 "modules.m"
        {
#line 874 "modules.m"
          parse_tree__modules__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_41_41, 0) = ((MR_Box) (parse_tree__modules__V_42_42));
#line 874 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[63])));
#line 874 "modules.m"
        }
#line 873 "modules.m"
        {
#line 873 "modules.m"
          parse_tree__modules__V_37_37 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_82_82, parse_tree__modules__V_38_38, parse_tree__modules__V_41_41);
        }
#line 872 "modules.m"
        {
#line 872 "modules.m"
          parse_tree__modules__Pieces_18 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_82_82, parse_tree__modules__V_28_28, parse_tree__modules__V_37_37);
        }
#line 878 "modules.m"
        {
#line 878 "modules.m"
          parse_tree__modules__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 878 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_69_69, 0) = ((MR_Box) (parse_tree__modules__Pieces_18));
#line 878 "modules.m"
        }
#line 878 "modules.m"
        {
#line 878 "modules.m"
          parse_tree__modules__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 878 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_68_68, 0) = ((MR_Box) (parse_tree__modules__V_69_69));
#line 878 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 878 "modules.m"
        }
#line 878 "modules.m"
        {
#line 878 "modules.m"
          parse_tree__modules__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 878 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_65_65, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 878 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_65_65, 1) = ((MR_Box) (parse_tree__modules__V_68_68));
#line 878 "modules.m"
        }
#line 878 "modules.m"
        {
#line 878 "modules.m"
          parse_tree__modules__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 878 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_64_64, 0) = ((MR_Box) (parse_tree__modules__V_65_65));
#line 878 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 878 "modules.m"
        }
#line 877 "modules.m"
        {
#line 877 "modules.m"
          parse_tree__modules__Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 877 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_19, 0) = ((MR_Box) (parse_tree__modules__Context_10));
#line 877 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_19, 1) = ((MR_Box) (parse_tree__modules__V_64_64));
#line 877 "modules.m"
        }
#line 881 "modules.m"
        {
#line 881 "modules.m"
          parse_tree__modules__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 0) = ((MR_Box) (parse_tree__modules__Msg_19));
#line 881 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 881 "modules.m"
        }
#line 881 "modules.m"
        {
#line 881 "modules.m"
          parse_tree__modules__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 881 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[2])));
#line 881 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 881 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_21, 2) = ((MR_Box) (parse_tree__modules__V_77_77));
#line 881 "modules.m"
        }
#line 882 "modules.m"
        {
#line 882 "modules.m"
          MR_Word base;
#line 882 "modules.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 882 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Specs_27 = base;
#line 882 "modules.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_21));
#line 882 "modules.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_26));
#line 882 "modules.m"
        }
#line 886 "modules.m"
        {
#line 886 "modules.m"
          mercury__list__delete_elems_3_p_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__STATE_VARIABLE_UsedModules_0_24, parse_tree__modules__BothList_17, parse_tree__modules__STATE_VARIABLE_UsedModules_25);
        }
#line 870 "modules.m"
      }
#line 863 "modules.m"
    *parse_tree__modules__STATE_VARIABLE_ImportedModules_23 = parse_tree__modules__STATE_VARIABLE_ImportedModules_0_22;
#line 863 "modules.m"
  }
#line 856 "modules.m"
}

#line 828 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_12_p_0(
#line 828 "modules.m"
  MR_Word parse_tree__modules__Context_14,
#line 828 "modules.m"
  MR_Word parse_tree__modules__IntImportedModules0_15,
#line 828 "modules.m"
  MR_Word * parse_tree__modules__IntImportedModules_16,
#line 828 "modules.m"
  MR_Word parse_tree__modules__IntUsedModules0_17,
#line 828 "modules.m"
  MR_Word * parse_tree__modules__IntUsedModules_18,
#line 828 "modules.m"
  MR_Word parse_tree__modules__ImpImportedModules0_19,
#line 828 "modules.m"
  MR_Word * parse_tree__modules__ImpImportedModules_20,
#line 828 "modules.m"
  MR_Word parse_tree__modules__ImpUsedModules0_21,
#line 828 "modules.m"
  MR_Word * parse_tree__modules__ImpUsedModules_22,
#line 828 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 828 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27)
#line 828 "modules.m"
{
#line 839 "modules.m"
  {
#line 839 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 839 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules1_24;
#line 839 "modules.m"
    MR_Word parse_tree__modules__ImpUsedModules1_25;
#line 839 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_28_28;
#line 839 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_29_29;

#line 841 "modules.m"
    {
#line 841 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__Context_14, parse_tree__modules__IntImportedModules0_15, &parse_tree__modules__IntImportedModules1_24, parse_tree__modules__IntUsedModules0_17, parse_tree__modules__IntUsedModules_18, parse_tree__modules__STATE_VARIABLE_Specs_0_26, &parse_tree__modules__STATE_VARIABLE_Specs_28_28);
    }
#line 844 "modules.m"
    {
#line 844 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__Context_14, parse_tree__modules__IntImportedModules1_24, parse_tree__modules__IntImportedModules_16, parse_tree__modules__ImpUsedModules0_21, &parse_tree__modules__ImpUsedModules1_25, parse_tree__modules__STATE_VARIABLE_Specs_28_28, &parse_tree__modules__STATE_VARIABLE_Specs_29_29);
    }
#line 848 "modules.m"
    {
#line 848 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__Context_14, parse_tree__modules__ImpImportedModules0_19, parse_tree__modules__ImpImportedModules_20, parse_tree__modules__ImpUsedModules1_25, parse_tree__modules__ImpUsedModules_22, parse_tree__modules__STATE_VARIABLE_Specs_29_29, parse_tree__modules__STATE_VARIABLE_Specs_27);
#line 848 "modules.m"
      return;
    }
#line 839 "modules.m"
  }
#line 828 "modules.m"
}

#line 3410 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho3_12_p_0_2(
#line 3413 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 3415 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 3417 "parse_tree.modules.c"
{
#line 3419 "parse_tree.modules.c"
  {
#line 3421 "parse_tree.modules.c"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 3423 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 3425 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv1_HeadVar__2_2;

#line 3428 "parse_tree.modules.c"
    {
#line 3430 "parse_tree.modules.c"
      parse_tree__modules__conv1_HeadVar__2_2 = parse_tree__status__make_ams_abstract_imported_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 3433 "parse_tree.modules.c"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__2_2));
#line 3435 "parse_tree.modules.c"
    return parse_tree__modules__wrapper_arg_2;
#line 3437 "parse_tree.modules.c"
  }
#line 3439 "parse_tree.modules.c"
}

#line 3442 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho3_12_p_0_1(
#line 3445 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 3447 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 3449 "parse_tree.modules.c"
{
#line 3451 "parse_tree.modules.c"
  {
#line 3453 "parse_tree.modules.c"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 3455 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 3457 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__2_2;

#line 3460 "parse_tree.modules.c"
    {
#line 3462 "parse_tree.modules.c"
      parse_tree__modules__conv0_HeadVar__2_2 = parse_tree__status__make_ams_abstract_imported_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 3465 "parse_tree.modules.c"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__2_2));
#line 3467 "parse_tree.modules.c"
    return parse_tree__modules__wrapper_arg_2;
#line 3469 "parse_tree.modules.c"
  }
#line 3471 "parse_tree.modules.c"
}

#line 183 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho3_12_p_0(
#line 183 "modules.m"
  MR_Word parse_tree__modules__Globals_13,
#line 183 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_14,
#line 183 "modules.m"
  MR_Word parse_tree__modules__Imports_15,
#line 183 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_16,
#line 183 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 183 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 183 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 183 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28)
#line 183 "modules.m"
{
#line 1032 "modules.m"
  while (MR_TRUE)
#line 1032 "modules.m"
    {
#line 1032 "modules.m"
      /* tailcall optimized into a loop */
#line 1032 "modules.m"
      {
#line 1032 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 1032 "modules.m"
        MR_Word parse_tree__modules__IndirectImports_22;
#line 1032 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1032 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 1033 "modules.m"
        {
#line 1033 "modules.m"
          parse_tree__modules__process_module_short_interfaces_14_p_0(parse_tree__modules__Globals_13, parse_tree__modules__HaveReadModuleMaps_14, parse_tree__modules__Imports_15, parse_tree__modules__IntFileKind_16, (MR_Word) &parse_tree__modules_scalar_common_2[21], (MR_Word) &parse_tree__modules_scalar_common_2[22], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IndirectImports_22, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33);
        }
#line 1038 "modules.m"
        if ((parse_tree__modules__IndirectImports_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1037 "modules.m"
          {
#line 1037 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1037 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;
#line 1037 "modules.m"
          }
#line 1038 "modules.m"
        else
#line 1040 "modules.m"
          {
#line 1040 "modules.m"
            /* direct tailcall eliminated */
#line 1040 "modules.m"
            {
#line 1040 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_15 = parse_tree__modules__IndirectImports_22;
#line 1040 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1040 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 1040 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27;
#line 1040 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25;
#line 1040 "modules.m"
              parse_tree__modules__Imports_15 = parse_tree__modules__Imports__tmp_copy_15;
#line 1040 "modules.m"
            }
#line 1040 "modules.m"
            continue;
#line 1040 "modules.m"
          }
#line 1032 "modules.m"
      }
#line 1032 "modules.m"
      break;
#line 1032 "modules.m"
    }
#line 183 "modules.m"
}

#line 202 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho2_10_p_0(
#line 202 "modules.m"
  MR_Word parse_tree__modules__Globals_11,
#line 202 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_12,
#line 202 "modules.m"
  MR_Word parse_tree__modules__Imports_13,
#line 202 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_14,
#line 202 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22,
#line 202 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23)
#line 202 "modules.m"
{
#line 1017 "modules.m"
  while (MR_TRUE)
#line 1017 "modules.m"
    {
#line 1017 "modules.m"
      /* tailcall optimized into a loop */
#line 1017 "modules.m"
      {
#line 1017 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 1017 "modules.m"
        MR_Word parse_tree__modules__ImpIndirectImports_19;
#line 1017 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;

#line 1018 "modules.m"
        {
#line 1018 "modules.m"
          parse_tree__modules__process_module_short_interfaces_transitively__ho3_12_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_12, parse_tree__modules__Imports_13, parse_tree__modules__IntFileKind_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ImpIndirectImports_19, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27);
        }
#line 1023 "modules.m"
        if ((parse_tree__modules__ImpIndirectImports_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1022 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;
#line 1023 "modules.m"
        else
#line 1025 "modules.m"
          {
#line 1025 "modules.m"
            /* direct tailcall eliminated */
#line 1025 "modules.m"
            {
#line 1025 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_13 = parse_tree__modules__ImpIndirectImports_19;
#line 1025 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_22 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;

#line 1025 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_22;
#line 1025 "modules.m"
              parse_tree__modules__Imports_13 = parse_tree__modules__Imports__tmp_copy_13;
#line 1025 "modules.m"
            }
#line 1025 "modules.m"
            continue;
#line 1025 "modules.m"
          }
#line 1017 "modules.m"
      }
#line 1017 "modules.m"
      break;
#line 1017 "modules.m"
    }
#line 202 "modules.m"
}

#line 1536 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__generate_dependencies__1536__1_2_p_0(
#line 1536 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_102,
#line 1536 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_103)
#line 1536 "modules.m"
{
#line 1536 "modules.m"
  {
#line 1536 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1536 "modules.m"
    {
#line 1536 "modules.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__modules__HeadVar__1_102, parse_tree__modules__HeadVar__2_103);
#line 1536 "modules.m"
      return;
    }
#line 1536 "modules.m"
  }
#line 1536 "modules.m"
}

#line 1470 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__IntroducedFrom__func__build_deps_map__1470__1_1_f_0(
#line 1470 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_43)
#line 1470 "modules.m"
{
#line 1470 "modules.m"
  {
#line 1470 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__HeadVar__2_44;

#line 1470 "modules.m"
    {
#line 1470 "modules.m"
      return parse_tree__modules__HeadVar__2_44 = parse_tree__prog_item__compilation_unit_project_name_1_f_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0, parse_tree__modules__HeadVar__1_43);
    }
#line 1470 "modules.m"
    return parse_tree__modules__HeadVar__2_44;
#line 1470 "modules.m"
  }
#line 1470 "modules.m"
}

#line 778 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_2(
#line 778 "modules.m"
  void * parse_tree__modules__env_ptr_arg)
#line 778 "modules.m"
{
#line 778 "modules.m"
  {
#line 778 "modules.m"
    struct parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0_s * parse_tree__modules__env_ptr = (struct parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0_s *) parse_tree__modules__env_ptr_arg;

#line 778 "modules.m"
    *((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__HeadVar__4_22) = ((MR_Word) (parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__conv0_HeadVar__4_22);
#line 778 "modules.m"
    {
#line 778 "modules.m"
      parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_1(parse_tree__modules__env_ptr);
#line 778 "modules.m"
      return;
    }
#line 778 "modules.m"
  }
#line 778 "modules.m"
}

#line 777 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_1(
#line 777 "modules.m"
  void * parse_tree__modules__env_ptr_arg)
#line 777 "modules.m"
{
#line 777 "modules.m"
  {
#line 777 "modules.m"
    struct parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0_s * parse_tree__modules__env_ptr = (struct parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0_s *) parse_tree__modules__env_ptr_arg;

#line 779 "modules.m"
    {
#line 779 "modules.m"
      (parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__TypeCtorInfo_50_50, ((MR_Box) (*((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__HeadVar__4_22))), (parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__ImportedModules_11);
    }
#line 780 "modules.m"
    if (!((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__succeeded))
#line 780 "modules.m"
      {
#line 780 "modules.m"
        (parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__TypeCtorInfo_50_50, ((MR_Box) (*((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__HeadVar__4_22))), (parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__UsedModules_12);
      }
#line 780 "modules.m"
    if ((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__succeeded)
#line 780 "modules.m"
      {
#line 780 "modules.m"
        ((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__cont)((parse_tree__modules__env_ptr)->parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__cont_env_ptr);
#line 780 "modules.m"
        return;
      }
#line 777 "modules.m"
  }
#line 777 "modules.m"
}

#line 777 "modules.m"
static void MR_CALL 
parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0(
#line 777 "modules.m"
  MR_Word parse_tree__modules__AncestorModules_10,
#line 777 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_11,
#line 777 "modules.m"
  MR_Word parse_tree__modules__UsedModules_12,
#line 777 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__4_22,
#line 777 "modules.m"
  MR_Cont parse_tree__modules__cont,
#line 777 "modules.m"
  void * parse_tree__modules__cont_env_ptr)
#line 777 "modules.m"
{
#line 777 "modules.m"
  {
#line 777 "modules.m"
    struct parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0_s parse_tree__modules__env;

#line 777 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__ImportedModules_11 = parse_tree__modules__ImportedModules_11;
#line 777 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__UsedModules_12 = parse_tree__modules__UsedModules_12;
#line 777 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__HeadVar__4_22 = parse_tree__modules__HeadVar__4_22;
#line 777 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__cont = parse_tree__modules__cont;
#line 777 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__cont_env_ptr = parse_tree__modules__cont_env_ptr;
#line 3784 "parse_tree.modules.c"
    (parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__TypeCtorInfo_50_50 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 778 "modules.m"
    {
#line 778 "modules.m"
      mercury__list__member_2_p_1((parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__TypeCtorInfo_50_50, &(parse_tree__modules__env).parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_env_0__conv0_HeadVar__4_22, parse_tree__modules__AncestorModules_10, parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0_2, &parse_tree__modules__env);
    }
#line 777 "modules.m"
  }
#line 777 "modules.m"
}

#line 902 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__902__1_2_p_0(
#line 902 "modules.m"
  MR_Word parse_tree__modules__Ancestor_32,
#line 902 "modules.m"
  MR_Word parse_tree__modules__ModuleName_40)
#line 902 "modules.m"
{
#line 902 "modules.m"
  {
#line 902 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 902 "modules.m"
    {
#line 902 "modules.m"
      return parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__Ancestor_32, parse_tree__modules__ModuleName_40);
    }
#line 902 "modules.m"
    return parse_tree__modules__succeeded;
#line 902 "modules.m"
  }
#line 902 "modules.m"
}

#line 1197 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0(
#line 1197 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1197 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1197 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1197 "modules.m"
{
#line 1197 "modules.m"
  {
#line 1197 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1197 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 1197 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 1197 "modules.m"
    {
#line 1197 "modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__modules_scalar_common_2[2], parse_tree__modules__HeadVar__1_1, ((MR_Box) (parse_tree__modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_5)));
#line 1197 "modules.m"
      return;
    }
#line 1197 "modules.m"
  }
#line 1197 "modules.m"
}

#line 1197 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0(
#line 1197 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1197 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1197 "modules.m"
{
#line 1197 "modules.m"
  {
#line 1197 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1197 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 1197 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 1197 "modules.m"
    {
#line 1197 "modules.m"
      return parse_tree__modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__modules_scalar_common_2[2], ((MR_Box) (parse_tree__modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_4)));
    }
#line 1197 "modules.m"
    return parse_tree__modules__succeeded;
#line 1197 "modules.m"
  }
#line 1197 "modules.m"
}

#line 1209 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0(
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1209 "modules.m"
{
#line 1209 "modules.m"
  {
#line 1209 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1209 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 1209 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 1209 "modules.m"
    {
#line 1209 "modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__modules_scalar_common_2[1], parse_tree__modules__HeadVar__1_1, ((MR_Box) (parse_tree__modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_5)));
#line 1209 "modules.m"
      return;
    }
#line 1209 "modules.m"
  }
#line 1209 "modules.m"
}

#line 1209 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0(
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1209 "modules.m"
{
#line 1209 "modules.m"
  {
#line 1209 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1209 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 1209 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 1209 "modules.m"
    {
#line 1209 "modules.m"
      return parse_tree__modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__modules_scalar_common_2[1], ((MR_Box) (parse_tree__modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_4)));
    }
#line 1209 "modules.m"
    return parse_tree__modules__succeeded;
#line 1209 "modules.m"
  }
#line 1209 "modules.m"
}

#line 1203 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0(
#line 1203 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1203 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1203 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1203 "modules.m"
{
#line 1203 "modules.m"
  {
#line 1203 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1203 "modules.m"
    MR_Integer parse_tree__modules__CastX_9 = (MR_Integer) parse_tree__modules__HeadVar__2_2;
#line 1203 "modules.m"
    MR_Integer parse_tree__modules__CastY_10 = (MR_Integer) parse_tree__modules__HeadVar__3_3;

#line 1203 "modules.m"
    parse_tree__modules__succeeded = (parse_tree__modules__CastX_9 == parse_tree__modules__CastY_10);
#line 1203 "modules.m"
    if (parse_tree__modules__succeeded)
#line 3970 "parse_tree.modules.c"
      *parse_tree__modules__HeadVar__1_1 = (MR_Integer) 0;
#line 1203 "modules.m"
    else
#line 1203 "modules.m"
      {
#line 1203 "modules.m"
        MR_Word parse_tree__modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 0)));
#line 1203 "modules.m"
        MR_Word parse_tree__modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 1)));
#line 1203 "modules.m"
        MR_Word parse_tree__modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__3_3, (MR_Integer) 0)));
#line 1203 "modules.m"
        MR_Word parse_tree__modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__3_3, (MR_Integer) 1)));
#line 1203 "modules.m"
        MR_Word parse_tree__modules__V_8_8;
#line 1203 "modules.m"
        MR_Integer parse_tree__modules__V_13_13 = (MR_Integer) parse_tree__modules__V_4_4;
#line 1203 "modules.m"
        MR_Integer parse_tree__modules__V_14_14 = (MR_Integer) parse_tree__modules__V_6_6;

#line 1203 "modules.m"
        {
#line 1203 "modules.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__modules__V_8_8, parse_tree__modules__V_13_13, parse_tree__modules__V_14_14);
        }
#line 3996 "parse_tree.modules.c"
        parse_tree__modules__succeeded = (parse_tree__modules__V_8_8 == (MR_Integer) 0);
#line 1203 "modules.m"
        parse_tree__modules__succeeded = !(parse_tree__modules__succeeded);
#line 1203 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1203 "modules.m"
          *parse_tree__modules__HeadVar__1_1 = parse_tree__modules__V_8_8;
#line 1203 "modules.m"
        else
#line 1203 "modules.m"
          {
#line 1203 "modules.m"
            mercury__term____Compare____context_0_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__V_5_5, parse_tree__modules__V_7_7);
#line 1203 "modules.m"
            return;
          }
#line 1203 "modules.m"
      }
#line 1203 "modules.m"
  }
#line 1203 "modules.m"
}

#line 1203 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0(
#line 1203 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1203 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1203 "modules.m"
{
#line 1203 "modules.m"
  {
#line 1203 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1203 "modules.m"
    MR_Integer parse_tree__modules__CastX_7 = (MR_Integer) parse_tree__modules__HeadVar__1_1;
#line 1203 "modules.m"
    MR_Integer parse_tree__modules__CastY_8 = (MR_Integer) parse_tree__modules__HeadVar__2_2;

#line 1203 "modules.m"
    parse_tree__modules__succeeded = (parse_tree__modules__CastX_7 == parse_tree__modules__CastY_8);
#line 1203 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1203 "modules.m"
      parse_tree__modules__succeeded = MR_TRUE;
#line 1203 "modules.m"
    else
#line 1203 "modules.m"
      {
#line 1203 "modules.m"
        MR_Word parse_tree__modules__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1203 "modules.m"
        MR_Word parse_tree__modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1203 "modules.m"
        MR_Word parse_tree__modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 0)));
#line 1203 "modules.m"
        MR_Word parse_tree__modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 1)));

#line 4057 "parse_tree.modules.c"
        parse_tree__modules__succeeded = (parse_tree__modules__V_3_3 == parse_tree__modules__V_5_5);
#line 1203 "modules.m"
        if (parse_tree__modules__succeeded)
#line 4061 "parse_tree.modules.c"
          {
#line 4063 "parse_tree.modules.c"
            return parse_tree__modules__succeeded = mercury__term____Unify____context_0_0(parse_tree__modules__V_4_4, parse_tree__modules__V_6_6);
          }
#line 1203 "modules.m"
      }
#line 1203 "modules.m"
    return parse_tree__modules__succeeded;
#line 1203 "modules.m"
  }
#line 1203 "modules.m"
}

#line 1199 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_0_0(
#line 1199 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1199 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1199 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1199 "modules.m"
{
#line 1199 "modules.m"
  {
#line 1199 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1199 "modules.m"
    MR_Integer parse_tree__modules__Cast_HeadVar1_4 = (MR_Integer) parse_tree__modules__HeadVar__2_2;
#line 1199 "modules.m"
    MR_Integer parse_tree__modules__Cast_HeadVar2_5 = (MR_Integer) parse_tree__modules__HeadVar__3_3;

#line 1199 "modules.m"
    {
#line 1199 "modules.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__Cast_HeadVar1_4, parse_tree__modules__Cast_HeadVar2_5);
#line 1199 "modules.m"
      return;
    }
#line 1199 "modules.m"
  }
#line 1199 "modules.m"
}

#line 1199 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_0_0(
#line 1199 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_1,
#line 1199 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1199 "modules.m"
{
#line 4116 "parse_tree.modules.c"
  {
#line 4118 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded = (parse_tree__modules__HeadVar__2_1 == parse_tree__modules__HeadVar__2_2);

#line 4121 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 4123 "parse_tree.modules.c"
  }
#line 1199 "modules.m"
}

#line 1479 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____generate_dependencies_mode_0_0(
#line 1479 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1479 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1479 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1479 "modules.m"
{
#line 1479 "modules.m"
  {
#line 1479 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1479 "modules.m"
    MR_Integer parse_tree__modules__Cast_HeadVar1_4 = (MR_Integer) parse_tree__modules__HeadVar__2_2;
#line 1479 "modules.m"
    MR_Integer parse_tree__modules__Cast_HeadVar2_5 = (MR_Integer) parse_tree__modules__HeadVar__3_3;

#line 1479 "modules.m"
    {
#line 1479 "modules.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__Cast_HeadVar1_4, parse_tree__modules__Cast_HeadVar2_5);
#line 1479 "modules.m"
      return;
    }
#line 1479 "modules.m"
  }
#line 1479 "modules.m"
}

#line 1479 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____generate_dependencies_mode_0_0(
#line 1479 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_1,
#line 1479 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1479 "modules.m"
{
#line 4169 "parse_tree.modules.c"
  {
#line 4171 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded = (parse_tree__modules__HeadVar__2_1 == parse_tree__modules__HeadVar__2_2);

#line 4174 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 4176 "parse_tree.modules.c"
  }
#line 1479 "modules.m"
}

#line 126 "modules.m"
void MR_CALL 
parse_tree__modules____Compare____aug_section_maker_0_0(
#line 126 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 126 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 126 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 126 "modules.m"
{
#line 126 "modules.m"
  {
#line 126 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 126 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 126 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 126 "modules.m"
    {
#line 126 "modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__modules_scalar_common_3[0], parse_tree__modules__HeadVar__1_1, ((MR_Box) (parse_tree__modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_5)));
#line 126 "modules.m"
      return;
    }
#line 126 "modules.m"
  }
#line 126 "modules.m"
}

#line 126 "modules.m"
MR_bool MR_CALL 
parse_tree__modules____Unify____aug_section_maker_0_0(
#line 126 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 126 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 126 "modules.m"
{
#line 126 "modules.m"
  {
#line 126 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 126 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 126 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 126 "modules.m"
    {
#line 126 "modules.m"
      return parse_tree__modules__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__modules__Cast_HeadVar1_3, (MR_Word) parse_tree__modules__Cast_HeadVar2_4);
    }
#line 126 "modules.m"
    return parse_tree__modules__succeeded;
#line 126 "modules.m"
  }
#line 126 "modules.m"
}

#line 1624 "modules.m"
static void MR_CALL 
parse_tree__modules__get_included_modules_in_items_3_p_0(
#line 1624 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1624 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2,
#line 1624 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_3)
#line 1624 "modules.m"
{
#line 1627 "modules.m"
  while (MR_TRUE)
#line 1627 "modules.m"
    {
#line 1627 "modules.m"
      /* tailcall optimized into a loop */
#line 1627 "modules.m"
      {
#line 1627 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1627 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1627 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_3 = parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2;
#line 1627 "modules.m"
        else
#line 1628 "modules.m"
          {
#line 1628 "modules.m"
            MR_Word parse_tree__modules__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1628 "modules.m"
            MR_Word parse_tree__modules__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1628 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_17_17;
#line 1636 "modules.m"
            MR_Word parse_tree__modules__ModuleName_14;
#line 1630 "modules.m"
            MR_Word parse_tree__modules__ItemModuleDefn_10;
#line 1630 "modules.m"
            MR_Word parse_tree__modules__ModuleDefn_11;
#line 1631 "modules.m"
            MR_Word parse_tree__modules__V_12_12;
#line 1631 "modules.m"
            MR_Integer parse_tree__modules__V_13_13;

#line 1630 "modules.m"
            parse_tree__modules__succeeded = ((MR_tag((MR_Word) parse_tree__modules__Item_7)) == (MR_mktag((MR_Integer) 0)));
#line 1630 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1630 "modules.m"
              {
#line 1630 "modules.m"
                parse_tree__modules__ItemModuleDefn_10 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_7), (MR_Integer) 0);
#line 1631 "modules.m"
                parse_tree__modules__ModuleDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_10, (MR_Integer) 0)));
#line 1631 "modules.m"
                parse_tree__modules__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_10, (MR_Integer) 1)));
#line 1631 "modules.m"
                parse_tree__modules__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_10, (MR_Integer) 2)));
#line 1632 "modules.m"
                parse_tree__modules__succeeded = ((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_11)) == (MR_mktag((MR_Integer) 0)));
#line 1632 "modules.m"
                if (parse_tree__modules__succeeded)
#line 1632 "modules.m"
                  parse_tree__modules__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleDefn_11, (MR_Integer) 0)));
#line 1630 "modules.m"
              }
#line 1636 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1634 "modules.m"
              {
#line 1634 "modules.m"
                {
#line 1634 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_17_17 = mercury__cord__snoc_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2, ((MR_Box) (parse_tree__modules__ModuleName_14)));
                }
#line 1634 "modules.m"
              }
#line 1636 "modules.m"
            else
#line 1636 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_17_17 = parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2;
#line 1639 "modules.m"
            /* direct tailcall eliminated */
#line 1639 "modules.m"
            {
#line 1639 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__Items_8;
#line 1639 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0__tmp_copy_2 = parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_17_17;

#line 1639 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2 = parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0__tmp_copy_2;
#line 1639 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1639 "modules.m"
            }
#line 1639 "modules.m"
            continue;
#line 1628 "modules.m"
          }
#line 1627 "modules.m"
      }
#line 1627 "modules.m"
      break;
#line 1627 "modules.m"
    }
#line 1624 "modules.m"
}

#line 1536 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_dependencies_7_p_0_1(
#line 1536 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1536 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1536 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2)
#line 1536 "modules.m"
{
#line 1536 "modules.m"
  {
#line 1536 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1536 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__2_103;

#line 1536 "modules.m"
    {
#line 1536 "modules.m"
      parse_tree__modules__IntroducedFrom__pred__generate_dependencies__1536__1_2_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv1_HeadVar__2_103);
    }
#line 1536 "modules.m"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__2_103));
#line 1536 "modules.m"
  }
#line 1536 "modules.m"
}

#line 1483 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_dependencies_7_p_0(
#line 1483 "modules.m"
  MR_Word parse_tree__modules__Globals_8,
#line 1483 "modules.m"
  MR_Word parse_tree__modules__Mode_9,
#line 1483 "modules.m"
  MR_Word parse_tree__modules__Search_10,
#line 1483 "modules.m"
  MR_Word parse_tree__modules__ModuleName_11,
#line 1483 "modules.m"
  MR_Word parse_tree__modules__DepsMap0_12)
#line 1483 "modules.m"
{
#line 1486 "modules.m"
  {
#line 1486 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1486 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_99_99;
#line 1486 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_100_100;
#line 1486 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_101_101;
#line 1486 "modules.m"
    MR_Word parse_tree__modules__DepsMap_14;
#line 1486 "modules.m"
    MR_Word parse_tree__modules__ModuleDep_15;
#line 1486 "modules.m"
    MR_Word parse_tree__modules__ModuleImports_17;
#line 1486 "modules.m"
    MR_Word parse_tree__modules__Errors_18;
#line 1486 "modules.m"
    MR_Word parse_tree__modules__FatalErrors_19;
#line 1486 "modules.m"
    MR_Word parse_tree__modules__Target_39;
#line 1486 "modules.m"
    MR_Word parse_tree__modules__V_44_44;
#line 1491 "modules.m"
    MR_Box parse_tree__modules__conv0_ModuleDep_15;
#line 1492 "modules.m"
    MR_Word parse_tree__modules__V_16_16;
#line 1493 "modules.m"
    MR_String parse_tree__modules__V_78_78;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_79_79;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_80_80;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_81_81;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_82_82;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_83_83;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_84_84;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_85_85;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_86_86;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_87_87;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_88_88;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_89_89;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_90_90;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_91_91;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_92_92;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_93_93;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_94_94;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_95_95;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_96_96;
#line 1493 "modules.m"
    MR_Word parse_tree__modules__V_97_97;
#line 1493 "modules.m"
    MR_String parse_tree__modules__V_98_98;

#line 1488 "modules.m"
    {
#line 1488 "modules.m"
      parse_tree__deps_map__generate_deps_map_7_p_0(parse_tree__modules__Globals_8, parse_tree__modules__ModuleName_11, parse_tree__modules__Search_10, parse_tree__modules__DepsMap0_12, &parse_tree__modules__DepsMap_14);
    }
#line 4476 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_99_99 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 4478 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0;
#line 1491 "modules.m"
    {
#line 1491 "modules.m"
      mercury__map__lookup_3_p_0(parse_tree__modules__TypeCtorInfo_99_99, parse_tree__modules__TypeCtorInfo_100_100, parse_tree__modules__DepsMap_14, ((MR_Box) (parse_tree__modules__ModuleName_11)), &parse_tree__modules__conv0_ModuleDep_15);
    }
#line 1491 "modules.m"
    parse_tree__modules__ModuleDep_15 = ((MR_Word) parse_tree__modules__conv0_ModuleDep_15);
#line 1492 "modules.m"
    parse_tree__modules__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleDep_15, (MR_Integer) 0)));
#line 1492 "modules.m"
    parse_tree__modules__ModuleImports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleDep_15, (MR_Integer) 1)));
#line 1493 "modules.m"
    parse_tree__modules__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 0)));
#line 1493 "modules.m"
    parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 1)));
#line 1493 "modules.m"
    parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 2)));
#line 1493 "modules.m"
    parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 3)));
#line 1493 "modules.m"
    parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 4)));
#line 1493 "modules.m"
    parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 5)));
#line 1493 "modules.m"
    parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 6)));
#line 1493 "modules.m"
    parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 7)));
#line 1493 "modules.m"
    parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 8)));
#line 1493 "modules.m"
    parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 9)));
#line 1493 "modules.m"
    parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 10)));
#line 1493 "modules.m"
    parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 11)));
#line 1493 "modules.m"
    parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 12)));
#line 1493 "modules.m"
    parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 13)));
#line 1493 "modules.m"
    parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 14)));
#line 1493 "modules.m"
    parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 15)));
#line 1493 "modules.m"
    parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 16)));
#line 1493 "modules.m"
    parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 17)));
#line 1493 "modules.m"
    parse_tree__modules__Errors_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 18)));
#line 1493 "modules.m"
    parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 19)));
#line 1493 "modules.m"
    parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 20)));
#line 1493 "modules.m"
    parse_tree__modules__V_98_98 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleImports_17, (MR_Integer) 21)));
#line 1494 "modules.m"
    {
#line 1494 "modules.m"
      parse_tree__modules__V_44_44 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
    }
#line 4540 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_101_101 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1494 "modules.m"
    {
#line 1494 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_101_101, parse_tree__modules__Errors_18, parse_tree__modules__V_44_44, &parse_tree__modules__FatalErrors_19);
    }
#line 1495 "modules.m"
    {
#line 1495 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__modules__TypeCtorInfo_101_101, parse_tree__modules__FatalErrors_19);
    }
#line 1505 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1496 "modules.m"
      {
#line 1496 "modules.m"
        MR_String parse_tree__modules__ModuleString_20;
#line 1496 "modules.m"
        MR_String parse_tree__modules__Message_21;

#line 1496 "modules.m"
        {
#line 1496 "modules.m"
          parse_tree__modules__ModuleString_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__modules__ModuleName_11);
        }
#line 1497 "modules.m"
        {
#line 1497 "modules.m"
          parse_tree__modules__succeeded = mercury__set__contains_2_p_0(parse_tree__modules__TypeCtorInfo_101_101, parse_tree__modules__FatalErrors_19, ((MR_Box) ((MR_Integer) 0)));
        }
#line 1500 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1498 "modules.m"
          {
#line 1498 "modules.m"
            MR_Word parse_tree__modules__V_46_46;
#line 1498 "modules.m"
            MR_Word parse_tree__modules__V_48_48;

#line 1499 "modules.m"
            {
#line 1499 "modules.m"
              parse_tree__modules__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1499 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_48_48, 0) = ((MR_Box) (parse_tree__modules__ModuleString_20));
#line 1499 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[93])));
#line 1499 "modules.m"
            }
#line 1498 "modules.m"
            {
#line 1498 "modules.m"
              parse_tree__modules__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_46_46, 0) = ((MR_Box) ((MR_String) "cannot read source file for module \140"));
#line 1498 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_46_46, 1) = ((MR_Box) (parse_tree__modules__V_48_48));
#line 1498 "modules.m"
            }
#line 1498 "modules.m"
            {
#line 1498 "modules.m"
              mercury__string__append_list_2_p_0(parse_tree__modules__V_46_46, &parse_tree__modules__Message_21);
            }
#line 1498 "modules.m"
          }
#line 1500 "modules.m"
        else
#line 1501 "modules.m"
          {
#line 1501 "modules.m"
            MR_Word parse_tree__modules__V_52_52;
#line 1501 "modules.m"
            MR_Word parse_tree__modules__V_54_54;

#line 1502 "modules.m"
            {
#line 1502 "modules.m"
              parse_tree__modules__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1502 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_54_54, 0) = ((MR_Box) (parse_tree__modules__ModuleString_20));
#line 1502 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[93])));
#line 1502 "modules.m"
            }
#line 1501 "modules.m"
            {
#line 1501 "modules.m"
              parse_tree__modules__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1501 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_52_52, 0) = ((MR_Box) ((MR_String) "cannot parse source file for module \140"));
#line 1501 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_52_52, 1) = ((MR_Box) (parse_tree__modules__V_54_54));
#line 1501 "modules.m"
            }
#line 1501 "modules.m"
            {
#line 1501 "modules.m"
              mercury__string__append_list_2_p_0(parse_tree__modules__V_52_52, &parse_tree__modules__Message_21);
            }
#line 1501 "modules.m"
          }
#line 1504 "modules.m"
        {
#line 1504 "modules.m"
          libs__file_util__report_error_3_p_0(parse_tree__modules__Message_21);
        }
#line 1496 "modules.m"
      }
#line 1505 "modules.m"
    else
#line 1516 "modules.m"
      {
#line 1516 "modules.m"
        MR_Word parse_tree__modules__IntDepsGraph0_23;
#line 1516 "modules.m"
        MR_Word parse_tree__modules__ImpDepsGraph0_24;
#line 1516 "modules.m"
        MR_Word parse_tree__modules__DepsList_25;
#line 1516 "modules.m"
        MR_Word parse_tree__modules__IntDepsGraph_26;
#line 1516 "modules.m"
        MR_Word parse_tree__modules__ImpDepsGraph_27;
#line 1516 "modules.m"
        MR_Word parse_tree__modules__ImpDepsOrdering0_28;
#line 1516 "modules.m"
        MR_Word parse_tree__modules__ImpDepsOrdering_29;
#line 1516 "modules.m"
        MR_Word parse_tree__modules__TransOptDepsOrdering0_30;
#line 1516 "modules.m"
        MR_Word parse_tree__modules__IntermodDirs_31;
#line 1516 "modules.m"
        MR_Word parse_tree__modules__TransOptDepsOrdering_32;
#line 1516 "modules.m"
        MR_Word parse_tree__modules__TransImpDepsGraph_35;
#line 1516 "modules.m"
        MR_Word parse_tree__modules__IndirectDepsGraph_36;
#line 1516 "modules.m"
        MR_Word parse_tree__modules__IndirectOptDepsGraph_37;
#line 1516 "modules.m"
        MR_Word parse_tree__modules__DFilesToWrite_38;

#line 1521 "modules.m"
        {
#line 1521 "modules.m"
          mercury__digraph__init_1_p_0(parse_tree__modules__TypeCtorInfo_99_99, &parse_tree__modules__IntDepsGraph0_23);
        }
#line 1522 "modules.m"
        {
#line 1522 "modules.m"
          mercury__digraph__init_1_p_0(parse_tree__modules__TypeCtorInfo_99_99, &parse_tree__modules__ImpDepsGraph0_24);
        }
#line 1523 "modules.m"
        {
#line 1523 "modules.m"
          mercury__map__values_2_p_0(parse_tree__modules__TypeCtorInfo_99_99, parse_tree__modules__TypeCtorInfo_100_100, parse_tree__modules__DepsMap_14, &parse_tree__modules__DepsList_25);
        }
#line 1524 "modules.m"
        {
#line 1524 "modules.m"
          parse_tree__module_deps_graph__deps_list_to_deps_graph_6_p_0(parse_tree__modules__DepsList_25, parse_tree__modules__DepsMap_14, parse_tree__modules__IntDepsGraph0_23, &parse_tree__modules__IntDepsGraph_26, parse_tree__modules__ImpDepsGraph0_24, &parse_tree__modules__ImpDepsGraph_27);
        }
#line 1534 "modules.m"
        {
#line 1534 "modules.m"
          mercury__digraph__atsort_2_p_0(parse_tree__modules__TypeCtorInfo_99_99, parse_tree__modules__ImpDepsGraph_27, &parse_tree__modules__ImpDepsOrdering0_28);
        }
#line 1536 "modules.m"
        {
#line 1536 "modules.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__modules_scalar_common_1[12], (MR_Word) &parse_tree__modules_scalar_common_1[13], (MR_Word) &parse_tree__modules_scalar_common_2[20], parse_tree__modules__ImpDepsOrdering0_28, &parse_tree__modules__ImpDepsOrdering_29);
        }
#line 1537 "modules.m"
        {
#line 1537 "modules.m"
          mercury__list__condense_2_p_0(parse_tree__modules__TypeCtorInfo_99_99, parse_tree__modules__ImpDepsOrdering_29, &parse_tree__modules__TransOptDepsOrdering0_30);
        }
#line 1538 "modules.m"
        {
#line 1538 "modules.m"
          libs__globals__lookup_accumulating_option_3_p_0(parse_tree__modules__Globals_8, (MR_Integer) 650, &parse_tree__modules__IntermodDirs_31);
        }
#line 1558 "modules.m"
        {
#line 1558 "modules.m"
          mercury__digraph__tc_2_p_0(parse_tree__modules__TypeCtorInfo_99_99, parse_tree__modules__ImpDepsGraph_27, &parse_tree__modules__TransImpDepsGraph_35);
        }
#line 1559 "modules.m"
        {
#line 1559 "modules.m"
          mercury__digraph__compose_3_p_0(parse_tree__modules__TypeCtorInfo_99_99, parse_tree__modules__ImpDepsGraph_27, parse_tree__modules__TransImpDepsGraph_35, &parse_tree__modules__IndirectDepsGraph_36);
        }
#line 1570 "modules.m"
        {
#line 1570 "modules.m"
          mercury__digraph__tc_2_p_0(parse_tree__modules__TypeCtorInfo_99_99, parse_tree__modules__ImpDepsGraph_27, &parse_tree__modules__IndirectOptDepsGraph_37);
        }
#line 4738 "parse_tree.modules.c"
#line 4739 "parse_tree.modules.c"
        switch (parse_tree__modules__Mode_9) {
#line 4741 "parse_tree.modules.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 4743 "parse_tree.modules.c"
          case (MR_Integer) 1:
#line 4745 "parse_tree.modules.c"
            {
#line 4747 "parse_tree.modules.c"
              MR_String parse_tree__modules__SourceFileName_22;

#line 1510 "modules.m"
              {
#line 1510 "modules.m"
                parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(parse_tree__modules__ModuleImports_17, &parse_tree__modules__SourceFileName_22);
              }
#line 1512 "modules.m"
              {
#line 1512 "modules.m"
                parse_tree__write_deps_file__generate_dependencies_write_dv_file_6_p_0(parse_tree__modules__Globals_8, parse_tree__modules__SourceFileName_22, parse_tree__modules__ModuleName_11, parse_tree__modules__DepsMap_14);
              }
#line 1514 "modules.m"
              {
#line 1514 "modules.m"
                parse_tree__write_deps_file__generate_dependencies_write_dep_file_6_p_0(parse_tree__modules__Globals_8, parse_tree__modules__SourceFileName_22, parse_tree__modules__ModuleName_11, parse_tree__modules__DepsMap_14);
              }
#line 1577 "modules.m"
              parse_tree__modules__DFilesToWrite_38 = parse_tree__modules__DepsList_25;
#line 4767 "parse_tree.modules.c"
            }
#line 4769 "parse_tree.modules.c"
            break;
#line 4771 "parse_tree.modules.c"
          case (MR_Integer) 0:
#line 4773 "parse_tree.modules.c"
            {
#line 1574 "modules.m"
              {
#line 1574 "modules.m"
                parse_tree__modules__DFilesToWrite_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "modules.m"
                MR_hl_field(MR_mktag(1), parse_tree__modules__DFilesToWrite_38, 0) = ((MR_Box) (parse_tree__modules__ModuleDep_15));
#line 1574 "modules.m"
                MR_hl_field(MR_mktag(1), parse_tree__modules__DFilesToWrite_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1574 "modules.m"
              }
#line 4785 "parse_tree.modules.c"
            }
#line 4787 "parse_tree.modules.c"
            break;
#line 4789 "parse_tree.modules.c"
        }
#line 1526 "modules.m"
        {
#line 1526 "modules.m"
          parse_tree__module_deps_graph__maybe_output_imports_graph_6_p_0(parse_tree__modules__Globals_8, parse_tree__modules__ModuleName_11, parse_tree__modules__IntDepsGraph_26, parse_tree__modules__ImpDepsGraph_27);
        }
#line 1535 "modules.m"
        {
#line 1535 "modules.m"
          parse_tree__write_deps_file__maybe_output_module_order_5_p_0(parse_tree__modules__Globals_8, parse_tree__modules__ModuleName_11, parse_tree__modules__ImpDepsOrdering0_28);
        }
#line 1540 "modules.m"
        {
#line 1540 "modules.m"
          parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__modules__Globals_8, (MR_Integer) 1, parse_tree__modules__TransOptDepsOrdering0_30, parse_tree__modules__IntermodDirs_31, (MR_String) ".trans_opt", &parse_tree__modules__TransOptDepsOrdering_32);
        }
#line 1579 "modules.m"
        {
#line 1579 "modules.m"
          parse_tree__write_deps_file__generate_dependencies_write_d_files_10_p_0(parse_tree__modules__Globals_8, parse_tree__modules__DFilesToWrite_38, parse_tree__modules__IntDepsGraph_26, parse_tree__modules__ImpDepsGraph_27, parse_tree__modules__IndirectDepsGraph_36, parse_tree__modules__IndirectOptDepsGraph_37, parse_tree__modules__TransOptDepsOrdering_32, parse_tree__modules__DepsMap_14);
        }
#line 1516 "modules.m"
      }
#line 1591 "modules.m"
    {
#line 1591 "modules.m"
      libs__globals__get_target_2_p_0(parse_tree__modules__Globals_8, &parse_tree__modules__Target_39);
    }
#line 1593 "modules.m"
    parse_tree__modules__succeeded = (parse_tree__modules__Target_39 == (MR_Integer) 3);
#line 1593 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1594 "modules.m"
      parse_tree__modules__succeeded = (parse_tree__modules__Mode_9 == (MR_Integer) 1);
#line 1597 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1596 "modules.m"
      {
#line 1596 "modules.m"
        MR_Word parse_tree__modules___Succeeded_40;

#line 1596 "modules.m"
        {
#line 1596 "modules.m"
          parse_tree__module_cmds__create_java_shell_script_5_p_0(parse_tree__modules__Globals_8, parse_tree__modules__ModuleName_11, &parse_tree__modules___Succeeded_40);
        }
#line 1596 "modules.m"
      }
#line 1597 "modules.m"
    else
#line 1597 "modules.m"
      {
#line 1597 "modules.m"
      }
#line 1486 "modules.m"
  }
#line 1483 "modules.m"
}

#line 1368 "modules.m"
static void MR_CALL 
parse_tree__modules__report_inaccessible_module_error_6_p_0(
#line 1368 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1368 "modules.m"
  MR_Word parse_tree__modules__ParentModule_8,
#line 1368 "modules.m"
  MR_String parse_tree__modules__SubModule_9,
#line 1368 "modules.m"
  MR_Word parse_tree__modules__ImportOrUseContext_10,
#line 1368 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1368 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20)
#line 1368 "modules.m"
{
#line 1384 "modules.m"
  {
#line 1384 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__ImportOrUse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportOrUseContext_10, (MR_Integer) 0)));
#line 1384 "modules.m"
    MR_Word parse_tree__modules__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportOrUseContext_10, (MR_Integer) 1)));
#line 1384 "modules.m"
    MR_String parse_tree__modules__DeclName_14;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__MainPieces_15;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__VerbosePieces_16;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__Msg_17;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__Spec_18;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_23_23;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_24_24;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_25_25;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_28_28;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_30_30;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_33_33;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_34_34;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_35_35;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_38_38;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_40_40;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_43_43;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_44_44;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_45_45;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_54_54;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_57_57;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_60_60;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_63_63;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_66_66;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_67_67;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_68_68;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_71_71;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_74_74;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_76_76;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_79_79;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_82_82;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_85_85;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_86_86;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_93_93;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_94_94;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_95_95;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_96_96;
#line 1384 "modules.m"
    MR_Word parse_tree__modules__V_101_101;

#line 1387 "modules.m"
#line 1387 "modules.m"
    switch (parse_tree__modules__ImportOrUse_12) {
#line 1387 "modules.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1387 "modules.m"
      case (MR_Integer) 0:
#line 1386 "modules.m"
        parse_tree__modules__DeclName_14 = (MR_String) "import_module";
#line 1387 "modules.m"
        break;
#line 1387 "modules.m"
      case (MR_Integer) 1:
#line 1387 "modules.m"
        parse_tree__modules__DeclName_14 = (MR_String) "use_module";
#line 1387 "modules.m"
        break;
#line 1387 "modules.m"
    }
#line 1389 "modules.m"
    {
#line 1389 "modules.m"
      parse_tree__modules__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1389 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_24_24, 1) = ((MR_Box) (parse_tree__modules__ModuleName_7));
#line 1389 "modules.m"
    }
#line 1390 "modules.m"
    {
#line 1390 "modules.m"
      parse_tree__modules__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1390 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_34_34, 1) = ((MR_Box) (parse_tree__modules__DeclName_14));
#line 1390 "modules.m"
    }
#line 1391 "modules.m"
    {
#line 1391 "modules.m"
      parse_tree__modules__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_45_45, 0) = ((MR_Box) (parse_tree__modules__ParentModule_8));
#line 1391 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_45_45, 1) = ((MR_Box) (parse_tree__modules__SubModule_9));
#line 1391 "modules.m"
    }
#line 1391 "modules.m"
    {
#line 1391 "modules.m"
      parse_tree__modules__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1391 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_44_44, 1) = ((MR_Box) (parse_tree__modules__V_45_45));
#line 1391 "modules.m"
    }
#line 1391 "modules.m"
    {
#line 1391 "modules.m"
      parse_tree__modules__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 0) = ((MR_Box) (parse_tree__modules__V_44_44));
#line 1391 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[65])));
#line 1391 "modules.m"
    }
#line 1391 "modules.m"
    {
#line 1391 "modules.m"
      parse_tree__modules__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[82])));
#line 1391 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 1) = ((MR_Box) (parse_tree__modules__V_43_43));
#line 1391 "modules.m"
    }
#line 1390 "modules.m"
    {
#line 1390 "modules.m"
      parse_tree__modules__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1390 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_38_38, 1) = ((MR_Box) (parse_tree__modules__V_40_40));
#line 1390 "modules.m"
    }
#line 1390 "modules.m"
    {
#line 1390 "modules.m"
      parse_tree__modules__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[81])));
#line 1390 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_35_35, 1) = ((MR_Box) (parse_tree__modules__V_38_38));
#line 1390 "modules.m"
    }
#line 1390 "modules.m"
    {
#line 1390 "modules.m"
      parse_tree__modules__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 0) = ((MR_Box) (parse_tree__modules__V_34_34));
#line 1390 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 1) = ((MR_Box) (parse_tree__modules__V_35_35));
#line 1390 "modules.m"
    }
#line 1390 "modules.m"
    {
#line 1390 "modules.m"
      parse_tree__modules__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[80])));
#line 1390 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_30_30, 1) = ((MR_Box) (parse_tree__modules__V_33_33));
#line 1390 "modules.m"
    }
#line 1389 "modules.m"
    {
#line 1389 "modules.m"
      parse_tree__modules__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1389 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 1) = ((MR_Box) (parse_tree__modules__V_30_30));
#line 1389 "modules.m"
    }
#line 1389 "modules.m"
    {
#line 1389 "modules.m"
      parse_tree__modules__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[79])));
#line 1389 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_25_25, 1) = ((MR_Box) (parse_tree__modules__V_28_28));
#line 1389 "modules.m"
    }
#line 1389 "modules.m"
    {
#line 1389 "modules.m"
      parse_tree__modules__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 0) = ((MR_Box) (parse_tree__modules__V_24_24));
#line 1389 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 1) = ((MR_Box) (parse_tree__modules__V_25_25));
#line 1389 "modules.m"
    }
#line 1389 "modules.m"
    {
#line 1389 "modules.m"
      parse_tree__modules__MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[78])));
#line 1389 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_15, 1) = ((MR_Box) (parse_tree__modules__V_23_23));
#line 1389 "modules.m"
    }
#line 1396 "modules.m"
    {
#line 1396 "modules.m"
      parse_tree__modules__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1396 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_67_67, 1) = ((MR_Box) (parse_tree__modules__ParentModule_8));
#line 1396 "modules.m"
    }
#line 1400 "modules.m"
    {
#line 1400 "modules.m"
      parse_tree__modules__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1400 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1400 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_86_86, 1) = ((MR_Box) (parse_tree__modules__SubModule_9));
#line 1400 "modules.m"
    }
#line 1400 "modules.m"
    {
#line 1400 "modules.m"
      parse_tree__modules__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1400 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_85_85, 0) = ((MR_Box) (parse_tree__modules__V_86_86));
#line 1400 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[67])));
#line 1400 "modules.m"
    }
#line 1399 "modules.m"
    {
#line 1399 "modules.m"
      parse_tree__modules__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[92])));
#line 1399 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_82_82, 1) = ((MR_Box) (parse_tree__modules__V_85_85));
#line 1399 "modules.m"
    }
#line 1399 "modules.m"
    {
#line 1399 "modules.m"
      parse_tree__modules__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[91])));
#line 1399 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_79_79, 1) = ((MR_Box) (parse_tree__modules__V_82_82));
#line 1399 "modules.m"
    }
#line 1398 "modules.m"
    {
#line 1398 "modules.m"
      parse_tree__modules__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1398 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[90])));
#line 1398 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 1) = ((MR_Box) (parse_tree__modules__V_79_79));
#line 1398 "modules.m"
    }
#line 1398 "modules.m"
    {
#line 1398 "modules.m"
      parse_tree__modules__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1398 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_74_74, 0) = ((MR_Box) (parse_tree__modules__V_67_67));
#line 1398 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_74_74, 1) = ((MR_Box) (parse_tree__modules__V_76_76));
#line 1398 "modules.m"
    }
#line 1397 "modules.m"
    {
#line 1397 "modules.m"
      parse_tree__modules__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1397 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[89])));
#line 1397 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 1) = ((MR_Box) (parse_tree__modules__V_74_74));
#line 1397 "modules.m"
    }
#line 1397 "modules.m"
    {
#line 1397 "modules.m"
      parse_tree__modules__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1397 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[88])));
#line 1397 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_68_68, 1) = ((MR_Box) (parse_tree__modules__V_71_71));
#line 1397 "modules.m"
    }
#line 1396 "modules.m"
    {
#line 1396 "modules.m"
      parse_tree__modules__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 0) = ((MR_Box) (parse_tree__modules__V_67_67));
#line 1396 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 1) = ((MR_Box) (parse_tree__modules__V_68_68));
#line 1396 "modules.m"
    }
#line 1396 "modules.m"
    {
#line 1396 "modules.m"
      parse_tree__modules__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[87])));
#line 1396 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_63_63, 1) = ((MR_Box) (parse_tree__modules__V_66_66));
#line 1396 "modules.m"
    }
#line 1395 "modules.m"
    {
#line 1395 "modules.m"
      parse_tree__modules__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[86])));
#line 1395 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_60_60, 1) = ((MR_Box) (parse_tree__modules__V_63_63));
#line 1395 "modules.m"
    }
#line 1395 "modules.m"
    {
#line 1395 "modules.m"
      parse_tree__modules__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[85])));
#line 1395 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_57_57, 1) = ((MR_Box) (parse_tree__modules__V_60_60));
#line 1395 "modules.m"
    }
#line 1394 "modules.m"
    {
#line 1394 "modules.m"
      parse_tree__modules__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[84])));
#line 1394 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_54_54, 1) = ((MR_Box) (parse_tree__modules__V_57_57));
#line 1394 "modules.m"
    }
#line 1393 "modules.m"
    {
#line 1393 "modules.m"
      parse_tree__modules__VerbosePieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__VerbosePieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[83])));
#line 1393 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__VerbosePieces_16, 1) = ((MR_Box) (parse_tree__modules__V_54_54));
#line 1393 "modules.m"
    }
#line 1402 "modules.m"
    {
#line 1402 "modules.m"
      parse_tree__modules__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1402 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_94_94, 0) = ((MR_Box) (parse_tree__modules__MainPieces_15));
#line 1402 "modules.m"
    }
#line 1402 "modules.m"
    {
#line 1402 "modules.m"
      parse_tree__modules__V_96_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1402 "modules.m"
      MR_hl_field(MR_mktag(2), parse_tree__modules__V_96_96, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1402 "modules.m"
      MR_hl_field(MR_mktag(2), parse_tree__modules__V_96_96, 1) = ((MR_Box) (parse_tree__modules__VerbosePieces_16));
#line 1402 "modules.m"
    }
#line 1402 "modules.m"
    {
#line 1402 "modules.m"
      parse_tree__modules__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1402 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_95_95, 0) = ((MR_Box) (parse_tree__modules__V_96_96));
#line 1402 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1402 "modules.m"
    }
#line 1402 "modules.m"
    {
#line 1402 "modules.m"
      parse_tree__modules__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1402 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_93_93, 0) = ((MR_Box) (parse_tree__modules__V_94_94));
#line 1402 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_93_93, 1) = ((MR_Box) (parse_tree__modules__V_95_95));
#line 1402 "modules.m"
    }
#line 1401 "modules.m"
    {
#line 1401 "modules.m"
      parse_tree__modules__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1401 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_17, 0) = ((MR_Box) (parse_tree__modules__Context_13));
#line 1401 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_17, 1) = ((MR_Box) (parse_tree__modules__V_93_93));
#line 1401 "modules.m"
    }
#line 1403 "modules.m"
    {
#line 1403 "modules.m"
      parse_tree__modules__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_101_101, 0) = ((MR_Box) (parse_tree__modules__Msg_17));
#line 1403 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1403 "modules.m"
    }
#line 1403 "modules.m"
    {
#line 1403 "modules.m"
      parse_tree__modules__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1403 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1403 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1403 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_18, 2) = ((MR_Box) (parse_tree__modules__V_101_101));
#line 1403 "modules.m"
    }
#line 1404 "modules.m"
    {
#line 1404 "modules.m"
      MR_Word base;
#line 1404 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1404 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_20 = base;
#line 1404 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_18));
#line 1404 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_19));
#line 1404 "modules.m"
    }
#line 1384 "modules.m"
  }
#line 1368 "modules.m"
}

#line 1359 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0_1(
#line 1359 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1359 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1359 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1359 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 1359 "modules.m"
{
#line 1359 "modules.m"
  {
#line 1359 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1359 "modules.m"
    MR_Word parse_tree__modules__conv2_STATE_VARIABLE_Specs_20;

#line 1359 "modules.m"
    {
#line 1359 "modules.m"
      parse_tree__modules__report_inaccessible_module_error_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv2_STATE_VARIABLE_Specs_20);
    }
#line 1359 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_STATE_VARIABLE_Specs_20));
#line 1359 "modules.m"
  }
#line 1359 "modules.m"
}

#line 1343 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0(
#line 1343 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1343 "modules.m"
  MR_Word parse_tree__modules__InclMap_8,
#line 1343 "modules.m"
  MR_Word parse_tree__modules__ImportUseMap_9,
#line 1343 "modules.m"
  MR_Word parse_tree__modules__ImportedModule_10,
#line 1343 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1343 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20)
#line 1343 "modules.m"
{
#line 1350 "modules.m"
  {
#line 1350 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1350 "modules.m"
    if (((MR_tag((MR_Word) parse_tree__modules__ImportedModule_10)) == (MR_mktag((MR_Integer) 1))))
#line 1350 "modules.m"
      {
#line 1350 "modules.m"
        MR_Word parse_tree__modules__ParentModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__ImportedModule_10, (MR_Integer) 0)));
#line 1350 "modules.m"
        MR_String parse_tree__modules__SubModule_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__modules__ImportedModule_10, (MR_Integer) 1)));
#line 1351 "modules.m"
        MR_Word parse_tree__modules___ImportedInclContexts_14;
#line 1351 "modules.m"
        MR_Box parse_tree__modules__conv0__ImportedInclContexts_14;

#line 1351 "modules.m"
        {
#line 1351 "modules.m"
          parse_tree__modules__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[9], parse_tree__modules__InclMap_8, ((MR_Box) (parse_tree__modules__ImportedModule_10)), &parse_tree__modules__conv0__ImportedInclContexts_14);
        }
#line 1351 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1351 "modules.m"
          {
#line 1351 "modules.m"
            parse_tree__modules___ImportedInclContexts_14 = ((MR_Word) parse_tree__modules__conv0__ImportedInclContexts_14);
#line 1351 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 1351 "modules.m"
          }
#line 1353 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1353 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Specs_20 = parse_tree__modules__STATE_VARIABLE_Specs_0_19;
#line 1353 "modules.m"
        else
#line 1354 "modules.m"
          {
#line 1354 "modules.m"
            MR_Word parse_tree__modules__ImportsUses_15;
#line 1354 "modules.m"
            MR_Word parse_tree__modules__HeadIU_16;
#line 1354 "modules.m"
            MR_Word parse_tree__modules__TailIUs_17;
#line 1354 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_Specs_21_21;
#line 1354 "modules.m"
            MR_Word parse_tree__modules__V_22_22;
#line 1354 "modules.m"
            MR_Box parse_tree__modules__conv1_ImportsUses_15;
#line 1358 "modules.m"
            MR_Box parse_tree__modules__conv3_STATE_VARIABLE_Specs_20;

#line 1354 "modules.m"
            {
#line 1354 "modules.m"
              mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[10], parse_tree__modules__ImportUseMap_9, ((MR_Box) (parse_tree__modules__ImportedModule_10)), &parse_tree__modules__conv1_ImportsUses_15);
            }
#line 1354 "modules.m"
            parse_tree__modules__ImportsUses_15 = ((MR_Word) parse_tree__modules__conv1_ImportsUses_15);
#line 1355 "modules.m"
            parse_tree__modules__HeadIU_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportsUses_15, (MR_Integer) 0)));
#line 1355 "modules.m"
            parse_tree__modules__TailIUs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportsUses_15, (MR_Integer) 1)));
#line 1356 "modules.m"
            {
#line 1356 "modules.m"
              parse_tree__modules__report_inaccessible_module_error_6_p_0(parse_tree__modules__ModuleName_7, parse_tree__modules__ParentModule_12, parse_tree__modules__SubModule_13, parse_tree__modules__HeadIU_16, parse_tree__modules__STATE_VARIABLE_Specs_0_19, &parse_tree__modules__STATE_VARIABLE_Specs_21_21);
            }
#line 1359 "modules.m"
            {
#line 1359 "modules.m"
              parse_tree__modules__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1359 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_10[1]));
#line 1359 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 1) = ((MR_Box) (parse_tree__modules__check_module_accessibility_6_p_0_1));
#line 1359 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1359 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 3) = ((MR_Box) (parse_tree__modules__ModuleName_7));
#line 1359 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 4) = ((MR_Box) (parse_tree__modules__ParentModule_12));
#line 1359 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 5) = ((MR_Box) (parse_tree__modules__SubModule_13));
#line 1359 "modules.m"
            }
#line 1358 "modules.m"
            {
#line 1358 "modules.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0, (MR_Word) &parse_tree__modules_scalar_common_1[8], parse_tree__modules__V_22_22, parse_tree__modules__TailIUs_17, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_21_21)), &parse_tree__modules__conv3_STATE_VARIABLE_Specs_20);
            }
#line 1358 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_Specs_20 = ((MR_Word) parse_tree__modules__conv3_STATE_VARIABLE_Specs_20);
#line 1354 "modules.m"
          }
#line 1350 "modules.m"
      }
#line 1350 "modules.m"
    else
#line 1364 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_20 = parse_tree__modules__STATE_VARIABLE_Specs_0_19;
#line 1350 "modules.m"
  }
#line 1343 "modules.m"
}

#line 1261 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_items_acc_6_p_0(
#line 1261 "modules.m"
  MR_Word parse_tree__modules__Visible_1,
#line 1261 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1261 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1261 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1261 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1261 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6)
#line 1261 "modules.m"
{
#line 1265 "modules.m"
  while (MR_TRUE)
#line 1265 "modules.m"
    {
#line 1265 "modules.m"
      /* tailcall optimized into a loop */
#line 1265 "modules.m"
      {
#line 1265 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1265 "modules.m"
        if ((parse_tree__modules__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1265 "modules.m"
          {
#line 1265 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImportUseMap_6 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1265 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_InclMap_4 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1265 "modules.m"
          }
#line 1265 "modules.m"
        else
#line 1267 "modules.m"
          {
#line 1267 "modules.m"
            MR_Word parse_tree__modules__Item_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__2_2, (MR_Integer) 0)));
#line 1267 "modules.m"
            MR_Word parse_tree__modules__Items_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__2_2, (MR_Integer) 1)));
#line 1267 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53;
#line 1267 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_57_57;

#line 1304 "modules.m"
#line 1304 "modules.m"
            switch (MR_tag((MR_Word) parse_tree__modules__Item_15)) {
#line 1304 "modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1304 "modules.m"
              case (MR_Integer) 0:
#line 1269 "modules.m"
                {
#line 1269 "modules.m"
                  MR_Word parse_tree__modules__ItemModuleDefn_19 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_15), (MR_Integer) 0);
#line 1269 "modules.m"
                  MR_Word parse_tree__modules__ModuleDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_19, (MR_Integer) 0)));
#line 1269 "modules.m"
                  MR_Word parse_tree__modules__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_19, (MR_Integer) 1)));
#line 1270 "modules.m"
                  MR_Integer parse_tree__modules__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_19, (MR_Integer) 2)));

#line 1287 "modules.m"
#line 1287 "modules.m"
                  switch (MR_tag((MR_Word) parse_tree__modules__ModuleDefn_20)) {
#line 1287 "modules.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1287 "modules.m"
                    case (MR_Integer) 0:
#line 1272 "modules.m"
                      {
#line 1272 "modules.m"
                        MR_Word parse_tree__modules__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleDefn_20, (MR_Integer) 0)));

#line 1284 "modules.m"
#line 1284 "modules.m"
                        switch (parse_tree__modules__Visible_1) {
#line 1284 "modules.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1284 "modules.m"
                          case (MR_Integer) 0:
#line 1285 "modules.m"
                            parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1284 "modules.m"
                            break;
#line 1284 "modules.m"
                          case (MR_Integer) 1:
#line 1280 "modules.m"
                            {
#line 1280 "modules.m"
                              MR_Word parse_tree__modules__OneOrMore0_24;
#line 1275 "modules.m"
                              MR_Box parse_tree__modules__conv1_OneOrMore0_24;

#line 1275 "modules.m"
                              {
#line 1275 "modules.m"
                                parse_tree__modules__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[9], parse_tree__modules__STATE_VARIABLE_InclMap_0_3, ((MR_Box) (parse_tree__modules__ModuleName_23)), &parse_tree__modules__conv1_OneOrMore0_24);
                              }
#line 1275 "modules.m"
                              if (parse_tree__modules__succeeded)
#line 1275 "modules.m"
                                {
#line 1275 "modules.m"
                                  parse_tree__modules__OneOrMore0_24 = ((MR_Word) parse_tree__modules__conv1_OneOrMore0_24);
#line 1275 "modules.m"
                                  parse_tree__modules__succeeded = MR_TRUE;
#line 1275 "modules.m"
                                }
#line 1280 "modules.m"
                              if (parse_tree__modules__succeeded)
#line 1276 "modules.m"
                                {
#line 1276 "modules.m"
                                  MR_Word parse_tree__modules__HeadContext_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_24, (MR_Integer) 0)));
#line 1276 "modules.m"
                                  MR_Word parse_tree__modules__TailContexts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_24, (MR_Integer) 1)));
#line 1276 "modules.m"
                                  MR_Word parse_tree__modules__OneOrMore_27;
#line 1276 "modules.m"
                                  MR_Word parse_tree__modules__V_56_56;

#line 1278 "modules.m"
                                  {
#line 1278 "modules.m"
                                    parse_tree__modules__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "modules.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__modules__V_56_56, 0) = ((MR_Box) (parse_tree__modules__HeadContext_25));
#line 1278 "modules.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__modules__V_56_56, 1) = ((MR_Box) (parse_tree__modules__TailContexts_26));
#line 1278 "modules.m"
                                  }
#line 1277 "modules.m"
                                  {
#line 1277 "modules.m"
                                    parse_tree__modules__OneOrMore_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1277 "modules.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_27, 0) = ((MR_Box) (parse_tree__modules__Context_21));
#line 1277 "modules.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_27, 1) = ((MR_Box) (parse_tree__modules__V_56_56));
#line 1277 "modules.m"
                                  }
#line 1279 "modules.m"
                                  {
#line 1279 "modules.m"
                                    mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[9], ((MR_Box) (parse_tree__modules__ModuleName_23)), ((MR_Box) (parse_tree__modules__OneOrMore_27)), parse_tree__modules__STATE_VARIABLE_InclMap_0_3, &parse_tree__modules__STATE_VARIABLE_InclMap_57_57);
                                  }
#line 1276 "modules.m"
                                }
#line 1280 "modules.m"
                              else
#line 1281 "modules.m"
                                {
#line 1281 "modules.m"
                                  MR_Word parse_tree__modules__OneOrMore_62;

#line 1281 "modules.m"
                                  {
#line 1281 "modules.m"
                                    parse_tree__modules__OneOrMore_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1281 "modules.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_62, 0) = ((MR_Box) (parse_tree__modules__Context_21));
#line 1281 "modules.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1281 "modules.m"
                                  }
#line 1282 "modules.m"
                                  {
#line 1282 "modules.m"
                                    mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[9], ((MR_Box) (parse_tree__modules__ModuleName_23)), ((MR_Box) (parse_tree__modules__OneOrMore_62)), parse_tree__modules__STATE_VARIABLE_InclMap_0_3, &parse_tree__modules__STATE_VARIABLE_InclMap_57_57);
                                  }
#line 1281 "modules.m"
                                }
#line 1280 "modules.m"
                            }
#line 1284 "modules.m"
                            break;
#line 1284 "modules.m"
                        }
#line 1272 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1272 "modules.m"
                      }
#line 1287 "modules.m"
                      break;
#line 1287 "modules.m"
                    case (MR_Integer) 1:
#line 1302 "modules.m"
                      {
#line 1302 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1302 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1302 "modules.m"
                      }
#line 1287 "modules.m"
                      break;
#line 1287 "modules.m"
                    case (MR_Integer) 2:
#line 1290 "modules.m"
                      {
#line 1290 "modules.m"
                        MR_Word parse_tree__modules__IoUC_29;
#line 1290 "modules.m"
                        MR_Word parse_tree__modules__ModuleName_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__modules__ModuleDefn_20, (MR_Integer) 0)));
#line 1297 "modules.m"
                        MR_Word parse_tree__modules__OneOrMore0_65;
#line 1293 "modules.m"
                        MR_Box parse_tree__modules__conv0_OneOrMore0_65;

#line 1292 "modules.m"
                        {
#line 1292 "modules.m"
                          parse_tree__modules__IoUC_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1292 "modules.m"
                          MR_hl_field(MR_mktag(0), parse_tree__modules__IoUC_29, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1292 "modules.m"
                          MR_hl_field(MR_mktag(0), parse_tree__modules__IoUC_29, 1) = ((MR_Box) (parse_tree__modules__Context_21));
#line 1292 "modules.m"
                        }
#line 1293 "modules.m"
                        {
#line 1293 "modules.m"
                          parse_tree__modules__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[10], parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, ((MR_Box) (parse_tree__modules__ModuleName_67)), &parse_tree__modules__conv0_OneOrMore0_65);
                        }
#line 1293 "modules.m"
                        if (parse_tree__modules__succeeded)
#line 1293 "modules.m"
                          {
#line 1293 "modules.m"
                            parse_tree__modules__OneOrMore0_65 = ((MR_Word) parse_tree__modules__conv0_OneOrMore0_65);
#line 1293 "modules.m"
                            parse_tree__modules__succeeded = MR_TRUE;
#line 1293 "modules.m"
                          }
#line 1297 "modules.m"
                        if (parse_tree__modules__succeeded)
#line 1294 "modules.m"
                          {
#line 1294 "modules.m"
                            MR_Word parse_tree__modules__HeadIoUC_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_65, (MR_Integer) 0)));
#line 1294 "modules.m"
                            MR_Word parse_tree__modules__TailIoUCs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_65, (MR_Integer) 1)));
#line 1294 "modules.m"
                            MR_Word parse_tree__modules__V_52_52;
#line 1294 "modules.m"
                            MR_Word parse_tree__modules__OneOrMore_63;

#line 1295 "modules.m"
                            {
#line 1295 "modules.m"
                              parse_tree__modules__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__V_52_52, 0) = ((MR_Box) (parse_tree__modules__HeadIoUC_30));
#line 1295 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__V_52_52, 1) = ((MR_Box) (parse_tree__modules__TailIoUCs_31));
#line 1295 "modules.m"
                            }
#line 1295 "modules.m"
                            {
#line 1295 "modules.m"
                              parse_tree__modules__OneOrMore_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1295 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_63, 0) = ((MR_Box) (parse_tree__modules__IoUC_29));
#line 1295 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_63, 1) = ((MR_Box) (parse_tree__modules__V_52_52));
#line 1295 "modules.m"
                            }
#line 1296 "modules.m"
                            {
#line 1296 "modules.m"
                              mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[10], ((MR_Box) (parse_tree__modules__ModuleName_67)), ((MR_Box) (parse_tree__modules__OneOrMore_63)), parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53);
                            }
#line 1294 "modules.m"
                          }
#line 1297 "modules.m"
                        else
#line 1298 "modules.m"
                          {
#line 1298 "modules.m"
                            MR_Word parse_tree__modules__OneOrMore_64;

#line 1298 "modules.m"
                            {
#line 1298 "modules.m"
                              parse_tree__modules__OneOrMore_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1298 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_64, 0) = ((MR_Box) (parse_tree__modules__IoUC_29));
#line 1298 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1298 "modules.m"
                            }
#line 1299 "modules.m"
                            {
#line 1299 "modules.m"
                              mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[10], ((MR_Box) (parse_tree__modules__ModuleName_67)), ((MR_Box) (parse_tree__modules__OneOrMore_64)), parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53);
                            }
#line 1298 "modules.m"
                          }
#line 1290 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1290 "modules.m"
                      }
#line 1287 "modules.m"
                      break;
#line 1287 "modules.m"
                    case (MR_Integer) 3:
#line 1290 "modules.m"
                      {
#line 1290 "modules.m"
                        MR_Word parse_tree__modules__IoUC_108;
#line 1290 "modules.m"
                        MR_Word parse_tree__modules__ModuleName_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__ModuleDefn_20, (MR_Integer) 0)));
#line 1297 "modules.m"
                        MR_Word parse_tree__modules__OneOrMore0_100;
#line 1293 "modules.m"
                        MR_Box parse_tree__modules__conv2_OneOrMore0_100;

#line 1292 "modules.m"
                        {
#line 1292 "modules.m"
                          parse_tree__modules__IoUC_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1292 "modules.m"
                          MR_hl_field(MR_mktag(0), parse_tree__modules__IoUC_108, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1292 "modules.m"
                          MR_hl_field(MR_mktag(0), parse_tree__modules__IoUC_108, 1) = ((MR_Box) (parse_tree__modules__Context_21));
#line 1292 "modules.m"
                        }
#line 1293 "modules.m"
                        {
#line 1293 "modules.m"
                          parse_tree__modules__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[10], parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, ((MR_Box) (parse_tree__modules__ModuleName_116)), &parse_tree__modules__conv2_OneOrMore0_100);
                        }
#line 1293 "modules.m"
                        if (parse_tree__modules__succeeded)
#line 1293 "modules.m"
                          {
#line 1293 "modules.m"
                            parse_tree__modules__OneOrMore0_100 = ((MR_Word) parse_tree__modules__conv2_OneOrMore0_100);
#line 1293 "modules.m"
                            parse_tree__modules__succeeded = MR_TRUE;
#line 1293 "modules.m"
                          }
#line 1297 "modules.m"
                        if (parse_tree__modules__succeeded)
#line 1294 "modules.m"
                          {
#line 1294 "modules.m"
                            MR_Word parse_tree__modules__HeadIoUC_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_100, (MR_Integer) 0)));
#line 1294 "modules.m"
                            MR_Word parse_tree__modules__TailIoUCs_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_100, (MR_Integer) 1)));
#line 1294 "modules.m"
                            MR_Word parse_tree__modules__V_86_86;
#line 1294 "modules.m"
                            MR_Word parse_tree__modules__OneOrMore_87;

#line 1295 "modules.m"
                            {
#line 1295 "modules.m"
                              parse_tree__modules__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__V_86_86, 0) = ((MR_Box) (parse_tree__modules__HeadIoUC_84));
#line 1295 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__V_86_86, 1) = ((MR_Box) (parse_tree__modules__TailIoUCs_85));
#line 1295 "modules.m"
                            }
#line 1295 "modules.m"
                            {
#line 1295 "modules.m"
                              parse_tree__modules__OneOrMore_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1295 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_87, 0) = ((MR_Box) (parse_tree__modules__IoUC_108));
#line 1295 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_87, 1) = ((MR_Box) (parse_tree__modules__V_86_86));
#line 1295 "modules.m"
                            }
#line 1296 "modules.m"
                            {
#line 1296 "modules.m"
                              mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[10], ((MR_Box) (parse_tree__modules__ModuleName_116)), ((MR_Box) (parse_tree__modules__OneOrMore_87)), parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53);
                            }
#line 1294 "modules.m"
                          }
#line 1297 "modules.m"
                        else
#line 1298 "modules.m"
                          {
#line 1298 "modules.m"
                            MR_Word parse_tree__modules__OneOrMore_91;

#line 1298 "modules.m"
                            {
#line 1298 "modules.m"
                              parse_tree__modules__OneOrMore_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1298 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_91, 0) = ((MR_Box) (parse_tree__modules__IoUC_108));
#line 1298 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1298 "modules.m"
                            }
#line 1299 "modules.m"
                            {
#line 1299 "modules.m"
                              mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[10], ((MR_Box) (parse_tree__modules__ModuleName_116)), ((MR_Box) (parse_tree__modules__OneOrMore_91)), parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53);
                            }
#line 1298 "modules.m"
                          }
#line 1290 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1290 "modules.m"
                      }
#line 1287 "modules.m"
                      break;
#line 1287 "modules.m"
                  }
#line 1269 "modules.m"
                }
#line 1304 "modules.m"
                break;
#line 1304 "modules.m"
              case (MR_Integer) 1:
#line 1305 "modules.m"
                {
#line 1305 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1305 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1305 "modules.m"
                }
#line 1304 "modules.m"
                break;
#line 1304 "modules.m"
              case (MR_Integer) 2:
#line 1306 "modules.m"
                {
#line 1306 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1306 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1306 "modules.m"
                }
#line 1304 "modules.m"
                break;
#line 1304 "modules.m"
              case (MR_Integer) 3:
#line 1304 "modules.m"
#line 1304 "modules.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_15, (MR_Integer) 0)))) {
#line 1304 "modules.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1304 "modules.m"
                  case (MR_Integer) 0:
#line 1307 "modules.m"
                    {
#line 1307 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1307 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1307 "modules.m"
                    }
#line 1304 "modules.m"
                    break;
#line 1304 "modules.m"
                  case (MR_Integer) 1:
#line 1308 "modules.m"
                    {
#line 1308 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1308 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1308 "modules.m"
                    }
#line 1304 "modules.m"
                    break;
#line 1304 "modules.m"
                  case (MR_Integer) 2:
#line 1309 "modules.m"
                    {
#line 1309 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1309 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1309 "modules.m"
                    }
#line 1304 "modules.m"
                    break;
#line 1304 "modules.m"
                  case (MR_Integer) 3:
#line 1310 "modules.m"
                    {
#line 1310 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1310 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1310 "modules.m"
                    }
#line 1304 "modules.m"
                    break;
#line 1304 "modules.m"
                  case (MR_Integer) 4:
#line 1311 "modules.m"
                    {
#line 1311 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1311 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1311 "modules.m"
                    }
#line 1304 "modules.m"
                    break;
#line 1304 "modules.m"
                  case (MR_Integer) 5:
#line 1312 "modules.m"
                    {
#line 1312 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1312 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1312 "modules.m"
                    }
#line 1304 "modules.m"
                    break;
#line 1304 "modules.m"
                  case (MR_Integer) 6:
#line 1313 "modules.m"
                    {
#line 1313 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1313 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1313 "modules.m"
                    }
#line 1304 "modules.m"
                    break;
#line 1304 "modules.m"
                  case (MR_Integer) 7:
#line 1314 "modules.m"
                    {
#line 1314 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1314 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1314 "modules.m"
                    }
#line 1304 "modules.m"
                    break;
#line 1304 "modules.m"
                  case (MR_Integer) 8:
#line 1315 "modules.m"
                    {
#line 1315 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1315 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1315 "modules.m"
                    }
#line 1304 "modules.m"
                    break;
#line 1304 "modules.m"
                  case (MR_Integer) 9:
#line 1316 "modules.m"
                    {
#line 1316 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1316 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1316 "modules.m"
                    }
#line 1304 "modules.m"
                    break;
#line 1304 "modules.m"
                  case (MR_Integer) 10:
#line 1317 "modules.m"
                    {
#line 1317 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1317 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1317 "modules.m"
                    }
#line 1304 "modules.m"
                    break;
#line 1304 "modules.m"
                  case (MR_Integer) 11:
#line 1318 "modules.m"
                    {
#line 1318 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_57_57 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1318 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1318 "modules.m"
                    }
#line 1304 "modules.m"
                    break;
#line 1304 "modules.m"
                }
#line 1304 "modules.m"
                break;
#line 1304 "modules.m"
            }
#line 1321 "modules.m"
            /* direct tailcall eliminated */
#line 1321 "modules.m"
            {
#line 1321 "modules.m"
              MR_Word parse_tree__modules__HeadVar__2__tmp_copy_2 = parse_tree__modules__Items_16;
#line 1321 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3 = parse_tree__modules__STATE_VARIABLE_InclMap_57_57;
#line 1321 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_53_53;

#line 1321 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5;
#line 1321 "modules.m"
              parse_tree__modules__STATE_VARIABLE_InclMap_0_3 = parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3;
#line 1321 "modules.m"
              parse_tree__modules__HeadVar__2_2 = parse_tree__modules__HeadVar__2__tmp_copy_2;
#line 1321 "modules.m"
            }
#line 1321 "modules.m"
            continue;
#line 1267 "modules.m"
          }
#line 1265 "modules.m"
      }
#line 1265 "modules.m"
      break;
#line 1265 "modules.m"
    }
#line 1261 "modules.m"
}

#line 1231 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_aug_item_blocks_acc_5_p_0(
#line 1231 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1231 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_2,
#line 1231 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_3,
#line 1231 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_4,
#line 1231 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_5)
#line 1231 "modules.m"
{
#line 1236 "modules.m"
  while (MR_TRUE)
#line 1236 "modules.m"
    {
#line 1236 "modules.m"
      /* tailcall optimized into a loop */
#line 1236 "modules.m"
      {
#line 1236 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1236 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1236 "modules.m"
          {
#line 1237 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImportUseMap_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_4;
#line 1237 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_InclMap_3 = parse_tree__modules__STATE_VARIABLE_InclMap_0_2;
#line 1236 "modules.m"
          }
#line 1236 "modules.m"
        else
#line 1239 "modules.m"
          {
#line 1239 "modules.m"
            MR_Word parse_tree__modules__AugItemBlock_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1239 "modules.m"
            MR_Word parse_tree__modules__AugItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1239 "modules.m"
            MR_Word parse_tree__modules__AugSection_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugItemBlock_12, (MR_Integer) 0)));
#line 1239 "modules.m"
            MR_Word parse_tree__modules__Items_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugItemBlock_12, (MR_Integer) 2)));
#line 1239 "modules.m"
            MR_Word parse_tree__modules__Visible_23;
#line 1239 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_30_30;
#line 1239 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_31_31;
#line 1240 "modules.m"
            MR_Word parse_tree__modules__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugItemBlock_12, (MR_Integer) 1)));

#line 1249 "modules.m"
#line 1249 "modules.m"
            switch (MR_tag((MR_Word) parse_tree__modules__AugSection_16)) {
#line 1249 "modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1249 "modules.m"
              case (MR_Integer) 0:
#line 1249 "modules.m"
#line 1249 "modules.m"
                switch (MR_unmkbody(parse_tree__modules__AugSection_16)) {
#line 1249 "modules.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1249 "modules.m"
                  case (MR_Integer) 0:
#line 1249 "modules.m"
                  case (MR_Integer) 1:
#line 1249 "modules.m"
                  case (MR_Integer) 2:
#line 1248 "modules.m"
                    parse_tree__modules__Visible_23 = (MR_Integer) 1;
#line 1249 "modules.m"
                    break;
#line 1249 "modules.m"
                  case (MR_Integer) 3:
#line 1254 "modules.m"
                    parse_tree__modules__Visible_23 = (MR_Integer) 0;
#line 1249 "modules.m"
                    break;
#line 1249 "modules.m"
                }
#line 1249 "modules.m"
                break;
#line 1249 "modules.m"
              case (MR_Integer) 1:
#line 1249 "modules.m"
              case (MR_Integer) 2:
#line 1248 "modules.m"
                parse_tree__modules__Visible_23 = (MR_Integer) 1;
#line 1249 "modules.m"
                break;
#line 1249 "modules.m"
              case (MR_Integer) 3:
#line 1254 "modules.m"
                parse_tree__modules__Visible_23 = (MR_Integer) 0;
#line 1249 "modules.m"
                break;
#line 1249 "modules.m"
            }
#line 1256 "modules.m"
            {
#line 1256 "modules.m"
              parse_tree__modules__record_includes_imports_uses_in_items_acc_6_p_0(parse_tree__modules__Visible_23, parse_tree__modules__Items_18, parse_tree__modules__STATE_VARIABLE_InclMap_0_2, &parse_tree__modules__STATE_VARIABLE_InclMap_30_30, parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_4, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_31_31);
            }
#line 1258 "modules.m"
            /* direct tailcall eliminated */
#line 1258 "modules.m"
            {
#line 1258 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__AugItemBlocks_13;
#line 1258 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_2 = parse_tree__modules__STATE_VARIABLE_InclMap_30_30;
#line 1258 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_4 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_31_31;

#line 1258 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_4 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_4;
#line 1258 "modules.m"
              parse_tree__modules__STATE_VARIABLE_InclMap_0_2 = parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_2;
#line 1258 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1258 "modules.m"
            }
#line 1258 "modules.m"
            continue;
#line 1239 "modules.m"
          }
#line 1236 "modules.m"
      }
#line 1236 "modules.m"
      break;
#line 1236 "modules.m"
    }
#line 1231 "modules.m"
}

#line 1187 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_5_p_0_1(
#line 1187 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1187 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1187 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1187 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 1187 "modules.m"
{
#line 1187 "modules.m"
  {
#line 1187 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1187 "modules.m"
    MR_Word parse_tree__modules__conv0_STATE_VARIABLE_Specs_20;

#line 1187 "modules.m"
    {
#line 1187 "modules.m"
      parse_tree__modules__check_module_accessibility_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv0_STATE_VARIABLE_Specs_20);
    }
#line 1187 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_STATE_VARIABLE_Specs_20));
#line 1187 "modules.m"
  }
#line 1187 "modules.m"
}

#line 1181 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_5_p_0(
#line 1181 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 1181 "modules.m"
  MR_Word parse_tree__modules__AugItemBlocks_7,
#line 1181 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_8,
#line 1181 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_12,
#line 1181 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_13)
#line 1181 "modules.m"
{
#line 1185 "modules.m"
  {
#line 1185 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1185 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_9_26 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1185 "modules.m"
    MR_Word parse_tree__modules__InclMap_10;
#line 1185 "modules.m"
    MR_Word parse_tree__modules__ImportUseMap_11;
#line 1185 "modules.m"
    MR_Word parse_tree__modules__V_14_14;
#line 1185 "modules.m"
    MR_Word parse_tree__modules__V_24_24;
#line 1185 "modules.m"
    MR_Word parse_tree__modules__V_25_25;
#line 1187 "modules.m"
    MR_Box parse_tree__modules__conv1_STATE_VARIABLE_Specs_13;

#line 1229 "modules.m"
    {
#line 1229 "modules.m"
      parse_tree__modules__V_24_24 = mercury__map__init_0_f_0(parse_tree__modules__TypeCtorInfo_9_26, (MR_Word) &parse_tree__modules_scalar_common_1[9]);
    }
#line 1229 "modules.m"
    {
#line 1229 "modules.m"
      parse_tree__modules__V_25_25 = mercury__map__init_0_f_0(parse_tree__modules__TypeCtorInfo_9_26, (MR_Word) &parse_tree__modules_scalar_common_1[10]);
    }
#line 1228 "modules.m"
    {
#line 1228 "modules.m"
      parse_tree__modules__record_includes_imports_uses_in_aug_item_blocks_acc_5_p_0(parse_tree__modules__AugItemBlocks_7, parse_tree__modules__V_24_24, &parse_tree__modules__InclMap_10, parse_tree__modules__V_25_25, &parse_tree__modules__ImportUseMap_11);
    }
#line 1187 "modules.m"
    {
#line 1187 "modules.m"
      parse_tree__modules__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_14_14, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_10[0]));
#line 1187 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_14_14, 1) = ((MR_Box) (parse_tree__modules__check_imports_accessibility_5_p_0_1));
#line 1187 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1187 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_14_14, 3) = ((MR_Box) (parse_tree__modules__ModuleName_6));
#line 1187 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_14_14, 4) = ((MR_Box) (parse_tree__modules__InclMap_10));
#line 1187 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_14_14, 5) = ((MR_Box) (parse_tree__modules__ImportUseMap_11));
#line 1187 "modules.m"
    }
#line 1187 "modules.m"
    {
#line 1187 "modules.m"
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[8], parse_tree__modules__V_14_14, parse_tree__modules__ImportedModules_8, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_12)), &parse_tree__modules__conv1_STATE_VARIABLE_Specs_13);
    }
#line 1187 "modules.m"
    *parse_tree__modules__STATE_VARIABLE_Specs_13 = ((MR_Word) parse_tree__modules__conv1_STATE_VARIABLE_Specs_13);
#line 1185 "modules.m"
  }
#line 1181 "modules.m"
}

#line 1137 "modules.m"
static void MR_CALL 
parse_tree__modules__maybe_record_timestamp_6_p_0(
#line 1137 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_8,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__NeedQualifier_9,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamp_10,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17,
#line 1137 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18)
#line 1137 "modules.m"
{
#line 1144 "modules.m"
  {
#line 1144 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 19)));
#line 1144 "modules.m"
    MR_String parse_tree__modules__V_89_89 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 21)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 20)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 18)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 17)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 16)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 15)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 14)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 13)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 12)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 11)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 10)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 9)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 8)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 7)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 6)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 5)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 4)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 3)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 2)));
#line 1144 "modules.m"
    MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 1)));
#line 1144 "modules.m"
    MR_String parse_tree__modules__V_110_110 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 0)));

#line 1144 "modules.m"
    if ((parse_tree__modules__V_91_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1156 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17;
#line 1144 "modules.m"
    else
#line 1144 "modules.m"
      {
#line 1144 "modules.m"
        MR_Word parse_tree__modules__TimestampMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__V_91_91, (MR_Integer) 0)));

#line 1152 "modules.m"
        if ((parse_tree__modules__MaybeTimestamp_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1153 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17;
#line 1152 "modules.m"
        else
#line 1146 "modules.m"
          {
#line 1146 "modules.m"
            MR_Word parse_tree__modules__Timestamp_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__MaybeTimestamp_10, (MR_Integer) 0)));
#line 1146 "modules.m"
            MR_Word parse_tree__modules__FileKind_14;
#line 1146 "modules.m"
            MR_Word parse_tree__modules__TimestampInfo_15;
#line 1146 "modules.m"
            MR_Word parse_tree__modules__TimestampMap_16;
#line 1146 "modules.m"
            MR_Word parse_tree__modules__V_22_22;
#line 1151 "modules.m"
            MR_String parse_tree__modules__V_44_44;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_45_45;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_46_46;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_47_47;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_48_48;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_49_49;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_50_50;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_51_51;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_52_52;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_53_53;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_54_54;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_55_55;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_56_56;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_57_57;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_58_58;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_59_59;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_60_60;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_61_61;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_62_62;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_64_64;
#line 1151 "modules.m"
            MR_String parse_tree__modules__V_65_65;
#line 1151 "modules.m"
            MR_Word parse_tree__modules__V_63_63;

#line 1147 "modules.m"
            {
#line 1147 "modules.m"
              parse_tree__modules__FileKind_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__FileKind_14, 0) = ((MR_Box) (parse_tree__modules__IntFileKind_8));
#line 1147 "modules.m"
            }
#line 1148 "modules.m"
            {
#line 1148 "modules.m"
              parse_tree__modules__TimestampInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1148 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__TimestampInfo_15, 0) = ((MR_Box) (parse_tree__modules__FileKind_14));
#line 1148 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__TimestampInfo_15, 1) = ((MR_Box) (parse_tree__modules__Timestamp_13));
#line 1148 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__TimestampInfo_15, 2) = ((MR_Box) (parse_tree__modules__NeedQualifier_9));
#line 1148 "modules.m"
            }
#line 1150 "modules.m"
            {
#line 1150 "modules.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, ((MR_Box) (parse_tree__modules__ModuleName_7)), ((MR_Box) (parse_tree__modules__TimestampInfo_15)), parse_tree__modules__TimestampMap0_12, &parse_tree__modules__TimestampMap_16);
            }
#line 1151 "modules.m"
            {
#line 1151 "modules.m"
              parse_tree__modules__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_22_22, 0) = ((MR_Box) (parse_tree__modules__TimestampMap_16));
#line 1151 "modules.m"
            }
#line 1151 "modules.m"
            parse_tree__modules__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 0)));
#line 1151 "modules.m"
            parse_tree__modules__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 1)));
#line 1151 "modules.m"
            parse_tree__modules__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 2)));
#line 1151 "modules.m"
            parse_tree__modules__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 3)));
#line 1151 "modules.m"
            parse_tree__modules__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 4)));
#line 1151 "modules.m"
            parse_tree__modules__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 5)));
#line 1151 "modules.m"
            parse_tree__modules__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 6)));
#line 1151 "modules.m"
            parse_tree__modules__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 7)));
#line 1151 "modules.m"
            parse_tree__modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 8)));
#line 1151 "modules.m"
            parse_tree__modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 9)));
#line 1151 "modules.m"
            parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 10)));
#line 1151 "modules.m"
            parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 11)));
#line 1151 "modules.m"
            parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 12)));
#line 1151 "modules.m"
            parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 13)));
#line 1151 "modules.m"
            parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 14)));
#line 1151 "modules.m"
            parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 15)));
#line 1151 "modules.m"
            parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 16)));
#line 1151 "modules.m"
            parse_tree__modules__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 17)));
#line 1151 "modules.m"
            parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 18)));
#line 1151 "modules.m"
            parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 19)));
#line 1151 "modules.m"
            parse_tree__modules__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 20)));
#line 1151 "modules.m"
            parse_tree__modules__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 21)));
#line 1151 "modules.m"
            {
#line 1151 "modules.m"
              MR_Word base;
#line 1151 "modules.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
#line 1151 "modules.m"
              *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18 = base;
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_44_44));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_45_45));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_46_46));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_47_47));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__V_48_48));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_49_49));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__V_50_50));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__V_51_51));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_52_52));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_53_53));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_54_54));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_55_55));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_56_56));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_57_57));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_58_58));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_59_59));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_60_60));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_61_61));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_62_62));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_22_22));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_64_64));
#line 1151 "modules.m"
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_65_65));
#line 1151 "modules.m"
            }
#line 1146 "modules.m"
          }
#line 1144 "modules.m"
      }
#line 1144 "modules.m"
  }
#line 1137 "modules.m"
}

#line 1100 "modules.m"
static void MR_CALL 
parse_tree__modules__make_module_and_imports_12_p_0(
#line 1100 "modules.m"
  MR_String parse_tree__modules__SourceFileName_13,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_14,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__ModuleName_15,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__ModuleNameContext_16,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__ItemBlocks0_17,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__Specs_18,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__PublicChildren_19,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__NestedChildren_20,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__FactDeps_21,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__ForeignIncludeFiles_22,
#line 1100 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestampMap_23,
#line 1100 "modules.m"
  MR_Word * parse_tree__modules__Module_24)
#line 1100 "modules.m"
{
#line 1109 "modules.m"
  {
#line 1109 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1109 "modules.m"
    MR_Word parse_tree__modules__ItemBlocks_25;
#line 1109 "modules.m"
    MR_Word parse_tree__modules__ItemBlocksCord_26;
#line 1109 "modules.m"
    MR_Word parse_tree__modules__Errors_27;
#line 1109 "modules.m"
    MR_Word parse_tree__modules__V_34_34;
#line 1109 "modules.m"
    MR_String parse_tree__modules__V_38_38;

#line 1118 "modules.m"
    {
#line 1118 "modules.m"
      parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0, parse_tree__modules__ModuleName_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), parse_tree__modules__ItemBlocks0_17, &parse_tree__modules__ItemBlocks_25);
    }
#line 1120 "modules.m"
    {
#line 1120 "modules.m"
      parse_tree__modules__ItemBlocksCord_26 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__modules_scalar_common_1[1], parse_tree__modules__ItemBlocks_25);
    }
#line 1121 "modules.m"
    {
#line 1121 "modules.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__modules__Errors_27);
    }
#line 1124 "modules.m"
    {
#line 1124 "modules.m"
      parse_tree__modules__V_34_34 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0);
    }
#line 1127 "modules.m"
    {
#line 1127 "modules.m"
      parse_tree__modules__V_38_38 = mercury__dir__this_directory_0_f_0();
    }
#line 1122 "modules.m"
    {
#line 1122 "modules.m"
      MR_Word base;
#line 1122 "modules.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "modules.m"
      *parse_tree__modules__Module_24 = base;
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__SourceFileName_13));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__SourceFileModuleName_14));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__ModuleName_15));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__ModuleNameContext_16));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__PublicChildren_19));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__NestedChildren_20));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__FactDeps_21));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_34_34));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__ForeignIncludeFiles_22));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) ((MR_Integer) 1));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__ItemBlocksCord_26));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__Specs_18));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__Errors_27));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__MaybeTimestampMap_23));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) ((MR_Integer) 1));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_38_38));
#line 1122 "modules.m"
    }
#line 1109 "modules.m"
  }
#line 1100 "modules.m"
}

#line 889 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__wrap_symname_1_f_0(
#line 889 "modules.m"
  MR_Word parse_tree__modules__ModuleName_3)
#line 889 "modules.m"
{
#line 891 "modules.m"
  {
#line 891 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 891 "modules.m"
    MR_Word parse_tree__modules__HeadVar__2_2;

#line 891 "modules.m"
    {
#line 891 "modules.m"
      parse_tree__modules__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 891 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__modules__ModuleName_3));
#line 891 "modules.m"
    }
#line 891 "modules.m"
    return parse_tree__modules__HeadVar__2_2;
#line 891 "modules.m"
  }
#line 889 "modules.m"
}

#line 802 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_imported_ancestor_5_p_0(
#line 802 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 802 "modules.m"
  MR_Word parse_tree__modules__Context_7,
#line 802 "modules.m"
  MR_Word parse_tree__modules__AncestorName_8,
#line 802 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_15,
#line 802 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_16)
#line 802 "modules.m"
{
#line 805 "modules.m"
  {
#line 805 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 805 "modules.m"
    MR_Word parse_tree__modules__MainPieces_10;
#line 805 "modules.m"
    MR_Word parse_tree__modules__Msg_12;
#line 805 "modules.m"
    MR_Word parse_tree__modules__Spec_14;
#line 805 "modules.m"
    MR_Word parse_tree__modules__V_19_19;
#line 805 "modules.m"
    MR_Word parse_tree__modules__V_20_20;
#line 805 "modules.m"
    MR_Word parse_tree__modules__V_21_21;
#line 805 "modules.m"
    MR_Word parse_tree__modules__V_24_24;
#line 805 "modules.m"
    MR_Word parse_tree__modules__V_25_25;
#line 805 "modules.m"
    MR_Word parse_tree__modules__V_39_39;
#line 805 "modules.m"
    MR_Word parse_tree__modules__V_40_40;
#line 805 "modules.m"
    MR_Word parse_tree__modules__V_43_43;
#line 805 "modules.m"
    MR_Word parse_tree__modules__V_44_44;
#line 805 "modules.m"
    MR_Word parse_tree__modules__V_55_55;

#line 806 "modules.m"
    {
#line 806 "modules.m"
      parse_tree__modules__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 806 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_20_20, 1) = ((MR_Box) (parse_tree__modules__ModuleName_6));
#line 806 "modules.m"
    }
#line 808 "modules.m"
    {
#line 808 "modules.m"
      parse_tree__modules__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 808 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_25_25, 1) = ((MR_Box) (parse_tree__modules__AncestorName_8));
#line 808 "modules.m"
    }
#line 808 "modules.m"
    {
#line 808 "modules.m"
      parse_tree__modules__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_24_24, 0) = ((MR_Box) (parse_tree__modules__V_25_25));
#line 808 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[75])));
#line 808 "modules.m"
    }
#line 807 "modules.m"
    {
#line 807 "modules.m"
      parse_tree__modules__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[73])));
#line 807 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_21_21, 1) = ((MR_Box) (parse_tree__modules__V_24_24));
#line 807 "modules.m"
    }
#line 806 "modules.m"
    {
#line 806 "modules.m"
      parse_tree__modules__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_19_19, 0) = ((MR_Box) (parse_tree__modules__V_20_20));
#line 806 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_19_19, 1) = ((MR_Box) (parse_tree__modules__V_21_21));
#line 806 "modules.m"
    }
#line 806 "modules.m"
    {
#line 806 "modules.m"
      parse_tree__modules__MainPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[72])));
#line 806 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_10, 1) = ((MR_Box) (parse_tree__modules__V_19_19));
#line 806 "modules.m"
    }
#line 814 "modules.m"
    {
#line 814 "modules.m"
      parse_tree__modules__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 814 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 0) = ((MR_Box) (parse_tree__modules__MainPieces_10));
#line 814 "modules.m"
    }
#line 814 "modules.m"
    {
#line 814 "modules.m"
      parse_tree__modules__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 0) = ((MR_Box) (parse_tree__modules__V_44_44));
#line 814 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[77])));
#line 814 "modules.m"
    }
#line 813 "modules.m"
    {
#line 813 "modules.m"
      parse_tree__modules__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 813 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 1) = ((MR_Box) (parse_tree__modules__V_43_43));
#line 813 "modules.m"
    }
#line 815 "modules.m"
    {
#line 815 "modules.m"
      parse_tree__modules__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_39_39, 0) = ((MR_Box) (parse_tree__modules__V_40_40));
#line 815 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 815 "modules.m"
    }
#line 812 "modules.m"
    {
#line 812 "modules.m"
      parse_tree__modules__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 812 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_12, 0) = ((MR_Box) (parse_tree__modules__Context_7));
#line 812 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_12, 1) = ((MR_Box) (parse_tree__modules__V_39_39));
#line 812 "modules.m"
    }
#line 818 "modules.m"
    {
#line 818 "modules.m"
      parse_tree__modules__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_55_55, 0) = ((MR_Box) (parse_tree__modules__Msg_12));
#line 818 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 818 "modules.m"
    }
#line 818 "modules.m"
    {
#line 818 "modules.m"
      parse_tree__modules__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 818 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[2])));
#line 818 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 818 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_14, 2) = ((MR_Box) (parse_tree__modules__V_55_55));
#line 818 "modules.m"
    }
#line 819 "modules.m"
    {
#line 819 "modules.m"
      MR_Word base;
#line 819 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_16 = base;
#line 819 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_14));
#line 819 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_15));
#line 819 "modules.m"
    }
#line 805 "modules.m"
  }
#line 802 "modules.m"
}

#line 784 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_3(
#line 784 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 784 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 784 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 784 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 784 "modules.m"
{
#line 784 "modules.m"
  {
#line 784 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 784 "modules.m"
    MR_Word parse_tree__modules__conv1_STATE_VARIABLE_Specs_16;

#line 784 "modules.m"
    {
#line 784 "modules.m"
      parse_tree__modules__warn_imported_ancestor_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv1_STATE_VARIABLE_Specs_16);
    }
#line 784 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_STATE_VARIABLE_Specs_16));
#line 784 "modules.m"
  }
#line 784 "modules.m"
}

#line 777 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_1(
#line 777 "modules.m"
  void * parse_tree__modules__env_ptr_arg)
#line 777 "modules.m"
{
#line 777 "modules.m"
  {
#line 777 "modules.m"
    struct parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0_s * parse_tree__modules__env_ptr = (struct parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0_s *) parse_tree__modules__env_ptr_arg;

#line 777 "modules.m"
    *((parse_tree__modules__env_ptr)->parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((parse_tree__modules__env_ptr)->parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__conv0_HeadVar__4_22));
#line 777 "modules.m"
    {
#line 777 "modules.m"
      ((parse_tree__modules__env_ptr)->parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__cont)((parse_tree__modules__env_ptr)->parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__cont_env_ptr);
#line 777 "modules.m"
      return;
    }
#line 777 "modules.m"
  }
#line 777 "modules.m"
}

#line 777 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2(
#line 777 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 777 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 777 "modules.m"
  MR_Cont parse_tree__modules__cont,
#line 777 "modules.m"
  void * parse_tree__modules__cont_env_ptr)
#line 777 "modules.m"
{
#line 777 "modules.m"
  {
#line 777 "modules.m"
    struct parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0_s parse_tree__modules__env;

#line 777 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__wrapper_arg_1 = parse_tree__modules__wrapper_arg_1;
#line 777 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__cont = parse_tree__modules__cont;
#line 777 "modules.m"
    (parse_tree__modules__env).parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__cont_env_ptr = parse_tree__modules__cont_env_ptr;
#line 777 "modules.m"
    {
#line 777 "modules.m"
      MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;

#line 777 "modules.m"
      {
#line 777 "modules.m"
        parse_tree__modules__IntroducedFrom__pred__warn_if_import_self_or_ancestor__777__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), &(parse_tree__modules__env).parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2_env_0__conv0_HeadVar__4_22, parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_1, &parse_tree__modules__env);
      }
#line 777 "modules.m"
    }
#line 777 "modules.m"
  }
#line 777 "modules.m"
}

#line 771 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0(
#line 771 "modules.m"
  MR_Word parse_tree__modules__ModuleName_8,
#line 771 "modules.m"
  MR_Word parse_tree__modules__Context_9,
#line 771 "modules.m"
  MR_Word parse_tree__modules__AncestorModules_10,
#line 771 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_11,
#line 771 "modules.m"
  MR_Word parse_tree__modules__UsedModules_12,
#line 771 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_20,
#line 771 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_21)
#line 771 "modules.m"
{
#line 776 "modules.m"
  {
#line 776 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 776 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_54_54;
#line 776 "modules.m"
    MR_Word parse_tree__modules__IsImportedAncestor_14;
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_23_23;
#line 776 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_24_24;
#line 783 "modules.m"
    MR_Box parse_tree__modules__conv2_STATE_VARIABLE_Specs_24_24;

#line 777 "modules.m"
    {
#line 777 "modules.m"
      parse_tree__modules__IsImportedAncestor_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 777 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__IsImportedAncestor_14, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_8[0]));
#line 777 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__IsImportedAncestor_14, 1) = ((MR_Box) (parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_2));
#line 777 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__IsImportedAncestor_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 777 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__IsImportedAncestor_14, 3) = ((MR_Box) (parse_tree__modules__AncestorModules_10));
#line 777 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__IsImportedAncestor_14, 4) = ((MR_Box) (parse_tree__modules__ImportedModules_11));
#line 777 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__IsImportedAncestor_14, 5) = ((MR_Box) (parse_tree__modules__UsedModules_12));
#line 777 "modules.m"
    }
#line 784 "modules.m"
    {
#line 784 "modules.m"
      parse_tree__modules__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 784 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_23_23, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_9[0]));
#line 784 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_23_23, 1) = ((MR_Box) (parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_3));
#line 784 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 784 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_23_23, 3) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 784 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_23_23, 4) = ((MR_Box) (parse_tree__modules__Context_9));
#line 784 "modules.m"
    }
#line 7199 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_54_54 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 783 "modules.m"
    {
#line 783 "modules.m"
      mercury__solutions__aggregate_4_p_3(parse_tree__modules__TypeCtorInfo_54_54, (MR_Word) &parse_tree__modules_scalar_common_1[8], parse_tree__modules__IsImportedAncestor_14, parse_tree__modules__V_23_23, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_20)), &parse_tree__modules__conv2_STATE_VARIABLE_Specs_24_24);
    }
#line 783 "modules.m"
    parse_tree__modules__STATE_VARIABLE_Specs_24_24 = ((MR_Word) parse_tree__modules__conv2_STATE_VARIABLE_Specs_24_24);
#line 786 "modules.m"
    {
#line 786 "modules.m"
      parse_tree__modules__succeeded = mercury__list__member_2_p_0(parse_tree__modules__TypeCtorInfo_54_54, ((MR_Box) (parse_tree__modules__ModuleName_8)), parse_tree__modules__ImportedModules_11);
    }
#line 787 "modules.m"
    if (!(parse_tree__modules__succeeded))
#line 787 "modules.m"
      {
#line 787 "modules.m"
        parse_tree__modules__succeeded = mercury__list__member_2_p_0(parse_tree__modules__TypeCtorInfo_54_54, ((MR_Box) (parse_tree__modules__ModuleName_8)), parse_tree__modules__UsedModules_12);
      }
#line 798 "modules.m"
    if (parse_tree__modules__succeeded)
#line 791 "modules.m"
      {
#line 791 "modules.m"
        MR_Word parse_tree__modules__SelfPieces_16;
#line 791 "modules.m"
        MR_Word parse_tree__modules__SelfMsg_17;
#line 791 "modules.m"
        MR_Word parse_tree__modules__SelfSpec_19;
#line 791 "modules.m"
        MR_Word parse_tree__modules__V_27_27;
#line 791 "modules.m"
        MR_Word parse_tree__modules__V_28_28;
#line 791 "modules.m"
        MR_Word parse_tree__modules__V_33_33;
#line 791 "modules.m"
        MR_Word parse_tree__modules__V_34_34;
#line 791 "modules.m"
        MR_Word parse_tree__modules__V_37_37;
#line 791 "modules.m"
        MR_Word parse_tree__modules__V_38_38;
#line 791 "modules.m"
        MR_Word parse_tree__modules__V_46_46;

#line 791 "modules.m"
        {
#line 791 "modules.m"
          parse_tree__modules__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 791 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_28_28, 1) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 791 "modules.m"
        }
#line 791 "modules.m"
        {
#line 791 "modules.m"
          parse_tree__modules__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_27_27, 0) = ((MR_Box) (parse_tree__modules__V_28_28));
#line 791 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[71])));
#line 791 "modules.m"
        }
#line 790 "modules.m"
        {
#line 790 "modules.m"
          parse_tree__modules__SelfPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__SelfPieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[69])));
#line 790 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__SelfPieces_16, 1) = ((MR_Box) (parse_tree__modules__V_27_27));
#line 790 "modules.m"
        }
#line 793 "modules.m"
        {
#line 793 "modules.m"
          parse_tree__modules__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 793 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_38_38, 0) = ((MR_Box) (parse_tree__modules__SelfPieces_16));
#line 793 "modules.m"
        }
#line 793 "modules.m"
        {
#line 793 "modules.m"
          parse_tree__modules__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_37_37, 0) = ((MR_Box) (parse_tree__modules__V_38_38));
#line 793 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 793 "modules.m"
        }
#line 793 "modules.m"
        {
#line 793 "modules.m"
          parse_tree__modules__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_34_34, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 793 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_34_34, 1) = ((MR_Box) (parse_tree__modules__V_37_37));
#line 793 "modules.m"
        }
#line 793 "modules.m"
        {
#line 793 "modules.m"
          parse_tree__modules__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 0) = ((MR_Box) (parse_tree__modules__V_34_34));
#line 793 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 793 "modules.m"
        }
#line 792 "modules.m"
        {
#line 792 "modules.m"
          parse_tree__modules__SelfMsg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfMsg_17, 0) = ((MR_Box) (parse_tree__modules__Context_9));
#line 792 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfMsg_17, 1) = ((MR_Box) (parse_tree__modules__V_33_33));
#line 792 "modules.m"
        }
#line 796 "modules.m"
        {
#line 796 "modules.m"
          parse_tree__modules__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_46_46, 0) = ((MR_Box) (parse_tree__modules__SelfMsg_17));
#line 796 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 796 "modules.m"
        }
#line 796 "modules.m"
        {
#line 796 "modules.m"
          parse_tree__modules__SelfSpec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 796 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfSpec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[2])));
#line 796 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfSpec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 796 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfSpec_19, 2) = ((MR_Box) (parse_tree__modules__V_46_46));
#line 796 "modules.m"
        }
#line 797 "modules.m"
        {
#line 797 "modules.m"
          MR_Word base;
#line 797 "modules.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Specs_21 = base;
#line 797 "modules.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__SelfSpec_19));
#line 797 "modules.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_24_24));
#line 797 "modules.m"
        }
#line 791 "modules.m"
      }
#line 798 "modules.m"
    else
#line 798 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_21 = parse_tree__modules__STATE_VARIABLE_Specs_24_24;
#line 776 "modules.m"
  }
#line 771 "modules.m"
}

#line 724 "modules.m"
static void MR_CALL 
parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(
#line 724 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 724 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_0_2,
#line 724 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevClauses_3,
#line 724 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4,
#line 724 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevImplDecls_5)
#line 724 "modules.m"
{
#line 727 "modules.m"
  while (MR_TRUE)
#line 727 "modules.m"
    {
#line 727 "modules.m"
      /* tailcall optimized into a loop */
#line 727 "modules.m"
      {
#line 727 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 727 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 727 "modules.m"
          {
#line 727 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_RevImplDecls_5 = parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4;
#line 727 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_RevClauses_3 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 727 "modules.m"
          }
#line 727 "modules.m"
        else
#line 729 "modules.m"
          {
#line 729 "modules.m"
            MR_Word parse_tree__modules__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 729 "modules.m"
            MR_Word parse_tree__modules__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 729 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41;
#line 729 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_43_43;

#line 736 "modules.m"
#line 736 "modules.m"
            switch (MR_tag((MR_Word) parse_tree__modules__Item_12)) {
#line 736 "modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 736 "modules.m"
              case (MR_Integer) 0:
#line 736 "modules.m"
              case (MR_Integer) 2:
#line 762 "modules.m"
                {
#line 763 "modules.m"
                  {
#line 763 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 763 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 763 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4));
#line 763 "modules.m"
                  }
#line 762 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_RevClauses_43_43 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 762 "modules.m"
                }
#line 736 "modules.m"
                break;
#line 736 "modules.m"
              case (MR_Integer) 1:
#line 734 "modules.m"
                {
#line 735 "modules.m"
                  {
#line 735 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_RevClauses_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_43_43, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 735 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_43_43, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevClauses_0_2));
#line 735 "modules.m"
                  }
#line 734 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41 = parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4;
#line 734 "modules.m"
                }
#line 736 "modules.m"
                break;
#line 736 "modules.m"
              case (MR_Integer) 3:
#line 736 "modules.m"
#line 736 "modules.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_12, (MR_Integer) 0)))) {
#line 736 "modules.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 736 "modules.m"
                  case (MR_Integer) 0:
#line 736 "modules.m"
                  case (MR_Integer) 1:
#line 736 "modules.m"
                  case (MR_Integer) 2:
#line 736 "modules.m"
                  case (MR_Integer) 3:
#line 736 "modules.m"
                  case (MR_Integer) 5:
#line 736 "modules.m"
                  case (MR_Integer) 6:
#line 736 "modules.m"
                  case (MR_Integer) 7:
#line 736 "modules.m"
                  case (MR_Integer) 10:
#line 736 "modules.m"
                  case (MR_Integer) 11:
#line 762 "modules.m"
                    {
#line 763 "modules.m"
                      {
#line 763 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 763 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 763 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4));
#line 763 "modules.m"
                      }
#line 762 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_RevClauses_43_43 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 762 "modules.m"
                    }
#line 736 "modules.m"
                    break;
#line 736 "modules.m"
                  case (MR_Integer) 4:
#line 737 "modules.m"
                    {
#line 737 "modules.m"
                      MR_Word parse_tree__modules__ItemPragma_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_12, (MR_Integer) 1)));
#line 737 "modules.m"
                      MR_Word parse_tree__modules__Pragma_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 0)));
#line 737 "modules.m"
                      MR_Word parse_tree__modules__AllowedInInterface_24;
#line 738 "modules.m"
                      MR_Word parse_tree__modules__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 1)));
#line 738 "modules.m"
                      MR_Word parse_tree__modules__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 2)));
#line 738 "modules.m"
                      MR_Integer parse_tree__modules__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 3)));

#line 739 "modules.m"
                      {
#line 739 "modules.m"
                        parse_tree__modules__AllowedInInterface_24 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(parse_tree__modules__Pragma_20);
                      }
#line 743 "modules.m"
#line 743 "modules.m"
                      switch (parse_tree__modules__AllowedInInterface_24) {
#line 743 "modules.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 743 "modules.m"
                        case (MR_Integer) 0:
#line 741 "modules.m"
                          {
#line 742 "modules.m"
                            {
#line 742 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_RevClauses_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_43_43, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 742 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_43_43, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevClauses_0_2));
#line 742 "modules.m"
                            }
#line 741 "modules.m"
                            parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41 = parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4;
#line 741 "modules.m"
                          }
#line 743 "modules.m"
                          break;
#line 743 "modules.m"
                        case (MR_Integer) 1:
#line 744 "modules.m"
                          {
#line 745 "modules.m"
                            {
#line 745 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 745 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4));
#line 745 "modules.m"
                            }
#line 744 "modules.m"
                            parse_tree__modules__STATE_VARIABLE_RevClauses_43_43 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 744 "modules.m"
                          }
#line 743 "modules.m"
                          break;
#line 743 "modules.m"
                      }
#line 737 "modules.m"
                    }
#line 736 "modules.m"
                    break;
#line 736 "modules.m"
                  case (MR_Integer) 8:
#line 736 "modules.m"
                  case (MR_Integer) 9:
#line 734 "modules.m"
                    {
#line 735 "modules.m"
                      {
#line 735 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_RevClauses_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_43_43, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 735 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_43_43, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevClauses_0_2));
#line 735 "modules.m"
                      }
#line 734 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41 = parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4;
#line 734 "modules.m"
                    }
#line 736 "modules.m"
                    break;
#line 736 "modules.m"
                }
#line 736 "modules.m"
                break;
#line 736 "modules.m"
            }
#line 765 "modules.m"
            /* direct tailcall eliminated */
#line 765 "modules.m"
            {
#line 765 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__Items_13;
#line 765 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_0__tmp_copy_2 = parse_tree__modules__STATE_VARIABLE_RevClauses_43_43;
#line 765 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_RevImplDecls_0__tmp_copy_4 = parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41;

#line 765 "modules.m"
              parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4 = parse_tree__modules__STATE_VARIABLE_RevImplDecls_0__tmp_copy_4;
#line 765 "modules.m"
              parse_tree__modules__STATE_VARIABLE_RevClauses_0_2 = parse_tree__modules__STATE_VARIABLE_RevClauses_0__tmp_copy_2;
#line 765 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 765 "modules.m"
            }
#line 765 "modules.m"
            continue;
#line 729 "modules.m"
          }
#line 727 "modules.m"
      }
#line 727 "modules.m"
      break;
#line 727 "modules.m"
    }
#line 724 "modules.m"
}

#line 711 "modules.m"
static void MR_CALL 
parse_tree__modules__split_items_in_blocks_into_clauses_and_decls_5_p_0(
#line 711 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 711 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_0_2,
#line 711 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevClauses_3,
#line 711 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4,
#line 711 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevImplDecls_5)
#line 711 "modules.m"
{
#line 714 "modules.m"
  while (MR_TRUE)
#line 714 "modules.m"
    {
#line 714 "modules.m"
      /* tailcall optimized into a loop */
#line 714 "modules.m"
      {
#line 714 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 714 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 714 "modules.m"
          {
#line 714 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_RevImplDecls_5 = parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4;
#line 714 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_RevClauses_3 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 714 "modules.m"
          }
#line 714 "modules.m"
        else
#line 716 "modules.m"
          {
#line 716 "modules.m"
            MR_Word parse_tree__modules__RawItemBlock_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 716 "modules.m"
            MR_Word parse_tree__modules__RawItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 716 "modules.m"
            MR_Word parse_tree__modules__Items_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_12, (MR_Integer) 2)));
#line 716 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_23_23;
#line 716 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_RevImplDecls_24_24;
#line 719 "modules.m"
            MR_Word parse_tree__modules__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_12, (MR_Integer) 0)));
#line 719 "modules.m"
            MR_Word parse_tree__modules__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_12, (MR_Integer) 1)));

#line 720 "modules.m"
            {
#line 720 "modules.m"
              parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(parse_tree__modules__Items_18, parse_tree__modules__STATE_VARIABLE_RevClauses_0_2, &parse_tree__modules__STATE_VARIABLE_RevClauses_23_23, parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4, &parse_tree__modules__STATE_VARIABLE_RevImplDecls_24_24);
            }
#line 721 "modules.m"
            /* direct tailcall eliminated */
#line 721 "modules.m"
            {
#line 721 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__RawItemBlocks_13;
#line 721 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_0__tmp_copy_2 = parse_tree__modules__STATE_VARIABLE_RevClauses_23_23;
#line 721 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_RevImplDecls_0__tmp_copy_4 = parse_tree__modules__STATE_VARIABLE_RevImplDecls_24_24;

#line 721 "modules.m"
              parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4 = parse_tree__modules__STATE_VARIABLE_RevImplDecls_0__tmp_copy_4;
#line 721 "modules.m"
              parse_tree__modules__STATE_VARIABLE_RevClauses_0_2 = parse_tree__modules__STATE_VARIABLE_RevClauses_0__tmp_copy_2;
#line 721 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 721 "modules.m"
            }
#line 721 "modules.m"
            continue;
#line 716 "modules.m"
          }
#line 714 "modules.m"
      }
#line 714 "modules.m"
      break;
#line 714 "modules.m"
    }
#line 711 "modules.m"
}

#line 401 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_no_exports_warning_6_p_0(
#line 401 "modules.m"
  MR_Word parse_tree__modules__Globals_7,
#line 401 "modules.m"
  MR_Word parse_tree__modules__ModuleName_8,
#line 401 "modules.m"
  MR_Word parse_tree__modules__Context0_9,
#line 401 "modules.m"
  MR_Word * parse_tree__modules__Spec_10)
#line 401 "modules.m"
{
#line 404 "modules.m"
  {
#line 404 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 404 "modules.m"
    MR_Word parse_tree__modules__Context_13;
#line 404 "modules.m"
    MR_Word parse_tree__modules__Component_15;
#line 404 "modules.m"
    MR_Word parse_tree__modules__Msg_16;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_29_29;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_30_30;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_31_31;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_34_34;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_37_37;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_38_38;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_100_100;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_103_103;
#line 410 "modules.m"
    MR_Word parse_tree__modules__V_105_105;

#line 410 "modules.m"
    {
#line 410 "modules.m"
      parse_tree__modules__V_105_105 = mercury__term__context_init_0_f_0();
    }
#line 410 "modules.m"
    {
#line 410 "modules.m"
      parse_tree__modules__succeeded = mercury__term____Unify____context_0_0(parse_tree__modules__Context0_9, parse_tree__modules__V_105_105);
    }
#line 414 "modules.m"
    if (parse_tree__modules__succeeded)
#line 412 "modules.m"
      {
#line 412 "modules.m"
        MR_String parse_tree__modules__FileName_12;

#line 411 "modules.m"
        {
#line 411 "modules.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__modules__Globals_7, parse_tree__modules__ModuleName_8, (MR_String) ".m", (MR_Integer) 1, &parse_tree__modules__FileName_12);
        }
#line 413 "modules.m"
        {
#line 413 "modules.m"
          parse_tree__modules__Context_13 = mercury__term__context_init_2_f_0(parse_tree__modules__FileName_12, (MR_Integer) 1);
        }
#line 412 "modules.m"
      }
#line 414 "modules.m"
    else
#line 415 "modules.m"
      parse_tree__modules__Context_13 = parse_tree__modules__Context0_9;
#line 421 "modules.m"
    {
#line 421 "modules.m"
      parse_tree__modules__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 421 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_38_38, 1) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 421 "modules.m"
    }
#line 421 "modules.m"
    {
#line 421 "modules.m"
      parse_tree__modules__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_37_37, 0) = ((MR_Box) (parse_tree__modules__V_38_38));
#line 421 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[16])));
#line 421 "modules.m"
    }
#line 421 "modules.m"
    {
#line 421 "modules.m"
      parse_tree__modules__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[68])));
#line 421 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_34_34, 1) = ((MR_Box) (parse_tree__modules__V_37_37));
#line 421 "modules.m"
    }
#line 420 "modules.m"
    {
#line 420 "modules.m"
      parse_tree__modules__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_6[1])));
#line 420 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_31_31, 1) = ((MR_Box) (parse_tree__modules__V_34_34));
#line 420 "modules.m"
    }
#line 420 "modules.m"
    {
#line 420 "modules.m"
      parse_tree__modules__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 420 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_30_30, 0) = ((MR_Box) (parse_tree__modules__V_31_31));
#line 420 "modules.m"
    }
#line 422 "modules.m"
    {
#line 422 "modules.m"
      parse_tree__modules__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_29_29, 0) = ((MR_Box) (parse_tree__modules__V_30_30));
#line 422 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[48])));
#line 422 "modules.m"
    }
#line 419 "modules.m"
    {
#line 419 "modules.m"
      parse_tree__modules__Component_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__Component_15, 0) = ((MR_Box) (((MR_Integer) 9 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 419 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__Component_15, 1) = ((MR_Box) (parse_tree__modules__V_29_29));
#line 419 "modules.m"
    }
#line 433 "modules.m"
    {
#line 433 "modules.m"
      parse_tree__modules__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_100_100, 0) = ((MR_Box) (parse_tree__modules__Component_15));
#line 433 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "modules.m"
    }
#line 433 "modules.m"
    {
#line 433 "modules.m"
      parse_tree__modules__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_16, 0) = ((MR_Box) (parse_tree__modules__Context_13));
#line 433 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_16, 1) = ((MR_Box) (parse_tree__modules__V_100_100));
#line 433 "modules.m"
    }
#line 434 "modules.m"
    {
#line 434 "modules.m"
      parse_tree__modules__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_103_103, 0) = ((MR_Box) (parse_tree__modules__Msg_16));
#line 434 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "modules.m"
    }
#line 434 "modules.m"
    {
#line 434 "modules.m"
      MR_Word base;
#line 434 "modules.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 434 "modules.m"
      *parse_tree__modules__Spec_10 = base;
#line 434 "modules.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[1])));
#line 434 "modules.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 434 "modules.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_103_103));
#line 434 "modules.m"
    }
#line 404 "modules.m"
  }
#line 401 "modules.m"
}

#line 380 "modules.m"
static void MR_CALL 
parse_tree__modules__do_ms_interface_items_export_anything_2_p_0(
#line 380 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 380 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2)
#line 380 "modules.m"
{
#line 383 "modules.m"
  while (MR_TRUE)
#line 383 "modules.m"
    {
#line 383 "modules.m"
      /* tailcall optimized into a loop */
#line 383 "modules.m"
      {
#line 383 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 383 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "modules.m"
          *parse_tree__modules__HeadVar__2_2 = (MR_Integer) 0;
#line 383 "modules.m"
        else
#line 384 "modules.m"
          {
#line 384 "modules.m"
            MR_Word parse_tree__modules__Item_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 384 "modules.m"
            MR_Word parse_tree__modules__Items_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));

#line 388 "modules.m"
            if (((MR_tag((MR_Word) parse_tree__modules__Item_3)) == (MR_mktag((MR_Integer) 0))))
#line 389 "modules.m"
              {
#line 389 "modules.m"
                MR_Word parse_tree__modules__ItemModuleDefn_7 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_3), (MR_Integer) 0);
#line 389 "modules.m"
                MR_Word parse_tree__modules__ModuleDefn_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_7, (MR_Integer) 0)));
#line 390 "modules.m"
                MR_Word parse_tree__modules__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_7, (MR_Integer) 1)));
#line 390 "modules.m"
                MR_Integer parse_tree__modules__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_7, (MR_Integer) 2)));
#line 391 "modules.m"
                MR_Word parse_tree__modules__V_11_11;

#line 391 "modules.m"
                parse_tree__modules__succeeded = ((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_8)) == (MR_mktag((MR_Integer) 0)));
#line 391 "modules.m"
                if (parse_tree__modules__succeeded)
#line 391 "modules.m"
                  parse_tree__modules__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleDefn_8, (MR_Integer) 0)));
#line 391 "modules.m"
                parse_tree__modules__succeeded = !(parse_tree__modules__succeeded);
#line 389 "modules.m"
              }
#line 388 "modules.m"
            else
#line 388 "modules.m"
            if (((((MR_tag((MR_Word) parse_tree__modules__Item_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_3, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 387 "modules.m"
              parse_tree__modules__succeeded = MR_TRUE;
#line 388 "modules.m"
            else
#line 388 "modules.m"
              parse_tree__modules__succeeded = MR_FALSE;
#line 396 "modules.m"
            if (parse_tree__modules__succeeded)
#line 395 "modules.m"
              {
#line 395 "modules.m"
                /* direct tailcall eliminated */
#line 395 "modules.m"
                {
#line 395 "modules.m"
                  MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__Items_4;

#line 395 "modules.m"
                  parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 395 "modules.m"
                }
#line 395 "modules.m"
                continue;
#line 395 "modules.m"
              }
#line 396 "modules.m"
            else
#line 398 "modules.m"
              *parse_tree__modules__HeadVar__2_2 = (MR_Integer) 1;
#line 384 "modules.m"
          }
#line 383 "modules.m"
      }
#line 383 "modules.m"
      break;
#line 383 "modules.m"
    }
#line 380 "modules.m"
}

#line 363 "modules.m"
static void MR_CALL 
parse_tree__modules__do_ms_interface_item_blocks_export_anything_2_p_0(
#line 363 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 363 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2)
#line 363 "modules.m"
{
#line 366 "modules.m"
  while (MR_TRUE)
#line 366 "modules.m"
    {
#line 366 "modules.m"
      /* tailcall optimized into a loop */
#line 366 "modules.m"
      {
#line 366 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 366 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "modules.m"
          *parse_tree__modules__HeadVar__2_2 = (MR_Integer) 0;
#line 366 "modules.m"
        else
#line 368 "modules.m"
          {
#line 368 "modules.m"
            MR_Word parse_tree__modules__RawItemBlock_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 368 "modules.m"
            MR_Word parse_tree__modules__RawItemBlocks_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 368 "modules.m"
            MR_Word parse_tree__modules__Section_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 0)));
#line 368 "modules.m"
            MR_Word parse_tree__modules__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 2)));
#line 369 "modules.m"
            MR_Word parse_tree__modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 1)));
#line 371 "modules.m"
            MR_Word parse_tree__modules__V_9_9;
#line 371 "modules.m"
            MR_Word parse_tree__modules__V_10_10;

#line 371 "modules.m"
            parse_tree__modules__succeeded = (parse_tree__modules__Section_6 == (MR_Integer) 0);
#line 371 "modules.m"
            if (parse_tree__modules__succeeded)
#line 371 "modules.m"
              {
#line 372 "modules.m"
                parse_tree__modules__V_9_9 = (MR_Integer) 1;
#line 372 "modules.m"
                {
#line 372 "modules.m"
                  parse_tree__modules__do_ms_interface_items_export_anything_2_p_0(parse_tree__modules__Items_8, &parse_tree__modules__V_10_10);
                }
#line 372 "modules.m"
                parse_tree__modules__succeeded = (parse_tree__modules__V_9_9 == parse_tree__modules__V_10_10);
#line 371 "modules.m"
              }
#line 375 "modules.m"
            if (parse_tree__modules__succeeded)
#line 374 "modules.m"
              *parse_tree__modules__HeadVar__2_2 = (MR_Integer) 1;
#line 375 "modules.m"
            else
#line 376 "modules.m"
              {
#line 376 "modules.m"
                /* direct tailcall eliminated */
#line 376 "modules.m"
                {
#line 376 "modules.m"
                  MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__RawItemBlocks_4;

#line 376 "modules.m"
                  parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 376 "modules.m"
                }
#line 376 "modules.m"
                continue;
#line 376 "modules.m"
              }
#line 368 "modules.m"
          }
#line 366 "modules.m"
      }
#line 366 "modules.m"
      break;
#line 366 "modules.m"
    }
#line 363 "modules.m"
}

#line 300 "modules.m"
void MR_CALL 
parse_tree__modules__get_included_modules_in_items_2_p_0(
#line 300 "modules.m"
  MR_Word parse_tree__modules__Items_3,
#line 300 "modules.m"
  MR_Word * parse_tree__modules__IncludedModuleNames_4)
#line 300 "modules.m"
{
#line 1609 "modules.m"
  {
#line 1609 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1609 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_7_7 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1609 "modules.m"
    MR_Word parse_tree__modules__IncludedModuleNamesCord_5;
#line 1609 "modules.m"
    MR_Word parse_tree__modules__V_6_6;

#line 1611 "modules.m"
    {
#line 1611 "modules.m"
      parse_tree__modules__V_6_6 = mercury__cord__init_0_f_0(parse_tree__modules__TypeCtorInfo_7_7);
    }
#line 1610 "modules.m"
    {
#line 1610 "modules.m"
      parse_tree__modules__get_included_modules_in_items_3_p_0(parse_tree__modules__Items_3, parse_tree__modules__V_6_6, &parse_tree__modules__IncludedModuleNamesCord_5);
    }
#line 1612 "modules.m"
    {
#line 1612 "modules.m"
      *parse_tree__modules__IncludedModuleNames_4 = mercury__cord__list_1_f_0(parse_tree__modules__TypeCtorInfo_7_7, parse_tree__modules__IncludedModuleNamesCord_5);
    }
#line 1609 "modules.m"
  }
#line 300 "modules.m"
}

#line 298 "modules.m"
void MR_CALL 
parse_tree__modules__get_included_modules_in_item_blocks_2_p_0(
#line 298 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_7,
#line 298 "modules.m"
  MR_Word parse_tree__modules__ItemBlocks_3,
#line 298 "modules.m"
  MR_Word * parse_tree__modules__IncludedModuleNames_4)
#line 298 "modules.m"
{
#line 1604 "modules.m"
  {
#line 1604 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1604 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_8_8 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1604 "modules.m"
    MR_Word parse_tree__modules__IncludedModuleNamesCord_5;
#line 1604 "modules.m"
    MR_Word parse_tree__modules__V_6_6;

#line 1606 "modules.m"
    {
#line 1606 "modules.m"
      parse_tree__modules__V_6_6 = mercury__cord__init_0_f_0(parse_tree__modules__TypeCtorInfo_8_8);
    }
#line 1605 "modules.m"
    {
#line 1605 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_99_108_117_100_101_100_95_109_111_100_117_108_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(parse_tree__modules__ItemBlocks_3, parse_tree__modules__V_6_6, &parse_tree__modules__IncludedModuleNamesCord_5);
    }
#line 1607 "modules.m"
    {
#line 1607 "modules.m"
      *parse_tree__modules__IncludedModuleNames_4 = mercury__cord__list_1_f_0(parse_tree__modules__TypeCtorInfo_8_8, parse_tree__modules__IncludedModuleNamesCord_5);
    }
#line 1604 "modules.m"
  }
#line 298 "modules.m"
}

#line 1477 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependency_file_4_p_0_3(
#line 1477 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1477 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1477 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1477 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 1477 "modules.m"
{
#line 1477 "modules.m"
  {
#line 1477 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1477 "modules.m"
    MR_Word parse_tree__modules__conv2_HeadVar__3_3;

#line 1477 "modules.m"
    {
#line 1477 "modules.m"
      parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv2_HeadVar__3_3);
    }
#line 1477 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_HeadVar__3_3));
#line 1477 "modules.m"
  }
#line 1477 "modules.m"
}

#line 1473 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependency_file_4_p_0_2(
#line 1473 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1473 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1473 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2)
#line 1473 "modules.m"
{
#line 1473 "modules.m"
  {
#line 1473 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1473 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__8_8;

#line 1473 "modules.m"
    {
#line 1473 "modules.m"
      parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 8))), ((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv1_HeadVar__8_8);
    }
#line 1473 "modules.m"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__8_8));
#line 1473 "modules.m"
  }
#line 1473 "modules.m"
}

#line 1470 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__generate_file_dependency_file_4_p_0_1(
#line 1470 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1470 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 1470 "modules.m"
{
#line 1470 "modules.m"
  {
#line 1470 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 1470 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__2_44;

#line 1470 "modules.m"
    {
#line 1470 "modules.m"
      parse_tree__modules__conv0_HeadVar__2_44 = parse_tree__modules__IntroducedFrom__func__build_deps_map__1470__1_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 1470 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__2_44));
#line 1470 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 1470 "modules.m"
  }
#line 1470 "modules.m"
}

#line 281 "modules.m"
void MR_CALL 
parse_tree__modules__generate_file_dependency_file_4_p_0(
#line 281 "modules.m"
  MR_Word parse_tree__modules__Globals_5,
#line 281 "modules.m"
  MR_String parse_tree__modules__FileName_6)
#line 281 "modules.m"
{
#line 1450 "modules.m"
  {
#line 1450 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__TypeInfo_41_50;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_42_51;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_48_57;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__ModuleName_8;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__DepsMap_9;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__ParseTreeSrc_24;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__Specs0_25;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__Error_26;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__CompUnits_27;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__Specs_28;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__NestedModuleNames_33;
#line 1450 "modules.m"
    MR_String parse_tree__modules__SourceFileName_34;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__ModuleAndImportsList_35;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__DepsMap0_36;
#line 1450 "modules.m"
    MR_Word parse_tree__modules__V_47_47;
#line 1462 "modules.m"
    MR_Word parse_tree__modules__V_23_23;
#line 1467 "modules.m"
    MR_Word parse_tree__modules__V_29_29;
#line 1467 "modules.m"
    MR_Word parse_tree__modules__V_30_30;
#line 1469 "modules.m"
    MR_Integer parse_tree__modules___NumWarnings_31;
#line 1469 "modules.m"
    MR_Integer parse_tree__modules___NumErrors_32;
#line 1477 "modules.m"
    MR_Box parse_tree__modules__conv3_DepsMap_9;

#line 1462 "modules.m"
    {
#line 1462 "modules.m"
      parse_tree__read_modules__read_module_src_from_file_11_p_0(parse_tree__modules__Globals_5, parse_tree__modules__FileName_6, (MR_String) "Reading file", (MR_Integer) 1, (MR_Word) &parse_tree__modules_scalar_common_6[0], &parse_tree__modules__V_23_23, &parse_tree__modules__ParseTreeSrc_24, &parse_tree__modules__Specs0_25, &parse_tree__modules__Error_26);
    }
#line 1465 "modules.m"
    {
#line 1465 "modules.m"
      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(parse_tree__modules__ParseTreeSrc_24, &parse_tree__modules__CompUnits_27, parse_tree__modules__Specs0_25, &parse_tree__modules__Specs_28);
    }
#line 1467 "modules.m"
    parse_tree__modules__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeSrc_24, (MR_Integer) 0)));
#line 1467 "modules.m"
    parse_tree__modules__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeSrc_24, (MR_Integer) 1)));
#line 1467 "modules.m"
    parse_tree__modules__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeSrc_24, (MR_Integer) 2)));
#line 1469 "modules.m"
    {
#line 1469 "modules.m"
      parse_tree__error_util__write_error_specs_8_p_0(parse_tree__modules__Specs_28, parse_tree__modules__Globals_5, (MR_Integer) 0, &parse_tree__modules___NumWarnings_31, (MR_Integer) 0, &parse_tree__modules___NumErrors_32);
    }
#line 8377 "parse_tree.modules.c"
    parse_tree__modules__TypeInfo_41_50 = (MR_Word) &parse_tree__modules_scalar_common_1[11];
#line 8379 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_42_51 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1470 "modules.m"
    {
#line 1470 "modules.m"
      parse_tree__modules__NestedModuleNames_33 = mercury__list__map_2_f_0(parse_tree__modules__TypeInfo_41_50, parse_tree__modules__TypeCtorInfo_42_51, (MR_Word) &parse_tree__modules_scalar_common_2[18], parse_tree__modules__CompUnits_27);
    }
#line 1471 "modules.m"
    {
#line 1471 "modules.m"
      parse_tree__modules__SourceFileName_34 = mercury__string__f_43_43_2_f_0(parse_tree__modules__FileName_6, (MR_String) ".m");
    }
#line 1473 "modules.m"
    {
#line 1473 "modules.m"
      parse_tree__modules__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_7[0]));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 1) = ((MR_Box) (parse_tree__modules__generate_file_dependency_file_4_p_0_2));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 3) = ((MR_Box) (parse_tree__modules__Globals_5));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 4) = ((MR_Box) (parse_tree__modules__SourceFileName_34));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 5) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 6) = ((MR_Box) (parse_tree__modules__NestedModuleNames_33));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 8) = ((MR_Box) (parse_tree__modules__Error_26));
#line 1473 "modules.m"
    }
#line 8415 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_48_57 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
#line 1472 "modules.m"
    {
#line 1472 "modules.m"
      mercury__list__map_3_p_0(parse_tree__modules__TypeInfo_41_50, parse_tree__modules__TypeCtorInfo_48_57, parse_tree__modules__V_47_47, parse_tree__modules__CompUnits_27, &parse_tree__modules__ModuleAndImportsList_35);
    }
#line 1476 "modules.m"
    {
#line 1476 "modules.m"
      mercury__map__init_1_p_0(parse_tree__modules__TypeCtorInfo_42_51, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__modules__DepsMap0_36);
    }
#line 1477 "modules.m"
    {
#line 1477 "modules.m"
      mercury__list__foldl_4_p_0(parse_tree__modules__TypeCtorInfo_48_57, (MR_Word) &parse_tree__modules_scalar_common_2[0], (MR_Word) &parse_tree__modules_scalar_common_2[19], parse_tree__modules__ModuleAndImportsList_35, ((MR_Box) (parse_tree__modules__DepsMap0_36)), &parse_tree__modules__conv3_DepsMap_9);
    }
#line 1477 "modules.m"
    parse_tree__modules__DepsMap_9 = ((MR_Word) parse_tree__modules__conv3_DepsMap_9);
#line 1452 "modules.m"
    {
#line 1452 "modules.m"
      parse_tree__modules__generate_dependencies_7_p_0(parse_tree__modules__Globals_5, (MR_Integer) 0, (MR_Integer) 0, parse_tree__modules__ModuleName_8, parse_tree__modules__DepsMap_9);
#line 1452 "modules.m"
      return;
    }
#line 1450 "modules.m"
  }
#line 281 "modules.m"
}

#line 270 "modules.m"
void MR_CALL 
parse_tree__modules__generate_module_dependency_file_4_p_0(
#line 270 "modules.m"
  MR_Word parse_tree__modules__Globals_5,
#line 270 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6)
#line 270 "modules.m"
{
#line 1445 "modules.m"
  {
#line 1445 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1445 "modules.m"
    MR_Word parse_tree__modules__DepsMap_8;

#line 1446 "modules.m"
    {
#line 1446 "modules.m"
      mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__modules__DepsMap_8);
    }
#line 1447 "modules.m"
    {
#line 1447 "modules.m"
      parse_tree__modules__generate_dependencies_7_p_0(parse_tree__modules__Globals_5, (MR_Integer) 0, (MR_Integer) 0, parse_tree__modules__ModuleName_6, parse_tree__modules__DepsMap_8);
#line 1447 "modules.m"
      return;
    }
#line 1445 "modules.m"
  }
#line 270 "modules.m"
}

#line 1477 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependencies_4_p_0_3(
#line 1477 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1477 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1477 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1477 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 1477 "modules.m"
{
#line 1477 "modules.m"
  {
#line 1477 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1477 "modules.m"
    MR_Word parse_tree__modules__conv2_HeadVar__3_3;

#line 1477 "modules.m"
    {
#line 1477 "modules.m"
      parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv2_HeadVar__3_3);
    }
#line 1477 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_HeadVar__3_3));
#line 1477 "modules.m"
  }
#line 1477 "modules.m"
}

#line 1473 "modules.m"
static void MR_CALL 
parse_tree__modules__generate_file_dependencies_4_p_0_2(
#line 1473 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1473 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1473 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2)
#line 1473 "modules.m"
{
#line 1473 "modules.m"
  {
#line 1473 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1473 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__8_8;

#line 1473 "modules.m"
    {
#line 1473 "modules.m"
      parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 8))), ((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv1_HeadVar__8_8);
    }
#line 1473 "modules.m"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__8_8));
#line 1473 "modules.m"
  }
#line 1473 "modules.m"
}

#line 1470 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__generate_file_dependencies_4_p_0_1(
#line 1470 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1470 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 1470 "modules.m"
{
#line 1470 "modules.m"
  {
#line 1470 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 1470 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1470 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__2_44;

#line 1470 "modules.m"
    {
#line 1470 "modules.m"
      parse_tree__modules__conv0_HeadVar__2_44 = parse_tree__modules__IntroducedFrom__func__build_deps_map__1470__1_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 1470 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__2_44));
#line 1470 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 1470 "modules.m"
  }
#line 1470 "modules.m"
}

#line 259 "modules.m"
void MR_CALL 
parse_tree__modules__generate_file_dependencies_4_p_0(
#line 259 "modules.m"
  MR_Word parse_tree__modules__Globals_5,
#line 259 "modules.m"
  MR_String parse_tree__modules__FileName_6)
#line 259 "modules.m"
{
#line 1440 "modules.m"
  {
#line 1440 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__TypeInfo_41_50;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_42_51;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_48_57;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__ModuleName_8;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__DepsMap_9;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__ParseTreeSrc_24;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__Specs0_25;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__Error_26;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__CompUnits_27;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__Specs_28;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__NestedModuleNames_33;
#line 1440 "modules.m"
    MR_String parse_tree__modules__SourceFileName_34;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__ModuleAndImportsList_35;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__DepsMap0_36;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_47_47;
#line 1462 "modules.m"
    MR_Word parse_tree__modules__V_23_23;
#line 1467 "modules.m"
    MR_Word parse_tree__modules__V_29_29;
#line 1467 "modules.m"
    MR_Word parse_tree__modules__V_30_30;
#line 1469 "modules.m"
    MR_Integer parse_tree__modules___NumWarnings_31;
#line 1469 "modules.m"
    MR_Integer parse_tree__modules___NumErrors_32;
#line 1477 "modules.m"
    MR_Box parse_tree__modules__conv3_DepsMap_9;

#line 1462 "modules.m"
    {
#line 1462 "modules.m"
      parse_tree__read_modules__read_module_src_from_file_11_p_0(parse_tree__modules__Globals_5, parse_tree__modules__FileName_6, (MR_String) "Reading file", (MR_Integer) 1, (MR_Word) &parse_tree__modules_scalar_common_6[0], &parse_tree__modules__V_23_23, &parse_tree__modules__ParseTreeSrc_24, &parse_tree__modules__Specs0_25, &parse_tree__modules__Error_26);
    }
#line 1465 "modules.m"
    {
#line 1465 "modules.m"
      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(parse_tree__modules__ParseTreeSrc_24, &parse_tree__modules__CompUnits_27, parse_tree__modules__Specs0_25, &parse_tree__modules__Specs_28);
    }
#line 1467 "modules.m"
    parse_tree__modules__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeSrc_24, (MR_Integer) 0)));
#line 1467 "modules.m"
    parse_tree__modules__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeSrc_24, (MR_Integer) 1)));
#line 1467 "modules.m"
    parse_tree__modules__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeSrc_24, (MR_Integer) 2)));
#line 1469 "modules.m"
    {
#line 1469 "modules.m"
      parse_tree__error_util__write_error_specs_8_p_0(parse_tree__modules__Specs_28, parse_tree__modules__Globals_5, (MR_Integer) 0, &parse_tree__modules___NumWarnings_31, (MR_Integer) 0, &parse_tree__modules___NumErrors_32);
    }
#line 8650 "parse_tree.modules.c"
    parse_tree__modules__TypeInfo_41_50 = (MR_Word) &parse_tree__modules_scalar_common_1[11];
#line 8652 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_42_51 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1470 "modules.m"
    {
#line 1470 "modules.m"
      parse_tree__modules__NestedModuleNames_33 = mercury__list__map_2_f_0(parse_tree__modules__TypeInfo_41_50, parse_tree__modules__TypeCtorInfo_42_51, (MR_Word) &parse_tree__modules_scalar_common_2[16], parse_tree__modules__CompUnits_27);
    }
#line 1471 "modules.m"
    {
#line 1471 "modules.m"
      parse_tree__modules__SourceFileName_34 = mercury__string__f_43_43_2_f_0(parse_tree__modules__FileName_6, (MR_String) ".m");
    }
#line 1473 "modules.m"
    {
#line 1473 "modules.m"
      parse_tree__modules__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_7[0]));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 1) = ((MR_Box) (parse_tree__modules__generate_file_dependencies_4_p_0_2));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 3) = ((MR_Box) (parse_tree__modules__Globals_5));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 4) = ((MR_Box) (parse_tree__modules__SourceFileName_34));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 5) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 6) = ((MR_Box) (parse_tree__modules__NestedModuleNames_33));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1473 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_47_47, 8) = ((MR_Box) (parse_tree__modules__Error_26));
#line 1473 "modules.m"
    }
#line 8688 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_48_57 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
#line 1472 "modules.m"
    {
#line 1472 "modules.m"
      mercury__list__map_3_p_0(parse_tree__modules__TypeInfo_41_50, parse_tree__modules__TypeCtorInfo_48_57, parse_tree__modules__V_47_47, parse_tree__modules__CompUnits_27, &parse_tree__modules__ModuleAndImportsList_35);
    }
#line 1476 "modules.m"
    {
#line 1476 "modules.m"
      mercury__map__init_1_p_0(parse_tree__modules__TypeCtorInfo_42_51, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__modules__DepsMap0_36);
    }
#line 1477 "modules.m"
    {
#line 1477 "modules.m"
      mercury__list__foldl_4_p_0(parse_tree__modules__TypeCtorInfo_48_57, (MR_Word) &parse_tree__modules_scalar_common_2[0], (MR_Word) &parse_tree__modules_scalar_common_2[17], parse_tree__modules__ModuleAndImportsList_35, ((MR_Box) (parse_tree__modules__DepsMap0_36)), &parse_tree__modules__conv3_DepsMap_9);
    }
#line 1477 "modules.m"
    parse_tree__modules__DepsMap_9 = ((MR_Word) parse_tree__modules__conv3_DepsMap_9);
#line 1442 "modules.m"
    {
#line 1442 "modules.m"
      parse_tree__modules__generate_dependencies_7_p_0(parse_tree__modules__Globals_5, (MR_Integer) 1, (MR_Integer) 1, parse_tree__modules__ModuleName_8, parse_tree__modules__DepsMap_9);
#line 1442 "modules.m"
      return;
    }
#line 1440 "modules.m"
  }
#line 259 "modules.m"
}

#line 248 "modules.m"
void MR_CALL 
parse_tree__modules__generate_module_dependencies_4_p_0(
#line 248 "modules.m"
  MR_Word parse_tree__modules__Globals_5,
#line 248 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6)
#line 248 "modules.m"
{
#line 1435 "modules.m"
  {
#line 1435 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1435 "modules.m"
    MR_Word parse_tree__modules__DepsMap_8;

#line 1436 "modules.m"
    {
#line 1436 "modules.m"
      mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, &parse_tree__modules__DepsMap_8);
    }
#line 1437 "modules.m"
    {
#line 1437 "modules.m"
      parse_tree__modules__generate_dependencies_7_p_0(parse_tree__modules__Globals_5, (MR_Integer) 1, (MR_Integer) 1, parse_tree__modules__ModuleName_6, parse_tree__modules__DepsMap_8);
#line 1437 "modules.m"
      return;
    }
#line 1435 "modules.m"
  }
#line 248 "modules.m"
}

#line 221 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_short_interfaces_14_p_0(
#line 221 "modules.m"
  MR_Word parse_tree__modules__Globals_1,
#line 221 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_2,
#line 221 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3,
#line 221 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_4,
#line 221 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_5,
#line 221 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_6,
#line 221 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_7,
#line 221 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_8,
#line 221 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_9,
#line 221 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_10,
#line 221 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11,
#line 221 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_12)
#line 221 "modules.m"
{
#line 1046 "modules.m"
  while (MR_TRUE)
#line 1046 "modules.m"
    {
#line 1046 "modules.m"
      /* tailcall optimized into a loop */
#line 1046 "modules.m"
      {
#line 1046 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1046 "modules.m"
        if ((parse_tree__modules__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1046 "modules.m"
          {
#line 1047 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_12 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11;
#line 1047 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_10 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_9;
#line 1047 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_8 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_7;
#line 1046 "modules.m"
          }
#line 1046 "modules.m"
        else
#line 1050 "modules.m"
          {
#line 1050 "modules.m"
            MR_Word parse_tree__modules__Import_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 0)));
#line 1050 "modules.m"
            MR_Word parse_tree__modules__Imports_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 1)));
#line 1050 "modules.m"
            MR_Word parse_tree__modules__ModIndirectImports0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7)));
#line 1050 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_85_85;
#line 1050 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_87_87;
#line 1050 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89;
#line 1051 "modules.m"
            MR_String parse_tree__modules__V_94_94 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 9)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 10)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 11)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 12)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 13)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 14)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 15)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 16)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 17)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 18)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 19)));
#line 1051 "modules.m"
            MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 20)));
#line 1051 "modules.m"
            MR_String parse_tree__modules__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 21)));

#line 1055 "modules.m"
            {
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2)));
#line 1055 "modules.m"
              MR_String parse_tree__modules__V_115_115 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 9)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 10)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 11)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 12)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 13)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 14)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 15)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 16)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 17)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 18)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 19)));
#line 1055 "modules.m"
              MR_Word parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 20)));
#line 1055 "modules.m"
              MR_String parse_tree__modules__V_135_135 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 21)));

#line 1055 "modules.m"
              {
#line 1055 "modules.m"
                parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__Import_34, parse_tree__modules__V_251_251);
              }
#line 1055 "modules.m"
            }
#line 1056 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 1056 "modules.m"
              {
#line 1056 "modules.m"
                {
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4)));
#line 1056 "modules.m"
                  MR_String parse_tree__modules__V_136_136 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 9)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 10)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 11)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 12)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 13)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 14)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 15)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 16)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 17)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 18)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 19)));
#line 1056 "modules.m"
                  MR_Word parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 20)));
#line 1056 "modules.m"
                  MR_String parse_tree__modules__V_156_156 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 21)));

#line 1056 "modules.m"
                  {
#line 1056 "modules.m"
                    parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_34)), parse_tree__modules__V_72_72);
                  }
#line 1056 "modules.m"
                }
#line 1056 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 1056 "modules.m"
                  {
#line 1057 "modules.m"
                    {
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5)));
#line 1057 "modules.m"
                      MR_String parse_tree__modules__V_157_157 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 9)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 10)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 11)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 12)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 13)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 14)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 15)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 16)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 17)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 18)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 19)));
#line 1057 "modules.m"
                      MR_Word parse_tree__modules__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 20)));
#line 1057 "modules.m"
                      MR_String parse_tree__modules__V_177_177 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 21)));

#line 1057 "modules.m"
                      {
#line 1057 "modules.m"
                        parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_34)), parse_tree__modules__V_71_71);
                      }
#line 1057 "modules.m"
                    }
#line 1056 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 1056 "modules.m"
                      {
#line 1058 "modules.m"
                        {
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6)));
#line 1058 "modules.m"
                          MR_String parse_tree__modules__V_178_178 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 9)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 10)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 11)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 12)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 13)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 14)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 15)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 16)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 17)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 18)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 19)));
#line 1058 "modules.m"
                          MR_Word parse_tree__modules__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 20)));
#line 1058 "modules.m"
                          MR_String parse_tree__modules__V_198_198 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 21)));

#line 1058 "modules.m"
                          {
#line 1058 "modules.m"
                            parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_34)), parse_tree__modules__V_70_70);
                          }
#line 1058 "modules.m"
                        }
#line 1056 "modules.m"
                        if (!(parse_tree__modules__succeeded))
#line 1059 "modules.m"
                          {
#line 1059 "modules.m"
                            {
#line 1059 "modules.m"
                              parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_34)), parse_tree__modules__ModIndirectImports0_43);
                            }
#line 1059 "modules.m"
                          }
#line 1056 "modules.m"
                      }
#line 1056 "modules.m"
                  }
#line 1056 "modules.m"
              }
#line 1063 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1062 "modules.m"
              {
#line 1062 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11;
#line 1062 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_87_87 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_9;
#line 1062 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_85_85 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_7;
#line 1062 "modules.m"
              }
#line 1063 "modules.m"
            else
#line 1065 "modules.m"
              {
#line 1065 "modules.m"
                MR_Word parse_tree__modules__TypeCtorInfo_250_250;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__ReturnTimestamp_44;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__MaybeTimestamp_46;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__ShortIntParseTree_47;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__ShortIntSpecs_48;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__ShortIntError_49;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__ShortIntContext_52;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__ShortIntIntItems_53;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__ShortIntImplItems_54;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__IntImports1_55;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__IntUses1_56;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__ImpImports1_57;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__ImpUses1_58;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__ShortIntItemBlocks_59;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__Statistics_60;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__ModIndirectImports_61;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 19)));
#line 1065 "modules.m"
                MR_Word parse_tree__modules__V_74_74;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__V_80_80;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__V_81_81;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__V_86_86;
#line 1065 "modules.m"
                MR_Word parse_tree__modules__V_88_88;
#line 1064 "modules.m"
                MR_String parse_tree__modules__V_199_199 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 9)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 10)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 11)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 12)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 13)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 14)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 15)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 16)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 17)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 18)));
#line 1064 "modules.m"
                MR_Word parse_tree__modules__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 20)));
#line 1064 "modules.m"
                MR_String parse_tree__modules__V_219_219 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 21)));
#line 1066 "modules.m"
                MR_Word parse_tree__modules__V_220_220;
#line 1066 "modules.m"
                MR_Word parse_tree__modules__V_221_221;
#line 1066 "modules.m"
                MR_String parse_tree__modules___ImportFileName_45;
#line 1074 "modules.m"
                MR_Word parse_tree__modules__V_50_50;
#line 1074 "modules.m"
                MR_Word parse_tree__modules__V_51_51;
#line 1079 "modules.m"
                MR_Box MR_CALL (* parse_tree__modules__func_0)(MR_Box, MR_Box);
#line 1079 "modules.m"
                MR_Box parse_tree__modules__conv1_V_80_80;
#line 1080 "modules.m"
                MR_Box MR_CALL (* parse_tree__modules__func_2)(MR_Box, MR_Box);
#line 1080 "modules.m"
                MR_Box parse_tree__modules__conv3_V_81_81;
#line 1092 "modules.m"
                MR_String parse_tree__modules__V_222_222;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_223_223;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_224_224;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_225_225;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_226_226;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_227_227;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_228_228;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_230_230;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_231_231;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_232_232;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_233_233;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_234_234;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_235_235;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_236_236;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_237_237;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_238_238;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_239_239;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_240_240;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_241_241;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_242_242;
#line 1092 "modules.m"
                MR_String parse_tree__modules__V_243_243;
#line 1092 "modules.m"
                MR_Word parse_tree__modules__V_229_229;

#line 1064 "modules.m"
                {
#line 1064 "modules.m"
                  parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_73_73, &parse_tree__modules__ReturnTimestamp_44);
                }
#line 1066 "modules.m"
                parse_tree__modules__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 0)));
#line 1066 "modules.m"
                parse_tree__modules__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 1)));
#line 1066 "modules.m"
                parse_tree__modules__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 2)));
#line 1066 "modules.m"
                {
#line 1066 "modules.m"
                  parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_1, parse_tree__modules__V_74_74, (MR_String) "Reading short interface for module", (MR_Integer) 0, parse_tree__modules__Import_34, parse_tree__modules__IntFileKind_4, &parse_tree__modules___ImportFileName_45, parse_tree__modules__ReturnTimestamp_44, &parse_tree__modules__MaybeTimestamp_46, &parse_tree__modules__ShortIntParseTree_47, &parse_tree__modules__ShortIntSpecs_48, &parse_tree__modules__ShortIntError_49);
                }
#line 1071 "modules.m"
                {
#line 1071 "modules.m"
                  parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Import_34, parse_tree__modules__IntFileKind_4, (MR_Integer) 0, parse_tree__modules__MaybeTimestamp_46, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79);
                }
#line 1074 "modules.m"
                parse_tree__modules__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_47, (MR_Integer) 0)));
#line 1074 "modules.m"
                parse_tree__modules__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_47, (MR_Integer) 1)));
#line 1074 "modules.m"
                parse_tree__modules__ShortIntContext_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_47, (MR_Integer) 2)));
#line 1074 "modules.m"
                parse_tree__modules__ShortIntIntItems_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_47, (MR_Integer) 3)));
#line 1074 "modules.m"
                parse_tree__modules__ShortIntImplItems_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_47, (MR_Integer) 4)));
#line 1076 "modules.m"
                {
#line 1076 "modules.m"
                  parse_tree__module_imports__get_dependencies_in_items_3_p_0(parse_tree__modules__ShortIntIntItems_53, &parse_tree__modules__IntImports1_55, &parse_tree__modules__IntUses1_56);
                }
#line 1077 "modules.m"
                {
#line 1077 "modules.m"
                  parse_tree__module_imports__get_dependencies_in_items_3_p_0(parse_tree__modules__ShortIntImplItems_54, &parse_tree__modules__ImpImports1_57, &parse_tree__modules__ImpUses1_58);
                }
#line 1079 "modules.m"
                parse_tree__modules__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewIntSection_5, (MR_Integer) 1)));
#line 1079 "modules.m"
                {
#line 1079 "modules.m"
                  parse_tree__modules__conv1_V_80_80 = parse_tree__modules__func_0(((MR_Box) parse_tree__modules__NewIntSection_5), ((MR_Box) (parse_tree__modules__Import_34)));
                }
#line 1079 "modules.m"
                parse_tree__modules__V_80_80 = ((MR_Word) parse_tree__modules__conv1_V_80_80);
#line 1080 "modules.m"
                parse_tree__modules__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewImpSection_6, (MR_Integer) 1)));
#line 1080 "modules.m"
                {
#line 1080 "modules.m"
                  parse_tree__modules__conv3_V_81_81 = parse_tree__modules__func_2(((MR_Box) parse_tree__modules__NewImpSection_6), ((MR_Box) (parse_tree__modules__Import_34)));
                }
#line 1080 "modules.m"
                parse_tree__modules__V_81_81 = ((MR_Word) parse_tree__modules__conv3_V_81_81);
#line 1078 "modules.m"
                {
#line 1078 "modules.m"
                  parse_tree__prog_item__int_impl_items_to_specified_item_blocks_6_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0, parse_tree__modules__ShortIntContext_52, ((MR_Box) (parse_tree__modules__V_80_80)), parse_tree__modules__ShortIntIntItems_53, ((MR_Box) (parse_tree__modules__V_81_81)), parse_tree__modules__ShortIntImplItems_54, &parse_tree__modules__ShortIntItemBlocks_59);
                }
#line 1083 "modules.m"
                {
#line 1083 "modules.m"
                  parse_tree__module_imports__module_and_imports_add_item_blocks_specs_errors_5_p_0(parse_tree__modules__ShortIntItemBlocks_59, parse_tree__modules__ShortIntSpecs_48, parse_tree__modules__ShortIntError_49, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82);
                }
#line 1086 "modules.m"
                {
#line 1086 "modules.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_1, (MR_Integer) 56, &parse_tree__modules__Statistics_60);
                }
#line 1087 "modules.m"
                {
#line 1087 "modules.m"
                  libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_60);
                }
#line 1089 "modules.m"
                {
#line 1089 "modules.m"
                  parse_tree__modules__ModIndirectImports_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "modules.m"
                  MR_hl_field(MR_mktag(1), parse_tree__modules__ModIndirectImports_61, 0) = ((MR_Box) (parse_tree__modules__Import_34));
#line 1089 "modules.m"
                  MR_hl_field(MR_mktag(1), parse_tree__modules__ModIndirectImports_61, 1) = ((MR_Box) (parse_tree__modules__ModIndirectImports0_43));
#line 1089 "modules.m"
                }
#line 9366 "parse_tree.modules.c"
                parse_tree__modules__TypeCtorInfo_250_250 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1090 "modules.m"
                {
#line 1090 "modules.m"
                  parse_tree__modules__V_86_86 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_250_250, parse_tree__modules__IntImports1_55, parse_tree__modules__IntUses1_56);
                }
#line 1090 "modules.m"
                {
#line 1090 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_IndirectImports_85_85 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_250_250, parse_tree__modules__STATE_VARIABLE_IndirectImports_0_7, parse_tree__modules__V_86_86);
                }
#line 1091 "modules.m"
                {
#line 1091 "modules.m"
                  parse_tree__modules__V_88_88 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_250_250, parse_tree__modules__ImpImports1_57, parse_tree__modules__ImpUses1_58);
                }
#line 1091 "modules.m"
                {
#line 1091 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_87_87 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_250_250, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_9, parse_tree__modules__V_88_88);
                }
#line 1092 "modules.m"
                parse_tree__modules__V_222_222 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 0)));
#line 1092 "modules.m"
                parse_tree__modules__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 1)));
#line 1092 "modules.m"
                parse_tree__modules__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 2)));
#line 1092 "modules.m"
                parse_tree__modules__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 3)));
#line 1092 "modules.m"
                parse_tree__modules__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 4)));
#line 1092 "modules.m"
                parse_tree__modules__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 5)));
#line 1092 "modules.m"
                parse_tree__modules__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 6)));
#line 1092 "modules.m"
                parse_tree__modules__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 7)));
#line 1092 "modules.m"
                parse_tree__modules__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 8)));
#line 1092 "modules.m"
                parse_tree__modules__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 9)));
#line 1092 "modules.m"
                parse_tree__modules__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 10)));
#line 1092 "modules.m"
                parse_tree__modules__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 11)));
#line 1092 "modules.m"
                parse_tree__modules__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 12)));
#line 1092 "modules.m"
                parse_tree__modules__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 13)));
#line 1092 "modules.m"
                parse_tree__modules__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 14)));
#line 1092 "modules.m"
                parse_tree__modules__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 15)));
#line 1092 "modules.m"
                parse_tree__modules__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 16)));
#line 1092 "modules.m"
                parse_tree__modules__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 17)));
#line 1092 "modules.m"
                parse_tree__modules__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 18)));
#line 1092 "modules.m"
                parse_tree__modules__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 19)));
#line 1092 "modules.m"
                parse_tree__modules__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 20)));
#line 1092 "modules.m"
                parse_tree__modules__V_243_243 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 21)));
#line 1092 "modules.m"
                {
#line 1092 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 0) = ((MR_Box) (parse_tree__modules__V_222_222));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 1) = ((MR_Box) (parse_tree__modules__V_223_223));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 2) = ((MR_Box) (parse_tree__modules__V_224_224));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 3) = ((MR_Box) (parse_tree__modules__V_225_225));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 4) = ((MR_Box) (parse_tree__modules__V_226_226));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 5) = ((MR_Box) (parse_tree__modules__V_227_227));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 6) = ((MR_Box) (parse_tree__modules__V_228_228));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 7) = ((MR_Box) (parse_tree__modules__ModIndirectImports_61));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 8) = ((MR_Box) (parse_tree__modules__V_230_230));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 9) = ((MR_Box) (parse_tree__modules__V_231_231));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 10) = ((MR_Box) (parse_tree__modules__V_232_232));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 11) = ((MR_Box) (parse_tree__modules__V_233_233));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 12) = ((MR_Box) (parse_tree__modules__V_234_234));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 13) = ((MR_Box) (parse_tree__modules__V_235_235));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 14) = ((MR_Box) (parse_tree__modules__V_236_236));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 15) = ((MR_Box) (parse_tree__modules__V_237_237));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 16) = ((MR_Box) (parse_tree__modules__V_238_238));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 17) = ((MR_Box) (parse_tree__modules__V_239_239));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 18) = ((MR_Box) (parse_tree__modules__V_240_240));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 19) = ((MR_Box) (parse_tree__modules__V_241_241));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 20) = ((MR_Box) (parse_tree__modules__V_242_242));
#line 1092 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, 21) = ((MR_Box) (parse_tree__modules__V_243_243));
#line 1092 "modules.m"
                }
#line 1065 "modules.m"
              }
#line 1094 "modules.m"
            /* direct tailcall eliminated */
#line 1094 "modules.m"
            {
#line 1094 "modules.m"
              MR_Word parse_tree__modules__HeadVar__3__tmp_copy_3 = parse_tree__modules__Imports_35;
#line 1094 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_7 = parse_tree__modules__STATE_VARIABLE_IndirectImports_85_85;
#line 1094 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_9 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_87_87;
#line 1094 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_11 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89;

#line 1094 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_11;
#line 1094 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_9 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_9;
#line 1094 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_7 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_7;
#line 1094 "modules.m"
              parse_tree__modules__HeadVar__3_3 = parse_tree__modules__HeadVar__3__tmp_copy_3;
#line 1094 "modules.m"
            }
#line 1094 "modules.m"
            continue;
#line 1050 "modules.m"
          }
#line 1046 "modules.m"
      }
#line 1046 "modules.m"
      break;
#line 1046 "modules.m"
    }
#line 221 "modules.m"
}

#line 202 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_short_interfaces_and_impls_transitively_10_p_0(
#line 202 "modules.m"
  MR_Word parse_tree__modules__Globals_11,
#line 202 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_12,
#line 202 "modules.m"
  MR_Word parse_tree__modules__Imports_13,
#line 202 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_14,
#line 202 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_15,
#line 202 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_16,
#line 202 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22,
#line 202 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23)
#line 202 "modules.m"
{
#line 1017 "modules.m"
  while (MR_TRUE)
#line 1017 "modules.m"
    {
#line 1017 "modules.m"
      /* tailcall optimized into a loop */
#line 1017 "modules.m"
      {
#line 1017 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 1017 "modules.m"
        MR_Word parse_tree__modules__ImpIndirectImports_19;
#line 1017 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;

#line 1018 "modules.m"
        {
#line 1018 "modules.m"
          parse_tree__modules__process_module_short_interfaces_transitively_12_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_12, parse_tree__modules__Imports_13, parse_tree__modules__IntFileKind_14, parse_tree__modules__NewIntSection_15, parse_tree__modules__NewImpSection_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ImpIndirectImports_19, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27);
        }
#line 1023 "modules.m"
        if ((parse_tree__modules__ImpIndirectImports_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1022 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;
#line 1023 "modules.m"
        else
#line 1025 "modules.m"
          {
#line 1025 "modules.m"
            /* direct tailcall eliminated */
#line 1025 "modules.m"
            {
#line 1025 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_13 = parse_tree__modules__ImpIndirectImports_19;
#line 1025 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_22 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;

#line 1025 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_22;
#line 1025 "modules.m"
              parse_tree__modules__Imports_13 = parse_tree__modules__Imports__tmp_copy_13;
#line 1025 "modules.m"
            }
#line 1025 "modules.m"
            continue;
#line 1025 "modules.m"
          }
#line 1017 "modules.m"
      }
#line 1017 "modules.m"
      break;
#line 1017 "modules.m"
    }
#line 202 "modules.m"
}

#line 183 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively_12_p_0(
#line 183 "modules.m"
  MR_Word parse_tree__modules__Globals_13,
#line 183 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_14,
#line 183 "modules.m"
  MR_Word parse_tree__modules__Imports_15,
#line 183 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_16,
#line 183 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_17,
#line 183 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_18,
#line 183 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 183 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 183 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 183 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28)
#line 183 "modules.m"
{
#line 1032 "modules.m"
  while (MR_TRUE)
#line 1032 "modules.m"
    {
#line 1032 "modules.m"
      /* tailcall optimized into a loop */
#line 1032 "modules.m"
      {
#line 1032 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 1032 "modules.m"
        MR_Word parse_tree__modules__IndirectImports_22;
#line 1032 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1032 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 1033 "modules.m"
        {
#line 1033 "modules.m"
          parse_tree__modules__process_module_short_interfaces_14_p_0(parse_tree__modules__Globals_13, parse_tree__modules__HaveReadModuleMaps_14, parse_tree__modules__Imports_15, parse_tree__modules__IntFileKind_16, parse_tree__modules__NewIntSection_17, parse_tree__modules__NewImpSection_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IndirectImports_22, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33);
        }
#line 1038 "modules.m"
        if ((parse_tree__modules__IndirectImports_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1037 "modules.m"
          {
#line 1037 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1037 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;
#line 1037 "modules.m"
          }
#line 1038 "modules.m"
        else
#line 1040 "modules.m"
          {
#line 1040 "modules.m"
            /* direct tailcall eliminated */
#line 1040 "modules.m"
            {
#line 1040 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_15 = parse_tree__modules__IndirectImports_22;
#line 1040 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1040 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 1040 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27;
#line 1040 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25;
#line 1040 "modules.m"
              parse_tree__modules__Imports_15 = parse_tree__modules__Imports__tmp_copy_15;
#line 1040 "modules.m"
            }
#line 1040 "modules.m"
            continue;
#line 1040 "modules.m"
          }
#line 1032 "modules.m"
      }
#line 1032 "modules.m"
      break;
#line 1032 "modules.m"
    }
#line 183 "modules.m"
}

#line 163 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_long_interfaces_15_p_0(
#line 163 "modules.m"
  MR_Word parse_tree__modules__Globals_1,
#line 163 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_2,
#line 163 "modules.m"
  MR_Word parse_tree__modules__NeedQualifier_3,
#line 163 "modules.m"
  MR_Word parse_tree__modules__HeadVar__4_4,
#line 163 "modules.m"
  MR_Word parse_tree__modules__HeadVar__5_5,
#line 163 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_6,
#line 163 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_7,
#line 163 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_8,
#line 163 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_9,
#line 163 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_10,
#line 163 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_11,
#line 163 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12,
#line 163 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_13)
#line 163 "modules.m"
{
#line 952 "modules.m"
  while (MR_TRUE)
#line 952 "modules.m"
    {
#line 952 "modules.m"
      /* tailcall optimized into a loop */
#line 952 "modules.m"
      {
#line 952 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 952 "modules.m"
        if ((parse_tree__modules__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 952 "modules.m"
          {
#line 953 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_13 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12;
#line 953 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_11 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_10;
#line 953 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_9 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_8;
#line 952 "modules.m"
          }
#line 952 "modules.m"
        else
#line 956 "modules.m"
          {
#line 956 "modules.m"
            MR_Word parse_tree__modules__Import_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__4_4, (MR_Integer) 0)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__Imports_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__4_4, (MR_Integer) 1)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__ModuleName_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 2)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__ModImplementationImports0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 6)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_89_89;
#line 956 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_91_91;
#line 956 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93;
#line 957 "modules.m"
            MR_String parse_tree__modules__V_98_98 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 0)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 1)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 3)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 4)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 5)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 7)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 8)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 9)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 10)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 11)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 12)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 13)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 14)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 15)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 16)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 17)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 18)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 19)));
#line 957 "modules.m"
            MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 20)));
#line 957 "modules.m"
            MR_String parse_tree__modules__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 21)));

#line 961 "modules.m"
            {
#line 961 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__Import_37, parse_tree__modules__ModuleName_46);
            }
#line 962 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 962 "modules.m"
              {
#line 962 "modules.m"
                {
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 4)));
#line 962 "modules.m"
                  MR_String parse_tree__modules__V_140_140 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 0)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 1)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 2)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 3)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 5)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 6)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 7)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 8)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 9)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 10)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 11)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 12)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 13)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 14)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 15)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 16)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 17)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 18)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 19)));
#line 962 "modules.m"
                  MR_Word parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 20)));
#line 962 "modules.m"
                  MR_String parse_tree__modules__V_160_160 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 21)));

#line 962 "modules.m"
                  {
#line 962 "modules.m"
                    parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_37)), parse_tree__modules__V_76_76);
                  }
#line 962 "modules.m"
                }
#line 962 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 962 "modules.m"
                  {
#line 963 "modules.m"
                    {
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 5)));
#line 963 "modules.m"
                      MR_String parse_tree__modules__V_161_161 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 0)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 1)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 2)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 3)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 4)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 6)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 7)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 8)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 9)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 10)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 11)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 12)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 13)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 14)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 15)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 16)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 17)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 18)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 19)));
#line 963 "modules.m"
                      MR_Word parse_tree__modules__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 20)));
#line 963 "modules.m"
                      MR_String parse_tree__modules__V_181_181 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 21)));

#line 963 "modules.m"
                      {
#line 963 "modules.m"
                        parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_37)), parse_tree__modules__V_75_75);
                      }
#line 963 "modules.m"
                    }
#line 962 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 964 "modules.m"
                      {
#line 964 "modules.m"
                        {
#line 964 "modules.m"
                          parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_37)), parse_tree__modules__ModImplementationImports0_47);
                        }
#line 964 "modules.m"
                      }
#line 962 "modules.m"
                  }
#line 962 "modules.m"
              }
#line 968 "modules.m"
            if (parse_tree__modules__succeeded)
#line 967 "modules.m"
              {
#line 967 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12;
#line 967 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_91_91 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_10;
#line 967 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_89_89 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_8;
#line 967 "modules.m"
              }
#line 968 "modules.m"
            else
#line 970 "modules.m"
              {
#line 970 "modules.m"
                MR_Word parse_tree__modules__TypeCtorInfo_232_232;
#line 970 "modules.m"
                MR_Word parse_tree__modules__TypeCtorInfo_233_233;
#line 970 "modules.m"
                MR_Word parse_tree__modules__ReturnTimestamp_48;
#line 970 "modules.m"
                MR_Word parse_tree__modules__MaybeTimestamp_50;
#line 970 "modules.m"
                MR_Word parse_tree__modules__LongIntParseTree_51;
#line 970 "modules.m"
                MR_Word parse_tree__modules__LongIntSpecs_52;
#line 970 "modules.m"
                MR_Word parse_tree__modules__LongIntErrors_53;
#line 970 "modules.m"
                MR_Word parse_tree__modules__LongIntContext_56;
#line 970 "modules.m"
                MR_Word parse_tree__modules__LongIntIntItems_57;
#line 970 "modules.m"
                MR_Word parse_tree__modules__LongIntImplItems_58;
#line 970 "modules.m"
                MR_Word parse_tree__modules__IndirectImports1_59;
#line 970 "modules.m"
                MR_Word parse_tree__modules__IndirectUses1_60;
#line 970 "modules.m"
                MR_Word parse_tree__modules__ImpIndirectImports1_61;
#line 970 "modules.m"
                MR_Word parse_tree__modules__ImpIndirectUses1_62;
#line 970 "modules.m"
                MR_Word parse_tree__modules__LongIntItemBlocks_63;
#line 970 "modules.m"
                MR_Word parse_tree__modules__Statistics_64;
#line 970 "modules.m"
                MR_Word parse_tree__modules__FatalLongIntErrors_65;
#line 970 "modules.m"
                MR_Word parse_tree__modules__ModImplementationImports_66;
#line 970 "modules.m"
                MR_Word parse_tree__modules__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 19)));
#line 970 "modules.m"
                MR_Word parse_tree__modules__V_78_78;
#line 970 "modules.m"
                MR_Word parse_tree__modules__V_82_82;
#line 970 "modules.m"
                MR_Word parse_tree__modules__V_83_83;
#line 970 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_84_84;
#line 970 "modules.m"
                MR_Word parse_tree__modules__V_87_87;
#line 970 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88;
#line 970 "modules.m"
                MR_Word parse_tree__modules__V_90_90;
#line 970 "modules.m"
                MR_Word parse_tree__modules__V_92_92;
#line 969 "modules.m"
                MR_String parse_tree__modules__V_182_182 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 0)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 1)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 2)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 3)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 4)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 5)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 6)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 7)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 8)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 9)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 10)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 11)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 12)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 13)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 14)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 15)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 16)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 17)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 18)));
#line 969 "modules.m"
                MR_Word parse_tree__modules__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 20)));
#line 969 "modules.m"
                MR_String parse_tree__modules__V_202_202 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 21)));
#line 971 "modules.m"
                MR_Word parse_tree__modules__V_203_203;
#line 971 "modules.m"
                MR_Word parse_tree__modules__V_204_204;
#line 971 "modules.m"
                MR_String parse_tree__modules___LongIntFileName_49;
#line 977 "modules.m"
                MR_Word parse_tree__modules__V_54_54;
#line 977 "modules.m"
                MR_Word parse_tree__modules__V_55_55;
#line 984 "modules.m"
                MR_Box MR_CALL (* parse_tree__modules__func_0)(MR_Box, MR_Box);
#line 984 "modules.m"
                MR_Box parse_tree__modules__conv1_V_82_82;
#line 985 "modules.m"
                MR_Box MR_CALL (* parse_tree__modules__func_2)(MR_Box, MR_Box);
#line 985 "modules.m"
                MR_Box parse_tree__modules__conv3_V_83_83;
#line 1007 "modules.m"
                MR_String parse_tree__modules__V_205_205;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_206_206;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_207_207;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_208_208;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_209_209;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_210_210;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_212_212;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_213_213;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_214_214;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_215_215;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_216_216;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_217_217;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_218_218;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_219_219;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_220_220;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_221_221;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_222_222;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_223_223;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_224_224;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_225_225;
#line 1007 "modules.m"
                MR_String parse_tree__modules__V_226_226;
#line 1007 "modules.m"
                MR_Word parse_tree__modules__V_211_211;

#line 969 "modules.m"
                {
#line 969 "modules.m"
                  parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_77_77, &parse_tree__modules__ReturnTimestamp_48);
                }
#line 971 "modules.m"
                parse_tree__modules__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 0)));
#line 971 "modules.m"
                parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 1)));
#line 971 "modules.m"
                parse_tree__modules__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 2)));
#line 971 "modules.m"
                {
#line 971 "modules.m"
                  parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_1, parse_tree__modules__V_78_78, (MR_String) "Reading interface for module", (MR_Integer) 0, parse_tree__modules__Import_37, parse_tree__modules__HeadVar__5_5, &parse_tree__modules___LongIntFileName_49, parse_tree__modules__ReturnTimestamp_48, &parse_tree__modules__MaybeTimestamp_50, &parse_tree__modules__LongIntParseTree_51, &parse_tree__modules__LongIntSpecs_52, &parse_tree__modules__LongIntErrors_53);
                }
#line 977 "modules.m"
                parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_51, (MR_Integer) 0)));
#line 977 "modules.m"
                parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_51, (MR_Integer) 1)));
#line 977 "modules.m"
                parse_tree__modules__LongIntContext_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_51, (MR_Integer) 2)));
#line 977 "modules.m"
                parse_tree__modules__LongIntIntItems_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_51, (MR_Integer) 3)));
#line 977 "modules.m"
                parse_tree__modules__LongIntImplItems_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_51, (MR_Integer) 4)));
#line 979 "modules.m"
                {
#line 979 "modules.m"
                  parse_tree__module_imports__get_dependencies_in_items_3_p_0(parse_tree__modules__LongIntIntItems_57, &parse_tree__modules__IndirectImports1_59, &parse_tree__modules__IndirectUses1_60);
                }
#line 981 "modules.m"
                {
#line 981 "modules.m"
                  parse_tree__module_imports__get_dependencies_in_items_3_p_0(parse_tree__modules__LongIntImplItems_58, &parse_tree__modules__ImpIndirectImports1_61, &parse_tree__modules__ImpIndirectUses1_62);
                }
#line 984 "modules.m"
                parse_tree__modules__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewIntSection_6, (MR_Integer) 1)));
#line 984 "modules.m"
                {
#line 984 "modules.m"
                  parse_tree__modules__conv1_V_82_82 = parse_tree__modules__func_0(((MR_Box) parse_tree__modules__NewIntSection_6), ((MR_Box) (parse_tree__modules__Import_37)));
                }
#line 984 "modules.m"
                parse_tree__modules__V_82_82 = ((MR_Word) parse_tree__modules__conv1_V_82_82);
#line 985 "modules.m"
                parse_tree__modules__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewImpSection_7, (MR_Integer) 1)));
#line 985 "modules.m"
                {
#line 985 "modules.m"
                  parse_tree__modules__conv3_V_83_83 = parse_tree__modules__func_2(((MR_Box) parse_tree__modules__NewImpSection_7), ((MR_Box) (parse_tree__modules__Import_37)));
                }
#line 985 "modules.m"
                parse_tree__modules__V_83_83 = ((MR_Word) parse_tree__modules__conv3_V_83_83);
#line 983 "modules.m"
                {
#line 983 "modules.m"
                  parse_tree__prog_item__int_impl_items_to_specified_item_blocks_6_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0, parse_tree__modules__LongIntContext_56, ((MR_Box) (parse_tree__modules__V_82_82)), parse_tree__modules__LongIntIntItems_57, ((MR_Box) (parse_tree__modules__V_83_83)), parse_tree__modules__LongIntImplItems_58, &parse_tree__modules__LongIntItemBlocks_63);
                }
#line 988 "modules.m"
                {
#line 988 "modules.m"
                  parse_tree__module_imports__module_and_imports_add_item_blocks_specs_errors_5_p_0(parse_tree__modules__LongIntItemBlocks_63, parse_tree__modules__LongIntSpecs_52, parse_tree__modules__LongIntErrors_53, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_84_84);
                }
#line 991 "modules.m"
                {
#line 991 "modules.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_1, (MR_Integer) 56, &parse_tree__modules__Statistics_64);
                }
#line 992 "modules.m"
                {
#line 992 "modules.m"
                  libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_64);
                }
#line 994 "modules.m"
                {
#line 994 "modules.m"
                  parse_tree__modules__V_87_87 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
                }
#line 10193 "parse_tree.modules.c"
                parse_tree__modules__TypeCtorInfo_232_232 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 994 "modules.m"
                {
#line 994 "modules.m"
                  mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_232_232, parse_tree__modules__LongIntErrors_53, parse_tree__modules__V_87_87, &parse_tree__modules__FatalLongIntErrors_65);
                }
#line 996 "modules.m"
                {
#line 996 "modules.m"
                  parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_232_232, parse_tree__modules__FatalLongIntErrors_65);
                }
#line 1000 "modules.m"
                if (parse_tree__modules__succeeded)
#line 998 "modules.m"
                  {
#line 997 "modules.m"
                    {
#line 997 "modules.m"
                      parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Import_37, parse_tree__modules__HeadVar__5_5, parse_tree__modules__NeedQualifier_3, parse_tree__modules__MaybeTimestamp_50, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_84_84, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88);
                    }
#line 999 "modules.m"
                    {
#line 999 "modules.m"
                      parse_tree__modules__ModImplementationImports_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "modules.m"
                      MR_hl_field(MR_mktag(1), parse_tree__modules__ModImplementationImports_66, 0) = ((MR_Box) (parse_tree__modules__Import_37));
#line 999 "modules.m"
                      MR_hl_field(MR_mktag(1), parse_tree__modules__ModImplementationImports_66, 1) = ((MR_Box) (parse_tree__modules__ModImplementationImports0_47));
#line 999 "modules.m"
                    }
#line 998 "modules.m"
                  }
#line 1000 "modules.m"
                else
#line 1001 "modules.m"
                  {
#line 1001 "modules.m"
                    parse_tree__modules__ModImplementationImports_66 = parse_tree__modules__ModImplementationImports0_47;
#line 1001 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_84_84;
#line 1001 "modules.m"
                  }
#line 10236 "parse_tree.modules.c"
                parse_tree__modules__TypeCtorInfo_233_233 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1004 "modules.m"
                {
#line 1004 "modules.m"
                  parse_tree__modules__V_90_90 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_233_233, parse_tree__modules__IndirectImports1_59, parse_tree__modules__IndirectUses1_60);
                }
#line 1003 "modules.m"
                {
#line 1003 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_IndirectImports_89_89 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_233_233, parse_tree__modules__STATE_VARIABLE_IndirectImports_0_8, parse_tree__modules__V_90_90);
                }
#line 1006 "modules.m"
                {
#line 1006 "modules.m"
                  parse_tree__modules__V_92_92 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_233_233, parse_tree__modules__ImpIndirectImports1_61, parse_tree__modules__ImpIndirectUses1_62);
                }
#line 1006 "modules.m"
                {
#line 1006 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_91_91 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_233_233, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_10, parse_tree__modules__V_92_92);
                }
#line 1007 "modules.m"
                parse_tree__modules__V_205_205 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 0)));
#line 1007 "modules.m"
                parse_tree__modules__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 1)));
#line 1007 "modules.m"
                parse_tree__modules__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 2)));
#line 1007 "modules.m"
                parse_tree__modules__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 3)));
#line 1007 "modules.m"
                parse_tree__modules__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 4)));
#line 1007 "modules.m"
                parse_tree__modules__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 5)));
#line 1007 "modules.m"
                parse_tree__modules__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 6)));
#line 1007 "modules.m"
                parse_tree__modules__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 7)));
#line 1007 "modules.m"
                parse_tree__modules__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 8)));
#line 1007 "modules.m"
                parse_tree__modules__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 9)));
#line 1007 "modules.m"
                parse_tree__modules__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 10)));
#line 1007 "modules.m"
                parse_tree__modules__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 11)));
#line 1007 "modules.m"
                parse_tree__modules__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 12)));
#line 1007 "modules.m"
                parse_tree__modules__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 13)));
#line 1007 "modules.m"
                parse_tree__modules__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 14)));
#line 1007 "modules.m"
                parse_tree__modules__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 15)));
#line 1007 "modules.m"
                parse_tree__modules__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 16)));
#line 1007 "modules.m"
                parse_tree__modules__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 17)));
#line 1007 "modules.m"
                parse_tree__modules__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 18)));
#line 1007 "modules.m"
                parse_tree__modules__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 19)));
#line 1007 "modules.m"
                parse_tree__modules__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 20)));
#line 1007 "modules.m"
                parse_tree__modules__V_226_226 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 21)));
#line 1007 "modules.m"
                {
#line 1007 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 0) = ((MR_Box) (parse_tree__modules__V_205_205));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 1) = ((MR_Box) (parse_tree__modules__V_206_206));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 2) = ((MR_Box) (parse_tree__modules__V_207_207));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 3) = ((MR_Box) (parse_tree__modules__V_208_208));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 4) = ((MR_Box) (parse_tree__modules__V_209_209));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 5) = ((MR_Box) (parse_tree__modules__V_210_210));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 6) = ((MR_Box) (parse_tree__modules__ModImplementationImports_66));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 7) = ((MR_Box) (parse_tree__modules__V_212_212));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 8) = ((MR_Box) (parse_tree__modules__V_213_213));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 9) = ((MR_Box) (parse_tree__modules__V_214_214));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 10) = ((MR_Box) (parse_tree__modules__V_215_215));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 11) = ((MR_Box) (parse_tree__modules__V_216_216));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 12) = ((MR_Box) (parse_tree__modules__V_217_217));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 13) = ((MR_Box) (parse_tree__modules__V_218_218));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 14) = ((MR_Box) (parse_tree__modules__V_219_219));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 15) = ((MR_Box) (parse_tree__modules__V_220_220));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 16) = ((MR_Box) (parse_tree__modules__V_221_221));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 17) = ((MR_Box) (parse_tree__modules__V_222_222));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 18) = ((MR_Box) (parse_tree__modules__V_223_223));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 19) = ((MR_Box) (parse_tree__modules__V_224_224));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 20) = ((MR_Box) (parse_tree__modules__V_225_225));
#line 1007 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, 21) = ((MR_Box) (parse_tree__modules__V_226_226));
#line 1007 "modules.m"
                }
#line 970 "modules.m"
              }
#line 1009 "modules.m"
            /* direct tailcall eliminated */
#line 1009 "modules.m"
            {
#line 1009 "modules.m"
              MR_Word parse_tree__modules__HeadVar__4__tmp_copy_4 = parse_tree__modules__Imports_38;
#line 1009 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_8 = parse_tree__modules__STATE_VARIABLE_IndirectImports_89_89;
#line 1009 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_10 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_91_91;
#line 1009 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_12 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93;

#line 1009 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_12;
#line 1009 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_10 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_10;
#line 1009 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_8 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_8;
#line 1009 "modules.m"
              parse_tree__modules__HeadVar__4_4 = parse_tree__modules__HeadVar__4__tmp_copy_4;
#line 1009 "modules.m"
            }
#line 1009 "modules.m"
            continue;
#line 956 "modules.m"
          }
#line 952 "modules.m"
      }
#line 952 "modules.m"
      break;
#line 952 "modules.m"
    }
#line 163 "modules.m"
}

#line 902 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__process_module_private_interfaces_13_p_0_1(
#line 902 "modules.m"
  MR_Box parse_tree__modules__closure_arg)
#line 902 "modules.m"
{
#line 902 "modules.m"
  {
#line 902 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 902 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;

#line 902 "modules.m"
    {
#line 902 "modules.m"
      return parse_tree__modules__succeeded = parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__902__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))));
    }
#line 902 "modules.m"
    return parse_tree__modules__succeeded;
#line 902 "modules.m"
  }
#line 902 "modules.m"
}

#line 141 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_private_interfaces_13_p_0(
#line 141 "modules.m"
  MR_Word parse_tree__modules__Globals_1,
#line 141 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_2,
#line 141 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3,
#line 141 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_4,
#line 141 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_5,
#line 141 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_6,
#line 141 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_7,
#line 141 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_8,
#line 141 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_9,
#line 141 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10,
#line 141 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_11)
#line 141 "modules.m"
{
#line 896 "modules.m"
  while (MR_TRUE)
#line 896 "modules.m"
    {
#line 896 "modules.m"
      /* tailcall optimized into a loop */
#line 896 "modules.m"
      {
#line 896 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 896 "modules.m"
        if ((parse_tree__modules__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 896 "modules.m"
          {
#line 897 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_11 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10;
#line 897 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_DirectUses_9 = parse_tree__modules__STATE_VARIABLE_DirectUses_0_8;
#line 897 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_DirectImports_7 = parse_tree__modules__STATE_VARIABLE_DirectImports_0_6;
#line 896 "modules.m"
          }
#line 896 "modules.m"
        else
#line 900 "modules.m"
          {
#line 900 "modules.m"
            MR_Word parse_tree__modules__Ancestor_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 0)));
#line 900 "modules.m"
            MR_Word parse_tree__modules__Ancestors_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 1)));
#line 900 "modules.m"
            MR_Word parse_tree__modules__ModuleName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 2)));
#line 900 "modules.m"
            MR_Word parse_tree__modules__ModAncestors0_41;
#line 900 "modules.m"
            MR_Word parse_tree__modules__V_67_67;
#line 900 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_86_86;
#line 900 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_87_87;
#line 900 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88;
#line 901 "modules.m"
            MR_String parse_tree__modules__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 0)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 1)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 3)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 4)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 5)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 6)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 7)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 8)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 9)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 10)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 11)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 12)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 13)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 14)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 15)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 16)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 17)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 18)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 19)));
#line 901 "modules.m"
            MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 20)));
#line 901 "modules.m"
            MR_String parse_tree__modules__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 21)));
#line 904 "modules.m"
            MR_String parse_tree__modules__V_114_114;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_115_115;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_116_116;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_117_117;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_118_118;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_119_119;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_120_120;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_121_121;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_122_122;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_123_123;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_124_124;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_125_125;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_126_126;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_127_127;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_128_128;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_129_129;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_130_130;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_131_131;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_132_132;
#line 904 "modules.m"
            MR_Word parse_tree__modules__V_133_133;
#line 904 "modules.m"
            MR_String parse_tree__modules__V_134_134;

#line 902 "modules.m"
            {
#line 902 "modules.m"
              parse_tree__modules__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 902 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_67_67, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[2]));
#line 902 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_67_67, 1) = ((MR_Box) (parse_tree__modules__process_module_private_interfaces_13_p_0_1));
#line 902 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 902 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_67_67, 3) = ((MR_Box) (parse_tree__modules__Ancestor_32));
#line 902 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_67_67, 4) = ((MR_Box) (parse_tree__modules__ModuleName_40));
#line 902 "modules.m"
            }
#line 902 "modules.m"
            {
#line 902 "modules.m"
              mercury__require__expect_not_4_p_0(parse_tree__modules__V_67_67, (MR_String) "parse_tree.modules", (MR_String) "predicate \140parse_tree.modules.process_module_private_interfaces\'/13", (MR_String) "module is its own ancestor\?");
            }
#line 904 "modules.m"
            parse_tree__modules__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 0)));
#line 904 "modules.m"
            parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 1)));
#line 904 "modules.m"
            parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 2)));
#line 904 "modules.m"
            parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 3)));
#line 904 "modules.m"
            parse_tree__modules__ModAncestors0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 4)));
#line 904 "modules.m"
            parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 5)));
#line 904 "modules.m"
            parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 6)));
#line 904 "modules.m"
            parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 7)));
#line 904 "modules.m"
            parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 8)));
#line 904 "modules.m"
            parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 9)));
#line 904 "modules.m"
            parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 10)));
#line 904 "modules.m"
            parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 11)));
#line 904 "modules.m"
            parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 12)));
#line 904 "modules.m"
            parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 13)));
#line 904 "modules.m"
            parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 14)));
#line 904 "modules.m"
            parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 15)));
#line 904 "modules.m"
            parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 16)));
#line 904 "modules.m"
            parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 17)));
#line 904 "modules.m"
            parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 18)));
#line 904 "modules.m"
            parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 19)));
#line 904 "modules.m"
            parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 20)));
#line 904 "modules.m"
            parse_tree__modules__V_134_134 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 21)));
#line 905 "modules.m"
            {
#line 905 "modules.m"
              parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Ancestor_32)), parse_tree__modules__ModAncestors0_41);
            }
#line 908 "modules.m"
            if (parse_tree__modules__succeeded)
#line 907 "modules.m"
              {
#line 907 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10;
#line 907 "modules.m"
                parse_tree__modules__STATE_VARIABLE_DirectUses_87_87 = parse_tree__modules__STATE_VARIABLE_DirectUses_0_8;
#line 907 "modules.m"
                parse_tree__modules__STATE_VARIABLE_DirectImports_86_86 = parse_tree__modules__STATE_VARIABLE_DirectImports_0_6;
#line 907 "modules.m"
              }
#line 908 "modules.m"
            else
#line 910 "modules.m"
              {
#line 910 "modules.m"
                MR_Word parse_tree__modules__TypeCtorInfo_183_183;
#line 910 "modules.m"
                MR_Word parse_tree__modules__TypeCtorInfo_184_184;
#line 910 "modules.m"
                MR_Word parse_tree__modules__TypeCtorInfo_185_185;
#line 910 "modules.m"
                MR_Word parse_tree__modules__ReturnTimestamp_42;
#line 910 "modules.m"
                MR_Word parse_tree__modules__MaybeTimestamp_44;
#line 910 "modules.m"
                MR_Word parse_tree__modules__PrivateIntParseTree_45;
#line 910 "modules.m"
                MR_Word parse_tree__modules__PrivateIntSpecs_46;
#line 910 "modules.m"
                MR_Word parse_tree__modules__PrivateIntErrors_47;
#line 910 "modules.m"
                MR_Word parse_tree__modules__PrivateIntContext_50;
#line 910 "modules.m"
                MR_Word parse_tree__modules__PrivateIntIntItems_51;
#line 910 "modules.m"
                MR_Word parse_tree__modules__PrivateIntImplItems_52;
#line 910 "modules.m"
                MR_Word parse_tree__modules__PrivateIntItemBlocks_53;
#line 910 "modules.m"
                MR_Word parse_tree__modules__Statistics_54;
#line 910 "modules.m"
                MR_Word parse_tree__modules__FatalPrivateIntErrors_55;
#line 910 "modules.m"
                MR_Word parse_tree__modules__ModAncestors_56;
#line 910 "modules.m"
                MR_Word parse_tree__modules__AncDirectImports_57;
#line 910 "modules.m"
                MR_Word parse_tree__modules__AncDirectUses_58;
#line 910 "modules.m"
                MR_Word parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 19)));
#line 910 "modules.m"
                MR_Word parse_tree__modules__V_72_72;
#line 910 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79;
#line 910 "modules.m"
                MR_Word parse_tree__modules__V_80_80;
#line 910 "modules.m"
                MR_Word parse_tree__modules__V_81_81;
#line 910 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82;
#line 910 "modules.m"
                MR_Word parse_tree__modules__V_85_85;
#line 909 "modules.m"
                MR_String parse_tree__modules__V_135_135 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 0)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 1)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 2)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 3)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 4)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 5)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 6)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 7)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 8)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 9)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 10)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 11)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 12)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 13)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 14)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 15)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 16)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 17)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 18)));
#line 909 "modules.m"
                MR_Word parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 20)));
#line 909 "modules.m"
                MR_String parse_tree__modules__V_155_155 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, (MR_Integer) 21)));
#line 911 "modules.m"
                MR_Word parse_tree__modules__V_156_156;
#line 911 "modules.m"
                MR_Word parse_tree__modules__V_157_157;
#line 911 "modules.m"
                MR_String parse_tree__modules___AncestorFileName_43;
#line 920 "modules.m"
                MR_Word parse_tree__modules__V_48_48;
#line 920 "modules.m"
                MR_Word parse_tree__modules__V_49_49;
#line 923 "modules.m"
                MR_Box MR_CALL (* parse_tree__modules__func_0)(MR_Box, MR_Box);
#line 923 "modules.m"
                MR_Box parse_tree__modules__conv1_V_80_80;
#line 924 "modules.m"
                MR_Box MR_CALL (* parse_tree__modules__func_2)(MR_Box, MR_Box);
#line 924 "modules.m"
                MR_Box parse_tree__modules__conv3_V_81_81;
#line 944 "modules.m"
                MR_String parse_tree__modules__V_158_158;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_159_159;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_160_160;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_161_161;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_163_163;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_164_164;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_165_165;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_166_166;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_167_167;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_168_168;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_169_169;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_170_170;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_171_171;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_172_172;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_173_173;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_174_174;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_175_175;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_176_176;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_177_177;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_178_178;
#line 944 "modules.m"
                MR_String parse_tree__modules__V_179_179;
#line 944 "modules.m"
                MR_Word parse_tree__modules__V_162_162;

#line 909 "modules.m"
                {
#line 909 "modules.m"
                  parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_71_71, &parse_tree__modules__ReturnTimestamp_42);
                }
#line 911 "modules.m"
                parse_tree__modules__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 0)));
#line 911 "modules.m"
                parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 1)));
#line 911 "modules.m"
                parse_tree__modules__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 2)));
#line 911 "modules.m"
                {
#line 911 "modules.m"
                  parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_1, parse_tree__modules__V_72_72, (MR_String) "Reading private interface for module", (MR_Integer) 0, parse_tree__modules__Ancestor_32, (MR_Integer) 0, &parse_tree__modules___AncestorFileName_43, parse_tree__modules__ReturnTimestamp_42, &parse_tree__modules__MaybeTimestamp_44, &parse_tree__modules__PrivateIntParseTree_45, &parse_tree__modules__PrivateIntSpecs_46, &parse_tree__modules__PrivateIntErrors_47);
                }
#line 917 "modules.m"
                {
#line 917 "modules.m"
                  parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Ancestor_32, (MR_Integer) 0, (MR_Integer) 1, parse_tree__modules__MaybeTimestamp_44, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79);
                }
#line 920 "modules.m"
                parse_tree__modules__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_45, (MR_Integer) 0)));
#line 920 "modules.m"
                parse_tree__modules__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_45, (MR_Integer) 1)));
#line 920 "modules.m"
                parse_tree__modules__PrivateIntContext_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_45, (MR_Integer) 2)));
#line 920 "modules.m"
                parse_tree__modules__PrivateIntIntItems_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_45, (MR_Integer) 3)));
#line 920 "modules.m"
                parse_tree__modules__PrivateIntImplItems_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_45, (MR_Integer) 4)));
#line 923 "modules.m"
                parse_tree__modules__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewIntSection_4, (MR_Integer) 1)));
#line 923 "modules.m"
                {
#line 923 "modules.m"
                  parse_tree__modules__conv1_V_80_80 = parse_tree__modules__func_0(((MR_Box) parse_tree__modules__NewIntSection_4), ((MR_Box) (parse_tree__modules__Ancestor_32)));
                }
#line 923 "modules.m"
                parse_tree__modules__V_80_80 = ((MR_Word) parse_tree__modules__conv1_V_80_80);
#line 924 "modules.m"
                parse_tree__modules__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewImpSection_5, (MR_Integer) 1)));
#line 924 "modules.m"
                {
#line 924 "modules.m"
                  parse_tree__modules__conv3_V_81_81 = parse_tree__modules__func_2(((MR_Box) parse_tree__modules__NewImpSection_5), ((MR_Box) (parse_tree__modules__Ancestor_32)));
                }
#line 924 "modules.m"
                parse_tree__modules__V_81_81 = ((MR_Word) parse_tree__modules__conv3_V_81_81);
#line 10859 "parse_tree.modules.c"
                parse_tree__modules__TypeCtorInfo_183_183 = (MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0;
#line 922 "modules.m"
                {
#line 922 "modules.m"
                  parse_tree__prog_item__int_impl_items_to_specified_item_blocks_6_p_0(parse_tree__modules__TypeCtorInfo_183_183, parse_tree__modules__PrivateIntContext_50, ((MR_Box) (parse_tree__modules__V_80_80)), parse_tree__modules__PrivateIntIntItems_51, ((MR_Box) (parse_tree__modules__V_81_81)), parse_tree__modules__PrivateIntImplItems_52, &parse_tree__modules__PrivateIntItemBlocks_53);
                }
#line 927 "modules.m"
                {
#line 927 "modules.m"
                  parse_tree__module_imports__module_and_imports_add_item_blocks_specs_errors_5_p_0(parse_tree__modules__PrivateIntItemBlocks_53, parse_tree__modules__PrivateIntSpecs_46, parse_tree__modules__PrivateIntErrors_47, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82);
                }
#line 930 "modules.m"
                {
#line 930 "modules.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_1, (MR_Integer) 56, &parse_tree__modules__Statistics_54);
                }
#line 931 "modules.m"
                {
#line 931 "modules.m"
                  libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_54);
                }
#line 933 "modules.m"
                {
#line 933 "modules.m"
                  parse_tree__modules__V_85_85 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
                }
#line 10886 "parse_tree.modules.c"
                parse_tree__modules__TypeCtorInfo_184_184 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 933 "modules.m"
                {
#line 933 "modules.m"
                  mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_184_184, parse_tree__modules__PrivateIntErrors_47, parse_tree__modules__V_85_85, &parse_tree__modules__FatalPrivateIntErrors_55);
                }
#line 935 "modules.m"
                {
#line 935 "modules.m"
                  parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_184_184, parse_tree__modules__FatalPrivateIntErrors_55);
                }
#line 937 "modules.m"
                if (parse_tree__modules__succeeded)
#line 936 "modules.m"
                  {
#line 936 "modules.m"
                    parse_tree__modules__ModAncestors_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__ModAncestors_56, 0) = ((MR_Box) (parse_tree__modules__Ancestor_32));
#line 936 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__ModAncestors_56, 1) = ((MR_Box) (parse_tree__modules__ModAncestors0_41));
#line 936 "modules.m"
                  }
#line 937 "modules.m"
                else
#line 938 "modules.m"
                  parse_tree__modules__ModAncestors_56 = parse_tree__modules__ModAncestors0_41;
#line 940 "modules.m"
                {
#line 940 "modules.m"
                  parse_tree__module_imports__get_dependencies_in_item_blocks_3_p_0(parse_tree__modules__TypeCtorInfo_183_183, parse_tree__modules__PrivateIntItemBlocks_53, &parse_tree__modules__AncDirectImports_57, &parse_tree__modules__AncDirectUses_58);
                }
#line 10919 "parse_tree.modules.c"
                parse_tree__modules__TypeCtorInfo_185_185 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 942 "modules.m"
                {
#line 942 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_DirectImports_86_86 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_185_185, parse_tree__modules__STATE_VARIABLE_DirectImports_0_6, parse_tree__modules__AncDirectImports_57);
                }
#line 943 "modules.m"
                {
#line 943 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_DirectUses_87_87 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_185_185, parse_tree__modules__STATE_VARIABLE_DirectUses_0_8, parse_tree__modules__AncDirectUses_58);
                }
#line 944 "modules.m"
                parse_tree__modules__V_158_158 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 0)));
#line 944 "modules.m"
                parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 1)));
#line 944 "modules.m"
                parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 2)));
#line 944 "modules.m"
                parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 3)));
#line 944 "modules.m"
                parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 4)));
#line 944 "modules.m"
                parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 5)));
#line 944 "modules.m"
                parse_tree__modules__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 6)));
#line 944 "modules.m"
                parse_tree__modules__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 7)));
#line 944 "modules.m"
                parse_tree__modules__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 8)));
#line 944 "modules.m"
                parse_tree__modules__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 9)));
#line 944 "modules.m"
                parse_tree__modules__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 10)));
#line 944 "modules.m"
                parse_tree__modules__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 11)));
#line 944 "modules.m"
                parse_tree__modules__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 12)));
#line 944 "modules.m"
                parse_tree__modules__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 13)));
#line 944 "modules.m"
                parse_tree__modules__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 14)));
#line 944 "modules.m"
                parse_tree__modules__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 15)));
#line 944 "modules.m"
                parse_tree__modules__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 16)));
#line 944 "modules.m"
                parse_tree__modules__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 17)));
#line 944 "modules.m"
                parse_tree__modules__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 18)));
#line 944 "modules.m"
                parse_tree__modules__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 19)));
#line 944 "modules.m"
                parse_tree__modules__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 20)));
#line 944 "modules.m"
                parse_tree__modules__V_179_179 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, (MR_Integer) 21)));
#line 944 "modules.m"
                {
#line 944 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 0) = ((MR_Box) (parse_tree__modules__V_158_158));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 1) = ((MR_Box) (parse_tree__modules__V_159_159));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 2) = ((MR_Box) (parse_tree__modules__V_160_160));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 3) = ((MR_Box) (parse_tree__modules__V_161_161));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 4) = ((MR_Box) (parse_tree__modules__ModAncestors_56));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 5) = ((MR_Box) (parse_tree__modules__V_163_163));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 6) = ((MR_Box) (parse_tree__modules__V_164_164));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 7) = ((MR_Box) (parse_tree__modules__V_165_165));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 8) = ((MR_Box) (parse_tree__modules__V_166_166));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 9) = ((MR_Box) (parse_tree__modules__V_167_167));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 10) = ((MR_Box) (parse_tree__modules__V_168_168));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 11) = ((MR_Box) (parse_tree__modules__V_169_169));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 12) = ((MR_Box) (parse_tree__modules__V_170_170));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 13) = ((MR_Box) (parse_tree__modules__V_171_171));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 14) = ((MR_Box) (parse_tree__modules__V_172_172));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 15) = ((MR_Box) (parse_tree__modules__V_173_173));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 16) = ((MR_Box) (parse_tree__modules__V_174_174));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 17) = ((MR_Box) (parse_tree__modules__V_175_175));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 18) = ((MR_Box) (parse_tree__modules__V_176_176));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 19) = ((MR_Box) (parse_tree__modules__V_177_177));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 20) = ((MR_Box) (parse_tree__modules__V_178_178));
#line 944 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, 21) = ((MR_Box) (parse_tree__modules__V_179_179));
#line 944 "modules.m"
                }
#line 910 "modules.m"
              }
#line 946 "modules.m"
            /* direct tailcall eliminated */
#line 946 "modules.m"
            {
#line 946 "modules.m"
              MR_Word parse_tree__modules__HeadVar__3__tmp_copy_3 = parse_tree__modules__Ancestors_33;
#line 946 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0__tmp_copy_6 = parse_tree__modules__STATE_VARIABLE_DirectImports_86_86;
#line 946 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0__tmp_copy_8 = parse_tree__modules__STATE_VARIABLE_DirectUses_87_87;
#line 946 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_10 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88;

#line 946 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_10 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_10;
#line 946 "modules.m"
              parse_tree__modules__STATE_VARIABLE_DirectUses_0_8 = parse_tree__modules__STATE_VARIABLE_DirectUses_0__tmp_copy_8;
#line 946 "modules.m"
              parse_tree__modules__STATE_VARIABLE_DirectImports_0_6 = parse_tree__modules__STATE_VARIABLE_DirectImports_0__tmp_copy_6;
#line 946 "modules.m"
              parse_tree__modules__HeadVar__3_3 = parse_tree__modules__HeadVar__3__tmp_copy_3;
#line 946 "modules.m"
            }
#line 946 "modules.m"
            continue;
#line 900 "modules.m"
          }
#line 896 "modules.m"
      }
#line 896 "modules.m"
      break;
#line 896 "modules.m"
    }
#line 141 "modules.m"
}

#line 687 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_13(
#line 687 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 687 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 687 "modules.m"
{
#line 687 "modules.m"
  {
#line 687 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 687 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 687 "modules.m"
    MR_Word parse_tree__modules__conv12_HeadVar__2_2;

#line 687 "modules.m"
    {
#line 687 "modules.m"
      parse_tree__modules__conv12_HeadVar__2_2 = parse_tree__status__make_ams_abstract_imported_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 687 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv12_HeadVar__2_2));
#line 687 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 687 "modules.m"
  }
#line 687 "modules.m"
}

#line 687 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_12(
#line 687 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 687 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 687 "modules.m"
{
#line 687 "modules.m"
  {
#line 687 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 687 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 687 "modules.m"
    MR_Word parse_tree__modules__conv11_HeadVar__3_3;

#line 687 "modules.m"
    {
#line 687 "modules.m"
      parse_tree__modules__conv11_HeadVar__3_3 = parse_tree__status__make_ams_used_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 687 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv11_HeadVar__3_3));
#line 687 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 687 "modules.m"
  }
#line 687 "modules.m"
}

#line 682 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_11(
#line 682 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 682 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 682 "modules.m"
{
#line 682 "modules.m"
  {
#line 682 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 682 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 682 "modules.m"
    MR_Word parse_tree__modules__conv10_HeadVar__2_2;

#line 682 "modules.m"
    {
#line 682 "modules.m"
      parse_tree__modules__conv10_HeadVar__2_2 = parse_tree__status__make_ams_abstract_imported_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 682 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv10_HeadVar__2_2));
#line 682 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 682 "modules.m"
  }
#line 682 "modules.m"
}

#line 682 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_10(
#line 682 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 682 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 682 "modules.m"
{
#line 682 "modules.m"
  {
#line 682 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 682 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 682 "modules.m"
    MR_Word parse_tree__modules__conv9_HeadVar__3_3;

#line 682 "modules.m"
    {
#line 682 "modules.m"
      parse_tree__modules__conv9_HeadVar__3_3 = parse_tree__status__make_ams_used_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 682 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv9_HeadVar__3_3));
#line 682 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 682 "modules.m"
  }
#line 682 "modules.m"
}

#line 677 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_9(
#line 677 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 677 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 677 "modules.m"
{
#line 677 "modules.m"
  {
#line 677 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 677 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 677 "modules.m"
    MR_Word parse_tree__modules__conv8_HeadVar__2_2;

#line 677 "modules.m"
    {
#line 677 "modules.m"
      parse_tree__modules__conv8_HeadVar__2_2 = parse_tree__status__make_ams_abstract_imported_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 677 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv8_HeadVar__2_2));
#line 677 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 677 "modules.m"
  }
#line 677 "modules.m"
}

#line 669 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_8(
#line 669 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 669 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 669 "modules.m"
{
#line 669 "modules.m"
  {
#line 669 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 669 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 669 "modules.m"
    MR_Word parse_tree__modules__conv7_HeadVar__2_2;

#line 669 "modules.m"
    {
#line 669 "modules.m"
      parse_tree__modules__conv7_HeadVar__2_2 = parse_tree__status__make_ams_abstract_imported_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 669 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv7_HeadVar__2_2));
#line 669 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 669 "modules.m"
  }
#line 669 "modules.m"
}

#line 668 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_7(
#line 668 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 668 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 668 "modules.m"
{
#line 668 "modules.m"
  {
#line 668 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 668 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 668 "modules.m"
    MR_Word parse_tree__modules__conv6_HeadVar__3_3;

#line 668 "modules.m"
    {
#line 668 "modules.m"
      parse_tree__modules__conv6_HeadVar__3_3 = parse_tree__status__make_ams_imported_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 668 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv6_HeadVar__3_3));
#line 668 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 668 "modules.m"
  }
#line 668 "modules.m"
}

#line 663 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_6(
#line 663 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 663 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 663 "modules.m"
{
#line 663 "modules.m"
  {
#line 663 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 663 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 663 "modules.m"
    MR_Word parse_tree__modules__conv5_HeadVar__2_2;

#line 663 "modules.m"
    {
#line 663 "modules.m"
      parse_tree__modules__conv5_HeadVar__2_2 = parse_tree__status__make_ams_abstract_imported_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 663 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv5_HeadVar__2_2));
#line 663 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 663 "modules.m"
  }
#line 663 "modules.m"
}

#line 658 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_5(
#line 658 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 658 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 658 "modules.m"
{
#line 658 "modules.m"
  {
#line 658 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 658 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 658 "modules.m"
    MR_Word parse_tree__modules__conv4_HeadVar__2_2;

#line 658 "modules.m"
    {
#line 658 "modules.m"
      parse_tree__modules__conv4_HeadVar__2_2 = parse_tree__status__make_ams_abstract_imported_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 658 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv4_HeadVar__2_2));
#line 658 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 658 "modules.m"
  }
#line 658 "modules.m"
}

#line 658 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_4(
#line 658 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 658 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 658 "modules.m"
{
#line 658 "modules.m"
  {
#line 658 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 658 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 658 "modules.m"
    MR_Word parse_tree__modules__conv3_HeadVar__3_3;

#line 658 "modules.m"
    {
#line 658 "modules.m"
      parse_tree__modules__conv3_HeadVar__3_3 = parse_tree__status__make_ams_imported_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 658 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv3_HeadVar__3_3));
#line 658 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 658 "modules.m"
  }
#line 658 "modules.m"
}

#line 652 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_3(
#line 652 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 652 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 652 "modules.m"
{
#line 652 "modules.m"
  {
#line 652 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 652 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 652 "modules.m"
    MR_Word parse_tree__modules__conv2_HeadVar__3_3;

#line 652 "modules.m"
    {
#line 652 "modules.m"
      parse_tree__modules__conv2_HeadVar__3_3 = parse_tree__status__make_ams_imported_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 652 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv2_HeadVar__3_3));
#line 652 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 652 "modules.m"
  }
#line 652 "modules.m"
}

#line 651 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_2(
#line 651 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 651 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 651 "modules.m"
{
#line 651 "modules.m"
  {
#line 651 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 651 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 651 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__3_3;

#line 651 "modules.m"
    {
#line 651 "modules.m"
      parse_tree__modules__conv1_HeadVar__3_3 = parse_tree__status__make_ams_imported_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 651 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__3_3));
#line 651 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 651 "modules.m"
  }
#line 651 "modules.m"
}

#line 632 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_1(
#line 632 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 632 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 632 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2)
#line 632 "modules.m"
{
#line 632 "modules.m"
  {
#line 632 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 632 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__2_2;

#line 632 "modules.m"
    {
#line 632 "modules.m"
      parse_tree__prog_item__augment_block_2_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_HeadVar__2_2);
    }
#line 632 "modules.m"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__2_2));
#line 632 "modules.m"
  }
#line 632 "modules.m"
}

#line 117 "modules.m"
void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0(
#line 117 "modules.m"
  MR_Word parse_tree__modules__Globals_8,
#line 117 "modules.m"
  MR_String parse_tree__modules__SourceFileName_9,
#line 117 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_10,
#line 117 "modules.m"
  MR_Word parse_tree__modules__RawCompUnit0_11,
#line 117 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_48)
#line 117 "modules.m"
{
#line 623 "modules.m"
  {
#line 623 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 623 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_145_145;
#line 623 "modules.m"
    MR_Word parse_tree__modules__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_11, (MR_Integer) 0)));
#line 623 "modules.m"
    MR_Word parse_tree__modules__ModuleNameContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_11, (MR_Integer) 1)));
#line 623 "modules.m"
    MR_Word parse_tree__modules__RawItemBlocks0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_11, (MR_Integer) 2)));
#line 623 "modules.m"
    MR_Word parse_tree__modules__ParentDeps_17;
#line 623 "modules.m"
    MR_Word parse_tree__modules__IntImportDeps0_18;
#line 623 "modules.m"
    MR_Word parse_tree__modules__IntUseDeps0_19;
#line 623 "modules.m"
    MR_Word parse_tree__modules__ImpImportDeps_20;
#line 623 "modules.m"
    MR_Word parse_tree__modules__ImpUseDeps_21;
#line 623 "modules.m"
    MR_Word parse_tree__modules__AugItemBlocks0_22;
#line 623 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntImportDeps_23;
#line 623 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntUseDeps_24;
#line 623 "modules.m"
    MR_Word parse_tree__modules__IntImportDeps_25;
#line 623 "modules.m"
    MR_Word parse_tree__modules__IntUseDeps_26;
#line 623 "modules.m"
    MR_Word parse_tree__modules__HaveReadModuleMaps_27;
#line 623 "modules.m"
    MR_Word parse_tree__modules__ParentImportDeps_28;
#line 623 "modules.m"
    MR_Word parse_tree__modules__ParentUseDeps_29;
#line 623 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps0_30;
#line 623 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps1_32;
#line 623 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImportDeps0_34;
#line 623 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps2_36;
#line 623 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps_38;
#line 623 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImportDeps_40;
#line 623 "modules.m"
    MR_Word parse_tree__modules__AugItemBlocks_44;
#line 623 "modules.m"
    MR_Word parse_tree__modules__AccessSpecs_47;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_56_56;
#line 623 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_58_58;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_59_59;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_60_60;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_61_61;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_62_62;
#line 623 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_72_72;
#line 623 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_76_76;
#line 623 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_84_84;
#line 623 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93;
#line 623 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_101_101;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_106_106;
#line 623 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_109_109;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_114_114;
#line 623 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_117_117;
#line 623 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_124_124;
#line 623 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_131_131;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_134_134;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_136_136;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_137_137;
#line 656 "modules.m"
    MR_Word parse_tree__modules__V_31_31;
#line 660 "modules.m"
    MR_Word parse_tree__modules__V_33_33;
#line 666 "modules.m"
    MR_Word parse_tree__modules__V_35_35;
#line 675 "modules.m"
    MR_Word parse_tree__modules__V_37_37;
#line 680 "modules.m"
    MR_Word parse_tree__modules__V_39_39;
#line 685 "modules.m"
    MR_Word parse_tree__modules__V_41_41;
#line 693 "modules.m"
    MR_Word parse_tree__modules__V_42_42;
#line 698 "modules.m"
    MR_Word parse_tree__modules__V_43_43;
#line 703 "modules.m"
    MR_Word parse_tree__modules__V_45_45;
#line 703 "modules.m"
    MR_Word parse_tree__modules__V_46_46;

#line 627 "modules.m"
    {
#line 627 "modules.m"
      parse_tree__modules__ParentDeps_17 = mdbcomp__sym_name__get_ancestors_1_f_0(parse_tree__modules__ModuleName_14);
    }
#line 628 "modules.m"
    {
#line 628 "modules.m"
      parse_tree__module_imports__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(parse_tree__modules__RawItemBlocks0_16, &parse_tree__modules__IntImportDeps0_18, &parse_tree__modules__IntUseDeps0_19, &parse_tree__modules__ImpImportDeps_20, &parse_tree__modules__ImpUseDeps_21);
    }
#line 632 "modules.m"
    {
#line 632 "modules.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__modules_scalar_common_1[0], (MR_Word) &parse_tree__modules_scalar_common_1[1], (MR_Word) &parse_tree__modules_scalar_common_2[9], parse_tree__modules__RawItemBlocks0_16, &parse_tree__modules__AugItemBlocks0_22);
    }
#line 635 "modules.m"
    {
#line 635 "modules.m"
      parse_tree__modules__V_56_56 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0);
    }
#line 633 "modules.m"
    {
#line 633 "modules.m"
      parse_tree__modules__make_module_and_imports_12_p_0(parse_tree__modules__SourceFileName_9, parse_tree__modules__SourceFileModuleName_10, parse_tree__modules__ModuleName_14, parse_tree__modules__ModuleNameContext_15, parse_tree__modules__AugItemBlocks0_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__modules__V_56_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_58_58);
    }
#line 641 "modules.m"
    {
#line 641 "modules.m"
      parse_tree__module_imports__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0, parse_tree__modules__Globals_8, parse_tree__modules__RawItemBlocks0_16, &parse_tree__modules__ImplicitIntImportDeps_23, &parse_tree__modules__ImplicitIntUseDeps_24);
    }
#line 11639 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_145_145 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 643 "modules.m"
    {
#line 643 "modules.m"
      parse_tree__modules__IntImportDeps_25 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_145_145, parse_tree__modules__ImplicitIntImportDeps_23, parse_tree__modules__IntImportDeps0_18);
    }
#line 644 "modules.m"
    {
#line 644 "modules.m"
      parse_tree__modules__IntUseDeps_26 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_145_145, parse_tree__modules__ImplicitIntUseDeps_24, parse_tree__modules__IntUseDeps0_19);
    }
#line 647 "modules.m"
    {
#line 647 "modules.m"
      parse_tree__modules__V_59_59 = mercury__map__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[2], (MR_Word) &parse_tree__modules_scalar_common_1[3]);
    }
#line 647 "modules.m"
    {
#line 647 "modules.m"
      parse_tree__modules__V_60_60 = mercury__map__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[4], (MR_Word) &parse_tree__modules_scalar_common_1[5]);
    }
#line 647 "modules.m"
    {
#line 647 "modules.m"
      parse_tree__modules__V_61_61 = mercury__map__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[6], (MR_Word) &parse_tree__modules_scalar_common_1[7]);
    }
#line 647 "modules.m"
    {
#line 647 "modules.m"
      parse_tree__modules__HaveReadModuleMaps_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 647 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_27, 0) = ((MR_Box) (parse_tree__modules__V_59_59));
#line 647 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_27, 1) = ((MR_Box) (parse_tree__modules__V_60_60));
#line 647 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_27, 2) = ((MR_Box) (parse_tree__modules__V_61_61));
#line 647 "modules.m"
    }
#line 651 "modules.m"
    parse_tree__modules__V_62_62 = (MR_Word) &parse_tree__modules_scalar_common_3[8];
#line 650 "modules.m"
    {
#line 650 "modules.m"
      parse_tree__modules__process_module_private_interfaces_13_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, parse_tree__modules__ParentDeps_17, parse_tree__modules__V_62_62, (MR_Word) &parse_tree__modules_scalar_common_3[9], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ParentImportDeps_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ParentUseDeps_29, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_58_58, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66);
    }
#line 658 "modules.m"
    parse_tree__modules__V_72_72 = (MR_Word) &parse_tree__modules_scalar_common_3[10];
#line 656 "modules.m"
    {
#line 656 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__ParentImportDeps_28, (MR_Integer) 1, parse_tree__modules__V_72_72, (MR_Word) &parse_tree__modules_scalar_common_2[10], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IntIndirectImportDeps0_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_31_31, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_76_76);
    }
#line 660 "modules.m"
    {
#line 660 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__IntImportDeps_25, (MR_Integer) 1, parse_tree__modules__V_62_62, (MR_Word) &parse_tree__modules_scalar_common_2[11], parse_tree__modules__IntIndirectImportDeps0_30, &parse_tree__modules__IntIndirectImportDeps1_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_33_33, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_76_76, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_84_84);
    }
#line 666 "modules.m"
    {
#line 666 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__ImpImportDeps_20, (MR_Integer) 1, (MR_Word) &parse_tree__modules_scalar_common_3[11], (MR_Word) &parse_tree__modules_scalar_common_2[12], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ImpIndirectImportDeps0_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_35_35, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_84_84, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93);
    }
#line 675 "modules.m"
    {
#line 675 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__ParentUseDeps_29, (MR_Integer) 1, parse_tree__modules__V_72_72, (MR_Word) &parse_tree__modules_scalar_common_2[13], parse_tree__modules__IntIndirectImportDeps1_32, &parse_tree__modules__IntIndirectImportDeps2_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_37_37, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_93_93, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_101_101);
    }
#line 682 "modules.m"
    parse_tree__modules__V_106_106 = (MR_Word) &parse_tree__modules_scalar_common_3[12];
#line 680 "modules.m"
    {
#line 680 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 0, parse_tree__modules__IntUseDeps_26, (MR_Integer) 1, parse_tree__modules__V_106_106, (MR_Word) &parse_tree__modules_scalar_common_2[14], parse_tree__modules__IntIndirectImportDeps2_36, &parse_tree__modules__IntIndirectImportDeps_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_39_39, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_101_101, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_109_109);
    }
#line 687 "modules.m"
    parse_tree__modules__V_114_114 = (MR_Word) &parse_tree__modules_scalar_common_3[13];
#line 685 "modules.m"
    {
#line 685 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 0, parse_tree__modules__ImpUseDeps_21, (MR_Integer) 1, parse_tree__modules__V_114_114, (MR_Word) &parse_tree__modules_scalar_common_2[15], parse_tree__modules__ImpIndirectImportDeps0_34, &parse_tree__modules__ImpIndirectImportDeps_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_41_41, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_109_109, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_117_117);
    }
#line 693 "modules.m"
    {
#line 693 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_95_95_91_49_93_95_48_12_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, parse_tree__modules__IntIndirectImportDeps_38, (MR_Integer) 1, parse_tree__modules__V_106_106, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_42_42, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_117_117, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_124_124);
    }
#line 698 "modules.m"
    {
#line 698 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_95_95_91_49_93_95_48_12_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, parse_tree__modules__ImpIndirectImportDeps_40, (MR_Integer) 1, parse_tree__modules__V_114_114, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_43_43, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_124_124, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_131_131);
    }
#line 703 "modules.m"
    {
#line 703 "modules.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(parse_tree__modules__STATE_VARIABLE_ModuleAndImports_131_131, &parse_tree__modules__AugItemBlocks_44, &parse_tree__modules__V_45_45, &parse_tree__modules__V_46_46);
    }
#line 705 "modules.m"
    {
#line 705 "modules.m"
      parse_tree__modules__V_137_137 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_145_145, parse_tree__modules__ImpImportDeps_20, parse_tree__modules__ImpUseDeps_21);
    }
#line 705 "modules.m"
    {
#line 705 "modules.m"
      parse_tree__modules__V_136_136 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_145_145, parse_tree__modules__IntUseDeps_26, parse_tree__modules__V_137_137);
    }
#line 705 "modules.m"
    {
#line 705 "modules.m"
      parse_tree__modules__V_134_134 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_145_145, parse_tree__modules__IntImportDeps_25, parse_tree__modules__V_136_136);
    }
#line 704 "modules.m"
    {
#line 704 "modules.m"
      parse_tree__modules__check_imports_accessibility_5_p_0(parse_tree__modules__ModuleName_14, parse_tree__modules__AugItemBlocks_44, parse_tree__modules__V_134_134, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__AccessSpecs_47);
    }
#line 707 "modules.m"
    {
#line 707 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__AccessSpecs_47, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_131_131, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_48);
#line 707 "modules.m"
      return;
    }
#line 623 "modules.m"
  }
#line 117 "modules.m"
}

#line 575 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_11(
#line 575 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 575 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 575 "modules.m"
{
#line 575 "modules.m"
  {
#line 575 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 575 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 575 "modules.m"
    MR_Word parse_tree__modules__conv10_HeadVar__2_2;

#line 575 "modules.m"
    {
#line 575 "modules.m"
      parse_tree__modules__conv10_HeadVar__2_2 = parse_tree__status__make_ams_abstract_imported_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 575 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv10_HeadVar__2_2));
#line 575 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 575 "modules.m"
  }
#line 575 "modules.m"
}

#line 574 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_10(
#line 574 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 574 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 574 "modules.m"
{
#line 574 "modules.m"
  {
#line 574 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 574 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 574 "modules.m"
    MR_Word parse_tree__modules__conv9_HeadVar__3_3;

#line 574 "modules.m"
    {
#line 574 "modules.m"
      parse_tree__modules__conv9_HeadVar__3_3 = parse_tree__status__make_ams_used_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 574 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv9_HeadVar__3_3));
#line 574 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 574 "modules.m"
  }
#line 574 "modules.m"
}

#line 568 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_9(
#line 568 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 568 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 568 "modules.m"
{
#line 568 "modules.m"
  {
#line 568 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 568 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 568 "modules.m"
    MR_Word parse_tree__modules__conv8_HeadVar__2_2;

#line 568 "modules.m"
    {
#line 568 "modules.m"
      parse_tree__modules__conv8_HeadVar__2_2 = parse_tree__status__make_ams_abstract_imported_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 568 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv8_HeadVar__2_2));
#line 568 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 568 "modules.m"
  }
#line 568 "modules.m"
}

#line 568 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_8(
#line 568 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 568 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 568 "modules.m"
{
#line 568 "modules.m"
  {
#line 568 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 568 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 568 "modules.m"
    MR_Word parse_tree__modules__conv7_HeadVar__3_3;

#line 568 "modules.m"
    {
#line 568 "modules.m"
      parse_tree__modules__conv7_HeadVar__3_3 = parse_tree__status__make_ams_used_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 568 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv7_HeadVar__3_3));
#line 568 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 568 "modules.m"
  }
#line 568 "modules.m"
}

#line 560 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_7(
#line 560 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 560 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 560 "modules.m"
{
#line 560 "modules.m"
  {
#line 560 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 560 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 560 "modules.m"
    MR_Word parse_tree__modules__conv6_HeadVar__2_2;

#line 560 "modules.m"
    {
#line 560 "modules.m"
      parse_tree__modules__conv6_HeadVar__2_2 = parse_tree__status__make_ams_abstract_imported_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 560 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv6_HeadVar__2_2));
#line 560 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 560 "modules.m"
  }
#line 560 "modules.m"
}

#line 559 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_6(
#line 559 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 559 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 559 "modules.m"
{
#line 559 "modules.m"
  {
#line 559 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 559 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 559 "modules.m"
    MR_Word parse_tree__modules__conv5_HeadVar__3_3;

#line 559 "modules.m"
    {
#line 559 "modules.m"
      parse_tree__modules__conv5_HeadVar__3_3 = parse_tree__status__make_ams_imported_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 559 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv5_HeadVar__3_3));
#line 559 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 559 "modules.m"
  }
#line 559 "modules.m"
}

#line 550 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_5(
#line 550 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 550 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 550 "modules.m"
{
#line 550 "modules.m"
  {
#line 550 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 550 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 550 "modules.m"
    MR_Word parse_tree__modules__conv4_HeadVar__2_2;

#line 550 "modules.m"
    {
#line 550 "modules.m"
      parse_tree__modules__conv4_HeadVar__2_2 = parse_tree__status__make_ams_abstract_imported_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 550 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv4_HeadVar__2_2));
#line 550 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 550 "modules.m"
  }
#line 550 "modules.m"
}

#line 539 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_4(
#line 539 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 539 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 539 "modules.m"
{
#line 539 "modules.m"
  {
#line 539 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 539 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 539 "modules.m"
    MR_Word parse_tree__modules__conv3_HeadVar__3_3;

#line 539 "modules.m"
    {
#line 539 "modules.m"
      parse_tree__modules__conv3_HeadVar__3_3 = parse_tree__status__make_ams_imported_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 539 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv3_HeadVar__3_3));
#line 539 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 539 "modules.m"
  }
#line 539 "modules.m"
}

#line 538 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_3(
#line 538 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 538 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 538 "modules.m"
{
#line 538 "modules.m"
  {
#line 538 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 538 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 538 "modules.m"
    MR_Word parse_tree__modules__conv2_HeadVar__3_3;

#line 538 "modules.m"
    {
#line 538 "modules.m"
      parse_tree__modules__conv2_HeadVar__3_3 = parse_tree__status__make_ams_imported_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 538 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv2_HeadVar__3_3));
#line 538 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 538 "modules.m"
  }
#line 538 "modules.m"
}

#line 508 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_2(
#line 508 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 508 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 508 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2)
#line 508 "modules.m"
{
#line 508 "modules.m"
  {
#line 508 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 508 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__2_2;

#line 508 "modules.m"
    {
#line 508 "modules.m"
      parse_tree__prog_item__augment_block_2_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv1_HeadVar__2_2);
    }
#line 508 "modules.m"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__2_2));
#line 508 "modules.m"
  }
#line 508 "modules.m"
}

#line 501 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_1(
#line 501 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 501 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 501 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_2)
#line 501 "modules.m"
{
#line 501 "modules.m"
  {
#line 501 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 501 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__2_2;

#line 501 "modules.m"
    {
#line 501 "modules.m"
      parse_tree__prog_item__augment_block_2_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_HeadVar__2_2);
    }
#line 501 "modules.m"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__2_2));
#line 501 "modules.m"
  }
#line 501 "modules.m"
}

#line 103 "modules.m"
void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0(
#line 103 "modules.m"
  MR_Word parse_tree__modules__Globals_11,
#line 103 "modules.m"
  MR_String parse_tree__modules__SourceFileName_12,
#line 103 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_13,
#line 103 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamp_14,
#line 103 "modules.m"
  MR_Word parse_tree__modules__NestedChildren_15,
#line 103 "modules.m"
  MR_Word parse_tree__modules__RawCompUnit0_16,
#line 103 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 103 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_78)
#line 103 "modules.m"
{
#line 441 "modules.m"
  {
#line 441 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 441 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_174_174;
#line 441 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_175_175;
#line 441 "modules.m"
    MR_Word parse_tree__modules__ModuleName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_16, (MR_Integer) 0)));
#line 441 "modules.m"
    MR_Word parse_tree__modules__ModuleNameContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_16, (MR_Integer) 1)));
#line 441 "modules.m"
    MR_Word parse_tree__modules__RawItemBlocks0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_16, (MR_Integer) 2)));
#line 441 "modules.m"
    MR_Word parse_tree__modules__AncestorModules_23;
#line 441 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules0_24;
#line 441 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules0_25;
#line 441 "modules.m"
    MR_Word parse_tree__modules__ImpImportedModules0_26;
#line 441 "modules.m"
    MR_Word parse_tree__modules__ImpUsedModules0_27;
#line 441 "modules.m"
    MR_Word parse_tree__modules__ImportedModules0_28;
#line 441 "modules.m"
    MR_Word parse_tree__modules__UsedModules0_29;
#line 441 "modules.m"
    MR_Word parse_tree__modules__Context_32;
#line 441 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules1_33;
#line 441 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules1_34;
#line 441 "modules.m"
    MR_Word parse_tree__modules__ImpImportedModules_35;
#line 441 "modules.m"
    MR_Word parse_tree__modules__ImpUsedModules_36;
#line 441 "modules.m"
    MR_Word parse_tree__modules__IFileItemBlocks_37;
#line 441 "modules.m"
    MR_Word parse_tree__modules__NoIFileItemBlocks_38;
#line 441 "modules.m"
    MR_Word parse_tree__modules__PublicChildren_39;
#line 441 "modules.m"
    MR_Word parse_tree__modules__FactDeps_40;
#line 441 "modules.m"
    MR_Word parse_tree__modules__ForeignIncludeFiles_41;
#line 441 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestampMap_43;
#line 441 "modules.m"
    MR_Word parse_tree__modules__Children_44;
#line 441 "modules.m"
    MR_Word parse_tree__modules__AugItemBlocks1_45;
#line 441 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntImportedModules_53;
#line 441 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntUsedModules_54;
#line 441 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules2_55;
#line 441 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules2_56;
#line 441 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules_57;
#line 441 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules_58;
#line 441 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImports1_61;
#line 441 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports1_62;
#line 441 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImports1_65;
#line 441 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports1_66;
#line 441 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImports_67;
#line 441 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports2_68;
#line 441 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImports_69;
#line 441 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports2_70;
#line 441 "modules.m"
    MR_Word parse_tree__modules__TransitiveImportMarker_71;
#line 441 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports_72;
#line 441 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports_73;
#line 441 "modules.m"
    MR_Word parse_tree__modules__AugItemBlocks_74;
#line 441 "modules.m"
    MR_Word parse_tree__modules__AccessSpecs_77;
#line 441 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_86_86;
#line 441 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_87_87;
#line 441 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_106_106;
#line 441 "modules.m"
    MR_Word parse_tree__modules__V_107_107;
#line 441 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_109_109;
#line 441 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_117_117;
#line 441 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_124_124;
#line 441 "modules.m"
    MR_Word parse_tree__modules__V_129_129;
#line 441 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_131_131;
#line 441 "modules.m"
    MR_Word parse_tree__modules__V_136_136;
#line 441 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_138_138;
#line 441 "modules.m"
    MR_Word parse_tree__modules__V_142_142;
#line 441 "modules.m"
    MR_Word parse_tree__modules__V_144_144;
#line 441 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_145_145;
#line 441 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_150_150;
#line 441 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_156_156;
#line 441 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_162_162;
#line 441 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_167_167;
#line 441 "modules.m"
    MR_Word parse_tree__modules__V_169_169;
#line 441 "modules.m"
    MR_Word parse_tree__modules__V_171_171;
#line 441 "modules.m"
    MR_Word parse_tree__modules__V_172_172;
#line 458 "modules.m"
    MR_Word parse_tree__modules__V_223_223;
#line 613 "modules.m"
    MR_Word parse_tree__modules__V_75_75;
#line 613 "modules.m"
    MR_Word parse_tree__modules__V_76_76;

#line 447 "modules.m"
    {
#line 447 "modules.m"
      parse_tree__modules__AncestorModules_23 = mdbcomp__sym_name__get_ancestors_1_f_0(parse_tree__modules__ModuleName_20);
    }
#line 448 "modules.m"
    {
#line 448 "modules.m"
      parse_tree__module_imports__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(parse_tree__modules__RawItemBlocks0_22, &parse_tree__modules__IntImportedModules0_24, &parse_tree__modules__IntUsedModules0_25, &parse_tree__modules__ImpImportedModules0_26, &parse_tree__modules__ImpUsedModules0_27);
    }
#line 12288 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_174_174 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 452 "modules.m"
    {
#line 452 "modules.m"
      parse_tree__modules__ImportedModules0_28 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_174_174, parse_tree__modules__IntImportedModules0_24, parse_tree__modules__ImpImportedModules0_26);
    }
#line 453 "modules.m"
    {
#line 453 "modules.m"
      parse_tree__modules__UsedModules0_29 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_174_174, parse_tree__modules__IntUsedModules0_25, parse_tree__modules__ImpUsedModules0_27);
    }
#line 458 "modules.m"
    {
#line 458 "modules.m"
      parse_tree__modules__V_223_223 = mercury__term__context_init_0_f_0();
    }
#line 458 "modules.m"
    {
#line 458 "modules.m"
      parse_tree__modules__succeeded = mercury__term____Unify____context_0_0(parse_tree__modules__ModuleNameContext_21, parse_tree__modules__V_223_223);
    }
#line 462 "modules.m"
    if (parse_tree__modules__succeeded)
#line 460 "modules.m"
      {
#line 460 "modules.m"
        MR_String parse_tree__modules__FileName_31;

#line 459 "modules.m"
        {
#line 459 "modules.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__modules__Globals_11, parse_tree__modules__ModuleName_20, (MR_String) ".m", (MR_Integer) 1, &parse_tree__modules__FileName_31);
        }
#line 461 "modules.m"
        {
#line 461 "modules.m"
          parse_tree__modules__Context_32 = mercury__term__context_init_2_f_0(parse_tree__modules__FileName_31, (MR_Integer) 1);
        }
#line 460 "modules.m"
      }
#line 462 "modules.m"
    else
#line 463 "modules.m"
      parse_tree__modules__Context_32 = parse_tree__modules__ModuleNameContext_21;
#line 466 "modules.m"
    {
#line 466 "modules.m"
      parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0(parse_tree__modules__ModuleName_20, parse_tree__modules__Context_32, parse_tree__modules__AncestorModules_23, parse_tree__modules__ImportedModules0_28, parse_tree__modules__UsedModules0_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__STATE_VARIABLE_Specs_86_86);
    }
#line 469 "modules.m"
    {
#line 469 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_12_p_0(parse_tree__modules__Context_32, parse_tree__modules__IntImportedModules0_24, &parse_tree__modules__IntImportedModules1_33, parse_tree__modules__IntUsedModules0_25, &parse_tree__modules__IntUsedModules1_34, parse_tree__modules__ImpImportedModules0_26, &parse_tree__modules__ImpImportedModules_35, parse_tree__modules__ImpUsedModules0_27, &parse_tree__modules__ImpUsedModules_36, parse_tree__modules__STATE_VARIABLE_Specs_86_86, &parse_tree__modules__STATE_VARIABLE_Specs_87_87);
    }
#line 475 "modules.m"
    {
#line 475 "modules.m"
      parse_tree__comp_unit_interface__get_int_and_impl_4_p_0((MR_Integer) 0, parse_tree__modules__RawCompUnit0_16, &parse_tree__modules__IFileItemBlocks_37, &parse_tree__modules__NoIFileItemBlocks_38);
    }
#line 12348 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_175_175 = (MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0;
#line 477 "modules.m"
    {
#line 477 "modules.m"
      parse_tree__modules__get_included_modules_in_item_blocks_2_p_0(parse_tree__modules__TypeCtorInfo_175_175, parse_tree__modules__IFileItemBlocks_37, &parse_tree__modules__PublicChildren_39);
    }
#line 478 "modules.m"
    {
#line 478 "modules.m"
      parse_tree__module_imports__get_fact_table_dependencies_in_item_blocks_2_p_0(parse_tree__modules__TypeCtorInfo_175_175, parse_tree__modules__RawItemBlocks0_22, &parse_tree__modules__FactDeps_40);
    }
#line 479 "modules.m"
    {
#line 479 "modules.m"
      parse_tree__module_imports__get_foreign_include_files_in_item_blocks_2_p_0(parse_tree__modules__TypeCtorInfo_175_175, parse_tree__modules__RawItemBlocks0_22, &parse_tree__modules__ForeignIncludeFiles_41);
    }
#line 485 "modules.m"
    if ((parse_tree__modules__MaybeTimestamp_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "modules.m"
      parse_tree__modules__MaybeTimestampMap_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 485 "modules.m"
    else
#line 482 "modules.m"
      {
#line 482 "modules.m"
        MR_Word parse_tree__modules__Timestamp_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__MaybeTimestamp_14, (MR_Integer) 0)));
#line 482 "modules.m"
        MR_Word parse_tree__modules__V_89_89;
#line 482 "modules.m"
        MR_Word parse_tree__modules__V_90_90;

#line 484 "modules.m"
        {
#line 484 "modules.m"
          parse_tree__modules__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 484 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_90_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 484 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_90_90, 1) = ((MR_Box) (parse_tree__modules__Timestamp_42));
#line 484 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_90_90, 2) = ((MR_Box) ((MR_Integer) 1));
#line 484 "modules.m"
        }
#line 483 "modules.m"
        {
#line 483 "modules.m"
          parse_tree__modules__V_89_89 = mercury__map__singleton_2_f_0(parse_tree__modules__TypeCtorInfo_174_174, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, ((MR_Box) (parse_tree__modules__ModuleName_20)), ((MR_Box) (parse_tree__modules__V_90_90)));
        }
#line 483 "modules.m"
        {
#line 483 "modules.m"
          parse_tree__modules__MaybeTimestampMap_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 483 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__MaybeTimestampMap_43, 0) = ((MR_Box) (parse_tree__modules__V_89_89));
#line 483 "modules.m"
        }
#line 482 "modules.m"
      }
#line 496 "modules.m"
    {
#line 496 "modules.m"
      parse_tree__modules__get_included_modules_in_item_blocks_2_p_0(parse_tree__modules__TypeCtorInfo_175_175, parse_tree__modules__RawItemBlocks0_22, &parse_tree__modules__Children_44);
    }
#line 502 "modules.m"
    if ((parse_tree__modules__Children_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 498 "modules.m"
      {
#line 501 "modules.m"
        {
#line 501 "modules.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__modules_scalar_common_1[0], (MR_Word) &parse_tree__modules_scalar_common_1[1], (MR_Word) &parse_tree__modules_scalar_common_2[3], parse_tree__modules__RawItemBlocks0_22, &parse_tree__modules__AugItemBlocks1_45);
        }
#line 498 "modules.m"
      }
#line 502 "modules.m"
    else
#line 503 "modules.m"
      {
#line 503 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_181_181;
#line 503 "modules.m"
        MR_Word parse_tree__modules__TypeInfo_185_185;
#line 503 "modules.m"
        MR_Word parse_tree__modules__RevClauses_48;
#line 503 "modules.m"
        MR_Word parse_tree__modules__RevImplDecls_49;
#line 503 "modules.m"
        MR_Word parse_tree__modules__Clauses_50;
#line 503 "modules.m"
        MR_Word parse_tree__modules__ImplDecls_51;
#line 503 "modules.m"
        MR_Word parse_tree__modules__AugIFileItemBlocks_52;
#line 503 "modules.m"
        MR_Word parse_tree__modules__V_96_96;
#line 503 "modules.m"
        MR_Word parse_tree__modules__V_97_97;
#line 503 "modules.m"
        MR_Word parse_tree__modules__V_99_99;
#line 503 "modules.m"
        MR_Word parse_tree__modules__V_100_100;
#line 503 "modules.m"
        MR_Word parse_tree__modules__V_101_101;
#line 503 "modules.m"
        MR_Word parse_tree__modules__V_103_103;

#line 504 "modules.m"
        {
#line 504 "modules.m"
          parse_tree__modules__split_items_in_blocks_into_clauses_and_decls_5_p_0(parse_tree__modules__NoIFileItemBlocks_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__RevClauses_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__RevImplDecls_49);
        }
#line 12459 "parse_tree.modules.c"
        parse_tree__modules__TypeCtorInfo_181_181 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 506 "modules.m"
        {
#line 506 "modules.m"
          mercury__list__reverse_2_p_0(parse_tree__modules__TypeCtorInfo_181_181, parse_tree__modules__RevClauses_48, &parse_tree__modules__Clauses_50);
        }
#line 507 "modules.m"
        {
#line 507 "modules.m"
          mercury__list__reverse_2_p_0(parse_tree__modules__TypeCtorInfo_181_181, parse_tree__modules__RevImplDecls_49, &parse_tree__modules__ImplDecls_51);
        }
#line 12471 "parse_tree.modules.c"
        parse_tree__modules__TypeInfo_185_185 = (MR_Word) &parse_tree__modules_scalar_common_1[1];
#line 508 "modules.m"
        {
#line 508 "modules.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__modules_scalar_common_1[0], parse_tree__modules__TypeInfo_185_185, (MR_Word) &parse_tree__modules_scalar_common_2[4], parse_tree__modules__IFileItemBlocks_37, &parse_tree__modules__AugIFileItemBlocks_52);
        }
#line 512 "modules.m"
        {
#line 512 "modules.m"
          parse_tree__modules__V_99_99 = mercury__term__context_init_0_f_0();
        }
#line 511 "modules.m"
        {
#line 511 "modules.m"
          parse_tree__modules__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 511 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_97_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 511 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_97_97, 1) = ((MR_Box) (parse_tree__modules__V_99_99));
#line 511 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_97_97, 2) = ((MR_Box) (parse_tree__modules__ImplDecls_51));
#line 511 "modules.m"
        }
#line 513 "modules.m"
        {
#line 513 "modules.m"
          parse_tree__modules__V_103_103 = mercury__term__context_init_0_f_0();
        }
#line 513 "modules.m"
        {
#line 513 "modules.m"
          parse_tree__modules__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 513 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_101_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 513 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_101_101, 1) = ((MR_Box) (parse_tree__modules__V_103_103));
#line 513 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_101_101, 2) = ((MR_Box) (parse_tree__modules__Clauses_50));
#line 513 "modules.m"
        }
#line 513 "modules.m"
        {
#line 513 "modules.m"
          parse_tree__modules__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_100_100, 0) = ((MR_Box) (parse_tree__modules__V_101_101));
#line 513 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 513 "modules.m"
        }
#line 512 "modules.m"
        {
#line 512 "modules.m"
          parse_tree__modules__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_96_96, 0) = ((MR_Box) (parse_tree__modules__V_97_97));
#line 512 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_96_96, 1) = ((MR_Box) (parse_tree__modules__V_100_100));
#line 512 "modules.m"
        }
#line 509 "modules.m"
        {
#line 509 "modules.m"
          parse_tree__modules__AugItemBlocks1_45 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeInfo_185_185, parse_tree__modules__AugIFileItemBlocks_52, parse_tree__modules__V_96_96);
        }
#line 503 "modules.m"
      }
#line 516 "modules.m"
    {
#line 516 "modules.m"
      parse_tree__modules__make_module_and_imports_12_p_0(parse_tree__modules__SourceFileName_12, parse_tree__modules__SourceFileModuleName_13, parse_tree__modules__ModuleName_20, parse_tree__modules__ModuleNameContext_21, parse_tree__modules__AugItemBlocks1_45, parse_tree__modules__STATE_VARIABLE_Specs_87_87, parse_tree__modules__PublicChildren_39, parse_tree__modules__NestedChildren_15, parse_tree__modules__FactDeps_40, parse_tree__modules__ForeignIncludeFiles_41, parse_tree__modules__MaybeTimestampMap_43, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_106_106);
    }
#line 525 "modules.m"
    {
#line 525 "modules.m"
      parse_tree__module_imports__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0, parse_tree__modules__Globals_11, parse_tree__modules__AugItemBlocks1_45, &parse_tree__modules__ImplicitIntImportedModules_53, &parse_tree__modules__ImplicitIntUsedModules_54);
    }
#line 527 "modules.m"
    {
#line 527 "modules.m"
      parse_tree__modules__IntImportedModules2_55 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_174_174, parse_tree__modules__ImplicitIntImportedModules_53, parse_tree__modules__IntImportedModules1_33);
    }
#line 529 "modules.m"
    {
#line 529 "modules.m"
      parse_tree__modules__IntUsedModules2_56 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_174_174, parse_tree__modules__ImplicitIntUsedModules_54, parse_tree__modules__IntUsedModules1_34);
    }
#line 538 "modules.m"
    parse_tree__modules__V_107_107 = (MR_Word) &parse_tree__modules_scalar_common_3[3];
#line 536 "modules.m"
    {
#line 536 "modules.m"
      parse_tree__modules__process_module_private_interfaces_13_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__AncestorModules_23, parse_tree__modules__V_107_107, (MR_Word) &parse_tree__modules_scalar_common_3[4], parse_tree__modules__IntImportedModules2_55, &parse_tree__modules__IntImportedModules_57, parse_tree__modules__IntUsedModules2_56, &parse_tree__modules__IntUsedModules_58, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_106_106, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_109_109);
    }
#line 547 "modules.m"
    {
#line 547 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 1, parse_tree__modules__IntImportedModules_57, (MR_Integer) 3, parse_tree__modules__V_107_107, (MR_Word) &parse_tree__modules_scalar_common_2[5], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IntIndirectImports1_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IntImpIndirectImports1_62, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_109_109, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_117_117);
    }
#line 557 "modules.m"
    {
#line 557 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 1, parse_tree__modules__ImpImportedModules_35, (MR_Integer) 3, (MR_Word) &parse_tree__modules_scalar_common_3[5], (MR_Word) &parse_tree__modules_scalar_common_2[6], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ImpIndirectImports1_65, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ImpImpIndirectImports1_66, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_117_117, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_124_124);
    }
#line 568 "modules.m"
    parse_tree__modules__V_129_129 = (MR_Word) &parse_tree__modules_scalar_common_3[6];
#line 566 "modules.m"
    {
#line 566 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 0, parse_tree__modules__IntUsedModules_58, (MR_Integer) 3, parse_tree__modules__V_129_129, (MR_Word) &parse_tree__modules_scalar_common_2[7], parse_tree__modules__IntIndirectImports1_61, &parse_tree__modules__IntIndirectImports_67, parse_tree__modules__IntImpIndirectImports1_62, &parse_tree__modules__IntImpIndirectImports2_68, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_124_124, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_131_131);
    }
#line 574 "modules.m"
    parse_tree__modules__V_136_136 = (MR_Word) &parse_tree__modules_scalar_common_3[7];
#line 572 "modules.m"
    {
#line 572 "modules.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 0, parse_tree__modules__ImpUsedModules_36, (MR_Integer) 3, parse_tree__modules__V_136_136, (MR_Word) &parse_tree__modules_scalar_common_2[8], parse_tree__modules__ImpIndirectImports1_65, &parse_tree__modules__ImpIndirectImports_69, parse_tree__modules__ImpImpIndirectImports1_66, &parse_tree__modules__ImpImpIndirectImports2_70, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_131_131, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_138_138);
    }
#line 584 "modules.m"
    {
#line 584 "modules.m"
      parse_tree__modules__V_142_142 = mercury__term__context_init_0_f_0();
    }
#line 584 "modules.m"
    {
#line 584 "modules.m"
      parse_tree__modules__TransitiveImportMarker_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 584 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__TransitiveImportMarker_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 584 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__TransitiveImportMarker_71, 1) = ((MR_Box) (parse_tree__modules__V_142_142));
#line 584 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__TransitiveImportMarker_71, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "modules.m"
    }
#line 585 "modules.m"
    {
#line 585 "modules.m"
      parse_tree__modules__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_144_144, 0) = ((MR_Box) (parse_tree__modules__TransitiveImportMarker_71));
#line 585 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "modules.m"
    }
#line 585 "modules.m"
    {
#line 585 "modules.m"
      parse_tree__module_imports__module_and_imports_add_item_blocks_3_p_0(parse_tree__modules__V_144_144, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_138_138, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_145_145);
    }
#line 587 "modules.m"
    {
#line 587 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_95_95_91_49_93_95_48_12_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__IntIndirectImports_67, (MR_Integer) 2, parse_tree__modules__V_129_129, parse_tree__modules__IntImpIndirectImports2_68, &parse_tree__modules__IntImpIndirectImports_72, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_145_145, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_150_150);
    }
#line 593 "modules.m"
    {
#line 593 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_49_95_95_91_49_93_95_48_12_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__ImpIndirectImports_69, (MR_Integer) 2, parse_tree__modules__V_136_136, parse_tree__modules__ImpImpIndirectImports2_70, &parse_tree__modules__ImpImpIndirectImports_73, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_150_150, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_156_156);
    }
#line 604 "modules.m"
    {
#line 604 "modules.m"
      parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho2_10_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__IntImpIndirectImports_72, (MR_Integer) 2, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_156_156, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_162_162);
    }
#line 608 "modules.m"
    {
#line 608 "modules.m"
      parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho2_10_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__ImpImpIndirectImports_73, (MR_Integer) 2, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_162_162, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_167_167);
    }
#line 613 "modules.m"
    {
#line 613 "modules.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(parse_tree__modules__STATE_VARIABLE_ModuleAndImports_167_167, &parse_tree__modules__AugItemBlocks_74, &parse_tree__modules__V_75_75, &parse_tree__modules__V_76_76);
    }
#line 617 "modules.m"
    {
#line 617 "modules.m"
      parse_tree__modules__V_172_172 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_174_174, parse_tree__modules__ImpImportedModules_35, parse_tree__modules__ImpUsedModules_36);
    }
#line 616 "modules.m"
    {
#line 616 "modules.m"
      parse_tree__modules__V_171_171 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_174_174, parse_tree__modules__IntUsedModules_58, parse_tree__modules__V_172_172);
    }
#line 616 "modules.m"
    {
#line 616 "modules.m"
      parse_tree__modules__V_169_169 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_174_174, parse_tree__modules__IntImportedModules_57, parse_tree__modules__V_171_171);
    }
#line 615 "modules.m"
    {
#line 615 "modules.m"
      parse_tree__modules__check_imports_accessibility_5_p_0(parse_tree__modules__ModuleName_20, parse_tree__modules__AugItemBlocks_74, parse_tree__modules__V_169_169, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__AccessSpecs_77);
    }
#line 619 "modules.m"
    {
#line 619 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__AccessSpecs_77, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_167_167, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_78);
#line 619 "modules.m"
      return;
    }
#line 441 "modules.m"
  }
#line 103 "modules.m"
}

#line 73 "modules.m"
void MR_CALL 
parse_tree__modules__check_int_for_no_exports_6_p_0(
#line 73 "modules.m"
  MR_Word parse_tree__modules__Globals_7,
#line 73 "modules.m"
  MR_Word parse_tree__modules__IntRawCompUnit_8,
#line 73 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_16,
#line 73 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_17)
#line 73 "modules.m"
{
#line 351 "modules.m"
  {
#line 351 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 351 "modules.m"
    MR_Word parse_tree__modules__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__IntRawCompUnit_8, (MR_Integer) 0)));
#line 351 "modules.m"
    MR_Word parse_tree__modules__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__IntRawCompUnit_8, (MR_Integer) 1)));
#line 351 "modules.m"
    MR_Word parse_tree__modules__RawItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__IntRawCompUnit_8, (MR_Integer) 2)));
#line 351 "modules.m"
    MR_Word parse_tree__modules__ExportAnything_14;

#line 353 "modules.m"
    {
#line 353 "modules.m"
      parse_tree__modules__do_ms_interface_item_blocks_export_anything_2_p_0(parse_tree__modules__RawItemBlocks_13, &parse_tree__modules__ExportAnything_14);
    }
#line 356 "modules.m"
#line 356 "modules.m"
    switch (parse_tree__modules__ExportAnything_14) {
#line 356 "modules.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 356 "modules.m"
      case (MR_Integer) 0:
#line 357 "modules.m"
        {
#line 357 "modules.m"
          MR_Word parse_tree__modules__WarnSpec_15;

#line 358 "modules.m"
          {
#line 358 "modules.m"
            parse_tree__modules__generate_no_exports_warning_6_p_0(parse_tree__modules__Globals_7, parse_tree__modules__ModuleName_11, parse_tree__modules__Context_12, &parse_tree__modules__WarnSpec_15);
          }
#line 360 "modules.m"
          {
#line 360 "modules.m"
            MR_Word base;
#line 360 "modules.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_Specs_17 = base;
#line 360 "modules.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__WarnSpec_15));
#line 360 "modules.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_16));
#line 360 "modules.m"
          }
#line 357 "modules.m"
        }
#line 356 "modules.m"
        break;
#line 356 "modules.m"
      case (MR_Integer) 1:
#line 355 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_Specs_17 = parse_tree__modules__STATE_VARIABLE_Specs_0_16;
#line 356 "modules.m"
        break;
#line 356 "modules.m"
    }
#line 351 "modules.m"
  }
#line 73 "modules.m"
}

#line 62 "modules.m"
void MR_CALL 
parse_tree__modules__check_for_no_exports_6_p_0(
#line 62 "modules.m"
  MR_Word parse_tree__modules__Globals_7,
#line 62 "modules.m"
  MR_Word parse_tree__modules__RawCompUnit_8,
#line 62 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_17,
#line 62 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_18)
#line 62 "modules.m"
{
#line 337 "modules.m"
  {
#line 337 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 337 "modules.m"
    MR_Word parse_tree__modules__ExportWarning_11;

#line 338 "modules.m"
    {
#line 338 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_7, (MR_Integer) 9, &parse_tree__modules__ExportWarning_11);
    }
#line 341 "modules.m"
#line 341 "modules.m"
    switch (parse_tree__modules__ExportWarning_11) {
#line 341 "modules.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 341 "modules.m"
      case (MR_Integer) 0:
#line 340 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_Specs_18 = parse_tree__modules__STATE_VARIABLE_Specs_0_17;
#line 341 "modules.m"
        break;
#line 341 "modules.m"
      case (MR_Integer) 1:
#line 342 "modules.m"
        {
#line 342 "modules.m"
          MR_Word parse_tree__modules__ModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit_8, (MR_Integer) 0)));
#line 342 "modules.m"
          MR_Word parse_tree__modules__Context_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit_8, (MR_Integer) 1)));
#line 342 "modules.m"
          MR_Word parse_tree__modules__RawItemBlocks_35;
#line 342 "modules.m"
          MR_Word parse_tree__modules__ExportAnything_36;
#line 343 "modules.m"
          MR_Word parse_tree__modules___RawItemBlocks_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit_8, (MR_Integer) 2)));

#line 344 "modules.m"
          {
#line 344 "modules.m"
            parse_tree__comp_unit_interface__get_interface_3_p_0((MR_Integer) 0, parse_tree__modules__RawCompUnit_8, &parse_tree__modules__RawItemBlocks_35);
          }
#line 353 "modules.m"
          {
#line 353 "modules.m"
            parse_tree__modules__do_ms_interface_item_blocks_export_anything_2_p_0(parse_tree__modules__RawItemBlocks_35, &parse_tree__modules__ExportAnything_36);
          }
#line 356 "modules.m"
#line 356 "modules.m"
          switch (parse_tree__modules__ExportAnything_36) {
#line 356 "modules.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 356 "modules.m"
            case (MR_Integer) 0:
#line 357 "modules.m"
              {
#line 357 "modules.m"
                MR_Word parse_tree__modules__WarnSpec_37;

#line 358 "modules.m"
                {
#line 358 "modules.m"
                  parse_tree__modules__generate_no_exports_warning_6_p_0(parse_tree__modules__Globals_7, parse_tree__modules__ModuleName_33, parse_tree__modules__Context_34, &parse_tree__modules__WarnSpec_37);
                }
#line 360 "modules.m"
                {
#line 360 "modules.m"
                  MR_Word base;
#line 360 "modules.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "modules.m"
                  *parse_tree__modules__STATE_VARIABLE_Specs_18 = base;
#line 360 "modules.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__WarnSpec_37));
#line 360 "modules.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_17));
#line 360 "modules.m"
                }
#line 357 "modules.m"
              }
#line 356 "modules.m"
              break;
#line 356 "modules.m"
            case (MR_Integer) 1:
#line 355 "modules.m"
              *parse_tree__modules__STATE_VARIABLE_Specs_18 = parse_tree__modules__STATE_VARIABLE_Specs_0_17;
#line 356 "modules.m"
              break;
#line 356 "modules.m"
          }
#line 342 "modules.m"
        }
#line 341 "modules.m"
        break;
#line 341 "modules.m"
    }
#line 337 "modules.m"
  }
#line 62 "modules.m"
}

void mercury__parse_tree__modules__init(void)
{
}

void mercury__parse_tree__modules__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_aug_section_maker_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_generate_dependencies_mode_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_module_import_or_use_map_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_module_inclusion_map_0);
}

void mercury__parse_tree__modules__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.modules. */
