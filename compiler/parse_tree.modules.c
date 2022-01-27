/*
** Automatically generated from `modules.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 105 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_module_section_0;

#line 108 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_module_section_0;

#line 111 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 114 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 117 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 120 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

#line 123 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

#line 126 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_0;

#line 129 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_1;

#line 132 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_import_or_use_0[2];

#line 135 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_import_or_use_0[2];

#line 138 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_0[2];

#line 141 "parse_tree.modules.c"
static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_import_or_use_context_0_0[2];

#line 144 "parse_tree.modules.c"
static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0;

#line 147 "parse_tree.modules.c"
static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0[1];

#line 150 "parse_tree.modules.c"
static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_import_or_use_context_0[1];

#line 153 "parse_tree.modules.c"
static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_import_or_use_context_0[1];

#line 156 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_context_0[1];

#line 159 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_func_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_kind__type_ctor_info_int_file_kind_0__pseudo_1;

#line 162 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

#line 165 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 168 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__pti_item_block_1__pseudo_1;

#line 171 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1;

#line 174 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_pred_3__pseudo_list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 177 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__modules____vpti_func_2__pseudo_1__plain_bool__type_ctor_info_bool_0;

#line 180 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_0_0_10001(
#line 183 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 185 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 188 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_0_0_10001(
#line 191 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 193 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 195 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 198 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0_10001(
#line 201 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 203 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 206 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0_10001(
#line 209 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 211 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 213 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 216 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____int_section_maker_1_0_10001(
#line 219 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 221 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 223 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 226 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____int_section_maker_1_0_10001(
#line 229 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 231 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 233 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 235 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4);

#line 238 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0_10001(
#line 241 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 243 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 246 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0_10001(
#line 249 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 251 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 253 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 256 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0_10001(
#line 259 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 261 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 264 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0_10001(
#line 267 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 269 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 271 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 274 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_appender_1_0_10001(
#line 277 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 279 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 281 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 284 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____section_appender_1_0_10001(
#line 287 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 289 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 291 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 293 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4);

#line 296 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0_10001(
#line 299 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 301 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 303 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 306 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0_10001(
#line 309 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 311 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 313 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 315 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4);

#line 318 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_49_93_95_48_13_p_0_2(
#line 321 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 323 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 325 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 327 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 330 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_49_93_95_48_13_p_0_1(
#line 333 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 335 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 337 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 169 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_49_93_95_48_13_p_0(
#line 169 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 169 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 169 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 169 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 169 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_18,
#line 169 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_27,
#line 169 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_28,
#line 169 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_29,
#line 169 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_30);

#line 1137 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_3_p_0(
#line 1137 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1137 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_2_p_0(
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1328 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_99_108_117_100_101_100_95_109_111_100_117_108_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 1328 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1328 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2,
#line 1328 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_3);

#line 1019 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(
#line 1019 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1019 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2);

#line 745 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1(
#line 745 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 745 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 728 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(
#line 728 "modules.m"
  MR_Word parse_tree__modules__Context_10,
#line 728 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportedModules_0_22,
#line 728 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportedModules_23,
#line 728 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_UsedModules_0_24,
#line 728 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_UsedModules_25,
#line 728 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 728 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27);

#line 700 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_12_p_0(
#line 700 "modules.m"
  MR_Word parse_tree__modules__Context_14,
#line 700 "modules.m"
  MR_Word parse_tree__modules__IntImportedModules0_15,
#line 700 "modules.m"
  MR_Word * parse_tree__modules__IntImportedModules_16,
#line 700 "modules.m"
  MR_Word parse_tree__modules__IntUsedModules0_17,
#line 700 "modules.m"
  MR_Word * parse_tree__modules__IntUsedModules_18,
#line 700 "modules.m"
  MR_Word parse_tree__modules__ImpImportedModules0_19,
#line 700 "modules.m"
  MR_Word * parse_tree__modules__ImpImportedModules_20,
#line 700 "modules.m"
  MR_Word parse_tree__modules__ImpUsedModules0_21,
#line 700 "modules.m"
  MR_Word * parse_tree__modules__ImpUsedModules_22,
#line 700 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 700 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27);

#line 450 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho7_13_p_0_3(
#line 453 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 455 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 457 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 459 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 462 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho7_13_p_0_2(
#line 465 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 467 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 469 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 472 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho7_13_p_0_1(
#line 475 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 477 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 479 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 169 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho7_13_p_0(
#line 169 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 169 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 169 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 169 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 169 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_27,
#line 169 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_28,
#line 169 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_29,
#line 169 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_30);

#line 189 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho6_11_p_0(
#line 189 "modules.m"
  MR_Word parse_tree__modules__Globals_12,
#line 189 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_13,
#line 189 "modules.m"
  MR_Word parse_tree__modules__Imports_14,
#line 189 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_15,
#line 189 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_24,
#line 189 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_25);

#line 1156 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho4_6_p_0(
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6);

#line 1156 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho3_6_p_0(
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6);

#line 1156 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho2_6_p_0(
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6);

#line 1156 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho1_6_p_0(
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6);

#line 774 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__774__1_2_p_0(
#line 774 "modules.m"
  MR_Word parse_tree__modules__Ancestor_34,
#line 774 "modules.m"
  MR_Word parse_tree__modules__ModuleName_43);

#line 1137 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0(
#line 1137 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_6,
#line 1137 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1137 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0(
#line 1137 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_5,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1091 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0(
#line 1091 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1091 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1091 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1091 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0(
#line 1091 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1091 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1103 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0(
#line 1103 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1103 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1103 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1103 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0(
#line 1103 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1103 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1097 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0(
#line 1097 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1097 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1097 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1097 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0(
#line 1097 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1097 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1093 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_0_0(
#line 1093 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1093 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1093 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1093 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_0_0(
#line 1093 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_1,
#line 1093 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1338 "modules.m"
static void MR_CALL 
parse_tree__modules__get_included_modules_in_items_3_p_0(
#line 1338 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1338 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2,
#line 1338 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_3);

#line 1277 "modules.m"
static void MR_CALL 
parse_tree__modules__report_inaccessible_module_error_6_p_0(
#line 1277 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1277 "modules.m"
  MR_Word parse_tree__modules__ParentModule_8,
#line 1277 "modules.m"
  MR_String parse_tree__modules__SubModule_9,
#line 1277 "modules.m"
  MR_Word parse_tree__modules__ImportOrUseContext_10,
#line 1277 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1277 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20);

#line 1268 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0_1(
#line 1268 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1268 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1268 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1268 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1252 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0(
#line 1252 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1252 "modules.m"
  MR_Word parse_tree__modules__InclMap_8,
#line 1252 "modules.m"
  MR_Word parse_tree__modules__ImportUseMap_9,
#line 1252 "modules.m"
  MR_Word parse_tree__modules__ImportedModule_10,
#line 1252 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1252 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20);

#line 1172 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_items_acc_6_p_0(
#line 1172 "modules.m"
  MR_Word parse_tree__modules__Visible_1,
#line 1172 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1172 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1172 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1172 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1172 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6);

#line 1081 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_4_p_0_1(
#line 1081 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1081 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1081 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1081 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1069 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_4_p_0(
#line 1069 "modules.m"
  MR_Word parse_tree__modules__AugCompUnit_5,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_6,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20);

#line 1025 "modules.m"
static void MR_CALL 
parse_tree__modules__maybe_record_timestamp_6_p_0(
#line 1025 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1025 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_8,
#line 1025 "modules.m"
  MR_Word parse_tree__modules__NeedQualifier_9,
#line 1025 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamp_10,
#line 1025 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17,
#line 1025 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18);

#line 989 "modules.m"
static void MR_CALL 
parse_tree__modules__make_module_and_imports_12_p_0(
#line 989 "modules.m"
  MR_String parse_tree__modules__SourceFileName_13,
#line 989 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_14,
#line 989 "modules.m"
  MR_Word parse_tree__modules__ModuleName_15,
#line 989 "modules.m"
  MR_Word parse_tree__modules__ModuleNameContext_16,
#line 989 "modules.m"
  MR_Word parse_tree__modules__SrcItemBlocks0_17,
#line 989 "modules.m"
  MR_Word parse_tree__modules__Specs_18,
#line 989 "modules.m"
  MR_Word parse_tree__modules__PublicChildren_19,
#line 989 "modules.m"
  MR_Word parse_tree__modules__NestedChildren_20,
#line 989 "modules.m"
  MR_Word parse_tree__modules__FactDeps_21,
#line 989 "modules.m"
  MR_Word parse_tree__modules__ForeignIncludeFiles_22,
#line 989 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestampMap_23,
#line 989 "modules.m"
  MR_Word * parse_tree__modules__Module_24);

#line 761 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__wrap_symname_1_f_0(
#line 761 "modules.m"
  MR_Word parse_tree__modules__ModuleName_3);

#line 674 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_imported_ancestor_5_p_0(
#line 674 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 674 "modules.m"
  MR_Word parse_tree__modules__Context_7,
#line 674 "modules.m"
  MR_Word parse_tree__modules__AncestorName_8,
#line 674 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_15,
#line 674 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_16);

#line 659 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_1(
#line 659 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 659 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 659 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 659 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 647 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0(
#line 647 "modules.m"
  MR_Word parse_tree__modules__ModuleName_8,
#line 647 "modules.m"
  MR_Word parse_tree__modules__Context_9,
#line 647 "modules.m"
  MR_Word parse_tree__modules__AncestorModules_10,
#line 647 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_11,
#line 647 "modules.m"
  MR_Word parse_tree__modules__UsedModules_12,
#line 647 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_23,
#line 647 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_24);

#line 600 "modules.m"
static void MR_CALL 
parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(
#line 600 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 600 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_0_2,
#line 600 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevClauses_3,
#line 600 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4,
#line 600 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevImplDecls_5);

#line 565 "modules.m"
static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(
#line 565 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 565 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2);

#line 548 "modules.m"
static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_src_2_p_0(
#line 548 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 548 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2);

#line 527 "modules.m"
static void MR_CALL 
parse_tree__modules__get_src_item_blocks_public_children_3_p_0(
#line 527 "modules.m"
  MR_Word parse_tree__modules__RawCompUnit_4,
#line 527 "modules.m"
  MR_Word * parse_tree__modules__SrcItemBlocks_5,
#line 527 "modules.m"
  MR_Word * parse_tree__modules__PublicChildren_6);

#line 774 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__process_module_private_interfaces_14_p_0_1(
#line 774 "modules.m"
  MR_Box parse_tree__modules__closure_arg);

#line 500 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_19(
#line 500 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 500 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 500 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 500 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 499 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_18(
#line 499 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 499 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 499 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 499 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_17(
#line 499 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 499 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 499 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 494 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_16(
#line 494 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 494 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 494 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 494 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 493 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_15(
#line 493 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 493 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 493 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 493 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_14(
#line 493 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 493 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 493 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 488 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_13(
#line 488 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 488 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 488 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 488 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 487 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_12(
#line 487 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 487 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 487 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 479 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_11(
#line 479 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 479 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 479 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 479 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 478 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_10(
#line 478 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 478 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 478 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 477 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_9(
#line 477 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 477 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 477 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 472 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_8(
#line 472 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 472 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 472 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 472 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 471 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_7(
#line 471 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 471 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 471 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 466 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_6(
#line 466 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 466 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 466 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 466 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 465 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_5(
#line 465 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 465 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 465 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 465 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_4(
#line 465 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 465 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 465 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 459 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_3(
#line 459 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 459 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 459 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 459 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 458 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_2(
#line 458 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 458 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 458 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 457 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_1(
#line 457 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 457 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 457 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 384 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_14(
#line 384 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 384 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 384 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 384 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 383 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_13(
#line 383 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 383 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 383 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 382 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_12(
#line 382 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 382 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 382 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 376 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_11(
#line 376 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 376 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 376 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 376 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 375 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_10(
#line 375 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 375 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 375 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 374 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_9(
#line 374 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 374 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 374 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 366 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_8(
#line 366 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 366 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 366 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 366 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 365 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_7(
#line 365 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 365 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 365 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 364 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_6(
#line 364 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 364 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 364 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 355 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_5(
#line 355 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 355 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 355 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 355 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 354 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_4(
#line 354 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 354 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 354 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 343 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_3(
#line 343 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 343 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 343 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 343 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 342 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_2(
#line 342 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 342 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 342 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 341 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_1(
#line 341 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 341 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 341 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__modules_scalar_common_1[59][2];

static /* final */ const MR_Box parse_tree__modules_scalar_common_2[30][3];

static /* final */ const MR_Box parse_tree__modules_scalar_common_3[12][4];

static /* final */ const MR_Box parse_tree__modules_scalar_common_4[1][7];

static /* final */ const MR_Box parse_tree__modules_scalar_common_5[2][6];

static /* final */ const MR_Box parse_tree__modules_scalar_common_6[2][5];

static /* final */ const MR_Box parse_tree__modules_scalar_common_7[1][8];

static /* final */ const MR_Box parse_tree__modules_scalar_common_8[2][9];




static /* final */ const MR_Box parse_tree__modules_scalar_common_1[59][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_src_file_kind_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_src_module_section_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_opt_module_section_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_int_for_opt_module_section_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "imports itself!"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There is no need to explicitly import them."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "implicitly imports its ancestors."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Every sub-module"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[13])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "imported using both"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is inaccessible."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[13])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[13])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: module"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Module"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "imports its own ancestor, module"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[21])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error in"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Either there was no prior"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration to import module"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or the interface for module"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not contain an"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for module"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_2[30][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules_scalar_common_1[12]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules_scalar_common_1[11]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_14)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_15)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_16)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_18)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_19)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__process_module_short_interfaces_transitively__ho7_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__process_module_short_interfaces_transitively__ho7_13_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__process_module_short_interfaces_transitively__ho7_13_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_6[1])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_49_93_95_48_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_49_93_95_48_13_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_3[12][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_14)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_17)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_import_locn_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_module_section_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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

static /* final */ const MR_Box parse_tree__modules_scalar_common_7[1][8] = {
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

static /* final */ const MR_Box parse_tree__modules_scalar_common_8[2][9] = {
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



#line 1959 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0
  }
};

#line 1967 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_module_section_0
  }
};

#line 1975 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1983 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1991 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

#line 2000 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0
  }
};

#line 2008 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0
  }
};

#line 2017 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_0 = {
  (MR_String) "import_decl",
  (MR_Integer) 0
};

#line 2023 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_1 = {
  (MR_String) "use_decl",
  (MR_Integer) 1
};

#line 2029 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_import_or_use_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_1
};

#line 2035 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_import_or_use_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_import_or_use_0_1
};

#line 2041 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2047 "parse_tree.modules.c"
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

#line 2064 "parse_tree.modules.c"
static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_import_or_use_context_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2070 "parse_tree.modules.c"
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

#line 2085 "parse_tree.modules.c"
static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0
};

#line 2090 "parse_tree.modules.c"
static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_import_or_use_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0
  }
};

#line 2099 "parse_tree.modules.c"
static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_import_or_use_context_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0
};

#line 2104 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_context_0[1] = {
  (MR_Integer) 0
};

#line 2109 "parse_tree.modules.c"
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

#line 2126 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_func_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_kind__type_ctor_info_int_file_kind_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2137 "parse_tree.modules.c"
const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_int_section_maker_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__modules____Unify____int_section_maker_1_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____int_section_maker_1_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "int_section_maker",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__modules____vpti_func_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_kind__type_ctor_info_int_file_kind_0__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2154 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0
  }
};

#line 2163 "parse_tree.modules.c"
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

#line 2180 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

#line 2189 "parse_tree.modules.c"
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

#line 2206 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2214 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__parse_tree__prog_item__pti_item_block_1__pseudo_1
  }
};

#line 2222 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_pred_3__pseudo_list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0,
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 2233 "parse_tree.modules.c"
const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_section_appender_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__modules____Unify____section_appender_1_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____section_appender_1_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "section_appender",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__modules____vpti_pred_3__pseudo_list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2250 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__modules____vpti_func_2__pseudo_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 2260 "parse_tree.modules.c"
const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_section_visibility_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__modules____Unify____section_visibility_1_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____section_visibility_1_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "section_visibility",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__modules____vpti_func_2__pseudo_1__plain_bool__type_ctor_info_bool_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2277 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_0_0_10001(
#line 2280 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2282 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2284 "parse_tree.modules.c"
{
#line 2286 "parse_tree.modules.c"
  {
#line 2288 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2291 "parse_tree.modules.c"
    {
#line 2293 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____import_or_use_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2296 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2298 "parse_tree.modules.c"
  }
#line 2300 "parse_tree.modules.c"
}

#line 2303 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_0_0_10001(
#line 2306 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2308 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2310 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2312 "parse_tree.modules.c"
{
#line 2314 "parse_tree.modules.c"
  {
#line 2316 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2319 "parse_tree.modules.c"
    {
#line 2321 "parse_tree.modules.c"
      parse_tree__modules____Compare____import_or_use_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2324 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2326 "parse_tree.modules.c"
  }
#line 2328 "parse_tree.modules.c"
}

#line 2331 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0_10001(
#line 2334 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2336 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2338 "parse_tree.modules.c"
{
#line 2340 "parse_tree.modules.c"
  {
#line 2342 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2345 "parse_tree.modules.c"
    {
#line 2347 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____import_or_use_context_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2350 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2352 "parse_tree.modules.c"
  }
#line 2354 "parse_tree.modules.c"
}

#line 2357 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0_10001(
#line 2360 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2362 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2364 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2366 "parse_tree.modules.c"
{
#line 2368 "parse_tree.modules.c"
  {
#line 2370 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2373 "parse_tree.modules.c"
    {
#line 2375 "parse_tree.modules.c"
      parse_tree__modules____Compare____import_or_use_context_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2378 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2380 "parse_tree.modules.c"
  }
#line 2382 "parse_tree.modules.c"
}

#line 2385 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____int_section_maker_1_0_10001(
#line 2388 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2390 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2392 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2394 "parse_tree.modules.c"
{
#line 2396 "parse_tree.modules.c"
  {
#line 2398 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2401 "parse_tree.modules.c"
    {
#line 2403 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____int_section_maker_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2406 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2408 "parse_tree.modules.c"
  }
#line 2410 "parse_tree.modules.c"
}

#line 2413 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____int_section_maker_1_0_10001(
#line 2416 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2418 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 2420 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 2422 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4)
#line 2424 "parse_tree.modules.c"
{
#line 2426 "parse_tree.modules.c"
  {
#line 2428 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2431 "parse_tree.modules.c"
    {
#line 2433 "parse_tree.modules.c"
      parse_tree__modules____Compare____int_section_maker_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_3), ((MR_Word) parse_tree__modules__wrapper_arg_4));
    }
#line 2436 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2438 "parse_tree.modules.c"
  }
#line 2440 "parse_tree.modules.c"
}

#line 2443 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0_10001(
#line 2446 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2448 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2450 "parse_tree.modules.c"
{
#line 2452 "parse_tree.modules.c"
  {
#line 2454 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2457 "parse_tree.modules.c"
    {
#line 2459 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____module_import_or_use_map_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2462 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2464 "parse_tree.modules.c"
  }
#line 2466 "parse_tree.modules.c"
}

#line 2469 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0_10001(
#line 2472 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2474 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2476 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2478 "parse_tree.modules.c"
{
#line 2480 "parse_tree.modules.c"
  {
#line 2482 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2485 "parse_tree.modules.c"
    {
#line 2487 "parse_tree.modules.c"
      parse_tree__modules____Compare____module_import_or_use_map_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2490 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2492 "parse_tree.modules.c"
  }
#line 2494 "parse_tree.modules.c"
}

#line 2497 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0_10001(
#line 2500 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2502 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2504 "parse_tree.modules.c"
{
#line 2506 "parse_tree.modules.c"
  {
#line 2508 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2511 "parse_tree.modules.c"
    {
#line 2513 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____module_inclusion_map_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2516 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2518 "parse_tree.modules.c"
  }
#line 2520 "parse_tree.modules.c"
}

#line 2523 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0_10001(
#line 2526 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2528 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2530 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2532 "parse_tree.modules.c"
{
#line 2534 "parse_tree.modules.c"
  {
#line 2536 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2539 "parse_tree.modules.c"
    {
#line 2541 "parse_tree.modules.c"
      parse_tree__modules____Compare____module_inclusion_map_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2544 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2546 "parse_tree.modules.c"
  }
#line 2548 "parse_tree.modules.c"
}

#line 2551 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_appender_1_0_10001(
#line 2554 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2556 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2558 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2560 "parse_tree.modules.c"
{
#line 2562 "parse_tree.modules.c"
  {
#line 2564 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2567 "parse_tree.modules.c"
    {
#line 2569 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____section_appender_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2572 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2574 "parse_tree.modules.c"
  }
#line 2576 "parse_tree.modules.c"
}

#line 2579 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____section_appender_1_0_10001(
#line 2582 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2584 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 2586 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 2588 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4)
#line 2590 "parse_tree.modules.c"
{
#line 2592 "parse_tree.modules.c"
  {
#line 2594 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2597 "parse_tree.modules.c"
    {
#line 2599 "parse_tree.modules.c"
      parse_tree__modules____Compare____section_appender_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_3), ((MR_Word) parse_tree__modules__wrapper_arg_4));
    }
#line 2602 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2604 "parse_tree.modules.c"
  }
#line 2606 "parse_tree.modules.c"
}

#line 2609 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0_10001(
#line 2612 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2614 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2616 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2618 "parse_tree.modules.c"
{
#line 2620 "parse_tree.modules.c"
  {
#line 2622 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2625 "parse_tree.modules.c"
    {
#line 2627 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____section_visibility_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2630 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2632 "parse_tree.modules.c"
  }
#line 2634 "parse_tree.modules.c"
}

#line 2637 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0_10001(
#line 2640 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2642 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 2644 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 2646 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4)
#line 2648 "parse_tree.modules.c"
{
#line 2650 "parse_tree.modules.c"
  {
#line 2652 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2655 "parse_tree.modules.c"
    {
#line 2657 "parse_tree.modules.c"
      parse_tree__modules____Compare____section_visibility_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_3), ((MR_Word) parse_tree__modules__wrapper_arg_4));
    }
#line 2660 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2662 "parse_tree.modules.c"
  }
#line 2664 "parse_tree.modules.c"
}

#line 2667 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_49_93_95_48_13_p_0_2(
#line 2670 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 2672 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2674 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2676 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 2678 "parse_tree.modules.c"
{
#line 2680 "parse_tree.modules.c"
  {
#line 2682 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 2684 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv1_HeadVar__3_3;

#line 2687 "parse_tree.modules.c"
    {
#line 2689 "parse_tree.modules.c"
      parse_tree__module_imports__module_and_imports_add_indirect_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv1_HeadVar__3_3);
    }
#line 2692 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__3_3));
#line 2694 "parse_tree.modules.c"
  }
#line 2696 "parse_tree.modules.c"
}

#line 2699 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_49_93_95_48_13_p_0_1(
#line 2702 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 2704 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2706 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2708 "parse_tree.modules.c"
{
#line 2710 "parse_tree.modules.c"
  {
#line 2712 "parse_tree.modules.c"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 2714 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 2716 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__3_3;

#line 2719 "parse_tree.modules.c"
    {
#line 2721 "parse_tree.modules.c"
      parse_tree__modules__conv0_HeadVar__3_3 = parse_tree__status__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2724 "parse_tree.modules.c"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__3_3));
#line 2726 "parse_tree.modules.c"
    return parse_tree__modules__wrapper_arg_3;
#line 2728 "parse_tree.modules.c"
  }
#line 2730 "parse_tree.modules.c"
}

#line 169 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_49_93_95_48_13_p_0(
#line 169 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 169 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 169 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 169 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 169 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_18,
#line 169 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_27,
#line 169 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_28,
#line 169 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_29,
#line 169 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_30)
#line 169 "modules.m"
{
#line 916 "modules.m"
  while (MR_TRUE)
#line 916 "modules.m"
    {
#line 916 "modules.m"
      /* tailcall optimized into a loop */
#line 916 "modules.m"
      {
#line 916 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 916 "modules.m"
        MR_Word parse_tree__modules__IndirectImports_24;
#line 916 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_34_34;
#line 916 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_35_35;

#line 917 "modules.m"
        {
#line 917 "modules.m"
          parse_tree__modules__process_module_short_interfaces_15_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0, parse_tree__modules__Globals_14, parse_tree__modules__HaveReadModuleMaps_15, parse_tree__modules__Imports_16, parse_tree__modules__IntFileKind_17, parse_tree__modules__NewIntSection_18, (MR_Word) &parse_tree__modules_scalar_common_2[28], (MR_Word) &parse_tree__modules_scalar_common_2[29], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IndirectImports_24, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_27, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_34_34, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_29, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_35_35);
        }
#line 922 "modules.m"
        if ((parse_tree__modules__IndirectImports_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "modules.m"
          {
#line 921 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_28 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_34_34;
#line 921 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_30 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_35_35;
#line 921 "modules.m"
          }
#line 922 "modules.m"
        else
#line 924 "modules.m"
          {
#line 924 "modules.m"
            /* direct tailcall eliminated */
#line 924 "modules.m"
            {
#line 924 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_16 = parse_tree__modules__IndirectImports_24;
#line 924 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_27 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_34_34;
#line 924 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_29 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_35_35;

#line 924 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_29 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_29;
#line 924 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_27 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_27;
#line 924 "modules.m"
              parse_tree__modules__Imports_16 = parse_tree__modules__Imports__tmp_copy_16;
#line 924 "modules.m"
            }
#line 924 "modules.m"
            continue;
#line 924 "modules.m"
          }
#line 916 "modules.m"
      }
#line 916 "modules.m"
      break;
#line 916 "modules.m"
    }
#line 169 "modules.m"
}

#line 1137 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_3_p_0(
#line 1137 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1137 "modules.m"
{
#line 1137 "modules.m"
  {
#line 1137 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1137 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 1137 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 1137 "modules.m"
    {
#line 1137 "modules.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__modules__HeadVar__1_1, (MR_Word) parse_tree__modules__Cast_HeadVar1_4, (MR_Word) parse_tree__modules__Cast_HeadVar2_5);
#line 1137 "modules.m"
      return;
    }
#line 1137 "modules.m"
  }
#line 1137 "modules.m"
}

#line 1137 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_2_p_0(
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1137 "modules.m"
{
#line 1137 "modules.m"
  {
#line 1137 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1137 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 1137 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 1137 "modules.m"
    {
#line 1137 "modules.m"
      return parse_tree__modules__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__modules__Cast_HeadVar1_3, (MR_Word) parse_tree__modules__Cast_HeadVar2_4);
    }
#line 1137 "modules.m"
    return parse_tree__modules__succeeded;
#line 1137 "modules.m"
  }
#line 1137 "modules.m"
}

#line 1328 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_99_108_117_100_101_100_95_109_111_100_117_108_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
#line 1328 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1328 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2,
#line 1328 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_3)
#line 1328 "modules.m"
{
#line 1331 "modules.m"
  while (MR_TRUE)
#line 1331 "modules.m"
    {
#line 1331 "modules.m"
      /* tailcall optimized into a loop */
#line 1331 "modules.m"
      {
#line 1331 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1331 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1331 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_3 = parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2;
#line 1331 "modules.m"
        else
#line 1333 "modules.m"
          {
#line 1333 "modules.m"
            MR_Word parse_tree__modules__ItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1333 "modules.m"
            MR_Word parse_tree__modules__ItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1333 "modules.m"
            MR_Word parse_tree__modules__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_7, (MR_Integer) 2)));
#line 1333 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_15_15;
#line 1334 "modules.m"
            MR_Box parse_tree__modules__V_10_10 = (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_7, (MR_Integer) 0));
#line 1334 "modules.m"
            MR_Word parse_tree__modules__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_7, (MR_Integer) 1)));

#line 1335 "modules.m"
            {
#line 1335 "modules.m"
              parse_tree__modules__get_included_modules_in_items_3_p_0(parse_tree__modules__Items_12, parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2, &parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_15_15);
            }
#line 1336 "modules.m"
            /* direct tailcall eliminated */
#line 1336 "modules.m"
            {
#line 1336 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__ItemBlocks_8;
#line 1336 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0__tmp_copy_2 = parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_15_15;

#line 1336 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2 = parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0__tmp_copy_2;
#line 1336 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1336 "modules.m"
            }
#line 1336 "modules.m"
            continue;
#line 1333 "modules.m"
          }
#line 1331 "modules.m"
      }
#line 1331 "modules.m"
      break;
#line 1331 "modules.m"
    }
#line 1328 "modules.m"
}

#line 1019 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(
#line 1019 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1019 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2)
#line 1019 "modules.m"
{
#line 1022 "modules.m"
  {
#line 1022 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1022 "modules.m"
    if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1023 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Integer) 1;
#line 1022 "modules.m"
    else
#line 1022 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Integer) 0;
#line 1022 "modules.m"
  }
#line 1019 "modules.m"
}

#line 745 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1(
#line 745 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 745 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 745 "modules.m"
{
#line 745 "modules.m"
  {
#line 745 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 745 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 745 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__2_2;

#line 745 "modules.m"
    {
#line 745 "modules.m"
      parse_tree__modules__conv1_HeadVar__2_2 = parse_tree__modules__wrap_symname_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 745 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__2_2));
#line 745 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 745 "modules.m"
  }
#line 745 "modules.m"
}

#line 728 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(
#line 728 "modules.m"
  MR_Word parse_tree__modules__Context_10,
#line 728 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportedModules_0_22,
#line 728 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportedModules_23,
#line 728 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_UsedModules_0_24,
#line 728 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_UsedModules_25,
#line 728 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 728 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27)
#line 728 "modules.m"
{
#line 735 "modules.m"
  {
#line 735 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 735 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_81_81 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 735 "modules.m"
    MR_Word parse_tree__modules__ImportedSet_14;
#line 735 "modules.m"
    MR_Word parse_tree__modules__UsedSet_15;
#line 735 "modules.m"
    MR_Word parse_tree__modules__BothSet_16;

#line 736 "modules.m"
    {
#line 736 "modules.m"
      mercury__set__list_to_set_2_p_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__STATE_VARIABLE_ImportedModules_0_22, &parse_tree__modules__ImportedSet_14);
    }
#line 737 "modules.m"
    {
#line 737 "modules.m"
      mercury__set__list_to_set_2_p_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__STATE_VARIABLE_UsedModules_0_24, &parse_tree__modules__UsedSet_15);
    }
#line 738 "modules.m"
    {
#line 738 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__ImportedSet_14, parse_tree__modules__UsedSet_15, &parse_tree__modules__BothSet_16);
    }
#line 739 "modules.m"
    {
#line 739 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__BothSet_16);
    }
#line 741 "modules.m"
    if (parse_tree__modules__succeeded)
#line 740 "modules.m"
      {
#line 740 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_Specs_27 = parse_tree__modules__STATE_VARIABLE_Specs_0_26;
#line 740 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_UsedModules_25 = parse_tree__modules__STATE_VARIABLE_UsedModules_0_24;
#line 740 "modules.m"
      }
#line 741 "modules.m"
    else
#line 742 "modules.m"
      {
#line 742 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_82_82;
#line 742 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_83_83;
#line 742 "modules.m"
        MR_Word parse_tree__modules__BothList_17;
#line 742 "modules.m"
        MR_Word parse_tree__modules__Pieces_18;
#line 742 "modules.m"
        MR_Word parse_tree__modules__Msg_19;
#line 742 "modules.m"
        MR_Word parse_tree__modules__Spec_21;
#line 742 "modules.m"
        MR_Word parse_tree__modules__V_28_28;
#line 742 "modules.m"
        MR_Word parse_tree__modules__V_31_31;
#line 742 "modules.m"
        MR_Word parse_tree__modules__V_32_32;
#line 742 "modules.m"
        MR_String parse_tree__modules__V_33_33;
#line 742 "modules.m"
        MR_Word parse_tree__modules__V_37_37;
#line 742 "modules.m"
        MR_Word parse_tree__modules__V_38_38;
#line 742 "modules.m"
        MR_Word parse_tree__modules__V_39_39;
#line 742 "modules.m"
        MR_Word parse_tree__modules__V_41_41;
#line 742 "modules.m"
        MR_Word parse_tree__modules__V_42_42;
#line 742 "modules.m"
        MR_String parse_tree__modules__V_43_43;
#line 742 "modules.m"
        MR_Word parse_tree__modules__V_64_64;
#line 742 "modules.m"
        MR_Word parse_tree__modules__V_65_65;
#line 742 "modules.m"
        MR_Word parse_tree__modules__V_68_68;
#line 742 "modules.m"
        MR_Word parse_tree__modules__V_69_69;
#line 742 "modules.m"
        MR_Word parse_tree__modules__V_77_77;
#line 744 "modules.m"
        MR_Box parse_tree__modules__conv0_V_33_33;
#line 746 "modules.m"
        MR_Box parse_tree__modules__conv2_V_43_43;

#line 742 "modules.m"
        {
#line 742 "modules.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__BothSet_16, &parse_tree__modules__BothList_17);
        }
#line 3139 "parse_tree.modules.c"
        parse_tree__modules__TypeCtorInfo_82_82 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 3141 "parse_tree.modules.c"
        parse_tree__modules__TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 744 "modules.m"
        {
#line 744 "modules.m"
          parse_tree__modules__conv0_V_33_33 = parse_tree__error_util__choose_number_3_f_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__TypeCtorInfo_83_83, parse_tree__modules__BothList_17, ((MR_Box) ((MR_String) "module")), ((MR_Box) ((MR_String) "modules")));
        }
#line 744 "modules.m"
        parse_tree__modules__V_33_33 = ((MR_String) parse_tree__modules__conv0_V_33_33);
#line 744 "modules.m"
        {
#line 744 "modules.m"
          parse_tree__modules__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 744 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_32_32, 1) = ((MR_Box) (parse_tree__modules__V_33_33));
#line 744 "modules.m"
        }
#line 744 "modules.m"
        {
#line 744 "modules.m"
          parse_tree__modules__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_31_31, 0) = ((MR_Box) (parse_tree__modules__V_32_32));
#line 744 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 744 "modules.m"
        }
#line 743 "modules.m"
        {
#line 743 "modules.m"
          parse_tree__modules__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[58])));
#line 743 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 1) = ((MR_Box) (parse_tree__modules__V_31_31));
#line 743 "modules.m"
        }
#line 745 "modules.m"
        {
#line 745 "modules.m"
          parse_tree__modules__V_39_39 = mercury__list__map_2_f_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__TypeCtorInfo_82_82, (MR_Word) &parse_tree__modules_scalar_common_2[27], parse_tree__modules__BothList_17);
        }
#line 745 "modules.m"
        {
#line 745 "modules.m"
          parse_tree__modules__V_38_38 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__modules__V_39_39);
        }
#line 746 "modules.m"
        {
#line 746 "modules.m"
          parse_tree__modules__conv2_V_43_43 = parse_tree__error_util__choose_number_3_f_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__TypeCtorInfo_83_83, parse_tree__modules__BothList_17, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
        }
#line 746 "modules.m"
        parse_tree__modules__V_43_43 = ((MR_String) parse_tree__modules__conv2_V_43_43);
#line 746 "modules.m"
        {
#line 746 "modules.m"
          parse_tree__modules__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 746 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_42_42, 1) = ((MR_Box) (parse_tree__modules__V_43_43));
#line 746 "modules.m"
        }
#line 746 "modules.m"
        {
#line 746 "modules.m"
          parse_tree__modules__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_41_41, 0) = ((MR_Box) (parse_tree__modules__V_42_42));
#line 746 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[31])));
#line 746 "modules.m"
        }
#line 745 "modules.m"
        {
#line 745 "modules.m"
          parse_tree__modules__V_37_37 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_82_82, parse_tree__modules__V_38_38, parse_tree__modules__V_41_41);
        }
#line 744 "modules.m"
        {
#line 744 "modules.m"
          parse_tree__modules__Pieces_18 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_82_82, parse_tree__modules__V_28_28, parse_tree__modules__V_37_37);
        }
#line 750 "modules.m"
        {
#line 750 "modules.m"
          parse_tree__modules__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 750 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_69_69, 0) = ((MR_Box) (parse_tree__modules__Pieces_18));
#line 750 "modules.m"
        }
#line 750 "modules.m"
        {
#line 750 "modules.m"
          parse_tree__modules__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_68_68, 0) = ((MR_Box) (parse_tree__modules__V_69_69));
#line 750 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 750 "modules.m"
        }
#line 750 "modules.m"
        {
#line 750 "modules.m"
          parse_tree__modules__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_65_65, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 750 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_65_65, 1) = ((MR_Box) (parse_tree__modules__V_68_68));
#line 750 "modules.m"
        }
#line 750 "modules.m"
        {
#line 750 "modules.m"
          parse_tree__modules__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_64_64, 0) = ((MR_Box) (parse_tree__modules__V_65_65));
#line 750 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 750 "modules.m"
        }
#line 749 "modules.m"
        {
#line 749 "modules.m"
          parse_tree__modules__Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 749 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_19, 0) = ((MR_Box) (parse_tree__modules__Context_10));
#line 749 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_19, 1) = ((MR_Box) (parse_tree__modules__V_64_64));
#line 749 "modules.m"
        }
#line 753 "modules.m"
        {
#line 753 "modules.m"
          parse_tree__modules__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 0) = ((MR_Box) (parse_tree__modules__Msg_19));
#line 753 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "modules.m"
        }
#line 753 "modules.m"
        {
#line 753 "modules.m"
          parse_tree__modules__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 753 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[0])));
#line 753 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 753 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_21, 2) = ((MR_Box) (parse_tree__modules__V_77_77));
#line 753 "modules.m"
        }
#line 754 "modules.m"
        {
#line 754 "modules.m"
          MR_Word base;
#line 754 "modules.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Specs_27 = base;
#line 754 "modules.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_21));
#line 754 "modules.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_26));
#line 754 "modules.m"
        }
#line 758 "modules.m"
        {
#line 758 "modules.m"
          mercury__list__delete_elems_3_p_0(parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__STATE_VARIABLE_UsedModules_0_24, parse_tree__modules__BothList_17, parse_tree__modules__STATE_VARIABLE_UsedModules_25);
        }
#line 742 "modules.m"
      }
#line 735 "modules.m"
    *parse_tree__modules__STATE_VARIABLE_ImportedModules_23 = parse_tree__modules__STATE_VARIABLE_ImportedModules_0_22;
#line 735 "modules.m"
  }
#line 728 "modules.m"
}

#line 700 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_12_p_0(
#line 700 "modules.m"
  MR_Word parse_tree__modules__Context_14,
#line 700 "modules.m"
  MR_Word parse_tree__modules__IntImportedModules0_15,
#line 700 "modules.m"
  MR_Word * parse_tree__modules__IntImportedModules_16,
#line 700 "modules.m"
  MR_Word parse_tree__modules__IntUsedModules0_17,
#line 700 "modules.m"
  MR_Word * parse_tree__modules__IntUsedModules_18,
#line 700 "modules.m"
  MR_Word parse_tree__modules__ImpImportedModules0_19,
#line 700 "modules.m"
  MR_Word * parse_tree__modules__ImpImportedModules_20,
#line 700 "modules.m"
  MR_Word parse_tree__modules__ImpUsedModules0_21,
#line 700 "modules.m"
  MR_Word * parse_tree__modules__ImpUsedModules_22,
#line 700 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 700 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27)
#line 700 "modules.m"
{
#line 711 "modules.m"
  {
#line 711 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 711 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules1_24;
#line 711 "modules.m"
    MR_Word parse_tree__modules__ImpUsedModules1_25;
#line 711 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_28_28;
#line 711 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_29_29;

#line 713 "modules.m"
    {
#line 713 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__Context_14, parse_tree__modules__IntImportedModules0_15, &parse_tree__modules__IntImportedModules1_24, parse_tree__modules__IntUsedModules0_17, parse_tree__modules__IntUsedModules_18, parse_tree__modules__STATE_VARIABLE_Specs_0_26, &parse_tree__modules__STATE_VARIABLE_Specs_28_28);
    }
#line 716 "modules.m"
    {
#line 716 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__Context_14, parse_tree__modules__IntImportedModules1_24, parse_tree__modules__IntImportedModules_16, parse_tree__modules__ImpUsedModules0_21, &parse_tree__modules__ImpUsedModules1_25, parse_tree__modules__STATE_VARIABLE_Specs_28_28, &parse_tree__modules__STATE_VARIABLE_Specs_29_29);
    }
#line 720 "modules.m"
    {
#line 720 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__Context_14, parse_tree__modules__ImpImportedModules0_19, parse_tree__modules__ImpImportedModules_20, parse_tree__modules__ImpUsedModules1_25, parse_tree__modules__ImpUsedModules_22, parse_tree__modules__STATE_VARIABLE_Specs_29_29, parse_tree__modules__STATE_VARIABLE_Specs_27);
#line 720 "modules.m"
      return;
    }
#line 711 "modules.m"
  }
#line 700 "modules.m"
}

#line 3387 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho7_13_p_0_3(
#line 3390 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 3392 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 3394 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 3396 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 3398 "parse_tree.modules.c"
{
#line 3400 "parse_tree.modules.c"
  {
#line 3402 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 3404 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv2_HeadVar__3_3;

#line 3407 "parse_tree.modules.c"
    {
#line 3409 "parse_tree.modules.c"
      parse_tree__module_imports__module_and_imports_add_indirect_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv2_HeadVar__3_3);
    }
#line 3412 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_HeadVar__3_3));
#line 3414 "parse_tree.modules.c"
  }
#line 3416 "parse_tree.modules.c"
}

#line 3419 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho7_13_p_0_2(
#line 3422 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 3424 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 3426 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 3428 "parse_tree.modules.c"
{
#line 3430 "parse_tree.modules.c"
  {
#line 3432 "parse_tree.modules.c"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 3434 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 3436 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv1_HeadVar__3_3;

#line 3439 "parse_tree.modules.c"
    {
#line 3441 "parse_tree.modules.c"
      parse_tree__modules__conv1_HeadVar__3_3 = parse_tree__status__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 3444 "parse_tree.modules.c"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__3_3));
#line 3446 "parse_tree.modules.c"
    return parse_tree__modules__wrapper_arg_3;
#line 3448 "parse_tree.modules.c"
  }
#line 3450 "parse_tree.modules.c"
}

#line 3453 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho7_13_p_0_1(
#line 3456 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 3458 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 3460 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 3462 "parse_tree.modules.c"
{
#line 3464 "parse_tree.modules.c"
  {
#line 3466 "parse_tree.modules.c"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 3468 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 3470 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__3_3;

#line 3473 "parse_tree.modules.c"
    {
#line 3475 "parse_tree.modules.c"
      parse_tree__modules__conv0_HeadVar__3_3 = parse_tree__status__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 3478 "parse_tree.modules.c"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__3_3));
#line 3480 "parse_tree.modules.c"
    return parse_tree__modules__wrapper_arg_3;
#line 3482 "parse_tree.modules.c"
  }
#line 3484 "parse_tree.modules.c"
}

#line 169 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho7_13_p_0(
#line 169 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 169 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 169 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 169 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 169 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_27,
#line 169 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_28,
#line 169 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_29,
#line 169 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_30)
#line 169 "modules.m"
{
#line 916 "modules.m"
  while (MR_TRUE)
#line 916 "modules.m"
    {
#line 916 "modules.m"
      /* tailcall optimized into a loop */
#line 916 "modules.m"
      {
#line 916 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 916 "modules.m"
        MR_Word parse_tree__modules__IndirectImports_24;
#line 916 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_34_34;
#line 916 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_35_35;

#line 917 "modules.m"
        {
#line 917 "modules.m"
          parse_tree__modules__process_module_short_interfaces_15_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0, parse_tree__modules__Globals_14, parse_tree__modules__HaveReadModuleMaps_15, parse_tree__modules__Imports_16, parse_tree__modules__IntFileKind_17, (MR_Word) &parse_tree__modules_scalar_common_2[24], (MR_Word) &parse_tree__modules_scalar_common_2[25], (MR_Word) &parse_tree__modules_scalar_common_2[26], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IndirectImports_24, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_27, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_34_34, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_29, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_35_35);
        }
#line 922 "modules.m"
        if ((parse_tree__modules__IndirectImports_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "modules.m"
          {
#line 921 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_28 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_34_34;
#line 921 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_30 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_35_35;
#line 921 "modules.m"
          }
#line 922 "modules.m"
        else
#line 924 "modules.m"
          {
#line 924 "modules.m"
            /* direct tailcall eliminated */
#line 924 "modules.m"
            {
#line 924 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_16 = parse_tree__modules__IndirectImports_24;
#line 924 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_27 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_34_34;
#line 924 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_29 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_35_35;

#line 924 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_29 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_29;
#line 924 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_27 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_27;
#line 924 "modules.m"
              parse_tree__modules__Imports_16 = parse_tree__modules__Imports__tmp_copy_16;
#line 924 "modules.m"
            }
#line 924 "modules.m"
            continue;
#line 924 "modules.m"
          }
#line 916 "modules.m"
      }
#line 916 "modules.m"
      break;
#line 916 "modules.m"
    }
#line 169 "modules.m"
}

#line 189 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho6_11_p_0(
#line 189 "modules.m"
  MR_Word parse_tree__modules__Globals_12,
#line 189 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_13,
#line 189 "modules.m"
  MR_Word parse_tree__modules__Imports_14,
#line 189 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_15,
#line 189 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_24,
#line 189 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_25)
#line 189 "modules.m"
{
#line 901 "modules.m"
  while (MR_TRUE)
#line 901 "modules.m"
    {
#line 901 "modules.m"
      /* tailcall optimized into a loop */
#line 901 "modules.m"
      {
#line 901 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 901 "modules.m"
        MR_Word parse_tree__modules__ImpIndirectImports_21;
#line 901 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_29_29;

#line 902 "modules.m"
        {
#line 902 "modules.m"
          parse_tree__modules__process_module_short_interfaces_transitively__ho7_13_p_0(parse_tree__modules__Globals_12, parse_tree__modules__HaveReadModuleMaps_13, parse_tree__modules__Imports_14, parse_tree__modules__IntFileKind_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ImpIndirectImports_21, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_24, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_29_29);
        }
#line 907 "modules.m"
        if ((parse_tree__modules__ImpIndirectImports_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 906 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_25 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_29_29;
#line 907 "modules.m"
        else
#line 909 "modules.m"
          {
#line 909 "modules.m"
            /* direct tailcall eliminated */
#line 909 "modules.m"
            {
#line 909 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_14 = parse_tree__modules__ImpIndirectImports_21;
#line 909 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_24 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_29_29;

#line 909 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_24 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_24;
#line 909 "modules.m"
              parse_tree__modules__Imports_14 = parse_tree__modules__Imports__tmp_copy_14;
#line 909 "modules.m"
            }
#line 909 "modules.m"
            continue;
#line 909 "modules.m"
          }
#line 901 "modules.m"
      }
#line 901 "modules.m"
      break;
#line 901 "modules.m"
    }
#line 189 "modules.m"
}

#line 1156 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho4_6_p_0(
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6)
#line 1156 "modules.m"
{
#line 1161 "modules.m"
  while (MR_TRUE)
#line 1161 "modules.m"
    {
#line 1161 "modules.m"
      /* tailcall optimized into a loop */
#line 1161 "modules.m"
      {
#line 1161 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1161 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1161 "modules.m"
          {
#line 1162 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImportUseMap_6 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1162 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_InclMap_4 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1161 "modules.m"
          }
#line 1161 "modules.m"
        else
#line 1164 "modules.m"
          {
#line 1164 "modules.m"
            MR_Word parse_tree__modules__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1164 "modules.m"
            MR_Word parse_tree__modules__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1164 "modules.m"
            MR_Word parse_tree__modules__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 0)));
#line 1164 "modules.m"
            MR_Word parse_tree__modules__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 2)));
#line 1164 "modules.m"
            MR_Word parse_tree__modules__Visible_22;
#line 1164 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_27_27;
#line 1164 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_28_28;
#line 1165 "modules.m"
            MR_Word parse_tree__modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 1)));

#line 1144 "modules.m"
#line 1144 "modules.m"
            switch (parse_tree__modules__Section_19) {
#line 1144 "modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1144 "modules.m"
              case (MR_Integer) 2:
#line 1146 "modules.m"
                parse_tree__modules__Visible_22 = (MR_Integer) 1;
#line 1144 "modules.m"
                break;
#line 1144 "modules.m"
              case (MR_Integer) 1:
#line 1145 "modules.m"
                parse_tree__modules__Visible_22 = (MR_Integer) 1;
#line 1144 "modules.m"
                break;
#line 1144 "modules.m"
              case (MR_Integer) 0:
#line 1144 "modules.m"
                parse_tree__modules__Visible_22 = (MR_Integer) 1;
#line 1144 "modules.m"
                break;
#line 1144 "modules.m"
            }
#line 1167 "modules.m"
            {
#line 1167 "modules.m"
              parse_tree__modules__record_includes_imports_uses_in_items_acc_6_p_0(parse_tree__modules__Visible_22, parse_tree__modules__Items_21, parse_tree__modules__STATE_VARIABLE_InclMap_0_3, &parse_tree__modules__STATE_VARIABLE_InclMap_27_27, parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_28_28);
            }
#line 1169 "modules.m"
            /* direct tailcall eliminated */
#line 1169 "modules.m"
            {
#line 1169 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__ItemBlocks_15;
#line 1169 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3 = parse_tree__modules__STATE_VARIABLE_InclMap_27_27;
#line 1169 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_28_28;

#line 1169 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5;
#line 1169 "modules.m"
              parse_tree__modules__STATE_VARIABLE_InclMap_0_3 = parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3;
#line 1169 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1169 "modules.m"
            }
#line 1169 "modules.m"
            continue;
#line 1164 "modules.m"
          }
#line 1161 "modules.m"
      }
#line 1161 "modules.m"
      break;
#line 1161 "modules.m"
    }
#line 1156 "modules.m"
}

#line 1156 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho3_6_p_0(
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6)
#line 1156 "modules.m"
{
#line 1161 "modules.m"
  while (MR_TRUE)
#line 1161 "modules.m"
    {
#line 1161 "modules.m"
      /* tailcall optimized into a loop */
#line 1161 "modules.m"
      {
#line 1161 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1161 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1161 "modules.m"
          {
#line 1162 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImportUseMap_6 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1162 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_InclMap_4 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1161 "modules.m"
          }
#line 1161 "modules.m"
        else
#line 1164 "modules.m"
          {
#line 1164 "modules.m"
            MR_Word parse_tree__modules__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1164 "modules.m"
            MR_Word parse_tree__modules__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1164 "modules.m"
            MR_Word parse_tree__modules__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 0)));
#line 1164 "modules.m"
            MR_Word parse_tree__modules__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 2)));
#line 1164 "modules.m"
            MR_Word parse_tree__modules__Visible_22;
#line 1164 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_27_27;
#line 1164 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_28_28;
#line 1165 "modules.m"
            MR_Word parse_tree__modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 1)));

#line 1148 "modules.m"
#line 1148 "modules.m"
            switch (MR_tag((MR_Word) parse_tree__modules__Section_19)) {
#line 1148 "modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1148 "modules.m"
              case (MR_Integer) 0:
#line 1148 "modules.m"
                parse_tree__modules__Visible_22 = (MR_Integer) 1;
#line 1148 "modules.m"
                break;
#line 1148 "modules.m"
              case (MR_Integer) 1:
#line 1149 "modules.m"
                parse_tree__modules__Visible_22 = (MR_Integer) 1;
#line 1148 "modules.m"
                break;
#line 1148 "modules.m"
              case (MR_Integer) 2:
#line 1150 "modules.m"
                parse_tree__modules__Visible_22 = (MR_Integer) 0;
#line 1148 "modules.m"
                break;
#line 1148 "modules.m"
            }
#line 1167 "modules.m"
            {
#line 1167 "modules.m"
              parse_tree__modules__record_includes_imports_uses_in_items_acc_6_p_0(parse_tree__modules__Visible_22, parse_tree__modules__Items_21, parse_tree__modules__STATE_VARIABLE_InclMap_0_3, &parse_tree__modules__STATE_VARIABLE_InclMap_27_27, parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_28_28);
            }
#line 1169 "modules.m"
            /* direct tailcall eliminated */
#line 1169 "modules.m"
            {
#line 1169 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__ItemBlocks_15;
#line 1169 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3 = parse_tree__modules__STATE_VARIABLE_InclMap_27_27;
#line 1169 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_28_28;

#line 1169 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5;
#line 1169 "modules.m"
              parse_tree__modules__STATE_VARIABLE_InclMap_0_3 = parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3;
#line 1169 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1169 "modules.m"
            }
#line 1169 "modules.m"
            continue;
#line 1164 "modules.m"
          }
#line 1161 "modules.m"
      }
#line 1161 "modules.m"
      break;
#line 1161 "modules.m"
    }
#line 1156 "modules.m"
}

#line 1156 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho2_6_p_0(
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6)
#line 1156 "modules.m"
{
#line 1161 "modules.m"
  while (MR_TRUE)
#line 1161 "modules.m"
    {
#line 1161 "modules.m"
      /* tailcall optimized into a loop */
#line 1161 "modules.m"
      {
#line 1161 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1161 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1161 "modules.m"
          {
#line 1162 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImportUseMap_6 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1162 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_InclMap_4 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1161 "modules.m"
          }
#line 1161 "modules.m"
        else
#line 1164 "modules.m"
          {
#line 1164 "modules.m"
            MR_Word parse_tree__modules__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1164 "modules.m"
            MR_Word parse_tree__modules__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1164 "modules.m"
            MR_Word parse_tree__modules__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 2)));
#line 1164 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_27_27;
#line 1164 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_28_28;
#line 1165 "modules.m"
            MR_Word parse_tree__modules__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 0)));
#line 1165 "modules.m"
            MR_Word parse_tree__modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 1)));

#line 1167 "modules.m"
            {
#line 1167 "modules.m"
              parse_tree__modules__record_includes_imports_uses_in_items_acc_6_p_0((MR_Integer) 0, parse_tree__modules__Items_21, parse_tree__modules__STATE_VARIABLE_InclMap_0_3, &parse_tree__modules__STATE_VARIABLE_InclMap_27_27, parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_28_28);
            }
#line 1169 "modules.m"
            /* direct tailcall eliminated */
#line 1169 "modules.m"
            {
#line 1169 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__ItemBlocks_15;
#line 1169 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3 = parse_tree__modules__STATE_VARIABLE_InclMap_27_27;
#line 1169 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_28_28;

#line 1169 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5;
#line 1169 "modules.m"
              parse_tree__modules__STATE_VARIABLE_InclMap_0_3 = parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3;
#line 1169 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1169 "modules.m"
            }
#line 1169 "modules.m"
            continue;
#line 1164 "modules.m"
          }
#line 1161 "modules.m"
      }
#line 1161 "modules.m"
      break;
#line 1161 "modules.m"
    }
#line 1156 "modules.m"
}

#line 1156 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho1_6_p_0(
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6)
#line 1156 "modules.m"
{
#line 1161 "modules.m"
  while (MR_TRUE)
#line 1161 "modules.m"
    {
#line 1161 "modules.m"
      /* tailcall optimized into a loop */
#line 1161 "modules.m"
      {
#line 1161 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1161 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1161 "modules.m"
          {
#line 1162 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImportUseMap_6 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1162 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_InclMap_4 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1161 "modules.m"
          }
#line 1161 "modules.m"
        else
#line 1164 "modules.m"
          {
#line 1164 "modules.m"
            MR_Word parse_tree__modules__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1164 "modules.m"
            MR_Word parse_tree__modules__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1164 "modules.m"
            MR_Word parse_tree__modules__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 2)));
#line 1164 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_27_27;
#line 1164 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_28_28;
#line 1165 "modules.m"
            MR_Word parse_tree__modules__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 0)));
#line 1165 "modules.m"
            MR_Word parse_tree__modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 1)));

#line 1167 "modules.m"
            {
#line 1167 "modules.m"
              parse_tree__modules__record_includes_imports_uses_in_items_acc_6_p_0((MR_Integer) 0, parse_tree__modules__Items_21, parse_tree__modules__STATE_VARIABLE_InclMap_0_3, &parse_tree__modules__STATE_VARIABLE_InclMap_27_27, parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_28_28);
            }
#line 1169 "modules.m"
            /* direct tailcall eliminated */
#line 1169 "modules.m"
            {
#line 1169 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__ItemBlocks_15;
#line 1169 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3 = parse_tree__modules__STATE_VARIABLE_InclMap_27_27;
#line 1169 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_28_28;

#line 1169 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5;
#line 1169 "modules.m"
              parse_tree__modules__STATE_VARIABLE_InclMap_0_3 = parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3;
#line 1169 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1169 "modules.m"
            }
#line 1169 "modules.m"
            continue;
#line 1164 "modules.m"
          }
#line 1161 "modules.m"
      }
#line 1161 "modules.m"
      break;
#line 1161 "modules.m"
    }
#line 1156 "modules.m"
}

#line 774 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__774__1_2_p_0(
#line 774 "modules.m"
  MR_Word parse_tree__modules__Ancestor_34,
#line 774 "modules.m"
  MR_Word parse_tree__modules__ModuleName_43)
#line 774 "modules.m"
{
#line 774 "modules.m"
  {
#line 774 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 774 "modules.m"
    {
#line 774 "modules.m"
      return parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__Ancestor_34, parse_tree__modules__ModuleName_43);
    }
#line 774 "modules.m"
    return parse_tree__modules__succeeded;
#line 774 "modules.m"
  }
#line 774 "modules.m"
}

#line 1137 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0(
#line 1137 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_6,
#line 1137 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1137 "modules.m"
{
#line 1137 "modules.m"
  {
#line 1137 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1137 "modules.m"
    {
#line 1137 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__HeadVar__2_2, parse_tree__modules__HeadVar__3_3);
#line 1137 "modules.m"
      return;
    }
#line 1137 "modules.m"
  }
#line 1137 "modules.m"
}

#line 1137 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0(
#line 1137 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_5,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1137 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1137 "modules.m"
{
#line 1137 "modules.m"
  {
#line 1137 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1137 "modules.m"
    {
#line 1137 "modules.m"
      return parse_tree__modules__succeeded = parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__HeadVar__2_2);
    }
#line 1137 "modules.m"
    return parse_tree__modules__succeeded;
#line 1137 "modules.m"
  }
#line 1137 "modules.m"
}

#line 105 "modules.m"
void MR_CALL 
parse_tree__modules____Compare____section_appender_1_0(
#line 105 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_6,
#line 105 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 105 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 105 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 105 "modules.m"
{
#line 105 "modules.m"
  {
#line 105 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 105 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 105 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 105 "modules.m"
    {
#line 105 "modules.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__modules__HeadVar__1_1, (MR_Word) parse_tree__modules__Cast_HeadVar1_4, (MR_Word) parse_tree__modules__Cast_HeadVar2_5);
#line 105 "modules.m"
      return;
    }
#line 105 "modules.m"
  }
#line 105 "modules.m"
}

#line 105 "modules.m"
MR_bool MR_CALL 
parse_tree__modules____Unify____section_appender_1_0(
#line 105 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_5,
#line 105 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 105 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 105 "modules.m"
{
#line 105 "modules.m"
  {
#line 105 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 105 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 105 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 105 "modules.m"
    {
#line 105 "modules.m"
      return parse_tree__modules__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__modules__Cast_HeadVar1_3, (MR_Word) parse_tree__modules__Cast_HeadVar2_4);
    }
#line 105 "modules.m"
    return parse_tree__modules__succeeded;
#line 105 "modules.m"
  }
#line 105 "modules.m"
}

#line 1091 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0(
#line 1091 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1091 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1091 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1091 "modules.m"
{
#line 1091 "modules.m"
  {
#line 1091 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1091 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 1091 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 1091 "modules.m"
    {
#line 1091 "modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__modules_scalar_common_2[1], parse_tree__modules__HeadVar__1_1, ((MR_Box) (parse_tree__modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_5)));
#line 1091 "modules.m"
      return;
    }
#line 1091 "modules.m"
  }
#line 1091 "modules.m"
}

#line 1091 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0(
#line 1091 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1091 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1091 "modules.m"
{
#line 1091 "modules.m"
  {
#line 1091 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1091 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 1091 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 1091 "modules.m"
    {
#line 1091 "modules.m"
      return parse_tree__modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__modules_scalar_common_2[1], ((MR_Box) (parse_tree__modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_4)));
    }
#line 1091 "modules.m"
    return parse_tree__modules__succeeded;
#line 1091 "modules.m"
  }
#line 1091 "modules.m"
}

#line 1103 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0(
#line 1103 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1103 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1103 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1103 "modules.m"
{
#line 1103 "modules.m"
  {
#line 1103 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1103 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 1103 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 1103 "modules.m"
    {
#line 1103 "modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__modules_scalar_common_2[0], parse_tree__modules__HeadVar__1_1, ((MR_Box) (parse_tree__modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_5)));
#line 1103 "modules.m"
      return;
    }
#line 1103 "modules.m"
  }
#line 1103 "modules.m"
}

#line 1103 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0(
#line 1103 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1103 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1103 "modules.m"
{
#line 1103 "modules.m"
  {
#line 1103 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1103 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 1103 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 1103 "modules.m"
    {
#line 1103 "modules.m"
      return parse_tree__modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__modules_scalar_common_2[0], ((MR_Box) (parse_tree__modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_4)));
    }
#line 1103 "modules.m"
    return parse_tree__modules__succeeded;
#line 1103 "modules.m"
  }
#line 1103 "modules.m"
}

#line 102 "modules.m"
void MR_CALL 
parse_tree__modules____Compare____int_section_maker_1_0(
#line 102 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_6,
#line 102 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 102 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 102 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 102 "modules.m"
{
#line 102 "modules.m"
  {
#line 102 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 102 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 102 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 102 "modules.m"
    {
#line 102 "modules.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__modules__HeadVar__1_1, (MR_Word) parse_tree__modules__Cast_HeadVar1_4, (MR_Word) parse_tree__modules__Cast_HeadVar2_5);
#line 102 "modules.m"
      return;
    }
#line 102 "modules.m"
  }
#line 102 "modules.m"
}

#line 102 "modules.m"
MR_bool MR_CALL 
parse_tree__modules____Unify____int_section_maker_1_0(
#line 102 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_5,
#line 102 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 102 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 102 "modules.m"
{
#line 102 "modules.m"
  {
#line 102 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 102 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 102 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 102 "modules.m"
    {
#line 102 "modules.m"
      return parse_tree__modules__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__modules__Cast_HeadVar1_3, (MR_Word) parse_tree__modules__Cast_HeadVar2_4);
    }
#line 102 "modules.m"
    return parse_tree__modules__succeeded;
#line 102 "modules.m"
  }
#line 102 "modules.m"
}

#line 1097 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0(
#line 1097 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1097 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1097 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1097 "modules.m"
{
#line 1097 "modules.m"
  {
#line 1097 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1097 "modules.m"
    MR_Integer parse_tree__modules__CastX_9 = (MR_Integer) parse_tree__modules__HeadVar__2_2;
#line 1097 "modules.m"
    MR_Integer parse_tree__modules__CastY_10 = (MR_Integer) parse_tree__modules__HeadVar__3_3;

#line 1097 "modules.m"
    parse_tree__modules__succeeded = (parse_tree__modules__CastX_9 == parse_tree__modules__CastY_10);
#line 1097 "modules.m"
    if (parse_tree__modules__succeeded)
#line 4435 "parse_tree.modules.c"
      *parse_tree__modules__HeadVar__1_1 = (MR_Integer) 0;
#line 1097 "modules.m"
    else
#line 1097 "modules.m"
      {
#line 1097 "modules.m"
        MR_Word parse_tree__modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 0)));
#line 1097 "modules.m"
        MR_Word parse_tree__modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 1)));
#line 1097 "modules.m"
        MR_Word parse_tree__modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__3_3, (MR_Integer) 0)));
#line 1097 "modules.m"
        MR_Word parse_tree__modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__3_3, (MR_Integer) 1)));
#line 1097 "modules.m"
        MR_Word parse_tree__modules__V_8_8;
#line 1097 "modules.m"
        MR_Integer parse_tree__modules__V_13_13 = (MR_Integer) parse_tree__modules__V_4_4;
#line 1097 "modules.m"
        MR_Integer parse_tree__modules__V_14_14 = (MR_Integer) parse_tree__modules__V_6_6;

#line 1097 "modules.m"
        {
#line 1097 "modules.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__modules__V_8_8, parse_tree__modules__V_13_13, parse_tree__modules__V_14_14);
        }
#line 4461 "parse_tree.modules.c"
        parse_tree__modules__succeeded = (parse_tree__modules__V_8_8 == (MR_Integer) 0);
#line 1097 "modules.m"
        parse_tree__modules__succeeded = !(parse_tree__modules__succeeded);
#line 1097 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1097 "modules.m"
          *parse_tree__modules__HeadVar__1_1 = parse_tree__modules__V_8_8;
#line 1097 "modules.m"
        else
#line 1097 "modules.m"
          {
#line 1097 "modules.m"
            mercury__term____Compare____context_0_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__V_5_5, parse_tree__modules__V_7_7);
#line 1097 "modules.m"
            return;
          }
#line 1097 "modules.m"
      }
#line 1097 "modules.m"
  }
#line 1097 "modules.m"
}

#line 1097 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0(
#line 1097 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1097 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1097 "modules.m"
{
#line 1097 "modules.m"
  {
#line 1097 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1097 "modules.m"
    MR_Integer parse_tree__modules__CastX_7 = (MR_Integer) parse_tree__modules__HeadVar__1_1;
#line 1097 "modules.m"
    MR_Integer parse_tree__modules__CastY_8 = (MR_Integer) parse_tree__modules__HeadVar__2_2;

#line 1097 "modules.m"
    parse_tree__modules__succeeded = (parse_tree__modules__CastX_7 == parse_tree__modules__CastY_8);
#line 1097 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1097 "modules.m"
      parse_tree__modules__succeeded = MR_TRUE;
#line 1097 "modules.m"
    else
#line 1097 "modules.m"
      {
#line 1097 "modules.m"
        MR_Word parse_tree__modules__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1097 "modules.m"
        MR_Word parse_tree__modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1097 "modules.m"
        MR_Word parse_tree__modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 0)));
#line 1097 "modules.m"
        MR_Word parse_tree__modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 1)));

#line 4522 "parse_tree.modules.c"
        parse_tree__modules__succeeded = (parse_tree__modules__V_3_3 == parse_tree__modules__V_5_5);
#line 1097 "modules.m"
        if (parse_tree__modules__succeeded)
#line 4526 "parse_tree.modules.c"
          {
#line 4528 "parse_tree.modules.c"
            return parse_tree__modules__succeeded = mercury__term____Unify____context_0_0(parse_tree__modules__V_4_4, parse_tree__modules__V_6_6);
          }
#line 1097 "modules.m"
      }
#line 1097 "modules.m"
    return parse_tree__modules__succeeded;
#line 1097 "modules.m"
  }
#line 1097 "modules.m"
}

#line 1093 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_0_0(
#line 1093 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1093 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1093 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1093 "modules.m"
{
#line 1093 "modules.m"
  {
#line 1093 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1093 "modules.m"
    MR_Integer parse_tree__modules__Cast_HeadVar1_4 = (MR_Integer) parse_tree__modules__HeadVar__2_2;
#line 1093 "modules.m"
    MR_Integer parse_tree__modules__Cast_HeadVar2_5 = (MR_Integer) parse_tree__modules__HeadVar__3_3;

#line 1093 "modules.m"
    {
#line 1093 "modules.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__Cast_HeadVar1_4, parse_tree__modules__Cast_HeadVar2_5);
#line 1093 "modules.m"
      return;
    }
#line 1093 "modules.m"
  }
#line 1093 "modules.m"
}

#line 1093 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_0_0(
#line 1093 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_1,
#line 1093 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1093 "modules.m"
{
#line 4581 "parse_tree.modules.c"
  {
#line 4583 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded = (parse_tree__modules__HeadVar__2_1 == parse_tree__modules__HeadVar__2_2);

#line 4586 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 4588 "parse_tree.modules.c"
  }
#line 1093 "modules.m"
}

#line 1338 "modules.m"
static void MR_CALL 
parse_tree__modules__get_included_modules_in_items_3_p_0(
#line 1338 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1338 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2,
#line 1338 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_3)
#line 1338 "modules.m"
{
#line 1341 "modules.m"
  while (MR_TRUE)
#line 1341 "modules.m"
    {
#line 1341 "modules.m"
      /* tailcall optimized into a loop */
#line 1341 "modules.m"
      {
#line 1341 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1341 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1341 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_3 = parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2;
#line 1341 "modules.m"
        else
#line 1342 "modules.m"
          {
#line 1342 "modules.m"
            MR_Word parse_tree__modules__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1342 "modules.m"
            MR_Word parse_tree__modules__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1342 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_17_17;
#line 1350 "modules.m"
            MR_Word parse_tree__modules__ModuleName_14;
#line 1344 "modules.m"
            MR_Word parse_tree__modules__ItemModuleDefn_10;
#line 1344 "modules.m"
            MR_Word parse_tree__modules__ModuleDefn_11;
#line 1345 "modules.m"
            MR_Word parse_tree__modules__V_12_12;
#line 1345 "modules.m"
            MR_Integer parse_tree__modules__V_13_13;

#line 1344 "modules.m"
            parse_tree__modules__succeeded = ((MR_tag((MR_Word) parse_tree__modules__Item_7)) == (MR_mktag((MR_Integer) 0)));
#line 1344 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1344 "modules.m"
              {
#line 1344 "modules.m"
                parse_tree__modules__ItemModuleDefn_10 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_7), (MR_Integer) 0);
#line 1345 "modules.m"
                parse_tree__modules__ModuleDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_10, (MR_Integer) 0)));
#line 1345 "modules.m"
                parse_tree__modules__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_10, (MR_Integer) 1)));
#line 1345 "modules.m"
                parse_tree__modules__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_10, (MR_Integer) 2)));
#line 1346 "modules.m"
                parse_tree__modules__succeeded = ((MR_tag((MR_Word) parse_tree__modules__ModuleDefn_11)) == (MR_mktag((MR_Integer) 0)));
#line 1346 "modules.m"
                if (parse_tree__modules__succeeded)
#line 1346 "modules.m"
                  parse_tree__modules__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleDefn_11, (MR_Integer) 0)));
#line 1344 "modules.m"
              }
#line 1350 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1348 "modules.m"
              {
#line 1348 "modules.m"
                {
#line 1348 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_17_17 = mercury__cord__snoc_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2, ((MR_Box) (parse_tree__modules__ModuleName_14)));
                }
#line 1348 "modules.m"
              }
#line 1350 "modules.m"
            else
#line 1350 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_17_17 = parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2;
#line 1353 "modules.m"
            /* direct tailcall eliminated */
#line 1353 "modules.m"
            {
#line 1353 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__Items_8;
#line 1353 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0__tmp_copy_2 = parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_17_17;

#line 1353 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0_2 = parse_tree__modules__STATE_VARIABLE_IncludedModuleNamesCord_0__tmp_copy_2;
#line 1353 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1353 "modules.m"
            }
#line 1353 "modules.m"
            continue;
#line 1342 "modules.m"
          }
#line 1341 "modules.m"
      }
#line 1341 "modules.m"
      break;
#line 1341 "modules.m"
    }
#line 1338 "modules.m"
}

#line 1277 "modules.m"
static void MR_CALL 
parse_tree__modules__report_inaccessible_module_error_6_p_0(
#line 1277 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1277 "modules.m"
  MR_Word parse_tree__modules__ParentModule_8,
#line 1277 "modules.m"
  MR_String parse_tree__modules__SubModule_9,
#line 1277 "modules.m"
  MR_Word parse_tree__modules__ImportOrUseContext_10,
#line 1277 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1277 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20)
#line 1277 "modules.m"
{
#line 1293 "modules.m"
  {
#line 1293 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__ImportOrUse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportOrUseContext_10, (MR_Integer) 0)));
#line 1293 "modules.m"
    MR_Word parse_tree__modules__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportOrUseContext_10, (MR_Integer) 1)));
#line 1293 "modules.m"
    MR_String parse_tree__modules__DeclName_14;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__MainPieces_15;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__VerbosePieces_16;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__Msg_17;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__Spec_18;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_23_23;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_24_24;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_25_25;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_28_28;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_30_30;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_33_33;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_34_34;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_35_35;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_38_38;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_40_40;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_43_43;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_44_44;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_45_45;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_54_54;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_57_57;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_60_60;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_63_63;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_66_66;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_67_67;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_68_68;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_71_71;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_74_74;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_76_76;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_79_79;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_82_82;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_85_85;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_86_86;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_93_93;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_94_94;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_95_95;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_96_96;
#line 1293 "modules.m"
    MR_Word parse_tree__modules__V_101_101;

#line 1296 "modules.m"
#line 1296 "modules.m"
    switch (parse_tree__modules__ImportOrUse_12) {
#line 1296 "modules.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1296 "modules.m"
      case (MR_Integer) 0:
#line 1295 "modules.m"
        parse_tree__modules__DeclName_14 = (MR_String) "import_module";
#line 1296 "modules.m"
        break;
#line 1296 "modules.m"
      case (MR_Integer) 1:
#line 1296 "modules.m"
        parse_tree__modules__DeclName_14 = (MR_String) "use_module";
#line 1296 "modules.m"
        break;
#line 1296 "modules.m"
    }
#line 1298 "modules.m"
    {
#line 1298 "modules.m"
      parse_tree__modules__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1298 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_24_24, 1) = ((MR_Box) (parse_tree__modules__ModuleName_7));
#line 1298 "modules.m"
    }
#line 1299 "modules.m"
    {
#line 1299 "modules.m"
      parse_tree__modules__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_34_34, 1) = ((MR_Box) (parse_tree__modules__DeclName_14));
#line 1299 "modules.m"
    }
#line 1300 "modules.m"
    {
#line 1300 "modules.m"
      parse_tree__modules__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_45_45, 0) = ((MR_Box) (parse_tree__modules__ParentModule_8));
#line 1300 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_45_45, 1) = ((MR_Box) (parse_tree__modules__SubModule_9));
#line 1300 "modules.m"
    }
#line 1300 "modules.m"
    {
#line 1300 "modules.m"
      parse_tree__modules__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1300 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_44_44, 1) = ((MR_Box) (parse_tree__modules__V_45_45));
#line 1300 "modules.m"
    }
#line 1300 "modules.m"
    {
#line 1300 "modules.m"
      parse_tree__modules__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 0) = ((MR_Box) (parse_tree__modules__V_44_44));
#line 1300 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[33])));
#line 1300 "modules.m"
    }
#line 1300 "modules.m"
    {
#line 1300 "modules.m"
      parse_tree__modules__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[47])));
#line 1300 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 1) = ((MR_Box) (parse_tree__modules__V_43_43));
#line 1300 "modules.m"
    }
#line 1299 "modules.m"
    {
#line 1299 "modules.m"
      parse_tree__modules__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_38_38, 1) = ((MR_Box) (parse_tree__modules__V_40_40));
#line 1299 "modules.m"
    }
#line 1299 "modules.m"
    {
#line 1299 "modules.m"
      parse_tree__modules__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[46])));
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_35_35, 1) = ((MR_Box) (parse_tree__modules__V_38_38));
#line 1299 "modules.m"
    }
#line 1299 "modules.m"
    {
#line 1299 "modules.m"
      parse_tree__modules__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 0) = ((MR_Box) (parse_tree__modules__V_34_34));
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 1) = ((MR_Box) (parse_tree__modules__V_35_35));
#line 1299 "modules.m"
    }
#line 1299 "modules.m"
    {
#line 1299 "modules.m"
      parse_tree__modules__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[45])));
#line 1299 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_30_30, 1) = ((MR_Box) (parse_tree__modules__V_33_33));
#line 1299 "modules.m"
    }
#line 1298 "modules.m"
    {
#line 1298 "modules.m"
      parse_tree__modules__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1298 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 1) = ((MR_Box) (parse_tree__modules__V_30_30));
#line 1298 "modules.m"
    }
#line 1298 "modules.m"
    {
#line 1298 "modules.m"
      parse_tree__modules__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[44])));
#line 1298 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_25_25, 1) = ((MR_Box) (parse_tree__modules__V_28_28));
#line 1298 "modules.m"
    }
#line 1298 "modules.m"
    {
#line 1298 "modules.m"
      parse_tree__modules__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 0) = ((MR_Box) (parse_tree__modules__V_24_24));
#line 1298 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 1) = ((MR_Box) (parse_tree__modules__V_25_25));
#line 1298 "modules.m"
    }
#line 1298 "modules.m"
    {
#line 1298 "modules.m"
      parse_tree__modules__MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[43])));
#line 1298 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_15, 1) = ((MR_Box) (parse_tree__modules__V_23_23));
#line 1298 "modules.m"
    }
#line 1305 "modules.m"
    {
#line 1305 "modules.m"
      parse_tree__modules__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1305 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_67_67, 1) = ((MR_Box) (parse_tree__modules__ParentModule_8));
#line 1305 "modules.m"
    }
#line 1309 "modules.m"
    {
#line 1309 "modules.m"
      parse_tree__modules__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1309 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_86_86, 1) = ((MR_Box) (parse_tree__modules__SubModule_9));
#line 1309 "modules.m"
    }
#line 1309 "modules.m"
    {
#line 1309 "modules.m"
      parse_tree__modules__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_85_85, 0) = ((MR_Box) (parse_tree__modules__V_86_86));
#line 1309 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[35])));
#line 1309 "modules.m"
    }
#line 1308 "modules.m"
    {
#line 1308 "modules.m"
      parse_tree__modules__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[57])));
#line 1308 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_82_82, 1) = ((MR_Box) (parse_tree__modules__V_85_85));
#line 1308 "modules.m"
    }
#line 1308 "modules.m"
    {
#line 1308 "modules.m"
      parse_tree__modules__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[56])));
#line 1308 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_79_79, 1) = ((MR_Box) (parse_tree__modules__V_82_82));
#line 1308 "modules.m"
    }
#line 1307 "modules.m"
    {
#line 1307 "modules.m"
      parse_tree__modules__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[55])));
#line 1307 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 1) = ((MR_Box) (parse_tree__modules__V_79_79));
#line 1307 "modules.m"
    }
#line 1307 "modules.m"
    {
#line 1307 "modules.m"
      parse_tree__modules__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_74_74, 0) = ((MR_Box) (parse_tree__modules__V_67_67));
#line 1307 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_74_74, 1) = ((MR_Box) (parse_tree__modules__V_76_76));
#line 1307 "modules.m"
    }
#line 1306 "modules.m"
    {
#line 1306 "modules.m"
      parse_tree__modules__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[54])));
#line 1306 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 1) = ((MR_Box) (parse_tree__modules__V_74_74));
#line 1306 "modules.m"
    }
#line 1306 "modules.m"
    {
#line 1306 "modules.m"
      parse_tree__modules__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[53])));
#line 1306 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_68_68, 1) = ((MR_Box) (parse_tree__modules__V_71_71));
#line 1306 "modules.m"
    }
#line 1305 "modules.m"
    {
#line 1305 "modules.m"
      parse_tree__modules__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 0) = ((MR_Box) (parse_tree__modules__V_67_67));
#line 1305 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 1) = ((MR_Box) (parse_tree__modules__V_68_68));
#line 1305 "modules.m"
    }
#line 1305 "modules.m"
    {
#line 1305 "modules.m"
      parse_tree__modules__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[52])));
#line 1305 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_63_63, 1) = ((MR_Box) (parse_tree__modules__V_66_66));
#line 1305 "modules.m"
    }
#line 1304 "modules.m"
    {
#line 1304 "modules.m"
      parse_tree__modules__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[51])));
#line 1304 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_60_60, 1) = ((MR_Box) (parse_tree__modules__V_63_63));
#line 1304 "modules.m"
    }
#line 1304 "modules.m"
    {
#line 1304 "modules.m"
      parse_tree__modules__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[50])));
#line 1304 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_57_57, 1) = ((MR_Box) (parse_tree__modules__V_60_60));
#line 1304 "modules.m"
    }
#line 1303 "modules.m"
    {
#line 1303 "modules.m"
      parse_tree__modules__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[49])));
#line 1303 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_54_54, 1) = ((MR_Box) (parse_tree__modules__V_57_57));
#line 1303 "modules.m"
    }
#line 1302 "modules.m"
    {
#line 1302 "modules.m"
      parse_tree__modules__VerbosePieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__VerbosePieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[48])));
#line 1302 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__VerbosePieces_16, 1) = ((MR_Box) (parse_tree__modules__V_54_54));
#line 1302 "modules.m"
    }
#line 1311 "modules.m"
    {
#line 1311 "modules.m"
      parse_tree__modules__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1311 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_94_94, 0) = ((MR_Box) (parse_tree__modules__MainPieces_15));
#line 1311 "modules.m"
    }
#line 1311 "modules.m"
    {
#line 1311 "modules.m"
      parse_tree__modules__V_96_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "modules.m"
      MR_hl_field(MR_mktag(2), parse_tree__modules__V_96_96, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1311 "modules.m"
      MR_hl_field(MR_mktag(2), parse_tree__modules__V_96_96, 1) = ((MR_Box) (parse_tree__modules__VerbosePieces_16));
#line 1311 "modules.m"
    }
#line 1311 "modules.m"
    {
#line 1311 "modules.m"
      parse_tree__modules__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_95_95, 0) = ((MR_Box) (parse_tree__modules__V_96_96));
#line 1311 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1311 "modules.m"
    }
#line 1311 "modules.m"
    {
#line 1311 "modules.m"
      parse_tree__modules__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_93_93, 0) = ((MR_Box) (parse_tree__modules__V_94_94));
#line 1311 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_93_93, 1) = ((MR_Box) (parse_tree__modules__V_95_95));
#line 1311 "modules.m"
    }
#line 1310 "modules.m"
    {
#line 1310 "modules.m"
      parse_tree__modules__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1310 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_17, 0) = ((MR_Box) (parse_tree__modules__Context_13));
#line 1310 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_17, 1) = ((MR_Box) (parse_tree__modules__V_93_93));
#line 1310 "modules.m"
    }
#line 1312 "modules.m"
    {
#line 1312 "modules.m"
      parse_tree__modules__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1312 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_101_101, 0) = ((MR_Box) (parse_tree__modules__Msg_17));
#line 1312 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1312 "modules.m"
    }
#line 1312 "modules.m"
    {
#line 1312 "modules.m"
      parse_tree__modules__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1312 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1312 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1312 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_18, 2) = ((MR_Box) (parse_tree__modules__V_101_101));
#line 1312 "modules.m"
    }
#line 1313 "modules.m"
    {
#line 1313 "modules.m"
      MR_Word base;
#line 1313 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1313 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_20 = base;
#line 1313 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_18));
#line 1313 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_19));
#line 1313 "modules.m"
    }
#line 1293 "modules.m"
  }
#line 1277 "modules.m"
}

#line 1268 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0_1(
#line 1268 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1268 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1268 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1268 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 1268 "modules.m"
{
#line 1268 "modules.m"
  {
#line 1268 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1268 "modules.m"
    MR_Word parse_tree__modules__conv2_STATE_VARIABLE_Specs_20;

#line 1268 "modules.m"
    {
#line 1268 "modules.m"
      parse_tree__modules__report_inaccessible_module_error_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv2_STATE_VARIABLE_Specs_20);
    }
#line 1268 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_STATE_VARIABLE_Specs_20));
#line 1268 "modules.m"
  }
#line 1268 "modules.m"
}

#line 1252 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0(
#line 1252 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1252 "modules.m"
  MR_Word parse_tree__modules__InclMap_8,
#line 1252 "modules.m"
  MR_Word parse_tree__modules__ImportUseMap_9,
#line 1252 "modules.m"
  MR_Word parse_tree__modules__ImportedModule_10,
#line 1252 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1252 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20)
#line 1252 "modules.m"
{
#line 1259 "modules.m"
  {
#line 1259 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1259 "modules.m"
    if (((MR_tag((MR_Word) parse_tree__modules__ImportedModule_10)) == (MR_mktag((MR_Integer) 1))))
#line 1259 "modules.m"
      {
#line 1259 "modules.m"
        MR_Word parse_tree__modules__ParentModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__ImportedModule_10, (MR_Integer) 0)));
#line 1259 "modules.m"
        MR_String parse_tree__modules__SubModule_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__modules__ImportedModule_10, (MR_Integer) 1)));
#line 1260 "modules.m"
        MR_Word parse_tree__modules___ImportedInclContexts_14;
#line 1260 "modules.m"
        MR_Box parse_tree__modules__conv0__ImportedInclContexts_14;

#line 1260 "modules.m"
        {
#line 1260 "modules.m"
          parse_tree__modules__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[11], parse_tree__modules__InclMap_8, ((MR_Box) (parse_tree__modules__ImportedModule_10)), &parse_tree__modules__conv0__ImportedInclContexts_14);
        }
#line 1260 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1260 "modules.m"
          {
#line 1260 "modules.m"
            parse_tree__modules___ImportedInclContexts_14 = ((MR_Word) parse_tree__modules__conv0__ImportedInclContexts_14);
#line 1260 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 1260 "modules.m"
          }
#line 1262 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1262 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Specs_20 = parse_tree__modules__STATE_VARIABLE_Specs_0_19;
#line 1262 "modules.m"
        else
#line 1263 "modules.m"
          {
#line 1263 "modules.m"
            MR_Word parse_tree__modules__ImportsUses_15;
#line 1263 "modules.m"
            MR_Word parse_tree__modules__HeadIU_16;
#line 1263 "modules.m"
            MR_Word parse_tree__modules__TailIUs_17;
#line 1263 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_Specs_21_21;
#line 1263 "modules.m"
            MR_Word parse_tree__modules__V_22_22;
#line 1263 "modules.m"
            MR_Box parse_tree__modules__conv1_ImportsUses_15;
#line 1267 "modules.m"
            MR_Box parse_tree__modules__conv3_STATE_VARIABLE_Specs_20;

#line 1263 "modules.m"
            {
#line 1263 "modules.m"
              mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[12], parse_tree__modules__ImportUseMap_9, ((MR_Box) (parse_tree__modules__ImportedModule_10)), &parse_tree__modules__conv1_ImportsUses_15);
            }
#line 1263 "modules.m"
            parse_tree__modules__ImportsUses_15 = ((MR_Word) parse_tree__modules__conv1_ImportsUses_15);
#line 1264 "modules.m"
            parse_tree__modules__HeadIU_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportsUses_15, (MR_Integer) 0)));
#line 1264 "modules.m"
            parse_tree__modules__TailIUs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportsUses_15, (MR_Integer) 1)));
#line 1265 "modules.m"
            {
#line 1265 "modules.m"
              parse_tree__modules__report_inaccessible_module_error_6_p_0(parse_tree__modules__ModuleName_7, parse_tree__modules__ParentModule_12, parse_tree__modules__SubModule_13, parse_tree__modules__HeadIU_16, parse_tree__modules__STATE_VARIABLE_Specs_0_19, &parse_tree__modules__STATE_VARIABLE_Specs_21_21);
            }
#line 1268 "modules.m"
            {
#line 1268 "modules.m"
              parse_tree__modules__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1268 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_8[1]));
#line 1268 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 1) = ((MR_Box) (parse_tree__modules__check_module_accessibility_6_p_0_1));
#line 1268 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1268 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 3) = ((MR_Box) (parse_tree__modules__ModuleName_7));
#line 1268 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 4) = ((MR_Box) (parse_tree__modules__ParentModule_12));
#line 1268 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 5) = ((MR_Box) (parse_tree__modules__SubModule_13));
#line 1268 "modules.m"
            }
#line 1267 "modules.m"
            {
#line 1267 "modules.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0, (MR_Word) &parse_tree__modules_scalar_common_1[7], parse_tree__modules__V_22_22, parse_tree__modules__TailIUs_17, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_21_21)), &parse_tree__modules__conv3_STATE_VARIABLE_Specs_20);
            }
#line 1267 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_Specs_20 = ((MR_Word) parse_tree__modules__conv3_STATE_VARIABLE_Specs_20);
#line 1263 "modules.m"
          }
#line 1259 "modules.m"
      }
#line 1259 "modules.m"
    else
#line 1273 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_20 = parse_tree__modules__STATE_VARIABLE_Specs_0_19;
#line 1259 "modules.m"
  }
#line 1252 "modules.m"
}

#line 1172 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_items_acc_6_p_0(
#line 1172 "modules.m"
  MR_Word parse_tree__modules__Visible_1,
#line 1172 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1172 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1172 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1172 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1172 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6)
#line 1172 "modules.m"
{
#line 1176 "modules.m"
  while (MR_TRUE)
#line 1176 "modules.m"
    {
#line 1176 "modules.m"
      /* tailcall optimized into a loop */
#line 1176 "modules.m"
      {
#line 1176 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1176 "modules.m"
        if ((parse_tree__modules__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1176 "modules.m"
          {
#line 1176 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImportUseMap_6 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1176 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_InclMap_4 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1176 "modules.m"
          }
#line 1176 "modules.m"
        else
#line 1178 "modules.m"
          {
#line 1178 "modules.m"
            MR_Word parse_tree__modules__Item_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__2_2, (MR_Integer) 0)));
#line 1178 "modules.m"
            MR_Word parse_tree__modules__Items_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__2_2, (MR_Integer) 1)));
#line 1178 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51;
#line 1178 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_55_55;

#line 1213 "modules.m"
#line 1213 "modules.m"
            switch (MR_tag((MR_Word) parse_tree__modules__Item_15)) {
#line 1213 "modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1213 "modules.m"
              case (MR_Integer) 0:
#line 1180 "modules.m"
                {
#line 1180 "modules.m"
                  MR_Word parse_tree__modules__ItemModuleDefn_19 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Item_15), (MR_Integer) 0);
#line 1180 "modules.m"
                  MR_Word parse_tree__modules__ModuleDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_19, (MR_Integer) 0)));
#line 1180 "modules.m"
                  MR_Word parse_tree__modules__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_19, (MR_Integer) 1)));
#line 1181 "modules.m"
                  MR_Integer parse_tree__modules__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemModuleDefn_19, (MR_Integer) 2)));

#line 1198 "modules.m"
#line 1198 "modules.m"
                  switch (MR_tag((MR_Word) parse_tree__modules__ModuleDefn_20)) {
#line 1198 "modules.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1198 "modules.m"
                    case (MR_Integer) 0:
#line 1183 "modules.m"
                      {
#line 1183 "modules.m"
                        MR_Word parse_tree__modules__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ModuleDefn_20, (MR_Integer) 0)));

#line 1195 "modules.m"
#line 1195 "modules.m"
                        switch (parse_tree__modules__Visible_1) {
#line 1195 "modules.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1195 "modules.m"
                          case (MR_Integer) 0:
#line 1196 "modules.m"
                            parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1195 "modules.m"
                            break;
#line 1195 "modules.m"
                          case (MR_Integer) 1:
#line 1191 "modules.m"
                            {
#line 1191 "modules.m"
                              MR_Word parse_tree__modules__OneOrMore0_24;
#line 1186 "modules.m"
                              MR_Box parse_tree__modules__conv1_OneOrMore0_24;

#line 1186 "modules.m"
                              {
#line 1186 "modules.m"
                                parse_tree__modules__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[11], parse_tree__modules__STATE_VARIABLE_InclMap_0_3, ((MR_Box) (parse_tree__modules__ModuleName_23)), &parse_tree__modules__conv1_OneOrMore0_24);
                              }
#line 1186 "modules.m"
                              if (parse_tree__modules__succeeded)
#line 1186 "modules.m"
                                {
#line 1186 "modules.m"
                                  parse_tree__modules__OneOrMore0_24 = ((MR_Word) parse_tree__modules__conv1_OneOrMore0_24);
#line 1186 "modules.m"
                                  parse_tree__modules__succeeded = MR_TRUE;
#line 1186 "modules.m"
                                }
#line 1191 "modules.m"
                              if (parse_tree__modules__succeeded)
#line 1187 "modules.m"
                                {
#line 1187 "modules.m"
                                  MR_Word parse_tree__modules__HeadContext_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_24, (MR_Integer) 0)));
#line 1187 "modules.m"
                                  MR_Word parse_tree__modules__TailContexts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_24, (MR_Integer) 1)));
#line 1187 "modules.m"
                                  MR_Word parse_tree__modules__OneOrMore_27;
#line 1187 "modules.m"
                                  MR_Word parse_tree__modules__V_54_54;

#line 1189 "modules.m"
                                  {
#line 1189 "modules.m"
                                    parse_tree__modules__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "modules.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__modules__V_54_54, 0) = ((MR_Box) (parse_tree__modules__HeadContext_25));
#line 1189 "modules.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__modules__V_54_54, 1) = ((MR_Box) (parse_tree__modules__TailContexts_26));
#line 1189 "modules.m"
                                  }
#line 1188 "modules.m"
                                  {
#line 1188 "modules.m"
                                    parse_tree__modules__OneOrMore_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "modules.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_27, 0) = ((MR_Box) (parse_tree__modules__Context_21));
#line 1188 "modules.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_27, 1) = ((MR_Box) (parse_tree__modules__V_54_54));
#line 1188 "modules.m"
                                  }
#line 1190 "modules.m"
                                  {
#line 1190 "modules.m"
                                    mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[11], ((MR_Box) (parse_tree__modules__ModuleName_23)), ((MR_Box) (parse_tree__modules__OneOrMore_27)), parse_tree__modules__STATE_VARIABLE_InclMap_0_3, &parse_tree__modules__STATE_VARIABLE_InclMap_55_55);
                                  }
#line 1187 "modules.m"
                                }
#line 1191 "modules.m"
                              else
#line 1192 "modules.m"
                                {
#line 1192 "modules.m"
                                  MR_Word parse_tree__modules__OneOrMore_60;

#line 1192 "modules.m"
                                  {
#line 1192 "modules.m"
                                    parse_tree__modules__OneOrMore_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "modules.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_60, 0) = ((MR_Box) (parse_tree__modules__Context_21));
#line 1192 "modules.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1192 "modules.m"
                                  }
#line 1193 "modules.m"
                                  {
#line 1193 "modules.m"
                                    mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[11], ((MR_Box) (parse_tree__modules__ModuleName_23)), ((MR_Box) (parse_tree__modules__OneOrMore_60)), parse_tree__modules__STATE_VARIABLE_InclMap_0_3, &parse_tree__modules__STATE_VARIABLE_InclMap_55_55);
                                  }
#line 1192 "modules.m"
                                }
#line 1191 "modules.m"
                            }
#line 1195 "modules.m"
                            break;
#line 1195 "modules.m"
                        }
#line 1183 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1183 "modules.m"
                      }
#line 1198 "modules.m"
                      break;
#line 1198 "modules.m"
                    case (MR_Integer) 1:
#line 1201 "modules.m"
                      {
#line 1201 "modules.m"
                        MR_Word parse_tree__modules__IoUC_29;
#line 1201 "modules.m"
                        MR_Word parse_tree__modules__ModuleName_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__ModuleDefn_20, (MR_Integer) 0)));
#line 1208 "modules.m"
                        MR_Word parse_tree__modules__OneOrMore0_63;
#line 1204 "modules.m"
                        MR_Box parse_tree__modules__conv0_OneOrMore0_63;

#line 1203 "modules.m"
                        {
#line 1203 "modules.m"
                          parse_tree__modules__IoUC_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1203 "modules.m"
                          MR_hl_field(MR_mktag(0), parse_tree__modules__IoUC_29, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1203 "modules.m"
                          MR_hl_field(MR_mktag(0), parse_tree__modules__IoUC_29, 1) = ((MR_Box) (parse_tree__modules__Context_21));
#line 1203 "modules.m"
                        }
#line 1204 "modules.m"
                        {
#line 1204 "modules.m"
                          parse_tree__modules__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[12], parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, ((MR_Box) (parse_tree__modules__ModuleName_65)), &parse_tree__modules__conv0_OneOrMore0_63);
                        }
#line 1204 "modules.m"
                        if (parse_tree__modules__succeeded)
#line 1204 "modules.m"
                          {
#line 1204 "modules.m"
                            parse_tree__modules__OneOrMore0_63 = ((MR_Word) parse_tree__modules__conv0_OneOrMore0_63);
#line 1204 "modules.m"
                            parse_tree__modules__succeeded = MR_TRUE;
#line 1204 "modules.m"
                          }
#line 1208 "modules.m"
                        if (parse_tree__modules__succeeded)
#line 1205 "modules.m"
                          {
#line 1205 "modules.m"
                            MR_Word parse_tree__modules__HeadIoUC_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_63, (MR_Integer) 0)));
#line 1205 "modules.m"
                            MR_Word parse_tree__modules__TailIoUCs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_63, (MR_Integer) 1)));
#line 1205 "modules.m"
                            MR_Word parse_tree__modules__V_50_50;
#line 1205 "modules.m"
                            MR_Word parse_tree__modules__OneOrMore_61;

#line 1206 "modules.m"
                            {
#line 1206 "modules.m"
                              parse_tree__modules__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__V_50_50, 0) = ((MR_Box) (parse_tree__modules__HeadIoUC_30));
#line 1206 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__V_50_50, 1) = ((MR_Box) (parse_tree__modules__TailIoUCs_31));
#line 1206 "modules.m"
                            }
#line 1206 "modules.m"
                            {
#line 1206 "modules.m"
                              parse_tree__modules__OneOrMore_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1206 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_61, 0) = ((MR_Box) (parse_tree__modules__IoUC_29));
#line 1206 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_61, 1) = ((MR_Box) (parse_tree__modules__V_50_50));
#line 1206 "modules.m"
                            }
#line 1207 "modules.m"
                            {
#line 1207 "modules.m"
                              mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[12], ((MR_Box) (parse_tree__modules__ModuleName_65)), ((MR_Box) (parse_tree__modules__OneOrMore_61)), parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51);
                            }
#line 1205 "modules.m"
                          }
#line 1208 "modules.m"
                        else
#line 1209 "modules.m"
                          {
#line 1209 "modules.m"
                            MR_Word parse_tree__modules__OneOrMore_62;

#line 1209 "modules.m"
                            {
#line 1209 "modules.m"
                              parse_tree__modules__OneOrMore_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1209 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_62, 0) = ((MR_Box) (parse_tree__modules__IoUC_29));
#line 1209 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1209 "modules.m"
                            }
#line 1210 "modules.m"
                            {
#line 1210 "modules.m"
                              mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[12], ((MR_Box) (parse_tree__modules__ModuleName_65)), ((MR_Box) (parse_tree__modules__OneOrMore_62)), parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51);
                            }
#line 1209 "modules.m"
                          }
#line 1201 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1201 "modules.m"
                      }
#line 1198 "modules.m"
                      break;
#line 1198 "modules.m"
                    case (MR_Integer) 2:
#line 1201 "modules.m"
                      {
#line 1201 "modules.m"
                        MR_Word parse_tree__modules__IoUC_106;
#line 1201 "modules.m"
                        MR_Word parse_tree__modules__ModuleName_114 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__modules__ModuleDefn_20, (MR_Integer) 0)));
#line 1208 "modules.m"
                        MR_Word parse_tree__modules__OneOrMore0_98;
#line 1204 "modules.m"
                        MR_Box parse_tree__modules__conv2_OneOrMore0_98;

#line 1203 "modules.m"
                        {
#line 1203 "modules.m"
                          parse_tree__modules__IoUC_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1203 "modules.m"
                          MR_hl_field(MR_mktag(0), parse_tree__modules__IoUC_106, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1203 "modules.m"
                          MR_hl_field(MR_mktag(0), parse_tree__modules__IoUC_106, 1) = ((MR_Box) (parse_tree__modules__Context_21));
#line 1203 "modules.m"
                        }
#line 1204 "modules.m"
                        {
#line 1204 "modules.m"
                          parse_tree__modules__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[12], parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, ((MR_Box) (parse_tree__modules__ModuleName_114)), &parse_tree__modules__conv2_OneOrMore0_98);
                        }
#line 1204 "modules.m"
                        if (parse_tree__modules__succeeded)
#line 1204 "modules.m"
                          {
#line 1204 "modules.m"
                            parse_tree__modules__OneOrMore0_98 = ((MR_Word) parse_tree__modules__conv2_OneOrMore0_98);
#line 1204 "modules.m"
                            parse_tree__modules__succeeded = MR_TRUE;
#line 1204 "modules.m"
                          }
#line 1208 "modules.m"
                        if (parse_tree__modules__succeeded)
#line 1205 "modules.m"
                          {
#line 1205 "modules.m"
                            MR_Word parse_tree__modules__HeadIoUC_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_98, (MR_Integer) 0)));
#line 1205 "modules.m"
                            MR_Word parse_tree__modules__TailIoUCs_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_98, (MR_Integer) 1)));
#line 1205 "modules.m"
                            MR_Word parse_tree__modules__V_84_84;
#line 1205 "modules.m"
                            MR_Word parse_tree__modules__OneOrMore_85;

#line 1206 "modules.m"
                            {
#line 1206 "modules.m"
                              parse_tree__modules__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__V_84_84, 0) = ((MR_Box) (parse_tree__modules__HeadIoUC_82));
#line 1206 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__V_84_84, 1) = ((MR_Box) (parse_tree__modules__TailIoUCs_83));
#line 1206 "modules.m"
                            }
#line 1206 "modules.m"
                            {
#line 1206 "modules.m"
                              parse_tree__modules__OneOrMore_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1206 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_85, 0) = ((MR_Box) (parse_tree__modules__IoUC_106));
#line 1206 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_85, 1) = ((MR_Box) (parse_tree__modules__V_84_84));
#line 1206 "modules.m"
                            }
#line 1207 "modules.m"
                            {
#line 1207 "modules.m"
                              mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[12], ((MR_Box) (parse_tree__modules__ModuleName_114)), ((MR_Box) (parse_tree__modules__OneOrMore_85)), parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51);
                            }
#line 1205 "modules.m"
                          }
#line 1208 "modules.m"
                        else
#line 1209 "modules.m"
                          {
#line 1209 "modules.m"
                            MR_Word parse_tree__modules__OneOrMore_89;

#line 1209 "modules.m"
                            {
#line 1209 "modules.m"
                              parse_tree__modules__OneOrMore_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1209 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_89, 0) = ((MR_Box) (parse_tree__modules__IoUC_106));
#line 1209 "modules.m"
                              MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1209 "modules.m"
                            }
#line 1210 "modules.m"
                            {
#line 1210 "modules.m"
                              mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[12], ((MR_Box) (parse_tree__modules__ModuleName_114)), ((MR_Box) (parse_tree__modules__OneOrMore_89)), parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51);
                            }
#line 1209 "modules.m"
                          }
#line 1201 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1201 "modules.m"
                      }
#line 1198 "modules.m"
                      break;
#line 1198 "modules.m"
                  }
#line 1180 "modules.m"
                }
#line 1213 "modules.m"
                break;
#line 1213 "modules.m"
              case (MR_Integer) 1:
#line 1214 "modules.m"
                {
#line 1214 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1214 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1214 "modules.m"
                }
#line 1213 "modules.m"
                break;
#line 1213 "modules.m"
              case (MR_Integer) 2:
#line 1215 "modules.m"
                {
#line 1215 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1215 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1215 "modules.m"
                }
#line 1213 "modules.m"
                break;
#line 1213 "modules.m"
              case (MR_Integer) 3:
#line 1213 "modules.m"
#line 1213 "modules.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_15, (MR_Integer) 0)))) {
#line 1213 "modules.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1213 "modules.m"
                  case (MR_Integer) 0:
#line 1216 "modules.m"
                    {
#line 1216 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1216 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1216 "modules.m"
                    }
#line 1213 "modules.m"
                    break;
#line 1213 "modules.m"
                  case (MR_Integer) 1:
#line 1217 "modules.m"
                    {
#line 1217 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1217 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1217 "modules.m"
                    }
#line 1213 "modules.m"
                    break;
#line 1213 "modules.m"
                  case (MR_Integer) 2:
#line 1218 "modules.m"
                    {
#line 1218 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1218 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1218 "modules.m"
                    }
#line 1213 "modules.m"
                    break;
#line 1213 "modules.m"
                  case (MR_Integer) 3:
#line 1219 "modules.m"
                    {
#line 1219 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1219 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1219 "modules.m"
                    }
#line 1213 "modules.m"
                    break;
#line 1213 "modules.m"
                  case (MR_Integer) 4:
#line 1220 "modules.m"
                    {
#line 1220 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1220 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1220 "modules.m"
                    }
#line 1213 "modules.m"
                    break;
#line 1213 "modules.m"
                  case (MR_Integer) 5:
#line 1221 "modules.m"
                    {
#line 1221 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1221 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1221 "modules.m"
                    }
#line 1213 "modules.m"
                    break;
#line 1213 "modules.m"
                  case (MR_Integer) 6:
#line 1222 "modules.m"
                    {
#line 1222 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1222 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1222 "modules.m"
                    }
#line 1213 "modules.m"
                    break;
#line 1213 "modules.m"
                  case (MR_Integer) 7:
#line 1223 "modules.m"
                    {
#line 1223 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1223 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1223 "modules.m"
                    }
#line 1213 "modules.m"
                    break;
#line 1213 "modules.m"
                  case (MR_Integer) 8:
#line 1224 "modules.m"
                    {
#line 1224 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1224 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1224 "modules.m"
                    }
#line 1213 "modules.m"
                    break;
#line 1213 "modules.m"
                  case (MR_Integer) 9:
#line 1225 "modules.m"
                    {
#line 1225 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1225 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1225 "modules.m"
                    }
#line 1213 "modules.m"
                    break;
#line 1213 "modules.m"
                  case (MR_Integer) 10:
#line 1226 "modules.m"
                    {
#line 1226 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1226 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1226 "modules.m"
                    }
#line 1213 "modules.m"
                    break;
#line 1213 "modules.m"
                  case (MR_Integer) 11:
#line 1227 "modules.m"
                    {
#line 1227 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_InclMap_55_55 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1227 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1227 "modules.m"
                    }
#line 1213 "modules.m"
                    break;
#line 1213 "modules.m"
                }
#line 1213 "modules.m"
                break;
#line 1213 "modules.m"
            }
#line 1230 "modules.m"
            /* direct tailcall eliminated */
#line 1230 "modules.m"
            {
#line 1230 "modules.m"
              MR_Word parse_tree__modules__HeadVar__2__tmp_copy_2 = parse_tree__modules__Items_16;
#line 1230 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3 = parse_tree__modules__STATE_VARIABLE_InclMap_55_55;
#line 1230 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_51_51;

#line 1230 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5;
#line 1230 "modules.m"
              parse_tree__modules__STATE_VARIABLE_InclMap_0_3 = parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3;
#line 1230 "modules.m"
              parse_tree__modules__HeadVar__2_2 = parse_tree__modules__HeadVar__2__tmp_copy_2;
#line 1230 "modules.m"
            }
#line 1230 "modules.m"
            continue;
#line 1178 "modules.m"
          }
#line 1176 "modules.m"
      }
#line 1176 "modules.m"
      break;
#line 1176 "modules.m"
    }
#line 1172 "modules.m"
}

#line 1081 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_4_p_0_1(
#line 1081 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1081 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1081 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1081 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 1081 "modules.m"
{
#line 1081 "modules.m"
  {
#line 1081 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1081 "modules.m"
    MR_Word parse_tree__modules__conv0_STATE_VARIABLE_Specs_20;

#line 1081 "modules.m"
    {
#line 1081 "modules.m"
      parse_tree__modules__check_module_accessibility_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv0_STATE_VARIABLE_Specs_20);
    }
#line 1081 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_STATE_VARIABLE_Specs_20));
#line 1081 "modules.m"
  }
#line 1081 "modules.m"
}

#line 1069 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_4_p_0(
#line 1069 "modules.m"
  MR_Word parse_tree__modules__AugCompUnit_5,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_6,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20)
#line 1069 "modules.m"
{
#line 1073 "modules.m"
  {
#line 1073 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1073 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_29_51;
#line 1073 "modules.m"
    MR_Word parse_tree__modules__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 0)));
#line 1073 "modules.m"
    MR_Word parse_tree__modules__SrcItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 3)));
#line 1073 "modules.m"
    MR_Word parse_tree__modules__DirectIntItemBlocks_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 4)));
#line 1073 "modules.m"
    MR_Word parse_tree__modules__IndirectIntItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 5)));
#line 1073 "modules.m"
    MR_Word parse_tree__modules__OptItemBlocks_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 6)));
#line 1073 "modules.m"
    MR_Word parse_tree__modules__IntForOptItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 7)));
#line 1073 "modules.m"
    MR_Word parse_tree__modules__IntItemBlocks_16;
#line 1073 "modules.m"
    MR_Word parse_tree__modules__InclMap_17;
#line 1073 "modules.m"
    MR_Word parse_tree__modules__ImportUseMap_18;
#line 1073 "modules.m"
    MR_Word parse_tree__modules__V_21_21;
#line 1073 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_15_37;
#line 1073 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_16_38;
#line 1073 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_18_40;
#line 1073 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_19_41;
#line 1073 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_21_43;
#line 1073 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_22_44;
#line 1073 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_24_46;
#line 1073 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_25_47;
#line 1074 "modules.m"
    MR_Word parse_tree__modules___ModuleNameContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 1)));
#line 1074 "modules.m"
    MR_Word parse_tree__modules___ModuleVersionNumbers_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 2)));
#line 1081 "modules.m"
    MR_Box parse_tree__modules__conv1_STATE_VARIABLE_Specs_20;

#line 1078 "modules.m"
    {
#line 1078 "modules.m"
      parse_tree__modules__IntItemBlocks_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__modules_scalar_common_1[8], parse_tree__modules__DirectIntItemBlocks_12, parse_tree__modules__IndirectIntItemBlocks_13);
    }
#line 6088 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_29_51 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1126 "modules.m"
    {
#line 1126 "modules.m"
      mercury__map__init_1_p_0(parse_tree__modules__TypeCtorInfo_29_51, (MR_Word) &parse_tree__modules_scalar_common_1[11], &parse_tree__modules__STATE_VARIABLE_InclMap_15_37);
    }
#line 1127 "modules.m"
    {
#line 1127 "modules.m"
      mercury__map__init_1_p_0(parse_tree__modules__TypeCtorInfo_29_51, (MR_Word) &parse_tree__modules_scalar_common_1[12], &parse_tree__modules__STATE_VARIABLE_ImportUseMap_16_38);
    }
#line 1128 "modules.m"
    {
#line 1128 "modules.m"
      parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho4_6_p_0(parse_tree__modules__SrcItemBlocks_11, parse_tree__modules__STATE_VARIABLE_InclMap_15_37, &parse_tree__modules__STATE_VARIABLE_InclMap_18_40, parse_tree__modules__STATE_VARIABLE_ImportUseMap_16_38, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_19_41);
    }
#line 1130 "modules.m"
    {
#line 1130 "modules.m"
      parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho3_6_p_0(parse_tree__modules__IntItemBlocks_16, parse_tree__modules__STATE_VARIABLE_InclMap_18_40, &parse_tree__modules__STATE_VARIABLE_InclMap_21_43, parse_tree__modules__STATE_VARIABLE_ImportUseMap_19_41, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_22_44);
    }
#line 1132 "modules.m"
    {
#line 1132 "modules.m"
      parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho2_6_p_0(parse_tree__modules__OptItemBlocks_14, parse_tree__modules__STATE_VARIABLE_InclMap_21_43, &parse_tree__modules__STATE_VARIABLE_InclMap_24_46, parse_tree__modules__STATE_VARIABLE_ImportUseMap_22_44, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_25_47);
    }
#line 1134 "modules.m"
    {
#line 1134 "modules.m"
      parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho1_6_p_0(parse_tree__modules__IntForOptItemBlocks_15, parse_tree__modules__STATE_VARIABLE_InclMap_24_46, &parse_tree__modules__InclMap_17, parse_tree__modules__STATE_VARIABLE_ImportUseMap_25_47, &parse_tree__modules__ImportUseMap_18);
    }
#line 1081 "modules.m"
    {
#line 1081 "modules.m"
      parse_tree__modules__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_8[0]));
#line 1081 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 1) = ((MR_Box) (parse_tree__modules__check_imports_accessibility_4_p_0_1));
#line 1081 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1081 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 3) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 1081 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 4) = ((MR_Box) (parse_tree__modules__InclMap_17));
#line 1081 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 5) = ((MR_Box) (parse_tree__modules__ImportUseMap_18));
#line 1081 "modules.m"
    }
#line 1081 "modules.m"
    {
#line 1081 "modules.m"
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[7], parse_tree__modules__V_21_21, parse_tree__modules__ImportedModules_6, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_19)), &parse_tree__modules__conv1_STATE_VARIABLE_Specs_20);
    }
#line 1081 "modules.m"
    *parse_tree__modules__STATE_VARIABLE_Specs_20 = ((MR_Word) parse_tree__modules__conv1_STATE_VARIABLE_Specs_20);
#line 1073 "modules.m"
  }
#line 1069 "modules.m"
}

#line 1025 "modules.m"
static void MR_CALL 
parse_tree__modules__maybe_record_timestamp_6_p_0(
#line 1025 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1025 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_8,
#line 1025 "modules.m"
  MR_Word parse_tree__modules__NeedQualifier_9,
#line 1025 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamp_10,
#line 1025 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17,
#line 1025 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18)
#line 1025 "modules.m"
{
#line 1032 "modules.m"
  {
#line 1032 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 24)));
#line 1032 "modules.m"
    MR_String parse_tree__modules__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 26)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 25)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 23)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 22)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 21)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 20)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 19)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 18)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 17)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 16)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 15)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 14)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 13)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 12)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 11)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 10)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 9)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 8)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 7)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 6)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 5)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 4)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 3)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 2)));
#line 1032 "modules.m"
    MR_Word parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 1)));
#line 1032 "modules.m"
    MR_String parse_tree__modules__V_130_130 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 0)));

#line 1032 "modules.m"
    if ((parse_tree__modules__V_106_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1044 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17;
#line 1032 "modules.m"
    else
#line 1032 "modules.m"
      {
#line 1032 "modules.m"
        MR_Word parse_tree__modules__TimestampMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__V_106_106, (MR_Integer) 0)));

#line 1040 "modules.m"
        if ((parse_tree__modules__MaybeTimestamp_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1041 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17;
#line 1040 "modules.m"
        else
#line 1034 "modules.m"
          {
#line 1034 "modules.m"
            MR_Word parse_tree__modules__Timestamp_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__MaybeTimestamp_10, (MR_Integer) 0)));
#line 1034 "modules.m"
            MR_Word parse_tree__modules__FileKind_14;
#line 1034 "modules.m"
            MR_Word parse_tree__modules__TimestampInfo_15;
#line 1034 "modules.m"
            MR_Word parse_tree__modules__TimestampMap_16;
#line 1034 "modules.m"
            MR_Word parse_tree__modules__V_22_22;
#line 1039 "modules.m"
            MR_String parse_tree__modules__V_49_49;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_50_50;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_51_51;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_52_52;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_53_53;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_54_54;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_55_55;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_56_56;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_57_57;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_58_58;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_59_59;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_60_60;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_61_61;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_62_62;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_63_63;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_64_64;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_65_65;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_66_66;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_67_67;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_68_68;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_69_69;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_70_70;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_71_71;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_72_72;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_74_74;
#line 1039 "modules.m"
            MR_String parse_tree__modules__V_75_75;
#line 1039 "modules.m"
            MR_Word parse_tree__modules__V_73_73;

#line 1035 "modules.m"
            {
#line 1035 "modules.m"
              parse_tree__modules__FileKind_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__FileKind_14, 0) = ((MR_Box) (parse_tree__modules__IntFileKind_8));
#line 1035 "modules.m"
            }
#line 1036 "modules.m"
            {
#line 1036 "modules.m"
              parse_tree__modules__TimestampInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1036 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__TimestampInfo_15, 0) = ((MR_Box) (parse_tree__modules__FileKind_14));
#line 1036 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__TimestampInfo_15, 1) = ((MR_Box) (parse_tree__modules__Timestamp_13));
#line 1036 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__TimestampInfo_15, 2) = ((MR_Box) (parse_tree__modules__NeedQualifier_9));
#line 1036 "modules.m"
            }
#line 1038 "modules.m"
            {
#line 1038 "modules.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, ((MR_Box) (parse_tree__modules__ModuleName_7)), ((MR_Box) (parse_tree__modules__TimestampInfo_15)), parse_tree__modules__TimestampMap0_12, &parse_tree__modules__TimestampMap_16);
            }
#line 1039 "modules.m"
            {
#line 1039 "modules.m"
              parse_tree__modules__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_22_22, 0) = ((MR_Box) (parse_tree__modules__TimestampMap_16));
#line 1039 "modules.m"
            }
#line 1039 "modules.m"
            parse_tree__modules__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 0)));
#line 1039 "modules.m"
            parse_tree__modules__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 1)));
#line 1039 "modules.m"
            parse_tree__modules__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 2)));
#line 1039 "modules.m"
            parse_tree__modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 3)));
#line 1039 "modules.m"
            parse_tree__modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 4)));
#line 1039 "modules.m"
            parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 5)));
#line 1039 "modules.m"
            parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 6)));
#line 1039 "modules.m"
            parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 7)));
#line 1039 "modules.m"
            parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 8)));
#line 1039 "modules.m"
            parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 9)));
#line 1039 "modules.m"
            parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 10)));
#line 1039 "modules.m"
            parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 11)));
#line 1039 "modules.m"
            parse_tree__modules__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 12)));
#line 1039 "modules.m"
            parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 13)));
#line 1039 "modules.m"
            parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 14)));
#line 1039 "modules.m"
            parse_tree__modules__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 15)));
#line 1039 "modules.m"
            parse_tree__modules__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 16)));
#line 1039 "modules.m"
            parse_tree__modules__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 17)));
#line 1039 "modules.m"
            parse_tree__modules__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 18)));
#line 1039 "modules.m"
            parse_tree__modules__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 19)));
#line 1039 "modules.m"
            parse_tree__modules__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 20)));
#line 1039 "modules.m"
            parse_tree__modules__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 21)));
#line 1039 "modules.m"
            parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 22)));
#line 1039 "modules.m"
            parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 23)));
#line 1039 "modules.m"
            parse_tree__modules__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 24)));
#line 1039 "modules.m"
            parse_tree__modules__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 25)));
#line 1039 "modules.m"
            parse_tree__modules__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 26)));
#line 1039 "modules.m"
            {
#line 1039 "modules.m"
              MR_Word base;
#line 1039 "modules.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "modules.m"
              *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18 = base;
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_49_49));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_50_50));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_51_51));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_52_52));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__V_53_53));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_54_54));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__V_55_55));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__V_56_56));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_57_57));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_58_58));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_59_59));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_60_60));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_61_61));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_62_62));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_63_63));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_64_64));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_65_65));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_66_66));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_67_67));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_68_68));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_69_69));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_70_70));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__V_71_71));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__V_72_72));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__V_22_22));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__modules__V_74_74));
#line 1039 "modules.m"
              MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_75_75));
#line 1039 "modules.m"
            }
#line 1034 "modules.m"
          }
#line 1032 "modules.m"
      }
#line 1032 "modules.m"
  }
#line 1025 "modules.m"
}

#line 989 "modules.m"
static void MR_CALL 
parse_tree__modules__make_module_and_imports_12_p_0(
#line 989 "modules.m"
  MR_String parse_tree__modules__SourceFileName_13,
#line 989 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_14,
#line 989 "modules.m"
  MR_Word parse_tree__modules__ModuleName_15,
#line 989 "modules.m"
  MR_Word parse_tree__modules__ModuleNameContext_16,
#line 989 "modules.m"
  MR_Word parse_tree__modules__SrcItemBlocks0_17,
#line 989 "modules.m"
  MR_Word parse_tree__modules__Specs_18,
#line 989 "modules.m"
  MR_Word parse_tree__modules__PublicChildren_19,
#line 989 "modules.m"
  MR_Word parse_tree__modules__NestedChildren_20,
#line 989 "modules.m"
  MR_Word parse_tree__modules__FactDeps_21,
#line 989 "modules.m"
  MR_Word parse_tree__modules__ForeignIncludeFiles_22,
#line 989 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestampMap_23,
#line 989 "modules.m"
  MR_Word * parse_tree__modules__Module_24)
#line 989 "modules.m"
{
#line 998 "modules.m"
  {
#line 998 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 998 "modules.m"
    MR_Word parse_tree__modules__TypeInfo_46_46;
#line 998 "modules.m"
    MR_Word parse_tree__modules__SrcItemBlocks_25;
#line 998 "modules.m"
    MR_Word parse_tree__modules__Errors_26;
#line 998 "modules.m"
    MR_Word parse_tree__modules__V_33_33;
#line 998 "modules.m"
    MR_Word parse_tree__modules__V_36_36;
#line 998 "modules.m"
    MR_Word parse_tree__modules__V_37_37;
#line 998 "modules.m"
    MR_Word parse_tree__modules__V_38_38;
#line 998 "modules.m"
    MR_Word parse_tree__modules__V_39_39;
#line 998 "modules.m"
    MR_Word parse_tree__modules__V_40_40;
#line 998 "modules.m"
    MR_String parse_tree__modules__V_42_42;

#line 1007 "modules.m"
    {
#line 1007 "modules.m"
      parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_src_module_section_0, parse_tree__modules__ModuleName_15, ((MR_Box) ((MR_Integer) 0)), parse_tree__modules__SrcItemBlocks0_17, &parse_tree__modules__SrcItemBlocks_25);
    }
#line 1009 "modules.m"
    {
#line 1009 "modules.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__modules__Errors_26);
    }
#line 1012 "modules.m"
    {
#line 1012 "modules.m"
      parse_tree__modules__V_33_33 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0);
    }
#line 6539 "parse_tree.modules.c"
    parse_tree__modules__TypeInfo_46_46 = (MR_Word) &parse_tree__modules_scalar_common_1[8];
#line 1014 "modules.m"
    {
#line 1014 "modules.m"
      parse_tree__modules__V_36_36 = mercury__cord__init_0_f_0(parse_tree__modules__TypeInfo_46_46);
    }
#line 1014 "modules.m"
    {
#line 1014 "modules.m"
      parse_tree__modules__V_37_37 = mercury__cord__init_0_f_0(parse_tree__modules__TypeInfo_46_46);
    }
#line 1014 "modules.m"
    {
#line 1014 "modules.m"
      parse_tree__modules__V_38_38 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[9]);
    }
#line 1014 "modules.m"
    {
#line 1014 "modules.m"
      parse_tree__modules__V_39_39 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[10]);
    }
#line 1014 "modules.m"
    {
#line 1014 "modules.m"
      parse_tree__modules__V_40_40 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0);
    }
#line 1015 "modules.m"
    {
#line 1015 "modules.m"
      parse_tree__modules__V_42_42 = mercury__dir__this_directory_0_f_0();
    }
#line 1010 "modules.m"
    {
#line 1010 "modules.m"
      MR_Word base;
#line 1010 "modules.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 1010 "modules.m"
      *parse_tree__modules__Module_24 = base;
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__SourceFileName_13));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__SourceFileModuleName_14));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__ModuleName_15));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__ModuleNameContext_16));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__PublicChildren_19));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__NestedChildren_20));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__FactDeps_21));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_33_33));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__ForeignIncludeFiles_22));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) ((MR_Integer) 1));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__SrcItemBlocks_25));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_36_36));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_37_37));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_38_38));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_39_39));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_40_40));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__Specs_18));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__Errors_26));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__MaybeTimestampMap_23));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) ((MR_Integer) 1));
#line 1010 "modules.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_42_42));
#line 1010 "modules.m"
    }
#line 998 "modules.m"
  }
#line 989 "modules.m"
}

#line 761 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__wrap_symname_1_f_0(
#line 761 "modules.m"
  MR_Word parse_tree__modules__ModuleName_3)
#line 761 "modules.m"
{
#line 763 "modules.m"
  {
#line 763 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 763 "modules.m"
    MR_Word parse_tree__modules__HeadVar__2_2;

#line 763 "modules.m"
    {
#line 763 "modules.m"
      parse_tree__modules__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 763 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 763 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__modules__ModuleName_3));
#line 763 "modules.m"
    }
#line 763 "modules.m"
    return parse_tree__modules__HeadVar__2_2;
#line 763 "modules.m"
  }
#line 761 "modules.m"
}

#line 674 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_imported_ancestor_5_p_0(
#line 674 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 674 "modules.m"
  MR_Word parse_tree__modules__Context_7,
#line 674 "modules.m"
  MR_Word parse_tree__modules__AncestorName_8,
#line 674 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_15,
#line 674 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_16)
#line 674 "modules.m"
{
#line 677 "modules.m"
  {
#line 677 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 677 "modules.m"
    MR_Word parse_tree__modules__MainPieces_10;
#line 677 "modules.m"
    MR_Word parse_tree__modules__Msg_12;
#line 677 "modules.m"
    MR_Word parse_tree__modules__Spec_14;
#line 677 "modules.m"
    MR_Word parse_tree__modules__V_19_19;
#line 677 "modules.m"
    MR_Word parse_tree__modules__V_20_20;
#line 677 "modules.m"
    MR_Word parse_tree__modules__V_21_21;
#line 677 "modules.m"
    MR_Word parse_tree__modules__V_24_24;
#line 677 "modules.m"
    MR_Word parse_tree__modules__V_25_25;
#line 677 "modules.m"
    MR_Word parse_tree__modules__V_39_39;
#line 677 "modules.m"
    MR_Word parse_tree__modules__V_40_40;
#line 677 "modules.m"
    MR_Word parse_tree__modules__V_43_43;
#line 677 "modules.m"
    MR_Word parse_tree__modules__V_44_44;
#line 677 "modules.m"
    MR_Word parse_tree__modules__V_55_55;

#line 678 "modules.m"
    {
#line 678 "modules.m"
      parse_tree__modules__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 678 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_20_20, 1) = ((MR_Box) (parse_tree__modules__ModuleName_6));
#line 678 "modules.m"
    }
#line 680 "modules.m"
    {
#line 680 "modules.m"
      parse_tree__modules__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 680 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_25_25, 1) = ((MR_Box) (parse_tree__modules__AncestorName_8));
#line 680 "modules.m"
    }
#line 680 "modules.m"
    {
#line 680 "modules.m"
      parse_tree__modules__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_24_24, 0) = ((MR_Box) (parse_tree__modules__V_25_25));
#line 680 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[40])));
#line 680 "modules.m"
    }
#line 679 "modules.m"
    {
#line 679 "modules.m"
      parse_tree__modules__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[38])));
#line 679 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_21_21, 1) = ((MR_Box) (parse_tree__modules__V_24_24));
#line 679 "modules.m"
    }
#line 678 "modules.m"
    {
#line 678 "modules.m"
      parse_tree__modules__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_19_19, 0) = ((MR_Box) (parse_tree__modules__V_20_20));
#line 678 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_19_19, 1) = ((MR_Box) (parse_tree__modules__V_21_21));
#line 678 "modules.m"
    }
#line 678 "modules.m"
    {
#line 678 "modules.m"
      parse_tree__modules__MainPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[37])));
#line 678 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_10, 1) = ((MR_Box) (parse_tree__modules__V_19_19));
#line 678 "modules.m"
    }
#line 686 "modules.m"
    {
#line 686 "modules.m"
      parse_tree__modules__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 686 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 0) = ((MR_Box) (parse_tree__modules__MainPieces_10));
#line 686 "modules.m"
    }
#line 686 "modules.m"
    {
#line 686 "modules.m"
      parse_tree__modules__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 0) = ((MR_Box) (parse_tree__modules__V_44_44));
#line 686 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[42])));
#line 686 "modules.m"
    }
#line 685 "modules.m"
    {
#line 685 "modules.m"
      parse_tree__modules__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 685 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 1) = ((MR_Box) (parse_tree__modules__V_43_43));
#line 685 "modules.m"
    }
#line 687 "modules.m"
    {
#line 687 "modules.m"
      parse_tree__modules__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_39_39, 0) = ((MR_Box) (parse_tree__modules__V_40_40));
#line 687 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "modules.m"
    }
#line 684 "modules.m"
    {
#line 684 "modules.m"
      parse_tree__modules__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 684 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_12, 0) = ((MR_Box) (parse_tree__modules__Context_7));
#line 684 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_12, 1) = ((MR_Box) (parse_tree__modules__V_39_39));
#line 684 "modules.m"
    }
#line 690 "modules.m"
    {
#line 690 "modules.m"
      parse_tree__modules__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_55_55, 0) = ((MR_Box) (parse_tree__modules__Msg_12));
#line 690 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "modules.m"
    }
#line 690 "modules.m"
    {
#line 690 "modules.m"
      parse_tree__modules__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 690 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[0])));
#line 690 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 690 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_14, 2) = ((MR_Box) (parse_tree__modules__V_55_55));
#line 690 "modules.m"
    }
#line 691 "modules.m"
    {
#line 691 "modules.m"
      MR_Word base;
#line 691 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_16 = base;
#line 691 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_14));
#line 691 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_15));
#line 691 "modules.m"
    }
#line 677 "modules.m"
  }
#line 674 "modules.m"
}

#line 659 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_1(
#line 659 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 659 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 659 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 659 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 659 "modules.m"
{
#line 659 "modules.m"
  {
#line 659 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 659 "modules.m"
    MR_Word parse_tree__modules__conv0_STATE_VARIABLE_Specs_16;

#line 659 "modules.m"
    {
#line 659 "modules.m"
      parse_tree__modules__warn_imported_ancestor_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv0_STATE_VARIABLE_Specs_16);
    }
#line 659 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_STATE_VARIABLE_Specs_16));
#line 659 "modules.m"
  }
#line 659 "modules.m"
}

#line 647 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0(
#line 647 "modules.m"
  MR_Word parse_tree__modules__ModuleName_8,
#line 647 "modules.m"
  MR_Word parse_tree__modules__Context_9,
#line 647 "modules.m"
  MR_Word parse_tree__modules__AncestorModules_10,
#line 647 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_11,
#line 647 "modules.m"
  MR_Word parse_tree__modules__UsedModules_12,
#line 647 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_23,
#line 647 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_24)
#line 647 "modules.m"
{
#line 652 "modules.m"
  {
#line 652 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 652 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_53_53 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 652 "modules.m"
    MR_Word parse_tree__modules__AncestorModulesSet_14;
#line 652 "modules.m"
    MR_Word parse_tree__modules__ImportedModulesSet_15;
#line 652 "modules.m"
    MR_Word parse_tree__modules__UsedModulesSet_16;
#line 652 "modules.m"
    MR_Word parse_tree__modules__ImportedOrUsedModulesSet_17;
#line 652 "modules.m"
    MR_Word parse_tree__modules__ImportedOrUsedAncestorModulesSet_18;
#line 652 "modules.m"
    MR_Word parse_tree__modules__V_25_25;
#line 652 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_26_26;
#line 659 "modules.m"
    MR_Box parse_tree__modules__conv1_STATE_VARIABLE_Specs_26_26;

#line 653 "modules.m"
    {
#line 653 "modules.m"
      mercury__set__list_to_set_2_p_0(parse_tree__modules__TypeCtorInfo_53_53, parse_tree__modules__AncestorModules_10, &parse_tree__modules__AncestorModulesSet_14);
    }
#line 654 "modules.m"
    {
#line 654 "modules.m"
      mercury__set__list_to_set_2_p_0(parse_tree__modules__TypeCtorInfo_53_53, parse_tree__modules__ImportedModules_11, &parse_tree__modules__ImportedModulesSet_15);
    }
#line 655 "modules.m"
    {
#line 655 "modules.m"
      mercury__set__list_to_set_2_p_0(parse_tree__modules__TypeCtorInfo_53_53, parse_tree__modules__UsedModules_12, &parse_tree__modules__UsedModulesSet_16);
    }
#line 656 "modules.m"
    {
#line 656 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_53_53, parse_tree__modules__ImportedModulesSet_15, parse_tree__modules__UsedModulesSet_16, &parse_tree__modules__ImportedOrUsedModulesSet_17);
    }
#line 657 "modules.m"
    {
#line 657 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_53_53, parse_tree__modules__AncestorModulesSet_14, parse_tree__modules__ImportedOrUsedModulesSet_17, &parse_tree__modules__ImportedOrUsedAncestorModulesSet_18);
    }
#line 659 "modules.m"
    {
#line 659 "modules.m"
      parse_tree__modules__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 659 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_25_25, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_7[0]));
#line 659 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_25_25, 1) = ((MR_Box) (parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_1));
#line 659 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 659 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_25_25, 3) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 659 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_25_25, 4) = ((MR_Box) (parse_tree__modules__Context_9));
#line 659 "modules.m"
    }
#line 659 "modules.m"
    {
#line 659 "modules.m"
      mercury__set__fold_4_p_0(parse_tree__modules__TypeCtorInfo_53_53, (MR_Word) &parse_tree__modules_scalar_common_1[7], parse_tree__modules__V_25_25, parse_tree__modules__ImportedOrUsedAncestorModulesSet_18, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_23)), &parse_tree__modules__conv1_STATE_VARIABLE_Specs_26_26);
    }
#line 659 "modules.m"
    parse_tree__modules__STATE_VARIABLE_Specs_26_26 = ((MR_Word) parse_tree__modules__conv1_STATE_VARIABLE_Specs_26_26);
#line 661 "modules.m"
    {
#line 661 "modules.m"
      parse_tree__modules__succeeded = mercury__set__member_2_p_0(parse_tree__modules__TypeCtorInfo_53_53, ((MR_Box) (parse_tree__modules__ModuleName_8)), parse_tree__modules__ImportedOrUsedModulesSet_17);
    }
#line 670 "modules.m"
    if (parse_tree__modules__succeeded)
#line 663 "modules.m"
      {
#line 663 "modules.m"
        MR_Word parse_tree__modules__SelfPieces_19;
#line 663 "modules.m"
        MR_Word parse_tree__modules__SelfMsg_20;
#line 663 "modules.m"
        MR_Word parse_tree__modules__SelfSpec_22;
#line 663 "modules.m"
        MR_Word parse_tree__modules__V_29_29;
#line 663 "modules.m"
        MR_Word parse_tree__modules__V_30_30;
#line 663 "modules.m"
        MR_Word parse_tree__modules__V_37_37;
#line 663 "modules.m"
        MR_Word parse_tree__modules__V_38_38;
#line 663 "modules.m"
        MR_Word parse_tree__modules__V_41_41;
#line 663 "modules.m"
        MR_Word parse_tree__modules__V_42_42;
#line 663 "modules.m"
        MR_Word parse_tree__modules__V_50_50;

#line 662 "modules.m"
        {
#line 662 "modules.m"
          parse_tree__modules__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 662 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_30_30, 1) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 662 "modules.m"
        }
#line 662 "modules.m"
        {
#line 662 "modules.m"
          parse_tree__modules__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_29_29, 0) = ((MR_Box) (parse_tree__modules__V_30_30));
#line 662 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[15])));
#line 662 "modules.m"
        }
#line 662 "modules.m"
        {
#line 662 "modules.m"
          parse_tree__modules__SelfPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__SelfPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[36])));
#line 662 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__SelfPieces_19, 1) = ((MR_Box) (parse_tree__modules__V_29_29));
#line 662 "modules.m"
        }
#line 665 "modules.m"
        {
#line 665 "modules.m"
          parse_tree__modules__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 665 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_42_42, 0) = ((MR_Box) (parse_tree__modules__SelfPieces_19));
#line 665 "modules.m"
        }
#line 665 "modules.m"
        {
#line 665 "modules.m"
          parse_tree__modules__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_41_41, 0) = ((MR_Box) (parse_tree__modules__V_42_42));
#line 665 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "modules.m"
        }
#line 665 "modules.m"
        {
#line 665 "modules.m"
          parse_tree__modules__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_38_38, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 665 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_38_38, 1) = ((MR_Box) (parse_tree__modules__V_41_41));
#line 665 "modules.m"
        }
#line 665 "modules.m"
        {
#line 665 "modules.m"
          parse_tree__modules__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_37_37, 0) = ((MR_Box) (parse_tree__modules__V_38_38));
#line 665 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "modules.m"
        }
#line 664 "modules.m"
        {
#line 664 "modules.m"
          parse_tree__modules__SelfMsg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 664 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfMsg_20, 0) = ((MR_Box) (parse_tree__modules__Context_9));
#line 664 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfMsg_20, 1) = ((MR_Box) (parse_tree__modules__V_37_37));
#line 664 "modules.m"
        }
#line 668 "modules.m"
        {
#line 668 "modules.m"
          parse_tree__modules__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_50_50, 0) = ((MR_Box) (parse_tree__modules__SelfMsg_20));
#line 668 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "modules.m"
        }
#line 668 "modules.m"
        {
#line 668 "modules.m"
          parse_tree__modules__SelfSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 668 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[0])));
#line 668 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfSpec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 668 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfSpec_22, 2) = ((MR_Box) (parse_tree__modules__V_50_50));
#line 668 "modules.m"
        }
#line 669 "modules.m"
        {
#line 669 "modules.m"
          MR_Word base;
#line 669 "modules.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Specs_24 = base;
#line 669 "modules.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__SelfSpec_22));
#line 669 "modules.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_26_26));
#line 669 "modules.m"
        }
#line 663 "modules.m"
      }
#line 670 "modules.m"
    else
#line 670 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_24 = parse_tree__modules__STATE_VARIABLE_Specs_26_26;
#line 652 "modules.m"
  }
#line 647 "modules.m"
}

#line 600 "modules.m"
static void MR_CALL 
parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(
#line 600 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 600 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_0_2,
#line 600 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevClauses_3,
#line 600 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4,
#line 600 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevImplDecls_5)
#line 600 "modules.m"
{
#line 603 "modules.m"
  while (MR_TRUE)
#line 603 "modules.m"
    {
#line 603 "modules.m"
      /* tailcall optimized into a loop */
#line 603 "modules.m"
      {
#line 603 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 603 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "modules.m"
          {
#line 603 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_RevImplDecls_5 = parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4;
#line 603 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_RevClauses_3 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 603 "modules.m"
          }
#line 603 "modules.m"
        else
#line 605 "modules.m"
          {
#line 605 "modules.m"
            MR_Word parse_tree__modules__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 605 "modules.m"
            MR_Word parse_tree__modules__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 605 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41;
#line 605 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_43_43;

#line 612 "modules.m"
#line 612 "modules.m"
            switch (MR_tag((MR_Word) parse_tree__modules__Item_12)) {
#line 612 "modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 612 "modules.m"
              case (MR_Integer) 0:
#line 612 "modules.m"
              case (MR_Integer) 2:
#line 638 "modules.m"
                {
#line 639 "modules.m"
                  {
#line 639 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 639 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4));
#line 639 "modules.m"
                  }
#line 638 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_RevClauses_43_43 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 638 "modules.m"
                }
#line 612 "modules.m"
                break;
#line 612 "modules.m"
              case (MR_Integer) 1:
#line 610 "modules.m"
                {
#line 611 "modules.m"
                  {
#line 611 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_RevClauses_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_43_43, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 611 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_43_43, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevClauses_0_2));
#line 611 "modules.m"
                  }
#line 610 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41 = parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4;
#line 610 "modules.m"
                }
#line 612 "modules.m"
                break;
#line 612 "modules.m"
              case (MR_Integer) 3:
#line 612 "modules.m"
#line 612 "modules.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_12, (MR_Integer) 0)))) {
#line 612 "modules.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 612 "modules.m"
                  case (MR_Integer) 0:
#line 612 "modules.m"
                  case (MR_Integer) 1:
#line 612 "modules.m"
                  case (MR_Integer) 2:
#line 612 "modules.m"
                  case (MR_Integer) 3:
#line 612 "modules.m"
                  case (MR_Integer) 5:
#line 612 "modules.m"
                  case (MR_Integer) 6:
#line 612 "modules.m"
                  case (MR_Integer) 7:
#line 612 "modules.m"
                  case (MR_Integer) 10:
#line 612 "modules.m"
                  case (MR_Integer) 11:
#line 638 "modules.m"
                    {
#line 639 "modules.m"
                      {
#line 639 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 639 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4));
#line 639 "modules.m"
                      }
#line 638 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_RevClauses_43_43 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 638 "modules.m"
                    }
#line 612 "modules.m"
                    break;
#line 612 "modules.m"
                  case (MR_Integer) 4:
#line 613 "modules.m"
                    {
#line 613 "modules.m"
                      MR_Word parse_tree__modules__ItemPragma_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_12, (MR_Integer) 1)));
#line 613 "modules.m"
                      MR_Word parse_tree__modules__Pragma_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 0)));
#line 613 "modules.m"
                      MR_Word parse_tree__modules__AllowedInInterface_24;
#line 614 "modules.m"
                      MR_Word parse_tree__modules__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 1)));
#line 614 "modules.m"
                      MR_Word parse_tree__modules__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 2)));
#line 614 "modules.m"
                      MR_Integer parse_tree__modules__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 3)));

#line 615 "modules.m"
                      {
#line 615 "modules.m"
                        parse_tree__modules__AllowedInInterface_24 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(parse_tree__modules__Pragma_20);
                      }
#line 619 "modules.m"
#line 619 "modules.m"
                      switch (parse_tree__modules__AllowedInInterface_24) {
#line 619 "modules.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 619 "modules.m"
                        case (MR_Integer) 0:
#line 617 "modules.m"
                          {
#line 618 "modules.m"
                            {
#line 618 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_RevClauses_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_43_43, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 618 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_43_43, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevClauses_0_2));
#line 618 "modules.m"
                            }
#line 617 "modules.m"
                            parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41 = parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4;
#line 617 "modules.m"
                          }
#line 619 "modules.m"
                          break;
#line 619 "modules.m"
                        case (MR_Integer) 1:
#line 620 "modules.m"
                          {
#line 621 "modules.m"
                            {
#line 621 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 621 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4));
#line 621 "modules.m"
                            }
#line 620 "modules.m"
                            parse_tree__modules__STATE_VARIABLE_RevClauses_43_43 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 620 "modules.m"
                          }
#line 619 "modules.m"
                          break;
#line 619 "modules.m"
                      }
#line 613 "modules.m"
                    }
#line 612 "modules.m"
                    break;
#line 612 "modules.m"
                  case (MR_Integer) 8:
#line 612 "modules.m"
                  case (MR_Integer) 9:
#line 610 "modules.m"
                    {
#line 611 "modules.m"
                      {
#line 611 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_RevClauses_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_43_43, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 611 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_43_43, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevClauses_0_2));
#line 611 "modules.m"
                      }
#line 610 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41 = parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4;
#line 610 "modules.m"
                    }
#line 612 "modules.m"
                    break;
#line 612 "modules.m"
                }
#line 612 "modules.m"
                break;
#line 612 "modules.m"
            }
#line 641 "modules.m"
            /* direct tailcall eliminated */
#line 641 "modules.m"
            {
#line 641 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__Items_13;
#line 641 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_0__tmp_copy_2 = parse_tree__modules__STATE_VARIABLE_RevClauses_43_43;
#line 641 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_RevImplDecls_0__tmp_copy_4 = parse_tree__modules__STATE_VARIABLE_RevImplDecls_41_41;

#line 641 "modules.m"
              parse_tree__modules__STATE_VARIABLE_RevImplDecls_0_4 = parse_tree__modules__STATE_VARIABLE_RevImplDecls_0__tmp_copy_4;
#line 641 "modules.m"
              parse_tree__modules__STATE_VARIABLE_RevClauses_0_2 = parse_tree__modules__STATE_VARIABLE_RevClauses_0__tmp_copy_2;
#line 641 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 641 "modules.m"
            }
#line 641 "modules.m"
            continue;
#line 605 "modules.m"
          }
#line 603 "modules.m"
      }
#line 603 "modules.m"
      break;
#line 603 "modules.m"
    }
#line 600 "modules.m"
}

#line 565 "modules.m"
static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(
#line 565 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 565 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2)
#line 565 "modules.m"
{
#line 568 "modules.m"
  {
#line 568 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 568 "modules.m"
    if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 568 "modules.m"
    else
#line 570 "modules.m"
      {
#line 570 "modules.m"
        MR_Word parse_tree__modules__RawItemBlock_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 570 "modules.m"
        MR_Word parse_tree__modules__RawItemBlocks_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 570 "modules.m"
        MR_Word parse_tree__modules__SectionContext_7;
#line 570 "modules.m"
        MR_Word parse_tree__modules__Items_8;
#line 570 "modules.m"
        MR_Word parse_tree__modules__RevClauses_9;
#line 570 "modules.m"
        MR_Word parse_tree__modules__RevImplDecls_10;
#line 570 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_20_20;
#line 570 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24;
#line 572 "modules.m"
        MR_Word parse_tree__modules___Section_6;

#line 571 "modules.m"
        {
#line 571 "modules.m"
          parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(parse_tree__modules__RawItemBlocks_4, &parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_20_20);
        }
#line 572 "modules.m"
        parse_tree__modules___Section_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 0)));
#line 572 "modules.m"
        parse_tree__modules__SectionContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 1)));
#line 572 "modules.m"
        parse_tree__modules__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 2)));
#line 579 "modules.m"
        {
#line 579 "modules.m"
          parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(parse_tree__modules__Items_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__RevClauses_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__RevImplDecls_10);
        }
#line 583 "modules.m"
        if ((parse_tree__modules__RevClauses_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "modules.m"
          parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24 = parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_20_20;
#line 583 "modules.m"
        else
#line 584 "modules.m"
          {
#line 584 "modules.m"
            MR_Word parse_tree__modules__Clauses_13;
#line 584 "modules.m"
            MR_Word parse_tree__modules__ClauseItemBlock_14;

#line 585 "modules.m"
            {
#line 585 "modules.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__modules__RevClauses_9, &parse_tree__modules__Clauses_13);
            }
#line 586 "modules.m"
            {
#line 586 "modules.m"
              parse_tree__modules__ClauseItemBlock_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 586 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ClauseItemBlock_14, 0) = ((MR_Box) ((MR_Integer) 1));
#line 586 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ClauseItemBlock_14, 1) = ((MR_Box) (parse_tree__modules__SectionContext_7));
#line 586 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ClauseItemBlock_14, 2) = ((MR_Box) (parse_tree__modules__Clauses_13));
#line 586 "modules.m"
            }
#line 588 "modules.m"
            {
#line 588 "modules.m"
              parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24, 0) = ((MR_Box) (parse_tree__modules__ClauseItemBlock_14));
#line 588 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_20_20));
#line 588 "modules.m"
            }
#line 584 "modules.m"
          }
#line 592 "modules.m"
        if ((parse_tree__modules__RevImplDecls_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 591 "modules.m"
          *parse_tree__modules__HeadVar__2_2 = parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24;
#line 592 "modules.m"
        else
#line 593 "modules.m"
          {
#line 593 "modules.m"
            MR_Word parse_tree__modules__ImplDecls_17;
#line 593 "modules.m"
            MR_Word parse_tree__modules__ImplDeclItemBlock_18;

#line 594 "modules.m"
            {
#line 594 "modules.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__modules__RevImplDecls_10, &parse_tree__modules__ImplDecls_17);
            }
#line 595 "modules.m"
            {
#line 595 "modules.m"
              parse_tree__modules__ImplDeclItemBlock_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 595 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ImplDeclItemBlock_18, 0) = ((MR_Box) ((MR_Integer) 2));
#line 595 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ImplDeclItemBlock_18, 1) = ((MR_Box) (parse_tree__modules__SectionContext_7));
#line 595 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ImplDeclItemBlock_18, 2) = ((MR_Box) (parse_tree__modules__ImplDecls_17));
#line 595 "modules.m"
            }
#line 597 "modules.m"
            {
#line 597 "modules.m"
              MR_Word base;
#line 597 "modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "modules.m"
              *parse_tree__modules__HeadVar__2_2 = base;
#line 597 "modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__ImplDeclItemBlock_18));
#line 597 "modules.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24));
#line 597 "modules.m"
            }
#line 593 "modules.m"
          }
#line 570 "modules.m"
      }
#line 568 "modules.m"
  }
#line 565 "modules.m"
}

#line 548 "modules.m"
static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_src_2_p_0(
#line 548 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 548 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2)
#line 548 "modules.m"
{
#line 551 "modules.m"
  {
#line 551 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 551 "modules.m"
    if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 551 "modules.m"
    else
#line 553 "modules.m"
      {
#line 553 "modules.m"
        MR_Word parse_tree__modules__RawItemBlock_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 553 "modules.m"
        MR_Word parse_tree__modules__RawItemBlocks_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 553 "modules.m"
        MR_Word parse_tree__modules__SrcItemBlock_5;
#line 553 "modules.m"
        MR_Word parse_tree__modules__SrcItemBlocks_6;
#line 553 "modules.m"
        MR_Word parse_tree__modules__Section_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 0)));
#line 553 "modules.m"
        MR_Word parse_tree__modules__SectionContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 1)));
#line 553 "modules.m"
        MR_Word parse_tree__modules__Items_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 2)));
#line 553 "modules.m"
        MR_Word parse_tree__modules__SrcSection_10;

#line 558 "modules.m"
#line 558 "modules.m"
        switch (parse_tree__modules__Section_7) {
#line 558 "modules.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 558 "modules.m"
          case (MR_Integer) 1:
#line 560 "modules.m"
            parse_tree__modules__SrcSection_10 = (MR_Integer) 1;
#line 558 "modules.m"
            break;
#line 558 "modules.m"
          case (MR_Integer) 0:
#line 557 "modules.m"
            parse_tree__modules__SrcSection_10 = (MR_Integer) 0;
#line 558 "modules.m"
            break;
#line 558 "modules.m"
        }
#line 562 "modules.m"
        {
#line 562 "modules.m"
          parse_tree__modules__SrcItemBlock_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 562 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SrcItemBlock_5, 0) = ((MR_Box) (parse_tree__modules__SrcSection_10));
#line 562 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SrcItemBlock_5, 1) = ((MR_Box) (parse_tree__modules__SectionContext_8));
#line 562 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SrcItemBlock_5, 2) = ((MR_Box) (parse_tree__modules__Items_9));
#line 562 "modules.m"
        }
#line 563 "modules.m"
        {
#line 563 "modules.m"
          parse_tree__modules__raw_item_blocks_to_src_2_p_0(parse_tree__modules__RawItemBlocks_4, &parse_tree__modules__SrcItemBlocks_6);
        }
#line 553 "modules.m"
        {
#line 553 "modules.m"
          MR_Word base;
#line 553 "modules.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "modules.m"
          *parse_tree__modules__HeadVar__2_2 = base;
#line 553 "modules.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__SrcItemBlock_5));
#line 553 "modules.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__SrcItemBlocks_6));
#line 553 "modules.m"
        }
#line 553 "modules.m"
      }
#line 551 "modules.m"
  }
#line 548 "modules.m"
}

#line 527 "modules.m"
static void MR_CALL 
parse_tree__modules__get_src_item_blocks_public_children_3_p_0(
#line 527 "modules.m"
  MR_Word parse_tree__modules__RawCompUnit_4,
#line 527 "modules.m"
  MR_Word * parse_tree__modules__SrcItemBlocks_5,
#line 527 "modules.m"
  MR_Word * parse_tree__modules__PublicChildren_6)
#line 527 "modules.m"
{
#line 531 "modules.m"
  {
#line 531 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 531 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_8_24 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 531 "modules.m"
    MR_Word parse_tree__modules__RawItemBlocks_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit_4, (MR_Integer) 2)));
#line 531 "modules.m"
    MR_Word parse_tree__modules__Children_10;
#line 531 "modules.m"
    MR_Word parse_tree__modules__IncludedModuleNamesCord_22;
#line 531 "modules.m"
    MR_Word parse_tree__modules__V_23_23;
#line 532 "modules.m"
    MR_Word parse_tree__modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit_4, (MR_Integer) 0)));
#line 532 "modules.m"
    MR_Word parse_tree__modules__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit_4, (MR_Integer) 1)));

#line 1320 "modules.m"
    {
#line 1320 "modules.m"
      parse_tree__modules__V_23_23 = mercury__cord__init_0_f_0(parse_tree__modules__TypeCtorInfo_8_24);
    }
#line 1319 "modules.m"
    {
#line 1319 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_99_108_117_100_101_100_95_109_111_100_117_108_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(parse_tree__modules__RawItemBlocks_9, parse_tree__modules__V_23_23, &parse_tree__modules__IncludedModuleNamesCord_22);
    }
#line 1321 "modules.m"
    {
#line 1321 "modules.m"
      parse_tree__modules__Children_10 = mercury__cord__list_1_f_0(parse_tree__modules__TypeCtorInfo_8_24, parse_tree__modules__IncludedModuleNamesCord_22);
    }
#line 538 "modules.m"
    if ((parse_tree__modules__Children_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "modules.m"
      {
#line 536 "modules.m"
        {
#line 536 "modules.m"
          parse_tree__modules__raw_item_blocks_to_src_2_p_0(parse_tree__modules__RawItemBlocks_9, parse_tree__modules__SrcItemBlocks_5);
        }
#line 537 "modules.m"
        *parse_tree__modules__PublicChildren_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 535 "modules.m"
      }
#line 538 "modules.m"
    else
#line 539 "modules.m"
      {
#line 539 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_8_29;
#line 539 "modules.m"
        MR_Word parse_tree__modules__IFileItemBlocks_13;
#line 539 "modules.m"
        MR_Word parse_tree__modules__NoIFileItemBlocks_14;
#line 539 "modules.m"
        MR_Word parse_tree__modules__IFileSrcItemBlocks_15;
#line 539 "modules.m"
        MR_Word parse_tree__modules__NoIFileSrcItemBlocks_16;
#line 539 "modules.m"
        MR_Word parse_tree__modules__IncludedModuleNamesCord_27;
#line 539 "modules.m"
        MR_Word parse_tree__modules__V_28_28;

#line 540 "modules.m"
        {
#line 540 "modules.m"
          parse_tree__comp_unit_interface__get_int_and_impl_4_p_0((MR_Integer) 0, parse_tree__modules__RawCompUnit_4, &parse_tree__modules__IFileItemBlocks_13, &parse_tree__modules__NoIFileItemBlocks_14);
        }
#line 542 "modules.m"
        {
#line 542 "modules.m"
          parse_tree__modules__raw_item_blocks_to_src_2_p_0(parse_tree__modules__IFileItemBlocks_13, &parse_tree__modules__IFileSrcItemBlocks_15);
        }
#line 543 "modules.m"
        {
#line 543 "modules.m"
          parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(parse_tree__modules__NoIFileItemBlocks_14, &parse_tree__modules__NoIFileSrcItemBlocks_16);
        }
#line 544 "modules.m"
        {
#line 544 "modules.m"
          *parse_tree__modules__SrcItemBlocks_5 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__modules_scalar_common_1[6], parse_tree__modules__IFileSrcItemBlocks_15, parse_tree__modules__NoIFileSrcItemBlocks_16);
        }
#line 7760 "parse_tree.modules.c"
        parse_tree__modules__TypeCtorInfo_8_29 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1320 "modules.m"
        {
#line 1320 "modules.m"
          parse_tree__modules__V_28_28 = mercury__cord__init_0_f_0(parse_tree__modules__TypeCtorInfo_8_29);
        }
#line 1319 "modules.m"
        {
#line 1319 "modules.m"
          parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_99_108_117_100_101_100_95_109_111_100_117_108_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(parse_tree__modules__IFileItemBlocks_13, parse_tree__modules__V_28_28, &parse_tree__modules__IncludedModuleNamesCord_27);
        }
#line 1321 "modules.m"
        {
#line 1321 "modules.m"
          *parse_tree__modules__PublicChildren_6 = mercury__cord__list_1_f_0(parse_tree__modules__TypeCtorInfo_8_29, parse_tree__modules__IncludedModuleNamesCord_27);
        }
#line 539 "modules.m"
      }
#line 531 "modules.m"
  }
#line 527 "modules.m"
}

#line 233 "modules.m"
void MR_CALL 
parse_tree__modules__get_included_modules_in_items_2_p_0(
#line 233 "modules.m"
  MR_Word parse_tree__modules__Items_3,
#line 233 "modules.m"
  MR_Word * parse_tree__modules__IncludedModuleNames_4)
#line 233 "modules.m"
{
#line 1323 "modules.m"
  {
#line 1323 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1323 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_7_7 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1323 "modules.m"
    MR_Word parse_tree__modules__IncludedModuleNamesCord_5;
#line 1323 "modules.m"
    MR_Word parse_tree__modules__V_6_6;

#line 1325 "modules.m"
    {
#line 1325 "modules.m"
      parse_tree__modules__V_6_6 = mercury__cord__init_0_f_0(parse_tree__modules__TypeCtorInfo_7_7);
    }
#line 1324 "modules.m"
    {
#line 1324 "modules.m"
      parse_tree__modules__get_included_modules_in_items_3_p_0(parse_tree__modules__Items_3, parse_tree__modules__V_6_6, &parse_tree__modules__IncludedModuleNamesCord_5);
    }
#line 1326 "modules.m"
    {
#line 1326 "modules.m"
      *parse_tree__modules__IncludedModuleNames_4 = mercury__cord__list_1_f_0(parse_tree__modules__TypeCtorInfo_7_7, parse_tree__modules__IncludedModuleNamesCord_5);
    }
#line 1323 "modules.m"
  }
#line 233 "modules.m"
}

#line 231 "modules.m"
void MR_CALL 
parse_tree__modules__get_included_modules_in_item_blocks_2_p_0(
#line 231 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_7,
#line 231 "modules.m"
  MR_Word parse_tree__modules__ItemBlocks_3,
#line 231 "modules.m"
  MR_Word * parse_tree__modules__IncludedModuleNames_4)
#line 231 "modules.m"
{
#line 1318 "modules.m"
  {
#line 1318 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1318 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_8_8 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1318 "modules.m"
    MR_Word parse_tree__modules__IncludedModuleNamesCord_5;
#line 1318 "modules.m"
    MR_Word parse_tree__modules__V_6_6;

#line 1320 "modules.m"
    {
#line 1320 "modules.m"
      parse_tree__modules__V_6_6 = mercury__cord__init_0_f_0(parse_tree__modules__TypeCtorInfo_8_8);
    }
#line 1319 "modules.m"
    {
#line 1319 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_99_108_117_100_101_100_95_109_111_100_117_108_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(parse_tree__modules__ItemBlocks_3, parse_tree__modules__V_6_6, &parse_tree__modules__IncludedModuleNamesCord_5);
    }
#line 1321 "modules.m"
    {
#line 1321 "modules.m"
      *parse_tree__modules__IncludedModuleNames_4 = mercury__cord__list_1_f_0(parse_tree__modules__TypeCtorInfo_8_8, parse_tree__modules__IncludedModuleNamesCord_5);
    }
#line 1318 "modules.m"
  }
#line 231 "modules.m"
}

#line 209 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_short_interfaces_15_p_0(
#line 209 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_285,
#line 209 "modules.m"
  MR_Word parse_tree__modules__Globals_1,
#line 209 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_2,
#line 209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3,
#line 209 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_4,
#line 209 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_5,
#line 209 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_6,
#line 209 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_7,
#line 209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_8,
#line 209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_9,
#line 209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_10,
#line 209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_11,
#line 209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12,
#line 209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_13)
#line 209 "modules.m"
{
#line 930 "modules.m"
  while (MR_TRUE)
#line 930 "modules.m"
    {
#line 930 "modules.m"
      /* tailcall optimized into a loop */
#line 930 "modules.m"
      {
#line 930 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 930 "modules.m"
        if ((parse_tree__modules__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 930 "modules.m"
          {
#line 931 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_13 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12;
#line 931 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_11 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_10;
#line 931 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_9 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_8;
#line 930 "modules.m"
          }
#line 930 "modules.m"
        else
#line 935 "modules.m"
          {
#line 935 "modules.m"
            MR_Word parse_tree__modules__Import_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 0)));
#line 935 "modules.m"
            MR_Word parse_tree__modules__Imports_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 1)));
#line 935 "modules.m"
            MR_Word parse_tree__modules__ModIndirectImports0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 7)));
#line 935 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_91_91;
#line 935 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_93_93;
#line 935 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95;
#line 936 "modules.m"
            MR_String parse_tree__modules__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 0)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 1)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 2)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 3)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 4)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 5)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 6)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 8)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 9)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 10)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 11)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 12)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 13)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 14)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 15)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 16)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 17)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 18)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 19)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 20)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 21)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 22)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 23)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 24)));
#line 936 "modules.m"
            MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 25)));
#line 936 "modules.m"
            MR_String parse_tree__modules__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 26)));

#line 940 "modules.m"
            {
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 2)));
#line 940 "modules.m"
              MR_String parse_tree__modules__V_126_126 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 0)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 1)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 3)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 4)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 5)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 6)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 7)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 8)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 9)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 10)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 11)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 12)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 13)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 14)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 15)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 16)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 17)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 18)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 19)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 20)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 21)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 22)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 23)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 24)));
#line 940 "modules.m"
              MR_Word parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 25)));
#line 940 "modules.m"
              MR_String parse_tree__modules__V_151_151 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 26)));

#line 940 "modules.m"
              {
#line 940 "modules.m"
                parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__Import_36, parse_tree__modules__V_292_292);
              }
#line 940 "modules.m"
            }
#line 941 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 941 "modules.m"
              {
#line 941 "modules.m"
                {
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 4)));
#line 941 "modules.m"
                  MR_String parse_tree__modules__V_152_152 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 0)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 1)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 2)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 3)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 5)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 6)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 7)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 8)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 9)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 10)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 11)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 12)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 13)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 14)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 15)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 16)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 17)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 18)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 19)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 20)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 21)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 22)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 23)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 24)));
#line 941 "modules.m"
                  MR_Word parse_tree__modules__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 25)));
#line 941 "modules.m"
                  MR_String parse_tree__modules__V_177_177 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 26)));

#line 941 "modules.m"
                  {
#line 941 "modules.m"
                    parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_36)), parse_tree__modules__V_76_76);
                  }
#line 941 "modules.m"
                }
#line 941 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 941 "modules.m"
                  {
#line 942 "modules.m"
                    {
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 5)));
#line 942 "modules.m"
                      MR_String parse_tree__modules__V_178_178 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 0)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 1)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 2)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 3)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 4)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 6)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 7)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 8)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 9)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 10)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 11)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 12)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 13)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 14)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 15)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 16)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 17)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 18)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 19)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 20)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 21)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 22)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 23)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 24)));
#line 942 "modules.m"
                      MR_Word parse_tree__modules__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 25)));
#line 942 "modules.m"
                      MR_String parse_tree__modules__V_203_203 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 26)));

#line 942 "modules.m"
                      {
#line 942 "modules.m"
                        parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_36)), parse_tree__modules__V_75_75);
                      }
#line 942 "modules.m"
                    }
#line 941 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 941 "modules.m"
                      {
#line 943 "modules.m"
                        {
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 6)));
#line 943 "modules.m"
                          MR_String parse_tree__modules__V_204_204 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 0)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 1)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 2)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 3)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 4)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 5)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 7)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 8)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 9)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 10)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 11)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 12)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 13)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 14)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 15)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 16)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 17)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 18)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 19)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 20)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 21)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 22)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 23)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 24)));
#line 943 "modules.m"
                          MR_Word parse_tree__modules__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 25)));
#line 943 "modules.m"
                          MR_String parse_tree__modules__V_229_229 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 26)));

#line 943 "modules.m"
                          {
#line 943 "modules.m"
                            parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_36)), parse_tree__modules__V_74_74);
                          }
#line 943 "modules.m"
                        }
#line 941 "modules.m"
                        if (!(parse_tree__modules__succeeded))
#line 944 "modules.m"
                          {
#line 944 "modules.m"
                            {
#line 944 "modules.m"
                              parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_36)), parse_tree__modules__ModIndirectImports0_46);
                            }
#line 944 "modules.m"
                          }
#line 941 "modules.m"
                      }
#line 941 "modules.m"
                  }
#line 941 "modules.m"
              }
#line 948 "modules.m"
            if (parse_tree__modules__succeeded)
#line 947 "modules.m"
              {
#line 947 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12;
#line 947 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_93_93 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_10;
#line 947 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_91_91 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_8;
#line 947 "modules.m"
              }
#line 948 "modules.m"
            else
#line 950 "modules.m"
              {
#line 950 "modules.m"
                MR_Word parse_tree__modules__TypeCtorInfo_291_291;
#line 950 "modules.m"
                MR_Word parse_tree__modules__ReturnTimestamp_47;
#line 950 "modules.m"
                MR_Word parse_tree__modules__MaybeTimestamp_49;
#line 950 "modules.m"
                MR_Word parse_tree__modules__ShortIntParseTree_50;
#line 950 "modules.m"
                MR_Word parse_tree__modules__ShortIntSpecs_51;
#line 950 "modules.m"
                MR_Word parse_tree__modules__ShortIntError_52;
#line 950 "modules.m"
                MR_Word parse_tree__modules__ShortIntModuleName_53;
#line 950 "modules.m"
                MR_Word parse_tree__modules__ShortIntKind_54;
#line 950 "modules.m"
                MR_Word parse_tree__modules__ShortIntContext_55;
#line 950 "modules.m"
                MR_Word parse_tree__modules__MaybeVersionNumbers_56;
#line 950 "modules.m"
                MR_Word parse_tree__modules__ShortIntIntItems_57;
#line 950 "modules.m"
                MR_Word parse_tree__modules__ShortIntImplItems_58;
#line 950 "modules.m"
                MR_Word parse_tree__modules__IntImports1_59;
#line 950 "modules.m"
                MR_Word parse_tree__modules__IntUses1_60;
#line 950 "modules.m"
                MR_Word parse_tree__modules__ImpImports1_61;
#line 950 "modules.m"
                MR_Word parse_tree__modules__ImpUses1_62;
#line 950 "modules.m"
                MR_Word parse_tree__modules__ShortIntItemBlocks_63;
#line 950 "modules.m"
                MR_Word parse_tree__modules__Statistics_64;
#line 950 "modules.m"
                MR_Word parse_tree__modules__ModIndirectImports_65;
#line 950 "modules.m"
                MR_Word parse_tree__modules__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 24)));
#line 950 "modules.m"
                MR_Word parse_tree__modules__V_78_78;
#line 950 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_83_83;
#line 950 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_84_84;
#line 950 "modules.m"
                MR_Box parse_tree__modules__V_85_85;
#line 950 "modules.m"
                MR_Box parse_tree__modules__V_86_86;
#line 950 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_87_87;
#line 950 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88;
#line 950 "modules.m"
                MR_Word parse_tree__modules__V_92_92;
#line 950 "modules.m"
                MR_Word parse_tree__modules__V_94_94;
#line 949 "modules.m"
                MR_String parse_tree__modules__V_230_230 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 0)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 1)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 2)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 3)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 4)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 5)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 6)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 7)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 8)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 9)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 10)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 11)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 12)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 13)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 14)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 15)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 16)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 17)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 18)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 19)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 20)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 21)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 22)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 23)));
#line 949 "modules.m"
                MR_Word parse_tree__modules__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 25)));
#line 949 "modules.m"
                MR_String parse_tree__modules__V_255_255 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, (MR_Integer) 26)));
#line 951 "modules.m"
                MR_Word parse_tree__modules__V_256_256;
#line 951 "modules.m"
                MR_Word parse_tree__modules__V_257_257;
#line 951 "modules.m"
                MR_String parse_tree__modules___ImportFileName_48;
#line 967 "modules.m"
                MR_Box MR_CALL (* parse_tree__modules__func_0)(MR_Box, MR_Box, MR_Box);
#line 968 "modules.m"
                MR_Box MR_CALL (* parse_tree__modules__func_1)(MR_Box, MR_Box, MR_Box);
#line 971 "modules.m"
                void MR_CALL (* parse_tree__modules__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 971 "modules.m"
                MR_Box parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_87_87;
#line 981 "modules.m"
                MR_String parse_tree__modules__V_258_258;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_259_259;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_260_260;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_261_261;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_262_262;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_263_263;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_264_264;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_266_266;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_267_267;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_268_268;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_269_269;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_270_270;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_271_271;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_272_272;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_273_273;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_274_274;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_275_275;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_276_276;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_277_277;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_278_278;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_279_279;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_280_280;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_281_281;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_282_282;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_283_283;
#line 981 "modules.m"
                MR_String parse_tree__modules__V_284_284;
#line 981 "modules.m"
                MR_Word parse_tree__modules__V_265_265;

#line 949 "modules.m"
                {
#line 949 "modules.m"
                  parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_77_77, &parse_tree__modules__ReturnTimestamp_47);
                }
#line 951 "modules.m"
                parse_tree__modules__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 0)));
#line 951 "modules.m"
                parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 1)));
#line 951 "modules.m"
                parse_tree__modules__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 2)));
#line 951 "modules.m"
                {
#line 951 "modules.m"
                  parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_1, parse_tree__modules__V_78_78, (MR_String) "Reading short interface for module", (MR_Integer) 0, parse_tree__modules__Import_36, parse_tree__modules__IntFileKind_4, &parse_tree__modules___ImportFileName_48, parse_tree__modules__ReturnTimestamp_47, &parse_tree__modules__MaybeTimestamp_49, &parse_tree__modules__ShortIntParseTree_50, &parse_tree__modules__ShortIntSpecs_51, &parse_tree__modules__ShortIntError_52);
                }
#line 956 "modules.m"
                {
#line 956 "modules.m"
                  parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Import_36, parse_tree__modules__IntFileKind_4, (MR_Integer) 0, parse_tree__modules__MaybeTimestamp_49, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_83_83);
                }
#line 959 "modules.m"
                parse_tree__modules__ShortIntModuleName_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_50, (MR_Integer) 0)));
#line 959 "modules.m"
                parse_tree__modules__ShortIntKind_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_50, (MR_Integer) 1)));
#line 959 "modules.m"
                parse_tree__modules__ShortIntContext_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_50, (MR_Integer) 2)));
#line 959 "modules.m"
                parse_tree__modules__MaybeVersionNumbers_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_50, (MR_Integer) 3)));
#line 959 "modules.m"
                parse_tree__modules__ShortIntIntItems_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_50, (MR_Integer) 4)));
#line 959 "modules.m"
                parse_tree__modules__ShortIntImplItems_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_50, (MR_Integer) 5)));
#line 962 "modules.m"
                {
#line 962 "modules.m"
                  parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(parse_tree__modules__ShortIntModuleName_53, parse_tree__modules__MaybeVersionNumbers_56, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_83_83, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_84_84);
                }
#line 964 "modules.m"
                {
#line 964 "modules.m"
                  parse_tree__get_dependencies__get_dependencies_in_items_3_p_0(parse_tree__modules__ShortIntIntItems_57, &parse_tree__modules__IntImports1_59, &parse_tree__modules__IntUses1_60);
                }
#line 965 "modules.m"
                {
#line 965 "modules.m"
                  parse_tree__get_dependencies__get_dependencies_in_items_3_p_0(parse_tree__modules__ShortIntImplItems_58, &parse_tree__modules__ImpImports1_61, &parse_tree__modules__ImpUses1_62);
                }
#line 967 "modules.m"
                parse_tree__modules__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewIntSection_5, (MR_Integer) 1)));
#line 967 "modules.m"
                {
#line 967 "modules.m"
                  parse_tree__modules__V_85_85 = parse_tree__modules__func_0(((MR_Box) parse_tree__modules__NewIntSection_5), ((MR_Box) (parse_tree__modules__Import_36)), ((MR_Box) (parse_tree__modules__ShortIntKind_54)));
                }
#line 968 "modules.m"
                parse_tree__modules__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewImpSection_6, (MR_Integer) 1)));
#line 968 "modules.m"
                {
#line 968 "modules.m"
                  parse_tree__modules__V_86_86 = parse_tree__modules__func_1(((MR_Box) parse_tree__modules__NewImpSection_6), ((MR_Box) (parse_tree__modules__Import_36)), ((MR_Box) (parse_tree__modules__ShortIntKind_54)));
                }
#line 966 "modules.m"
                {
#line 966 "modules.m"
                  parse_tree__prog_item__int_impl_items_to_specified_item_blocks_6_p_0(parse_tree__modules__TypeInfo_for_MS_285, parse_tree__modules__ShortIntContext_55, parse_tree__modules__V_85_85, parse_tree__modules__ShortIntIntItems_57, parse_tree__modules__V_86_86, parse_tree__modules__ShortIntImplItems_58, &parse_tree__modules__ShortIntItemBlocks_63);
                }
#line 971 "modules.m"
                parse_tree__modules__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__modules__SectionAppend_7, (MR_Integer) 1)));
#line 971 "modules.m"
                {
#line 971 "modules.m"
                  parse_tree__modules__func_2(((MR_Box) parse_tree__modules__SectionAppend_7), ((MR_Box) (parse_tree__modules__ShortIntItemBlocks_63)), ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ModuleAndImports_84_84)), &parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_87_87);
                }
#line 971 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_87_87 = ((MR_Word) parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_87_87);
#line 972 "modules.m"
                {
#line 972 "modules.m"
                  parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(parse_tree__modules__ShortIntSpecs_51, parse_tree__modules__ShortIntError_52, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_87_87, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88);
                }
#line 975 "modules.m"
                {
#line 975 "modules.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_1, (MR_Integer) 56, &parse_tree__modules__Statistics_64);
                }
#line 976 "modules.m"
                {
#line 976 "modules.m"
                  libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_64);
                }
#line 978 "modules.m"
                {
#line 978 "modules.m"
                  parse_tree__modules__ModIndirectImports_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 978 "modules.m"
                  MR_hl_field(MR_mktag(1), parse_tree__modules__ModIndirectImports_65, 0) = ((MR_Box) (parse_tree__modules__Import_36));
#line 978 "modules.m"
                  MR_hl_field(MR_mktag(1), parse_tree__modules__ModIndirectImports_65, 1) = ((MR_Box) (parse_tree__modules__ModIndirectImports0_46));
#line 978 "modules.m"
                }
#line 8572 "parse_tree.modules.c"
                parse_tree__modules__TypeCtorInfo_291_291 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 979 "modules.m"
                {
#line 979 "modules.m"
                  parse_tree__modules__V_92_92 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_291_291, parse_tree__modules__IntImports1_59, parse_tree__modules__IntUses1_60);
                }
#line 979 "modules.m"
                {
#line 979 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_IndirectImports_91_91 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_291_291, parse_tree__modules__STATE_VARIABLE_IndirectImports_0_8, parse_tree__modules__V_92_92);
                }
#line 980 "modules.m"
                {
#line 980 "modules.m"
                  parse_tree__modules__V_94_94 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_291_291, parse_tree__modules__ImpImports1_61, parse_tree__modules__ImpUses1_62);
                }
#line 980 "modules.m"
                {
#line 980 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_93_93 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_291_291, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_10, parse_tree__modules__V_94_94);
                }
#line 981 "modules.m"
                parse_tree__modules__V_258_258 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 0)));
#line 981 "modules.m"
                parse_tree__modules__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 1)));
#line 981 "modules.m"
                parse_tree__modules__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 2)));
#line 981 "modules.m"
                parse_tree__modules__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 3)));
#line 981 "modules.m"
                parse_tree__modules__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 4)));
#line 981 "modules.m"
                parse_tree__modules__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 5)));
#line 981 "modules.m"
                parse_tree__modules__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 6)));
#line 981 "modules.m"
                parse_tree__modules__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 7)));
#line 981 "modules.m"
                parse_tree__modules__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 8)));
#line 981 "modules.m"
                parse_tree__modules__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 9)));
#line 981 "modules.m"
                parse_tree__modules__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 10)));
#line 981 "modules.m"
                parse_tree__modules__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 11)));
#line 981 "modules.m"
                parse_tree__modules__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 12)));
#line 981 "modules.m"
                parse_tree__modules__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 13)));
#line 981 "modules.m"
                parse_tree__modules__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 14)));
#line 981 "modules.m"
                parse_tree__modules__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 15)));
#line 981 "modules.m"
                parse_tree__modules__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 16)));
#line 981 "modules.m"
                parse_tree__modules__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 17)));
#line 981 "modules.m"
                parse_tree__modules__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 18)));
#line 981 "modules.m"
                parse_tree__modules__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 19)));
#line 981 "modules.m"
                parse_tree__modules__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 20)));
#line 981 "modules.m"
                parse_tree__modules__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 21)));
#line 981 "modules.m"
                parse_tree__modules__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 22)));
#line 981 "modules.m"
                parse_tree__modules__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 23)));
#line 981 "modules.m"
                parse_tree__modules__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 24)));
#line 981 "modules.m"
                parse_tree__modules__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 25)));
#line 981 "modules.m"
                parse_tree__modules__V_284_284 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 26)));
#line 981 "modules.m"
                {
#line 981 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 0) = ((MR_Box) (parse_tree__modules__V_258_258));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 1) = ((MR_Box) (parse_tree__modules__V_259_259));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 2) = ((MR_Box) (parse_tree__modules__V_260_260));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 3) = ((MR_Box) (parse_tree__modules__V_261_261));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 4) = ((MR_Box) (parse_tree__modules__V_262_262));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 5) = ((MR_Box) (parse_tree__modules__V_263_263));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 6) = ((MR_Box) (parse_tree__modules__V_264_264));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 7) = ((MR_Box) (parse_tree__modules__ModIndirectImports_65));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 8) = ((MR_Box) (parse_tree__modules__V_266_266));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 9) = ((MR_Box) (parse_tree__modules__V_267_267));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 10) = ((MR_Box) (parse_tree__modules__V_268_268));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 11) = ((MR_Box) (parse_tree__modules__V_269_269));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 12) = ((MR_Box) (parse_tree__modules__V_270_270));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 13) = ((MR_Box) (parse_tree__modules__V_271_271));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 14) = ((MR_Box) (parse_tree__modules__V_272_272));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 15) = ((MR_Box) (parse_tree__modules__V_273_273));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 16) = ((MR_Box) (parse_tree__modules__V_274_274));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 17) = ((MR_Box) (parse_tree__modules__V_275_275));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 18) = ((MR_Box) (parse_tree__modules__V_276_276));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 19) = ((MR_Box) (parse_tree__modules__V_277_277));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 20) = ((MR_Box) (parse_tree__modules__V_278_278));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 21) = ((MR_Box) (parse_tree__modules__V_279_279));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 22) = ((MR_Box) (parse_tree__modules__V_280_280));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 23) = ((MR_Box) (parse_tree__modules__V_281_281));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 24) = ((MR_Box) (parse_tree__modules__V_282_282));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 25) = ((MR_Box) (parse_tree__modules__V_283_283));
#line 981 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, 26) = ((MR_Box) (parse_tree__modules__V_284_284));
#line 981 "modules.m"
                }
#line 950 "modules.m"
              }
#line 983 "modules.m"
            /* direct tailcall eliminated */
#line 983 "modules.m"
            {
#line 983 "modules.m"
              MR_Word parse_tree__modules__HeadVar__3__tmp_copy_3 = parse_tree__modules__Imports_37;
#line 983 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_8 = parse_tree__modules__STATE_VARIABLE_IndirectImports_91_91;
#line 983 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_10 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_93_93;
#line 983 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_12 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95;

#line 983 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_12 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_12;
#line 983 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_10 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_10;
#line 983 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_8 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_8;
#line 983 "modules.m"
              parse_tree__modules__HeadVar__3_3 = parse_tree__modules__HeadVar__3__tmp_copy_3;
#line 983 "modules.m"
            }
#line 983 "modules.m"
            continue;
#line 935 "modules.m"
          }
#line 930 "modules.m"
      }
#line 930 "modules.m"
      break;
#line 930 "modules.m"
    }
#line 209 "modules.m"
}

#line 189 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_short_interfaces_and_impls_transitively_11_p_0(
#line 189 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_33,
#line 189 "modules.m"
  MR_Word parse_tree__modules__Globals_12,
#line 189 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_13,
#line 189 "modules.m"
  MR_Word parse_tree__modules__Imports_14,
#line 189 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_15,
#line 189 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_16,
#line 189 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_17,
#line 189 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_18,
#line 189 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_24,
#line 189 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_25)
#line 189 "modules.m"
{
#line 901 "modules.m"
  while (MR_TRUE)
#line 901 "modules.m"
    {
#line 901 "modules.m"
      /* tailcall optimized into a loop */
#line 901 "modules.m"
      {
#line 901 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 901 "modules.m"
        MR_Word parse_tree__modules__ImpIndirectImports_21;
#line 901 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_29_29;

#line 902 "modules.m"
        {
#line 902 "modules.m"
          parse_tree__modules__process_module_short_interfaces_transitively_13_p_0(parse_tree__modules__TypeInfo_for_MS_33, parse_tree__modules__Globals_12, parse_tree__modules__HaveReadModuleMaps_13, parse_tree__modules__Imports_14, parse_tree__modules__IntFileKind_15, parse_tree__modules__NewIntSection_16, parse_tree__modules__NewImpSection_17, parse_tree__modules__SectionAppend_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ImpIndirectImports_21, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_24, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_29_29);
        }
#line 907 "modules.m"
        if ((parse_tree__modules__ImpIndirectImports_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 906 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_25 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_29_29;
#line 907 "modules.m"
        else
#line 909 "modules.m"
          {
#line 909 "modules.m"
            /* direct tailcall eliminated */
#line 909 "modules.m"
            {
#line 909 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_14 = parse_tree__modules__ImpIndirectImports_21;
#line 909 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_24 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_29_29;

#line 909 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_24 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_24;
#line 909 "modules.m"
              parse_tree__modules__Imports_14 = parse_tree__modules__Imports__tmp_copy_14;
#line 909 "modules.m"
            }
#line 909 "modules.m"
            continue;
#line 909 "modules.m"
          }
#line 901 "modules.m"
      }
#line 901 "modules.m"
      break;
#line 901 "modules.m"
    }
#line 189 "modules.m"
}

#line 169 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively_13_p_0(
#line 169 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_40,
#line 169 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 169 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 169 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 169 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 169 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_18,
#line 169 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_19,
#line 169 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_20,
#line 169 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_27,
#line 169 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_28,
#line 169 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_29,
#line 169 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_30)
#line 169 "modules.m"
{
#line 916 "modules.m"
  while (MR_TRUE)
#line 916 "modules.m"
    {
#line 916 "modules.m"
      /* tailcall optimized into a loop */
#line 916 "modules.m"
      {
#line 916 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 916 "modules.m"
        MR_Word parse_tree__modules__IndirectImports_24;
#line 916 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_34_34;
#line 916 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_35_35;

#line 917 "modules.m"
        {
#line 917 "modules.m"
          parse_tree__modules__process_module_short_interfaces_15_p_0(parse_tree__modules__TypeInfo_for_MS_40, parse_tree__modules__Globals_14, parse_tree__modules__HaveReadModuleMaps_15, parse_tree__modules__Imports_16, parse_tree__modules__IntFileKind_17, parse_tree__modules__NewIntSection_18, parse_tree__modules__NewImpSection_19, parse_tree__modules__SectionAppend_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IndirectImports_24, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_27, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_34_34, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_29, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_35_35);
        }
#line 922 "modules.m"
        if ((parse_tree__modules__IndirectImports_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "modules.m"
          {
#line 921 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_28 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_34_34;
#line 921 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_30 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_35_35;
#line 921 "modules.m"
          }
#line 922 "modules.m"
        else
#line 924 "modules.m"
          {
#line 924 "modules.m"
            /* direct tailcall eliminated */
#line 924 "modules.m"
            {
#line 924 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_16 = parse_tree__modules__IndirectImports_24;
#line 924 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_27 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_34_34;
#line 924 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_29 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_35_35;

#line 924 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_29 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_29;
#line 924 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_27 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_27;
#line 924 "modules.m"
              parse_tree__modules__Imports_16 = parse_tree__modules__Imports__tmp_copy_16;
#line 924 "modules.m"
            }
#line 924 "modules.m"
            continue;
#line 924 "modules.m"
          }
#line 916 "modules.m"
      }
#line 916 "modules.m"
      break;
#line 916 "modules.m"
    }
#line 169 "modules.m"
}

#line 147 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_long_interfaces_16_p_0(
#line 147 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_263,
#line 147 "modules.m"
  MR_Word parse_tree__modules__Globals_1,
#line 147 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_2,
#line 147 "modules.m"
  MR_Word parse_tree__modules__NeedQualifier_3,
#line 147 "modules.m"
  MR_Word parse_tree__modules__HeadVar__4_4,
#line 147 "modules.m"
  MR_Word parse_tree__modules__HeadVar__5_5,
#line 147 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_6,
#line 147 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_7,
#line 147 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_8,
#line 147 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_9,
#line 147 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_10,
#line 147 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_11,
#line 147 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_12,
#line 147 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13,
#line 147 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_14)
#line 147 "modules.m"
{
#line 830 "modules.m"
  while (MR_TRUE)
#line 830 "modules.m"
    {
#line 830 "modules.m"
      /* tailcall optimized into a loop */
#line 830 "modules.m"
      {
#line 830 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 830 "modules.m"
        if ((parse_tree__modules__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 830 "modules.m"
          {
#line 831 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_14 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13;
#line 831 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_12 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_11;
#line 831 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_10 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_9;
#line 830 "modules.m"
          }
#line 830 "modules.m"
        else
#line 835 "modules.m"
          {
#line 835 "modules.m"
            MR_Word parse_tree__modules__Import_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__4_4, (MR_Integer) 0)));
#line 835 "modules.m"
            MR_Word parse_tree__modules__Imports_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__4_4, (MR_Integer) 1)));
#line 835 "modules.m"
            MR_Word parse_tree__modules__ModuleName_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 2)));
#line 835 "modules.m"
            MR_Word parse_tree__modules__ModImplementationImports0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 6)));
#line 835 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_95_95;
#line 835 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_97_97;
#line 835 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99;
#line 836 "modules.m"
            MR_String parse_tree__modules__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 0)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 1)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 3)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 4)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 5)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 7)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 8)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 9)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 10)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 11)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 12)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 13)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 14)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 15)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 16)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 17)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 18)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 19)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 20)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 21)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 22)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 23)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 24)));
#line 836 "modules.m"
            MR_Word parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 25)));
#line 836 "modules.m"
            MR_String parse_tree__modules__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 26)));

#line 840 "modules.m"
            {
#line 840 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__Import_39, parse_tree__modules__ModuleName_49);
            }
#line 841 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 841 "modules.m"
              {
#line 841 "modules.m"
                {
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 4)));
#line 841 "modules.m"
                  MR_String parse_tree__modules__V_156_156 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 0)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 1)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 2)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 3)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 5)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 6)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 7)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 8)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 9)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 10)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 11)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 12)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 13)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 14)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 15)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 16)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 17)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 18)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 19)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 20)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 21)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 22)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 23)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 24)));
#line 841 "modules.m"
                  MR_Word parse_tree__modules__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 25)));
#line 841 "modules.m"
                  MR_String parse_tree__modules__V_181_181 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 26)));

#line 841 "modules.m"
                  {
#line 841 "modules.m"
                    parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_39)), parse_tree__modules__V_80_80);
                  }
#line 841 "modules.m"
                }
#line 841 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 841 "modules.m"
                  {
#line 842 "modules.m"
                    {
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 5)));
#line 842 "modules.m"
                      MR_String parse_tree__modules__V_182_182 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 0)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 1)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 2)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 3)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 4)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 6)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 7)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 8)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 9)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 10)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 11)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 12)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 13)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 14)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 15)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 16)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 17)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 18)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 19)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 20)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 21)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 22)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 23)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 24)));
#line 842 "modules.m"
                      MR_Word parse_tree__modules__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 25)));
#line 842 "modules.m"
                      MR_String parse_tree__modules__V_207_207 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 26)));

#line 842 "modules.m"
                      {
#line 842 "modules.m"
                        parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_39)), parse_tree__modules__V_79_79);
                      }
#line 842 "modules.m"
                    }
#line 841 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 843 "modules.m"
                      {
#line 843 "modules.m"
                        {
#line 843 "modules.m"
                          parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Import_39)), parse_tree__modules__ModImplementationImports0_50);
                        }
#line 843 "modules.m"
                      }
#line 841 "modules.m"
                  }
#line 841 "modules.m"
              }
#line 847 "modules.m"
            if (parse_tree__modules__succeeded)
#line 846 "modules.m"
              {
#line 846 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13;
#line 846 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_97_97 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_11;
#line 846 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_95_95 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_9;
#line 846 "modules.m"
              }
#line 847 "modules.m"
            else
#line 849 "modules.m"
              {
#line 849 "modules.m"
                MR_Word parse_tree__modules__TypeCtorInfo_268_268;
#line 849 "modules.m"
                MR_Word parse_tree__modules__TypeCtorInfo_269_269;
#line 849 "modules.m"
                MR_Word parse_tree__modules__ReturnTimestamp_51;
#line 849 "modules.m"
                MR_Word parse_tree__modules__MaybeTimestamp_53;
#line 849 "modules.m"
                MR_Word parse_tree__modules__LongIntParseTree_54;
#line 849 "modules.m"
                MR_Word parse_tree__modules__LongIntSpecs_55;
#line 849 "modules.m"
                MR_Word parse_tree__modules__LongIntErrors_56;
#line 849 "modules.m"
                MR_Word parse_tree__modules__LongIntModuleName_57;
#line 849 "modules.m"
                MR_Word parse_tree__modules__LongIntKind_58;
#line 849 "modules.m"
                MR_Word parse_tree__modules__LongIntContext_59;
#line 849 "modules.m"
                MR_Word parse_tree__modules__MaybeVersionNumbers_60;
#line 849 "modules.m"
                MR_Word parse_tree__modules__LongIntIntItems_61;
#line 849 "modules.m"
                MR_Word parse_tree__modules__LongIntImplItems_62;
#line 849 "modules.m"
                MR_Word parse_tree__modules__IndirectImports1_63;
#line 849 "modules.m"
                MR_Word parse_tree__modules__IndirectUses1_64;
#line 849 "modules.m"
                MR_Word parse_tree__modules__ImpIndirectImports1_65;
#line 849 "modules.m"
                MR_Word parse_tree__modules__ImpIndirectUses1_66;
#line 849 "modules.m"
                MR_Word parse_tree__modules__LongIntItemBlocks_67;
#line 849 "modules.m"
                MR_Word parse_tree__modules__Statistics_68;
#line 849 "modules.m"
                MR_Word parse_tree__modules__FatalLongIntErrors_69;
#line 849 "modules.m"
                MR_Word parse_tree__modules__ModImplementationImports_70;
#line 849 "modules.m"
                MR_Word parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 24)));
#line 849 "modules.m"
                MR_Word parse_tree__modules__V_82_82;
#line 849 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_86_86;
#line 849 "modules.m"
                MR_Box parse_tree__modules__V_87_87;
#line 849 "modules.m"
                MR_Box parse_tree__modules__V_88_88;
#line 849 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89;
#line 849 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_90_90;
#line 849 "modules.m"
                MR_Word parse_tree__modules__V_93_93;
#line 849 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94;
#line 849 "modules.m"
                MR_Word parse_tree__modules__V_96_96;
#line 849 "modules.m"
                MR_Word parse_tree__modules__V_98_98;
#line 848 "modules.m"
                MR_String parse_tree__modules__V_208_208 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 0)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 1)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 2)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 3)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 4)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 5)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 6)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 7)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 8)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 9)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 10)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 11)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 12)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 13)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 14)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 15)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 16)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 17)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 18)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 19)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 20)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 21)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 22)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 23)));
#line 848 "modules.m"
                MR_Word parse_tree__modules__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 25)));
#line 848 "modules.m"
                MR_String parse_tree__modules__V_233_233 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, (MR_Integer) 26)));
#line 850 "modules.m"
                MR_Word parse_tree__modules__V_234_234;
#line 850 "modules.m"
                MR_Word parse_tree__modules__V_235_235;
#line 850 "modules.m"
                MR_String parse_tree__modules___LongIntFileName_52;
#line 866 "modules.m"
                MR_Box MR_CALL (* parse_tree__modules__func_0)(MR_Box, MR_Box, MR_Box);
#line 867 "modules.m"
                MR_Box MR_CALL (* parse_tree__modules__func_1)(MR_Box, MR_Box, MR_Box);
#line 870 "modules.m"
                void MR_CALL (* parse_tree__modules__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 870 "modules.m"
                MR_Box parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_89_89;
#line 890 "modules.m"
                MR_String parse_tree__modules__V_236_236;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_237_237;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_238_238;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_239_239;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_240_240;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_241_241;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_243_243;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_244_244;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_245_245;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_246_246;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_247_247;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_248_248;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_249_249;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_250_250;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_251_251;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_252_252;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_253_253;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_254_254;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_255_255;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_256_256;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_257_257;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_258_258;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_259_259;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_260_260;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_261_261;
#line 890 "modules.m"
                MR_String parse_tree__modules__V_262_262;
#line 890 "modules.m"
                MR_Word parse_tree__modules__V_242_242;

#line 848 "modules.m"
                {
#line 848 "modules.m"
                  parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_81_81, &parse_tree__modules__ReturnTimestamp_51);
                }
#line 850 "modules.m"
                parse_tree__modules__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 0)));
#line 850 "modules.m"
                parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 1)));
#line 850 "modules.m"
                parse_tree__modules__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 2)));
#line 850 "modules.m"
                {
#line 850 "modules.m"
                  parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_1, parse_tree__modules__V_82_82, (MR_String) "Reading interface for module", (MR_Integer) 0, parse_tree__modules__Import_39, parse_tree__modules__HeadVar__5_5, &parse_tree__modules___LongIntFileName_52, parse_tree__modules__ReturnTimestamp_51, &parse_tree__modules__MaybeTimestamp_53, &parse_tree__modules__LongIntParseTree_54, &parse_tree__modules__LongIntSpecs_55, &parse_tree__modules__LongIntErrors_56);
                }
#line 856 "modules.m"
                parse_tree__modules__LongIntModuleName_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_54, (MR_Integer) 0)));
#line 856 "modules.m"
                parse_tree__modules__LongIntKind_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_54, (MR_Integer) 1)));
#line 856 "modules.m"
                parse_tree__modules__LongIntContext_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_54, (MR_Integer) 2)));
#line 856 "modules.m"
                parse_tree__modules__MaybeVersionNumbers_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_54, (MR_Integer) 3)));
#line 856 "modules.m"
                parse_tree__modules__LongIntIntItems_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_54, (MR_Integer) 4)));
#line 856 "modules.m"
                parse_tree__modules__LongIntImplItems_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_54, (MR_Integer) 5)));
#line 859 "modules.m"
                {
#line 859 "modules.m"
                  parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(parse_tree__modules__LongIntModuleName_57, parse_tree__modules__MaybeVersionNumbers_60, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_86_86);
                }
#line 861 "modules.m"
                {
#line 861 "modules.m"
                  parse_tree__get_dependencies__get_dependencies_in_items_3_p_0(parse_tree__modules__LongIntIntItems_61, &parse_tree__modules__IndirectImports1_63, &parse_tree__modules__IndirectUses1_64);
                }
#line 863 "modules.m"
                {
#line 863 "modules.m"
                  parse_tree__get_dependencies__get_dependencies_in_items_3_p_0(parse_tree__modules__LongIntImplItems_62, &parse_tree__modules__ImpIndirectImports1_65, &parse_tree__modules__ImpIndirectUses1_66);
                }
#line 866 "modules.m"
                parse_tree__modules__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewIntSection_6, (MR_Integer) 1)));
#line 866 "modules.m"
                {
#line 866 "modules.m"
                  parse_tree__modules__V_87_87 = parse_tree__modules__func_0(((MR_Box) parse_tree__modules__NewIntSection_6), ((MR_Box) (parse_tree__modules__Import_39)), ((MR_Box) (parse_tree__modules__LongIntKind_58)));
                }
#line 867 "modules.m"
                parse_tree__modules__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewImpSection_7, (MR_Integer) 1)));
#line 867 "modules.m"
                {
#line 867 "modules.m"
                  parse_tree__modules__V_88_88 = parse_tree__modules__func_1(((MR_Box) parse_tree__modules__NewImpSection_7), ((MR_Box) (parse_tree__modules__Import_39)), ((MR_Box) (parse_tree__modules__LongIntKind_58)));
                }
#line 865 "modules.m"
                {
#line 865 "modules.m"
                  parse_tree__prog_item__int_impl_items_to_specified_item_blocks_6_p_0(parse_tree__modules__TypeInfo_for_MS_263, parse_tree__modules__LongIntContext_59, parse_tree__modules__V_87_87, parse_tree__modules__LongIntIntItems_61, parse_tree__modules__V_88_88, parse_tree__modules__LongIntImplItems_62, &parse_tree__modules__LongIntItemBlocks_67);
                }
#line 870 "modules.m"
                parse_tree__modules__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__modules__SectionAppend_8, (MR_Integer) 1)));
#line 870 "modules.m"
                {
#line 870 "modules.m"
                  parse_tree__modules__func_2(((MR_Box) parse_tree__modules__SectionAppend_8), ((MR_Box) (parse_tree__modules__LongIntItemBlocks_67)), ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ModuleAndImports_86_86)), &parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_89_89);
                }
#line 870 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89 = ((MR_Word) parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_89_89);
#line 871 "modules.m"
                {
#line 871 "modules.m"
                  parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(parse_tree__modules__LongIntSpecs_55, parse_tree__modules__LongIntErrors_56, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_89_89, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_90_90);
                }
#line 874 "modules.m"
                {
#line 874 "modules.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_1, (MR_Integer) 56, &parse_tree__modules__Statistics_68);
                }
#line 875 "modules.m"
                {
#line 875 "modules.m"
                  libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_68);
                }
#line 877 "modules.m"
                {
#line 877 "modules.m"
                  parse_tree__modules__V_93_93 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
                }
#line 9499 "parse_tree.modules.c"
                parse_tree__modules__TypeCtorInfo_268_268 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 877 "modules.m"
                {
#line 877 "modules.m"
                  mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_268_268, parse_tree__modules__LongIntErrors_56, parse_tree__modules__V_93_93, &parse_tree__modules__FatalLongIntErrors_69);
                }
#line 879 "modules.m"
                {
#line 879 "modules.m"
                  parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_268_268, parse_tree__modules__FatalLongIntErrors_69);
                }
#line 883 "modules.m"
                if (parse_tree__modules__succeeded)
#line 881 "modules.m"
                  {
#line 880 "modules.m"
                    {
#line 880 "modules.m"
                      parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Import_39, parse_tree__modules__HeadVar__5_5, parse_tree__modules__NeedQualifier_3, parse_tree__modules__MaybeTimestamp_53, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_90_90, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94);
                    }
#line 882 "modules.m"
                    {
#line 882 "modules.m"
                      parse_tree__modules__ModImplementationImports_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 882 "modules.m"
                      MR_hl_field(MR_mktag(1), parse_tree__modules__ModImplementationImports_70, 0) = ((MR_Box) (parse_tree__modules__Import_39));
#line 882 "modules.m"
                      MR_hl_field(MR_mktag(1), parse_tree__modules__ModImplementationImports_70, 1) = ((MR_Box) (parse_tree__modules__ModImplementationImports0_50));
#line 882 "modules.m"
                    }
#line 881 "modules.m"
                  }
#line 883 "modules.m"
                else
#line 884 "modules.m"
                  {
#line 884 "modules.m"
                    parse_tree__modules__ModImplementationImports_70 = parse_tree__modules__ModImplementationImports0_50;
#line 884 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_90_90;
#line 884 "modules.m"
                  }
#line 9542 "parse_tree.modules.c"
                parse_tree__modules__TypeCtorInfo_269_269 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 887 "modules.m"
                {
#line 887 "modules.m"
                  parse_tree__modules__V_96_96 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_269_269, parse_tree__modules__IndirectImports1_63, parse_tree__modules__IndirectUses1_64);
                }
#line 886 "modules.m"
                {
#line 886 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_IndirectImports_95_95 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_269_269, parse_tree__modules__STATE_VARIABLE_IndirectImports_0_9, parse_tree__modules__V_96_96);
                }
#line 889 "modules.m"
                {
#line 889 "modules.m"
                  parse_tree__modules__V_98_98 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_269_269, parse_tree__modules__ImpIndirectImports1_65, parse_tree__modules__ImpIndirectUses1_66);
                }
#line 889 "modules.m"
                {
#line 889 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_97_97 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_269_269, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_11, parse_tree__modules__V_98_98);
                }
#line 890 "modules.m"
                parse_tree__modules__V_236_236 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 0)));
#line 890 "modules.m"
                parse_tree__modules__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 1)));
#line 890 "modules.m"
                parse_tree__modules__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 2)));
#line 890 "modules.m"
                parse_tree__modules__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 3)));
#line 890 "modules.m"
                parse_tree__modules__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 4)));
#line 890 "modules.m"
                parse_tree__modules__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 5)));
#line 890 "modules.m"
                parse_tree__modules__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 6)));
#line 890 "modules.m"
                parse_tree__modules__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 7)));
#line 890 "modules.m"
                parse_tree__modules__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 8)));
#line 890 "modules.m"
                parse_tree__modules__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 9)));
#line 890 "modules.m"
                parse_tree__modules__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 10)));
#line 890 "modules.m"
                parse_tree__modules__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 11)));
#line 890 "modules.m"
                parse_tree__modules__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 12)));
#line 890 "modules.m"
                parse_tree__modules__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 13)));
#line 890 "modules.m"
                parse_tree__modules__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 14)));
#line 890 "modules.m"
                parse_tree__modules__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 15)));
#line 890 "modules.m"
                parse_tree__modules__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 16)));
#line 890 "modules.m"
                parse_tree__modules__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 17)));
#line 890 "modules.m"
                parse_tree__modules__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 18)));
#line 890 "modules.m"
                parse_tree__modules__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 19)));
#line 890 "modules.m"
                parse_tree__modules__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 20)));
#line 890 "modules.m"
                parse_tree__modules__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 21)));
#line 890 "modules.m"
                parse_tree__modules__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 22)));
#line 890 "modules.m"
                parse_tree__modules__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 23)));
#line 890 "modules.m"
                parse_tree__modules__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 24)));
#line 890 "modules.m"
                parse_tree__modules__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 25)));
#line 890 "modules.m"
                parse_tree__modules__V_262_262 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, (MR_Integer) 26)));
#line 890 "modules.m"
                {
#line 890 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 0) = ((MR_Box) (parse_tree__modules__V_236_236));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 1) = ((MR_Box) (parse_tree__modules__V_237_237));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 2) = ((MR_Box) (parse_tree__modules__V_238_238));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 3) = ((MR_Box) (parse_tree__modules__V_239_239));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 4) = ((MR_Box) (parse_tree__modules__V_240_240));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 5) = ((MR_Box) (parse_tree__modules__V_241_241));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 6) = ((MR_Box) (parse_tree__modules__ModImplementationImports_70));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 7) = ((MR_Box) (parse_tree__modules__V_243_243));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 8) = ((MR_Box) (parse_tree__modules__V_244_244));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 9) = ((MR_Box) (parse_tree__modules__V_245_245));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 10) = ((MR_Box) (parse_tree__modules__V_246_246));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 11) = ((MR_Box) (parse_tree__modules__V_247_247));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 12) = ((MR_Box) (parse_tree__modules__V_248_248));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 13) = ((MR_Box) (parse_tree__modules__V_249_249));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 14) = ((MR_Box) (parse_tree__modules__V_250_250));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 15) = ((MR_Box) (parse_tree__modules__V_251_251));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 16) = ((MR_Box) (parse_tree__modules__V_252_252));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 17) = ((MR_Box) (parse_tree__modules__V_253_253));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 18) = ((MR_Box) (parse_tree__modules__V_254_254));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 19) = ((MR_Box) (parse_tree__modules__V_255_255));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 20) = ((MR_Box) (parse_tree__modules__V_256_256));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 21) = ((MR_Box) (parse_tree__modules__V_257_257));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 22) = ((MR_Box) (parse_tree__modules__V_258_258));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 23) = ((MR_Box) (parse_tree__modules__V_259_259));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 24) = ((MR_Box) (parse_tree__modules__V_260_260));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 25) = ((MR_Box) (parse_tree__modules__V_261_261));
#line 890 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99, 26) = ((MR_Box) (parse_tree__modules__V_262_262));
#line 890 "modules.m"
                }
#line 849 "modules.m"
              }
#line 892 "modules.m"
            /* direct tailcall eliminated */
#line 892 "modules.m"
            {
#line 892 "modules.m"
              MR_Word parse_tree__modules__HeadVar__4__tmp_copy_4 = parse_tree__modules__Imports_40;
#line 892 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_9 = parse_tree__modules__STATE_VARIABLE_IndirectImports_95_95;
#line 892 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_11 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_97_97;
#line 892 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_13 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_99_99;

#line 892 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_13 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_13;
#line 892 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_11 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_11;
#line 892 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_9 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_9;
#line 892 "modules.m"
              parse_tree__modules__HeadVar__4_4 = parse_tree__modules__HeadVar__4__tmp_copy_4;
#line 892 "modules.m"
            }
#line 892 "modules.m"
            continue;
#line 835 "modules.m"
          }
#line 830 "modules.m"
      }
#line 830 "modules.m"
      break;
#line 830 "modules.m"
    }
#line 147 "modules.m"
}

#line 774 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__process_module_private_interfaces_14_p_0_1(
#line 774 "modules.m"
  MR_Box parse_tree__modules__closure_arg)
#line 774 "modules.m"
{
#line 774 "modules.m"
  {
#line 774 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 774 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;

#line 774 "modules.m"
    {
#line 774 "modules.m"
      return parse_tree__modules__succeeded = parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__774__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))));
    }
#line 774 "modules.m"
    return parse_tree__modules__succeeded;
#line 774 "modules.m"
  }
#line 774 "modules.m"
}

#line 123 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_private_interfaces_14_p_0(
#line 123 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_206,
#line 123 "modules.m"
  MR_Word parse_tree__modules__Globals_1,
#line 123 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_2,
#line 123 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3,
#line 123 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_4,
#line 123 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_5,
#line 123 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_6,
#line 123 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_7,
#line 123 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_8,
#line 123 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_9,
#line 123 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_10,
#line 123 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11,
#line 123 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_12)
#line 123 "modules.m"
{
#line 768 "modules.m"
  while (MR_TRUE)
#line 768 "modules.m"
    {
#line 768 "modules.m"
      /* tailcall optimized into a loop */
#line 768 "modules.m"
      {
#line 768 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 768 "modules.m"
        if ((parse_tree__modules__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 768 "modules.m"
          {
#line 769 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_12 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11;
#line 769 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_DirectUses_10 = parse_tree__modules__STATE_VARIABLE_DirectUses_0_9;
#line 769 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_DirectImports_8 = parse_tree__modules__STATE_VARIABLE_DirectImports_0_7;
#line 768 "modules.m"
          }
#line 768 "modules.m"
        else
#line 772 "modules.m"
          {
#line 772 "modules.m"
            MR_Word parse_tree__modules__Ancestor_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 0)));
#line 772 "modules.m"
            MR_Word parse_tree__modules__Ancestors_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 1)));
#line 772 "modules.m"
            MR_Word parse_tree__modules__ModuleName_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2)));
#line 772 "modules.m"
            MR_Word parse_tree__modules__ModAncestors0_44;
#line 772 "modules.m"
            MR_Word parse_tree__modules__V_71_71;
#line 772 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_92_92;
#line 772 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_93_93;
#line 772 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94;
#line 773 "modules.m"
            MR_String parse_tree__modules__V_99_99 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 9)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 10)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 11)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 12)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 13)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 14)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 15)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 16)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 17)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 18)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 19)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 20)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 21)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 22)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 23)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 24)));
#line 773 "modules.m"
            MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 25)));
#line 773 "modules.m"
            MR_String parse_tree__modules__V_124_124 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 26)));
#line 776 "modules.m"
            MR_String parse_tree__modules__V_125_125;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_126_126;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_127_127;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_128_128;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_129_129;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_130_130;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_131_131;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_132_132;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_133_133;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_134_134;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_135_135;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_136_136;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_137_137;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_138_138;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_139_139;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_140_140;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_141_141;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_142_142;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_143_143;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_144_144;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_145_145;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_146_146;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_147_147;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_148_148;
#line 776 "modules.m"
            MR_Word parse_tree__modules__V_149_149;
#line 776 "modules.m"
            MR_String parse_tree__modules__V_150_150;

#line 774 "modules.m"
            {
#line 774 "modules.m"
              parse_tree__modules__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 774 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_71_71, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_6[0]));
#line 774 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_71_71, 1) = ((MR_Box) (parse_tree__modules__process_module_private_interfaces_14_p_0_1));
#line 774 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 774 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_71_71, 3) = ((MR_Box) (parse_tree__modules__Ancestor_34));
#line 774 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_71_71, 4) = ((MR_Box) (parse_tree__modules__ModuleName_43));
#line 774 "modules.m"
            }
#line 774 "modules.m"
            {
#line 774 "modules.m"
              mercury__require__expect_not_4_p_0(parse_tree__modules__V_71_71, (MR_String) "parse_tree.modules", (MR_String) "predicate \140parse_tree.modules.process_module_private_interfaces\'/14", (MR_String) "module is its own ancestor\?");
            }
#line 776 "modules.m"
            parse_tree__modules__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0)));
#line 776 "modules.m"
            parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1)));
#line 776 "modules.m"
            parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2)));
#line 776 "modules.m"
            parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3)));
#line 776 "modules.m"
            parse_tree__modules__ModAncestors0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4)));
#line 776 "modules.m"
            parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5)));
#line 776 "modules.m"
            parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6)));
#line 776 "modules.m"
            parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7)));
#line 776 "modules.m"
            parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8)));
#line 776 "modules.m"
            parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 9)));
#line 776 "modules.m"
            parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 10)));
#line 776 "modules.m"
            parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 11)));
#line 776 "modules.m"
            parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 12)));
#line 776 "modules.m"
            parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 13)));
#line 776 "modules.m"
            parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 14)));
#line 776 "modules.m"
            parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 15)));
#line 776 "modules.m"
            parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 16)));
#line 776 "modules.m"
            parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 17)));
#line 776 "modules.m"
            parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 18)));
#line 776 "modules.m"
            parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 19)));
#line 776 "modules.m"
            parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 20)));
#line 776 "modules.m"
            parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 21)));
#line 776 "modules.m"
            parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 22)));
#line 776 "modules.m"
            parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 23)));
#line 776 "modules.m"
            parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 24)));
#line 776 "modules.m"
            parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 25)));
#line 776 "modules.m"
            parse_tree__modules__V_150_150 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 26)));
#line 777 "modules.m"
            {
#line 777 "modules.m"
              parse_tree__modules__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__Ancestor_34)), parse_tree__modules__ModAncestors0_44);
            }
#line 780 "modules.m"
            if (parse_tree__modules__succeeded)
#line 779 "modules.m"
              {
#line 779 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11;
#line 779 "modules.m"
                parse_tree__modules__STATE_VARIABLE_DirectUses_93_93 = parse_tree__modules__STATE_VARIABLE_DirectUses_0_9;
#line 779 "modules.m"
                parse_tree__modules__STATE_VARIABLE_DirectImports_92_92 = parse_tree__modules__STATE_VARIABLE_DirectImports_0_7;
#line 779 "modules.m"
              }
#line 780 "modules.m"
            else
#line 782 "modules.m"
              {
#line 782 "modules.m"
                MR_Word parse_tree__modules__TypeCtorInfo_210_210;
#line 782 "modules.m"
                MR_Word parse_tree__modules__TypeCtorInfo_211_211;
#line 782 "modules.m"
                MR_Word parse_tree__modules__ReturnTimestamp_45;
#line 782 "modules.m"
                MR_Word parse_tree__modules__MaybeTimestamp_47;
#line 782 "modules.m"
                MR_Word parse_tree__modules__PrivateIntParseTree_48;
#line 782 "modules.m"
                MR_Word parse_tree__modules__PrivateIntSpecs_49;
#line 782 "modules.m"
                MR_Word parse_tree__modules__PrivateIntErrors_50;
#line 782 "modules.m"
                MR_Word parse_tree__modules__PrivateIntModuleName_51;
#line 782 "modules.m"
                MR_Word parse_tree__modules__PrivateIntKind_52;
#line 782 "modules.m"
                MR_Word parse_tree__modules__PrivateIntContext_53;
#line 782 "modules.m"
                MR_Word parse_tree__modules__MaybeVersionNumbers_54;
#line 782 "modules.m"
                MR_Word parse_tree__modules__PrivateIntIntItems_55;
#line 782 "modules.m"
                MR_Word parse_tree__modules__PrivateIntImplItems_56;
#line 782 "modules.m"
                MR_Word parse_tree__modules__PrivateIntItemBlocks_57;
#line 782 "modules.m"
                MR_Word parse_tree__modules__Statistics_58;
#line 782 "modules.m"
                MR_Word parse_tree__modules__FatalPrivateIntErrors_59;
#line 782 "modules.m"
                MR_Word parse_tree__modules__ModAncestors_60;
#line 782 "modules.m"
                MR_Word parse_tree__modules__AncDirectImports_61;
#line 782 "modules.m"
                MR_Word parse_tree__modules__AncDirectUses_62;
#line 782 "modules.m"
                MR_Word parse_tree__modules__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 24)));
#line 782 "modules.m"
                MR_Word parse_tree__modules__V_76_76;
#line 782 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_83_83;
#line 782 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_84_84;
#line 782 "modules.m"
                MR_Box parse_tree__modules__V_85_85;
#line 782 "modules.m"
                MR_Box parse_tree__modules__V_86_86;
#line 782 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_87_87;
#line 782 "modules.m"
                MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88;
#line 782 "modules.m"
                MR_Word parse_tree__modules__V_91_91;
#line 781 "modules.m"
                MR_String parse_tree__modules__V_151_151 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 0)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 1)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 2)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 3)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 4)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 5)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 6)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 7)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 8)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 9)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 10)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 11)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 12)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 13)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 14)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 15)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 16)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 17)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 18)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 19)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 20)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 21)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 22)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 23)));
#line 781 "modules.m"
                MR_Word parse_tree__modules__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 25)));
#line 781 "modules.m"
                MR_String parse_tree__modules__V_176_176 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, (MR_Integer) 26)));
#line 783 "modules.m"
                MR_Word parse_tree__modules__V_177_177;
#line 783 "modules.m"
                MR_Word parse_tree__modules__V_178_178;
#line 783 "modules.m"
                MR_String parse_tree__modules___AncestorFileName_46;
#line 798 "modules.m"
                MR_Box MR_CALL (* parse_tree__modules__func_0)(MR_Box, MR_Box, MR_Box);
#line 800 "modules.m"
                MR_Box MR_CALL (* parse_tree__modules__func_1)(MR_Box, MR_Box, MR_Box);
#line 804 "modules.m"
                void MR_CALL (* parse_tree__modules__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 804 "modules.m"
                MR_Box parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_87_87;
#line 822 "modules.m"
                MR_String parse_tree__modules__V_179_179;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_180_180;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_181_181;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_182_182;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_184_184;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_185_185;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_186_186;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_187_187;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_188_188;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_189_189;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_190_190;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_191_191;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_192_192;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_193_193;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_194_194;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_195_195;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_196_196;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_197_197;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_198_198;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_199_199;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_200_200;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_201_201;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_202_202;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_203_203;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_204_204;
#line 822 "modules.m"
                MR_String parse_tree__modules__V_205_205;
#line 822 "modules.m"
                MR_Word parse_tree__modules__V_183_183;

#line 781 "modules.m"
                {
#line 781 "modules.m"
                  parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_75_75, &parse_tree__modules__ReturnTimestamp_45);
                }
#line 783 "modules.m"
                parse_tree__modules__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 0)));
#line 783 "modules.m"
                parse_tree__modules__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 1)));
#line 783 "modules.m"
                parse_tree__modules__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_2, (MR_Integer) 2)));
#line 783 "modules.m"
                {
#line 783 "modules.m"
                  parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_1, parse_tree__modules__V_76_76, (MR_String) "Reading private interface for module", (MR_Integer) 0, parse_tree__modules__Ancestor_34, (MR_Integer) 0, &parse_tree__modules___AncestorFileName_46, parse_tree__modules__ReturnTimestamp_45, &parse_tree__modules__MaybeTimestamp_47, &parse_tree__modules__PrivateIntParseTree_48, &parse_tree__modules__PrivateIntSpecs_49, &parse_tree__modules__PrivateIntErrors_50);
                }
#line 789 "modules.m"
                {
#line 789 "modules.m"
                  parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Ancestor_34, (MR_Integer) 0, (MR_Integer) 1, parse_tree__modules__MaybeTimestamp_47, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_83_83);
                }
#line 792 "modules.m"
                parse_tree__modules__PrivateIntModuleName_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_48, (MR_Integer) 0)));
#line 792 "modules.m"
                parse_tree__modules__PrivateIntKind_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_48, (MR_Integer) 1)));
#line 792 "modules.m"
                parse_tree__modules__PrivateIntContext_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_48, (MR_Integer) 2)));
#line 792 "modules.m"
                parse_tree__modules__MaybeVersionNumbers_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_48, (MR_Integer) 3)));
#line 792 "modules.m"
                parse_tree__modules__PrivateIntIntItems_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_48, (MR_Integer) 4)));
#line 792 "modules.m"
                parse_tree__modules__PrivateIntImplItems_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_48, (MR_Integer) 5)));
#line 795 "modules.m"
                {
#line 795 "modules.m"
                  parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(parse_tree__modules__PrivateIntModuleName_51, parse_tree__modules__MaybeVersionNumbers_54, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_83_83, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_84_84);
                }
#line 798 "modules.m"
                parse_tree__modules__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewIntSection_4, (MR_Integer) 1)));
#line 798 "modules.m"
                {
#line 798 "modules.m"
                  parse_tree__modules__V_85_85 = parse_tree__modules__func_0(((MR_Box) parse_tree__modules__NewIntSection_4), ((MR_Box) (parse_tree__modules__Ancestor_34)), ((MR_Box) (parse_tree__modules__PrivateIntKind_52)));
                }
#line 800 "modules.m"
                parse_tree__modules__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewImpSection_5, (MR_Integer) 1)));
#line 800 "modules.m"
                {
#line 800 "modules.m"
                  parse_tree__modules__V_86_86 = parse_tree__modules__func_1(((MR_Box) parse_tree__modules__NewImpSection_5), ((MR_Box) (parse_tree__modules__Ancestor_34)), ((MR_Box) (parse_tree__modules__PrivateIntKind_52)));
                }
#line 797 "modules.m"
                {
#line 797 "modules.m"
                  parse_tree__prog_item__int_impl_items_to_specified_item_blocks_6_p_0(parse_tree__modules__TypeInfo_for_MS_206, parse_tree__modules__PrivateIntContext_53, parse_tree__modules__V_85_85, parse_tree__modules__PrivateIntIntItems_55, parse_tree__modules__V_86_86, parse_tree__modules__PrivateIntImplItems_56, &parse_tree__modules__PrivateIntItemBlocks_57);
                }
#line 804 "modules.m"
                parse_tree__modules__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__modules__SectionAppend_6, (MR_Integer) 1)));
#line 804 "modules.m"
                {
#line 804 "modules.m"
                  parse_tree__modules__func_2(((MR_Box) parse_tree__modules__SectionAppend_6), ((MR_Box) (parse_tree__modules__PrivateIntItemBlocks_57)), ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ModuleAndImports_84_84)), &parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_87_87);
                }
#line 804 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_87_87 = ((MR_Word) parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_87_87);
#line 805 "modules.m"
                {
#line 805 "modules.m"
                  parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(parse_tree__modules__PrivateIntSpecs_49, parse_tree__modules__PrivateIntErrors_50, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_87_87, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88);
                }
#line 808 "modules.m"
                {
#line 808 "modules.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_1, (MR_Integer) 56, &parse_tree__modules__Statistics_58);
                }
#line 809 "modules.m"
                {
#line 809 "modules.m"
                  libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_58);
                }
#line 811 "modules.m"
                {
#line 811 "modules.m"
                  parse_tree__modules__V_91_91 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
                }
#line 10280 "parse_tree.modules.c"
                parse_tree__modules__TypeCtorInfo_210_210 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 811 "modules.m"
                {
#line 811 "modules.m"
                  mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_210_210, parse_tree__modules__PrivateIntErrors_50, parse_tree__modules__V_91_91, &parse_tree__modules__FatalPrivateIntErrors_59);
                }
#line 813 "modules.m"
                {
#line 813 "modules.m"
                  parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_210_210, parse_tree__modules__FatalPrivateIntErrors_59);
                }
#line 815 "modules.m"
                if (parse_tree__modules__succeeded)
#line 814 "modules.m"
                  {
#line 814 "modules.m"
                    parse_tree__modules__ModAncestors_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__ModAncestors_60, 0) = ((MR_Box) (parse_tree__modules__Ancestor_34));
#line 814 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__ModAncestors_60, 1) = ((MR_Box) (parse_tree__modules__ModAncestors0_44));
#line 814 "modules.m"
                  }
#line 815 "modules.m"
                else
#line 816 "modules.m"
                  parse_tree__modules__ModAncestors_60 = parse_tree__modules__ModAncestors0_44;
#line 818 "modules.m"
                {
#line 818 "modules.m"
                  parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(parse_tree__modules__TypeInfo_for_MS_206, parse_tree__modules__PrivateIntItemBlocks_57, &parse_tree__modules__AncDirectImports_61, &parse_tree__modules__AncDirectUses_62);
                }
#line 10313 "parse_tree.modules.c"
                parse_tree__modules__TypeCtorInfo_211_211 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 820 "modules.m"
                {
#line 820 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_DirectImports_92_92 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_211_211, parse_tree__modules__STATE_VARIABLE_DirectImports_0_7, parse_tree__modules__AncDirectImports_61);
                }
#line 821 "modules.m"
                {
#line 821 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_DirectUses_93_93 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_211_211, parse_tree__modules__STATE_VARIABLE_DirectUses_0_9, parse_tree__modules__AncDirectUses_62);
                }
#line 822 "modules.m"
                parse_tree__modules__V_179_179 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 0)));
#line 822 "modules.m"
                parse_tree__modules__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 1)));
#line 822 "modules.m"
                parse_tree__modules__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 2)));
#line 822 "modules.m"
                parse_tree__modules__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 3)));
#line 822 "modules.m"
                parse_tree__modules__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 4)));
#line 822 "modules.m"
                parse_tree__modules__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 5)));
#line 822 "modules.m"
                parse_tree__modules__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 6)));
#line 822 "modules.m"
                parse_tree__modules__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 7)));
#line 822 "modules.m"
                parse_tree__modules__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 8)));
#line 822 "modules.m"
                parse_tree__modules__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 9)));
#line 822 "modules.m"
                parse_tree__modules__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 10)));
#line 822 "modules.m"
                parse_tree__modules__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 11)));
#line 822 "modules.m"
                parse_tree__modules__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 12)));
#line 822 "modules.m"
                parse_tree__modules__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 13)));
#line 822 "modules.m"
                parse_tree__modules__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 14)));
#line 822 "modules.m"
                parse_tree__modules__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 15)));
#line 822 "modules.m"
                parse_tree__modules__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 16)));
#line 822 "modules.m"
                parse_tree__modules__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 17)));
#line 822 "modules.m"
                parse_tree__modules__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 18)));
#line 822 "modules.m"
                parse_tree__modules__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 19)));
#line 822 "modules.m"
                parse_tree__modules__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 20)));
#line 822 "modules.m"
                parse_tree__modules__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 21)));
#line 822 "modules.m"
                parse_tree__modules__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 22)));
#line 822 "modules.m"
                parse_tree__modules__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 23)));
#line 822 "modules.m"
                parse_tree__modules__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 24)));
#line 822 "modules.m"
                parse_tree__modules__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 25)));
#line 822 "modules.m"
                parse_tree__modules__V_205_205 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_88_88, (MR_Integer) 26)));
#line 822 "modules.m"
                {
#line 822 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 0) = ((MR_Box) (parse_tree__modules__V_179_179));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 1) = ((MR_Box) (parse_tree__modules__V_180_180));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 2) = ((MR_Box) (parse_tree__modules__V_181_181));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 3) = ((MR_Box) (parse_tree__modules__V_182_182));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 4) = ((MR_Box) (parse_tree__modules__ModAncestors_60));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 5) = ((MR_Box) (parse_tree__modules__V_184_184));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 6) = ((MR_Box) (parse_tree__modules__V_185_185));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 7) = ((MR_Box) (parse_tree__modules__V_186_186));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 8) = ((MR_Box) (parse_tree__modules__V_187_187));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 9) = ((MR_Box) (parse_tree__modules__V_188_188));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 10) = ((MR_Box) (parse_tree__modules__V_189_189));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 11) = ((MR_Box) (parse_tree__modules__V_190_190));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 12) = ((MR_Box) (parse_tree__modules__V_191_191));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 13) = ((MR_Box) (parse_tree__modules__V_192_192));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 14) = ((MR_Box) (parse_tree__modules__V_193_193));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 15) = ((MR_Box) (parse_tree__modules__V_194_194));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 16) = ((MR_Box) (parse_tree__modules__V_195_195));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 17) = ((MR_Box) (parse_tree__modules__V_196_196));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 18) = ((MR_Box) (parse_tree__modules__V_197_197));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 19) = ((MR_Box) (parse_tree__modules__V_198_198));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 20) = ((MR_Box) (parse_tree__modules__V_199_199));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 21) = ((MR_Box) (parse_tree__modules__V_200_200));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 22) = ((MR_Box) (parse_tree__modules__V_201_201));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 23) = ((MR_Box) (parse_tree__modules__V_202_202));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 24) = ((MR_Box) (parse_tree__modules__V_203_203));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 25) = ((MR_Box) (parse_tree__modules__V_204_204));
#line 822 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, 26) = ((MR_Box) (parse_tree__modules__V_205_205));
#line 822 "modules.m"
                }
#line 782 "modules.m"
              }
#line 824 "modules.m"
            /* direct tailcall eliminated */
#line 824 "modules.m"
            {
#line 824 "modules.m"
              MR_Word parse_tree__modules__HeadVar__3__tmp_copy_3 = parse_tree__modules__Ancestors_35;
#line 824 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0__tmp_copy_7 = parse_tree__modules__STATE_VARIABLE_DirectImports_92_92;
#line 824 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0__tmp_copy_9 = parse_tree__modules__STATE_VARIABLE_DirectUses_93_93;
#line 824 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_11 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94;

#line 824 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_11 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_11;
#line 824 "modules.m"
              parse_tree__modules__STATE_VARIABLE_DirectUses_0_9 = parse_tree__modules__STATE_VARIABLE_DirectUses_0__tmp_copy_9;
#line 824 "modules.m"
              parse_tree__modules__STATE_VARIABLE_DirectImports_0_7 = parse_tree__modules__STATE_VARIABLE_DirectImports_0__tmp_copy_7;
#line 824 "modules.m"
              parse_tree__modules__HeadVar__3_3 = parse_tree__modules__HeadVar__3__tmp_copy_3;
#line 824 "modules.m"
            }
#line 824 "modules.m"
            continue;
#line 772 "modules.m"
          }
#line 768 "modules.m"
      }
#line 768 "modules.m"
      break;
#line 768 "modules.m"
    }
#line 123 "modules.m"
}

#line 500 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_19(
#line 500 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 500 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 500 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 500 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 500 "modules.m"
{
#line 500 "modules.m"
  {
#line 500 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 500 "modules.m"
    MR_Word parse_tree__modules__conv18_HeadVar__3_3;

#line 500 "modules.m"
    {
#line 500 "modules.m"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv18_HeadVar__3_3);
    }
#line 500 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv18_HeadVar__3_3));
#line 500 "modules.m"
  }
#line 500 "modules.m"
}

#line 499 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_18(
#line 499 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 499 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 499 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 499 "modules.m"
{
#line 499 "modules.m"
  {
#line 499 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 499 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 499 "modules.m"
    MR_Word parse_tree__modules__conv17_HeadVar__3_3;

#line 499 "modules.m"
    {
#line 499 "modules.m"
      parse_tree__modules__conv17_HeadVar__3_3 = parse_tree__status__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 499 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv17_HeadVar__3_3));
#line 499 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 499 "modules.m"
  }
#line 499 "modules.m"
}

#line 499 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_17(
#line 499 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 499 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 499 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 499 "modules.m"
{
#line 499 "modules.m"
  {
#line 499 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 499 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 499 "modules.m"
    MR_Word parse_tree__modules__conv16_HeadVar__4_4;

#line 499 "modules.m"
    {
#line 499 "modules.m"
      parse_tree__modules__conv16_HeadVar__4_4 = parse_tree__status__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 499 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv16_HeadVar__4_4));
#line 499 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 499 "modules.m"
  }
#line 499 "modules.m"
}

#line 494 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_16(
#line 494 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 494 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 494 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 494 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 494 "modules.m"
{
#line 494 "modules.m"
  {
#line 494 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 494 "modules.m"
    MR_Word parse_tree__modules__conv15_HeadVar__3_3;

#line 494 "modules.m"
    {
#line 494 "modules.m"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv15_HeadVar__3_3);
    }
#line 494 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv15_HeadVar__3_3));
#line 494 "modules.m"
  }
#line 494 "modules.m"
}

#line 493 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_15(
#line 493 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 493 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 493 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 493 "modules.m"
{
#line 493 "modules.m"
  {
#line 493 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 493 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 493 "modules.m"
    MR_Word parse_tree__modules__conv14_HeadVar__3_3;

#line 493 "modules.m"
    {
#line 493 "modules.m"
      parse_tree__modules__conv14_HeadVar__3_3 = parse_tree__status__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 493 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv14_HeadVar__3_3));
#line 493 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 493 "modules.m"
  }
#line 493 "modules.m"
}

#line 493 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_14(
#line 493 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 493 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 493 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 493 "modules.m"
{
#line 493 "modules.m"
  {
#line 493 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 493 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 493 "modules.m"
    MR_Word parse_tree__modules__conv13_HeadVar__4_4;

#line 493 "modules.m"
    {
#line 493 "modules.m"
      parse_tree__modules__conv13_HeadVar__4_4 = parse_tree__status__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 493 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv13_HeadVar__4_4));
#line 493 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 493 "modules.m"
  }
#line 493 "modules.m"
}

#line 488 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_13(
#line 488 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 488 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 488 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 488 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 488 "modules.m"
{
#line 488 "modules.m"
  {
#line 488 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 488 "modules.m"
    MR_Word parse_tree__modules__conv12_HeadVar__3_3;

#line 488 "modules.m"
    {
#line 488 "modules.m"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv12_HeadVar__3_3);
    }
#line 488 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv12_HeadVar__3_3));
#line 488 "modules.m"
  }
#line 488 "modules.m"
}

#line 487 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_12(
#line 487 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 487 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 487 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 487 "modules.m"
{
#line 487 "modules.m"
  {
#line 487 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 487 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 487 "modules.m"
    MR_Word parse_tree__modules__conv11_HeadVar__3_3;

#line 487 "modules.m"
    {
#line 487 "modules.m"
      parse_tree__modules__conv11_HeadVar__3_3 = parse_tree__status__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 487 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv11_HeadVar__3_3));
#line 487 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 487 "modules.m"
  }
#line 487 "modules.m"
}

#line 479 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_11(
#line 479 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 479 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 479 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 479 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 479 "modules.m"
{
#line 479 "modules.m"
  {
#line 479 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 479 "modules.m"
    MR_Word parse_tree__modules__conv10_HeadVar__3_3;

#line 479 "modules.m"
    {
#line 479 "modules.m"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv10_HeadVar__3_3);
    }
#line 479 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv10_HeadVar__3_3));
#line 479 "modules.m"
  }
#line 479 "modules.m"
}

#line 478 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_10(
#line 478 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 478 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 478 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 478 "modules.m"
{
#line 478 "modules.m"
  {
#line 478 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 478 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 478 "modules.m"
    MR_Word parse_tree__modules__conv9_HeadVar__3_3;

#line 478 "modules.m"
    {
#line 478 "modules.m"
      parse_tree__modules__conv9_HeadVar__3_3 = parse_tree__status__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 478 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv9_HeadVar__3_3));
#line 478 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 478 "modules.m"
  }
#line 478 "modules.m"
}

#line 477 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_9(
#line 477 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 477 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 477 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 477 "modules.m"
{
#line 477 "modules.m"
  {
#line 477 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 477 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 477 "modules.m"
    MR_Word parse_tree__modules__conv8_HeadVar__4_4;

#line 477 "modules.m"
    {
#line 477 "modules.m"
      parse_tree__modules__conv8_HeadVar__4_4 = parse_tree__status__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 477 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv8_HeadVar__4_4));
#line 477 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 477 "modules.m"
  }
#line 477 "modules.m"
}

#line 472 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_8(
#line 472 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 472 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 472 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 472 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 472 "modules.m"
{
#line 472 "modules.m"
  {
#line 472 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 472 "modules.m"
    MR_Word parse_tree__modules__conv7_HeadVar__3_3;

#line 472 "modules.m"
    {
#line 472 "modules.m"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv7_HeadVar__3_3);
    }
#line 472 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv7_HeadVar__3_3));
#line 472 "modules.m"
  }
#line 472 "modules.m"
}

#line 471 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_7(
#line 471 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 471 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 471 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 471 "modules.m"
{
#line 471 "modules.m"
  {
#line 471 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 471 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 471 "modules.m"
    MR_Word parse_tree__modules__conv6_HeadVar__3_3;

#line 471 "modules.m"
    {
#line 471 "modules.m"
      parse_tree__modules__conv6_HeadVar__3_3 = parse_tree__status__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 471 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv6_HeadVar__3_3));
#line 471 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 471 "modules.m"
  }
#line 471 "modules.m"
}

#line 466 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_6(
#line 466 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 466 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 466 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 466 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 466 "modules.m"
{
#line 466 "modules.m"
  {
#line 466 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 466 "modules.m"
    MR_Word parse_tree__modules__conv5_HeadVar__3_3;

#line 466 "modules.m"
    {
#line 466 "modules.m"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv5_HeadVar__3_3);
    }
#line 466 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv5_HeadVar__3_3));
#line 466 "modules.m"
  }
#line 466 "modules.m"
}

#line 465 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_5(
#line 465 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 465 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 465 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 465 "modules.m"
{
#line 465 "modules.m"
  {
#line 465 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 465 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 465 "modules.m"
    MR_Word parse_tree__modules__conv4_HeadVar__3_3;

#line 465 "modules.m"
    {
#line 465 "modules.m"
      parse_tree__modules__conv4_HeadVar__3_3 = parse_tree__status__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 465 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv4_HeadVar__3_3));
#line 465 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 465 "modules.m"
  }
#line 465 "modules.m"
}

#line 465 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_4(
#line 465 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 465 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 465 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 465 "modules.m"
{
#line 465 "modules.m"
  {
#line 465 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 465 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 465 "modules.m"
    MR_Word parse_tree__modules__conv3_HeadVar__4_4;

#line 465 "modules.m"
    {
#line 465 "modules.m"
      parse_tree__modules__conv3_HeadVar__4_4 = parse_tree__status__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 465 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv3_HeadVar__4_4));
#line 465 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 465 "modules.m"
  }
#line 465 "modules.m"
}

#line 459 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_3(
#line 459 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 459 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 459 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 459 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 459 "modules.m"
{
#line 459 "modules.m"
  {
#line 459 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 459 "modules.m"
    MR_Word parse_tree__modules__conv2_HeadVar__3_3;

#line 459 "modules.m"
    {
#line 459 "modules.m"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv2_HeadVar__3_3);
    }
#line 459 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_HeadVar__3_3));
#line 459 "modules.m"
  }
#line 459 "modules.m"
}

#line 458 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_2(
#line 458 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 458 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 458 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 458 "modules.m"
{
#line 458 "modules.m"
  {
#line 458 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 458 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 458 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__4_4;

#line 458 "modules.m"
    {
#line 458 "modules.m"
      parse_tree__modules__conv1_HeadVar__4_4 = parse_tree__status__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 458 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__4_4));
#line 458 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 458 "modules.m"
  }
#line 458 "modules.m"
}

#line 457 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_1(
#line 457 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 457 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 457 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 457 "modules.m"
{
#line 457 "modules.m"
  {
#line 457 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 457 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 457 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__4_4;

#line 457 "modules.m"
    {
#line 457 "modules.m"
      parse_tree__modules__conv0_HeadVar__4_4 = parse_tree__status__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 457 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__4_4));
#line 457 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 457 "modules.m"
  }
#line 457 "modules.m"
}

#line 93 "modules.m"
void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0(
#line 93 "modules.m"
  MR_Word parse_tree__modules__Globals_8,
#line 93 "modules.m"
  MR_String parse_tree__modules__SourceFileName_9,
#line 93 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_10,
#line 93 "modules.m"
  MR_Word parse_tree__modules__RawCompUnit0_11,
#line 93 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_48)
#line 93 "modules.m"
{
#line 429 "modules.m"
  {
#line 429 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 429 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_149_149;
#line 429 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_165_165;
#line 429 "modules.m"
    MR_Word parse_tree__modules__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_11, (MR_Integer) 0)));
#line 429 "modules.m"
    MR_Word parse_tree__modules__ModuleNameContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_11, (MR_Integer) 1)));
#line 429 "modules.m"
    MR_Word parse_tree__modules__RawItemBlocks0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_11, (MR_Integer) 2)));
#line 429 "modules.m"
    MR_Word parse_tree__modules__ParentDeps_17;
#line 429 "modules.m"
    MR_Word parse_tree__modules__IntImportDeps0_18;
#line 429 "modules.m"
    MR_Word parse_tree__modules__IntUseDeps0_19;
#line 429 "modules.m"
    MR_Word parse_tree__modules__ImpImportDeps_20;
#line 429 "modules.m"
    MR_Word parse_tree__modules__ImpUseDeps_21;
#line 429 "modules.m"
    MR_Word parse_tree__modules__SrcItemBlocks_22;
#line 429 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntImportDeps_23;
#line 429 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntUseDeps_24;
#line 429 "modules.m"
    MR_Word parse_tree__modules__IntImportDeps_25;
#line 429 "modules.m"
    MR_Word parse_tree__modules__IntUseDeps_26;
#line 429 "modules.m"
    MR_Word parse_tree__modules__HaveReadModuleMaps_27;
#line 429 "modules.m"
    MR_Word parse_tree__modules__ParentImportDeps_28;
#line 429 "modules.m"
    MR_Word parse_tree__modules__ParentUseDeps_29;
#line 429 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps0_30;
#line 429 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps1_32;
#line 429 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImportDeps0_34;
#line 429 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps2_36;
#line 429 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps_38;
#line 429 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImportDeps_40;
#line 429 "modules.m"
    MR_Word parse_tree__modules__AugCompUnit_44;
#line 429 "modules.m"
    MR_Word parse_tree__modules__AccessSpecs_47;
#line 429 "modules.m"
    MR_Word parse_tree__modules__V_55_55;
#line 429 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_57_57;
#line 429 "modules.m"
    MR_Word parse_tree__modules__V_58_58;
#line 429 "modules.m"
    MR_Word parse_tree__modules__V_59_59;
#line 429 "modules.m"
    MR_Word parse_tree__modules__V_60_60;
#line 429 "modules.m"
    MR_Word parse_tree__modules__V_61_61;
#line 429 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66;
#line 429 "modules.m"
    MR_Word parse_tree__modules__V_72_72;
#line 429 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_77_77;
#line 429 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_86_86;
#line 429 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_96_96;
#line 429 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_105_105;
#line 429 "modules.m"
    MR_Word parse_tree__modules__V_110_110;
#line 429 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_114_114;
#line 429 "modules.m"
    MR_Word parse_tree__modules__V_119_119;
#line 429 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_123_123;
#line 429 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_131_131;
#line 429 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_139_139;
#line 429 "modules.m"
    MR_Word parse_tree__modules__V_142_142;
#line 429 "modules.m"
    MR_Word parse_tree__modules__V_144_144;
#line 429 "modules.m"
    MR_Word parse_tree__modules__V_145_145;
#line 463 "modules.m"
    MR_Word parse_tree__modules__V_31_31;
#line 468 "modules.m"
    MR_Word parse_tree__modules__V_33_33;
#line 475 "modules.m"
    MR_Word parse_tree__modules__V_35_35;
#line 485 "modules.m"
    MR_Word parse_tree__modules__V_37_37;
#line 491 "modules.m"
    MR_Word parse_tree__modules__V_39_39;
#line 497 "modules.m"
    MR_Word parse_tree__modules__V_41_41;
#line 506 "modules.m"
    MR_Word parse_tree__modules__V_42_42;
#line 512 "modules.m"
    MR_Word parse_tree__modules__V_43_43;
#line 518 "modules.m"
    MR_Word parse_tree__modules__V_45_45;
#line 518 "modules.m"
    MR_Word parse_tree__modules__V_46_46;

#line 433 "modules.m"
    {
#line 433 "modules.m"
      parse_tree__modules__ParentDeps_17 = mdbcomp__sym_name__get_ancestors_1_f_0(parse_tree__modules__ModuleName_14);
    }
#line 434 "modules.m"
    {
#line 434 "modules.m"
      parse_tree__get_dependencies__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(parse_tree__modules__RawItemBlocks0_16, &parse_tree__modules__IntImportDeps0_18, &parse_tree__modules__IntUseDeps0_19, &parse_tree__modules__ImpImportDeps_20, &parse_tree__modules__ImpUseDeps_21);
    }
#line 438 "modules.m"
    {
#line 438 "modules.m"
      parse_tree__modules__raw_item_blocks_to_src_2_p_0(parse_tree__modules__RawItemBlocks0_16, &parse_tree__modules__SrcItemBlocks_22);
    }
#line 441 "modules.m"
    {
#line 441 "modules.m"
      parse_tree__modules__V_55_55 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0);
    }
#line 439 "modules.m"
    {
#line 439 "modules.m"
      parse_tree__modules__make_module_and_imports_12_p_0(parse_tree__modules__SourceFileName_9, parse_tree__modules__SourceFileModuleName_10, parse_tree__modules__ModuleName_14, parse_tree__modules__ModuleNameContext_15, parse_tree__modules__SrcItemBlocks_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__modules__V_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_57_57);
    }
#line 447 "modules.m"
    {
#line 447 "modules.m"
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0, parse_tree__modules__Globals_8, parse_tree__modules__RawItemBlocks0_16, &parse_tree__modules__ImplicitIntImportDeps_23, &parse_tree__modules__ImplicitIntUseDeps_24);
    }
#line 11273 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_149_149 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 449 "modules.m"
    {
#line 449 "modules.m"
      parse_tree__modules__IntImportDeps_25 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_149_149, parse_tree__modules__ImplicitIntImportDeps_23, parse_tree__modules__IntImportDeps0_18);
    }
#line 450 "modules.m"
    {
#line 450 "modules.m"
      parse_tree__modules__IntUseDeps_26 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_149_149, parse_tree__modules__ImplicitIntUseDeps_24, parse_tree__modules__IntUseDeps0_19);
    }
#line 453 "modules.m"
    {
#line 453 "modules.m"
      parse_tree__modules__V_58_58 = mercury__map__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[0], (MR_Word) &parse_tree__modules_scalar_common_1[1]);
    }
#line 453 "modules.m"
    {
#line 453 "modules.m"
      parse_tree__modules__V_59_59 = mercury__map__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[2], (MR_Word) &parse_tree__modules_scalar_common_1[3]);
    }
#line 453 "modules.m"
    {
#line 453 "modules.m"
      parse_tree__modules__V_60_60 = mercury__map__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[4], (MR_Word) &parse_tree__modules_scalar_common_1[5]);
    }
#line 453 "modules.m"
    {
#line 453 "modules.m"
      parse_tree__modules__HaveReadModuleMaps_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 453 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_27, 0) = ((MR_Box) (parse_tree__modules__V_58_58));
#line 453 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_27, 1) = ((MR_Box) (parse_tree__modules__V_59_59));
#line 453 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_27, 2) = ((MR_Box) (parse_tree__modules__V_60_60));
#line 453 "modules.m"
    }
#line 457 "modules.m"
    parse_tree__modules__V_61_61 = (MR_Word) &parse_tree__modules_scalar_common_3[6];
#line 11314 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_165_165 = (MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0;
#line 456 "modules.m"
    {
#line 456 "modules.m"
      parse_tree__modules__process_module_private_interfaces_14_p_0(parse_tree__modules__TypeCtorInfo_165_165, parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, parse_tree__modules__ParentDeps_17, parse_tree__modules__V_61_61, (MR_Word) &parse_tree__modules_scalar_common_3[7], (MR_Word) &parse_tree__modules_scalar_common_2[11], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ParentImportDeps_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ParentUseDeps_29, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_57_57, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66);
    }
#line 465 "modules.m"
    parse_tree__modules__V_72_72 = (MR_Word) &parse_tree__modules_scalar_common_3[8];
#line 463 "modules.m"
    {
#line 463 "modules.m"
      parse_tree__modules__process_module_long_interfaces_16_p_0(parse_tree__modules__TypeCtorInfo_165_165, parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__ParentImportDeps_28, (MR_Integer) 1, parse_tree__modules__V_72_72, (MR_Word) &parse_tree__modules_scalar_common_2[12], (MR_Word) &parse_tree__modules_scalar_common_2[13], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IntIndirectImportDeps0_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_31_31, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_77_77);
    }
#line 468 "modules.m"
    {
#line 468 "modules.m"
      parse_tree__modules__process_module_long_interfaces_16_p_0(parse_tree__modules__TypeCtorInfo_165_165, parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__IntImportDeps_25, (MR_Integer) 1, parse_tree__modules__V_61_61, (MR_Word) &parse_tree__modules_scalar_common_2[14], (MR_Word) &parse_tree__modules_scalar_common_2[15], parse_tree__modules__IntIndirectImportDeps0_30, &parse_tree__modules__IntIndirectImportDeps1_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_33_33, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_77_77, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_86_86);
    }
#line 475 "modules.m"
    {
#line 475 "modules.m"
      parse_tree__modules__process_module_long_interfaces_16_p_0(parse_tree__modules__TypeCtorInfo_165_165, parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__ImpImportDeps_20, (MR_Integer) 1, (MR_Word) &parse_tree__modules_scalar_common_3[9], (MR_Word) &parse_tree__modules_scalar_common_2[16], (MR_Word) &parse_tree__modules_scalar_common_2[17], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ImpIndirectImportDeps0_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_35_35, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_86_86, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_96_96);
    }
#line 485 "modules.m"
    {
#line 485 "modules.m"
      parse_tree__modules__process_module_long_interfaces_16_p_0(parse_tree__modules__TypeCtorInfo_165_165, parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__ParentUseDeps_29, (MR_Integer) 1, parse_tree__modules__V_72_72, (MR_Word) &parse_tree__modules_scalar_common_2[18], (MR_Word) &parse_tree__modules_scalar_common_2[19], parse_tree__modules__IntIndirectImportDeps1_32, &parse_tree__modules__IntIndirectImportDeps2_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_37_37, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_96_96, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_105_105);
    }
#line 493 "modules.m"
    parse_tree__modules__V_110_110 = (MR_Word) &parse_tree__modules_scalar_common_3[10];
#line 491 "modules.m"
    {
#line 491 "modules.m"
      parse_tree__modules__process_module_long_interfaces_16_p_0(parse_tree__modules__TypeCtorInfo_165_165, parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 0, parse_tree__modules__IntUseDeps_26, (MR_Integer) 1, parse_tree__modules__V_110_110, (MR_Word) &parse_tree__modules_scalar_common_2[20], (MR_Word) &parse_tree__modules_scalar_common_2[21], parse_tree__modules__IntIndirectImportDeps2_36, &parse_tree__modules__IntIndirectImportDeps_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_39_39, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_105_105, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_114_114);
    }
#line 499 "modules.m"
    parse_tree__modules__V_119_119 = (MR_Word) &parse_tree__modules_scalar_common_3[11];
#line 497 "modules.m"
    {
#line 497 "modules.m"
      parse_tree__modules__process_module_long_interfaces_16_p_0(parse_tree__modules__TypeCtorInfo_165_165, parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 0, parse_tree__modules__ImpUseDeps_21, (MR_Integer) 1, parse_tree__modules__V_119_119, (MR_Word) &parse_tree__modules_scalar_common_2[22], (MR_Word) &parse_tree__modules_scalar_common_2[23], parse_tree__modules__ImpIndirectImportDeps0_34, &parse_tree__modules__ImpIndirectImportDeps_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_41_41, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_114_114, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_123_123);
    }
#line 506 "modules.m"
    {
#line 506 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_49_93_95_48_13_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, parse_tree__modules__IntIndirectImportDeps_38, (MR_Integer) 1, parse_tree__modules__V_110_110, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_42_42, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_123_123, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_131_131);
    }
#line 512 "modules.m"
    {
#line 512 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_49_93_95_48_13_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, parse_tree__modules__ImpIndirectImportDeps_40, (MR_Integer) 1, parse_tree__modules__V_119_119, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__V_43_43, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_131_131, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_139_139);
    }
#line 518 "modules.m"
    {
#line 518 "modules.m"
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(parse_tree__modules__STATE_VARIABLE_ModuleAndImports_139_139, &parse_tree__modules__AugCompUnit_44, &parse_tree__modules__V_45_45, &parse_tree__modules__V_46_46);
    }
#line 521 "modules.m"
    {
#line 521 "modules.m"
      parse_tree__modules__V_145_145 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_149_149, parse_tree__modules__ImpImportDeps_20, parse_tree__modules__ImpUseDeps_21);
    }
#line 521 "modules.m"
    {
#line 521 "modules.m"
      parse_tree__modules__V_144_144 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_149_149, parse_tree__modules__IntUseDeps_26, parse_tree__modules__V_145_145);
    }
#line 521 "modules.m"
    {
#line 521 "modules.m"
      parse_tree__modules__V_142_142 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_149_149, parse_tree__modules__IntImportDeps_25, parse_tree__modules__V_144_144);
    }
#line 520 "modules.m"
    {
#line 520 "modules.m"
      parse_tree__modules__check_imports_accessibility_4_p_0(parse_tree__modules__AugCompUnit_44, parse_tree__modules__V_142_142, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__AccessSpecs_47);
    }
#line 523 "modules.m"
    {
#line 523 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__AccessSpecs_47, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_139_139, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_48);
#line 523 "modules.m"
      return;
    }
#line 429 "modules.m"
  }
#line 93 "modules.m"
}

#line 384 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_14(
#line 384 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 384 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 384 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 384 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 384 "modules.m"
{
#line 384 "modules.m"
  {
#line 384 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 384 "modules.m"
    MR_Word parse_tree__modules__conv13_HeadVar__3_3;

#line 384 "modules.m"
    {
#line 384 "modules.m"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv13_HeadVar__3_3);
    }
#line 384 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv13_HeadVar__3_3));
#line 384 "modules.m"
  }
#line 384 "modules.m"
}

#line 383 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_13(
#line 383 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 383 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 383 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 383 "modules.m"
{
#line 383 "modules.m"
  {
#line 383 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 383 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 383 "modules.m"
    MR_Word parse_tree__modules__conv12_HeadVar__3_3;

#line 383 "modules.m"
    {
#line 383 "modules.m"
      parse_tree__modules__conv12_HeadVar__3_3 = parse_tree__status__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 383 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv12_HeadVar__3_3));
#line 383 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 383 "modules.m"
  }
#line 383 "modules.m"
}

#line 382 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_12(
#line 382 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 382 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 382 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 382 "modules.m"
{
#line 382 "modules.m"
  {
#line 382 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 382 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 382 "modules.m"
    MR_Word parse_tree__modules__conv11_HeadVar__4_4;

#line 382 "modules.m"
    {
#line 382 "modules.m"
      parse_tree__modules__conv11_HeadVar__4_4 = parse_tree__status__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 382 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv11_HeadVar__4_4));
#line 382 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 382 "modules.m"
  }
#line 382 "modules.m"
}

#line 376 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_11(
#line 376 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 376 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 376 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 376 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 376 "modules.m"
{
#line 376 "modules.m"
  {
#line 376 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 376 "modules.m"
    MR_Word parse_tree__modules__conv10_HeadVar__3_3;

#line 376 "modules.m"
    {
#line 376 "modules.m"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv10_HeadVar__3_3);
    }
#line 376 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv10_HeadVar__3_3));
#line 376 "modules.m"
  }
#line 376 "modules.m"
}

#line 375 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_10(
#line 375 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 375 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 375 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 375 "modules.m"
{
#line 375 "modules.m"
  {
#line 375 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 375 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 375 "modules.m"
    MR_Word parse_tree__modules__conv9_HeadVar__3_3;

#line 375 "modules.m"
    {
#line 375 "modules.m"
      parse_tree__modules__conv9_HeadVar__3_3 = parse_tree__status__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 375 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv9_HeadVar__3_3));
#line 375 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 375 "modules.m"
  }
#line 375 "modules.m"
}

#line 374 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_9(
#line 374 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 374 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 374 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 374 "modules.m"
{
#line 374 "modules.m"
  {
#line 374 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 374 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 374 "modules.m"
    MR_Word parse_tree__modules__conv8_HeadVar__4_4;

#line 374 "modules.m"
    {
#line 374 "modules.m"
      parse_tree__modules__conv8_HeadVar__4_4 = parse_tree__status__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 374 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv8_HeadVar__4_4));
#line 374 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 374 "modules.m"
  }
#line 374 "modules.m"
}

#line 366 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_8(
#line 366 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 366 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 366 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 366 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 366 "modules.m"
{
#line 366 "modules.m"
  {
#line 366 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 366 "modules.m"
    MR_Word parse_tree__modules__conv7_HeadVar__3_3;

#line 366 "modules.m"
    {
#line 366 "modules.m"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv7_HeadVar__3_3);
    }
#line 366 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv7_HeadVar__3_3));
#line 366 "modules.m"
  }
#line 366 "modules.m"
}

#line 365 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_7(
#line 365 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 365 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 365 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 365 "modules.m"
{
#line 365 "modules.m"
  {
#line 365 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 365 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 365 "modules.m"
    MR_Word parse_tree__modules__conv6_HeadVar__3_3;

#line 365 "modules.m"
    {
#line 365 "modules.m"
      parse_tree__modules__conv6_HeadVar__3_3 = parse_tree__status__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 365 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv6_HeadVar__3_3));
#line 365 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 365 "modules.m"
  }
#line 365 "modules.m"
}

#line 364 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_6(
#line 364 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 364 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 364 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 364 "modules.m"
{
#line 364 "modules.m"
  {
#line 364 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 364 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 364 "modules.m"
    MR_Word parse_tree__modules__conv5_HeadVar__4_4;

#line 364 "modules.m"
    {
#line 364 "modules.m"
      parse_tree__modules__conv5_HeadVar__4_4 = parse_tree__status__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 364 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv5_HeadVar__4_4));
#line 364 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 364 "modules.m"
  }
#line 364 "modules.m"
}

#line 355 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_5(
#line 355 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 355 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 355 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 355 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 355 "modules.m"
{
#line 355 "modules.m"
  {
#line 355 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 355 "modules.m"
    MR_Word parse_tree__modules__conv4_HeadVar__3_3;

#line 355 "modules.m"
    {
#line 355 "modules.m"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv4_HeadVar__3_3);
    }
#line 355 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv4_HeadVar__3_3));
#line 355 "modules.m"
  }
#line 355 "modules.m"
}

#line 354 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_4(
#line 354 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 354 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 354 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 354 "modules.m"
{
#line 354 "modules.m"
  {
#line 354 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 354 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 354 "modules.m"
    MR_Word parse_tree__modules__conv3_HeadVar__3_3;

#line 354 "modules.m"
    {
#line 354 "modules.m"
      parse_tree__modules__conv3_HeadVar__3_3 = parse_tree__status__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 354 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv3_HeadVar__3_3));
#line 354 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 354 "modules.m"
  }
#line 354 "modules.m"
}

#line 343 "modules.m"
static void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_3(
#line 343 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 343 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 343 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 343 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 343 "modules.m"
{
#line 343 "modules.m"
  {
#line 343 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 343 "modules.m"
    MR_Word parse_tree__modules__conv2_HeadVar__3_3;

#line 343 "modules.m"
    {
#line 343 "modules.m"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv2_HeadVar__3_3);
    }
#line 343 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_HeadVar__3_3));
#line 343 "modules.m"
  }
#line 343 "modules.m"
}

#line 342 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_2(
#line 342 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 342 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 342 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 342 "modules.m"
{
#line 342 "modules.m"
  {
#line 342 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 342 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 342 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__4_4;

#line 342 "modules.m"
    {
#line 342 "modules.m"
      parse_tree__modules__conv1_HeadVar__4_4 = parse_tree__status__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 342 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__4_4));
#line 342 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 342 "modules.m"
  }
#line 342 "modules.m"
}

#line 341 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_1(
#line 341 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 341 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 341 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 341 "modules.m"
{
#line 341 "modules.m"
  {
#line 341 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 341 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 341 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__4_4;

#line 341 "modules.m"
    {
#line 341 "modules.m"
      parse_tree__modules__conv0_HeadVar__4_4 = parse_tree__status__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 341 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__4_4));
#line 341 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 341 "modules.m"
  }
#line 341 "modules.m"
}

#line 79 "modules.m"
void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0(
#line 79 "modules.m"
  MR_Word parse_tree__modules__Globals_11,
#line 79 "modules.m"
  MR_String parse_tree__modules__SourceFileName_12,
#line 79 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_13,
#line 79 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamp_14,
#line 79 "modules.m"
  MR_Word parse_tree__modules__NestedChildren_15,
#line 79 "modules.m"
  MR_Word parse_tree__modules__RawCompUnit0_16,
#line 79 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 79 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67)
#line 79 "modules.m"
{
#line 262 "modules.m"
  {
#line 262 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 262 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_152_152;
#line 262 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_153_153;
#line 262 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_165_165;
#line 262 "modules.m"
    MR_Word parse_tree__modules__ModuleName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_16, (MR_Integer) 0)));
#line 262 "modules.m"
    MR_Word parse_tree__modules__ModuleNameContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_16, (MR_Integer) 1)));
#line 262 "modules.m"
    MR_Word parse_tree__modules__RawItemBlocks0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_16, (MR_Integer) 2)));
#line 262 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules0_23;
#line 262 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules0_24;
#line 262 "modules.m"
    MR_Word parse_tree__modules__ImpImportedModules0_25;
#line 262 "modules.m"
    MR_Word parse_tree__modules__ImpUsedModules0_26;
#line 262 "modules.m"
    MR_Word parse_tree__modules__ImportedModules0_27;
#line 262 "modules.m"
    MR_Word parse_tree__modules__UsedModules0_28;
#line 262 "modules.m"
    MR_Word parse_tree__modules__Context_31;
#line 262 "modules.m"
    MR_Word parse_tree__modules__AncestorModules_32;
#line 262 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules1_33;
#line 262 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules1_34;
#line 262 "modules.m"
    MR_Word parse_tree__modules__ImpImportedModules_35;
#line 262 "modules.m"
    MR_Word parse_tree__modules__ImpUsedModules_36;
#line 262 "modules.m"
    MR_Word parse_tree__modules__SrcItemBlocks1_37;
#line 262 "modules.m"
    MR_Word parse_tree__modules__PublicChildren_38;
#line 262 "modules.m"
    MR_Word parse_tree__modules__FactDeps_39;
#line 262 "modules.m"
    MR_Word parse_tree__modules__ForeignIncludeFiles_40;
#line 262 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestampMap_42;
#line 262 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntImportedModules_43;
#line 262 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntUsedModules_44;
#line 262 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules2_45;
#line 262 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules2_46;
#line 262 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules_47;
#line 262 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules_48;
#line 262 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImports1_51;
#line 262 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports1_52;
#line 262 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImports1_55;
#line 262 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports1_56;
#line 262 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImports_57;
#line 262 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports2_58;
#line 262 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImports_59;
#line 262 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports2_60;
#line 262 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports_61;
#line 262 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports_62;
#line 262 "modules.m"
    MR_Word parse_tree__modules__AugCompUnit_63;
#line 262 "modules.m"
    MR_Word parse_tree__modules__AccessSpecs_66;
#line 262 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_75_75;
#line 262 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_76_76;
#line 262 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_81_81;
#line 262 "modules.m"
    MR_Word parse_tree__modules__V_82_82;
#line 262 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85;
#line 262 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94;
#line 262 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_102_102;
#line 262 "modules.m"
    MR_Word parse_tree__modules__V_107_107;
#line 262 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_110_110;
#line 262 "modules.m"
    MR_Word parse_tree__modules__V_115_115;
#line 262 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_118_118;
#line 262 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_125_125;
#line 262 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_132_132;
#line 262 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_139_139;
#line 262 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_145_145;
#line 262 "modules.m"
    MR_Word parse_tree__modules__V_147_147;
#line 262 "modules.m"
    MR_Word parse_tree__modules__V_149_149;
#line 262 "modules.m"
    MR_Word parse_tree__modules__V_150_150;
#line 278 "modules.m"
    MR_Word parse_tree__modules__V_238_238;
#line 419 "modules.m"
    MR_Word parse_tree__modules__V_64_64;
#line 419 "modules.m"
    MR_Word parse_tree__modules__V_65_65;

#line 268 "modules.m"
    {
#line 268 "modules.m"
      parse_tree__get_dependencies__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(parse_tree__modules__RawItemBlocks0_22, &parse_tree__modules__IntImportedModules0_23, &parse_tree__modules__IntUsedModules0_24, &parse_tree__modules__ImpImportedModules0_25, &parse_tree__modules__ImpUsedModules0_26);
    }
#line 12025 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_152_152 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 272 "modules.m"
    {
#line 272 "modules.m"
      parse_tree__modules__ImportedModules0_27 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_152_152, parse_tree__modules__IntImportedModules0_23, parse_tree__modules__ImpImportedModules0_25);
    }
#line 273 "modules.m"
    {
#line 273 "modules.m"
      parse_tree__modules__UsedModules0_28 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_152_152, parse_tree__modules__IntUsedModules0_24, parse_tree__modules__ImpUsedModules0_26);
    }
#line 278 "modules.m"
    {
#line 278 "modules.m"
      parse_tree__modules__V_238_238 = mercury__term__context_init_0_f_0();
    }
#line 278 "modules.m"
    {
#line 278 "modules.m"
      parse_tree__modules__succeeded = mercury__term____Unify____context_0_0(parse_tree__modules__ModuleNameContext_21, parse_tree__modules__V_238_238);
    }
#line 282 "modules.m"
    if (parse_tree__modules__succeeded)
#line 280 "modules.m"
      {
#line 280 "modules.m"
        MR_String parse_tree__modules__FileName_30;

#line 279 "modules.m"
        {
#line 279 "modules.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__modules__Globals_11, parse_tree__modules__ModuleName_20, (MR_String) ".m", (MR_Integer) 1, &parse_tree__modules__FileName_30);
        }
#line 281 "modules.m"
        {
#line 281 "modules.m"
          parse_tree__modules__Context_31 = mercury__term__context_init_2_f_0(parse_tree__modules__FileName_30, (MR_Integer) 1);
        }
#line 280 "modules.m"
      }
#line 282 "modules.m"
    else
#line 283 "modules.m"
      parse_tree__modules__Context_31 = parse_tree__modules__ModuleNameContext_21;
#line 286 "modules.m"
    {
#line 286 "modules.m"
      parse_tree__modules__AncestorModules_32 = mdbcomp__sym_name__get_ancestors_1_f_0(parse_tree__modules__ModuleName_20);
    }
#line 287 "modules.m"
    {
#line 287 "modules.m"
      parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0(parse_tree__modules__ModuleName_20, parse_tree__modules__Context_31, parse_tree__modules__AncestorModules_32, parse_tree__modules__ImportedModules0_27, parse_tree__modules__UsedModules0_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__STATE_VARIABLE_Specs_75_75);
    }
#line 290 "modules.m"
    {
#line 290 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_12_p_0(parse_tree__modules__Context_31, parse_tree__modules__IntImportedModules0_23, &parse_tree__modules__IntImportedModules1_33, parse_tree__modules__IntUsedModules0_24, &parse_tree__modules__IntUsedModules1_34, parse_tree__modules__ImpImportedModules0_25, &parse_tree__modules__ImpImportedModules_35, parse_tree__modules__ImpUsedModules0_26, &parse_tree__modules__ImpUsedModules_36, parse_tree__modules__STATE_VARIABLE_Specs_75_75, &parse_tree__modules__STATE_VARIABLE_Specs_76_76);
    }
#line 296 "modules.m"
    {
#line 296 "modules.m"
      parse_tree__modules__get_src_item_blocks_public_children_3_p_0(parse_tree__modules__RawCompUnit0_16, &parse_tree__modules__SrcItemBlocks1_37, &parse_tree__modules__PublicChildren_38);
    }
#line 12090 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_153_153 = (MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0;
#line 301 "modules.m"
    {
#line 301 "modules.m"
      parse_tree__get_dependencies__get_fact_table_dependencies_in_item_blocks_2_p_0(parse_tree__modules__TypeCtorInfo_153_153, parse_tree__modules__RawItemBlocks0_22, &parse_tree__modules__FactDeps_39);
    }
#line 302 "modules.m"
    {
#line 302 "modules.m"
      parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0(parse_tree__modules__TypeCtorInfo_153_153, parse_tree__modules__RawItemBlocks0_22, &parse_tree__modules__ForeignIncludeFiles_40);
    }
#line 308 "modules.m"
    if ((parse_tree__modules__MaybeTimestamp_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "modules.m"
      parse_tree__modules__MaybeTimestampMap_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 308 "modules.m"
    else
#line 305 "modules.m"
      {
#line 305 "modules.m"
        MR_Word parse_tree__modules__Timestamp_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__MaybeTimestamp_14, (MR_Integer) 0)));
#line 305 "modules.m"
        MR_Word parse_tree__modules__V_77_77;
#line 305 "modules.m"
        MR_Word parse_tree__modules__V_78_78;

#line 307 "modules.m"
        {
#line 307 "modules.m"
          parse_tree__modules__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 307 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_78_78, 1) = ((MR_Box) (parse_tree__modules__Timestamp_41));
#line 307 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_78_78, 2) = ((MR_Box) ((MR_Integer) 1));
#line 307 "modules.m"
        }
#line 306 "modules.m"
        {
#line 306 "modules.m"
          parse_tree__modules__V_77_77 = mercury__map__singleton_2_f_0(parse_tree__modules__TypeCtorInfo_152_152, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, ((MR_Box) (parse_tree__modules__ModuleName_20)), ((MR_Box) (parse_tree__modules__V_78_78)));
        }
#line 306 "modules.m"
        {
#line 306 "modules.m"
          parse_tree__modules__MaybeTimestampMap_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 306 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__MaybeTimestampMap_42, 0) = ((MR_Box) (parse_tree__modules__V_77_77));
#line 306 "modules.m"
        }
#line 305 "modules.m"
      }
#line 319 "modules.m"
    {
#line 319 "modules.m"
      parse_tree__modules__make_module_and_imports_12_p_0(parse_tree__modules__SourceFileName_12, parse_tree__modules__SourceFileModuleName_13, parse_tree__modules__ModuleName_20, parse_tree__modules__ModuleNameContext_21, parse_tree__modules__SrcItemBlocks1_37, parse_tree__modules__STATE_VARIABLE_Specs_76_76, parse_tree__modules__PublicChildren_38, parse_tree__modules__NestedChildren_15, parse_tree__modules__FactDeps_39, parse_tree__modules__ForeignIncludeFiles_40, parse_tree__modules__MaybeTimestampMap_42, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_81_81);
    }
#line 328 "modules.m"
    {
#line 328 "modules.m"
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_src_module_section_0, parse_tree__modules__Globals_11, parse_tree__modules__SrcItemBlocks1_37, &parse_tree__modules__ImplicitIntImportedModules_43, &parse_tree__modules__ImplicitIntUsedModules_44);
    }
#line 330 "modules.m"
    {
#line 330 "modules.m"
      parse_tree__modules__IntImportedModules2_45 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_152_152, parse_tree__modules__ImplicitIntImportedModules_43, parse_tree__modules__IntImportedModules1_33);
    }
#line 332 "modules.m"
    {
#line 332 "modules.m"
      parse_tree__modules__IntUsedModules2_46 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_152_152, parse_tree__modules__ImplicitIntUsedModules_44, parse_tree__modules__IntUsedModules1_34);
    }
#line 341 "modules.m"
    parse_tree__modules__V_82_82 = (MR_Word) &parse_tree__modules_scalar_common_3[1];
#line 12166 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_165_165 = (MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0;
#line 339 "modules.m"
    {
#line 339 "modules.m"
      parse_tree__modules__process_module_private_interfaces_14_p_0(parse_tree__modules__TypeCtorInfo_165_165, parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__AncestorModules_32, parse_tree__modules__V_82_82, (MR_Word) &parse_tree__modules_scalar_common_3[2], (MR_Word) &parse_tree__modules_scalar_common_2[2], parse_tree__modules__IntImportedModules2_45, &parse_tree__modules__IntImportedModules_47, parse_tree__modules__IntUsedModules2_46, &parse_tree__modules__IntUsedModules_48, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_81_81, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85);
    }
#line 351 "modules.m"
    {
#line 351 "modules.m"
      parse_tree__modules__process_module_long_interfaces_16_p_0(parse_tree__modules__TypeCtorInfo_165_165, parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 1, parse_tree__modules__IntImportedModules_47, (MR_Integer) 3, parse_tree__modules__V_82_82, (MR_Word) &parse_tree__modules_scalar_common_2[3], (MR_Word) &parse_tree__modules_scalar_common_2[4], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IntIndirectImports1_51, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__IntImpIndirectImports1_52, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94);
    }
#line 362 "modules.m"
    {
#line 362 "modules.m"
      parse_tree__modules__process_module_long_interfaces_16_p_0(parse_tree__modules__TypeCtorInfo_165_165, parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 1, parse_tree__modules__ImpImportedModules_35, (MR_Integer) 3, (MR_Word) &parse_tree__modules_scalar_common_3[3], (MR_Word) &parse_tree__modules_scalar_common_2[5], (MR_Word) &parse_tree__modules_scalar_common_2[6], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ImpIndirectImports1_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__ImpImpIndirectImports1_56, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_94_94, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_102_102);
    }
#line 374 "modules.m"
    parse_tree__modules__V_107_107 = (MR_Word) &parse_tree__modules_scalar_common_3[4];
#line 372 "modules.m"
    {
#line 372 "modules.m"
      parse_tree__modules__process_module_long_interfaces_16_p_0(parse_tree__modules__TypeCtorInfo_165_165, parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 0, parse_tree__modules__IntUsedModules_48, (MR_Integer) 3, parse_tree__modules__V_107_107, (MR_Word) &parse_tree__modules_scalar_common_2[7], (MR_Word) &parse_tree__modules_scalar_common_2[8], parse_tree__modules__IntIndirectImports1_51, &parse_tree__modules__IntIndirectImports_57, parse_tree__modules__IntImpIndirectImports1_52, &parse_tree__modules__IntImpIndirectImports2_58, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_102_102, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_110_110);
    }
#line 382 "modules.m"
    parse_tree__modules__V_115_115 = (MR_Word) &parse_tree__modules_scalar_common_3[5];
#line 380 "modules.m"
    {
#line 380 "modules.m"
      parse_tree__modules__process_module_long_interfaces_16_p_0(parse_tree__modules__TypeCtorInfo_165_165, parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 0, parse_tree__modules__ImpUsedModules_36, (MR_Integer) 3, parse_tree__modules__V_115_115, (MR_Word) &parse_tree__modules_scalar_common_2[9], (MR_Word) &parse_tree__modules_scalar_common_2[10], parse_tree__modules__ImpIndirectImports1_55, &parse_tree__modules__ImpIndirectImports_59, parse_tree__modules__ImpImpIndirectImports1_56, &parse_tree__modules__ImpImpIndirectImports2_60, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_110_110, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_118_118);
    }
#line 389 "modules.m"
    {
#line 389 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_49_93_95_48_13_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__IntIndirectImports_57, (MR_Integer) 2, parse_tree__modules__V_107_107, parse_tree__modules__IntImpIndirectImports2_58, &parse_tree__modules__IntImpIndirectImports_61, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_118_118, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_125_125);
    }
#line 396 "modules.m"
    {
#line 396 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_49_93_95_48_13_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__ImpIndirectImports_59, (MR_Integer) 2, parse_tree__modules__V_115_115, parse_tree__modules__ImpImpIndirectImports2_60, &parse_tree__modules__ImpImpIndirectImports_62, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_125_125, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_132_132);
    }
#line 408 "modules.m"
    {
#line 408 "modules.m"
      parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho6_11_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__IntImpIndirectImports_61, (MR_Integer) 2, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_132_132, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_139_139);
    }
#line 413 "modules.m"
    {
#line 413 "modules.m"
      parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho6_11_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__ImpImpIndirectImports_62, (MR_Integer) 2, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_139_139, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_145_145);
    }
#line 419 "modules.m"
    {
#line 419 "modules.m"
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(parse_tree__modules__STATE_VARIABLE_ModuleAndImports_145_145, &parse_tree__modules__AugCompUnit_63, &parse_tree__modules__V_64_64, &parse_tree__modules__V_65_65);
    }
#line 423 "modules.m"
    {
#line 423 "modules.m"
      parse_tree__modules__V_150_150 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_152_152, parse_tree__modules__ImpImportedModules_35, parse_tree__modules__ImpUsedModules_36);
    }
#line 422 "modules.m"
    {
#line 422 "modules.m"
      parse_tree__modules__V_149_149 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_152_152, parse_tree__modules__IntUsedModules_48, parse_tree__modules__V_150_150);
    }
#line 422 "modules.m"
    {
#line 422 "modules.m"
      parse_tree__modules__V_147_147 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_152_152, parse_tree__modules__IntImportedModules_47, parse_tree__modules__V_149_149);
    }
#line 421 "modules.m"
    {
#line 421 "modules.m"
      parse_tree__modules__check_imports_accessibility_4_p_0(parse_tree__modules__AugCompUnit_63, parse_tree__modules__V_147_147, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__AccessSpecs_66);
    }
#line 425 "modules.m"
    {
#line 425 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__AccessSpecs_66, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_145_145, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67);
#line 425 "modules.m"
      return;
    }
#line 262 "modules.m"
  }
#line 79 "modules.m"
}

void mercury__parse_tree__modules__init(void)
{
}

void mercury__parse_tree__modules__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_int_section_maker_1);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_module_import_or_use_map_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_module_inclusion_map_0);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_section_appender_1);
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_section_visibility_1);
}

void mercury__parse_tree__modules__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.modules. */
