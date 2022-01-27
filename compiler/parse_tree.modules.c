/*
** Automatically generated from `modules.m'
** by the Mercury compiler,
** version DEV
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
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 108 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 111 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 114 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

#line 117 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

#line 120 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_module_section_0;

#line 123 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_module_section_0;

#line 126 "parse_tree.modules.c"
static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_import_or_use_context_0_0[2];

#line 129 "parse_tree.modules.c"
static const MR_DuFunctorDesc parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0;

#line 132 "parse_tree.modules.c"
static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0[1];

#line 135 "parse_tree.modules.c"
static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_import_or_use_context_0[1];

#line 138 "parse_tree.modules.c"
static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_import_or_use_context_0[1];

#line 141 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_context_0[1];

#line 144 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_func_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_kind__type_ctor_info_int_file_kind_0__pseudo_1;

#line 147 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

#line 150 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 153 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__pti_item_block_1__pseudo_1;

#line 156 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1;

#line 159 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_pred_3__pseudo_list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 162 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__modules____vpti_func_2__pseudo_1__plain_bool__type_ctor_info_bool_0;

#line 165 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0_10001(
#line 168 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 170 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 173 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0_10001(
#line 176 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 178 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 180 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 183 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____int_section_maker_1_0_10001(
#line 186 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 188 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 190 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 193 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____int_section_maker_1_0_10001(
#line 196 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 198 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 200 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 202 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4);

#line 205 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0_10001(
#line 208 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 210 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 213 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0_10001(
#line 216 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 218 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 220 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 223 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0_10001(
#line 226 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 228 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 231 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0_10001(
#line 234 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 236 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 238 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 241 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_appender_1_0_10001(
#line 244 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 246 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 248 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 251 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____section_appender_1_0_10001(
#line 254 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 256 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 258 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 260 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4);

#line 263 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0_10001(
#line 266 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 268 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 270 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 273 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0_10001(
#line 276 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 278 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 280 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 282 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4);

#line 977 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_51_95_95_91_54_93_95_48_15_p_0(
#line 977 "modules.m"
  MR_Word parse_tree__modules__V_168_168,
#line 977 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 977 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 977 "modules.m"
  MR_Word parse_tree__modules__Import_18,
#line 977 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_52,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56);

#line 204 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_50_95_95_91_54_93_95_48_15_p_0(
#line 204 "modules.m"
  MR_Word parse_tree__modules__V_214_214,
#line 204 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 204 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 204 "modules.m"
  MR_Word parse_tree__modules__Imports_18,
#line 204 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 204 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29,
#line 204 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_30,
#line 204 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31,
#line 204 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32,
#line 204 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 204 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34);

#line 765 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_49_95_95_91_54_44_32_55_93_95_48_14_p_0(
#line 765 "modules.m"
  MR_Word parse_tree__modules__V_161_161,
#line 765 "modules.m"
  MR_Word parse_tree__modules__V_162_162,
#line 765 "modules.m"
  MR_Word parse_tree__modules__Globals_15,
#line 765 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_16,
#line 765 "modules.m"
  MR_Word parse_tree__modules__Ancestor_17,
#line 765 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_48,
#line 765 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_49,
#line 765 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_50,
#line 765 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_51,
#line 765 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52,
#line 765 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53);

#line 747 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_56_95_95_91_54_44_32_55_93_95_48_14_p_0_1(
#line 747 "modules.m"
  MR_Box parse_tree__modules__closure_arg);

#line 118 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_56_95_95_91_54_44_32_55_93_95_48_14_p_0(
#line 118 "modules.m"
  MR_Word parse_tree__modules__V_105_105,
#line 118 "modules.m"
  MR_Word parse_tree__modules__V_106_106,
#line 118 "modules.m"
  MR_Word parse_tree__modules__Globals_15,
#line 118 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_16,
#line 118 "modules.m"
  MR_Word parse_tree__modules__Ancestors_17,
#line 118 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_29,
#line 118 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_30,
#line 118 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_31,
#line 118 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_32,
#line 118 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 118 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34);

#line 395 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_49_93_95_48_16_p_0_2(
#line 398 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 400 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 402 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 404 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 407 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_49_93_95_48_16_p_0_1(
#line 410 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 412 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 414 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 142 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_49_93_95_48_16_p_0(
#line 142 "modules.m"
  MR_Word parse_tree__modules__Globals_17,
#line 142 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_18,
#line 142 "modules.m"
  MR_Word parse_tree__modules__NeedQual_19,
#line 142 "modules.m"
  MR_Word parse_tree__modules__Imports_20,
#line 142 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_21,
#line 142 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_22,
#line 142 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32,
#line 142 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_33,
#line 142 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34,
#line 142 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35,
#line 142 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36,
#line 142 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37);

#line 445 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_54_95_95_91_49_93_95_48_16_p_0_2(
#line 448 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 450 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 452 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 454 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 457 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_54_95_95_91_49_93_95_48_16_p_0_1(
#line 460 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 462 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 464 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 142 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_54_95_95_91_49_93_95_48_16_p_0(
#line 142 "modules.m"
  MR_Word parse_tree__modules__Globals_17,
#line 142 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_18,
#line 142 "modules.m"
  MR_Word parse_tree__modules__NeedQual_19,
#line 142 "modules.m"
  MR_Word parse_tree__modules__Imports_20,
#line 142 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_21,
#line 142 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_22,
#line 142 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32,
#line 142 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_33,
#line 142 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34,
#line 142 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35,
#line 142 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36,
#line 142 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37);

#line 164 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_54_93_95_48_13_p_0(
#line 164 "modules.m"
  MR_Word parse_tree__modules__V_40_40,
#line 164 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 164 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 164 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 164 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 164 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 164 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 164 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 164 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28);

#line 1190 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_3_p_0(
#line 1190 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1190 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_2_p_0(
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1072 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(
#line 1072 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1072 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2);

#line 719 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1(
#line 719 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 719 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 704 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(
#line 704 "modules.m"
  MR_Word parse_tree__modules__Context_10,
#line 704 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportedModules_0_20,
#line 704 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportedModules_21,
#line 704 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_UsedModules_0_22,
#line 704 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_UsedModules_23,
#line 704 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_24,
#line 704 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_25);

#line 676 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_12_p_0(
#line 676 "modules.m"
  MR_Word parse_tree__modules__Context_14,
#line 676 "modules.m"
  MR_Word parse_tree__modules__IntImportedModules0_15,
#line 676 "modules.m"
  MR_Word * parse_tree__modules__IntImportedModules_16,
#line 676 "modules.m"
  MR_Word parse_tree__modules__IntUsedModules0_17,
#line 676 "modules.m"
  MR_Word * parse_tree__modules__IntUsedModules_18,
#line 676 "modules.m"
  MR_Word parse_tree__modules__ImpImportedModules0_19,
#line 676 "modules.m"
  MR_Word * parse_tree__modules__ImpImportedModules_20,
#line 676 "modules.m"
  MR_Word parse_tree__modules__ImpUsedModules0_21,
#line 676 "modules.m"
  MR_Word * parse_tree__modules__ImpUsedModules_22,
#line 676 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 676 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27);

#line 977 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interface__ho15_15_p_0(
#line 977 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 977 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 977 "modules.m"
  MR_Word parse_tree__modules__Import_18,
#line 977 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_52,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56);

#line 204 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces__ho14_15_p_0(
#line 204 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 204 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 204 "modules.m"
  MR_Word parse_tree__modules__Imports_18,
#line 204 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 204 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29,
#line 204 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_30,
#line 204 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31,
#line 204 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32,
#line 204 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 204 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34);

#line 164 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho10_13_p_0(
#line 164 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 164 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 164 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 164 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 164 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 164 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 164 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 164 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28);

#line 184 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho9_11_p_0(
#line 184 "modules.m"
  MR_Word parse_tree__modules__Globals_12,
#line 184 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_13,
#line 184 "modules.m"
  MR_Word parse_tree__modules__Imports_14,
#line 184 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_15,
#line 184 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22,
#line 184 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23);

#line 1209 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho4_6_p_0(
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6);

#line 1209 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho3_6_p_0(
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6);

#line 1209 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho2_6_p_0(
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6);

#line 1209 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho1_6_p_0(
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6);

#line 747 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__747__1_2_p_0(
#line 747 "modules.m"
  MR_Word parse_tree__modules__FirstAncestor_25,
#line 747 "modules.m"
  MR_Word parse_tree__modules__ModuleName_27);

#line 1190 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0(
#line 1190 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_6,
#line 1190 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1190 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0(
#line 1190 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_5,
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1148 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0(
#line 1148 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1148 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1148 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1148 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0(
#line 1148 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1148 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1156 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0(
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1156 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0(
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1150 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0(
#line 1150 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1150 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1150 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1150 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0(
#line 1150 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1150 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1308 "modules.m"
static void MR_CALL 
parse_tree__modules__report_inaccessible_module_error_6_p_0(
#line 1308 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1308 "modules.m"
  MR_Word parse_tree__modules__ParentModule_8,
#line 1308 "modules.m"
  MR_String parse_tree__modules__SubModule_9,
#line 1308 "modules.m"
  MR_Word parse_tree__modules__ImportOrUseContext_10,
#line 1308 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1308 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20);

#line 1299 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0_1(
#line 1299 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1299 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1299 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1299 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1283 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0(
#line 1283 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1283 "modules.m"
  MR_Word parse_tree__modules__InclMap_8,
#line 1283 "modules.m"
  MR_Word parse_tree__modules__ImportUseMap_9,
#line 1283 "modules.m"
  MR_Word parse_tree__modules__ImportedModule_10,
#line 1283 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1283 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20);

#line 1247 "modules.m"
static void MR_CALL 
parse_tree__modules__record_avails_acc_3_p_0(
#line 1247 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1247 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_2,
#line 1247 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_3);

#line 1231 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_acc_3_p_0(
#line 1231 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1231 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_2,
#line 1231 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_3);

#line 1138 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_4_p_0_1(
#line 1138 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1138 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1138 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1138 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1122 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_4_p_0(
#line 1122 "modules.m"
  MR_Word parse_tree__modules__AugCompUnit_5,
#line 1122 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_6,
#line 1122 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1122 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20);

#line 1078 "modules.m"
static void MR_CALL 
parse_tree__modules__maybe_record_timestamp_6_p_0(
#line 1078 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1078 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_8,
#line 1078 "modules.m"
  MR_Word parse_tree__modules__NeedQual_9,
#line 1078 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamp_10,
#line 1078 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17,
#line 1078 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18);

#line 1034 "modules.m"
static void MR_CALL 
parse_tree__modules__make_module_and_imports_12_p_0(
#line 1034 "modules.m"
  MR_String parse_tree__modules__SourceFileName_13,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_14,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__ModuleName_15,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__ModuleNameContext_16,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__SrcItemBlocks0_17,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__Specs_18,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__PublicChildren_19,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__NestedChildren_20,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__FactDeps_21,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__ForeignIncludeFiles_22,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestampMap_23,
#line 1034 "modules.m"
  MR_Word * parse_tree__modules__Module_24);

#line 977 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interface_15_p_0(
#line 977 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_165,
#line 977 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 977 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 977 "modules.m"
  MR_Word parse_tree__modules__Import_18,
#line 977 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 977 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_20,
#line 977 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_21,
#line 977 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_22,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_52,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56);

#line 855 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_long_interface_16_p_0(
#line 855 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_168,
#line 855 "modules.m"
  MR_Word parse_tree__modules__Globals_17,
#line 855 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_18,
#line 855 "modules.m"
  MR_Word parse_tree__modules__NeedQual_19,
#line 855 "modules.m"
  MR_Word parse_tree__modules__Import_20,
#line 855 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_21,
#line 855 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_22,
#line 855 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_23,
#line 855 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_24,
#line 855 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_54,
#line 855 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_55,
#line 855 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_56,
#line 855 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_57,
#line 855 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58,
#line 855 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_59);

#line 765 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_private_interface_14_p_0(
#line 765 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_157,
#line 765 "modules.m"
  MR_Word parse_tree__modules__Globals_15,
#line 765 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_16,
#line 765 "modules.m"
  MR_Word parse_tree__modules__Ancestor_17,
#line 765 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_18,
#line 765 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_19,
#line 765 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_20,
#line 765 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_48,
#line 765 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_49,
#line 765 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_50,
#line 765 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_51,
#line 765 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52,
#line 765 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53);

#line 735 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__wrap_symname_1_f_0(
#line 735 "modules.m"
  MR_Word parse_tree__modules__ModuleName_3);

#line 650 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_imported_ancestor_5_p_0(
#line 650 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 650 "modules.m"
  MR_Word parse_tree__modules__Context_7,
#line 650 "modules.m"
  MR_Word parse_tree__modules__AncestorName_8,
#line 650 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_15,
#line 650 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_16);

#line 635 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_1(
#line 635 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 635 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 635 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 635 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 626 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0(
#line 626 "modules.m"
  MR_Word parse_tree__modules__ModuleName_8,
#line 626 "modules.m"
  MR_Word parse_tree__modules__Context_9,
#line 626 "modules.m"
  MR_Word parse_tree__modules__AncestorModules_10,
#line 626 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_11,
#line 626 "modules.m"
  MR_Word parse_tree__modules__UsedModules_12,
#line 626 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_20,
#line 626 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_21);

#line 581 "modules.m"
static void MR_CALL 
parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(
#line 581 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 581 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_0_2,
#line 581 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevClauses_3,
#line 581 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4,
#line 581 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevImpDecls_5);

#line 542 "modules.m"
static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(
#line 542 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 542 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2);

#line 523 "modules.m"
static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_src_2_p_0(
#line 523 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 523 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2);

#line 504 "modules.m"
static void MR_CALL 
parse_tree__modules__get_src_item_blocks_public_children_3_p_0(
#line 504 "modules.m"
  MR_Word parse_tree__modules__RawCompUnit_4,
#line 504 "modules.m"
  MR_Word * parse_tree__modules__SrcItemBlocks_5,
#line 504 "modules.m"
  MR_Word * parse_tree__modules__PublicChildren_6);

#line 747 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__process_module_private_interfaces_14_p_0_1(
#line 747 "modules.m"
  MR_Box parse_tree__modules__closure_arg);

#line 476 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_5(
#line 476 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 476 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 476 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 470 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_4(
#line 470 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 470 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 470 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 454 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_3(
#line 454 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 454 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 454 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 442 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_2(
#line 442 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 442 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 442 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 433 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_1(
#line 433 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 433 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 433 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 357 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_4(
#line 357 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 357 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 357 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 349 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_3(
#line 349 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 349 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 349 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 339 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_2(
#line 339 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 339 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 339 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 316 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_1(
#line 316 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 316 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 316 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__modules_scalar_common_1[59][2];

static /* final */ const MR_Box parse_tree__modules_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__modules_scalar_common_3[10][4];

static /* final */ const MR_Box parse_tree__modules_scalar_common_4[1][7];

static /* final */ const MR_Box parse_tree__modules_scalar_common_5[2][5];

static /* final */ const MR_Box parse_tree__modules_scalar_common_6[1][8];

static /* final */ const MR_Box parse_tree__modules_scalar_common_7[2][9];

static /* final */ const MR_Box parse_tree__modules_scalar_common_8[2][6];




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

static /* final */ const MR_Box parse_tree__modules_scalar_common_2[7][3] = {
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
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_54_95_95_91_49_93_95_48_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[1])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_54_95_95_91_49_93_95_48_16_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_49_93_95_48_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[1])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_49_93_95_48_16_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_3[10][4] = {
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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_imported_modules_10_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_4[0])),
    ((MR_Box) (parse_tree__modules__grab_unqual_imported_modules_7_p_0_5)),
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

static /* final */ const MR_Box parse_tree__modules_scalar_common_5[2][5] = {
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

static /* final */ const MR_Box parse_tree__modules_scalar_common_6[1][8] = {
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

static /* final */ const MR_Box parse_tree__modules_scalar_common_7[2][9] = {
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

static /* final */ const MR_Box parse_tree__modules_scalar_common_8[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_module_section_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "mdbcomp.rtti_access.mh"



#line 1773 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1781 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1789 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

#line 1798 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0
  }
};

#line 1806 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0
  }
};

#line 1815 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0
  }
};

#line 1823 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_module_section_0
  }
};

#line 1831 "parse_tree.modules.c"
static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_import_or_use_context_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1837 "parse_tree.modules.c"
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

#line 1852 "parse_tree.modules.c"
static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0
};

#line 1857 "parse_tree.modules.c"
static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_import_or_use_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0
  }
};

#line 1866 "parse_tree.modules.c"
static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_import_or_use_context_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0
};

#line 1871 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_context_0[1] = {
  (MR_Integer) 0
};

#line 1876 "parse_tree.modules.c"
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

#line 1893 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_func_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_kind__type_ctor_info_int_file_kind_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1904 "parse_tree.modules.c"
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

#line 1921 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0
  }
};

#line 1930 "parse_tree.modules.c"
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

#line 1947 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

#line 1956 "parse_tree.modules.c"
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

#line 1973 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1981 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__parse_tree__prog_item__pti_item_block_1__pseudo_1
  }
};

#line 1989 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_pred_3__pseudo_list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0,
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 2000 "parse_tree.modules.c"
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

#line 2017 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__modules____vpti_func_2__pseudo_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 2027 "parse_tree.modules.c"
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

#line 2044 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0_10001(
#line 2047 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2049 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2051 "parse_tree.modules.c"
{
#line 2053 "parse_tree.modules.c"
  {
#line 2055 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2058 "parse_tree.modules.c"
    {
#line 2060 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____import_or_use_context_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2063 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2065 "parse_tree.modules.c"
  }
#line 2067 "parse_tree.modules.c"
}

#line 2070 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0_10001(
#line 2073 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2075 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2077 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2079 "parse_tree.modules.c"
{
#line 2081 "parse_tree.modules.c"
  {
#line 2083 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2086 "parse_tree.modules.c"
    {
#line 2088 "parse_tree.modules.c"
      parse_tree__modules____Compare____import_or_use_context_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2091 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2093 "parse_tree.modules.c"
  }
#line 2095 "parse_tree.modules.c"
}

#line 2098 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____int_section_maker_1_0_10001(
#line 2101 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2103 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2105 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2107 "parse_tree.modules.c"
{
#line 2109 "parse_tree.modules.c"
  {
#line 2111 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2114 "parse_tree.modules.c"
    {
#line 2116 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____int_section_maker_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2119 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2121 "parse_tree.modules.c"
  }
#line 2123 "parse_tree.modules.c"
}

#line 2126 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____int_section_maker_1_0_10001(
#line 2129 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2131 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 2133 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 2135 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4)
#line 2137 "parse_tree.modules.c"
{
#line 2139 "parse_tree.modules.c"
  {
#line 2141 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2144 "parse_tree.modules.c"
    {
#line 2146 "parse_tree.modules.c"
      parse_tree__modules____Compare____int_section_maker_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_3), ((MR_Word) parse_tree__modules__wrapper_arg_4));
    }
#line 2149 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2151 "parse_tree.modules.c"
  }
#line 2153 "parse_tree.modules.c"
}

#line 2156 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0_10001(
#line 2159 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2161 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2163 "parse_tree.modules.c"
{
#line 2165 "parse_tree.modules.c"
  {
#line 2167 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2170 "parse_tree.modules.c"
    {
#line 2172 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____module_import_or_use_map_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2175 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2177 "parse_tree.modules.c"
  }
#line 2179 "parse_tree.modules.c"
}

#line 2182 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0_10001(
#line 2185 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2187 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2189 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2191 "parse_tree.modules.c"
{
#line 2193 "parse_tree.modules.c"
  {
#line 2195 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2198 "parse_tree.modules.c"
    {
#line 2200 "parse_tree.modules.c"
      parse_tree__modules____Compare____module_import_or_use_map_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2203 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2205 "parse_tree.modules.c"
  }
#line 2207 "parse_tree.modules.c"
}

#line 2210 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0_10001(
#line 2213 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2215 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2217 "parse_tree.modules.c"
{
#line 2219 "parse_tree.modules.c"
  {
#line 2221 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2224 "parse_tree.modules.c"
    {
#line 2226 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____module_inclusion_map_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2229 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2231 "parse_tree.modules.c"
  }
#line 2233 "parse_tree.modules.c"
}

#line 2236 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0_10001(
#line 2239 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2241 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2243 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2245 "parse_tree.modules.c"
{
#line 2247 "parse_tree.modules.c"
  {
#line 2249 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2252 "parse_tree.modules.c"
    {
#line 2254 "parse_tree.modules.c"
      parse_tree__modules____Compare____module_inclusion_map_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2257 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2259 "parse_tree.modules.c"
  }
#line 2261 "parse_tree.modules.c"
}

#line 2264 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_appender_1_0_10001(
#line 2267 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2269 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2271 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2273 "parse_tree.modules.c"
{
#line 2275 "parse_tree.modules.c"
  {
#line 2277 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2280 "parse_tree.modules.c"
    {
#line 2282 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____section_appender_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2285 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2287 "parse_tree.modules.c"
  }
#line 2289 "parse_tree.modules.c"
}

#line 2292 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____section_appender_1_0_10001(
#line 2295 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2297 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 2299 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 2301 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4)
#line 2303 "parse_tree.modules.c"
{
#line 2305 "parse_tree.modules.c"
  {
#line 2307 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2310 "parse_tree.modules.c"
    {
#line 2312 "parse_tree.modules.c"
      parse_tree__modules____Compare____section_appender_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_3), ((MR_Word) parse_tree__modules__wrapper_arg_4));
    }
#line 2315 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2317 "parse_tree.modules.c"
  }
#line 2319 "parse_tree.modules.c"
}

#line 2322 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0_10001(
#line 2325 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2327 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2329 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2331 "parse_tree.modules.c"
{
#line 2333 "parse_tree.modules.c"
  {
#line 2335 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2338 "parse_tree.modules.c"
    {
#line 2340 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____section_visibility_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2343 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2345 "parse_tree.modules.c"
  }
#line 2347 "parse_tree.modules.c"
}

#line 2350 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0_10001(
#line 2353 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2355 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 2357 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 2359 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4)
#line 2361 "parse_tree.modules.c"
{
#line 2363 "parse_tree.modules.c"
  {
#line 2365 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2368 "parse_tree.modules.c"
    {
#line 2370 "parse_tree.modules.c"
      parse_tree__modules____Compare____section_visibility_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_3), ((MR_Word) parse_tree__modules__wrapper_arg_4));
    }
#line 2373 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2375 "parse_tree.modules.c"
  }
#line 2377 "parse_tree.modules.c"
}

#line 977 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_51_95_95_91_54_93_95_48_15_p_0(
#line 977 "modules.m"
  MR_Word parse_tree__modules__V_168_168,
#line 977 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 977 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 977 "modules.m"
  MR_Word parse_tree__modules__Import_18,
#line 977 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_52,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56)
#line 977 "modules.m"
{
#line 988 "modules.m"
  {
#line 988 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 988 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_167_167;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ReturnTimestamp_27;
#line 988 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestamp_29;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntParseTree_30;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntSpecs_31;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntError_32;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntModuleName_33;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntKind_34;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntContext_35;
#line 988 "modules.m"
    MR_Word parse_tree__modules__MaybeVersionNumbers_36;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntIncls_37;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpIncls_38;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntAvails_39;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpAvails_40;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntItems_41;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpItems_42;
#line 988 "modules.m"
    MR_Word parse_tree__modules__IntImports1_43;
#line 988 "modules.m"
    MR_Word parse_tree__modules__IntUses1_44;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ImpImports1_45;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ImpUses1_46;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntItemBlocks_47;
#line 988 "modules.m"
    MR_Word parse_tree__modules__Statistics_48;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ModIndirectImports0_49;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ModIndirectImports_50;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 24)));
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_60_60;
#line 988 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65;
#line 988 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_67_67;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_68_68;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_70_70;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_71_71;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_72_72;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_75_75;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_76_76;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_77_77;
#line 988 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79;
#line 988 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80;
#line 989 "modules.m"
    MR_String parse_tree__modules__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 0)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 1)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 2)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 3)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 4)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 5)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 6)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 7)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 8)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 9)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 10)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 11)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 12)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 13)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 14)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 15)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 16)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 17)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 18)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 19)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 20)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 21)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 22)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 23)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 25)));
#line 989 "modules.m"
    MR_String parse_tree__modules__V_109_109 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 26)));
#line 991 "modules.m"
    MR_Word parse_tree__modules__V_110_110;
#line 991 "modules.m"
    MR_Word parse_tree__modules__V_111_111;
#line 991 "modules.m"
    MR_String parse_tree__modules___ImportFileName_28;
#line 1028 "modules.m"
    MR_String parse_tree__modules__V_112_112;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_113_113;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_114_114;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_115_115;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_116_116;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_117_117;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_118_118;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_119_119;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_120_120;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_121_121;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_122_122;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_123_123;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_124_124;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_125_125;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_126_126;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_127_127;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_128_128;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_129_129;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_130_130;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_131_131;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_132_132;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_133_133;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_134_134;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_135_135;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_136_136;
#line 1028 "modules.m"
    MR_String parse_tree__modules__V_137_137;
#line 1030 "modules.m"
    MR_String parse_tree__modules__V_138_138;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_139_139;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_140_140;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_141_141;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_142_142;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_143_143;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_144_144;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_146_146;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_147_147;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_148_148;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_149_149;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_150_150;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_151_151;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_152_152;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_153_153;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_154_154;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_155_155;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_156_156;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_157_157;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_158_158;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_159_159;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_160_160;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_161_161;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_162_162;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_163_163;
#line 1030 "modules.m"
    MR_String parse_tree__modules__V_164_164;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_145_145;

#line 989 "modules.m"
    {
#line 989 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_59_59, &parse_tree__modules__ReturnTimestamp_27);
    }
#line 991 "modules.m"
    parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 0)));
#line 991 "modules.m"
    parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 1)));
#line 991 "modules.m"
    parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 2)));
#line 991 "modules.m"
    {
#line 991 "modules.m"
      parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_16, parse_tree__modules__V_60_60, (MR_String) "Reading short interface for module", (MR_Integer) 0, parse_tree__modules__Import_18, parse_tree__modules__IntFileKind_19, &parse_tree__modules___ImportFileName_28, parse_tree__modules__ReturnTimestamp_27, &parse_tree__modules__MaybeTimestamp_29, &parse_tree__modules__ShortIntParseTree_30, &parse_tree__modules__ShortIntSpecs_31, &parse_tree__modules__ShortIntError_32);
    }
#line 996 "modules.m"
    {
#line 996 "modules.m"
      parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Import_18, parse_tree__modules__IntFileKind_19, (MR_Integer) 0, parse_tree__modules__MaybeTimestamp_29, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65);
    }
#line 999 "modules.m"
    parse_tree__modules__ShortIntModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 0)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntKind_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 1)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 2)));
#line 999 "modules.m"
    parse_tree__modules__MaybeVersionNumbers_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 3)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntIntIncls_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 4)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntImpIncls_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 5)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntIntAvails_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 6)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntImpAvails_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 7)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntIntItems_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 8)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntImpItems_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 9)));
#line 1004 "modules.m"
    {
#line 1004 "modules.m"
      parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(parse_tree__modules__ShortIntModuleName_33, parse_tree__modules__MaybeVersionNumbers_36, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66);
    }
#line 1006 "modules.m"
    {
#line 1006 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__ShortIntIntAvails_39, &parse_tree__modules__IntImports1_43, &parse_tree__modules__IntUses1_44);
    }
#line 1007 "modules.m"
    {
#line 1007 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__ShortIntImpAvails_40, &parse_tree__modules__ImpImports1_45, &parse_tree__modules__ImpUses1_46);
    }
#line 1009 "modules.m"
    {
#line 1009 "modules.m"
      parse_tree__modules__V_67_67 = parse_tree__status__make_ims_used_3_f_0(parse_tree__modules__V_168_168, parse_tree__modules__Import_18, parse_tree__modules__ShortIntKind_34);
    }
#line 1010 "modules.m"
    {
#line 1010 "modules.m"
      parse_tree__modules__V_68_68 = parse_tree__status__make_ims_abstract_imported_2_f_0(parse_tree__modules__Import_18, parse_tree__modules__ShortIntKind_34);
    }
#line 1008 "modules.m"
    {
#line 1008 "modules.m"
      parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0, parse_tree__modules__ShortIntContext_35, ((MR_Box) (parse_tree__modules__V_67_67)), ((MR_Box) (parse_tree__modules__V_68_68)), parse_tree__modules__ShortIntIntIncls_37, parse_tree__modules__ShortIntImpIncls_38, parse_tree__modules__ShortIntIntAvails_39, parse_tree__modules__ShortIntImpAvails_40, parse_tree__modules__ShortIntIntItems_41, parse_tree__modules__ShortIntImpItems_42, &parse_tree__modules__ShortIntItemBlocks_47);
    }
#line 2723 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_167_167 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1017 "modules.m"
    {
#line 1017 "modules.m"
      parse_tree__modules__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1017 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 0) = ((MR_Box) (parse_tree__modules__IntUses1_44));
#line 1017 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1017 "modules.m"
    }
#line 1017 "modules.m"
    {
#line 1017 "modules.m"
      parse_tree__modules__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1017 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 0) = ((MR_Box) (parse_tree__modules__IntImports1_43));
#line 1017 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 1) = ((MR_Box) (parse_tree__modules__V_72_72));
#line 1017 "modules.m"
    }
#line 1016 "modules.m"
    {
#line 1016 "modules.m"
      parse_tree__modules__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_70_70, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51));
#line 1016 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_70_70, 1) = ((MR_Box) (parse_tree__modules__V_71_71));
#line 1016 "modules.m"
    }
#line 1016 "modules.m"
    {
#line 1016 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_IndirectImports_52 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_167_167, parse_tree__modules__V_70_70);
    }
#line 1019 "modules.m"
    {
#line 1019 "modules.m"
      parse_tree__modules__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 0) = ((MR_Box) (parse_tree__modules__ImpUses1_46));
#line 1019 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1019 "modules.m"
    }
#line 1019 "modules.m"
    {
#line 1019 "modules.m"
      parse_tree__modules__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 0) = ((MR_Box) (parse_tree__modules__ImpImports1_45));
#line 1019 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 1) = ((MR_Box) (parse_tree__modules__V_77_77));
#line 1019 "modules.m"
    }
#line 1018 "modules.m"
    {
#line 1018 "modules.m"
      parse_tree__modules__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53));
#line 1018 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 1) = ((MR_Box) (parse_tree__modules__V_76_76));
#line 1018 "modules.m"
    }
#line 1018 "modules.m"
    {
#line 1018 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_167_167, parse_tree__modules__V_75_75);
    }
#line 1021 "modules.m"
    {
#line 1021 "modules.m"
      parse_tree__module_imports__module_and_imports_add_indirect_int_item_blocks_3_p_0(parse_tree__modules__ShortIntItemBlocks_47, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79);
    }
#line 1022 "modules.m"
    {
#line 1022 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(parse_tree__modules__ShortIntSpecs_31, parse_tree__modules__ShortIntError_32, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80);
    }
#line 1025 "modules.m"
    {
#line 1025 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_16, (MR_Integer) 56, &parse_tree__modules__Statistics_48);
    }
#line 1026 "modules.m"
    {
#line 1026 "modules.m"
      libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_48);
    }
#line 1028 "modules.m"
    parse_tree__modules__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 0)));
#line 1028 "modules.m"
    parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 1)));
#line 1028 "modules.m"
    parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 2)));
#line 1028 "modules.m"
    parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 3)));
#line 1028 "modules.m"
    parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 4)));
#line 1028 "modules.m"
    parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 5)));
#line 1028 "modules.m"
    parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 6)));
#line 1028 "modules.m"
    parse_tree__modules__ModIndirectImports0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 7)));
#line 1028 "modules.m"
    parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 8)));
#line 1028 "modules.m"
    parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 9)));
#line 1028 "modules.m"
    parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 10)));
#line 1028 "modules.m"
    parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 11)));
#line 1028 "modules.m"
    parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 12)));
#line 1028 "modules.m"
    parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 13)));
#line 1028 "modules.m"
    parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 14)));
#line 1028 "modules.m"
    parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 15)));
#line 1028 "modules.m"
    parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 16)));
#line 1028 "modules.m"
    parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 17)));
#line 1028 "modules.m"
    parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 18)));
#line 1028 "modules.m"
    parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 19)));
#line 1028 "modules.m"
    parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 20)));
#line 1028 "modules.m"
    parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 21)));
#line 1028 "modules.m"
    parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 22)));
#line 1028 "modules.m"
    parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 23)));
#line 1028 "modules.m"
    parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 24)));
#line 1028 "modules.m"
    parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 25)));
#line 1028 "modules.m"
    parse_tree__modules__V_137_137 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 26)));
#line 1029 "modules.m"
    {
#line 1029 "modules.m"
      mercury__set__insert_3_p_0(parse_tree__modules__TypeCtorInfo_167_167, ((MR_Box) (parse_tree__modules__Import_18)), parse_tree__modules__ModIndirectImports0_49, &parse_tree__modules__ModIndirectImports_50);
    }
#line 1030 "modules.m"
    parse_tree__modules__V_138_138 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 0)));
#line 1030 "modules.m"
    parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 1)));
#line 1030 "modules.m"
    parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 2)));
#line 1030 "modules.m"
    parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 3)));
#line 1030 "modules.m"
    parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 4)));
#line 1030 "modules.m"
    parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 5)));
#line 1030 "modules.m"
    parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 6)));
#line 1030 "modules.m"
    parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 7)));
#line 1030 "modules.m"
    parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 8)));
#line 1030 "modules.m"
    parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 9)));
#line 1030 "modules.m"
    parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 10)));
#line 1030 "modules.m"
    parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 11)));
#line 1030 "modules.m"
    parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 12)));
#line 1030 "modules.m"
    parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 13)));
#line 1030 "modules.m"
    parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 14)));
#line 1030 "modules.m"
    parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 15)));
#line 1030 "modules.m"
    parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 16)));
#line 1030 "modules.m"
    parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 17)));
#line 1030 "modules.m"
    parse_tree__modules__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 18)));
#line 1030 "modules.m"
    parse_tree__modules__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 19)));
#line 1030 "modules.m"
    parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 20)));
#line 1030 "modules.m"
    parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 21)));
#line 1030 "modules.m"
    parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 22)));
#line 1030 "modules.m"
    parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 23)));
#line 1030 "modules.m"
    parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 24)));
#line 1030 "modules.m"
    parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 25)));
#line 1030 "modules.m"
    parse_tree__modules__V_164_164 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 26)));
#line 1030 "modules.m"
    {
#line 1030 "modules.m"
      MR_Word base;
#line 1030 "modules.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56 = base;
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_138_138));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_139_139));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_140_140));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_141_141));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__V_142_142));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_143_143));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__V_144_144));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__ModIndirectImports_50));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_146_146));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_147_147));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_148_148));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_149_149));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_150_150));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_151_151));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_152_152));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_153_153));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_154_154));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_155_155));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_156_156));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_157_157));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_158_158));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_159_159));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__V_160_160));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__V_161_161));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__V_162_162));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__modules__V_163_163));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_164_164));
#line 1030 "modules.m"
    }
#line 988 "modules.m"
  }
#line 977 "modules.m"
}

#line 204 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_50_95_95_91_54_93_95_48_15_p_0(
#line 204 "modules.m"
  MR_Word parse_tree__modules__V_214_214,
#line 204 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 204 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 204 "modules.m"
  MR_Word parse_tree__modules__Imports_18,
#line 204 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 204 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29,
#line 204 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_30,
#line 204 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31,
#line 204 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32,
#line 204 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 204 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34)
#line 204 "modules.m"
{
#line 973 "modules.m"
  while (MR_TRUE)
#line 973 "modules.m"
    {
#line 973 "modules.m"
      /* tailcall optimized into a loop */
#line 973 "modules.m"
      {
#line 973 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 973 "modules.m"
        MR_Word parse_tree__modules__FirstImport_27;
#line 973 "modules.m"
        MR_Word parse_tree__modules__LaterImports_28;
#line 951 "modules.m"
        MR_Box parse_tree__modules__conv0_FirstImport_27;

#line 951 "modules.m"
        {
#line 951 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv0_FirstImport_27, parse_tree__modules__Imports_18, &parse_tree__modules__LaterImports_28);
        }
#line 951 "modules.m"
        if (parse_tree__modules__succeeded)
#line 951 "modules.m"
          {
#line 951 "modules.m"
            parse_tree__modules__FirstImport_27 = ((MR_Word) parse_tree__modules__conv0_FirstImport_27);
#line 951 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 951 "modules.m"
          }
#line 973 "modules.m"
        if (parse_tree__modules__succeeded)
#line 968 "modules.m"
          {
#line 968 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41;
#line 968 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42;
#line 968 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;
#line 956 "modules.m"
            MR_Word parse_tree__modules__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 7)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 6)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 5)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 4)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 2)));
#line 955 "modules.m"
            MR_String parse_tree__modules__V_186_186 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 26)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 25)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 24)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 23)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 22)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 21)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 20)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 19)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 18)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 17)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 16)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 15)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 14)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 13)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 12)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 11)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 10)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 9)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 8)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 3)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 1)));
#line 955 "modules.m"
            MR_String parse_tree__modules__V_212_212 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 0)));

#line 955 "modules.m"
            {
#line 955 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__FirstImport_27, parse_tree__modules__V_210_210);
            }
#line 956 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 956 "modules.m"
              {
#line 956 "modules.m"
                {
#line 956 "modules.m"
                  parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_208_208);
                }
#line 956 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 956 "modules.m"
                  {
#line 957 "modules.m"
                    {
#line 957 "modules.m"
                      parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_207_207);
                    }
#line 956 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 956 "modules.m"
                      {
#line 958 "modules.m"
                        {
#line 958 "modules.m"
                          parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_206_206);
                        }
#line 956 "modules.m"
                        if (!(parse_tree__modules__succeeded))
#line 959 "modules.m"
                          {
#line 959 "modules.m"
                            {
#line 959 "modules.m"
                              parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_205_205);
                            }
#line 959 "modules.m"
                          }
#line 956 "modules.m"
                      }
#line 956 "modules.m"
                  }
#line 956 "modules.m"
              }
#line 963 "modules.m"
            if (parse_tree__modules__succeeded)
#line 962 "modules.m"
              {
#line 962 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 962 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31;
#line 962 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29;
#line 962 "modules.m"
              }
#line 963 "modules.m"
            else
#line 964 "modules.m"
              {
#line 964 "modules.m"
                parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_51_95_95_91_54_93_95_48_15_p_0(parse_tree__modules__V_214_214, parse_tree__modules__Globals_16, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__FirstImport_27, parse_tree__modules__IntFileKind_19, parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29, &parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43);
              }
#line 969 "modules.m"
            /* direct tailcall eliminated */
#line 969 "modules.m"
            {
#line 969 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_18 = parse_tree__modules__LaterImports_28;
#line 969 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_29 = parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41;
#line 969 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_31 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42;
#line 969 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;

#line 969 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33;
#line 969 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_31;
#line 969 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_29;
#line 969 "modules.m"
              parse_tree__modules__Imports_18 = parse_tree__modules__Imports__tmp_copy_18;
#line 969 "modules.m"
            }
#line 969 "modules.m"
            continue;
#line 968 "modules.m"
          }
#line 973 "modules.m"
        else
#line 974 "modules.m"
          {
#line 974 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 974 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31;
#line 974 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_30 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29;
#line 974 "modules.m"
          }
#line 973 "modules.m"
      }
#line 973 "modules.m"
      break;
#line 973 "modules.m"
    }
#line 204 "modules.m"
}

#line 765 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_49_95_95_91_54_44_32_55_93_95_48_14_p_0(
#line 765 "modules.m"
  MR_Word parse_tree__modules__V_161_161,
#line 765 "modules.m"
  MR_Word parse_tree__modules__V_162_162,
#line 765 "modules.m"
  MR_Word parse_tree__modules__Globals_15,
#line 765 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_16,
#line 765 "modules.m"
  MR_Word parse_tree__modules__Ancestor_17,
#line 765 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_48,
#line 765 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_49,
#line 765 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_50,
#line 765 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_51,
#line 765 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52,
#line 765 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53)
#line 765 "modules.m"
{
#line 775 "modules.m"
  {
#line 775 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 775 "modules.m"
    MR_Word parse_tree__modules__TypeInfo_for_MS_157 = (MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0;
#line 775 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_159_159;
#line 775 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_160_160;
#line 775 "modules.m"
    MR_Word parse_tree__modules__ReturnTimestamp_25;
#line 775 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestamp_27;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntParseTree_28;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntSpecs_29;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntErrors_30;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntModuleName_31;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntKind_32;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntContext_33;
#line 775 "modules.m"
    MR_Word parse_tree__modules__MaybeVersionNumbers_34;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntIntIncls_35;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntImpIncls_36;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntIntAvails_37;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntImpAvails_38;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntIntItems_39;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntImpItems_40;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntItemBlocks_41;
#line 775 "modules.m"
    MR_Word parse_tree__modules__AncDirectImports_42;
#line 775 "modules.m"
    MR_Word parse_tree__modules__AncDirectUses_43;
#line 775 "modules.m"
    MR_Word parse_tree__modules__Statistics_44;
#line 775 "modules.m"
    MR_Word parse_tree__modules__FatalPrivateIntErrors_45;
#line 775 "modules.m"
    MR_Word parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 24)));
#line 775 "modules.m"
    MR_Word parse_tree__modules__V_57_57;
#line 775 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_64_64;
#line 775 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65;
#line 775 "modules.m"
    MR_Word parse_tree__modules__V_66_66;
#line 775 "modules.m"
    MR_Word parse_tree__modules__V_67_67;
#line 775 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_70_70;
#line 775 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71;
#line 775 "modules.m"
    MR_Word parse_tree__modules__V_74_74;
#line 776 "modules.m"
    MR_String parse_tree__modules__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 0)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 1)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 2)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 3)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 4)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 5)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 6)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 7)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 8)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 9)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 10)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 11)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 12)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 13)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 14)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 15)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 16)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 17)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 18)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 19)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 20)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 21)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 22)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 23)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 25)));
#line 776 "modules.m"
    MR_String parse_tree__modules__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 26)));
#line 778 "modules.m"
    MR_Word parse_tree__modules__V_102_102;
#line 778 "modules.m"
    MR_Word parse_tree__modules__V_103_103;
#line 778 "modules.m"
    MR_String parse_tree__modules___AncestorFileName_26;

#line 776 "modules.m"
    {
#line 776 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_56_56, &parse_tree__modules__ReturnTimestamp_25);
    }
#line 778 "modules.m"
    parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_16, (MR_Integer) 0)));
#line 778 "modules.m"
    parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_16, (MR_Integer) 1)));
#line 778 "modules.m"
    parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_16, (MR_Integer) 2)));
#line 778 "modules.m"
    {
#line 778 "modules.m"
      parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_15, parse_tree__modules__V_57_57, (MR_String) "Reading private interface for module", (MR_Integer) 0, parse_tree__modules__Ancestor_17, (MR_Integer) 0, &parse_tree__modules___AncestorFileName_26, parse_tree__modules__ReturnTimestamp_25, &parse_tree__modules__MaybeTimestamp_27, &parse_tree__modules__PrivateIntParseTree_28, &parse_tree__modules__PrivateIntSpecs_29, &parse_tree__modules__PrivateIntErrors_30);
    }
#line 784 "modules.m"
    {
#line 784 "modules.m"
      parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Ancestor_17, (MR_Integer) 0, (MR_Integer) 1, parse_tree__modules__MaybeTimestamp_27, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_64_64);
    }
#line 787 "modules.m"
    parse_tree__modules__PrivateIntModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 0)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntKind_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 1)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 2)));
#line 787 "modules.m"
    parse_tree__modules__MaybeVersionNumbers_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 3)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntIntIncls_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 4)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntImpIncls_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 5)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntIntAvails_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 6)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntImpAvails_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 7)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntIntItems_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 8)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntImpItems_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 9)));
#line 792 "modules.m"
    {
#line 792 "modules.m"
      parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(parse_tree__modules__PrivateIntModuleName_31, parse_tree__modules__MaybeVersionNumbers_34, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_64_64, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65);
    }
#line 795 "modules.m"
    {
#line 795 "modules.m"
      parse_tree__modules__V_66_66 = parse_tree__status__make_ims_imported_3_f_0(parse_tree__modules__V_161_161, parse_tree__modules__Ancestor_17, parse_tree__modules__PrivateIntKind_32);
    }
#line 796 "modules.m"
    {
#line 796 "modules.m"
      parse_tree__modules__V_67_67 = parse_tree__status__make_ims_imported_3_f_0(parse_tree__modules__V_162_162, parse_tree__modules__Ancestor_17, parse_tree__modules__PrivateIntKind_32);
    }
#line 794 "modules.m"
    {
#line 794 "modules.m"
      parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0(parse_tree__modules__TypeInfo_for_MS_157, parse_tree__modules__PrivateIntContext_33, ((MR_Box) (parse_tree__modules__V_66_66)), ((MR_Box) (parse_tree__modules__V_67_67)), parse_tree__modules__PrivateIntIntIncls_35, parse_tree__modules__PrivateIntImpIncls_36, parse_tree__modules__PrivateIntIntAvails_37, parse_tree__modules__PrivateIntImpAvails_38, parse_tree__modules__PrivateIntIntItems_39, parse_tree__modules__PrivateIntImpItems_40, &parse_tree__modules__PrivateIntItemBlocks_41);
    }
#line 802 "modules.m"
    {
#line 802 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(parse_tree__modules__TypeInfo_for_MS_157, parse_tree__modules__PrivateIntItemBlocks_41, &parse_tree__modules__AncDirectImports_42, &parse_tree__modules__AncDirectUses_43);
    }
#line 3457 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_159_159 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 804 "modules.m"
    {
#line 804 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_159_159, parse_tree__modules__AncDirectImports_42, parse_tree__modules__STATE_VARIABLE_DirectImports_0_48, parse_tree__modules__STATE_VARIABLE_DirectImports_49);
    }
#line 805 "modules.m"
    {
#line 805 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_159_159, parse_tree__modules__AncDirectUses_43, parse_tree__modules__STATE_VARIABLE_DirectUses_0_50, parse_tree__modules__STATE_VARIABLE_DirectUses_51);
    }
#line 807 "modules.m"
    {
#line 807 "modules.m"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(parse_tree__modules__PrivateIntItemBlocks_41, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_70_70);
    }
#line 808 "modules.m"
    {
#line 808 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(parse_tree__modules__PrivateIntSpecs_29, parse_tree__modules__PrivateIntErrors_30, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_70_70, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71);
    }
#line 811 "modules.m"
    {
#line 811 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_15, (MR_Integer) 56, &parse_tree__modules__Statistics_44);
    }
#line 812 "modules.m"
    {
#line 812 "modules.m"
      libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_44);
    }
#line 814 "modules.m"
    {
#line 814 "modules.m"
      parse_tree__modules__V_74_74 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
    }
#line 3494 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_160_160 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 814 "modules.m"
    {
#line 814 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_160_160, parse_tree__modules__PrivateIntErrors_30, parse_tree__modules__V_74_74, &parse_tree__modules__FatalPrivateIntErrors_45);
    }
#line 816 "modules.m"
    {
#line 816 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_160_160, parse_tree__modules__FatalPrivateIntErrors_45);
    }
#line 820 "modules.m"
    if (parse_tree__modules__succeeded)
#line 817 "modules.m"
      {
#line 817 "modules.m"
        MR_Word parse_tree__modules__ModAncestors0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 4)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__ModAncestors_47;
#line 817 "modules.m"
        MR_String parse_tree__modules__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 0)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 1)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 2)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 3)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 5)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 6)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 7)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 8)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 9)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 10)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 11)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 12)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 13)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 14)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 15)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 16)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 17)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 18)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 19)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 20)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 21)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 22)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 23)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 24)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 25)));
#line 817 "modules.m"
        MR_String parse_tree__modules__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 26)));
#line 819 "modules.m"
        MR_String parse_tree__modules__V_130_130;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_131_131;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_132_132;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_133_133;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_135_135;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_136_136;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_137_137;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_138_138;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_139_139;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_140_140;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_141_141;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_142_142;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_143_143;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_144_144;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_145_145;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_146_146;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_147_147;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_148_148;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_149_149;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_150_150;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_151_151;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_152_152;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_153_153;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_154_154;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_155_155;
#line 819 "modules.m"
        MR_String parse_tree__modules__V_156_156;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_134_134;

#line 818 "modules.m"
        {
#line 818 "modules.m"
          mercury__set__insert_3_p_0(parse_tree__modules__TypeCtorInfo_159_159, ((MR_Box) (parse_tree__modules__Ancestor_17)), parse_tree__modules__ModAncestors0_46, &parse_tree__modules__ModAncestors_47);
        }
#line 819 "modules.m"
        parse_tree__modules__V_130_130 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 0)));
#line 819 "modules.m"
        parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 1)));
#line 819 "modules.m"
        parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 2)));
#line 819 "modules.m"
        parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 3)));
#line 819 "modules.m"
        parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 4)));
#line 819 "modules.m"
        parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 5)));
#line 819 "modules.m"
        parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 6)));
#line 819 "modules.m"
        parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 7)));
#line 819 "modules.m"
        parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 8)));
#line 819 "modules.m"
        parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 9)));
#line 819 "modules.m"
        parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 10)));
#line 819 "modules.m"
        parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 11)));
#line 819 "modules.m"
        parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 12)));
#line 819 "modules.m"
        parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 13)));
#line 819 "modules.m"
        parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 14)));
#line 819 "modules.m"
        parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 15)));
#line 819 "modules.m"
        parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 16)));
#line 819 "modules.m"
        parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 17)));
#line 819 "modules.m"
        parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 18)));
#line 819 "modules.m"
        parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 19)));
#line 819 "modules.m"
        parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 20)));
#line 819 "modules.m"
        parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 21)));
#line 819 "modules.m"
        parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 22)));
#line 819 "modules.m"
        parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 23)));
#line 819 "modules.m"
        parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 24)));
#line 819 "modules.m"
        parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 25)));
#line 819 "modules.m"
        parse_tree__modules__V_156_156 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 26)));
#line 819 "modules.m"
        {
#line 819 "modules.m"
          MR_Word base;
#line 819 "modules.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 819 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53 = base;
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_130_130));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_131_131));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_132_132));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_133_133));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__ModAncestors_47));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_135_135));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__V_136_136));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__V_137_137));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_138_138));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_139_139));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_140_140));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_141_141));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_142_142));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_143_143));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_144_144));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_145_145));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_146_146));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_147_147));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_148_148));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_149_149));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_150_150));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_151_151));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__V_152_152));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__V_153_153));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__V_154_154));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__modules__V_155_155));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_156_156));
#line 819 "modules.m"
        }
#line 817 "modules.m"
      }
#line 820 "modules.m"
    else
#line 820 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71;
#line 775 "modules.m"
  }
#line 765 "modules.m"
}

#line 747 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_56_95_95_91_54_44_32_55_93_95_48_14_p_0_1(
#line 747 "modules.m"
  MR_Box parse_tree__modules__closure_arg)
#line 747 "modules.m"
{
#line 747 "modules.m"
  {
#line 747 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 747 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;

#line 747 "modules.m"
    {
#line 747 "modules.m"
      return parse_tree__modules__succeeded = parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__747__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))));
    }
#line 747 "modules.m"
    return parse_tree__modules__succeeded;
#line 747 "modules.m"
  }
#line 747 "modules.m"
}

#line 118 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_56_95_95_91_54_44_32_55_93_95_48_14_p_0(
#line 118 "modules.m"
  MR_Word parse_tree__modules__V_105_105,
#line 118 "modules.m"
  MR_Word parse_tree__modules__V_106_106,
#line 118 "modules.m"
  MR_Word parse_tree__modules__Globals_15,
#line 118 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_16,
#line 118 "modules.m"
  MR_Word parse_tree__modules__Ancestors_17,
#line 118 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_29,
#line 118 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_30,
#line 118 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_31,
#line 118 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_32,
#line 118 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 118 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34)
#line 118 "modules.m"
{
#line 761 "modules.m"
  while (MR_TRUE)
#line 761 "modules.m"
    {
#line 761 "modules.m"
      /* tailcall optimized into a loop */
#line 761 "modules.m"
      {
#line 761 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 761 "modules.m"
        MR_Word parse_tree__modules__FirstAncestor_25;
#line 761 "modules.m"
        MR_Word parse_tree__modules__LaterAncestors_26;
#line 745 "modules.m"
        MR_Box parse_tree__modules__conv0_FirstAncestor_25;

#line 745 "modules.m"
        {
#line 745 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv0_FirstAncestor_25, parse_tree__modules__Ancestors_17, &parse_tree__modules__LaterAncestors_26);
        }
#line 745 "modules.m"
        if (parse_tree__modules__succeeded)
#line 745 "modules.m"
          {
#line 745 "modules.m"
            parse_tree__modules__FirstAncestor_25 = ((MR_Word) parse_tree__modules__conv0_FirstAncestor_25);
#line 745 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 745 "modules.m"
          }
#line 761 "modules.m"
        if (parse_tree__modules__succeeded)
#line 746 "modules.m"
          {
#line 746 "modules.m"
            MR_Word parse_tree__modules__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 2)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__ModAncestors0_28;
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_37_37;
#line 746 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_41_41;
#line 746 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_42_42;
#line 746 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;
#line 746 "modules.m"
            MR_String parse_tree__modules__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 0)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 1)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 3)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 4)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 5)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 6)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 7)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 8)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 9)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 10)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 11)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 12)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 13)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 14)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 15)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 16)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 17)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 18)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 19)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 20)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 21)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 22)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 23)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 24)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 25)));
#line 746 "modules.m"
            MR_String parse_tree__modules__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 26)));
#line 749 "modules.m"
            MR_String parse_tree__modules__V_75_75;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_76_76;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_77_77;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_78_78;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_79_79;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_80_80;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_81_81;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_82_82;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_83_83;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_84_84;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_85_85;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_86_86;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_87_87;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_88_88;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_89_89;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_90_90;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_91_91;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_92_92;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_93_93;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_94_94;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_95_95;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_96_96;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_97_97;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_98_98;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_99_99;
#line 749 "modules.m"
            MR_String parse_tree__modules__V_100_100;

#line 747 "modules.m"
            {
#line 747 "modules.m"
              parse_tree__modules__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 747 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[0]));
#line 747 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 1) = ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_56_95_95_91_54_44_32_55_93_95_48_14_p_0_1));
#line 747 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 747 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 3) = ((MR_Box) (parse_tree__modules__FirstAncestor_25));
#line 747 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 4) = ((MR_Box) (parse_tree__modules__ModuleName_27));
#line 747 "modules.m"
            }
#line 747 "modules.m"
            {
#line 747 "modules.m"
              mercury__require__expect_not_4_p_0(parse_tree__modules__V_37_37, (MR_String) "parse_tree.modules", (MR_String) "predicate \140parse_tree.modules.process_module_private_interfaces\'/14", (MR_String) "module is its own ancestor\?");
            }
#line 749 "modules.m"
            parse_tree__modules__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 0)));
#line 749 "modules.m"
            parse_tree__modules__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 1)));
#line 749 "modules.m"
            parse_tree__modules__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 2)));
#line 749 "modules.m"
            parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 3)));
#line 749 "modules.m"
            parse_tree__modules__ModAncestors0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 4)));
#line 749 "modules.m"
            parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 5)));
#line 749 "modules.m"
            parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 6)));
#line 749 "modules.m"
            parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 7)));
#line 749 "modules.m"
            parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 8)));
#line 749 "modules.m"
            parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 9)));
#line 749 "modules.m"
            parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 10)));
#line 749 "modules.m"
            parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 11)));
#line 749 "modules.m"
            parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 12)));
#line 749 "modules.m"
            parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 13)));
#line 749 "modules.m"
            parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 14)));
#line 749 "modules.m"
            parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 15)));
#line 749 "modules.m"
            parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 16)));
#line 749 "modules.m"
            parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 17)));
#line 749 "modules.m"
            parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 18)));
#line 749 "modules.m"
            parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 19)));
#line 749 "modules.m"
            parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 20)));
#line 749 "modules.m"
            parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 21)));
#line 749 "modules.m"
            parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 22)));
#line 749 "modules.m"
            parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 23)));
#line 749 "modules.m"
            parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 24)));
#line 749 "modules.m"
            parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 25)));
#line 749 "modules.m"
            parse_tree__modules__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 26)));
#line 750 "modules.m"
            {
#line 750 "modules.m"
              parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstAncestor_25)), parse_tree__modules__ModAncestors0_28);
            }
#line 753 "modules.m"
            if (parse_tree__modules__succeeded)
#line 752 "modules.m"
              {
#line 752 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 752 "modules.m"
                parse_tree__modules__STATE_VARIABLE_DirectUses_42_42 = parse_tree__modules__STATE_VARIABLE_DirectUses_0_31;
#line 752 "modules.m"
                parse_tree__modules__STATE_VARIABLE_DirectImports_41_41 = parse_tree__modules__STATE_VARIABLE_DirectImports_0_29;
#line 752 "modules.m"
              }
#line 753 "modules.m"
            else
#line 754 "modules.m"
              {
#line 754 "modules.m"
                parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_49_95_95_91_54_44_32_55_93_95_48_14_p_0(parse_tree__modules__V_105_105, parse_tree__modules__V_106_106, parse_tree__modules__Globals_15, parse_tree__modules__HaveReadModuleMaps_16, parse_tree__modules__FirstAncestor_25, parse_tree__modules__STATE_VARIABLE_DirectImports_0_29, &parse_tree__modules__STATE_VARIABLE_DirectImports_41_41, parse_tree__modules__STATE_VARIABLE_DirectUses_0_31, &parse_tree__modules__STATE_VARIABLE_DirectUses_42_42, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43);
              }
#line 758 "modules.m"
            /* direct tailcall eliminated */
#line 758 "modules.m"
            {
#line 758 "modules.m"
              MR_Word parse_tree__modules__Ancestors__tmp_copy_17 = parse_tree__modules__LaterAncestors_26;
#line 758 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0__tmp_copy_29 = parse_tree__modules__STATE_VARIABLE_DirectImports_41_41;
#line 758 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0__tmp_copy_31 = parse_tree__modules__STATE_VARIABLE_DirectUses_42_42;
#line 758 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;

#line 758 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33;
#line 758 "modules.m"
              parse_tree__modules__STATE_VARIABLE_DirectUses_0_31 = parse_tree__modules__STATE_VARIABLE_DirectUses_0__tmp_copy_31;
#line 758 "modules.m"
              parse_tree__modules__STATE_VARIABLE_DirectImports_0_29 = parse_tree__modules__STATE_VARIABLE_DirectImports_0__tmp_copy_29;
#line 758 "modules.m"
              parse_tree__modules__Ancestors_17 = parse_tree__modules__Ancestors__tmp_copy_17;
#line 758 "modules.m"
            }
#line 758 "modules.m"
            continue;
#line 746 "modules.m"
          }
#line 761 "modules.m"
        else
#line 762 "modules.m"
          {
#line 762 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 762 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_DirectUses_32 = parse_tree__modules__STATE_VARIABLE_DirectUses_0_31;
#line 762 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_DirectImports_30 = parse_tree__modules__STATE_VARIABLE_DirectImports_0_29;
#line 762 "modules.m"
          }
#line 761 "modules.m"
      }
#line 761 "modules.m"
      break;
#line 761 "modules.m"
    }
#line 118 "modules.m"
}

#line 4108 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_49_93_95_48_16_p_0_2(
#line 4111 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 4113 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 4115 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 4117 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 4119 "parse_tree.modules.c"
{
#line 4121 "parse_tree.modules.c"
  {
#line 4123 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 4125 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv1_HeadVar__3_3;

#line 4128 "parse_tree.modules.c"
    {
#line 4130 "parse_tree.modules.c"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv1_HeadVar__3_3);
    }
#line 4133 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__3_3));
#line 4135 "parse_tree.modules.c"
  }
#line 4137 "parse_tree.modules.c"
}

#line 4140 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_49_93_95_48_16_p_0_1(
#line 4143 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 4145 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 4147 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 4149 "parse_tree.modules.c"
{
#line 4151 "parse_tree.modules.c"
  {
#line 4153 "parse_tree.modules.c"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 4155 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 4157 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__3_3;

#line 4160 "parse_tree.modules.c"
    {
#line 4162 "parse_tree.modules.c"
      parse_tree__modules__conv0_HeadVar__3_3 = parse_tree__status__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 4165 "parse_tree.modules.c"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__3_3));
#line 4167 "parse_tree.modules.c"
    return parse_tree__modules__wrapper_arg_3;
#line 4169 "parse_tree.modules.c"
  }
#line 4171 "parse_tree.modules.c"
}

#line 142 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_49_93_95_48_16_p_0(
#line 142 "modules.m"
  MR_Word parse_tree__modules__Globals_17,
#line 142 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_18,
#line 142 "modules.m"
  MR_Word parse_tree__modules__NeedQual_19,
#line 142 "modules.m"
  MR_Word parse_tree__modules__Imports_20,
#line 142 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_21,
#line 142 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_22,
#line 142 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32,
#line 142 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_33,
#line 142 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34,
#line 142 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35,
#line 142 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36,
#line 142 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37)
#line 142 "modules.m"
{
#line 851 "modules.m"
  while (MR_TRUE)
#line 851 "modules.m"
    {
#line 851 "modules.m"
      /* tailcall optimized into a loop */
#line 851 "modules.m"
      {
#line 851 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 851 "modules.m"
        MR_Word parse_tree__modules__FirstImport_29;
#line 851 "modules.m"
        MR_Word parse_tree__modules__LaterImports_30;
#line 830 "modules.m"
        MR_Box parse_tree__modules__conv2_FirstImport_29;

#line 830 "modules.m"
        {
#line 830 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv2_FirstImport_29, parse_tree__modules__Imports_20, &parse_tree__modules__LaterImports_30);
        }
#line 830 "modules.m"
        if (parse_tree__modules__succeeded)
#line 830 "modules.m"
          {
#line 830 "modules.m"
            parse_tree__modules__FirstImport_29 = ((MR_Word) parse_tree__modules__conv2_FirstImport_29);
#line 830 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 830 "modules.m"
          }
#line 851 "modules.m"
        if (parse_tree__modules__succeeded)
#line 831 "modules.m"
          {
#line 831 "modules.m"
            MR_Word parse_tree__modules__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43;
#line 831 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44;
#line 831 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45;
#line 831 "modules.m"
            MR_String parse_tree__modules__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 831 "modules.m"
            MR_String parse_tree__modules__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 834 "modules.m"
            {
#line 834 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__FirstImport_29, parse_tree__modules__ModuleName_31);
            }
#line 835 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 835 "modules.m"
              {
#line 835 "modules.m"
                {
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 835 "modules.m"
                  MR_String parse_tree__modules__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 835 "modules.m"
                  MR_String parse_tree__modules__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 835 "modules.m"
                  {
#line 835 "modules.m"
                    parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_42_42);
                  }
#line 835 "modules.m"
                }
#line 835 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 835 "modules.m"
                  {
#line 836 "modules.m"
                    {
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 836 "modules.m"
                      MR_String parse_tree__modules__V_103_103 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 836 "modules.m"
                      MR_String parse_tree__modules__V_128_128 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 836 "modules.m"
                      {
#line 836 "modules.m"
                        parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_41_41);
                      }
#line 836 "modules.m"
                    }
#line 835 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 837 "modules.m"
                      {
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 837 "modules.m"
                        MR_String parse_tree__modules__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 837 "modules.m"
                        MR_String parse_tree__modules__V_154_154 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 837 "modules.m"
                        {
#line 837 "modules.m"
                          parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_40_40);
                        }
#line 837 "modules.m"
                      }
#line 835 "modules.m"
                  }
#line 835 "modules.m"
              }
#line 841 "modules.m"
            if (parse_tree__modules__succeeded)
#line 840 "modules.m"
              {
#line 840 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36;
#line 840 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34;
#line 840 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32;
#line 840 "modules.m"
              }
#line 841 "modules.m"
            else
#line 842 "modules.m"
              {
#line 842 "modules.m"
                parse_tree__modules__process_module_long_interface_16_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0, parse_tree__modules__Globals_17, parse_tree__modules__HaveReadModuleMaps_18, parse_tree__modules__NeedQual_19, parse_tree__modules__FirstImport_29, parse_tree__modules__IntFileKind_21, parse_tree__modules__NewIntSection_22, (MR_Word) &parse_tree__modules_scalar_common_2[5], (MR_Word) &parse_tree__modules_scalar_common_2[6], parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32, &parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45);
              }
#line 847 "modules.m"
            /* direct tailcall eliminated */
#line 847 "modules.m"
            {
#line 847 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_20 = parse_tree__modules__LaterImports_30;
#line 847 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_32 = parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43;
#line 847 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_34 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44;
#line 847 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_36 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45;

#line 847 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_36;
#line 847 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_34;
#line 847 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_32;
#line 847 "modules.m"
              parse_tree__modules__Imports_20 = parse_tree__modules__Imports__tmp_copy_20;
#line 847 "modules.m"
            }
#line 847 "modules.m"
            continue;
#line 831 "modules.m"
          }
#line 851 "modules.m"
        else
#line 852 "modules.m"
          {
#line 852 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36;
#line 852 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34;
#line 852 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_33 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32;
#line 852 "modules.m"
          }
#line 851 "modules.m"
      }
#line 851 "modules.m"
      break;
#line 851 "modules.m"
    }
#line 142 "modules.m"
}

#line 4578 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_54_95_95_91_49_93_95_48_16_p_0_2(
#line 4581 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 4583 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 4585 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 4587 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 4589 "parse_tree.modules.c"
{
#line 4591 "parse_tree.modules.c"
  {
#line 4593 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 4595 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv1_HeadVar__3_3;

#line 4598 "parse_tree.modules.c"
    {
#line 4600 "parse_tree.modules.c"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv1_HeadVar__3_3);
    }
#line 4603 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__3_3));
#line 4605 "parse_tree.modules.c"
  }
#line 4607 "parse_tree.modules.c"
}

#line 4610 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_54_95_95_91_49_93_95_48_16_p_0_1(
#line 4613 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 4615 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 4617 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 4619 "parse_tree.modules.c"
{
#line 4621 "parse_tree.modules.c"
  {
#line 4623 "parse_tree.modules.c"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 4625 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 4627 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__3_3;

#line 4630 "parse_tree.modules.c"
    {
#line 4632 "parse_tree.modules.c"
      parse_tree__modules__conv0_HeadVar__3_3 = parse_tree__status__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 4635 "parse_tree.modules.c"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__3_3));
#line 4637 "parse_tree.modules.c"
    return parse_tree__modules__wrapper_arg_3;
#line 4639 "parse_tree.modules.c"
  }
#line 4641 "parse_tree.modules.c"
}

#line 142 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_54_95_95_91_49_93_95_48_16_p_0(
#line 142 "modules.m"
  MR_Word parse_tree__modules__Globals_17,
#line 142 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_18,
#line 142 "modules.m"
  MR_Word parse_tree__modules__NeedQual_19,
#line 142 "modules.m"
  MR_Word parse_tree__modules__Imports_20,
#line 142 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_21,
#line 142 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_22,
#line 142 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32,
#line 142 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_33,
#line 142 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34,
#line 142 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35,
#line 142 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36,
#line 142 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37)
#line 142 "modules.m"
{
#line 851 "modules.m"
  while (MR_TRUE)
#line 851 "modules.m"
    {
#line 851 "modules.m"
      /* tailcall optimized into a loop */
#line 851 "modules.m"
      {
#line 851 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 851 "modules.m"
        MR_Word parse_tree__modules__FirstImport_29;
#line 851 "modules.m"
        MR_Word parse_tree__modules__LaterImports_30;
#line 830 "modules.m"
        MR_Box parse_tree__modules__conv2_FirstImport_29;

#line 830 "modules.m"
        {
#line 830 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv2_FirstImport_29, parse_tree__modules__Imports_20, &parse_tree__modules__LaterImports_30);
        }
#line 830 "modules.m"
        if (parse_tree__modules__succeeded)
#line 830 "modules.m"
          {
#line 830 "modules.m"
            parse_tree__modules__FirstImport_29 = ((MR_Word) parse_tree__modules__conv2_FirstImport_29);
#line 830 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 830 "modules.m"
          }
#line 851 "modules.m"
        if (parse_tree__modules__succeeded)
#line 831 "modules.m"
          {
#line 831 "modules.m"
            MR_Word parse_tree__modules__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43;
#line 831 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44;
#line 831 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45;
#line 831 "modules.m"
            MR_String parse_tree__modules__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 831 "modules.m"
            MR_String parse_tree__modules__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 834 "modules.m"
            {
#line 834 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__FirstImport_29, parse_tree__modules__ModuleName_31);
            }
#line 835 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 835 "modules.m"
              {
#line 835 "modules.m"
                {
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 835 "modules.m"
                  MR_String parse_tree__modules__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 835 "modules.m"
                  MR_String parse_tree__modules__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 835 "modules.m"
                  {
#line 835 "modules.m"
                    parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_42_42);
                  }
#line 835 "modules.m"
                }
#line 835 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 835 "modules.m"
                  {
#line 836 "modules.m"
                    {
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 836 "modules.m"
                      MR_String parse_tree__modules__V_103_103 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 836 "modules.m"
                      MR_String parse_tree__modules__V_128_128 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 836 "modules.m"
                      {
#line 836 "modules.m"
                        parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_41_41);
                      }
#line 836 "modules.m"
                    }
#line 835 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 837 "modules.m"
                      {
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 837 "modules.m"
                        MR_String parse_tree__modules__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 837 "modules.m"
                        MR_String parse_tree__modules__V_154_154 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 837 "modules.m"
                        {
#line 837 "modules.m"
                          parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_40_40);
                        }
#line 837 "modules.m"
                      }
#line 835 "modules.m"
                  }
#line 835 "modules.m"
              }
#line 841 "modules.m"
            if (parse_tree__modules__succeeded)
#line 840 "modules.m"
              {
#line 840 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36;
#line 840 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34;
#line 840 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32;
#line 840 "modules.m"
              }
#line 841 "modules.m"
            else
#line 842 "modules.m"
              {
#line 842 "modules.m"
                parse_tree__modules__process_module_long_interface_16_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0, parse_tree__modules__Globals_17, parse_tree__modules__HaveReadModuleMaps_18, parse_tree__modules__NeedQual_19, parse_tree__modules__FirstImport_29, parse_tree__modules__IntFileKind_21, parse_tree__modules__NewIntSection_22, (MR_Word) &parse_tree__modules_scalar_common_2[3], (MR_Word) &parse_tree__modules_scalar_common_2[4], parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32, &parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45);
              }
#line 847 "modules.m"
            /* direct tailcall eliminated */
#line 847 "modules.m"
            {
#line 847 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_20 = parse_tree__modules__LaterImports_30;
#line 847 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_32 = parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43;
#line 847 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_34 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44;
#line 847 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_36 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45;

#line 847 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_36;
#line 847 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_34;
#line 847 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_32;
#line 847 "modules.m"
              parse_tree__modules__Imports_20 = parse_tree__modules__Imports__tmp_copy_20;
#line 847 "modules.m"
            }
#line 847 "modules.m"
            continue;
#line 831 "modules.m"
          }
#line 851 "modules.m"
        else
#line 852 "modules.m"
          {
#line 852 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36;
#line 852 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34;
#line 852 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_33 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32;
#line 852 "modules.m"
          }
#line 851 "modules.m"
      }
#line 851 "modules.m"
      break;
#line 851 "modules.m"
    }
#line 142 "modules.m"
}

#line 164 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_54_93_95_48_13_p_0(
#line 164 "modules.m"
  MR_Word parse_tree__modules__V_40_40,
#line 164 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 164 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 164 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 164 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 164 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 164 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 164 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 164 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28)
#line 164 "modules.m"
{
#line 933 "modules.m"
  while (MR_TRUE)
#line 933 "modules.m"
    {
#line 933 "modules.m"
      /* tailcall optimized into a loop */
#line 933 "modules.m"
      {
#line 933 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 933 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 933 "modules.m"
        MR_Word parse_tree__modules__IndirectImports_24;
#line 933 "modules.m"
        MR_Word parse_tree__modules__V_31_31;
#line 933 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 933 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 936 "modules.m"
        {
#line 936 "modules.m"
          parse_tree__modules__V_31_31 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_39_39);
        }
#line 934 "modules.m"
        {
#line 934 "modules.m"
          parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_50_95_95_91_54_93_95_48_15_p_0(parse_tree__modules__V_40_40, parse_tree__modules__Globals_14, parse_tree__modules__HaveReadModuleMaps_15, parse_tree__modules__Imports_16, parse_tree__modules__IntFileKind_17, parse_tree__modules__V_31_31, &parse_tree__modules__IndirectImports_24, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33);
        }
#line 938 "modules.m"
        {
#line 938 "modules.m"
          parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_39_39, parse_tree__modules__IndirectImports_24);
        }
#line 940 "modules.m"
        if (parse_tree__modules__succeeded)
#line 939 "modules.m"
          {
#line 939 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;
#line 939 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 939 "modules.m"
          }
#line 940 "modules.m"
        else
#line 941 "modules.m"
          {
#line 941 "modules.m"
            /* direct tailcall eliminated */
#line 941 "modules.m"
            {
#line 941 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_16 = parse_tree__modules__IndirectImports_24;
#line 941 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 941 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 941 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27;
#line 941 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25;
#line 941 "modules.m"
              parse_tree__modules__Imports_16 = parse_tree__modules__Imports__tmp_copy_16;
#line 941 "modules.m"
            }
#line 941 "modules.m"
            continue;
#line 941 "modules.m"
          }
#line 933 "modules.m"
      }
#line 933 "modules.m"
      break;
#line 933 "modules.m"
    }
#line 164 "modules.m"
}

#line 1190 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_3_p_0(
#line 1190 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1190 "modules.m"
{
#line 1190 "modules.m"
  {
#line 1190 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1190 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 1190 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 1190 "modules.m"
    {
#line 1190 "modules.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__modules__HeadVar__1_1, (MR_Word) parse_tree__modules__Cast_HeadVar1_4, (MR_Word) parse_tree__modules__Cast_HeadVar2_5);
#line 1190 "modules.m"
      return;
    }
#line 1190 "modules.m"
  }
#line 1190 "modules.m"
}

#line 1190 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_2_p_0(
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1190 "modules.m"
{
#line 1190 "modules.m"
  {
#line 1190 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1190 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 1190 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 1190 "modules.m"
    {
#line 1190 "modules.m"
      return parse_tree__modules__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__modules__Cast_HeadVar1_3, (MR_Word) parse_tree__modules__Cast_HeadVar2_4);
    }
#line 1190 "modules.m"
    return parse_tree__modules__succeeded;
#line 1190 "modules.m"
  }
#line 1190 "modules.m"
}

#line 1072 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(
#line 1072 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1072 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2)
#line 1072 "modules.m"
{
#line 1075 "modules.m"
  {
#line 1075 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1075 "modules.m"
    if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1076 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Integer) 1;
#line 1075 "modules.m"
    else
#line 1075 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Integer) 0;
#line 1075 "modules.m"
  }
#line 1072 "modules.m"
}

#line 719 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1(
#line 719 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 719 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 719 "modules.m"
{
#line 719 "modules.m"
  {
#line 719 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 719 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 719 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__2_2;

#line 719 "modules.m"
    {
#line 719 "modules.m"
      parse_tree__modules__conv1_HeadVar__2_2 = parse_tree__modules__wrap_symname_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 719 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__2_2));
#line 719 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 719 "modules.m"
  }
#line 719 "modules.m"
}

#line 704 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(
#line 704 "modules.m"
  MR_Word parse_tree__modules__Context_10,
#line 704 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportedModules_0_20,
#line 704 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportedModules_21,
#line 704 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_UsedModules_0_22,
#line 704 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_UsedModules_23,
#line 704 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_24,
#line 704 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_25)
#line 704 "modules.m"
{
#line 711 "modules.m"
  {
#line 711 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 711 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_79_79 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 711 "modules.m"
    MR_Word parse_tree__modules__BothSet_14;

#line 712 "modules.m"
    {
#line 712 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_79_79, parse_tree__modules__STATE_VARIABLE_ImportedModules_0_20, parse_tree__modules__STATE_VARIABLE_UsedModules_0_22, &parse_tree__modules__BothSet_14);
    }
#line 713 "modules.m"
    {
#line 713 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_79_79, parse_tree__modules__BothSet_14);
    }
#line 715 "modules.m"
    if (parse_tree__modules__succeeded)
#line 714 "modules.m"
      {
#line 714 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_Specs_25 = parse_tree__modules__STATE_VARIABLE_Specs_0_24;
#line 714 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_UsedModules_23 = parse_tree__modules__STATE_VARIABLE_UsedModules_0_22;
#line 714 "modules.m"
      }
#line 715 "modules.m"
    else
#line 716 "modules.m"
      {
#line 716 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_80_80;
#line 716 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_81_81;
#line 716 "modules.m"
        MR_Word parse_tree__modules__BothList_15;
#line 716 "modules.m"
        MR_Word parse_tree__modules__Pieces_16;
#line 716 "modules.m"
        MR_Word parse_tree__modules__Msg_17;
#line 716 "modules.m"
        MR_Word parse_tree__modules__Spec_19;
#line 716 "modules.m"
        MR_Word parse_tree__modules__V_26_26;
#line 716 "modules.m"
        MR_Word parse_tree__modules__V_29_29;
#line 716 "modules.m"
        MR_Word parse_tree__modules__V_30_30;
#line 716 "modules.m"
        MR_String parse_tree__modules__V_31_31;
#line 716 "modules.m"
        MR_Word parse_tree__modules__V_35_35;
#line 716 "modules.m"
        MR_Word parse_tree__modules__V_36_36;
#line 716 "modules.m"
        MR_Word parse_tree__modules__V_37_37;
#line 716 "modules.m"
        MR_Word parse_tree__modules__V_39_39;
#line 716 "modules.m"
        MR_Word parse_tree__modules__V_40_40;
#line 716 "modules.m"
        MR_String parse_tree__modules__V_41_41;
#line 716 "modules.m"
        MR_Word parse_tree__modules__V_62_62;
#line 716 "modules.m"
        MR_Word parse_tree__modules__V_63_63;
#line 716 "modules.m"
        MR_Word parse_tree__modules__V_66_66;
#line 716 "modules.m"
        MR_Word parse_tree__modules__V_67_67;
#line 716 "modules.m"
        MR_Word parse_tree__modules__V_75_75;
#line 718 "modules.m"
        MR_Box parse_tree__modules__conv0_V_31_31;
#line 720 "modules.m"
        MR_Box parse_tree__modules__conv2_V_41_41;

#line 716 "modules.m"
        {
#line 716 "modules.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__modules__TypeCtorInfo_79_79, parse_tree__modules__BothSet_14, &parse_tree__modules__BothList_15);
        }
#line 5378 "parse_tree.modules.c"
        parse_tree__modules__TypeCtorInfo_80_80 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 5380 "parse_tree.modules.c"
        parse_tree__modules__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 718 "modules.m"
        {
#line 718 "modules.m"
          parse_tree__modules__conv0_V_31_31 = parse_tree__error_util__choose_number_3_f_0(parse_tree__modules__TypeCtorInfo_79_79, parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__BothList_15, ((MR_Box) ((MR_String) "module")), ((MR_Box) ((MR_String) "modules")));
        }
#line 718 "modules.m"
        parse_tree__modules__V_31_31 = ((MR_String) parse_tree__modules__conv0_V_31_31);
#line 718 "modules.m"
        {
#line 718 "modules.m"
          parse_tree__modules__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 718 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_30_30, 1) = ((MR_Box) (parse_tree__modules__V_31_31));
#line 718 "modules.m"
        }
#line 718 "modules.m"
        {
#line 718 "modules.m"
          parse_tree__modules__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_29_29, 0) = ((MR_Box) (parse_tree__modules__V_30_30));
#line 718 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "modules.m"
        }
#line 717 "modules.m"
        {
#line 717 "modules.m"
          parse_tree__modules__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[58])));
#line 717 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_26_26, 1) = ((MR_Box) (parse_tree__modules__V_29_29));
#line 717 "modules.m"
        }
#line 719 "modules.m"
        {
#line 719 "modules.m"
          parse_tree__modules__V_37_37 = mercury__list__map_2_f_0(parse_tree__modules__TypeCtorInfo_79_79, parse_tree__modules__TypeCtorInfo_80_80, (MR_Word) &parse_tree__modules_scalar_common_2[2], parse_tree__modules__BothList_15);
        }
#line 719 "modules.m"
        {
#line 719 "modules.m"
          parse_tree__modules__V_36_36 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__modules__V_37_37);
        }
#line 720 "modules.m"
        {
#line 720 "modules.m"
          parse_tree__modules__conv2_V_41_41 = parse_tree__error_util__choose_number_3_f_0(parse_tree__modules__TypeCtorInfo_79_79, parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__BothList_15, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
        }
#line 720 "modules.m"
        parse_tree__modules__V_41_41 = ((MR_String) parse_tree__modules__conv2_V_41_41);
#line 720 "modules.m"
        {
#line 720 "modules.m"
          parse_tree__modules__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 720 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_40_40, 1) = ((MR_Box) (parse_tree__modules__V_41_41));
#line 720 "modules.m"
        }
#line 720 "modules.m"
        {
#line 720 "modules.m"
          parse_tree__modules__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_39_39, 0) = ((MR_Box) (parse_tree__modules__V_40_40));
#line 720 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[31])));
#line 720 "modules.m"
        }
#line 719 "modules.m"
        {
#line 719 "modules.m"
          parse_tree__modules__V_35_35 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_80_80, parse_tree__modules__V_36_36, parse_tree__modules__V_39_39);
        }
#line 718 "modules.m"
        {
#line 718 "modules.m"
          parse_tree__modules__Pieces_16 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_80_80, parse_tree__modules__V_26_26, parse_tree__modules__V_35_35);
        }
#line 724 "modules.m"
        {
#line 724 "modules.m"
          parse_tree__modules__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 724 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_67_67, 0) = ((MR_Box) (parse_tree__modules__Pieces_16));
#line 724 "modules.m"
        }
#line 724 "modules.m"
        {
#line 724 "modules.m"
          parse_tree__modules__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 0) = ((MR_Box) (parse_tree__modules__V_67_67));
#line 724 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 724 "modules.m"
        }
#line 724 "modules.m"
        {
#line 724 "modules.m"
          parse_tree__modules__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_63_63, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 724 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_63_63, 1) = ((MR_Box) (parse_tree__modules__V_66_66));
#line 724 "modules.m"
        }
#line 724 "modules.m"
        {
#line 724 "modules.m"
          parse_tree__modules__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_62_62, 0) = ((MR_Box) (parse_tree__modules__V_63_63));
#line 724 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 724 "modules.m"
        }
#line 723 "modules.m"
        {
#line 723 "modules.m"
          parse_tree__modules__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 723 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_17, 0) = ((MR_Box) (parse_tree__modules__Context_10));
#line 723 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_17, 1) = ((MR_Box) (parse_tree__modules__V_62_62));
#line 723 "modules.m"
        }
#line 727 "modules.m"
        {
#line 727 "modules.m"
          parse_tree__modules__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 0) = ((MR_Box) (parse_tree__modules__Msg_17));
#line 727 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "modules.m"
        }
#line 727 "modules.m"
        {
#line 727 "modules.m"
          parse_tree__modules__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 727 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[0])));
#line 727 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 727 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_19, 2) = ((MR_Box) (parse_tree__modules__V_75_75));
#line 727 "modules.m"
        }
#line 728 "modules.m"
        {
#line 728 "modules.m"
          MR_Word base;
#line 728 "modules.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Specs_25 = base;
#line 728 "modules.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_19));
#line 728 "modules.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_24));
#line 728 "modules.m"
        }
#line 732 "modules.m"
        {
#line 732 "modules.m"
          mercury__set__difference_3_p_0(parse_tree__modules__TypeCtorInfo_79_79, parse_tree__modules__STATE_VARIABLE_UsedModules_0_22, parse_tree__modules__BothSet_14, parse_tree__modules__STATE_VARIABLE_UsedModules_23);
        }
#line 716 "modules.m"
      }
#line 711 "modules.m"
    *parse_tree__modules__STATE_VARIABLE_ImportedModules_21 = parse_tree__modules__STATE_VARIABLE_ImportedModules_0_20;
#line 711 "modules.m"
  }
#line 704 "modules.m"
}

#line 676 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_12_p_0(
#line 676 "modules.m"
  MR_Word parse_tree__modules__Context_14,
#line 676 "modules.m"
  MR_Word parse_tree__modules__IntImportedModules0_15,
#line 676 "modules.m"
  MR_Word * parse_tree__modules__IntImportedModules_16,
#line 676 "modules.m"
  MR_Word parse_tree__modules__IntUsedModules0_17,
#line 676 "modules.m"
  MR_Word * parse_tree__modules__IntUsedModules_18,
#line 676 "modules.m"
  MR_Word parse_tree__modules__ImpImportedModules0_19,
#line 676 "modules.m"
  MR_Word * parse_tree__modules__ImpImportedModules_20,
#line 676 "modules.m"
  MR_Word parse_tree__modules__ImpUsedModules0_21,
#line 676 "modules.m"
  MR_Word * parse_tree__modules__ImpUsedModules_22,
#line 676 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 676 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27)
#line 676 "modules.m"
{
#line 687 "modules.m"
  {
#line 687 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 687 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules1_24;
#line 687 "modules.m"
    MR_Word parse_tree__modules__ImpUsedModules1_25;
#line 687 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_28_28;
#line 687 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_29_29;

#line 689 "modules.m"
    {
#line 689 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__Context_14, parse_tree__modules__IntImportedModules0_15, &parse_tree__modules__IntImportedModules1_24, parse_tree__modules__IntUsedModules0_17, parse_tree__modules__IntUsedModules_18, parse_tree__modules__STATE_VARIABLE_Specs_0_26, &parse_tree__modules__STATE_VARIABLE_Specs_28_28);
    }
#line 692 "modules.m"
    {
#line 692 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__Context_14, parse_tree__modules__IntImportedModules1_24, parse_tree__modules__IntImportedModules_16, parse_tree__modules__ImpUsedModules0_21, &parse_tree__modules__ImpUsedModules1_25, parse_tree__modules__STATE_VARIABLE_Specs_28_28, &parse_tree__modules__STATE_VARIABLE_Specs_29_29);
    }
#line 696 "modules.m"
    {
#line 696 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__Context_14, parse_tree__modules__ImpImportedModules0_19, parse_tree__modules__ImpImportedModules_20, parse_tree__modules__ImpUsedModules1_25, parse_tree__modules__ImpUsedModules_22, parse_tree__modules__STATE_VARIABLE_Specs_29_29, parse_tree__modules__STATE_VARIABLE_Specs_27);
#line 696 "modules.m"
      return;
    }
#line 687 "modules.m"
  }
#line 676 "modules.m"
}

#line 977 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interface__ho15_15_p_0(
#line 977 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 977 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 977 "modules.m"
  MR_Word parse_tree__modules__Import_18,
#line 977 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_52,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56)
#line 977 "modules.m"
{
#line 988 "modules.m"
  {
#line 988 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 988 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_167_167;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ReturnTimestamp_27;
#line 988 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestamp_29;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntParseTree_30;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntSpecs_31;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntError_32;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntModuleName_33;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntKind_34;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntContext_35;
#line 988 "modules.m"
    MR_Word parse_tree__modules__MaybeVersionNumbers_36;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntIncls_37;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpIncls_38;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntAvails_39;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpAvails_40;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntItems_41;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpItems_42;
#line 988 "modules.m"
    MR_Word parse_tree__modules__IntImports1_43;
#line 988 "modules.m"
    MR_Word parse_tree__modules__IntUses1_44;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ImpImports1_45;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ImpUses1_46;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntItemBlocks_47;
#line 988 "modules.m"
    MR_Word parse_tree__modules__Statistics_48;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ModIndirectImports0_49;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ModIndirectImports_50;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 24)));
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_60_60;
#line 988 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65;
#line 988 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_67_67;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_68_68;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_70_70;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_71_71;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_72_72;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_75_75;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_76_76;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_77_77;
#line 988 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79;
#line 988 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80;
#line 989 "modules.m"
    MR_String parse_tree__modules__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 0)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 1)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 2)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 3)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 4)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 5)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 6)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 7)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 8)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 9)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 10)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 11)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 12)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 13)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 14)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 15)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 16)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 17)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 18)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 19)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 20)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 21)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 22)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 23)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 25)));
#line 989 "modules.m"
    MR_String parse_tree__modules__V_109_109 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 26)));
#line 991 "modules.m"
    MR_Word parse_tree__modules__V_110_110;
#line 991 "modules.m"
    MR_Word parse_tree__modules__V_111_111;
#line 991 "modules.m"
    MR_String parse_tree__modules___ImportFileName_28;
#line 1028 "modules.m"
    MR_String parse_tree__modules__V_112_112;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_113_113;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_114_114;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_115_115;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_116_116;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_117_117;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_118_118;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_119_119;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_120_120;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_121_121;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_122_122;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_123_123;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_124_124;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_125_125;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_126_126;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_127_127;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_128_128;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_129_129;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_130_130;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_131_131;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_132_132;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_133_133;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_134_134;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_135_135;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_136_136;
#line 1028 "modules.m"
    MR_String parse_tree__modules__V_137_137;
#line 1030 "modules.m"
    MR_String parse_tree__modules__V_138_138;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_139_139;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_140_140;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_141_141;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_142_142;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_143_143;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_144_144;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_146_146;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_147_147;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_148_148;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_149_149;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_150_150;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_151_151;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_152_152;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_153_153;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_154_154;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_155_155;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_156_156;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_157_157;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_158_158;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_159_159;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_160_160;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_161_161;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_162_162;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_163_163;
#line 1030 "modules.m"
    MR_String parse_tree__modules__V_164_164;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_145_145;

#line 989 "modules.m"
    {
#line 989 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_59_59, &parse_tree__modules__ReturnTimestamp_27);
    }
#line 991 "modules.m"
    parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 0)));
#line 991 "modules.m"
    parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 1)));
#line 991 "modules.m"
    parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 2)));
#line 991 "modules.m"
    {
#line 991 "modules.m"
      parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_16, parse_tree__modules__V_60_60, (MR_String) "Reading short interface for module", (MR_Integer) 0, parse_tree__modules__Import_18, parse_tree__modules__IntFileKind_19, &parse_tree__modules___ImportFileName_28, parse_tree__modules__ReturnTimestamp_27, &parse_tree__modules__MaybeTimestamp_29, &parse_tree__modules__ShortIntParseTree_30, &parse_tree__modules__ShortIntSpecs_31, &parse_tree__modules__ShortIntError_32);
    }
#line 996 "modules.m"
    {
#line 996 "modules.m"
      parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Import_18, parse_tree__modules__IntFileKind_19, (MR_Integer) 0, parse_tree__modules__MaybeTimestamp_29, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65);
    }
#line 999 "modules.m"
    parse_tree__modules__ShortIntModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 0)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntKind_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 1)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 2)));
#line 999 "modules.m"
    parse_tree__modules__MaybeVersionNumbers_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 3)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntIntIncls_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 4)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntImpIncls_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 5)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntIntAvails_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 6)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntImpAvails_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 7)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntIntItems_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 8)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntImpItems_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 9)));
#line 1004 "modules.m"
    {
#line 1004 "modules.m"
      parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(parse_tree__modules__ShortIntModuleName_33, parse_tree__modules__MaybeVersionNumbers_36, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66);
    }
#line 1006 "modules.m"
    {
#line 1006 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__ShortIntIntAvails_39, &parse_tree__modules__IntImports1_43, &parse_tree__modules__IntUses1_44);
    }
#line 1007 "modules.m"
    {
#line 1007 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__ShortIntImpAvails_40, &parse_tree__modules__ImpImports1_45, &parse_tree__modules__ImpUses1_46);
    }
#line 1009 "modules.m"
    {
#line 1009 "modules.m"
      parse_tree__modules__V_67_67 = parse_tree__status__make_ims_abstract_imported_2_f_0(parse_tree__modules__Import_18, parse_tree__modules__ShortIntKind_34);
    }
#line 1010 "modules.m"
    {
#line 1010 "modules.m"
      parse_tree__modules__V_68_68 = parse_tree__status__make_ims_abstract_imported_2_f_0(parse_tree__modules__Import_18, parse_tree__modules__ShortIntKind_34);
    }
#line 1008 "modules.m"
    {
#line 1008 "modules.m"
      parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0, parse_tree__modules__ShortIntContext_35, ((MR_Box) (parse_tree__modules__V_67_67)), ((MR_Box) (parse_tree__modules__V_68_68)), parse_tree__modules__ShortIntIntIncls_37, parse_tree__modules__ShortIntImpIncls_38, parse_tree__modules__ShortIntIntAvails_39, parse_tree__modules__ShortIntImpAvails_40, parse_tree__modules__ShortIntIntItems_41, parse_tree__modules__ShortIntImpItems_42, &parse_tree__modules__ShortIntItemBlocks_47);
    }
#line 5967 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_167_167 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1017 "modules.m"
    {
#line 1017 "modules.m"
      parse_tree__modules__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1017 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 0) = ((MR_Box) (parse_tree__modules__IntUses1_44));
#line 1017 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1017 "modules.m"
    }
#line 1017 "modules.m"
    {
#line 1017 "modules.m"
      parse_tree__modules__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1017 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 0) = ((MR_Box) (parse_tree__modules__IntImports1_43));
#line 1017 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 1) = ((MR_Box) (parse_tree__modules__V_72_72));
#line 1017 "modules.m"
    }
#line 1016 "modules.m"
    {
#line 1016 "modules.m"
      parse_tree__modules__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_70_70, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51));
#line 1016 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_70_70, 1) = ((MR_Box) (parse_tree__modules__V_71_71));
#line 1016 "modules.m"
    }
#line 1016 "modules.m"
    {
#line 1016 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_IndirectImports_52 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_167_167, parse_tree__modules__V_70_70);
    }
#line 1019 "modules.m"
    {
#line 1019 "modules.m"
      parse_tree__modules__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 0) = ((MR_Box) (parse_tree__modules__ImpUses1_46));
#line 1019 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1019 "modules.m"
    }
#line 1019 "modules.m"
    {
#line 1019 "modules.m"
      parse_tree__modules__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 0) = ((MR_Box) (parse_tree__modules__ImpImports1_45));
#line 1019 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 1) = ((MR_Box) (parse_tree__modules__V_77_77));
#line 1019 "modules.m"
    }
#line 1018 "modules.m"
    {
#line 1018 "modules.m"
      parse_tree__modules__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53));
#line 1018 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 1) = ((MR_Box) (parse_tree__modules__V_76_76));
#line 1018 "modules.m"
    }
#line 1018 "modules.m"
    {
#line 1018 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_167_167, parse_tree__modules__V_75_75);
    }
#line 1021 "modules.m"
    {
#line 1021 "modules.m"
      parse_tree__module_imports__module_and_imports_add_indirect_int_item_blocks_3_p_0(parse_tree__modules__ShortIntItemBlocks_47, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79);
    }
#line 1022 "modules.m"
    {
#line 1022 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(parse_tree__modules__ShortIntSpecs_31, parse_tree__modules__ShortIntError_32, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80);
    }
#line 1025 "modules.m"
    {
#line 1025 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_16, (MR_Integer) 56, &parse_tree__modules__Statistics_48);
    }
#line 1026 "modules.m"
    {
#line 1026 "modules.m"
      libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_48);
    }
#line 1028 "modules.m"
    parse_tree__modules__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 0)));
#line 1028 "modules.m"
    parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 1)));
#line 1028 "modules.m"
    parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 2)));
#line 1028 "modules.m"
    parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 3)));
#line 1028 "modules.m"
    parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 4)));
#line 1028 "modules.m"
    parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 5)));
#line 1028 "modules.m"
    parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 6)));
#line 1028 "modules.m"
    parse_tree__modules__ModIndirectImports0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 7)));
#line 1028 "modules.m"
    parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 8)));
#line 1028 "modules.m"
    parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 9)));
#line 1028 "modules.m"
    parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 10)));
#line 1028 "modules.m"
    parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 11)));
#line 1028 "modules.m"
    parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 12)));
#line 1028 "modules.m"
    parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 13)));
#line 1028 "modules.m"
    parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 14)));
#line 1028 "modules.m"
    parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 15)));
#line 1028 "modules.m"
    parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 16)));
#line 1028 "modules.m"
    parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 17)));
#line 1028 "modules.m"
    parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 18)));
#line 1028 "modules.m"
    parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 19)));
#line 1028 "modules.m"
    parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 20)));
#line 1028 "modules.m"
    parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 21)));
#line 1028 "modules.m"
    parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 22)));
#line 1028 "modules.m"
    parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 23)));
#line 1028 "modules.m"
    parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 24)));
#line 1028 "modules.m"
    parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 25)));
#line 1028 "modules.m"
    parse_tree__modules__V_137_137 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 26)));
#line 1029 "modules.m"
    {
#line 1029 "modules.m"
      mercury__set__insert_3_p_0(parse_tree__modules__TypeCtorInfo_167_167, ((MR_Box) (parse_tree__modules__Import_18)), parse_tree__modules__ModIndirectImports0_49, &parse_tree__modules__ModIndirectImports_50);
    }
#line 1030 "modules.m"
    parse_tree__modules__V_138_138 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 0)));
#line 1030 "modules.m"
    parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 1)));
#line 1030 "modules.m"
    parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 2)));
#line 1030 "modules.m"
    parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 3)));
#line 1030 "modules.m"
    parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 4)));
#line 1030 "modules.m"
    parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 5)));
#line 1030 "modules.m"
    parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 6)));
#line 1030 "modules.m"
    parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 7)));
#line 1030 "modules.m"
    parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 8)));
#line 1030 "modules.m"
    parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 9)));
#line 1030 "modules.m"
    parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 10)));
#line 1030 "modules.m"
    parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 11)));
#line 1030 "modules.m"
    parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 12)));
#line 1030 "modules.m"
    parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 13)));
#line 1030 "modules.m"
    parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 14)));
#line 1030 "modules.m"
    parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 15)));
#line 1030 "modules.m"
    parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 16)));
#line 1030 "modules.m"
    parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 17)));
#line 1030 "modules.m"
    parse_tree__modules__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 18)));
#line 1030 "modules.m"
    parse_tree__modules__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 19)));
#line 1030 "modules.m"
    parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 20)));
#line 1030 "modules.m"
    parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 21)));
#line 1030 "modules.m"
    parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 22)));
#line 1030 "modules.m"
    parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 23)));
#line 1030 "modules.m"
    parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 24)));
#line 1030 "modules.m"
    parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 25)));
#line 1030 "modules.m"
    parse_tree__modules__V_164_164 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 26)));
#line 1030 "modules.m"
    {
#line 1030 "modules.m"
      MR_Word base;
#line 1030 "modules.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56 = base;
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_138_138));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_139_139));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_140_140));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_141_141));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__V_142_142));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_143_143));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__V_144_144));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__ModIndirectImports_50));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_146_146));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_147_147));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_148_148));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_149_149));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_150_150));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_151_151));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_152_152));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_153_153));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_154_154));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_155_155));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_156_156));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_157_157));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_158_158));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_159_159));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__V_160_160));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__V_161_161));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__V_162_162));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__modules__V_163_163));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_164_164));
#line 1030 "modules.m"
    }
#line 988 "modules.m"
  }
#line 977 "modules.m"
}

#line 204 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces__ho14_15_p_0(
#line 204 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 204 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 204 "modules.m"
  MR_Word parse_tree__modules__Imports_18,
#line 204 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 204 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29,
#line 204 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_30,
#line 204 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31,
#line 204 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32,
#line 204 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 204 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34)
#line 204 "modules.m"
{
#line 973 "modules.m"
  while (MR_TRUE)
#line 973 "modules.m"
    {
#line 973 "modules.m"
      /* tailcall optimized into a loop */
#line 973 "modules.m"
      {
#line 973 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 973 "modules.m"
        MR_Word parse_tree__modules__FirstImport_27;
#line 973 "modules.m"
        MR_Word parse_tree__modules__LaterImports_28;
#line 951 "modules.m"
        MR_Box parse_tree__modules__conv0_FirstImport_27;

#line 951 "modules.m"
        {
#line 951 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv0_FirstImport_27, parse_tree__modules__Imports_18, &parse_tree__modules__LaterImports_28);
        }
#line 951 "modules.m"
        if (parse_tree__modules__succeeded)
#line 951 "modules.m"
          {
#line 951 "modules.m"
            parse_tree__modules__FirstImport_27 = ((MR_Word) parse_tree__modules__conv0_FirstImport_27);
#line 951 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 951 "modules.m"
          }
#line 973 "modules.m"
        if (parse_tree__modules__succeeded)
#line 968 "modules.m"
          {
#line 968 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41;
#line 968 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42;
#line 968 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;
#line 956 "modules.m"
            MR_Word parse_tree__modules__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 7)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 6)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 5)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 4)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 2)));
#line 955 "modules.m"
            MR_String parse_tree__modules__V_186_186 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 26)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 25)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 24)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 23)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 22)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 21)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 20)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 19)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 18)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 17)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 16)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 15)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 14)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 13)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 12)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 11)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 10)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 9)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 8)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 3)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 1)));
#line 955 "modules.m"
            MR_String parse_tree__modules__V_212_212 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 0)));

#line 955 "modules.m"
            {
#line 955 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__FirstImport_27, parse_tree__modules__V_210_210);
            }
#line 956 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 956 "modules.m"
              {
#line 956 "modules.m"
                {
#line 956 "modules.m"
                  parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_208_208);
                }
#line 956 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 956 "modules.m"
                  {
#line 957 "modules.m"
                    {
#line 957 "modules.m"
                      parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_207_207);
                    }
#line 956 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 956 "modules.m"
                      {
#line 958 "modules.m"
                        {
#line 958 "modules.m"
                          parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_206_206);
                        }
#line 956 "modules.m"
                        if (!(parse_tree__modules__succeeded))
#line 959 "modules.m"
                          {
#line 959 "modules.m"
                            {
#line 959 "modules.m"
                              parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_205_205);
                            }
#line 959 "modules.m"
                          }
#line 956 "modules.m"
                      }
#line 956 "modules.m"
                  }
#line 956 "modules.m"
              }
#line 963 "modules.m"
            if (parse_tree__modules__succeeded)
#line 962 "modules.m"
              {
#line 962 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 962 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31;
#line 962 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29;
#line 962 "modules.m"
              }
#line 963 "modules.m"
            else
#line 964 "modules.m"
              {
#line 964 "modules.m"
                parse_tree__modules__process_module_short_interface__ho15_15_p_0(parse_tree__modules__Globals_16, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__FirstImport_27, parse_tree__modules__IntFileKind_19, parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29, &parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43);
              }
#line 969 "modules.m"
            /* direct tailcall eliminated */
#line 969 "modules.m"
            {
#line 969 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_18 = parse_tree__modules__LaterImports_28;
#line 969 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_29 = parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41;
#line 969 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_31 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42;
#line 969 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;

#line 969 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33;
#line 969 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_31;
#line 969 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_29;
#line 969 "modules.m"
              parse_tree__modules__Imports_18 = parse_tree__modules__Imports__tmp_copy_18;
#line 969 "modules.m"
            }
#line 969 "modules.m"
            continue;
#line 968 "modules.m"
          }
#line 973 "modules.m"
        else
#line 974 "modules.m"
          {
#line 974 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 974 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31;
#line 974 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_30 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29;
#line 974 "modules.m"
          }
#line 973 "modules.m"
      }
#line 973 "modules.m"
      break;
#line 973 "modules.m"
    }
#line 204 "modules.m"
}

#line 164 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho10_13_p_0(
#line 164 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 164 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 164 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 164 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 164 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 164 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 164 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 164 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28)
#line 164 "modules.m"
{
#line 933 "modules.m"
  while (MR_TRUE)
#line 933 "modules.m"
    {
#line 933 "modules.m"
      /* tailcall optimized into a loop */
#line 933 "modules.m"
      {
#line 933 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 933 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 933 "modules.m"
        MR_Word parse_tree__modules__IndirectImports_24;
#line 933 "modules.m"
        MR_Word parse_tree__modules__V_31_31;
#line 933 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 933 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 936 "modules.m"
        {
#line 936 "modules.m"
          parse_tree__modules__V_31_31 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_39_39);
        }
#line 934 "modules.m"
        {
#line 934 "modules.m"
          parse_tree__modules__process_module_short_interfaces__ho14_15_p_0(parse_tree__modules__Globals_14, parse_tree__modules__HaveReadModuleMaps_15, parse_tree__modules__Imports_16, parse_tree__modules__IntFileKind_17, parse_tree__modules__V_31_31, &parse_tree__modules__IndirectImports_24, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33);
        }
#line 938 "modules.m"
        {
#line 938 "modules.m"
          parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_39_39, parse_tree__modules__IndirectImports_24);
        }
#line 940 "modules.m"
        if (parse_tree__modules__succeeded)
#line 939 "modules.m"
          {
#line 939 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;
#line 939 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 939 "modules.m"
          }
#line 940 "modules.m"
        else
#line 941 "modules.m"
          {
#line 941 "modules.m"
            /* direct tailcall eliminated */
#line 941 "modules.m"
            {
#line 941 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_16 = parse_tree__modules__IndirectImports_24;
#line 941 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 941 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 941 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27;
#line 941 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25;
#line 941 "modules.m"
              parse_tree__modules__Imports_16 = parse_tree__modules__Imports__tmp_copy_16;
#line 941 "modules.m"
            }
#line 941 "modules.m"
            continue;
#line 941 "modules.m"
          }
#line 933 "modules.m"
      }
#line 933 "modules.m"
      break;
#line 933 "modules.m"
    }
#line 164 "modules.m"
}

#line 184 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho9_11_p_0(
#line 184 "modules.m"
  MR_Word parse_tree__modules__Globals_12,
#line 184 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_13,
#line 184 "modules.m"
  MR_Word parse_tree__modules__Imports_14,
#line 184 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_15,
#line 184 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22,
#line 184 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23)
#line 184 "modules.m"
{
#line 918 "modules.m"
  while (MR_TRUE)
#line 918 "modules.m"
    {
#line 918 "modules.m"
      /* tailcall optimized into a loop */
#line 918 "modules.m"
      {
#line 918 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 918 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_32_32 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 918 "modules.m"
        MR_Word parse_tree__modules__ImpIndirectImports_21;
#line 918 "modules.m"
        MR_Word parse_tree__modules__V_26_26;
#line 918 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;

#line 921 "modules.m"
        {
#line 921 "modules.m"
          parse_tree__modules__V_26_26 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_32_32);
        }
#line 919 "modules.m"
        {
#line 919 "modules.m"
          parse_tree__modules__process_module_short_interfaces_transitively__ho10_13_p_0(parse_tree__modules__Globals_12, parse_tree__modules__HaveReadModuleMaps_13, parse_tree__modules__Imports_14, parse_tree__modules__IntFileKind_15, parse_tree__modules__V_26_26, &parse_tree__modules__ImpIndirectImports_21, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27);
        }
#line 922 "modules.m"
        {
#line 922 "modules.m"
          parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_32_32, parse_tree__modules__ImpIndirectImports_21);
        }
#line 924 "modules.m"
        if (parse_tree__modules__succeeded)
#line 923 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;
#line 924 "modules.m"
        else
#line 925 "modules.m"
          {
#line 925 "modules.m"
            /* direct tailcall eliminated */
#line 925 "modules.m"
            {
#line 925 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_14 = parse_tree__modules__ImpIndirectImports_21;
#line 925 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_22 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;

#line 925 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_22;
#line 925 "modules.m"
              parse_tree__modules__Imports_14 = parse_tree__modules__Imports__tmp_copy_14;
#line 925 "modules.m"
            }
#line 925 "modules.m"
            continue;
#line 925 "modules.m"
          }
#line 918 "modules.m"
      }
#line 918 "modules.m"
      break;
#line 918 "modules.m"
    }
#line 184 "modules.m"
}

#line 1209 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho4_6_p_0(
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6)
#line 1209 "modules.m"
{
#line 1214 "modules.m"
  while (MR_TRUE)
#line 1214 "modules.m"
    {
#line 1214 "modules.m"
      /* tailcall optimized into a loop */
#line 1214 "modules.m"
      {
#line 1214 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1214 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1214 "modules.m"
          {
#line 1215 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImportUseMap_6 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1215 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_InclMap_4 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1214 "modules.m"
          }
#line 1214 "modules.m"
        else
#line 1217 "modules.m"
          {
#line 1217 "modules.m"
            MR_Word parse_tree__modules__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1217 "modules.m"
            MR_Word parse_tree__modules__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1217 "modules.m"
            MR_Word parse_tree__modules__Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 2)));
#line 1217 "modules.m"
            MR_Word parse_tree__modules__Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 3)));
#line 1217 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_29_29;
#line 1217 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;
#line 1218 "modules.m"
            MR_Word parse_tree__modules__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 0)));
#line 1218 "modules.m"
            MR_Word parse_tree__modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 1)));
#line 1218 "modules.m"
            MR_Word parse_tree__modules___Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 4)));

#line 1222 "modules.m"
            {
#line 1222 "modules.m"
              parse_tree__modules__record_includes_acc_3_p_0(parse_tree__modules__Incls_21, parse_tree__modules__STATE_VARIABLE_InclMap_0_3, &parse_tree__modules__STATE_VARIABLE_InclMap_29_29);
            }
#line 1227 "modules.m"
            {
#line 1227 "modules.m"
              parse_tree__modules__record_avails_acc_3_p_0(parse_tree__modules__Avails_22, parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30);
            }
#line 1228 "modules.m"
            /* direct tailcall eliminated */
#line 1228 "modules.m"
            {
#line 1228 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__ItemBlocks_15;
#line 1228 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3 = parse_tree__modules__STATE_VARIABLE_InclMap_29_29;
#line 1228 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;

#line 1228 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5;
#line 1228 "modules.m"
              parse_tree__modules__STATE_VARIABLE_InclMap_0_3 = parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3;
#line 1228 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1228 "modules.m"
            }
#line 1228 "modules.m"
            continue;
#line 1217 "modules.m"
          }
#line 1214 "modules.m"
      }
#line 1214 "modules.m"
      break;
#line 1214 "modules.m"
    }
#line 1209 "modules.m"
}

#line 1209 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho3_6_p_0(
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6)
#line 1209 "modules.m"
{
#line 1214 "modules.m"
  while (MR_TRUE)
#line 1214 "modules.m"
    {
#line 1214 "modules.m"
      /* tailcall optimized into a loop */
#line 1214 "modules.m"
      {
#line 1214 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1214 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1214 "modules.m"
          {
#line 1215 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImportUseMap_6 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1215 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_InclMap_4 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1214 "modules.m"
          }
#line 1214 "modules.m"
        else
#line 1217 "modules.m"
          {
#line 1217 "modules.m"
            MR_Word parse_tree__modules__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1217 "modules.m"
            MR_Word parse_tree__modules__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1217 "modules.m"
            MR_Word parse_tree__modules__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 0)));
#line 1217 "modules.m"
            MR_Word parse_tree__modules__Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 2)));
#line 1217 "modules.m"
            MR_Word parse_tree__modules__Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 3)));
#line 1217 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_29_29;
#line 1217 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;
#line 1218 "modules.m"
            MR_Word parse_tree__modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 1)));
#line 1218 "modules.m"
            MR_Word parse_tree__modules___Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 4)));

#line 6829 "parse_tree.modules.c"
#line 6830 "parse_tree.modules.c"
            switch (MR_tag((MR_Word) parse_tree__modules__Section_19)) {
#line 6832 "parse_tree.modules.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 6834 "parse_tree.modules.c"
              case (MR_Integer) 0:
#line 1222 "modules.m"
                {
#line 1222 "modules.m"
                  parse_tree__modules__record_includes_acc_3_p_0(parse_tree__modules__Incls_21, parse_tree__modules__STATE_VARIABLE_InclMap_0_3, &parse_tree__modules__STATE_VARIABLE_InclMap_29_29);
                }
#line 6841 "parse_tree.modules.c"
                break;
#line 6843 "parse_tree.modules.c"
              case (MR_Integer) 1:
#line 1222 "modules.m"
                {
#line 1222 "modules.m"
                  parse_tree__modules__record_includes_acc_3_p_0(parse_tree__modules__Incls_21, parse_tree__modules__STATE_VARIABLE_InclMap_0_3, &parse_tree__modules__STATE_VARIABLE_InclMap_29_29);
                }
#line 6850 "parse_tree.modules.c"
                break;
#line 6852 "parse_tree.modules.c"
              case (MR_Integer) 2:
#line 1224 "modules.m"
                parse_tree__modules__STATE_VARIABLE_InclMap_29_29 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 6856 "parse_tree.modules.c"
                break;
#line 6858 "parse_tree.modules.c"
            }
#line 1227 "modules.m"
            {
#line 1227 "modules.m"
              parse_tree__modules__record_avails_acc_3_p_0(parse_tree__modules__Avails_22, parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30);
            }
#line 1228 "modules.m"
            /* direct tailcall eliminated */
#line 1228 "modules.m"
            {
#line 1228 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__ItemBlocks_15;
#line 1228 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3 = parse_tree__modules__STATE_VARIABLE_InclMap_29_29;
#line 1228 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;

#line 1228 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5;
#line 1228 "modules.m"
              parse_tree__modules__STATE_VARIABLE_InclMap_0_3 = parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3;
#line 1228 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1228 "modules.m"
            }
#line 1228 "modules.m"
            continue;
#line 1217 "modules.m"
          }
#line 1214 "modules.m"
      }
#line 1214 "modules.m"
      break;
#line 1214 "modules.m"
    }
#line 1209 "modules.m"
}

#line 1209 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho2_6_p_0(
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6)
#line 1209 "modules.m"
{
#line 1214 "modules.m"
  while (MR_TRUE)
#line 1214 "modules.m"
    {
#line 1214 "modules.m"
      /* tailcall optimized into a loop */
#line 1214 "modules.m"
      {
#line 1214 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1214 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1214 "modules.m"
          {
#line 1215 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImportUseMap_6 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1215 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_InclMap_4 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1214 "modules.m"
          }
#line 1214 "modules.m"
        else
#line 1217 "modules.m"
          {
#line 1217 "modules.m"
            MR_Word parse_tree__modules__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1217 "modules.m"
            MR_Word parse_tree__modules__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1217 "modules.m"
            MR_Word parse_tree__modules__Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 3)));
#line 1217 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;
#line 1218 "modules.m"
            MR_Word parse_tree__modules__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 0)));
#line 1218 "modules.m"
            MR_Word parse_tree__modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 1)));
#line 1218 "modules.m"
            MR_Word parse_tree__modules__Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 2)));
#line 1218 "modules.m"
            MR_Word parse_tree__modules___Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 4)));

#line 1227 "modules.m"
            {
#line 1227 "modules.m"
              parse_tree__modules__record_avails_acc_3_p_0(parse_tree__modules__Avails_22, parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30);
            }
#line 1228 "modules.m"
            /* direct tailcall eliminated */
#line 1228 "modules.m"
            {
#line 1228 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__ItemBlocks_15;
#line 1228 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;

#line 1228 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5;
#line 1228 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1228 "modules.m"
            }
#line 1228 "modules.m"
            continue;
#line 1217 "modules.m"
          }
#line 1214 "modules.m"
      }
#line 1214 "modules.m"
      break;
#line 1214 "modules.m"
    }
#line 1209 "modules.m"
}

#line 1209 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho1_6_p_0(
#line 1209 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1209 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1209 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6)
#line 1209 "modules.m"
{
#line 1214 "modules.m"
  while (MR_TRUE)
#line 1214 "modules.m"
    {
#line 1214 "modules.m"
      /* tailcall optimized into a loop */
#line 1214 "modules.m"
      {
#line 1214 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1214 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1214 "modules.m"
          {
#line 1215 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImportUseMap_6 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1215 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_InclMap_4 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1214 "modules.m"
          }
#line 1214 "modules.m"
        else
#line 1217 "modules.m"
          {
#line 1217 "modules.m"
            MR_Word parse_tree__modules__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1217 "modules.m"
            MR_Word parse_tree__modules__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1217 "modules.m"
            MR_Word parse_tree__modules__Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 3)));
#line 1217 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;
#line 1218 "modules.m"
            MR_Word parse_tree__modules__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 0)));
#line 1218 "modules.m"
            MR_Word parse_tree__modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 1)));
#line 1218 "modules.m"
            MR_Word parse_tree__modules__Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 2)));
#line 1218 "modules.m"
            MR_Word parse_tree__modules___Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 4)));

#line 1227 "modules.m"
            {
#line 1227 "modules.m"
              parse_tree__modules__record_avails_acc_3_p_0(parse_tree__modules__Avails_22, parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30);
            }
#line 1228 "modules.m"
            /* direct tailcall eliminated */
#line 1228 "modules.m"
            {
#line 1228 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__ItemBlocks_15;
#line 1228 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;

#line 1228 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5;
#line 1228 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1228 "modules.m"
            }
#line 1228 "modules.m"
            continue;
#line 1217 "modules.m"
          }
#line 1214 "modules.m"
      }
#line 1214 "modules.m"
      break;
#line 1214 "modules.m"
    }
#line 1209 "modules.m"
}

#line 747 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__747__1_2_p_0(
#line 747 "modules.m"
  MR_Word parse_tree__modules__FirstAncestor_25,
#line 747 "modules.m"
  MR_Word parse_tree__modules__ModuleName_27)
#line 747 "modules.m"
{
#line 747 "modules.m"
  {
#line 747 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 747 "modules.m"
    {
#line 747 "modules.m"
      return parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__FirstAncestor_25, parse_tree__modules__ModuleName_27);
    }
#line 747 "modules.m"
    return parse_tree__modules__succeeded;
#line 747 "modules.m"
  }
#line 747 "modules.m"
}

#line 1190 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0(
#line 1190 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_6,
#line 1190 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1190 "modules.m"
{
#line 1190 "modules.m"
  {
#line 1190 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1190 "modules.m"
    {
#line 1190 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__HeadVar__2_2, parse_tree__modules__HeadVar__3_3);
#line 1190 "modules.m"
      return;
    }
#line 1190 "modules.m"
  }
#line 1190 "modules.m"
}

#line 1190 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0(
#line 1190 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_5,
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1190 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1190 "modules.m"
{
#line 1190 "modules.m"
  {
#line 1190 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1190 "modules.m"
    {
#line 1190 "modules.m"
      return parse_tree__modules__succeeded = parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__HeadVar__2_2);
    }
#line 1190 "modules.m"
    return parse_tree__modules__succeeded;
#line 1190 "modules.m"
  }
#line 1190 "modules.m"
}

#line 100 "modules.m"
void MR_CALL 
parse_tree__modules____Compare____section_appender_1_0(
#line 100 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_6,
#line 100 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 100 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 100 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 100 "modules.m"
{
#line 100 "modules.m"
  {
#line 100 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 100 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 100 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 100 "modules.m"
    {
#line 100 "modules.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__modules__HeadVar__1_1, (MR_Word) parse_tree__modules__Cast_HeadVar1_4, (MR_Word) parse_tree__modules__Cast_HeadVar2_5);
#line 100 "modules.m"
      return;
    }
#line 100 "modules.m"
  }
#line 100 "modules.m"
}

#line 100 "modules.m"
MR_bool MR_CALL 
parse_tree__modules____Unify____section_appender_1_0(
#line 100 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_5,
#line 100 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 100 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 100 "modules.m"
{
#line 100 "modules.m"
  {
#line 100 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 100 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 100 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 100 "modules.m"
    {
#line 100 "modules.m"
      return parse_tree__modules__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__modules__Cast_HeadVar1_3, (MR_Word) parse_tree__modules__Cast_HeadVar2_4);
    }
#line 100 "modules.m"
    return parse_tree__modules__succeeded;
#line 100 "modules.m"
  }
#line 100 "modules.m"
}

#line 1148 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0(
#line 1148 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1148 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1148 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1148 "modules.m"
{
#line 1148 "modules.m"
  {
#line 1148 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1148 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 1148 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 1148 "modules.m"
    {
#line 1148 "modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__modules_scalar_common_2[1], parse_tree__modules__HeadVar__1_1, ((MR_Box) (parse_tree__modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_5)));
#line 1148 "modules.m"
      return;
    }
#line 1148 "modules.m"
  }
#line 1148 "modules.m"
}

#line 1148 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0(
#line 1148 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1148 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1148 "modules.m"
{
#line 1148 "modules.m"
  {
#line 1148 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1148 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 1148 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 1148 "modules.m"
    {
#line 1148 "modules.m"
      return parse_tree__modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__modules_scalar_common_2[1], ((MR_Box) (parse_tree__modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_4)));
    }
#line 1148 "modules.m"
    return parse_tree__modules__succeeded;
#line 1148 "modules.m"
  }
#line 1148 "modules.m"
}

#line 1156 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0(
#line 1156 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1156 "modules.m"
{
#line 1156 "modules.m"
  {
#line 1156 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1156 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 1156 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 1156 "modules.m"
    {
#line 1156 "modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__modules_scalar_common_2[0], parse_tree__modules__HeadVar__1_1, ((MR_Box) (parse_tree__modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_5)));
#line 1156 "modules.m"
      return;
    }
#line 1156 "modules.m"
  }
#line 1156 "modules.m"
}

#line 1156 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0(
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1156 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1156 "modules.m"
{
#line 1156 "modules.m"
  {
#line 1156 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1156 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 1156 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 1156 "modules.m"
    {
#line 1156 "modules.m"
      return parse_tree__modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__modules_scalar_common_2[0], ((MR_Box) (parse_tree__modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_4)));
    }
#line 1156 "modules.m"
    return parse_tree__modules__succeeded;
#line 1156 "modules.m"
  }
#line 1156 "modules.m"
}

#line 97 "modules.m"
void MR_CALL 
parse_tree__modules____Compare____int_section_maker_1_0(
#line 97 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_6,
#line 97 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 97 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 97 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 97 "modules.m"
{
#line 97 "modules.m"
  {
#line 97 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 97 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 97 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 97 "modules.m"
    {
#line 97 "modules.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__modules__HeadVar__1_1, (MR_Word) parse_tree__modules__Cast_HeadVar1_4, (MR_Word) parse_tree__modules__Cast_HeadVar2_5);
#line 97 "modules.m"
      return;
    }
#line 97 "modules.m"
  }
#line 97 "modules.m"
}

#line 97 "modules.m"
MR_bool MR_CALL 
parse_tree__modules____Unify____int_section_maker_1_0(
#line 97 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_5,
#line 97 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 97 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 97 "modules.m"
{
#line 97 "modules.m"
  {
#line 97 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 97 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 97 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 97 "modules.m"
    {
#line 97 "modules.m"
      return parse_tree__modules__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__modules__Cast_HeadVar1_3, (MR_Word) parse_tree__modules__Cast_HeadVar2_4);
    }
#line 97 "modules.m"
    return parse_tree__modules__succeeded;
#line 97 "modules.m"
  }
#line 97 "modules.m"
}

#line 1150 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0(
#line 1150 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1150 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1150 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1150 "modules.m"
{
#line 1150 "modules.m"
  {
#line 1150 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1150 "modules.m"
    MR_Integer parse_tree__modules__CastX_9 = (MR_Integer) parse_tree__modules__HeadVar__2_2;
#line 1150 "modules.m"
    MR_Integer parse_tree__modules__CastY_10 = (MR_Integer) parse_tree__modules__HeadVar__3_3;

#line 1150 "modules.m"
    parse_tree__modules__succeeded = (parse_tree__modules__CastX_9 == parse_tree__modules__CastY_10);
#line 1150 "modules.m"
    if (parse_tree__modules__succeeded)
#line 7441 "parse_tree.modules.c"
      *parse_tree__modules__HeadVar__1_1 = (MR_Integer) 0;
#line 1150 "modules.m"
    else
#line 1150 "modules.m"
      {
#line 1150 "modules.m"
        MR_Word parse_tree__modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 0)));
#line 1150 "modules.m"
        MR_Word parse_tree__modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 1)));
#line 1150 "modules.m"
        MR_Word parse_tree__modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__3_3, (MR_Integer) 0)));
#line 1150 "modules.m"
        MR_Word parse_tree__modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__3_3, (MR_Integer) 1)));
#line 1150 "modules.m"
        MR_Word parse_tree__modules__V_8_8;
#line 1150 "modules.m"
        MR_Integer parse_tree__modules__V_13_13 = (MR_Integer) parse_tree__modules__V_4_4;
#line 1150 "modules.m"
        MR_Integer parse_tree__modules__V_14_14 = (MR_Integer) parse_tree__modules__V_6_6;

#line 1150 "modules.m"
        {
#line 1150 "modules.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__modules__V_8_8, parse_tree__modules__V_13_13, parse_tree__modules__V_14_14);
        }
#line 7467 "parse_tree.modules.c"
        parse_tree__modules__succeeded = (parse_tree__modules__V_8_8 == (MR_Integer) 0);
#line 1150 "modules.m"
        parse_tree__modules__succeeded = !(parse_tree__modules__succeeded);
#line 1150 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1150 "modules.m"
          *parse_tree__modules__HeadVar__1_1 = parse_tree__modules__V_8_8;
#line 1150 "modules.m"
        else
#line 1150 "modules.m"
          {
#line 1150 "modules.m"
            mercury__term____Compare____context_0_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__V_5_5, parse_tree__modules__V_7_7);
#line 1150 "modules.m"
            return;
          }
#line 1150 "modules.m"
      }
#line 1150 "modules.m"
  }
#line 1150 "modules.m"
}

#line 1150 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0(
#line 1150 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1150 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1150 "modules.m"
{
#line 1150 "modules.m"
  {
#line 1150 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1150 "modules.m"
    MR_Integer parse_tree__modules__CastX_7 = (MR_Integer) parse_tree__modules__HeadVar__1_1;
#line 1150 "modules.m"
    MR_Integer parse_tree__modules__CastY_8 = (MR_Integer) parse_tree__modules__HeadVar__2_2;

#line 1150 "modules.m"
    parse_tree__modules__succeeded = (parse_tree__modules__CastX_7 == parse_tree__modules__CastY_8);
#line 1150 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1150 "modules.m"
      parse_tree__modules__succeeded = MR_TRUE;
#line 1150 "modules.m"
    else
#line 1150 "modules.m"
      {
#line 1150 "modules.m"
        MR_Word parse_tree__modules__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1150 "modules.m"
        MR_Word parse_tree__modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1150 "modules.m"
        MR_Word parse_tree__modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 0)));
#line 1150 "modules.m"
        MR_Word parse_tree__modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 1)));

#line 7528 "parse_tree.modules.c"
        parse_tree__modules__succeeded = (parse_tree__modules__V_3_3 == parse_tree__modules__V_5_5);
#line 1150 "modules.m"
        if (parse_tree__modules__succeeded)
#line 7532 "parse_tree.modules.c"
          {
#line 7534 "parse_tree.modules.c"
            return parse_tree__modules__succeeded = mercury__term____Unify____context_0_0(parse_tree__modules__V_4_4, parse_tree__modules__V_6_6);
          }
#line 1150 "modules.m"
      }
#line 1150 "modules.m"
    return parse_tree__modules__succeeded;
#line 1150 "modules.m"
  }
#line 1150 "modules.m"
}

#line 1308 "modules.m"
static void MR_CALL 
parse_tree__modules__report_inaccessible_module_error_6_p_0(
#line 1308 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1308 "modules.m"
  MR_Word parse_tree__modules__ParentModule_8,
#line 1308 "modules.m"
  MR_String parse_tree__modules__SubModule_9,
#line 1308 "modules.m"
  MR_Word parse_tree__modules__ImportOrUseContext_10,
#line 1308 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1308 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20)
#line 1308 "modules.m"
{
#line 1324 "modules.m"
  {
#line 1324 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__ImportOrUse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportOrUseContext_10, (MR_Integer) 0)));
#line 1324 "modules.m"
    MR_Word parse_tree__modules__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportOrUseContext_10, (MR_Integer) 1)));
#line 1324 "modules.m"
    MR_String parse_tree__modules__DeclName_14;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__MainPieces_15;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__VerbosePieces_16;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__Msg_17;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__Spec_18;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_23_23;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_24_24;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_25_25;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_28_28;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_30_30;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_33_33;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_34_34;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_35_35;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_38_38;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_40_40;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_43_43;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_44_44;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_45_45;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_54_54;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_57_57;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_60_60;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_63_63;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_66_66;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_67_67;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_68_68;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_71_71;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_74_74;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_76_76;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_79_79;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_82_82;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_85_85;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_86_86;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_93_93;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_94_94;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_95_95;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_96_96;
#line 1324 "modules.m"
    MR_Word parse_tree__modules__V_101_101;

#line 1327 "modules.m"
#line 1327 "modules.m"
    switch (parse_tree__modules__ImportOrUse_12) {
#line 1327 "modules.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1327 "modules.m"
      case (MR_Integer) 0:
#line 1326 "modules.m"
        parse_tree__modules__DeclName_14 = (MR_String) "import_module";
#line 1327 "modules.m"
        break;
#line 1327 "modules.m"
      case (MR_Integer) 1:
#line 1327 "modules.m"
        parse_tree__modules__DeclName_14 = (MR_String) "use_module";
#line 1327 "modules.m"
        break;
#line 1327 "modules.m"
    }
#line 1329 "modules.m"
    {
#line 1329 "modules.m"
      parse_tree__modules__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1329 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_24_24, 1) = ((MR_Box) (parse_tree__modules__ModuleName_7));
#line 1329 "modules.m"
    }
#line 1330 "modules.m"
    {
#line 1330 "modules.m"
      parse_tree__modules__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1330 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_34_34, 1) = ((MR_Box) (parse_tree__modules__DeclName_14));
#line 1330 "modules.m"
    }
#line 1331 "modules.m"
    {
#line 1331 "modules.m"
      parse_tree__modules__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_45_45, 0) = ((MR_Box) (parse_tree__modules__ParentModule_8));
#line 1331 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_45_45, 1) = ((MR_Box) (parse_tree__modules__SubModule_9));
#line 1331 "modules.m"
    }
#line 1331 "modules.m"
    {
#line 1331 "modules.m"
      parse_tree__modules__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1331 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_44_44, 1) = ((MR_Box) (parse_tree__modules__V_45_45));
#line 1331 "modules.m"
    }
#line 1331 "modules.m"
    {
#line 1331 "modules.m"
      parse_tree__modules__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 0) = ((MR_Box) (parse_tree__modules__V_44_44));
#line 1331 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[33])));
#line 1331 "modules.m"
    }
#line 1331 "modules.m"
    {
#line 1331 "modules.m"
      parse_tree__modules__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[47])));
#line 1331 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 1) = ((MR_Box) (parse_tree__modules__V_43_43));
#line 1331 "modules.m"
    }
#line 1330 "modules.m"
    {
#line 1330 "modules.m"
      parse_tree__modules__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1330 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_38_38, 1) = ((MR_Box) (parse_tree__modules__V_40_40));
#line 1330 "modules.m"
    }
#line 1330 "modules.m"
    {
#line 1330 "modules.m"
      parse_tree__modules__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[46])));
#line 1330 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_35_35, 1) = ((MR_Box) (parse_tree__modules__V_38_38));
#line 1330 "modules.m"
    }
#line 1330 "modules.m"
    {
#line 1330 "modules.m"
      parse_tree__modules__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 0) = ((MR_Box) (parse_tree__modules__V_34_34));
#line 1330 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 1) = ((MR_Box) (parse_tree__modules__V_35_35));
#line 1330 "modules.m"
    }
#line 1330 "modules.m"
    {
#line 1330 "modules.m"
      parse_tree__modules__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[45])));
#line 1330 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_30_30, 1) = ((MR_Box) (parse_tree__modules__V_33_33));
#line 1330 "modules.m"
    }
#line 1329 "modules.m"
    {
#line 1329 "modules.m"
      parse_tree__modules__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1329 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 1) = ((MR_Box) (parse_tree__modules__V_30_30));
#line 1329 "modules.m"
    }
#line 1329 "modules.m"
    {
#line 1329 "modules.m"
      parse_tree__modules__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[44])));
#line 1329 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_25_25, 1) = ((MR_Box) (parse_tree__modules__V_28_28));
#line 1329 "modules.m"
    }
#line 1329 "modules.m"
    {
#line 1329 "modules.m"
      parse_tree__modules__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 0) = ((MR_Box) (parse_tree__modules__V_24_24));
#line 1329 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 1) = ((MR_Box) (parse_tree__modules__V_25_25));
#line 1329 "modules.m"
    }
#line 1329 "modules.m"
    {
#line 1329 "modules.m"
      parse_tree__modules__MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[43])));
#line 1329 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_15, 1) = ((MR_Box) (parse_tree__modules__V_23_23));
#line 1329 "modules.m"
    }
#line 1336 "modules.m"
    {
#line 1336 "modules.m"
      parse_tree__modules__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1336 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_67_67, 1) = ((MR_Box) (parse_tree__modules__ParentModule_8));
#line 1336 "modules.m"
    }
#line 1340 "modules.m"
    {
#line 1340 "modules.m"
      parse_tree__modules__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1340 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_86_86, 1) = ((MR_Box) (parse_tree__modules__SubModule_9));
#line 1340 "modules.m"
    }
#line 1340 "modules.m"
    {
#line 1340 "modules.m"
      parse_tree__modules__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_85_85, 0) = ((MR_Box) (parse_tree__modules__V_86_86));
#line 1340 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[35])));
#line 1340 "modules.m"
    }
#line 1339 "modules.m"
    {
#line 1339 "modules.m"
      parse_tree__modules__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1339 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[57])));
#line 1339 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_82_82, 1) = ((MR_Box) (parse_tree__modules__V_85_85));
#line 1339 "modules.m"
    }
#line 1339 "modules.m"
    {
#line 1339 "modules.m"
      parse_tree__modules__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1339 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[56])));
#line 1339 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_79_79, 1) = ((MR_Box) (parse_tree__modules__V_82_82));
#line 1339 "modules.m"
    }
#line 1338 "modules.m"
    {
#line 1338 "modules.m"
      parse_tree__modules__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1338 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[55])));
#line 1338 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 1) = ((MR_Box) (parse_tree__modules__V_79_79));
#line 1338 "modules.m"
    }
#line 1338 "modules.m"
    {
#line 1338 "modules.m"
      parse_tree__modules__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1338 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_74_74, 0) = ((MR_Box) (parse_tree__modules__V_67_67));
#line 1338 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_74_74, 1) = ((MR_Box) (parse_tree__modules__V_76_76));
#line 1338 "modules.m"
    }
#line 1337 "modules.m"
    {
#line 1337 "modules.m"
      parse_tree__modules__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1337 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[54])));
#line 1337 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 1) = ((MR_Box) (parse_tree__modules__V_74_74));
#line 1337 "modules.m"
    }
#line 1337 "modules.m"
    {
#line 1337 "modules.m"
      parse_tree__modules__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1337 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[53])));
#line 1337 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_68_68, 1) = ((MR_Box) (parse_tree__modules__V_71_71));
#line 1337 "modules.m"
    }
#line 1336 "modules.m"
    {
#line 1336 "modules.m"
      parse_tree__modules__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 0) = ((MR_Box) (parse_tree__modules__V_67_67));
#line 1336 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 1) = ((MR_Box) (parse_tree__modules__V_68_68));
#line 1336 "modules.m"
    }
#line 1336 "modules.m"
    {
#line 1336 "modules.m"
      parse_tree__modules__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[52])));
#line 1336 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_63_63, 1) = ((MR_Box) (parse_tree__modules__V_66_66));
#line 1336 "modules.m"
    }
#line 1335 "modules.m"
    {
#line 1335 "modules.m"
      parse_tree__modules__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[51])));
#line 1335 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_60_60, 1) = ((MR_Box) (parse_tree__modules__V_63_63));
#line 1335 "modules.m"
    }
#line 1335 "modules.m"
    {
#line 1335 "modules.m"
      parse_tree__modules__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[50])));
#line 1335 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_57_57, 1) = ((MR_Box) (parse_tree__modules__V_60_60));
#line 1335 "modules.m"
    }
#line 1334 "modules.m"
    {
#line 1334 "modules.m"
      parse_tree__modules__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[49])));
#line 1334 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_54_54, 1) = ((MR_Box) (parse_tree__modules__V_57_57));
#line 1334 "modules.m"
    }
#line 1333 "modules.m"
    {
#line 1333 "modules.m"
      parse_tree__modules__VerbosePieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__VerbosePieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[48])));
#line 1333 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__VerbosePieces_16, 1) = ((MR_Box) (parse_tree__modules__V_54_54));
#line 1333 "modules.m"
    }
#line 1342 "modules.m"
    {
#line 1342 "modules.m"
      parse_tree__modules__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1342 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_94_94, 0) = ((MR_Box) (parse_tree__modules__MainPieces_15));
#line 1342 "modules.m"
    }
#line 1342 "modules.m"
    {
#line 1342 "modules.m"
      parse_tree__modules__V_96_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "modules.m"
      MR_hl_field(MR_mktag(2), parse_tree__modules__V_96_96, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1342 "modules.m"
      MR_hl_field(MR_mktag(2), parse_tree__modules__V_96_96, 1) = ((MR_Box) (parse_tree__modules__VerbosePieces_16));
#line 1342 "modules.m"
    }
#line 1342 "modules.m"
    {
#line 1342 "modules.m"
      parse_tree__modules__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_95_95, 0) = ((MR_Box) (parse_tree__modules__V_96_96));
#line 1342 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1342 "modules.m"
    }
#line 1342 "modules.m"
    {
#line 1342 "modules.m"
      parse_tree__modules__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_93_93, 0) = ((MR_Box) (parse_tree__modules__V_94_94));
#line 1342 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_93_93, 1) = ((MR_Box) (parse_tree__modules__V_95_95));
#line 1342 "modules.m"
    }
#line 1341 "modules.m"
    {
#line 1341 "modules.m"
      parse_tree__modules__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1341 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_17, 0) = ((MR_Box) (parse_tree__modules__Context_13));
#line 1341 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_17, 1) = ((MR_Box) (parse_tree__modules__V_93_93));
#line 1341 "modules.m"
    }
#line 1343 "modules.m"
    {
#line 1343 "modules.m"
      parse_tree__modules__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_101_101, 0) = ((MR_Box) (parse_tree__modules__Msg_17));
#line 1343 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1343 "modules.m"
    }
#line 1343 "modules.m"
    {
#line 1343 "modules.m"
      parse_tree__modules__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1343 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1343 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1343 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_18, 2) = ((MR_Box) (parse_tree__modules__V_101_101));
#line 1343 "modules.m"
    }
#line 1344 "modules.m"
    {
#line 1344 "modules.m"
      MR_Word base;
#line 1344 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1344 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_20 = base;
#line 1344 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_18));
#line 1344 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_19));
#line 1344 "modules.m"
    }
#line 1324 "modules.m"
  }
#line 1308 "modules.m"
}

#line 1299 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0_1(
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
    MR_Word parse_tree__modules__conv2_STATE_VARIABLE_Specs_20;

#line 1299 "modules.m"
    {
#line 1299 "modules.m"
      parse_tree__modules__report_inaccessible_module_error_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv2_STATE_VARIABLE_Specs_20);
    }
#line 1299 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_STATE_VARIABLE_Specs_20));
#line 1299 "modules.m"
  }
#line 1299 "modules.m"
}

#line 1283 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0(
#line 1283 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1283 "modules.m"
  MR_Word parse_tree__modules__InclMap_8,
#line 1283 "modules.m"
  MR_Word parse_tree__modules__ImportUseMap_9,
#line 1283 "modules.m"
  MR_Word parse_tree__modules__ImportedModule_10,
#line 1283 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1283 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20)
#line 1283 "modules.m"
{
#line 1290 "modules.m"
  {
#line 1290 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1290 "modules.m"
    if (((MR_tag((MR_Word) parse_tree__modules__ImportedModule_10)) == (MR_mktag((MR_Integer) 1))))
#line 1290 "modules.m"
      {
#line 1290 "modules.m"
        MR_Word parse_tree__modules__ParentModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__ImportedModule_10, (MR_Integer) 0)));
#line 1290 "modules.m"
        MR_String parse_tree__modules__SubModule_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__modules__ImportedModule_10, (MR_Integer) 1)));
#line 1291 "modules.m"
        MR_Word parse_tree__modules___ImportedInclContexts_14;
#line 1291 "modules.m"
        MR_Box parse_tree__modules__conv0__ImportedInclContexts_14;

#line 1291 "modules.m"
        {
#line 1291 "modules.m"
          parse_tree__modules__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[11], parse_tree__modules__InclMap_8, ((MR_Box) (parse_tree__modules__ImportedModule_10)), &parse_tree__modules__conv0__ImportedInclContexts_14);
        }
#line 1291 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1291 "modules.m"
          {
#line 1291 "modules.m"
            parse_tree__modules___ImportedInclContexts_14 = ((MR_Word) parse_tree__modules__conv0__ImportedInclContexts_14);
#line 1291 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 1291 "modules.m"
          }
#line 1293 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1293 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Specs_20 = parse_tree__modules__STATE_VARIABLE_Specs_0_19;
#line 1293 "modules.m"
        else
#line 1294 "modules.m"
          {
#line 1294 "modules.m"
            MR_Word parse_tree__modules__ImportsUses_15;
#line 1294 "modules.m"
            MR_Word parse_tree__modules__HeadIU_16;
#line 1294 "modules.m"
            MR_Word parse_tree__modules__TailIUs_17;
#line 1294 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_Specs_21_21;
#line 1294 "modules.m"
            MR_Word parse_tree__modules__V_22_22;
#line 1294 "modules.m"
            MR_Box parse_tree__modules__conv1_ImportsUses_15;
#line 1298 "modules.m"
            MR_Box parse_tree__modules__conv3_STATE_VARIABLE_Specs_20;

#line 1294 "modules.m"
            {
#line 1294 "modules.m"
              mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[12], parse_tree__modules__ImportUseMap_9, ((MR_Box) (parse_tree__modules__ImportedModule_10)), &parse_tree__modules__conv1_ImportsUses_15);
            }
#line 1294 "modules.m"
            parse_tree__modules__ImportsUses_15 = ((MR_Word) parse_tree__modules__conv1_ImportsUses_15);
#line 1295 "modules.m"
            parse_tree__modules__HeadIU_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportsUses_15, (MR_Integer) 0)));
#line 1295 "modules.m"
            parse_tree__modules__TailIUs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportsUses_15, (MR_Integer) 1)));
#line 1296 "modules.m"
            {
#line 1296 "modules.m"
              parse_tree__modules__report_inaccessible_module_error_6_p_0(parse_tree__modules__ModuleName_7, parse_tree__modules__ParentModule_12, parse_tree__modules__SubModule_13, parse_tree__modules__HeadIU_16, parse_tree__modules__STATE_VARIABLE_Specs_0_19, &parse_tree__modules__STATE_VARIABLE_Specs_21_21);
            }
#line 1299 "modules.m"
            {
#line 1299 "modules.m"
              parse_tree__modules__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1299 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_7[1]));
#line 1299 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 1) = ((MR_Box) (parse_tree__modules__check_module_accessibility_6_p_0_1));
#line 1299 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1299 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 3) = ((MR_Box) (parse_tree__modules__ModuleName_7));
#line 1299 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 4) = ((MR_Box) (parse_tree__modules__ParentModule_12));
#line 1299 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 5) = ((MR_Box) (parse_tree__modules__SubModule_13));
#line 1299 "modules.m"
            }
#line 1298 "modules.m"
            {
#line 1298 "modules.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0, (MR_Word) &parse_tree__modules_scalar_common_1[7], parse_tree__modules__V_22_22, parse_tree__modules__TailIUs_17, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_21_21)), &parse_tree__modules__conv3_STATE_VARIABLE_Specs_20);
            }
#line 1298 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_Specs_20 = ((MR_Word) parse_tree__modules__conv3_STATE_VARIABLE_Specs_20);
#line 1294 "modules.m"
          }
#line 1290 "modules.m"
      }
#line 1290 "modules.m"
    else
#line 1304 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_20 = parse_tree__modules__STATE_VARIABLE_Specs_0_19;
#line 1290 "modules.m"
  }
#line 1283 "modules.m"
}

#line 1247 "modules.m"
static void MR_CALL 
parse_tree__modules__record_avails_acc_3_p_0(
#line 1247 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1247 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_2,
#line 1247 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_3)
#line 1247 "modules.m"
{
#line 1250 "modules.m"
  while (MR_TRUE)
#line 1250 "modules.m"
    {
#line 1250 "modules.m"
      /* tailcall optimized into a loop */
#line 1250 "modules.m"
      {
#line 1250 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1250 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1250 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ImportUseMap_3 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_2;
#line 1250 "modules.m"
        else
#line 1251 "modules.m"
          {
#line 1251 "modules.m"
            MR_Word parse_tree__modules__Avail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1251 "modules.m"
            MR_Word parse_tree__modules__Avails_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1251 "modules.m"
            MR_Word parse_tree__modules__ModuleName_10;
#line 1251 "modules.m"
            MR_Word parse_tree__modules__Context_11;
#line 1251 "modules.m"
            MR_Word parse_tree__modules__ImportOrUse_13;
#line 1251 "modules.m"
            MR_Word parse_tree__modules__IoUC_14;
#line 1251 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_24_24;
#line 1264 "modules.m"
            MR_Word parse_tree__modules__OneOrMore0_15;
#line 1260 "modules.m"
            MR_Box parse_tree__modules__conv0_OneOrMore0_15;

#line 1255 "modules.m"
            if (((MR_tag((MR_Word) parse_tree__modules__Avail_7)) == (MR_mktag((MR_Integer) 0))))
#line 1253 "modules.m"
              {
#line 1253 "modules.m"
                MR_Word parse_tree__modules__V_22_22 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Avail_7), (MR_Integer) 0);
#line 1253 "modules.m"
                MR_Integer parse_tree__modules___SeqNum_12;

#line 1253 "modules.m"
                parse_tree__modules__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, (MR_Integer) 0)));
#line 1253 "modules.m"
                parse_tree__modules__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, (MR_Integer) 1)));
#line 1253 "modules.m"
                parse_tree__modules___SeqNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, (MR_Integer) 2)));
#line 1254 "modules.m"
                parse_tree__modules__ImportOrUse_13 = (MR_Integer) 0;
#line 1253 "modules.m"
              }
#line 1255 "modules.m"
            else
#line 1256 "modules.m"
              {
#line 1256 "modules.m"
                MR_Word parse_tree__modules__V_21_21 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Avail_7), (MR_Integer) 1);
#line 1256 "modules.m"
                MR_Integer parse_tree__modules___SeqNum_28;

#line 1256 "modules.m"
                parse_tree__modules__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, (MR_Integer) 0)));
#line 1256 "modules.m"
                parse_tree__modules__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, (MR_Integer) 1)));
#line 1256 "modules.m"
                parse_tree__modules___SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, (MR_Integer) 2)));
#line 1257 "modules.m"
                parse_tree__modules__ImportOrUse_13 = (MR_Integer) 1;
#line 1256 "modules.m"
              }
#line 1259 "modules.m"
            {
#line 1259 "modules.m"
              parse_tree__modules__IoUC_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1259 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__IoUC_14, 0) = ((MR_Box) (parse_tree__modules__ImportOrUse_13));
#line 1259 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__IoUC_14, 1) = ((MR_Box) (parse_tree__modules__Context_11));
#line 1259 "modules.m"
            }
#line 1260 "modules.m"
            {
#line 1260 "modules.m"
              parse_tree__modules__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[12], parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_2, ((MR_Box) (parse_tree__modules__ModuleName_10)), &parse_tree__modules__conv0_OneOrMore0_15);
            }
#line 1260 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1260 "modules.m"
              {
#line 1260 "modules.m"
                parse_tree__modules__OneOrMore0_15 = ((MR_Word) parse_tree__modules__conv0_OneOrMore0_15);
#line 1260 "modules.m"
                parse_tree__modules__succeeded = MR_TRUE;
#line 1260 "modules.m"
              }
#line 1264 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1261 "modules.m"
              {
#line 1261 "modules.m"
                MR_Word parse_tree__modules__HeadIoUC_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_15, (MR_Integer) 0)));
#line 1261 "modules.m"
                MR_Word parse_tree__modules__TailIoUCs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_15, (MR_Integer) 1)));
#line 1261 "modules.m"
                MR_Word parse_tree__modules__OneOrMore_18;
#line 1261 "modules.m"
                MR_Word parse_tree__modules__V_23_23;

#line 1262 "modules.m"
                {
#line 1262 "modules.m"
                  parse_tree__modules__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "modules.m"
                  MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 0) = ((MR_Box) (parse_tree__modules__HeadIoUC_16));
#line 1262 "modules.m"
                  MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 1) = ((MR_Box) (parse_tree__modules__TailIoUCs_17));
#line 1262 "modules.m"
                }
#line 1262 "modules.m"
                {
#line 1262 "modules.m"
                  parse_tree__modules__OneOrMore_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1262 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_18, 0) = ((MR_Box) (parse_tree__modules__IoUC_14));
#line 1262 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_18, 1) = ((MR_Box) (parse_tree__modules__V_23_23));
#line 1262 "modules.m"
                }
#line 1263 "modules.m"
                {
#line 1263 "modules.m"
                  mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[12], ((MR_Box) (parse_tree__modules__ModuleName_10)), ((MR_Box) (parse_tree__modules__OneOrMore_18)), parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_2, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_24_24);
                }
#line 1261 "modules.m"
              }
#line 1264 "modules.m"
            else
#line 1265 "modules.m"
              {
#line 1265 "modules.m"
                MR_Word parse_tree__modules__OneOrMore_30;

#line 1265 "modules.m"
                {
#line 1265 "modules.m"
                  parse_tree__modules__OneOrMore_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_30, 0) = ((MR_Box) (parse_tree__modules__IoUC_14));
#line 1265 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1265 "modules.m"
                }
#line 1266 "modules.m"
                {
#line 1266 "modules.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[12], ((MR_Box) (parse_tree__modules__ModuleName_10)), ((MR_Box) (parse_tree__modules__OneOrMore_30)), parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_2, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_24_24);
                }
#line 1265 "modules.m"
              }
#line 1268 "modules.m"
            /* direct tailcall eliminated */
#line 1268 "modules.m"
            {
#line 1268 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__Avails_8;
#line 1268 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_2 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_24_24;

#line 1268 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_2 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_2;
#line 1268 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1268 "modules.m"
            }
#line 1268 "modules.m"
            continue;
#line 1251 "modules.m"
          }
#line 1250 "modules.m"
      }
#line 1250 "modules.m"
      break;
#line 1250 "modules.m"
    }
#line 1247 "modules.m"
}

#line 1231 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_acc_3_p_0(
#line 1231 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1231 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_2,
#line 1231 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_3)
#line 1231 "modules.m"
{
#line 1234 "modules.m"
  while (MR_TRUE)
#line 1234 "modules.m"
    {
#line 1234 "modules.m"
      /* tailcall optimized into a loop */
#line 1234 "modules.m"
      {
#line 1234 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1234 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1234 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_InclMap_3 = parse_tree__modules__STATE_VARIABLE_InclMap_0_2;
#line 1234 "modules.m"
        else
#line 1235 "modules.m"
          {
#line 1235 "modules.m"
            MR_Word parse_tree__modules__Include_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1235 "modules.m"
            MR_Word parse_tree__modules__Includes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1235 "modules.m"
            MR_Word parse_tree__modules__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__Include_7, (MR_Integer) 0)));
#line 1235 "modules.m"
            MR_Word parse_tree__modules__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__Include_7, (MR_Integer) 1)));
#line 1235 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_20_20;
#line 1236 "modules.m"
            MR_Integer parse_tree__modules___SeqNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__Include_7, (MR_Integer) 2)));
#line 1241 "modules.m"
            MR_Word parse_tree__modules__OneOrMore0_13;
#line 1237 "modules.m"
            MR_Box parse_tree__modules__conv0_OneOrMore0_13;

#line 1237 "modules.m"
            {
#line 1237 "modules.m"
              parse_tree__modules__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[11], parse_tree__modules__STATE_VARIABLE_InclMap_0_2, ((MR_Box) (parse_tree__modules__ModuleName_10)), &parse_tree__modules__conv0_OneOrMore0_13);
            }
#line 1237 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1237 "modules.m"
              {
#line 1237 "modules.m"
                parse_tree__modules__OneOrMore0_13 = ((MR_Word) parse_tree__modules__conv0_OneOrMore0_13);
#line 1237 "modules.m"
                parse_tree__modules__succeeded = MR_TRUE;
#line 1237 "modules.m"
              }
#line 1241 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1238 "modules.m"
              {
#line 1238 "modules.m"
                MR_Word parse_tree__modules__HeadContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_13, (MR_Integer) 0)));
#line 1238 "modules.m"
                MR_Word parse_tree__modules__TailContexts_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_13, (MR_Integer) 1)));
#line 1238 "modules.m"
                MR_Word parse_tree__modules__OneOrMore_16;
#line 1238 "modules.m"
                MR_Word parse_tree__modules__V_19_19;

#line 1239 "modules.m"
                {
#line 1239 "modules.m"
                  parse_tree__modules__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "modules.m"
                  MR_hl_field(MR_mktag(1), parse_tree__modules__V_19_19, 0) = ((MR_Box) (parse_tree__modules__HeadContext_14));
#line 1239 "modules.m"
                  MR_hl_field(MR_mktag(1), parse_tree__modules__V_19_19, 1) = ((MR_Box) (parse_tree__modules__TailContexts_15));
#line 1239 "modules.m"
                }
#line 1239 "modules.m"
                {
#line 1239 "modules.m"
                  parse_tree__modules__OneOrMore_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1239 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_16, 0) = ((MR_Box) (parse_tree__modules__Context_11));
#line 1239 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_16, 1) = ((MR_Box) (parse_tree__modules__V_19_19));
#line 1239 "modules.m"
                }
#line 1240 "modules.m"
                {
#line 1240 "modules.m"
                  mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[11], ((MR_Box) (parse_tree__modules__ModuleName_10)), ((MR_Box) (parse_tree__modules__OneOrMore_16)), parse_tree__modules__STATE_VARIABLE_InclMap_0_2, &parse_tree__modules__STATE_VARIABLE_InclMap_20_20);
                }
#line 1238 "modules.m"
              }
#line 1241 "modules.m"
            else
#line 1242 "modules.m"
              {
#line 1242 "modules.m"
                MR_Word parse_tree__modules__OneOrMore_24;

#line 1242 "modules.m"
                {
#line 1242 "modules.m"
                  parse_tree__modules__OneOrMore_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1242 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_24, 0) = ((MR_Box) (parse_tree__modules__Context_11));
#line 1242 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1242 "modules.m"
                }
#line 1243 "modules.m"
                {
#line 1243 "modules.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[11], ((MR_Box) (parse_tree__modules__ModuleName_10)), ((MR_Box) (parse_tree__modules__OneOrMore_24)), parse_tree__modules__STATE_VARIABLE_InclMap_0_2, &parse_tree__modules__STATE_VARIABLE_InclMap_20_20);
                }
#line 1242 "modules.m"
              }
#line 1245 "modules.m"
            /* direct tailcall eliminated */
#line 1245 "modules.m"
            {
#line 1245 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__Includes_8;
#line 1245 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_2 = parse_tree__modules__STATE_VARIABLE_InclMap_20_20;

#line 1245 "modules.m"
              parse_tree__modules__STATE_VARIABLE_InclMap_0_2 = parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_2;
#line 1245 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1245 "modules.m"
            }
#line 1245 "modules.m"
            continue;
#line 1235 "modules.m"
          }
#line 1234 "modules.m"
      }
#line 1234 "modules.m"
      break;
#line 1234 "modules.m"
    }
#line 1231 "modules.m"
}

#line 1138 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_4_p_0_1(
#line 1138 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1138 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1138 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1138 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 1138 "modules.m"
{
#line 1138 "modules.m"
  {
#line 1138 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1138 "modules.m"
    MR_Word parse_tree__modules__conv0_STATE_VARIABLE_Specs_20;

#line 1138 "modules.m"
    {
#line 1138 "modules.m"
      parse_tree__modules__check_module_accessibility_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv0_STATE_VARIABLE_Specs_20);
    }
#line 1138 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_STATE_VARIABLE_Specs_20));
#line 1138 "modules.m"
  }
#line 1138 "modules.m"
}

#line 1122 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_4_p_0(
#line 1122 "modules.m"
  MR_Word parse_tree__modules__AugCompUnit_5,
#line 1122 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_6,
#line 1122 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1122 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20)
#line 1122 "modules.m"
{
#line 1126 "modules.m"
  {
#line 1126 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1126 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_29_51;
#line 1126 "modules.m"
    MR_Word parse_tree__modules__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 0)));
#line 1126 "modules.m"
    MR_Word parse_tree__modules__SrcItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 3)));
#line 1126 "modules.m"
    MR_Word parse_tree__modules__DirectIntItemBlocks_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 4)));
#line 1126 "modules.m"
    MR_Word parse_tree__modules__IndirectIntItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 5)));
#line 1126 "modules.m"
    MR_Word parse_tree__modules__OptItemBlocks_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 6)));
#line 1126 "modules.m"
    MR_Word parse_tree__modules__IntForOptItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 7)));
#line 1126 "modules.m"
    MR_Word parse_tree__modules__IntItemBlocks_16;
#line 1126 "modules.m"
    MR_Word parse_tree__modules__InclMap_17;
#line 1126 "modules.m"
    MR_Word parse_tree__modules__ImportUseMap_18;
#line 1126 "modules.m"
    MR_Word parse_tree__modules__V_21_21;
#line 1126 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_15_37;
#line 1126 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_16_38;
#line 1126 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_18_40;
#line 1126 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_19_41;
#line 1126 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_21_43;
#line 1126 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_22_44;
#line 1126 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_24_46;
#line 1126 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_25_47;
#line 1127 "modules.m"
    MR_Word parse_tree__modules___ModuleNameContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 1)));
#line 1127 "modules.m"
    MR_Word parse_tree__modules___ModuleVersionNumbers_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 2)));
#line 1138 "modules.m"
    MR_Box parse_tree__modules__conv1_STATE_VARIABLE_Specs_20;

#line 1131 "modules.m"
    {
#line 1131 "modules.m"
      parse_tree__modules__IntItemBlocks_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__modules_scalar_common_1[8], parse_tree__modules__DirectIntItemBlocks_12, parse_tree__modules__IndirectIntItemBlocks_13);
    }
#line 8660 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_29_51 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1179 "modules.m"
    {
#line 1179 "modules.m"
      mercury__map__init_1_p_0(parse_tree__modules__TypeCtorInfo_29_51, (MR_Word) &parse_tree__modules_scalar_common_1[11], &parse_tree__modules__STATE_VARIABLE_InclMap_15_37);
    }
#line 1180 "modules.m"
    {
#line 1180 "modules.m"
      mercury__map__init_1_p_0(parse_tree__modules__TypeCtorInfo_29_51, (MR_Word) &parse_tree__modules_scalar_common_1[12], &parse_tree__modules__STATE_VARIABLE_ImportUseMap_16_38);
    }
#line 1181 "modules.m"
    {
#line 1181 "modules.m"
      parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho4_6_p_0(parse_tree__modules__SrcItemBlocks_11, parse_tree__modules__STATE_VARIABLE_InclMap_15_37, &parse_tree__modules__STATE_VARIABLE_InclMap_18_40, parse_tree__modules__STATE_VARIABLE_ImportUseMap_16_38, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_19_41);
    }
#line 1183 "modules.m"
    {
#line 1183 "modules.m"
      parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho3_6_p_0(parse_tree__modules__IntItemBlocks_16, parse_tree__modules__STATE_VARIABLE_InclMap_18_40, &parse_tree__modules__STATE_VARIABLE_InclMap_21_43, parse_tree__modules__STATE_VARIABLE_ImportUseMap_19_41, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_22_44);
    }
#line 1185 "modules.m"
    {
#line 1185 "modules.m"
      parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho2_6_p_0(parse_tree__modules__OptItemBlocks_14, parse_tree__modules__STATE_VARIABLE_InclMap_21_43, &parse_tree__modules__STATE_VARIABLE_InclMap_24_46, parse_tree__modules__STATE_VARIABLE_ImportUseMap_22_44, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_25_47);
    }
#line 1187 "modules.m"
    {
#line 1187 "modules.m"
      parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho1_6_p_0(parse_tree__modules__IntForOptItemBlocks_15, parse_tree__modules__STATE_VARIABLE_InclMap_24_46, &parse_tree__modules__InclMap_17, parse_tree__modules__STATE_VARIABLE_ImportUseMap_25_47, &parse_tree__modules__ImportUseMap_18);
    }
#line 1138 "modules.m"
    {
#line 1138 "modules.m"
      parse_tree__modules__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1138 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_7[0]));
#line 1138 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 1) = ((MR_Box) (parse_tree__modules__check_imports_accessibility_4_p_0_1));
#line 1138 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1138 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 3) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 1138 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 4) = ((MR_Box) (parse_tree__modules__InclMap_17));
#line 1138 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 5) = ((MR_Box) (parse_tree__modules__ImportUseMap_18));
#line 1138 "modules.m"
    }
#line 1138 "modules.m"
    {
#line 1138 "modules.m"
      mercury__set__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[7], parse_tree__modules__V_21_21, parse_tree__modules__ImportedModules_6, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_19)), &parse_tree__modules__conv1_STATE_VARIABLE_Specs_20);
    }
#line 1138 "modules.m"
    *parse_tree__modules__STATE_VARIABLE_Specs_20 = ((MR_Word) parse_tree__modules__conv1_STATE_VARIABLE_Specs_20);
#line 1126 "modules.m"
  }
#line 1122 "modules.m"
}

#line 1078 "modules.m"
static void MR_CALL 
parse_tree__modules__maybe_record_timestamp_6_p_0(
#line 1078 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1078 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_8,
#line 1078 "modules.m"
  MR_Word parse_tree__modules__NeedQual_9,
#line 1078 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamp_10,
#line 1078 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17,
#line 1078 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18)
#line 1078 "modules.m"
{
#line 1085 "modules.m"
  {
#line 1085 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 24)));
#line 1085 "modules.m"
    MR_String parse_tree__modules__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 26)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 25)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 23)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 22)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 21)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 20)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 19)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 18)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 17)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 16)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 15)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 14)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 13)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 12)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 11)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 10)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 9)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 8)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 7)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 6)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 5)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 4)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 3)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 2)));
#line 1085 "modules.m"
    MR_Word parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 1)));
#line 1085 "modules.m"
    MR_String parse_tree__modules__V_130_130 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 0)));

#line 1085 "modules.m"
    if ((parse_tree__modules__V_106_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1097 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17;
#line 1085 "modules.m"
    else
#line 1085 "modules.m"
      {
#line 1085 "modules.m"
        MR_Word parse_tree__modules__TimestampMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__V_106_106, (MR_Integer) 0)));

#line 1093 "modules.m"
        if ((parse_tree__modules__MaybeTimestamp_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1094 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17;
#line 1093 "modules.m"
        else
#line 1087 "modules.m"
          {
#line 1087 "modules.m"
            MR_Word parse_tree__modules__Timestamp_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__MaybeTimestamp_10, (MR_Integer) 0)));
#line 1087 "modules.m"
            MR_Word parse_tree__modules__FileKind_14;
#line 1087 "modules.m"
            MR_Word parse_tree__modules__TimestampInfo_15;
#line 1087 "modules.m"
            MR_Word parse_tree__modules__TimestampMap_16;
#line 1087 "modules.m"
            MR_Word parse_tree__modules__V_22_22;
#line 1092 "modules.m"
            MR_String parse_tree__modules__V_49_49;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_50_50;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_51_51;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_52_52;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_53_53;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_54_54;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_55_55;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_56_56;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_57_57;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_58_58;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_59_59;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_60_60;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_61_61;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_62_62;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_63_63;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_64_64;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_65_65;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_66_66;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_67_67;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_68_68;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_69_69;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_70_70;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_71_71;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_72_72;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_74_74;
#line 1092 "modules.m"
            MR_String parse_tree__modules__V_75_75;
#line 1092 "modules.m"
            MR_Word parse_tree__modules__V_73_73;

#line 1088 "modules.m"
            {
#line 1088 "modules.m"
              parse_tree__modules__FileKind_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__FileKind_14, 0) = ((MR_Box) (parse_tree__modules__IntFileKind_8));
#line 1088 "modules.m"
            }
#line 1089 "modules.m"
            {
#line 1089 "modules.m"
              parse_tree__modules__TimestampInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__TimestampInfo_15, 0) = ((MR_Box) (parse_tree__modules__FileKind_14));
#line 1089 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__TimestampInfo_15, 1) = ((MR_Box) (parse_tree__modules__Timestamp_13));
#line 1089 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__TimestampInfo_15, 2) = ((MR_Box) (parse_tree__modules__NeedQual_9));
#line 1089 "modules.m"
            }
#line 1091 "modules.m"
            {
#line 1091 "modules.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, ((MR_Box) (parse_tree__modules__ModuleName_7)), ((MR_Box) (parse_tree__modules__TimestampInfo_15)), parse_tree__modules__TimestampMap0_12, &parse_tree__modules__TimestampMap_16);
            }
#line 1092 "modules.m"
            {
#line 1092 "modules.m"
              parse_tree__modules__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_22_22, 0) = ((MR_Box) (parse_tree__modules__TimestampMap_16));
#line 1092 "modules.m"
            }
#line 1092 "modules.m"
            parse_tree__modules__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 0)));
#line 1092 "modules.m"
            parse_tree__modules__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 1)));
#line 1092 "modules.m"
            parse_tree__modules__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 2)));
#line 1092 "modules.m"
            parse_tree__modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 3)));
#line 1092 "modules.m"
            parse_tree__modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 4)));
#line 1092 "modules.m"
            parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 5)));
#line 1092 "modules.m"
            parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 6)));
#line 1092 "modules.m"
            parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 7)));
#line 1092 "modules.m"
            parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 8)));
#line 1092 "modules.m"
            parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 9)));
#line 1092 "modules.m"
            parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 10)));
#line 1092 "modules.m"
            parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 11)));
#line 1092 "modules.m"
            parse_tree__modules__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 12)));
#line 1092 "modules.m"
            parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 13)));
#line 1092 "modules.m"
            parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 14)));
#line 1092 "modules.m"
            parse_tree__modules__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 15)));
#line 1092 "modules.m"
            parse_tree__modules__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 16)));
#line 1092 "modules.m"
            parse_tree__modules__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 17)));
#line 1092 "modules.m"
            parse_tree__modules__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 18)));
#line 1092 "modules.m"
            parse_tree__modules__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 19)));
#line 1092 "modules.m"
            parse_tree__modules__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 20)));
#line 1092 "modules.m"
            parse_tree__modules__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 21)));
#line 1092 "modules.m"
            parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 22)));
#line 1092 "modules.m"
            parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 23)));
#line 1092 "modules.m"
            parse_tree__modules__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 24)));
#line 1092 "modules.m"
            parse_tree__modules__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 25)));
#line 1092 "modules.m"
            parse_tree__modules__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 26)));
#line 1092 "modules.m"
            {
#line 1092 "modules.m"
              MR_Word base;
#line 1092 "modules.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 1092 "modules.m"
              *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18 = base;
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_49_49));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_50_50));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_51_51));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_52_52));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__V_53_53));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_54_54));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__V_55_55));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__V_56_56));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_57_57));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_58_58));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_59_59));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_60_60));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_61_61));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_62_62));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_63_63));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_64_64));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_65_65));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_66_66));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_67_67));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_68_68));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_69_69));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_70_70));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__V_71_71));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__V_72_72));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__V_22_22));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__modules__V_74_74));
#line 1092 "modules.m"
              MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_75_75));
#line 1092 "modules.m"
            }
#line 1087 "modules.m"
          }
#line 1085 "modules.m"
      }
#line 1085 "modules.m"
  }
#line 1078 "modules.m"
}

#line 1034 "modules.m"
static void MR_CALL 
parse_tree__modules__make_module_and_imports_12_p_0(
#line 1034 "modules.m"
  MR_String parse_tree__modules__SourceFileName_13,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_14,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__ModuleName_15,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__ModuleNameContext_16,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__SrcItemBlocks0_17,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__Specs_18,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__PublicChildren_19,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__NestedChildren_20,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__FactDeps_21,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__ForeignIncludeFiles_22,
#line 1034 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestampMap_23,
#line 1034 "modules.m"
  MR_Word * parse_tree__modules__Module_24)
#line 1034 "modules.m"
{
#line 1043 "modules.m"
  {
#line 1043 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1043 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_44_44;
#line 1043 "modules.m"
    MR_Word parse_tree__modules__TypeInfo_47_47;
#line 1043 "modules.m"
    MR_Word parse_tree__modules__SrcItemBlocks_25;
#line 1043 "modules.m"
    MR_Word parse_tree__modules__ParentDeps_26;
#line 1043 "modules.m"
    MR_Word parse_tree__modules__IntDeps_27;
#line 1043 "modules.m"
    MR_Word parse_tree__modules__ImpDeps_28;
#line 1043 "modules.m"
    MR_Word parse_tree__modules__IndirectDeps_29;
#line 1043 "modules.m"
    MR_Word parse_tree__modules__IncludeDeps_30;
#line 1043 "modules.m"
    MR_Word parse_tree__modules__ForeignImports_31;
#line 1043 "modules.m"
    MR_Word parse_tree__modules__Errors_32;
#line 1043 "modules.m"
    MR_Word parse_tree__modules__V_36_36;
#line 1043 "modules.m"
    MR_Word parse_tree__modules__V_37_37;
#line 1043 "modules.m"
    MR_Word parse_tree__modules__V_38_38;
#line 1043 "modules.m"
    MR_Word parse_tree__modules__V_39_39;
#line 1043 "modules.m"
    MR_Word parse_tree__modules__V_40_40;
#line 1043 "modules.m"
    MR_String parse_tree__modules__V_42_42;

#line 1052 "modules.m"
    {
#line 1052 "modules.m"
      parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_src_module_section_0, parse_tree__modules__ModuleName_15, ((MR_Box) ((MR_Integer) 0)), parse_tree__modules__SrcItemBlocks0_17, &parse_tree__modules__SrcItemBlocks_25);
    }
#line 9113 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_44_44 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1054 "modules.m"
    {
#line 1054 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_44_44, &parse_tree__modules__ParentDeps_26);
    }
#line 1055 "modules.m"
    {
#line 1055 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_44_44, &parse_tree__modules__IntDeps_27);
    }
#line 1056 "modules.m"
    {
#line 1056 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_44_44, &parse_tree__modules__ImpDeps_28);
    }
#line 1057 "modules.m"
    {
#line 1057 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_44_44, &parse_tree__modules__IndirectDeps_29);
    }
#line 1058 "modules.m"
    {
#line 1058 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_44_44, &parse_tree__modules__IncludeDeps_30);
    }
#line 1059 "modules.m"
    {
#line 1059 "modules.m"
      parse_tree__modules__ForeignImports_31 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0);
    }
#line 1060 "modules.m"
    {
#line 1060 "modules.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__modules__Errors_32);
    }
#line 9150 "parse_tree.modules.c"
    parse_tree__modules__TypeInfo_47_47 = (MR_Word) &parse_tree__modules_scalar_common_1[8];
#line 1067 "modules.m"
    {
#line 1067 "modules.m"
      parse_tree__modules__V_36_36 = mercury__cord__init_0_f_0(parse_tree__modules__TypeInfo_47_47);
    }
#line 1067 "modules.m"
    {
#line 1067 "modules.m"
      parse_tree__modules__V_37_37 = mercury__cord__init_0_f_0(parse_tree__modules__TypeInfo_47_47);
    }
#line 1067 "modules.m"
    {
#line 1067 "modules.m"
      parse_tree__modules__V_38_38 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[9]);
    }
#line 1067 "modules.m"
    {
#line 1067 "modules.m"
      parse_tree__modules__V_39_39 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[10]);
    }
#line 1067 "modules.m"
    {
#line 1067 "modules.m"
      parse_tree__modules__V_40_40 = mercury__map__init_0_f_0(parse_tree__modules__TypeCtorInfo_44_44, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0);
    }
#line 1068 "modules.m"
    {
#line 1068 "modules.m"
      parse_tree__modules__V_42_42 = mercury__dir__this_directory_0_f_0();
    }
#line 1061 "modules.m"
    {
#line 1061 "modules.m"
      MR_Word base;
#line 1061 "modules.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 1061 "modules.m"
      *parse_tree__modules__Module_24 = base;
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__SourceFileName_13));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__SourceFileModuleName_14));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__ModuleName_15));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__ModuleNameContext_16));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__ParentDeps_26));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__IntDeps_27));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__ImpDeps_28));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__IndirectDeps_29));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__IncludeDeps_30));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__PublicChildren_19));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__NestedChildren_20));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__FactDeps_21));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__ForeignImports_31));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__ForeignIncludeFiles_22));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) ((MR_Integer) 1));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__SrcItemBlocks_25));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_36_36));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_37_37));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_38_38));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_39_39));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_40_40));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__Specs_18));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__Errors_32));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__MaybeTimestampMap_23));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) ((MR_Integer) 1));
#line 1061 "modules.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_42_42));
#line 1061 "modules.m"
    }
#line 1043 "modules.m"
  }
#line 1034 "modules.m"
}

#line 977 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interface_15_p_0(
#line 977 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_165,
#line 977 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 977 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 977 "modules.m"
  MR_Word parse_tree__modules__Import_18,
#line 977 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 977 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_20,
#line 977 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_21,
#line 977 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_22,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_52,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54,
#line 977 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55,
#line 977 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56)
#line 977 "modules.m"
{
#line 988 "modules.m"
  {
#line 988 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 988 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_167_167;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ReturnTimestamp_27;
#line 988 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestamp_29;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntParseTree_30;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntSpecs_31;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntError_32;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntModuleName_33;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntKind_34;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntContext_35;
#line 988 "modules.m"
    MR_Word parse_tree__modules__MaybeVersionNumbers_36;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntIncls_37;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpIncls_38;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntAvails_39;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpAvails_40;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntItems_41;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpItems_42;
#line 988 "modules.m"
    MR_Word parse_tree__modules__IntImports1_43;
#line 988 "modules.m"
    MR_Word parse_tree__modules__IntUses1_44;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ImpImports1_45;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ImpUses1_46;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ShortIntItemBlocks_47;
#line 988 "modules.m"
    MR_Word parse_tree__modules__Statistics_48;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ModIndirectImports0_49;
#line 988 "modules.m"
    MR_Word parse_tree__modules__ModIndirectImports_50;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 24)));
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_60_60;
#line 988 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65;
#line 988 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66;
#line 988 "modules.m"
    MR_Box parse_tree__modules__V_67_67;
#line 988 "modules.m"
    MR_Box parse_tree__modules__V_68_68;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_70_70;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_71_71;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_72_72;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_75_75;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_76_76;
#line 988 "modules.m"
    MR_Word parse_tree__modules__V_77_77;
#line 988 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79;
#line 988 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80;
#line 989 "modules.m"
    MR_String parse_tree__modules__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 0)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 1)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 2)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 3)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 4)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 5)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 6)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 7)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 8)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 9)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 10)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 11)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 12)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 13)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 14)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 15)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 16)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 17)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 18)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 19)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 20)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 21)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 22)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 23)));
#line 989 "modules.m"
    MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 25)));
#line 989 "modules.m"
    MR_String parse_tree__modules__V_109_109 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 26)));
#line 991 "modules.m"
    MR_Word parse_tree__modules__V_110_110;
#line 991 "modules.m"
    MR_Word parse_tree__modules__V_111_111;
#line 991 "modules.m"
    MR_String parse_tree__modules___ImportFileName_28;
#line 1009 "modules.m"
    MR_Box MR_CALL (* parse_tree__modules__func_0)(MR_Box, MR_Box, MR_Box);
#line 1010 "modules.m"
    MR_Box MR_CALL (* parse_tree__modules__func_1)(MR_Box, MR_Box, MR_Box);
#line 1021 "modules.m"
    void MR_CALL (* parse_tree__modules__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1021 "modules.m"
    MR_Box parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_79_79;
#line 1028 "modules.m"
    MR_String parse_tree__modules__V_112_112;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_113_113;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_114_114;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_115_115;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_116_116;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_117_117;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_118_118;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_119_119;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_120_120;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_121_121;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_122_122;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_123_123;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_124_124;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_125_125;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_126_126;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_127_127;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_128_128;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_129_129;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_130_130;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_131_131;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_132_132;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_133_133;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_134_134;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_135_135;
#line 1028 "modules.m"
    MR_Word parse_tree__modules__V_136_136;
#line 1028 "modules.m"
    MR_String parse_tree__modules__V_137_137;
#line 1030 "modules.m"
    MR_String parse_tree__modules__V_138_138;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_139_139;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_140_140;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_141_141;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_142_142;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_143_143;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_144_144;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_146_146;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_147_147;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_148_148;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_149_149;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_150_150;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_151_151;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_152_152;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_153_153;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_154_154;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_155_155;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_156_156;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_157_157;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_158_158;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_159_159;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_160_160;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_161_161;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_162_162;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_163_163;
#line 1030 "modules.m"
    MR_String parse_tree__modules__V_164_164;
#line 1030 "modules.m"
    MR_Word parse_tree__modules__V_145_145;

#line 989 "modules.m"
    {
#line 989 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_59_59, &parse_tree__modules__ReturnTimestamp_27);
    }
#line 991 "modules.m"
    parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 0)));
#line 991 "modules.m"
    parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 1)));
#line 991 "modules.m"
    parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 2)));
#line 991 "modules.m"
    {
#line 991 "modules.m"
      parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_16, parse_tree__modules__V_60_60, (MR_String) "Reading short interface for module", (MR_Integer) 0, parse_tree__modules__Import_18, parse_tree__modules__IntFileKind_19, &parse_tree__modules___ImportFileName_28, parse_tree__modules__ReturnTimestamp_27, &parse_tree__modules__MaybeTimestamp_29, &parse_tree__modules__ShortIntParseTree_30, &parse_tree__modules__ShortIntSpecs_31, &parse_tree__modules__ShortIntError_32);
    }
#line 996 "modules.m"
    {
#line 996 "modules.m"
      parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Import_18, parse_tree__modules__IntFileKind_19, (MR_Integer) 0, parse_tree__modules__MaybeTimestamp_29, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65);
    }
#line 999 "modules.m"
    parse_tree__modules__ShortIntModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 0)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntKind_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 1)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 2)));
#line 999 "modules.m"
    parse_tree__modules__MaybeVersionNumbers_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 3)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntIntIncls_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 4)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntImpIncls_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 5)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntIntAvails_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 6)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntImpAvails_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 7)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntIntItems_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 8)));
#line 999 "modules.m"
    parse_tree__modules__ShortIntImpItems_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 9)));
#line 1004 "modules.m"
    {
#line 1004 "modules.m"
      parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(parse_tree__modules__ShortIntModuleName_33, parse_tree__modules__MaybeVersionNumbers_36, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66);
    }
#line 1006 "modules.m"
    {
#line 1006 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__ShortIntIntAvails_39, &parse_tree__modules__IntImports1_43, &parse_tree__modules__IntUses1_44);
    }
#line 1007 "modules.m"
    {
#line 1007 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__ShortIntImpAvails_40, &parse_tree__modules__ImpImports1_45, &parse_tree__modules__ImpUses1_46);
    }
#line 1009 "modules.m"
    parse_tree__modules__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewIntSection_20, (MR_Integer) 1)));
#line 1009 "modules.m"
    {
#line 1009 "modules.m"
      parse_tree__modules__V_67_67 = parse_tree__modules__func_0(((MR_Box) parse_tree__modules__NewIntSection_20), ((MR_Box) (parse_tree__modules__Import_18)), ((MR_Box) (parse_tree__modules__ShortIntKind_34)));
    }
#line 1010 "modules.m"
    parse_tree__modules__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewImpSection_21, (MR_Integer) 1)));
#line 1010 "modules.m"
    {
#line 1010 "modules.m"
      parse_tree__modules__V_68_68 = parse_tree__modules__func_1(((MR_Box) parse_tree__modules__NewImpSection_21), ((MR_Box) (parse_tree__modules__Import_18)), ((MR_Box) (parse_tree__modules__ShortIntKind_34)));
    }
#line 1008 "modules.m"
    {
#line 1008 "modules.m"
      parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0(parse_tree__modules__TypeInfo_for_MS_165, parse_tree__modules__ShortIntContext_35, parse_tree__modules__V_67_67, parse_tree__modules__V_68_68, parse_tree__modules__ShortIntIntIncls_37, parse_tree__modules__ShortIntImpIncls_38, parse_tree__modules__ShortIntIntAvails_39, parse_tree__modules__ShortIntImpAvails_40, parse_tree__modules__ShortIntIntItems_41, parse_tree__modules__ShortIntImpItems_42, &parse_tree__modules__ShortIntItemBlocks_47);
    }
#line 9612 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_167_167 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1017 "modules.m"
    {
#line 1017 "modules.m"
      parse_tree__modules__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1017 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 0) = ((MR_Box) (parse_tree__modules__IntUses1_44));
#line 1017 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1017 "modules.m"
    }
#line 1017 "modules.m"
    {
#line 1017 "modules.m"
      parse_tree__modules__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1017 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 0) = ((MR_Box) (parse_tree__modules__IntImports1_43));
#line 1017 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 1) = ((MR_Box) (parse_tree__modules__V_72_72));
#line 1017 "modules.m"
    }
#line 1016 "modules.m"
    {
#line 1016 "modules.m"
      parse_tree__modules__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_70_70, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51));
#line 1016 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_70_70, 1) = ((MR_Box) (parse_tree__modules__V_71_71));
#line 1016 "modules.m"
    }
#line 1016 "modules.m"
    {
#line 1016 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_IndirectImports_52 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_167_167, parse_tree__modules__V_70_70);
    }
#line 1019 "modules.m"
    {
#line 1019 "modules.m"
      parse_tree__modules__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 0) = ((MR_Box) (parse_tree__modules__ImpUses1_46));
#line 1019 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1019 "modules.m"
    }
#line 1019 "modules.m"
    {
#line 1019 "modules.m"
      parse_tree__modules__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 0) = ((MR_Box) (parse_tree__modules__ImpImports1_45));
#line 1019 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 1) = ((MR_Box) (parse_tree__modules__V_77_77));
#line 1019 "modules.m"
    }
#line 1018 "modules.m"
    {
#line 1018 "modules.m"
      parse_tree__modules__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53));
#line 1018 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 1) = ((MR_Box) (parse_tree__modules__V_76_76));
#line 1018 "modules.m"
    }
#line 1018 "modules.m"
    {
#line 1018 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_167_167, parse_tree__modules__V_75_75);
    }
#line 1021 "modules.m"
    parse_tree__modules__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__modules__SectionAppend_22, (MR_Integer) 1)));
#line 1021 "modules.m"
    {
#line 1021 "modules.m"
      parse_tree__modules__func_2(((MR_Box) parse_tree__modules__SectionAppend_22), ((MR_Box) (parse_tree__modules__ShortIntItemBlocks_47)), ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66)), &parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_79_79);
    }
#line 1021 "modules.m"
    parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79 = ((MR_Word) parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_79_79);
#line 1022 "modules.m"
    {
#line 1022 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(parse_tree__modules__ShortIntSpecs_31, parse_tree__modules__ShortIntError_32, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80);
    }
#line 1025 "modules.m"
    {
#line 1025 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_16, (MR_Integer) 56, &parse_tree__modules__Statistics_48);
    }
#line 1026 "modules.m"
    {
#line 1026 "modules.m"
      libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_48);
    }
#line 1028 "modules.m"
    parse_tree__modules__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 0)));
#line 1028 "modules.m"
    parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 1)));
#line 1028 "modules.m"
    parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 2)));
#line 1028 "modules.m"
    parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 3)));
#line 1028 "modules.m"
    parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 4)));
#line 1028 "modules.m"
    parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 5)));
#line 1028 "modules.m"
    parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 6)));
#line 1028 "modules.m"
    parse_tree__modules__ModIndirectImports0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 7)));
#line 1028 "modules.m"
    parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 8)));
#line 1028 "modules.m"
    parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 9)));
#line 1028 "modules.m"
    parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 10)));
#line 1028 "modules.m"
    parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 11)));
#line 1028 "modules.m"
    parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 12)));
#line 1028 "modules.m"
    parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 13)));
#line 1028 "modules.m"
    parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 14)));
#line 1028 "modules.m"
    parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 15)));
#line 1028 "modules.m"
    parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 16)));
#line 1028 "modules.m"
    parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 17)));
#line 1028 "modules.m"
    parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 18)));
#line 1028 "modules.m"
    parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 19)));
#line 1028 "modules.m"
    parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 20)));
#line 1028 "modules.m"
    parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 21)));
#line 1028 "modules.m"
    parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 22)));
#line 1028 "modules.m"
    parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 23)));
#line 1028 "modules.m"
    parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 24)));
#line 1028 "modules.m"
    parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 25)));
#line 1028 "modules.m"
    parse_tree__modules__V_137_137 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 26)));
#line 1029 "modules.m"
    {
#line 1029 "modules.m"
      mercury__set__insert_3_p_0(parse_tree__modules__TypeCtorInfo_167_167, ((MR_Box) (parse_tree__modules__Import_18)), parse_tree__modules__ModIndirectImports0_49, &parse_tree__modules__ModIndirectImports_50);
    }
#line 1030 "modules.m"
    parse_tree__modules__V_138_138 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 0)));
#line 1030 "modules.m"
    parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 1)));
#line 1030 "modules.m"
    parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 2)));
#line 1030 "modules.m"
    parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 3)));
#line 1030 "modules.m"
    parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 4)));
#line 1030 "modules.m"
    parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 5)));
#line 1030 "modules.m"
    parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 6)));
#line 1030 "modules.m"
    parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 7)));
#line 1030 "modules.m"
    parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 8)));
#line 1030 "modules.m"
    parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 9)));
#line 1030 "modules.m"
    parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 10)));
#line 1030 "modules.m"
    parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 11)));
#line 1030 "modules.m"
    parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 12)));
#line 1030 "modules.m"
    parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 13)));
#line 1030 "modules.m"
    parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 14)));
#line 1030 "modules.m"
    parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 15)));
#line 1030 "modules.m"
    parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 16)));
#line 1030 "modules.m"
    parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 17)));
#line 1030 "modules.m"
    parse_tree__modules__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 18)));
#line 1030 "modules.m"
    parse_tree__modules__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 19)));
#line 1030 "modules.m"
    parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 20)));
#line 1030 "modules.m"
    parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 21)));
#line 1030 "modules.m"
    parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 22)));
#line 1030 "modules.m"
    parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 23)));
#line 1030 "modules.m"
    parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 24)));
#line 1030 "modules.m"
    parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 25)));
#line 1030 "modules.m"
    parse_tree__modules__V_164_164 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 26)));
#line 1030 "modules.m"
    {
#line 1030 "modules.m"
      MR_Word base;
#line 1030 "modules.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56 = base;
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_138_138));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_139_139));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_140_140));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_141_141));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__V_142_142));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_143_143));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__V_144_144));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__ModIndirectImports_50));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_146_146));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_147_147));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_148_148));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_149_149));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_150_150));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_151_151));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_152_152));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_153_153));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_154_154));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_155_155));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_156_156));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_157_157));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_158_158));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_159_159));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__V_160_160));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__V_161_161));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__V_162_162));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__modules__V_163_163));
#line 1030 "modules.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_164_164));
#line 1030 "modules.m"
    }
#line 988 "modules.m"
  }
#line 977 "modules.m"
}

#line 855 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_long_interface_16_p_0(
#line 855 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_168,
#line 855 "modules.m"
  MR_Word parse_tree__modules__Globals_17,
#line 855 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_18,
#line 855 "modules.m"
  MR_Word parse_tree__modules__NeedQual_19,
#line 855 "modules.m"
  MR_Word parse_tree__modules__Import_20,
#line 855 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_21,
#line 855 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_22,
#line 855 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_23,
#line 855 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_24,
#line 855 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_54,
#line 855 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_55,
#line 855 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_56,
#line 855 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_57,
#line 855 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58,
#line 855 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_59)
#line 855 "modules.m"
{
#line 866 "modules.m"
  {
#line 866 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 866 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_170_170;
#line 866 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_171_171;
#line 866 "modules.m"
    MR_Word parse_tree__modules__ReturnTimestamp_29;
#line 866 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestamp_31;
#line 866 "modules.m"
    MR_Word parse_tree__modules__LongIntParseTree_32;
#line 866 "modules.m"
    MR_Word parse_tree__modules__LongIntSpecs_33;
#line 866 "modules.m"
    MR_Word parse_tree__modules__LongIntErrors_34;
#line 866 "modules.m"
    MR_Word parse_tree__modules__LongIntModuleName_35;
#line 866 "modules.m"
    MR_Word parse_tree__modules__LongIntKind_36;
#line 866 "modules.m"
    MR_Word parse_tree__modules__LongIntContext_37;
#line 866 "modules.m"
    MR_Word parse_tree__modules__MaybeVersionNumbers_38;
#line 866 "modules.m"
    MR_Word parse_tree__modules__LongIntIntIncls_39;
#line 866 "modules.m"
    MR_Word parse_tree__modules__LongIntImpIncls_40;
#line 866 "modules.m"
    MR_Word parse_tree__modules__LongIntIntAvails_41;
#line 866 "modules.m"
    MR_Word parse_tree__modules__LongIntImpAvails_42;
#line 866 "modules.m"
    MR_Word parse_tree__modules__LongIntIntItems_43;
#line 866 "modules.m"
    MR_Word parse_tree__modules__LongIntImpItems_44;
#line 866 "modules.m"
    MR_Word parse_tree__modules__IndirectImports1_45;
#line 866 "modules.m"
    MR_Word parse_tree__modules__IndirectUses1_46;
#line 866 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImports1_47;
#line 866 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectUses1_48;
#line 866 "modules.m"
    MR_Word parse_tree__modules__LongIntItemBlocks_49;
#line 866 "modules.m"
    MR_Word parse_tree__modules__Statistics_50;
#line 866 "modules.m"
    MR_Word parse_tree__modules__FatalLongIntErrors_51;
#line 866 "modules.m"
    MR_Word parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 24)));
#line 866 "modules.m"
    MR_Word parse_tree__modules__V_63_63;
#line 866 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67_67;
#line 866 "modules.m"
    MR_Box parse_tree__modules__V_68_68;
#line 866 "modules.m"
    MR_Box parse_tree__modules__V_69_69;
#line 866 "modules.m"
    MR_Word parse_tree__modules__V_71_71;
#line 866 "modules.m"
    MR_Word parse_tree__modules__V_72_72;
#line 866 "modules.m"
    MR_Word parse_tree__modules__V_73_73;
#line 866 "modules.m"
    MR_Word parse_tree__modules__V_76_76;
#line 866 "modules.m"
    MR_Word parse_tree__modules__V_77_77;
#line 866 "modules.m"
    MR_Word parse_tree__modules__V_78_78;
#line 866 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80;
#line 866 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_81_81;
#line 866 "modules.m"
    MR_Word parse_tree__modules__V_84_84;
#line 867 "modules.m"
    MR_String parse_tree__modules__V_87_87 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 0)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 1)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 2)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 3)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 4)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 5)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 6)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 7)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 8)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 9)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 10)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 11)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 12)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 13)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 14)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 15)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 16)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 17)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 18)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 19)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 20)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 21)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 22)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 23)));
#line 867 "modules.m"
    MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 25)));
#line 867 "modules.m"
    MR_String parse_tree__modules__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 26)));
#line 869 "modules.m"
    MR_Word parse_tree__modules__V_113_113;
#line 869 "modules.m"
    MR_Word parse_tree__modules__V_114_114;
#line 869 "modules.m"
    MR_String parse_tree__modules___LongIntFileName_30;
#line 887 "modules.m"
    MR_Box MR_CALL (* parse_tree__modules__func_0)(MR_Box, MR_Box, MR_Box);
#line 887 "modules.m"
    MR_Box MR_CALL (* parse_tree__modules__func_1)(MR_Box, MR_Box, MR_Box);
#line 896 "modules.m"
    void MR_CALL (* parse_tree__modules__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 896 "modules.m"
    MR_Box parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_80_80;

#line 867 "modules.m"
    {
#line 867 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_62_62, &parse_tree__modules__ReturnTimestamp_29);
    }
#line 869 "modules.m"
    parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_18, (MR_Integer) 0)));
#line 869 "modules.m"
    parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_18, (MR_Integer) 1)));
#line 869 "modules.m"
    parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_18, (MR_Integer) 2)));
#line 869 "modules.m"
    {
#line 869 "modules.m"
      parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_17, parse_tree__modules__V_63_63, (MR_String) "Reading interface for module", (MR_Integer) 0, parse_tree__modules__Import_20, parse_tree__modules__IntFileKind_21, &parse_tree__modules___LongIntFileName_30, parse_tree__modules__ReturnTimestamp_29, &parse_tree__modules__MaybeTimestamp_31, &parse_tree__modules__LongIntParseTree_32, &parse_tree__modules__LongIntSpecs_33, &parse_tree__modules__LongIntErrors_34);
    }
#line 875 "modules.m"
    parse_tree__modules__LongIntModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 0)));
#line 875 "modules.m"
    parse_tree__modules__LongIntKind_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 1)));
#line 875 "modules.m"
    parse_tree__modules__LongIntContext_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 2)));
#line 875 "modules.m"
    parse_tree__modules__MaybeVersionNumbers_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 3)));
#line 875 "modules.m"
    parse_tree__modules__LongIntIntIncls_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 4)));
#line 875 "modules.m"
    parse_tree__modules__LongIntImpIncls_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 5)));
#line 875 "modules.m"
    parse_tree__modules__LongIntIntAvails_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 6)));
#line 875 "modules.m"
    parse_tree__modules__LongIntImpAvails_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 7)));
#line 875 "modules.m"
    parse_tree__modules__LongIntIntItems_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 8)));
#line 875 "modules.m"
    parse_tree__modules__LongIntImpItems_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 9)));
#line 880 "modules.m"
    {
#line 880 "modules.m"
      parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(parse_tree__modules__LongIntModuleName_35, parse_tree__modules__MaybeVersionNumbers_38, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67_67);
    }
#line 882 "modules.m"
    {
#line 882 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__LongIntIntAvails_41, &parse_tree__modules__IndirectImports1_45, &parse_tree__modules__IndirectUses1_46);
    }
#line 884 "modules.m"
    {
#line 884 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__LongIntImpAvails_42, &parse_tree__modules__ImpIndirectImports1_47, &parse_tree__modules__ImpIndirectUses1_48);
    }
#line 887 "modules.m"
    parse_tree__modules__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewIntSection_22, (MR_Integer) 1)));
#line 887 "modules.m"
    {
#line 887 "modules.m"
      parse_tree__modules__V_68_68 = parse_tree__modules__func_0(((MR_Box) parse_tree__modules__NewIntSection_22), ((MR_Box) (parse_tree__modules__Import_20)), ((MR_Box) (parse_tree__modules__LongIntKind_36)));
    }
#line 887 "modules.m"
    parse_tree__modules__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewImpSection_23, (MR_Integer) 1)));
#line 887 "modules.m"
    {
#line 887 "modules.m"
      parse_tree__modules__V_69_69 = parse_tree__modules__func_1(((MR_Box) parse_tree__modules__NewImpSection_23), ((MR_Box) (parse_tree__modules__Import_20)), ((MR_Box) (parse_tree__modules__LongIntKind_36)));
    }
#line 886 "modules.m"
    {
#line 886 "modules.m"
      parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0(parse_tree__modules__TypeInfo_for_MS_168, parse_tree__modules__LongIntContext_37, parse_tree__modules__V_68_68, parse_tree__modules__V_69_69, parse_tree__modules__LongIntIntIncls_39, parse_tree__modules__LongIntImpIncls_40, parse_tree__modules__LongIntIntAvails_41, parse_tree__modules__LongIntImpAvails_42, parse_tree__modules__LongIntIntItems_43, parse_tree__modules__LongIntImpItems_44, &parse_tree__modules__LongIntItemBlocks_49);
    }
#line 10142 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_170_170 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 892 "modules.m"
    {
#line 892 "modules.m"
      parse_tree__modules__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_73_73, 0) = ((MR_Box) (parse_tree__modules__IndirectUses1_46));
#line 892 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 892 "modules.m"
    }
#line 892 "modules.m"
    {
#line 892 "modules.m"
      parse_tree__modules__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 0) = ((MR_Box) (parse_tree__modules__IndirectImports1_45));
#line 892 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 1) = ((MR_Box) (parse_tree__modules__V_73_73));
#line 892 "modules.m"
    }
#line 891 "modules.m"
    {
#line 891 "modules.m"
      parse_tree__modules__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_IndirectImports_0_54));
#line 891 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 1) = ((MR_Box) (parse_tree__modules__V_72_72));
#line 891 "modules.m"
    }
#line 891 "modules.m"
    {
#line 891 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_IndirectImports_55 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_170_170, parse_tree__modules__V_71_71);
    }
#line 894 "modules.m"
    {
#line 894 "modules.m"
      parse_tree__modules__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_78_78, 0) = ((MR_Box) (parse_tree__modules__ImpIndirectUses1_48));
#line 894 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 894 "modules.m"
    }
#line 894 "modules.m"
    {
#line 894 "modules.m"
      parse_tree__modules__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 0) = ((MR_Box) (parse_tree__modules__ImpIndirectImports1_47));
#line 894 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 1) = ((MR_Box) (parse_tree__modules__V_78_78));
#line 894 "modules.m"
    }
#line 893 "modules.m"
    {
#line 893 "modules.m"
      parse_tree__modules__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_56));
#line 893 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 1) = ((MR_Box) (parse_tree__modules__V_77_77));
#line 893 "modules.m"
    }
#line 893 "modules.m"
    {
#line 893 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_57 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_170_170, parse_tree__modules__V_76_76);
    }
#line 896 "modules.m"
    parse_tree__modules__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__modules__SectionAppend_24, (MR_Integer) 1)));
#line 896 "modules.m"
    {
#line 896 "modules.m"
      parse_tree__modules__func_2(((MR_Box) parse_tree__modules__SectionAppend_24), ((MR_Box) (parse_tree__modules__LongIntItemBlocks_49)), ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67_67)), &parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_80_80);
    }
#line 896 "modules.m"
    parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80 = ((MR_Word) parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_80_80);
#line 897 "modules.m"
    {
#line 897 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(parse_tree__modules__LongIntSpecs_33, parse_tree__modules__LongIntErrors_34, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_81_81);
    }
#line 900 "modules.m"
    {
#line 900 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_17, (MR_Integer) 56, &parse_tree__modules__Statistics_50);
    }
#line 901 "modules.m"
    {
#line 901 "modules.m"
      libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_50);
    }
#line 903 "modules.m"
    {
#line 903 "modules.m"
      parse_tree__modules__V_84_84 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
    }
#line 10243 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_171_171 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 903 "modules.m"
    {
#line 903 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_171_171, parse_tree__modules__LongIntErrors_34, parse_tree__modules__V_84_84, &parse_tree__modules__FatalLongIntErrors_51);
    }
#line 904 "modules.m"
    {
#line 904 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_171_171, parse_tree__modules__FatalLongIntErrors_51);
    }
#line 910 "modules.m"
    if (parse_tree__modules__succeeded)
#line 906 "modules.m"
      {
#line 906 "modules.m"
        MR_Word parse_tree__modules__ModImpImports0_52;
#line 906 "modules.m"
        MR_Word parse_tree__modules__ModImpImports_53;
#line 906 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85;
#line 907 "modules.m"
        MR_String parse_tree__modules__V_115_115;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_116_116;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_117_117;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_118_118;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_119_119;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_120_120;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_121_121;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_122_122;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_123_123;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_124_124;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_125_125;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_126_126;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_127_127;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_128_128;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_129_129;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_130_130;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_131_131;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_132_132;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_133_133;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_134_134;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_135_135;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_136_136;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_137_137;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_138_138;
#line 907 "modules.m"
        MR_Word parse_tree__modules__V_139_139;
#line 907 "modules.m"
        MR_String parse_tree__modules__V_140_140;
#line 909 "modules.m"
        MR_String parse_tree__modules__V_141_141;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_142_142;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_143_143;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_144_144;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_145_145;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_146_146;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_148_148;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_149_149;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_150_150;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_151_151;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_152_152;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_153_153;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_154_154;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_155_155;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_156_156;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_157_157;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_158_158;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_159_159;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_160_160;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_161_161;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_162_162;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_163_163;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_164_164;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_165_165;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_166_166;
#line 909 "modules.m"
        MR_String parse_tree__modules__V_167_167;
#line 909 "modules.m"
        MR_Word parse_tree__modules__V_147_147;

#line 905 "modules.m"
        {
#line 905 "modules.m"
          parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Import_20, parse_tree__modules__IntFileKind_21, parse_tree__modules__NeedQual_19, parse_tree__modules__MaybeTimestamp_31, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_81_81, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85);
        }
#line 907 "modules.m"
        parse_tree__modules__V_115_115 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 0)));
#line 907 "modules.m"
        parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 1)));
#line 907 "modules.m"
        parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 2)));
#line 907 "modules.m"
        parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 3)));
#line 907 "modules.m"
        parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 4)));
#line 907 "modules.m"
        parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 5)));
#line 907 "modules.m"
        parse_tree__modules__ModImpImports0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 6)));
#line 907 "modules.m"
        parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 7)));
#line 907 "modules.m"
        parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 8)));
#line 907 "modules.m"
        parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 9)));
#line 907 "modules.m"
        parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 10)));
#line 907 "modules.m"
        parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 11)));
#line 907 "modules.m"
        parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 12)));
#line 907 "modules.m"
        parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 13)));
#line 907 "modules.m"
        parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 14)));
#line 907 "modules.m"
        parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 15)));
#line 907 "modules.m"
        parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 16)));
#line 907 "modules.m"
        parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 17)));
#line 907 "modules.m"
        parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 18)));
#line 907 "modules.m"
        parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 19)));
#line 907 "modules.m"
        parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 20)));
#line 907 "modules.m"
        parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 21)));
#line 907 "modules.m"
        parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 22)));
#line 907 "modules.m"
        parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 23)));
#line 907 "modules.m"
        parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 24)));
#line 907 "modules.m"
        parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 25)));
#line 907 "modules.m"
        parse_tree__modules__V_140_140 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 26)));
#line 908 "modules.m"
        {
#line 908 "modules.m"
          mercury__set__insert_3_p_0(parse_tree__modules__TypeCtorInfo_170_170, ((MR_Box) (parse_tree__modules__Import_20)), parse_tree__modules__ModImpImports0_52, &parse_tree__modules__ModImpImports_53);
        }
#line 909 "modules.m"
        parse_tree__modules__V_141_141 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 0)));
#line 909 "modules.m"
        parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 1)));
#line 909 "modules.m"
        parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 2)));
#line 909 "modules.m"
        parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 3)));
#line 909 "modules.m"
        parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 4)));
#line 909 "modules.m"
        parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 5)));
#line 909 "modules.m"
        parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 6)));
#line 909 "modules.m"
        parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 7)));
#line 909 "modules.m"
        parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 8)));
#line 909 "modules.m"
        parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 9)));
#line 909 "modules.m"
        parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 10)));
#line 909 "modules.m"
        parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 11)));
#line 909 "modules.m"
        parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 12)));
#line 909 "modules.m"
        parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 13)));
#line 909 "modules.m"
        parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 14)));
#line 909 "modules.m"
        parse_tree__modules__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 15)));
#line 909 "modules.m"
        parse_tree__modules__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 16)));
#line 909 "modules.m"
        parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 17)));
#line 909 "modules.m"
        parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 18)));
#line 909 "modules.m"
        parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 19)));
#line 909 "modules.m"
        parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 20)));
#line 909 "modules.m"
        parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 21)));
#line 909 "modules.m"
        parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 22)));
#line 909 "modules.m"
        parse_tree__modules__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 23)));
#line 909 "modules.m"
        parse_tree__modules__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 24)));
#line 909 "modules.m"
        parse_tree__modules__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 25)));
#line 909 "modules.m"
        parse_tree__modules__V_167_167 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 26)));
#line 909 "modules.m"
        {
#line 909 "modules.m"
          MR_Word base;
#line 909 "modules.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 909 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_59 = base;
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_141_141));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_142_142));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_143_143));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_144_144));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__V_145_145));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_146_146));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__ModImpImports_53));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__V_148_148));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_149_149));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_150_150));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_151_151));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_152_152));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_153_153));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_154_154));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_155_155));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_156_156));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_157_157));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_158_158));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_159_159));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_160_160));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_161_161));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_162_162));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__V_163_163));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__V_164_164));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__V_165_165));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__modules__V_166_166));
#line 909 "modules.m"
          MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_167_167));
#line 909 "modules.m"
        }
#line 906 "modules.m"
      }
#line 910 "modules.m"
    else
#line 910 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_59 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_81_81;
#line 866 "modules.m"
  }
#line 855 "modules.m"
}

#line 765 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_private_interface_14_p_0(
#line 765 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_157,
#line 765 "modules.m"
  MR_Word parse_tree__modules__Globals_15,
#line 765 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_16,
#line 765 "modules.m"
  MR_Word parse_tree__modules__Ancestor_17,
#line 765 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_18,
#line 765 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_19,
#line 765 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_20,
#line 765 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_48,
#line 765 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_49,
#line 765 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_50,
#line 765 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_51,
#line 765 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52,
#line 765 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53)
#line 765 "modules.m"
{
#line 775 "modules.m"
  {
#line 775 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 775 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_159_159;
#line 775 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_160_160;
#line 775 "modules.m"
    MR_Word parse_tree__modules__ReturnTimestamp_25;
#line 775 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestamp_27;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntParseTree_28;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntSpecs_29;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntErrors_30;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntModuleName_31;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntKind_32;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntContext_33;
#line 775 "modules.m"
    MR_Word parse_tree__modules__MaybeVersionNumbers_34;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntIntIncls_35;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntImpIncls_36;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntIntAvails_37;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntImpAvails_38;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntIntItems_39;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntImpItems_40;
#line 775 "modules.m"
    MR_Word parse_tree__modules__PrivateIntItemBlocks_41;
#line 775 "modules.m"
    MR_Word parse_tree__modules__AncDirectImports_42;
#line 775 "modules.m"
    MR_Word parse_tree__modules__AncDirectUses_43;
#line 775 "modules.m"
    MR_Word parse_tree__modules__Statistics_44;
#line 775 "modules.m"
    MR_Word parse_tree__modules__FatalPrivateIntErrors_45;
#line 775 "modules.m"
    MR_Word parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 24)));
#line 775 "modules.m"
    MR_Word parse_tree__modules__V_57_57;
#line 775 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_64_64;
#line 775 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65;
#line 775 "modules.m"
    MR_Box parse_tree__modules__V_66_66;
#line 775 "modules.m"
    MR_Box parse_tree__modules__V_67_67;
#line 775 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_70_70;
#line 775 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71;
#line 775 "modules.m"
    MR_Word parse_tree__modules__V_74_74;
#line 776 "modules.m"
    MR_String parse_tree__modules__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 0)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 1)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 2)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 3)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 4)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 5)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 6)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 7)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 8)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 9)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 10)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 11)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 12)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 13)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 14)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 15)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 16)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 17)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 18)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 19)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 20)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 21)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 22)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 23)));
#line 776 "modules.m"
    MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 25)));
#line 776 "modules.m"
    MR_String parse_tree__modules__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 26)));
#line 778 "modules.m"
    MR_Word parse_tree__modules__V_102_102;
#line 778 "modules.m"
    MR_Word parse_tree__modules__V_103_103;
#line 778 "modules.m"
    MR_String parse_tree__modules___AncestorFileName_26;
#line 795 "modules.m"
    MR_Box MR_CALL (* parse_tree__modules__func_0)(MR_Box, MR_Box, MR_Box);
#line 796 "modules.m"
    MR_Box MR_CALL (* parse_tree__modules__func_1)(MR_Box, MR_Box, MR_Box);
#line 807 "modules.m"
    void MR_CALL (* parse_tree__modules__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 807 "modules.m"
    MR_Box parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_70_70;

#line 776 "modules.m"
    {
#line 776 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_56_56, &parse_tree__modules__ReturnTimestamp_25);
    }
#line 778 "modules.m"
    parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_16, (MR_Integer) 0)));
#line 778 "modules.m"
    parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_16, (MR_Integer) 1)));
#line 778 "modules.m"
    parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_16, (MR_Integer) 2)));
#line 778 "modules.m"
    {
#line 778 "modules.m"
      parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_15, parse_tree__modules__V_57_57, (MR_String) "Reading private interface for module", (MR_Integer) 0, parse_tree__modules__Ancestor_17, (MR_Integer) 0, &parse_tree__modules___AncestorFileName_26, parse_tree__modules__ReturnTimestamp_25, &parse_tree__modules__MaybeTimestamp_27, &parse_tree__modules__PrivateIntParseTree_28, &parse_tree__modules__PrivateIntSpecs_29, &parse_tree__modules__PrivateIntErrors_30);
    }
#line 784 "modules.m"
    {
#line 784 "modules.m"
      parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Ancestor_17, (MR_Integer) 0, (MR_Integer) 1, parse_tree__modules__MaybeTimestamp_27, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_64_64);
    }
#line 787 "modules.m"
    parse_tree__modules__PrivateIntModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 0)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntKind_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 1)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 2)));
#line 787 "modules.m"
    parse_tree__modules__MaybeVersionNumbers_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 3)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntIntIncls_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 4)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntImpIncls_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 5)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntIntAvails_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 6)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntImpAvails_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 7)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntIntItems_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 8)));
#line 787 "modules.m"
    parse_tree__modules__PrivateIntImpItems_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 9)));
#line 792 "modules.m"
    {
#line 792 "modules.m"
      parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(parse_tree__modules__PrivateIntModuleName_31, parse_tree__modules__MaybeVersionNumbers_34, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_64_64, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65);
    }
#line 795 "modules.m"
    parse_tree__modules__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewIntSection_18, (MR_Integer) 1)));
#line 795 "modules.m"
    {
#line 795 "modules.m"
      parse_tree__modules__V_66_66 = parse_tree__modules__func_0(((MR_Box) parse_tree__modules__NewIntSection_18), ((MR_Box) (parse_tree__modules__Ancestor_17)), ((MR_Box) (parse_tree__modules__PrivateIntKind_32)));
    }
#line 796 "modules.m"
    parse_tree__modules__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewImpSection_19, (MR_Integer) 1)));
#line 796 "modules.m"
    {
#line 796 "modules.m"
      parse_tree__modules__V_67_67 = parse_tree__modules__func_1(((MR_Box) parse_tree__modules__NewImpSection_19), ((MR_Box) (parse_tree__modules__Ancestor_17)), ((MR_Box) (parse_tree__modules__PrivateIntKind_32)));
    }
#line 794 "modules.m"
    {
#line 794 "modules.m"
      parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0(parse_tree__modules__TypeInfo_for_MS_157, parse_tree__modules__PrivateIntContext_33, parse_tree__modules__V_66_66, parse_tree__modules__V_67_67, parse_tree__modules__PrivateIntIntIncls_35, parse_tree__modules__PrivateIntImpIncls_36, parse_tree__modules__PrivateIntIntAvails_37, parse_tree__modules__PrivateIntImpAvails_38, parse_tree__modules__PrivateIntIntItems_39, parse_tree__modules__PrivateIntImpItems_40, &parse_tree__modules__PrivateIntItemBlocks_41);
    }
#line 802 "modules.m"
    {
#line 802 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(parse_tree__modules__TypeInfo_for_MS_157, parse_tree__modules__PrivateIntItemBlocks_41, &parse_tree__modules__AncDirectImports_42, &parse_tree__modules__AncDirectUses_43);
    }
#line 10799 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_159_159 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 804 "modules.m"
    {
#line 804 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_159_159, parse_tree__modules__AncDirectImports_42, parse_tree__modules__STATE_VARIABLE_DirectImports_0_48, parse_tree__modules__STATE_VARIABLE_DirectImports_49);
    }
#line 805 "modules.m"
    {
#line 805 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_159_159, parse_tree__modules__AncDirectUses_43, parse_tree__modules__STATE_VARIABLE_DirectUses_0_50, parse_tree__modules__STATE_VARIABLE_DirectUses_51);
    }
#line 807 "modules.m"
    parse_tree__modules__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__modules__SectionAppend_20, (MR_Integer) 1)));
#line 807 "modules.m"
    {
#line 807 "modules.m"
      parse_tree__modules__func_2(((MR_Box) parse_tree__modules__SectionAppend_20), ((MR_Box) (parse_tree__modules__PrivateIntItemBlocks_41)), ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65)), &parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_70_70);
    }
#line 807 "modules.m"
    parse_tree__modules__STATE_VARIABLE_ModuleAndImports_70_70 = ((MR_Word) parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_70_70);
#line 808 "modules.m"
    {
#line 808 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(parse_tree__modules__PrivateIntSpecs_29, parse_tree__modules__PrivateIntErrors_30, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_70_70, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71);
    }
#line 811 "modules.m"
    {
#line 811 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_15, (MR_Integer) 56, &parse_tree__modules__Statistics_44);
    }
#line 812 "modules.m"
    {
#line 812 "modules.m"
      libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_44);
    }
#line 814 "modules.m"
    {
#line 814 "modules.m"
      parse_tree__modules__V_74_74 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
    }
#line 10840 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_160_160 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 814 "modules.m"
    {
#line 814 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_160_160, parse_tree__modules__PrivateIntErrors_30, parse_tree__modules__V_74_74, &parse_tree__modules__FatalPrivateIntErrors_45);
    }
#line 816 "modules.m"
    {
#line 816 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_160_160, parse_tree__modules__FatalPrivateIntErrors_45);
    }
#line 820 "modules.m"
    if (parse_tree__modules__succeeded)
#line 817 "modules.m"
      {
#line 817 "modules.m"
        MR_Word parse_tree__modules__ModAncestors0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 4)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__ModAncestors_47;
#line 817 "modules.m"
        MR_String parse_tree__modules__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 0)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 1)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 2)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 3)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 5)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 6)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 7)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 8)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 9)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 10)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 11)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 12)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 13)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 14)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 15)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 16)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 17)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 18)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 19)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 20)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 21)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 22)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 23)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 24)));
#line 817 "modules.m"
        MR_Word parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 25)));
#line 817 "modules.m"
        MR_String parse_tree__modules__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 26)));
#line 819 "modules.m"
        MR_String parse_tree__modules__V_130_130;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_131_131;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_132_132;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_133_133;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_135_135;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_136_136;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_137_137;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_138_138;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_139_139;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_140_140;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_141_141;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_142_142;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_143_143;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_144_144;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_145_145;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_146_146;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_147_147;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_148_148;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_149_149;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_150_150;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_151_151;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_152_152;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_153_153;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_154_154;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_155_155;
#line 819 "modules.m"
        MR_String parse_tree__modules__V_156_156;
#line 819 "modules.m"
        MR_Word parse_tree__modules__V_134_134;

#line 818 "modules.m"
        {
#line 818 "modules.m"
          mercury__set__insert_3_p_0(parse_tree__modules__TypeCtorInfo_159_159, ((MR_Box) (parse_tree__modules__Ancestor_17)), parse_tree__modules__ModAncestors0_46, &parse_tree__modules__ModAncestors_47);
        }
#line 819 "modules.m"
        parse_tree__modules__V_130_130 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 0)));
#line 819 "modules.m"
        parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 1)));
#line 819 "modules.m"
        parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 2)));
#line 819 "modules.m"
        parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 3)));
#line 819 "modules.m"
        parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 4)));
#line 819 "modules.m"
        parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 5)));
#line 819 "modules.m"
        parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 6)));
#line 819 "modules.m"
        parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 7)));
#line 819 "modules.m"
        parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 8)));
#line 819 "modules.m"
        parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 9)));
#line 819 "modules.m"
        parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 10)));
#line 819 "modules.m"
        parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 11)));
#line 819 "modules.m"
        parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 12)));
#line 819 "modules.m"
        parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 13)));
#line 819 "modules.m"
        parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 14)));
#line 819 "modules.m"
        parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 15)));
#line 819 "modules.m"
        parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 16)));
#line 819 "modules.m"
        parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 17)));
#line 819 "modules.m"
        parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 18)));
#line 819 "modules.m"
        parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 19)));
#line 819 "modules.m"
        parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 20)));
#line 819 "modules.m"
        parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 21)));
#line 819 "modules.m"
        parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 22)));
#line 819 "modules.m"
        parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 23)));
#line 819 "modules.m"
        parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 24)));
#line 819 "modules.m"
        parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 25)));
#line 819 "modules.m"
        parse_tree__modules__V_156_156 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 26)));
#line 819 "modules.m"
        {
#line 819 "modules.m"
          MR_Word base;
#line 819 "modules.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 819 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53 = base;
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_130_130));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_131_131));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_132_132));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_133_133));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__ModAncestors_47));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_135_135));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__V_136_136));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__V_137_137));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_138_138));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_139_139));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_140_140));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_141_141));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_142_142));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_143_143));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_144_144));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_145_145));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_146_146));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_147_147));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_148_148));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_149_149));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_150_150));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_151_151));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__V_152_152));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__V_153_153));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__V_154_154));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__modules__V_155_155));
#line 819 "modules.m"
          MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_156_156));
#line 819 "modules.m"
        }
#line 817 "modules.m"
      }
#line 820 "modules.m"
    else
#line 820 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71;
#line 775 "modules.m"
  }
#line 765 "modules.m"
}

#line 735 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__wrap_symname_1_f_0(
#line 735 "modules.m"
  MR_Word parse_tree__modules__ModuleName_3)
#line 735 "modules.m"
{
#line 737 "modules.m"
  {
#line 737 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 737 "modules.m"
    MR_Word parse_tree__modules__HeadVar__2_2;

#line 737 "modules.m"
    {
#line 737 "modules.m"
      parse_tree__modules__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 737 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__modules__ModuleName_3));
#line 737 "modules.m"
    }
#line 737 "modules.m"
    return parse_tree__modules__HeadVar__2_2;
#line 737 "modules.m"
  }
#line 735 "modules.m"
}

#line 650 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_imported_ancestor_5_p_0(
#line 650 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 650 "modules.m"
  MR_Word parse_tree__modules__Context_7,
#line 650 "modules.m"
  MR_Word parse_tree__modules__AncestorName_8,
#line 650 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_15,
#line 650 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_16)
#line 650 "modules.m"
{
#line 653 "modules.m"
  {
#line 653 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 653 "modules.m"
    MR_Word parse_tree__modules__MainPieces_10;
#line 653 "modules.m"
    MR_Word parse_tree__modules__Msg_12;
#line 653 "modules.m"
    MR_Word parse_tree__modules__Spec_14;
#line 653 "modules.m"
    MR_Word parse_tree__modules__V_19_19;
#line 653 "modules.m"
    MR_Word parse_tree__modules__V_20_20;
#line 653 "modules.m"
    MR_Word parse_tree__modules__V_21_21;
#line 653 "modules.m"
    MR_Word parse_tree__modules__V_24_24;
#line 653 "modules.m"
    MR_Word parse_tree__modules__V_25_25;
#line 653 "modules.m"
    MR_Word parse_tree__modules__V_39_39;
#line 653 "modules.m"
    MR_Word parse_tree__modules__V_40_40;
#line 653 "modules.m"
    MR_Word parse_tree__modules__V_43_43;
#line 653 "modules.m"
    MR_Word parse_tree__modules__V_44_44;
#line 653 "modules.m"
    MR_Word parse_tree__modules__V_55_55;

#line 654 "modules.m"
    {
#line 654 "modules.m"
      parse_tree__modules__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 654 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_20_20, 1) = ((MR_Box) (parse_tree__modules__ModuleName_6));
#line 654 "modules.m"
    }
#line 656 "modules.m"
    {
#line 656 "modules.m"
      parse_tree__modules__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 656 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_25_25, 1) = ((MR_Box) (parse_tree__modules__AncestorName_8));
#line 656 "modules.m"
    }
#line 656 "modules.m"
    {
#line 656 "modules.m"
      parse_tree__modules__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_24_24, 0) = ((MR_Box) (parse_tree__modules__V_25_25));
#line 656 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[40])));
#line 656 "modules.m"
    }
#line 655 "modules.m"
    {
#line 655 "modules.m"
      parse_tree__modules__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[38])));
#line 655 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_21_21, 1) = ((MR_Box) (parse_tree__modules__V_24_24));
#line 655 "modules.m"
    }
#line 654 "modules.m"
    {
#line 654 "modules.m"
      parse_tree__modules__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_19_19, 0) = ((MR_Box) (parse_tree__modules__V_20_20));
#line 654 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_19_19, 1) = ((MR_Box) (parse_tree__modules__V_21_21));
#line 654 "modules.m"
    }
#line 654 "modules.m"
    {
#line 654 "modules.m"
      parse_tree__modules__MainPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[37])));
#line 654 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_10, 1) = ((MR_Box) (parse_tree__modules__V_19_19));
#line 654 "modules.m"
    }
#line 662 "modules.m"
    {
#line 662 "modules.m"
      parse_tree__modules__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 662 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 0) = ((MR_Box) (parse_tree__modules__MainPieces_10));
#line 662 "modules.m"
    }
#line 662 "modules.m"
    {
#line 662 "modules.m"
      parse_tree__modules__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 0) = ((MR_Box) (parse_tree__modules__V_44_44));
#line 662 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[42])));
#line 662 "modules.m"
    }
#line 661 "modules.m"
    {
#line 661 "modules.m"
      parse_tree__modules__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 661 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 1) = ((MR_Box) (parse_tree__modules__V_43_43));
#line 661 "modules.m"
    }
#line 663 "modules.m"
    {
#line 663 "modules.m"
      parse_tree__modules__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_39_39, 0) = ((MR_Box) (parse_tree__modules__V_40_40));
#line 663 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "modules.m"
    }
#line 660 "modules.m"
    {
#line 660 "modules.m"
      parse_tree__modules__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 660 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_12, 0) = ((MR_Box) (parse_tree__modules__Context_7));
#line 660 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_12, 1) = ((MR_Box) (parse_tree__modules__V_39_39));
#line 660 "modules.m"
    }
#line 666 "modules.m"
    {
#line 666 "modules.m"
      parse_tree__modules__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_55_55, 0) = ((MR_Box) (parse_tree__modules__Msg_12));
#line 666 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "modules.m"
    }
#line 666 "modules.m"
    {
#line 666 "modules.m"
      parse_tree__modules__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 666 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[0])));
#line 666 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 666 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_14, 2) = ((MR_Box) (parse_tree__modules__V_55_55));
#line 666 "modules.m"
    }
#line 667 "modules.m"
    {
#line 667 "modules.m"
      MR_Word base;
#line 667 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_16 = base;
#line 667 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_14));
#line 667 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_15));
#line 667 "modules.m"
    }
#line 653 "modules.m"
  }
#line 650 "modules.m"
}

#line 635 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_1(
#line 635 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 635 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 635 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 635 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 635 "modules.m"
{
#line 635 "modules.m"
  {
#line 635 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 635 "modules.m"
    MR_Word parse_tree__modules__conv0_STATE_VARIABLE_Specs_16;

#line 635 "modules.m"
    {
#line 635 "modules.m"
      parse_tree__modules__warn_imported_ancestor_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv0_STATE_VARIABLE_Specs_16);
    }
#line 635 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_STATE_VARIABLE_Specs_16));
#line 635 "modules.m"
  }
#line 635 "modules.m"
}

#line 626 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0(
#line 626 "modules.m"
  MR_Word parse_tree__modules__ModuleName_8,
#line 626 "modules.m"
  MR_Word parse_tree__modules__Context_9,
#line 626 "modules.m"
  MR_Word parse_tree__modules__AncestorModules_10,
#line 626 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_11,
#line 626 "modules.m"
  MR_Word parse_tree__modules__UsedModules_12,
#line 626 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_20,
#line 626 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_21)
#line 626 "modules.m"
{
#line 631 "modules.m"
  {
#line 631 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 631 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_50_50 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 631 "modules.m"
    MR_Word parse_tree__modules__ImportedOrUsedModules_14;
#line 631 "modules.m"
    MR_Word parse_tree__modules__ImportedOrUsedAncestorModules_15;
#line 631 "modules.m"
    MR_Word parse_tree__modules__V_22_22;
#line 631 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_23_23;
#line 635 "modules.m"
    MR_Box parse_tree__modules__conv1_STATE_VARIABLE_Specs_23_23;

#line 632 "modules.m"
    {
#line 632 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_50_50, parse_tree__modules__ImportedModules_11, parse_tree__modules__UsedModules_12, &parse_tree__modules__ImportedOrUsedModules_14);
    }
#line 633 "modules.m"
    {
#line 633 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_50_50, parse_tree__modules__AncestorModules_10, parse_tree__modules__ImportedOrUsedModules_14, &parse_tree__modules__ImportedOrUsedAncestorModules_15);
    }
#line 635 "modules.m"
    {
#line 635 "modules.m"
      parse_tree__modules__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 635 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_6[0]));
#line 635 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 1) = ((MR_Box) (parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0_1));
#line 635 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 635 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 3) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 635 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 4) = ((MR_Box) (parse_tree__modules__Context_9));
#line 635 "modules.m"
    }
#line 635 "modules.m"
    {
#line 635 "modules.m"
      mercury__set__fold_4_p_0(parse_tree__modules__TypeCtorInfo_50_50, (MR_Word) &parse_tree__modules_scalar_common_1[7], parse_tree__modules__V_22_22, parse_tree__modules__ImportedOrUsedAncestorModules_15, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_20)), &parse_tree__modules__conv1_STATE_VARIABLE_Specs_23_23);
    }
#line 635 "modules.m"
    parse_tree__modules__STATE_VARIABLE_Specs_23_23 = ((MR_Word) parse_tree__modules__conv1_STATE_VARIABLE_Specs_23_23);
#line 637 "modules.m"
    {
#line 637 "modules.m"
      parse_tree__modules__succeeded = mercury__set__member_2_p_0(parse_tree__modules__TypeCtorInfo_50_50, ((MR_Box) (parse_tree__modules__ModuleName_8)), parse_tree__modules__ImportedOrUsedModules_14);
    }
#line 646 "modules.m"
    if (parse_tree__modules__succeeded)
#line 639 "modules.m"
      {
#line 639 "modules.m"
        MR_Word parse_tree__modules__SelfPieces_16;
#line 639 "modules.m"
        MR_Word parse_tree__modules__SelfMsg_17;
#line 639 "modules.m"
        MR_Word parse_tree__modules__SelfSpec_19;
#line 639 "modules.m"
        MR_Word parse_tree__modules__V_26_26;
#line 639 "modules.m"
        MR_Word parse_tree__modules__V_27_27;
#line 639 "modules.m"
        MR_Word parse_tree__modules__V_34_34;
#line 639 "modules.m"
        MR_Word parse_tree__modules__V_35_35;
#line 639 "modules.m"
        MR_Word parse_tree__modules__V_38_38;
#line 639 "modules.m"
        MR_Word parse_tree__modules__V_39_39;
#line 639 "modules.m"
        MR_Word parse_tree__modules__V_47_47;

#line 638 "modules.m"
        {
#line 638 "modules.m"
          parse_tree__modules__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 638 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_27_27, 1) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 638 "modules.m"
        }
#line 638 "modules.m"
        {
#line 638 "modules.m"
          parse_tree__modules__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_26_26, 0) = ((MR_Box) (parse_tree__modules__V_27_27));
#line 638 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[15])));
#line 638 "modules.m"
        }
#line 638 "modules.m"
        {
#line 638 "modules.m"
          parse_tree__modules__SelfPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__SelfPieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[36])));
#line 638 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__SelfPieces_16, 1) = ((MR_Box) (parse_tree__modules__V_26_26));
#line 638 "modules.m"
        }
#line 641 "modules.m"
        {
#line 641 "modules.m"
          parse_tree__modules__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 641 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_39_39, 0) = ((MR_Box) (parse_tree__modules__SelfPieces_16));
#line 641 "modules.m"
        }
#line 641 "modules.m"
        {
#line 641 "modules.m"
          parse_tree__modules__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_38_38, 0) = ((MR_Box) (parse_tree__modules__V_39_39));
#line 641 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "modules.m"
        }
#line 641 "modules.m"
        {
#line 641 "modules.m"
          parse_tree__modules__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_35_35, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 641 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_35_35, 1) = ((MR_Box) (parse_tree__modules__V_38_38));
#line 641 "modules.m"
        }
#line 641 "modules.m"
        {
#line 641 "modules.m"
          parse_tree__modules__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_34_34, 0) = ((MR_Box) (parse_tree__modules__V_35_35));
#line 641 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "modules.m"
        }
#line 640 "modules.m"
        {
#line 640 "modules.m"
          parse_tree__modules__SelfMsg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 640 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfMsg_17, 0) = ((MR_Box) (parse_tree__modules__Context_9));
#line 640 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfMsg_17, 1) = ((MR_Box) (parse_tree__modules__V_34_34));
#line 640 "modules.m"
        }
#line 644 "modules.m"
        {
#line 644 "modules.m"
          parse_tree__modules__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_47_47, 0) = ((MR_Box) (parse_tree__modules__SelfMsg_17));
#line 644 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "modules.m"
        }
#line 644 "modules.m"
        {
#line 644 "modules.m"
          parse_tree__modules__SelfSpec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 644 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfSpec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[0])));
#line 644 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfSpec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 644 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SelfSpec_19, 2) = ((MR_Box) (parse_tree__modules__V_47_47));
#line 644 "modules.m"
        }
#line 645 "modules.m"
        {
#line 645 "modules.m"
          MR_Word base;
#line 645 "modules.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Specs_21 = base;
#line 645 "modules.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__SelfSpec_19));
#line 645 "modules.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_23_23));
#line 645 "modules.m"
        }
#line 639 "modules.m"
      }
#line 646 "modules.m"
    else
#line 646 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_21 = parse_tree__modules__STATE_VARIABLE_Specs_23_23;
#line 631 "modules.m"
  }
#line 626 "modules.m"
}

#line 581 "modules.m"
static void MR_CALL 
parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(
#line 581 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 581 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_0_2,
#line 581 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevClauses_3,
#line 581 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4,
#line 581 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevImpDecls_5)
#line 581 "modules.m"
{
#line 584 "modules.m"
  while (MR_TRUE)
#line 584 "modules.m"
    {
#line 584 "modules.m"
      /* tailcall optimized into a loop */
#line 584 "modules.m"
      {
#line 584 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 584 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 584 "modules.m"
          {
#line 584 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_RevImpDecls_5 = parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4;
#line 584 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_RevClauses_3 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 584 "modules.m"
          }
#line 584 "modules.m"
        else
#line 586 "modules.m"
          {
#line 586 "modules.m"
            MR_Word parse_tree__modules__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 586 "modules.m"
            MR_Word parse_tree__modules__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 586 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40;
#line 586 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_42_42;

#line 593 "modules.m"
#line 593 "modules.m"
            switch (MR_tag((MR_Word) parse_tree__modules__Item_12)) {
#line 593 "modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 593 "modules.m"
              case (MR_Integer) 0:
#line 591 "modules.m"
                {
#line 592 "modules.m"
                  {
#line 592 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_RevClauses_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_42_42, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 592 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_42_42, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevClauses_0_2));
#line 592 "modules.m"
                  }
#line 591 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40 = parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4;
#line 591 "modules.m"
                }
#line 593 "modules.m"
                break;
#line 593 "modules.m"
              case (MR_Integer) 1:
#line 593 "modules.m"
              case (MR_Integer) 2:
#line 617 "modules.m"
                {
#line 618 "modules.m"
                  {
#line 618 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 618 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4));
#line 618 "modules.m"
                  }
#line 617 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_RevClauses_42_42 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 617 "modules.m"
                }
#line 593 "modules.m"
                break;
#line 593 "modules.m"
              case (MR_Integer) 3:
#line 593 "modules.m"
#line 593 "modules.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_12, (MR_Integer) 0)))) {
#line 593 "modules.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 593 "modules.m"
                  case (MR_Integer) 0:
#line 593 "modules.m"
                  case (MR_Integer) 1:
#line 593 "modules.m"
                  case (MR_Integer) 2:
#line 593 "modules.m"
                  case (MR_Integer) 4:
#line 593 "modules.m"
                  case (MR_Integer) 5:
#line 593 "modules.m"
                  case (MR_Integer) 6:
#line 593 "modules.m"
                  case (MR_Integer) 9:
#line 593 "modules.m"
                  case (MR_Integer) 10:
#line 617 "modules.m"
                    {
#line 618 "modules.m"
                      {
#line 618 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 618 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4));
#line 618 "modules.m"
                      }
#line 617 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_RevClauses_42_42 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 617 "modules.m"
                    }
#line 593 "modules.m"
                    break;
#line 593 "modules.m"
                  case (MR_Integer) 3:
#line 594 "modules.m"
                    {
#line 594 "modules.m"
                      MR_Word parse_tree__modules__ItemPragma_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_12, (MR_Integer) 1)));
#line 594 "modules.m"
                      MR_Word parse_tree__modules__Pragma_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 0)));
#line 594 "modules.m"
                      MR_Word parse_tree__modules__AllowedInInterface_24;
#line 595 "modules.m"
                      MR_Word parse_tree__modules__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 1)));
#line 595 "modules.m"
                      MR_Word parse_tree__modules__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 2)));
#line 595 "modules.m"
                      MR_Integer parse_tree__modules__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 3)));

#line 596 "modules.m"
                      {
#line 596 "modules.m"
                        parse_tree__modules__AllowedInInterface_24 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(parse_tree__modules__Pragma_20);
                      }
#line 600 "modules.m"
#line 600 "modules.m"
                      switch (parse_tree__modules__AllowedInInterface_24) {
#line 600 "modules.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 600 "modules.m"
                        case (MR_Integer) 0:
#line 598 "modules.m"
                          {
#line 599 "modules.m"
                            {
#line 599 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_RevClauses_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_42_42, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 599 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_42_42, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevClauses_0_2));
#line 599 "modules.m"
                            }
#line 598 "modules.m"
                            parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40 = parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4;
#line 598 "modules.m"
                          }
#line 600 "modules.m"
                          break;
#line 600 "modules.m"
                        case (MR_Integer) 1:
#line 601 "modules.m"
                          {
#line 602 "modules.m"
                            {
#line 602 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 602 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4));
#line 602 "modules.m"
                            }
#line 601 "modules.m"
                            parse_tree__modules__STATE_VARIABLE_RevClauses_42_42 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 601 "modules.m"
                          }
#line 600 "modules.m"
                          break;
#line 600 "modules.m"
                      }
#line 594 "modules.m"
                    }
#line 593 "modules.m"
                    break;
#line 593 "modules.m"
                  case (MR_Integer) 7:
#line 593 "modules.m"
                  case (MR_Integer) 8:
#line 591 "modules.m"
                    {
#line 592 "modules.m"
                      {
#line 592 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_RevClauses_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_42_42, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 592 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_42_42, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevClauses_0_2));
#line 592 "modules.m"
                      }
#line 591 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40 = parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4;
#line 591 "modules.m"
                    }
#line 593 "modules.m"
                    break;
#line 593 "modules.m"
                }
#line 593 "modules.m"
                break;
#line 593 "modules.m"
            }
#line 620 "modules.m"
            /* direct tailcall eliminated */
#line 620 "modules.m"
            {
#line 620 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__Items_13;
#line 620 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_0__tmp_copy_2 = parse_tree__modules__STATE_VARIABLE_RevClauses_42_42;
#line 620 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_RevImpDecls_0__tmp_copy_4 = parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40;

#line 620 "modules.m"
              parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4 = parse_tree__modules__STATE_VARIABLE_RevImpDecls_0__tmp_copy_4;
#line 620 "modules.m"
              parse_tree__modules__STATE_VARIABLE_RevClauses_0_2 = parse_tree__modules__STATE_VARIABLE_RevClauses_0__tmp_copy_2;
#line 620 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 620 "modules.m"
            }
#line 620 "modules.m"
            continue;
#line 586 "modules.m"
          }
#line 584 "modules.m"
      }
#line 584 "modules.m"
      break;
#line 584 "modules.m"
    }
#line 581 "modules.m"
}

#line 542 "modules.m"
static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(
#line 542 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 542 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2)
#line 542 "modules.m"
{
#line 545 "modules.m"
  {
#line 545 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 545 "modules.m"
    if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 545 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 545 "modules.m"
    else
#line 547 "modules.m"
      {
#line 547 "modules.m"
        MR_Word parse_tree__modules__RawItemBlock_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 547 "modules.m"
        MR_Word parse_tree__modules__RawItemBlocks_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 547 "modules.m"
        MR_Word parse_tree__modules__SectionContext_7;
#line 547 "modules.m"
        MR_Word parse_tree__modules__Incls_8;
#line 547 "modules.m"
        MR_Word parse_tree__modules__Avails_9;
#line 547 "modules.m"
        MR_Word parse_tree__modules__Items_10;
#line 547 "modules.m"
        MR_Word parse_tree__modules__RevClauses_11;
#line 547 "modules.m"
        MR_Word parse_tree__modules__RevImpDecls_12;
#line 547 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_18_18;
#line 547 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24;
#line 549 "modules.m"
        MR_Word parse_tree__modules___Section_6;

#line 548 "modules.m"
        {
#line 548 "modules.m"
          parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(parse_tree__modules__RawItemBlocks_4, &parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_18_18);
        }
#line 549 "modules.m"
        parse_tree__modules___Section_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 0)));
#line 549 "modules.m"
        parse_tree__modules__SectionContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 1)));
#line 549 "modules.m"
        parse_tree__modules__Incls_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 2)));
#line 549 "modules.m"
        parse_tree__modules__Avails_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 3)));
#line 549 "modules.m"
        parse_tree__modules__Items_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 4)));
#line 556 "modules.m"
        {
#line 556 "modules.m"
          parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(parse_tree__modules__Items_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__RevClauses_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__RevImpDecls_12);
        }
#line 559 "modules.m"
        parse_tree__modules__succeeded = (parse_tree__modules__RevClauses_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "modules.m"
        if (parse_tree__modules__succeeded)
#line 562 "modules.m"
          parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24 = parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_18_18;
#line 562 "modules.m"
        else
#line 563 "modules.m"
          {
#line 563 "modules.m"
            MR_Word parse_tree__modules__Clauses_13;
#line 563 "modules.m"
            MR_Word parse_tree__modules__ClauseItemBlock_14;

#line 563 "modules.m"
            {
#line 563 "modules.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__modules__RevClauses_11, &parse_tree__modules__Clauses_13);
            }
#line 564 "modules.m"
            {
#line 564 "modules.m"
              parse_tree__modules__ClauseItemBlock_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 564 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ClauseItemBlock_14, 0) = ((MR_Box) ((MR_Integer) 1));
#line 564 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ClauseItemBlock_14, 1) = ((MR_Box) (parse_tree__modules__SectionContext_7));
#line 564 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ClauseItemBlock_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 564 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ClauseItemBlock_14, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 564 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ClauseItemBlock_14, 4) = ((MR_Box) (parse_tree__modules__Clauses_13));
#line 564 "modules.m"
            }
#line 566 "modules.m"
            {
#line 566 "modules.m"
              parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24, 0) = ((MR_Box) (parse_tree__modules__ClauseItemBlock_14));
#line 566 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_18_18));
#line 566 "modules.m"
            }
#line 563 "modules.m"
          }
#line 569 "modules.m"
        parse_tree__modules__succeeded = (parse_tree__modules__Incls_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 569 "modules.m"
        if (parse_tree__modules__succeeded)
#line 569 "modules.m"
          {
#line 570 "modules.m"
            parse_tree__modules__succeeded = (parse_tree__modules__Avails_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 569 "modules.m"
            if (parse_tree__modules__succeeded)
#line 571 "modules.m"
              parse_tree__modules__succeeded = (parse_tree__modules__RevImpDecls_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 569 "modules.m"
          }
#line 574 "modules.m"
        if (parse_tree__modules__succeeded)
#line 574 "modules.m"
          *parse_tree__modules__HeadVar__2_2 = parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24;
#line 574 "modules.m"
        else
#line 575 "modules.m"
          {
#line 575 "modules.m"
            MR_Word parse_tree__modules__ImpDecls_15;
#line 575 "modules.m"
            MR_Word parse_tree__modules__ImpDeclItemBlock_16;

#line 575 "modules.m"
            {
#line 575 "modules.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__modules__RevImpDecls_12, &parse_tree__modules__ImpDecls_15);
            }
#line 576 "modules.m"
            {
#line 576 "modules.m"
              parse_tree__modules__ImpDeclItemBlock_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 576 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ImpDeclItemBlock_16, 0) = ((MR_Box) ((MR_Integer) 2));
#line 576 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ImpDeclItemBlock_16, 1) = ((MR_Box) (parse_tree__modules__SectionContext_7));
#line 576 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ImpDeclItemBlock_16, 2) = ((MR_Box) (parse_tree__modules__Incls_8));
#line 576 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ImpDeclItemBlock_16, 3) = ((MR_Box) (parse_tree__modules__Avails_9));
#line 576 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ImpDeclItemBlock_16, 4) = ((MR_Box) (parse_tree__modules__ImpDecls_15));
#line 576 "modules.m"
            }
#line 578 "modules.m"
            {
#line 578 "modules.m"
              MR_Word base;
#line 578 "modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "modules.m"
              *parse_tree__modules__HeadVar__2_2 = base;
#line 578 "modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__ImpDeclItemBlock_16));
#line 578 "modules.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24));
#line 578 "modules.m"
            }
#line 575 "modules.m"
          }
#line 547 "modules.m"
      }
#line 545 "modules.m"
  }
#line 542 "modules.m"
}

#line 523 "modules.m"
static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_src_2_p_0(
#line 523 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 523 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2)
#line 523 "modules.m"
{
#line 526 "modules.m"
  {
#line 526 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 526 "modules.m"
    if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "modules.m"
    else
#line 528 "modules.m"
      {
#line 528 "modules.m"
        MR_Word parse_tree__modules__RawItemBlock_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 528 "modules.m"
        MR_Word parse_tree__modules__RawItemBlocks_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 528 "modules.m"
        MR_Word parse_tree__modules__SrcItemBlock_5;
#line 528 "modules.m"
        MR_Word parse_tree__modules__SrcItemBlocks_6;
#line 528 "modules.m"
        MR_Word parse_tree__modules__Section_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 0)));
#line 528 "modules.m"
        MR_Word parse_tree__modules__SectionContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 1)));
#line 528 "modules.m"
        MR_Word parse_tree__modules__Incls_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 2)));
#line 528 "modules.m"
        MR_Word parse_tree__modules__Avails_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 3)));
#line 528 "modules.m"
        MR_Word parse_tree__modules__Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 4)));
#line 528 "modules.m"
        MR_Word parse_tree__modules__SrcSection_12;

#line 534 "modules.m"
#line 534 "modules.m"
        switch (parse_tree__modules__Section_7) {
#line 534 "modules.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 534 "modules.m"
          case (MR_Integer) 1:
#line 536 "modules.m"
            parse_tree__modules__SrcSection_12 = (MR_Integer) 1;
#line 534 "modules.m"
            break;
#line 534 "modules.m"
          case (MR_Integer) 0:
#line 533 "modules.m"
            parse_tree__modules__SrcSection_12 = (MR_Integer) 0;
#line 534 "modules.m"
            break;
#line 534 "modules.m"
        }
#line 538 "modules.m"
        {
#line 538 "modules.m"
          parse_tree__modules__SrcItemBlock_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 538 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SrcItemBlock_5, 0) = ((MR_Box) (parse_tree__modules__SrcSection_12));
#line 538 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SrcItemBlock_5, 1) = ((MR_Box) (parse_tree__modules__SectionContext_8));
#line 538 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SrcItemBlock_5, 2) = ((MR_Box) (parse_tree__modules__Incls_9));
#line 538 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SrcItemBlock_5, 3) = ((MR_Box) (parse_tree__modules__Avails_10));
#line 538 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SrcItemBlock_5, 4) = ((MR_Box) (parse_tree__modules__Items_11));
#line 538 "modules.m"
        }
#line 540 "modules.m"
        {
#line 540 "modules.m"
          parse_tree__modules__raw_item_blocks_to_src_2_p_0(parse_tree__modules__RawItemBlocks_4, &parse_tree__modules__SrcItemBlocks_6);
        }
#line 528 "modules.m"
        {
#line 528 "modules.m"
          MR_Word base;
#line 528 "modules.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "modules.m"
          *parse_tree__modules__HeadVar__2_2 = base;
#line 528 "modules.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__SrcItemBlock_5));
#line 528 "modules.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__SrcItemBlocks_6));
#line 528 "modules.m"
        }
#line 528 "modules.m"
      }
#line 526 "modules.m"
  }
#line 523 "modules.m"
}

#line 504 "modules.m"
static void MR_CALL 
parse_tree__modules__get_src_item_blocks_public_children_3_p_0(
#line 504 "modules.m"
  MR_Word parse_tree__modules__RawCompUnit_4,
#line 504 "modules.m"
  MR_Word * parse_tree__modules__SrcItemBlocks_5,
#line 504 "modules.m"
  MR_Word * parse_tree__modules__PublicChildren_6)
#line 504 "modules.m"
{
#line 508 "modules.m"
  {
#line 508 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 508 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0;
#line 508 "modules.m"
    MR_Word parse_tree__modules__RawItemBlocks_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit_4, (MR_Integer) 2)));
#line 508 "modules.m"
    MR_Word parse_tree__modules__Children_10;
#line 509 "modules.m"
    MR_Word parse_tree__modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit_4, (MR_Integer) 0)));
#line 509 "modules.m"
    MR_Word parse_tree__modules__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit_4, (MR_Integer) 1)));

#line 510 "modules.m"
    {
#line 510 "modules.m"
      parse_tree__prog_item__get_included_modules_in_item_blocks_2_p_0(parse_tree__modules__TypeCtorInfo_16_16, parse_tree__modules__RawItemBlocks_9, &parse_tree__modules__Children_10);
    }
#line 511 "modules.m"
    {
#line 511 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__modules__Children_10);
    }
#line 514 "modules.m"
    if (parse_tree__modules__succeeded)
#line 512 "modules.m"
      {
#line 512 "modules.m"
        {
#line 512 "modules.m"
          parse_tree__modules__raw_item_blocks_to_src_2_p_0(parse_tree__modules__RawItemBlocks_9, parse_tree__modules__SrcItemBlocks_5);
        }
#line 513 "modules.m"
        {
#line 513 "modules.m"
          mercury__set__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__modules__PublicChildren_6);
#line 513 "modules.m"
          return;
        }
#line 512 "modules.m"
      }
#line 514 "modules.m"
    else
#line 516 "modules.m"
      {
#line 516 "modules.m"
        MR_Word parse_tree__modules__IFileItemBlocks_11;
#line 516 "modules.m"
        MR_Word parse_tree__modules__NoIFileItemBlocks_12;
#line 516 "modules.m"
        MR_Word parse_tree__modules__IFileSrcItemBlocks_13;
#line 516 "modules.m"
        MR_Word parse_tree__modules__NoIFileSrcItemBlocks_14;

#line 515 "modules.m"
        {
#line 515 "modules.m"
          parse_tree__comp_unit_interface__get_int_and_impl_4_p_0((MR_Integer) 0, parse_tree__modules__RawCompUnit_4, &parse_tree__modules__IFileItemBlocks_11, &parse_tree__modules__NoIFileItemBlocks_12);
        }
#line 517 "modules.m"
        {
#line 517 "modules.m"
          parse_tree__modules__raw_item_blocks_to_src_2_p_0(parse_tree__modules__IFileItemBlocks_11, &parse_tree__modules__IFileSrcItemBlocks_13);
        }
#line 518 "modules.m"
        {
#line 518 "modules.m"
          parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(parse_tree__modules__NoIFileItemBlocks_12, &parse_tree__modules__NoIFileSrcItemBlocks_14);
        }
#line 519 "modules.m"
        {
#line 519 "modules.m"
          *parse_tree__modules__SrcItemBlocks_5 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__modules_scalar_common_1[6], parse_tree__modules__IFileSrcItemBlocks_13, parse_tree__modules__NoIFileSrcItemBlocks_14);
        }
#line 520 "modules.m"
        {
#line 520 "modules.m"
          parse_tree__prog_item__get_included_modules_in_item_blocks_2_p_0(parse_tree__modules__TypeCtorInfo_16_16, parse_tree__modules__IFileItemBlocks_11, parse_tree__modules__PublicChildren_6);
#line 520 "modules.m"
          return;
        }
#line 516 "modules.m"
      }
#line 508 "modules.m"
  }
#line 504 "modules.m"
}

#line 204 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_short_interfaces_15_p_0(
#line 204 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_179,
#line 204 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 204 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 204 "modules.m"
  MR_Word parse_tree__modules__Imports_18,
#line 204 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 204 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_20,
#line 204 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_21,
#line 204 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_22,
#line 204 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29,
#line 204 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_30,
#line 204 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31,
#line 204 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32,
#line 204 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 204 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34)
#line 204 "modules.m"
{
#line 973 "modules.m"
  while (MR_TRUE)
#line 973 "modules.m"
    {
#line 973 "modules.m"
      /* tailcall optimized into a loop */
#line 973 "modules.m"
      {
#line 973 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 973 "modules.m"
        MR_Word parse_tree__modules__FirstImport_27;
#line 973 "modules.m"
        MR_Word parse_tree__modules__LaterImports_28;
#line 951 "modules.m"
        MR_Box parse_tree__modules__conv0_FirstImport_27;

#line 951 "modules.m"
        {
#line 951 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv0_FirstImport_27, parse_tree__modules__Imports_18, &parse_tree__modules__LaterImports_28);
        }
#line 951 "modules.m"
        if (parse_tree__modules__succeeded)
#line 951 "modules.m"
          {
#line 951 "modules.m"
            parse_tree__modules__FirstImport_27 = ((MR_Word) parse_tree__modules__conv0_FirstImport_27);
#line 951 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 951 "modules.m"
          }
#line 973 "modules.m"
        if (parse_tree__modules__succeeded)
#line 968 "modules.m"
          {
#line 968 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41;
#line 968 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42;
#line 968 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;
#line 956 "modules.m"
            MR_Word parse_tree__modules__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 7)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 6)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 5)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 4)));
#line 956 "modules.m"
            MR_Word parse_tree__modules__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 2)));
#line 955 "modules.m"
            MR_String parse_tree__modules__V_186_186 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 26)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 25)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 24)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 23)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 22)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 21)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 20)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 19)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 18)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 17)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 16)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 15)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 14)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 13)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 12)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 11)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 10)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 9)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 8)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 3)));
#line 955 "modules.m"
            MR_Word parse_tree__modules__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 1)));
#line 955 "modules.m"
            MR_String parse_tree__modules__V_212_212 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 0)));

#line 955 "modules.m"
            {
#line 955 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__FirstImport_27, parse_tree__modules__V_210_210);
            }
#line 956 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 956 "modules.m"
              {
#line 956 "modules.m"
                {
#line 956 "modules.m"
                  parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_208_208);
                }
#line 956 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 956 "modules.m"
                  {
#line 957 "modules.m"
                    {
#line 957 "modules.m"
                      parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_207_207);
                    }
#line 956 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 956 "modules.m"
                      {
#line 958 "modules.m"
                        {
#line 958 "modules.m"
                          parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_206_206);
                        }
#line 956 "modules.m"
                        if (!(parse_tree__modules__succeeded))
#line 959 "modules.m"
                          {
#line 959 "modules.m"
                            {
#line 959 "modules.m"
                              parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_205_205);
                            }
#line 959 "modules.m"
                          }
#line 956 "modules.m"
                      }
#line 956 "modules.m"
                  }
#line 956 "modules.m"
              }
#line 963 "modules.m"
            if (parse_tree__modules__succeeded)
#line 962 "modules.m"
              {
#line 962 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 962 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31;
#line 962 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29;
#line 962 "modules.m"
              }
#line 963 "modules.m"
            else
#line 964 "modules.m"
              {
#line 964 "modules.m"
                parse_tree__modules__process_module_short_interface_15_p_0(parse_tree__modules__TypeInfo_for_MS_179, parse_tree__modules__Globals_16, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__FirstImport_27, parse_tree__modules__IntFileKind_19, parse_tree__modules__NewIntSection_20, parse_tree__modules__NewImpSection_21, parse_tree__modules__SectionAppend_22, parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29, &parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43);
              }
#line 969 "modules.m"
            /* direct tailcall eliminated */
#line 969 "modules.m"
            {
#line 969 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_18 = parse_tree__modules__LaterImports_28;
#line 969 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_29 = parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41;
#line 969 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_31 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42;
#line 969 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;

#line 969 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33;
#line 969 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_31;
#line 969 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_29;
#line 969 "modules.m"
              parse_tree__modules__Imports_18 = parse_tree__modules__Imports__tmp_copy_18;
#line 969 "modules.m"
            }
#line 969 "modules.m"
            continue;
#line 968 "modules.m"
          }
#line 973 "modules.m"
        else
#line 974 "modules.m"
          {
#line 974 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 974 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31;
#line 974 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_30 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29;
#line 974 "modules.m"
          }
#line 973 "modules.m"
      }
#line 973 "modules.m"
      break;
#line 973 "modules.m"
    }
#line 204 "modules.m"
}

#line 184 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_short_interfaces_and_impls_transitively_11_p_0(
#line 184 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_31,
#line 184 "modules.m"
  MR_Word parse_tree__modules__Globals_12,
#line 184 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_13,
#line 184 "modules.m"
  MR_Word parse_tree__modules__Imports_14,
#line 184 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_15,
#line 184 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_16,
#line 184 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_17,
#line 184 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_18,
#line 184 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22,
#line 184 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23)
#line 184 "modules.m"
{
#line 918 "modules.m"
  while (MR_TRUE)
#line 918 "modules.m"
    {
#line 918 "modules.m"
      /* tailcall optimized into a loop */
#line 918 "modules.m"
      {
#line 918 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 918 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_32_32 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 918 "modules.m"
        MR_Word parse_tree__modules__ImpIndirectImports_21;
#line 918 "modules.m"
        MR_Word parse_tree__modules__V_26_26;
#line 918 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;

#line 921 "modules.m"
        {
#line 921 "modules.m"
          parse_tree__modules__V_26_26 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_32_32);
        }
#line 919 "modules.m"
        {
#line 919 "modules.m"
          parse_tree__modules__process_module_short_interfaces_transitively_13_p_0(parse_tree__modules__TypeInfo_for_MS_31, parse_tree__modules__Globals_12, parse_tree__modules__HaveReadModuleMaps_13, parse_tree__modules__Imports_14, parse_tree__modules__IntFileKind_15, parse_tree__modules__NewIntSection_16, parse_tree__modules__NewImpSection_17, parse_tree__modules__SectionAppend_18, parse_tree__modules__V_26_26, &parse_tree__modules__ImpIndirectImports_21, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27);
        }
#line 922 "modules.m"
        {
#line 922 "modules.m"
          parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_32_32, parse_tree__modules__ImpIndirectImports_21);
        }
#line 924 "modules.m"
        if (parse_tree__modules__succeeded)
#line 923 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;
#line 924 "modules.m"
        else
#line 925 "modules.m"
          {
#line 925 "modules.m"
            /* direct tailcall eliminated */
#line 925 "modules.m"
            {
#line 925 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_14 = parse_tree__modules__ImpIndirectImports_21;
#line 925 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_22 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;

#line 925 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_22;
#line 925 "modules.m"
              parse_tree__modules__Imports_14 = parse_tree__modules__Imports__tmp_copy_14;
#line 925 "modules.m"
            }
#line 925 "modules.m"
            continue;
#line 925 "modules.m"
          }
#line 918 "modules.m"
      }
#line 918 "modules.m"
      break;
#line 918 "modules.m"
    }
#line 184 "modules.m"
}

#line 164 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively_13_p_0(
#line 164 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_38,
#line 164 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 164 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 164 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 164 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 164 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_18,
#line 164 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_19,
#line 164 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_20,
#line 164 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 164 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 164 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 164 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28)
#line 164 "modules.m"
{
#line 933 "modules.m"
  while (MR_TRUE)
#line 933 "modules.m"
    {
#line 933 "modules.m"
      /* tailcall optimized into a loop */
#line 933 "modules.m"
      {
#line 933 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 933 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 933 "modules.m"
        MR_Word parse_tree__modules__IndirectImports_24;
#line 933 "modules.m"
        MR_Word parse_tree__modules__V_31_31;
#line 933 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 933 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 936 "modules.m"
        {
#line 936 "modules.m"
          parse_tree__modules__V_31_31 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_39_39);
        }
#line 934 "modules.m"
        {
#line 934 "modules.m"
          parse_tree__modules__process_module_short_interfaces_15_p_0(parse_tree__modules__TypeInfo_for_MS_38, parse_tree__modules__Globals_14, parse_tree__modules__HaveReadModuleMaps_15, parse_tree__modules__Imports_16, parse_tree__modules__IntFileKind_17, parse_tree__modules__NewIntSection_18, parse_tree__modules__NewImpSection_19, parse_tree__modules__SectionAppend_20, parse_tree__modules__V_31_31, &parse_tree__modules__IndirectImports_24, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33);
        }
#line 938 "modules.m"
        {
#line 938 "modules.m"
          parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_39_39, parse_tree__modules__IndirectImports_24);
        }
#line 940 "modules.m"
        if (parse_tree__modules__succeeded)
#line 939 "modules.m"
          {
#line 939 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;
#line 939 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 939 "modules.m"
          }
#line 940 "modules.m"
        else
#line 941 "modules.m"
          {
#line 941 "modules.m"
            /* direct tailcall eliminated */
#line 941 "modules.m"
            {
#line 941 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_16 = parse_tree__modules__IndirectImports_24;
#line 941 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 941 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 941 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27;
#line 941 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25;
#line 941 "modules.m"
              parse_tree__modules__Imports_16 = parse_tree__modules__Imports__tmp_copy_16;
#line 941 "modules.m"
            }
#line 941 "modules.m"
            continue;
#line 941 "modules.m"
          }
#line 933 "modules.m"
      }
#line 933 "modules.m"
      break;
#line 933 "modules.m"
    }
#line 164 "modules.m"
}

#line 142 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_long_interfaces_16_p_0(
#line 142 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_155,
#line 142 "modules.m"
  MR_Word parse_tree__modules__Globals_17,
#line 142 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_18,
#line 142 "modules.m"
  MR_Word parse_tree__modules__NeedQual_19,
#line 142 "modules.m"
  MR_Word parse_tree__modules__Imports_20,
#line 142 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_21,
#line 142 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_22,
#line 142 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_23,
#line 142 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_24,
#line 142 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32,
#line 142 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_33,
#line 142 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34,
#line 142 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35,
#line 142 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36,
#line 142 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37)
#line 142 "modules.m"
{
#line 851 "modules.m"
  while (MR_TRUE)
#line 851 "modules.m"
    {
#line 851 "modules.m"
      /* tailcall optimized into a loop */
#line 851 "modules.m"
      {
#line 851 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 851 "modules.m"
        MR_Word parse_tree__modules__FirstImport_29;
#line 851 "modules.m"
        MR_Word parse_tree__modules__LaterImports_30;
#line 830 "modules.m"
        MR_Box parse_tree__modules__conv0_FirstImport_29;

#line 830 "modules.m"
        {
#line 830 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv0_FirstImport_29, parse_tree__modules__Imports_20, &parse_tree__modules__LaterImports_30);
        }
#line 830 "modules.m"
        if (parse_tree__modules__succeeded)
#line 830 "modules.m"
          {
#line 830 "modules.m"
            parse_tree__modules__FirstImport_29 = ((MR_Word) parse_tree__modules__conv0_FirstImport_29);
#line 830 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 830 "modules.m"
          }
#line 851 "modules.m"
        if (parse_tree__modules__succeeded)
#line 831 "modules.m"
          {
#line 831 "modules.m"
            MR_Word parse_tree__modules__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43;
#line 831 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44;
#line 831 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45;
#line 831 "modules.m"
            MR_String parse_tree__modules__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 831 "modules.m"
            MR_Word parse_tree__modules__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 831 "modules.m"
            MR_String parse_tree__modules__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 834 "modules.m"
            {
#line 834 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__FirstImport_29, parse_tree__modules__ModuleName_31);
            }
#line 835 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 835 "modules.m"
              {
#line 835 "modules.m"
                {
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 835 "modules.m"
                  MR_String parse_tree__modules__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 835 "modules.m"
                  MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 835 "modules.m"
                  MR_String parse_tree__modules__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 835 "modules.m"
                  {
#line 835 "modules.m"
                    parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_42_42);
                  }
#line 835 "modules.m"
                }
#line 835 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 835 "modules.m"
                  {
#line 836 "modules.m"
                    {
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 836 "modules.m"
                      MR_String parse_tree__modules__V_103_103 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 836 "modules.m"
                      MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 836 "modules.m"
                      MR_String parse_tree__modules__V_128_128 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 836 "modules.m"
                      {
#line 836 "modules.m"
                        parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_41_41);
                      }
#line 836 "modules.m"
                    }
#line 835 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 837 "modules.m"
                      {
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 837 "modules.m"
                        MR_String parse_tree__modules__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 837 "modules.m"
                        MR_Word parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 837 "modules.m"
                        MR_String parse_tree__modules__V_154_154 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 837 "modules.m"
                        {
#line 837 "modules.m"
                          parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_40_40);
                        }
#line 837 "modules.m"
                      }
#line 835 "modules.m"
                  }
#line 835 "modules.m"
              }
#line 841 "modules.m"
            if (parse_tree__modules__succeeded)
#line 840 "modules.m"
              {
#line 840 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36;
#line 840 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34;
#line 840 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32;
#line 840 "modules.m"
              }
#line 841 "modules.m"
            else
#line 842 "modules.m"
              {
#line 842 "modules.m"
                parse_tree__modules__process_module_long_interface_16_p_0(parse_tree__modules__TypeInfo_for_MS_155, parse_tree__modules__Globals_17, parse_tree__modules__HaveReadModuleMaps_18, parse_tree__modules__NeedQual_19, parse_tree__modules__FirstImport_29, parse_tree__modules__IntFileKind_21, parse_tree__modules__NewIntSection_22, parse_tree__modules__NewImpSection_23, parse_tree__modules__SectionAppend_24, parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32, &parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45);
              }
#line 847 "modules.m"
            /* direct tailcall eliminated */
#line 847 "modules.m"
            {
#line 847 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_20 = parse_tree__modules__LaterImports_30;
#line 847 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_32 = parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43;
#line 847 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_34 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44;
#line 847 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_36 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45;

#line 847 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_36;
#line 847 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_34;
#line 847 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_32;
#line 847 "modules.m"
              parse_tree__modules__Imports_20 = parse_tree__modules__Imports__tmp_copy_20;
#line 847 "modules.m"
            }
#line 847 "modules.m"
            continue;
#line 831 "modules.m"
          }
#line 851 "modules.m"
        else
#line 852 "modules.m"
          {
#line 852 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36;
#line 852 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34;
#line 852 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_33 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32;
#line 852 "modules.m"
          }
#line 851 "modules.m"
      }
#line 851 "modules.m"
      break;
#line 851 "modules.m"
    }
#line 142 "modules.m"
}

#line 747 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__process_module_private_interfaces_14_p_0_1(
#line 747 "modules.m"
  MR_Box parse_tree__modules__closure_arg)
#line 747 "modules.m"
{
#line 747 "modules.m"
  {
#line 747 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 747 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;

#line 747 "modules.m"
    {
#line 747 "modules.m"
      return parse_tree__modules__succeeded = parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__747__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))));
    }
#line 747 "modules.m"
    return parse_tree__modules__succeeded;
#line 747 "modules.m"
  }
#line 747 "modules.m"
}

#line 118 "modules.m"
void MR_CALL 
parse_tree__modules__process_module_private_interfaces_14_p_0(
#line 118 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_101,
#line 118 "modules.m"
  MR_Word parse_tree__modules__Globals_15,
#line 118 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_16,
#line 118 "modules.m"
  MR_Word parse_tree__modules__Ancestors_17,
#line 118 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_18,
#line 118 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_19,
#line 118 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_20,
#line 118 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_29,
#line 118 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_30,
#line 118 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_31,
#line 118 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_32,
#line 118 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 118 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34)
#line 118 "modules.m"
{
#line 761 "modules.m"
  while (MR_TRUE)
#line 761 "modules.m"
    {
#line 761 "modules.m"
      /* tailcall optimized into a loop */
#line 761 "modules.m"
      {
#line 761 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 761 "modules.m"
        MR_Word parse_tree__modules__FirstAncestor_25;
#line 761 "modules.m"
        MR_Word parse_tree__modules__LaterAncestors_26;
#line 745 "modules.m"
        MR_Box parse_tree__modules__conv0_FirstAncestor_25;

#line 745 "modules.m"
        {
#line 745 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv0_FirstAncestor_25, parse_tree__modules__Ancestors_17, &parse_tree__modules__LaterAncestors_26);
        }
#line 745 "modules.m"
        if (parse_tree__modules__succeeded)
#line 745 "modules.m"
          {
#line 745 "modules.m"
            parse_tree__modules__FirstAncestor_25 = ((MR_Word) parse_tree__modules__conv0_FirstAncestor_25);
#line 745 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 745 "modules.m"
          }
#line 761 "modules.m"
        if (parse_tree__modules__succeeded)
#line 746 "modules.m"
          {
#line 746 "modules.m"
            MR_Word parse_tree__modules__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 2)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__ModAncestors0_28;
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_37_37;
#line 746 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_41_41;
#line 746 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_42_42;
#line 746 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;
#line 746 "modules.m"
            MR_String parse_tree__modules__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 0)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 1)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 3)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 4)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 5)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 6)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 7)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 8)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 9)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 10)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 11)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 12)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 13)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 14)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 15)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 16)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 17)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 18)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 19)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 20)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 21)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 22)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 23)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 24)));
#line 746 "modules.m"
            MR_Word parse_tree__modules__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 25)));
#line 746 "modules.m"
            MR_String parse_tree__modules__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 26)));
#line 749 "modules.m"
            MR_String parse_tree__modules__V_75_75;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_76_76;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_77_77;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_78_78;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_79_79;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_80_80;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_81_81;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_82_82;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_83_83;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_84_84;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_85_85;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_86_86;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_87_87;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_88_88;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_89_89;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_90_90;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_91_91;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_92_92;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_93_93;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_94_94;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_95_95;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_96_96;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_97_97;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_98_98;
#line 749 "modules.m"
            MR_Word parse_tree__modules__V_99_99;
#line 749 "modules.m"
            MR_String parse_tree__modules__V_100_100;

#line 747 "modules.m"
            {
#line 747 "modules.m"
              parse_tree__modules__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 747 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[0]));
#line 747 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 1) = ((MR_Box) (parse_tree__modules__process_module_private_interfaces_14_p_0_1));
#line 747 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 747 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 3) = ((MR_Box) (parse_tree__modules__FirstAncestor_25));
#line 747 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 4) = ((MR_Box) (parse_tree__modules__ModuleName_27));
#line 747 "modules.m"
            }
#line 747 "modules.m"
            {
#line 747 "modules.m"
              mercury__require__expect_not_4_p_0(parse_tree__modules__V_37_37, (MR_String) "parse_tree.modules", (MR_String) "predicate \140parse_tree.modules.process_module_private_interfaces\'/14", (MR_String) "module is its own ancestor\?");
            }
#line 749 "modules.m"
            parse_tree__modules__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 0)));
#line 749 "modules.m"
            parse_tree__modules__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 1)));
#line 749 "modules.m"
            parse_tree__modules__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 2)));
#line 749 "modules.m"
            parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 3)));
#line 749 "modules.m"
            parse_tree__modules__ModAncestors0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 4)));
#line 749 "modules.m"
            parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 5)));
#line 749 "modules.m"
            parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 6)));
#line 749 "modules.m"
            parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 7)));
#line 749 "modules.m"
            parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 8)));
#line 749 "modules.m"
            parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 9)));
#line 749 "modules.m"
            parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 10)));
#line 749 "modules.m"
            parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 11)));
#line 749 "modules.m"
            parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 12)));
#line 749 "modules.m"
            parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 13)));
#line 749 "modules.m"
            parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 14)));
#line 749 "modules.m"
            parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 15)));
#line 749 "modules.m"
            parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 16)));
#line 749 "modules.m"
            parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 17)));
#line 749 "modules.m"
            parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 18)));
#line 749 "modules.m"
            parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 19)));
#line 749 "modules.m"
            parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 20)));
#line 749 "modules.m"
            parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 21)));
#line 749 "modules.m"
            parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 22)));
#line 749 "modules.m"
            parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 23)));
#line 749 "modules.m"
            parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 24)));
#line 749 "modules.m"
            parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 25)));
#line 749 "modules.m"
            parse_tree__modules__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 26)));
#line 750 "modules.m"
            {
#line 750 "modules.m"
              parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstAncestor_25)), parse_tree__modules__ModAncestors0_28);
            }
#line 753 "modules.m"
            if (parse_tree__modules__succeeded)
#line 752 "modules.m"
              {
#line 752 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 752 "modules.m"
                parse_tree__modules__STATE_VARIABLE_DirectUses_42_42 = parse_tree__modules__STATE_VARIABLE_DirectUses_0_31;
#line 752 "modules.m"
                parse_tree__modules__STATE_VARIABLE_DirectImports_41_41 = parse_tree__modules__STATE_VARIABLE_DirectImports_0_29;
#line 752 "modules.m"
              }
#line 753 "modules.m"
            else
#line 754 "modules.m"
              {
#line 754 "modules.m"
                parse_tree__modules__process_module_private_interface_14_p_0(parse_tree__modules__TypeInfo_for_MS_101, parse_tree__modules__Globals_15, parse_tree__modules__HaveReadModuleMaps_16, parse_tree__modules__FirstAncestor_25, parse_tree__modules__NewIntSection_18, parse_tree__modules__NewImpSection_19, parse_tree__modules__SectionAppend_20, parse_tree__modules__STATE_VARIABLE_DirectImports_0_29, &parse_tree__modules__STATE_VARIABLE_DirectImports_41_41, parse_tree__modules__STATE_VARIABLE_DirectUses_0_31, &parse_tree__modules__STATE_VARIABLE_DirectUses_42_42, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43);
              }
#line 758 "modules.m"
            /* direct tailcall eliminated */
#line 758 "modules.m"
            {
#line 758 "modules.m"
              MR_Word parse_tree__modules__Ancestors__tmp_copy_17 = parse_tree__modules__LaterAncestors_26;
#line 758 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0__tmp_copy_29 = parse_tree__modules__STATE_VARIABLE_DirectImports_41_41;
#line 758 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0__tmp_copy_31 = parse_tree__modules__STATE_VARIABLE_DirectUses_42_42;
#line 758 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;

#line 758 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33;
#line 758 "modules.m"
              parse_tree__modules__STATE_VARIABLE_DirectUses_0_31 = parse_tree__modules__STATE_VARIABLE_DirectUses_0__tmp_copy_31;
#line 758 "modules.m"
              parse_tree__modules__STATE_VARIABLE_DirectImports_0_29 = parse_tree__modules__STATE_VARIABLE_DirectImports_0__tmp_copy_29;
#line 758 "modules.m"
              parse_tree__modules__Ancestors_17 = parse_tree__modules__Ancestors__tmp_copy_17;
#line 758 "modules.m"
            }
#line 758 "modules.m"
            continue;
#line 746 "modules.m"
          }
#line 761 "modules.m"
        else
#line 762 "modules.m"
          {
#line 762 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 762 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_DirectUses_32 = parse_tree__modules__STATE_VARIABLE_DirectUses_0_31;
#line 762 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_DirectImports_30 = parse_tree__modules__STATE_VARIABLE_DirectImports_0_29;
#line 762 "modules.m"
          }
#line 761 "modules.m"
      }
#line 761 "modules.m"
      break;
#line 761 "modules.m"
    }
#line 118 "modules.m"
}

#line 476 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_5(
#line 476 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 476 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 476 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 476 "modules.m"
{
#line 476 "modules.m"
  {
#line 476 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 476 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 476 "modules.m"
    MR_Word parse_tree__modules__conv4_HeadVar__4_4;

#line 476 "modules.m"
    {
#line 476 "modules.m"
      parse_tree__modules__conv4_HeadVar__4_4 = parse_tree__status__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 476 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv4_HeadVar__4_4));
#line 476 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 476 "modules.m"
  }
#line 476 "modules.m"
}

#line 470 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_4(
#line 470 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 470 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 470 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 470 "modules.m"
{
#line 470 "modules.m"
  {
#line 470 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 470 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 470 "modules.m"
    MR_Word parse_tree__modules__conv3_HeadVar__4_4;

#line 470 "modules.m"
    {
#line 470 "modules.m"
      parse_tree__modules__conv3_HeadVar__4_4 = parse_tree__status__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 470 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv3_HeadVar__4_4));
#line 470 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 470 "modules.m"
  }
#line 470 "modules.m"
}

#line 454 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_3(
#line 454 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 454 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 454 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 454 "modules.m"
{
#line 454 "modules.m"
  {
#line 454 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 454 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 454 "modules.m"
    MR_Word parse_tree__modules__conv2_HeadVar__4_4;

#line 454 "modules.m"
    {
#line 454 "modules.m"
      parse_tree__modules__conv2_HeadVar__4_4 = parse_tree__status__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 454 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_HeadVar__4_4));
#line 454 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 454 "modules.m"
  }
#line 454 "modules.m"
}

#line 442 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_2(
#line 442 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 442 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 442 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 442 "modules.m"
{
#line 442 "modules.m"
  {
#line 442 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 442 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 442 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__4_4;

#line 442 "modules.m"
    {
#line 442 "modules.m"
      parse_tree__modules__conv1_HeadVar__4_4 = parse_tree__status__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 442 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__4_4));
#line 442 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 442 "modules.m"
  }
#line 442 "modules.m"
}

#line 433 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_1(
#line 433 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 433 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 433 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 433 "modules.m"
{
#line 433 "modules.m"
  {
#line 433 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 433 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 433 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__4_4;

#line 433 "modules.m"
    {
#line 433 "modules.m"
      parse_tree__modules__conv0_HeadVar__4_4 = parse_tree__status__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 433 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__4_4));
#line 433 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 433 "modules.m"
  }
#line 433 "modules.m"
}

#line 88 "modules.m"
void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0(
#line 88 "modules.m"
  MR_Word parse_tree__modules__Globals_8,
#line 88 "modules.m"
  MR_String parse_tree__modules__SourceFileName_9,
#line 88 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_10,
#line 88 "modules.m"
  MR_Word parse_tree__modules__RawCompUnit0_11,
#line 88 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_48)
#line 88 "modules.m"
{
#line 404 "modules.m"
  {
#line 404 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 404 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_151_151;
#line 404 "modules.m"
    MR_Word parse_tree__modules__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_11, (MR_Integer) 0)));
#line 404 "modules.m"
    MR_Word parse_tree__modules__ModuleNameContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_11, (MR_Integer) 1)));
#line 404 "modules.m"
    MR_Word parse_tree__modules__RawItemBlocks0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_11, (MR_Integer) 2)));
#line 404 "modules.m"
    MR_Word parse_tree__modules__ParentDeps_17;
#line 404 "modules.m"
    MR_Word parse_tree__modules__IntImportDeps0_18;
#line 404 "modules.m"
    MR_Word parse_tree__modules__IntUseDeps0_19;
#line 404 "modules.m"
    MR_Word parse_tree__modules__ImpImportDeps_20;
#line 404 "modules.m"
    MR_Word parse_tree__modules__ImpUseDeps_21;
#line 404 "modules.m"
    MR_Word parse_tree__modules__SrcItemBlocks_22;
#line 404 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntImportDeps_23;
#line 404 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntUseDeps_24;
#line 404 "modules.m"
    MR_Word parse_tree__modules__IntImportDeps_25;
#line 404 "modules.m"
    MR_Word parse_tree__modules__IntUseDeps_26;
#line 404 "modules.m"
    MR_Word parse_tree__modules__HaveReadModuleMaps_27;
#line 404 "modules.m"
    MR_Word parse_tree__modules__ParentImportDeps_28;
#line 404 "modules.m"
    MR_Word parse_tree__modules__ParentUseDeps_29;
#line 404 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps0_30;
#line 404 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps1_32;
#line 404 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImportDeps0_34;
#line 404 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps2_36;
#line 404 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps_38;
#line 404 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImportDeps_40;
#line 404 "modules.m"
    MR_Word parse_tree__modules__AugCompUnit_44;
#line 404 "modules.m"
    MR_Word parse_tree__modules__AccessSpecs_47;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_52_52;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_53_53;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_55_55;
#line 404 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_57_57;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_58_58;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_59_59;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_60_60;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_61_61;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_65_65;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_66_66;
#line 404 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67_67;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_73_73;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_76_76;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_77_77;
#line 404 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_78_78;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_86_86;
#line 404 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_87_87;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_95_95;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_96_96;
#line 404 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_97_97;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_105_105;
#line 404 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_106_106;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_114_114;
#line 404 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_115_115;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_123_123;
#line 404 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_124_124;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_131_131;
#line 404 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_132_132;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_139_139;
#line 404 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_140_140;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_143_143;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_145_145;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_146_146;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_147_147;
#line 404 "modules.m"
    MR_Word parse_tree__modules__V_148_148;
#line 440 "modules.m"
    MR_Word parse_tree__modules__V_31_31;
#line 445 "modules.m"
    MR_Word parse_tree__modules__V_33_33;
#line 452 "modules.m"
    MR_Word parse_tree__modules__V_35_35;
#line 462 "modules.m"
    MR_Word parse_tree__modules__V_37_37;
#line 468 "modules.m"
    MR_Word parse_tree__modules__V_39_39;
#line 474 "modules.m"
    MR_Word parse_tree__modules__V_41_41;
#line 483 "modules.m"
    MR_Word parse_tree__modules__V_42_42;
#line 489 "modules.m"
    MR_Word parse_tree__modules__V_43_43;
#line 495 "modules.m"
    MR_Word parse_tree__modules__V_45_45;
#line 495 "modules.m"
    MR_Word parse_tree__modules__V_46_46;

#line 408 "modules.m"
    {
#line 408 "modules.m"
      parse_tree__modules__ParentDeps_17 = mdbcomp__sym_name__get_ancestors_1_f_0(parse_tree__modules__ModuleName_14);
    }
#line 409 "modules.m"
    {
#line 409 "modules.m"
      parse_tree__get_dependencies__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(parse_tree__modules__RawItemBlocks0_16, &parse_tree__modules__IntImportDeps0_18, &parse_tree__modules__IntUseDeps0_19, &parse_tree__modules__ImpImportDeps_20, &parse_tree__modules__ImpUseDeps_21);
    }
#line 413 "modules.m"
    {
#line 413 "modules.m"
      parse_tree__modules__raw_item_blocks_to_src_2_p_0(parse_tree__modules__RawItemBlocks0_16, &parse_tree__modules__SrcItemBlocks_22);
    }
#line 13806 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_151_151 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 415 "modules.m"
    {
#line 415 "modules.m"
      parse_tree__modules__V_52_52 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 415 "modules.m"
    {
#line 415 "modules.m"
      parse_tree__modules__V_53_53 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 416 "modules.m"
    {
#line 416 "modules.m"
      parse_tree__modules__V_55_55 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0);
    }
#line 414 "modules.m"
    {
#line 414 "modules.m"
      parse_tree__modules__make_module_and_imports_12_p_0(parse_tree__modules__SourceFileName_9, parse_tree__modules__SourceFileModuleName_10, parse_tree__modules__ModuleName_14, parse_tree__modules__ModuleNameContext_15, parse_tree__modules__SrcItemBlocks_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__modules__V_52_52, parse_tree__modules__V_53_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__modules__V_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_57_57);
    }
#line 422 "modules.m"
    {
#line 422 "modules.m"
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0, parse_tree__modules__Globals_8, parse_tree__modules__RawItemBlocks0_16, &parse_tree__modules__ImplicitIntImportDeps_23, &parse_tree__modules__ImplicitIntUseDeps_24);
    }
#line 424 "modules.m"
    {
#line 424 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_151_151, parse_tree__modules__ImplicitIntImportDeps_23, parse_tree__modules__IntImportDeps0_18, &parse_tree__modules__IntImportDeps_25);
    }
#line 425 "modules.m"
    {
#line 425 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_151_151, parse_tree__modules__ImplicitIntUseDeps_24, parse_tree__modules__IntUseDeps0_19, &parse_tree__modules__IntUseDeps_26);
    }
#line 428 "modules.m"
    {
#line 428 "modules.m"
      parse_tree__modules__V_58_58 = mercury__map__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[0], (MR_Word) &parse_tree__modules_scalar_common_1[1]);
    }
#line 428 "modules.m"
    {
#line 428 "modules.m"
      parse_tree__modules__V_59_59 = mercury__map__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[2], (MR_Word) &parse_tree__modules_scalar_common_1[3]);
    }
#line 428 "modules.m"
    {
#line 428 "modules.m"
      parse_tree__modules__V_60_60 = mercury__map__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[4], (MR_Word) &parse_tree__modules_scalar_common_1[5]);
    }
#line 428 "modules.m"
    {
#line 428 "modules.m"
      parse_tree__modules__HaveReadModuleMaps_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 428 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_27, 0) = ((MR_Box) (parse_tree__modules__V_58_58));
#line 428 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_27, 1) = ((MR_Box) (parse_tree__modules__V_59_59));
#line 428 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_27, 2) = ((MR_Box) (parse_tree__modules__V_60_60));
#line 428 "modules.m"
    }
#line 432 "modules.m"
    {
#line 432 "modules.m"
      parse_tree__modules__V_61_61 = mercury__set__list_to_set_1_f_0(parse_tree__modules__TypeCtorInfo_151_151, parse_tree__modules__ParentDeps_17);
    }
#line 436 "modules.m"
    {
#line 436 "modules.m"
      parse_tree__modules__V_65_65 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 436 "modules.m"
    {
#line 436 "modules.m"
      parse_tree__modules__V_66_66 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 431 "modules.m"
    {
#line 431 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_56_95_95_91_54_44_32_55_93_95_48_14_p_0((MR_Integer) 1, (MR_Integer) 3, parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, parse_tree__modules__V_61_61, parse_tree__modules__V_65_65, &parse_tree__modules__ParentImportDeps_28, parse_tree__modules__V_66_66, &parse_tree__modules__ParentUseDeps_29, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_57_57, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67_67);
    }
#line 442 "modules.m"
    parse_tree__modules__V_73_73 = (MR_Word) &parse_tree__modules_scalar_common_3[6];
#line 444 "modules.m"
    {
#line 444 "modules.m"
      parse_tree__modules__V_76_76 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 444 "modules.m"
    {
#line 444 "modules.m"
      parse_tree__modules__V_77_77 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 440 "modules.m"
    {
#line 440 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__ParentImportDeps_28, (MR_Integer) 1, parse_tree__modules__V_73_73, parse_tree__modules__V_76_76, &parse_tree__modules__IntIndirectImportDeps0_30, parse_tree__modules__V_77_77, &parse_tree__modules__V_31_31, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67_67, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_78_78);
    }
#line 451 "modules.m"
    {
#line 451 "modules.m"
      parse_tree__modules__V_86_86 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 445 "modules.m"
    {
#line 445 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__IntImportDeps_25, (MR_Integer) 1, (MR_Word) &parse_tree__modules_scalar_common_3[5], parse_tree__modules__IntIndirectImportDeps0_30, &parse_tree__modules__IntIndirectImportDeps1_32, parse_tree__modules__V_86_86, &parse_tree__modules__V_33_33, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_78_78, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_87_87);
    }
#line 457 "modules.m"
    {
#line 457 "modules.m"
      parse_tree__modules__V_95_95 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 457 "modules.m"
    {
#line 457 "modules.m"
      parse_tree__modules__V_96_96 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 452 "modules.m"
    {
#line 452 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__ImpImportDeps_20, (MR_Integer) 1, (MR_Word) &parse_tree__modules_scalar_common_3[7], parse_tree__modules__V_95_95, &parse_tree__modules__ImpIndirectImportDeps0_34, parse_tree__modules__V_96_96, &parse_tree__modules__V_35_35, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_87_87, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_97_97);
    }
#line 467 "modules.m"
    {
#line 467 "modules.m"
      parse_tree__modules__V_105_105 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 462 "modules.m"
    {
#line 462 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__ParentUseDeps_29, (MR_Integer) 1, parse_tree__modules__V_73_73, parse_tree__modules__IntIndirectImportDeps1_32, &parse_tree__modules__IntIndirectImportDeps2_36, parse_tree__modules__V_105_105, &parse_tree__modules__V_37_37, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_97_97, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_106_106);
    }
#line 473 "modules.m"
    {
#line 473 "modules.m"
      parse_tree__modules__V_114_114 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 468 "modules.m"
    {
#line 468 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_54_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 0, parse_tree__modules__IntUseDeps_26, (MR_Integer) 1, (MR_Word) &parse_tree__modules_scalar_common_3[8], parse_tree__modules__IntIndirectImportDeps2_36, &parse_tree__modules__IntIndirectImportDeps_38, parse_tree__modules__V_114_114, &parse_tree__modules__V_39_39, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_106_106, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_115_115);
    }
#line 479 "modules.m"
    {
#line 479 "modules.m"
      parse_tree__modules__V_123_123 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 474 "modules.m"
    {
#line 474 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_54_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 0, parse_tree__modules__ImpUseDeps_21, (MR_Integer) 1, (MR_Word) &parse_tree__modules_scalar_common_3[9], parse_tree__modules__ImpIndirectImportDeps0_34, &parse_tree__modules__ImpIndirectImportDeps_40, parse_tree__modules__V_123_123, &parse_tree__modules__V_41_41, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_115_115, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_124_124);
    }
#line 487 "modules.m"
    {
#line 487 "modules.m"
      parse_tree__modules__V_131_131 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 483 "modules.m"
    {
#line 483 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_54_93_95_48_13_p_0((MR_Integer) 1, parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, parse_tree__modules__IntIndirectImportDeps_38, (MR_Integer) 1, parse_tree__modules__V_131_131, &parse_tree__modules__V_42_42, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_124_124, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_132_132);
    }
#line 493 "modules.m"
    {
#line 493 "modules.m"
      parse_tree__modules__V_139_139 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 489 "modules.m"
    {
#line 489 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_54_93_95_48_13_p_0((MR_Integer) 0, parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, parse_tree__modules__ImpIndirectImportDeps_40, (MR_Integer) 1, parse_tree__modules__V_139_139, &parse_tree__modules__V_43_43, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_132_132, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_140_140);
    }
#line 495 "modules.m"
    {
#line 495 "modules.m"
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(parse_tree__modules__STATE_VARIABLE_ModuleAndImports_140_140, &parse_tree__modules__AugCompUnit_44, &parse_tree__modules__V_45_45, &parse_tree__modules__V_46_46);
    }
#line 498 "modules.m"
    {
#line 498 "modules.m"
      parse_tree__modules__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_148_148, 0) = ((MR_Box) (parse_tree__modules__ImpUseDeps_21));
#line 498 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 498 "modules.m"
    }
#line 498 "modules.m"
    {
#line 498 "modules.m"
      parse_tree__modules__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_147_147, 0) = ((MR_Box) (parse_tree__modules__ImpImportDeps_20));
#line 498 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_147_147, 1) = ((MR_Box) (parse_tree__modules__V_148_148));
#line 498 "modules.m"
    }
#line 498 "modules.m"
    {
#line 498 "modules.m"
      parse_tree__modules__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_146_146, 0) = ((MR_Box) (parse_tree__modules__IntUseDeps_26));
#line 498 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_146_146, 1) = ((MR_Box) (parse_tree__modules__V_147_147));
#line 498 "modules.m"
    }
#line 498 "modules.m"
    {
#line 498 "modules.m"
      parse_tree__modules__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_145_145, 0) = ((MR_Box) (parse_tree__modules__IntImportDeps_25));
#line 498 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_145_145, 1) = ((MR_Box) (parse_tree__modules__V_146_146));
#line 498 "modules.m"
    }
#line 498 "modules.m"
    {
#line 498 "modules.m"
      parse_tree__modules__V_143_143 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_151_151, parse_tree__modules__V_145_145);
    }
#line 497 "modules.m"
    {
#line 497 "modules.m"
      parse_tree__modules__check_imports_accessibility_4_p_0(parse_tree__modules__AugCompUnit_44, parse_tree__modules__V_143_143, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__AccessSpecs_47);
    }
#line 500 "modules.m"
    {
#line 500 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__AccessSpecs_47, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_140_140, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_48);
#line 500 "modules.m"
      return;
    }
#line 404 "modules.m"
  }
#line 88 "modules.m"
}

#line 357 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_4(
#line 357 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 357 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 357 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 357 "modules.m"
{
#line 357 "modules.m"
  {
#line 357 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 357 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 357 "modules.m"
    MR_Word parse_tree__modules__conv3_HeadVar__4_4;

#line 357 "modules.m"
    {
#line 357 "modules.m"
      parse_tree__modules__conv3_HeadVar__4_4 = parse_tree__status__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 357 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv3_HeadVar__4_4));
#line 357 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 357 "modules.m"
  }
#line 357 "modules.m"
}

#line 349 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_3(
#line 349 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 349 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 349 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 349 "modules.m"
{
#line 349 "modules.m"
  {
#line 349 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 349 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 349 "modules.m"
    MR_Word parse_tree__modules__conv2_HeadVar__4_4;

#line 349 "modules.m"
    {
#line 349 "modules.m"
      parse_tree__modules__conv2_HeadVar__4_4 = parse_tree__status__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 349 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_HeadVar__4_4));
#line 349 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 349 "modules.m"
  }
#line 349 "modules.m"
}

#line 339 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_2(
#line 339 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 339 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 339 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 339 "modules.m"
{
#line 339 "modules.m"
  {
#line 339 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 339 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 339 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__4_4;

#line 339 "modules.m"
    {
#line 339 "modules.m"
      parse_tree__modules__conv1_HeadVar__4_4 = parse_tree__status__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 339 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__4_4));
#line 339 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 339 "modules.m"
  }
#line 339 "modules.m"
}

#line 316 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_1(
#line 316 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 316 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 316 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 316 "modules.m"
{
#line 316 "modules.m"
  {
#line 316 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 316 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 316 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__4_4;

#line 316 "modules.m"
    {
#line 316 "modules.m"
      parse_tree__modules__conv0_HeadVar__4_4 = parse_tree__status__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 316 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__4_4));
#line 316 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 316 "modules.m"
  }
#line 316 "modules.m"
}

#line 74 "modules.m"
void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0(
#line 74 "modules.m"
  MR_Word parse_tree__modules__Globals_11,
#line 74 "modules.m"
  MR_String parse_tree__modules__SourceFileName_12,
#line 74 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_13,
#line 74 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamp_14,
#line 74 "modules.m"
  MR_Word parse_tree__modules__NestedChildren_15,
#line 74 "modules.m"
  MR_Word parse_tree__modules__RawCompUnit0_16,
#line 74 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 74 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67)
#line 74 "modules.m"
{
#line 237 "modules.m"
  {
#line 237 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 237 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_156_156;
#line 237 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_157_157;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ModuleName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_16, (MR_Integer) 0)));
#line 237 "modules.m"
    MR_Word parse_tree__modules__ModuleNameContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_16, (MR_Integer) 1)));
#line 237 "modules.m"
    MR_Word parse_tree__modules__RawItemBlocks0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_16, (MR_Integer) 2)));
#line 237 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules0_23;
#line 237 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules0_24;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ImpImportedModules0_25;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ImpUsedModules0_26;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ImportedModules0_27;
#line 237 "modules.m"
    MR_Word parse_tree__modules__UsedModules0_28;
#line 237 "modules.m"
    MR_Word parse_tree__modules__Context_31;
#line 237 "modules.m"
    MR_Word parse_tree__modules__AncestorModules_32;
#line 237 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules1_33;
#line 237 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules1_34;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ImpImportedModules_35;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ImpUsedModules_36;
#line 237 "modules.m"
    MR_Word parse_tree__modules__SrcItemBlocks1_37;
#line 237 "modules.m"
    MR_Word parse_tree__modules__PublicChildren_38;
#line 237 "modules.m"
    MR_Word parse_tree__modules__FactDeps_39;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ForeignIncludeFiles_40;
#line 237 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestampMap_42;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntImportedModules_43;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntUsedModules_44;
#line 237 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules2_45;
#line 237 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules2_46;
#line 237 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules_47;
#line 237 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules_48;
#line 237 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImports0_49;
#line 237 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports0_50;
#line 237 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImports1_51;
#line 237 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports1_52;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImports0_53;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports0_54;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImports1_55;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports1_56;
#line 237 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImports_57;
#line 237 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports2_58;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImports_59;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports2_60;
#line 237 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports_61;
#line 237 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports_62;
#line 237 "modules.m"
    MR_Word parse_tree__modules__AugCompUnit_63;
#line 237 "modules.m"
    MR_Word parse_tree__modules__AccessSpecs_66;
#line 237 "modules.m"
    MR_Word parse_tree__modules__V_75_75;
#line 237 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_76_76;
#line 237 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_77_77;
#line 237 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82;
#line 237 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_86_86;
#line 237 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95;
#line 237 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_103_103;
#line 237 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_111_111;
#line 237 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_119_119;
#line 237 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_126_126;
#line 237 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_133_133;
#line 237 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_140_140;
#line 237 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_146_146;
#line 237 "modules.m"
    MR_Word parse_tree__modules__V_148_148;
#line 237 "modules.m"
    MR_Word parse_tree__modules__V_150_150;
#line 237 "modules.m"
    MR_Word parse_tree__modules__V_151_151;
#line 237 "modules.m"
    MR_Word parse_tree__modules__V_152_152;
#line 237 "modules.m"
    MR_Word parse_tree__modules__V_153_153;
#line 253 "modules.m"
    MR_Word parse_tree__modules__V_242_242;
#line 394 "modules.m"
    MR_Word parse_tree__modules__V_64_64;
#line 394 "modules.m"
    MR_Word parse_tree__modules__V_65_65;

#line 243 "modules.m"
    {
#line 243 "modules.m"
      parse_tree__get_dependencies__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(parse_tree__modules__RawItemBlocks0_22, &parse_tree__modules__IntImportedModules0_23, &parse_tree__modules__IntUsedModules0_24, &parse_tree__modules__ImpImportedModules0_25, &parse_tree__modules__ImpUsedModules0_26);
    }
#line 14346 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_156_156 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 247 "modules.m"
    {
#line 247 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_156_156, parse_tree__modules__IntImportedModules0_23, parse_tree__modules__ImpImportedModules0_25, &parse_tree__modules__ImportedModules0_27);
    }
#line 248 "modules.m"
    {
#line 248 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_156_156, parse_tree__modules__IntUsedModules0_24, parse_tree__modules__ImpUsedModules0_26, &parse_tree__modules__UsedModules0_28);
    }
#line 253 "modules.m"
    {
#line 253 "modules.m"
      parse_tree__modules__V_242_242 = mercury__term__context_init_0_f_0();
    }
#line 253 "modules.m"
    {
#line 253 "modules.m"
      parse_tree__modules__succeeded = mercury__term____Unify____context_0_0(parse_tree__modules__ModuleNameContext_21, parse_tree__modules__V_242_242);
    }
#line 257 "modules.m"
    if (parse_tree__modules__succeeded)
#line 255 "modules.m"
      {
#line 255 "modules.m"
        MR_String parse_tree__modules__FileName_30;

#line 254 "modules.m"
        {
#line 254 "modules.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__modules__Globals_11, parse_tree__modules__ModuleName_20, (MR_String) ".m", (MR_Integer) 1, &parse_tree__modules__FileName_30);
        }
#line 256 "modules.m"
        {
#line 256 "modules.m"
          parse_tree__modules__Context_31 = mercury__term__context_init_2_f_0(parse_tree__modules__FileName_30, (MR_Integer) 1);
        }
#line 255 "modules.m"
      }
#line 257 "modules.m"
    else
#line 258 "modules.m"
      parse_tree__modules__Context_31 = parse_tree__modules__ModuleNameContext_21;
#line 261 "modules.m"
    {
#line 261 "modules.m"
      parse_tree__modules__V_75_75 = mdbcomp__sym_name__get_ancestors_1_f_0(parse_tree__modules__ModuleName_20);
    }
#line 261 "modules.m"
    {
#line 261 "modules.m"
      parse_tree__modules__AncestorModules_32 = mercury__set__list_to_set_1_f_0(parse_tree__modules__TypeCtorInfo_156_156, parse_tree__modules__V_75_75);
    }
#line 262 "modules.m"
    {
#line 262 "modules.m"
      parse_tree__modules__warn_if_import_self_or_ancestor_7_p_0(parse_tree__modules__ModuleName_20, parse_tree__modules__Context_31, parse_tree__modules__AncestorModules_32, parse_tree__modules__ImportedModules0_27, parse_tree__modules__UsedModules0_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__STATE_VARIABLE_Specs_76_76);
    }
#line 265 "modules.m"
    {
#line 265 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_12_p_0(parse_tree__modules__Context_31, parse_tree__modules__IntImportedModules0_23, &parse_tree__modules__IntImportedModules1_33, parse_tree__modules__IntUsedModules0_24, &parse_tree__modules__IntUsedModules1_34, parse_tree__modules__ImpImportedModules0_25, &parse_tree__modules__ImpImportedModules_35, parse_tree__modules__ImpUsedModules0_26, &parse_tree__modules__ImpUsedModules_36, parse_tree__modules__STATE_VARIABLE_Specs_76_76, &parse_tree__modules__STATE_VARIABLE_Specs_77_77);
    }
#line 271 "modules.m"
    {
#line 271 "modules.m"
      parse_tree__modules__get_src_item_blocks_public_children_3_p_0(parse_tree__modules__RawCompUnit0_16, &parse_tree__modules__SrcItemBlocks1_37, &parse_tree__modules__PublicChildren_38);
    }
#line 14416 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_157_157 = (MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0;
#line 276 "modules.m"
    {
#line 276 "modules.m"
      parse_tree__get_dependencies__get_fact_table_dependencies_in_item_blocks_2_p_0(parse_tree__modules__TypeCtorInfo_157_157, parse_tree__modules__RawItemBlocks0_22, &parse_tree__modules__FactDeps_39);
    }
#line 277 "modules.m"
    {
#line 277 "modules.m"
      parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0(parse_tree__modules__TypeCtorInfo_157_157, parse_tree__modules__RawItemBlocks0_22, &parse_tree__modules__ForeignIncludeFiles_40);
    }
#line 283 "modules.m"
    if ((parse_tree__modules__MaybeTimestamp_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "modules.m"
      parse_tree__modules__MaybeTimestampMap_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 283 "modules.m"
    else
#line 280 "modules.m"
      {
#line 280 "modules.m"
        MR_Word parse_tree__modules__Timestamp_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__MaybeTimestamp_14, (MR_Integer) 0)));
#line 280 "modules.m"
        MR_Word parse_tree__modules__V_78_78;
#line 280 "modules.m"
        MR_Word parse_tree__modules__V_79_79;

#line 282 "modules.m"
        {
#line 282 "modules.m"
          parse_tree__modules__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 282 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_79_79, 1) = ((MR_Box) (parse_tree__modules__Timestamp_41));
#line 282 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_79_79, 2) = ((MR_Box) ((MR_Integer) 1));
#line 282 "modules.m"
        }
#line 281 "modules.m"
        {
#line 281 "modules.m"
          parse_tree__modules__V_78_78 = mercury__map__singleton_2_f_0(parse_tree__modules__TypeCtorInfo_156_156, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, ((MR_Box) (parse_tree__modules__ModuleName_20)), ((MR_Box) (parse_tree__modules__V_79_79)));
        }
#line 281 "modules.m"
        {
#line 281 "modules.m"
          parse_tree__modules__MaybeTimestampMap_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 281 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__MaybeTimestampMap_42, 0) = ((MR_Box) (parse_tree__modules__V_78_78));
#line 281 "modules.m"
        }
#line 280 "modules.m"
      }
#line 294 "modules.m"
    {
#line 294 "modules.m"
      parse_tree__modules__make_module_and_imports_12_p_0(parse_tree__modules__SourceFileName_12, parse_tree__modules__SourceFileModuleName_13, parse_tree__modules__ModuleName_20, parse_tree__modules__ModuleNameContext_21, parse_tree__modules__SrcItemBlocks1_37, parse_tree__modules__STATE_VARIABLE_Specs_77_77, parse_tree__modules__PublicChildren_38, parse_tree__modules__NestedChildren_15, parse_tree__modules__FactDeps_39, parse_tree__modules__ForeignIncludeFiles_40, parse_tree__modules__MaybeTimestampMap_42, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82);
    }
#line 303 "modules.m"
    {
#line 303 "modules.m"
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_src_module_section_0, parse_tree__modules__Globals_11, parse_tree__modules__SrcItemBlocks1_37, &parse_tree__modules__ImplicitIntImportedModules_43, &parse_tree__modules__ImplicitIntUsedModules_44);
    }
#line 305 "modules.m"
    {
#line 305 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_156_156, parse_tree__modules__ImplicitIntImportedModules_43, parse_tree__modules__IntImportedModules1_33, &parse_tree__modules__IntImportedModules2_45);
    }
#line 307 "modules.m"
    {
#line 307 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_156_156, parse_tree__modules__ImplicitIntUsedModules_44, parse_tree__modules__IntUsedModules1_34, &parse_tree__modules__IntUsedModules2_46);
    }
#line 314 "modules.m"
    {
#line 314 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_56_95_95_91_54_44_32_55_93_95_48_14_p_0((MR_Integer) 1, (MR_Integer) 3, parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__AncestorModules_32, parse_tree__modules__IntImportedModules2_45, &parse_tree__modules__IntImportedModules_47, parse_tree__modules__IntUsedModules2_46, &parse_tree__modules__IntUsedModules_48, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_86_86);
    }
#line 324 "modules.m"
    {
#line 324 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_156_156, &parse_tree__modules__IntIndirectImports0_49);
    }
#line 325 "modules.m"
    {
#line 325 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_156_156, &parse_tree__modules__IntImpIndirectImports0_50);
    }
#line 326 "modules.m"
    {
#line 326 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 1, parse_tree__modules__IntImportedModules_47, (MR_Integer) 3, (MR_Word) &parse_tree__modules_scalar_common_3[1], parse_tree__modules__IntIndirectImports0_49, &parse_tree__modules__IntIndirectImports1_51, parse_tree__modules__IntImpIndirectImports0_50, &parse_tree__modules__IntImpIndirectImports1_52, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_86_86, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95);
    }
#line 335 "modules.m"
    {
#line 335 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_156_156, &parse_tree__modules__ImpIndirectImports0_53);
    }
#line 336 "modules.m"
    {
#line 336 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_156_156, &parse_tree__modules__ImpImpIndirectImports0_54);
    }
#line 337 "modules.m"
    {
#line 337 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_55_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 1, parse_tree__modules__ImpImportedModules_35, (MR_Integer) 3, (MR_Word) &parse_tree__modules_scalar_common_3[2], parse_tree__modules__ImpIndirectImports0_53, &parse_tree__modules__ImpIndirectImports1_55, parse_tree__modules__ImpImpIndirectImports0_54, &parse_tree__modules__ImpImpIndirectImports1_56, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_103_103);
    }
#line 347 "modules.m"
    {
#line 347 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_54_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 0, parse_tree__modules__IntUsedModules_48, (MR_Integer) 3, (MR_Word) &parse_tree__modules_scalar_common_3[3], parse_tree__modules__IntIndirectImports1_51, &parse_tree__modules__IntIndirectImports_57, parse_tree__modules__IntImpIndirectImports1_52, &parse_tree__modules__IntImpIndirectImports2_58, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_103_103, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_111_111);
    }
#line 355 "modules.m"
    {
#line 355 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_54_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 0, parse_tree__modules__ImpUsedModules_36, (MR_Integer) 3, (MR_Word) &parse_tree__modules_scalar_common_3[4], parse_tree__modules__ImpIndirectImports1_55, &parse_tree__modules__ImpIndirectImports_59, parse_tree__modules__ImpImpIndirectImports1_56, &parse_tree__modules__ImpImpIndirectImports2_60, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_111_111, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_119_119);
    }
#line 364 "modules.m"
    {
#line 364 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_54_93_95_48_13_p_0((MR_Integer) 1, parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__IntIndirectImports_57, (MR_Integer) 2, parse_tree__modules__IntImpIndirectImports2_58, &parse_tree__modules__IntImpIndirectImports_61, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_119_119, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_126_126);
    }
#line 371 "modules.m"
    {
#line 371 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_53_95_95_91_54_93_95_48_13_p_0((MR_Integer) 0, parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__ImpIndirectImports_59, (MR_Integer) 2, parse_tree__modules__ImpImpIndirectImports2_60, &parse_tree__modules__ImpImpIndirectImports_62, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_126_126, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_133_133);
    }
#line 383 "modules.m"
    {
#line 383 "modules.m"
      parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho9_11_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__IntImpIndirectImports_61, (MR_Integer) 2, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_133_133, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_140_140);
    }
#line 388 "modules.m"
    {
#line 388 "modules.m"
      parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho9_11_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__ImpImpIndirectImports_62, (MR_Integer) 2, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_140_140, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_146_146);
    }
#line 394 "modules.m"
    {
#line 394 "modules.m"
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(parse_tree__modules__STATE_VARIABLE_ModuleAndImports_146_146, &parse_tree__modules__AugCompUnit_63, &parse_tree__modules__V_64_64, &parse_tree__modules__V_65_65);
    }
#line 398 "modules.m"
    {
#line 398 "modules.m"
      parse_tree__modules__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_153_153, 0) = ((MR_Box) (parse_tree__modules__ImpUsedModules_36));
#line 398 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 398 "modules.m"
    }
#line 398 "modules.m"
    {
#line 398 "modules.m"
      parse_tree__modules__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_152_152, 0) = ((MR_Box) (parse_tree__modules__ImpImportedModules_35));
#line 398 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_152_152, 1) = ((MR_Box) (parse_tree__modules__V_153_153));
#line 398 "modules.m"
    }
#line 397 "modules.m"
    {
#line 397 "modules.m"
      parse_tree__modules__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_151_151, 0) = ((MR_Box) (parse_tree__modules__IntUsedModules_48));
#line 397 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_151_151, 1) = ((MR_Box) (parse_tree__modules__V_152_152));
#line 397 "modules.m"
    }
#line 397 "modules.m"
    {
#line 397 "modules.m"
      parse_tree__modules__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_150_150, 0) = ((MR_Box) (parse_tree__modules__IntImportedModules_47));
#line 397 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_150_150, 1) = ((MR_Box) (parse_tree__modules__V_151_151));
#line 397 "modules.m"
    }
#line 397 "modules.m"
    {
#line 397 "modules.m"
      parse_tree__modules__V_148_148 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_156_156, parse_tree__modules__V_150_150);
    }
#line 396 "modules.m"
    {
#line 396 "modules.m"
      parse_tree__modules__check_imports_accessibility_4_p_0(parse_tree__modules__AugCompUnit_63, parse_tree__modules__V_148_148, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__AccessSpecs_66);
    }
#line 400 "modules.m"
    {
#line 400 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__AccessSpecs_66, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_146_146, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67);
#line 400 "modules.m"
      return;
    }
#line 237 "modules.m"
  }
#line 74 "modules.m"
}

void mercury__parse_tree__modules__init(void)
{
}

void mercury__parse_tree__modules__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

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
