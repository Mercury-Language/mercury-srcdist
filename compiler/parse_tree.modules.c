/*
** Automatically generated from `modules.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
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
#include "parse_tree.comp_unit_interface.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 105 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 108 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0;

#line 111 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0;

#line 114 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 117 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 120 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 123 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

#line 126 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0;

#line 129 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0;

#line 132 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0;

#line 135 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0;

#line 138 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0;

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
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_0;

#line 171 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_1;

#line 174 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_opt_file_type_0[2];

#line 177 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_opt_file_type_0[2];

#line 180 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_opt_file_type_0[2];

#line 183 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__pti_item_block_1__pseudo_1;

#line 186 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1;

#line 189 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_pred_3__pseudo_list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 192 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__modules____vpti_func_2__pseudo_1__plain_bool__type_ctor_info_bool_0;

#line 195 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0_10001(
#line 198 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 200 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 203 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0_10001(
#line 206 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 208 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 210 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 213 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____int_section_maker_1_0_10001(
#line 216 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 218 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 220 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 223 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____int_section_maker_1_0_10001(
#line 226 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 228 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 230 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 232 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4);

#line 235 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0_10001(
#line 238 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 240 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 243 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0_10001(
#line 246 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 248 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 250 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 253 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0_10001(
#line 256 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 258 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 261 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0_10001(
#line 264 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 266 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 268 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 271 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____opt_file_type_0_0_10001(
#line 274 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 276 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 279 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____opt_file_type_0_0_10001(
#line 282 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 284 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 286 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 289 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_appender_1_0_10001(
#line 292 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 294 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 296 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 299 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____section_appender_1_0_10001(
#line 302 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 304 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 306 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 308 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4);

#line 311 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0_10001(
#line 314 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 316 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 318 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3);

#line 321 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0_10001(
#line 324 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 326 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 328 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 330 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4);

#line 1069 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_57_95_95_91_54_93_95_48_15_p_0(
#line 1069 "modules.m"
  MR_Word parse_tree__modules__V_168_168,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__Import_18,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_52,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56);

#line 1031 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_53_95_95_91_54_93_95_48_15_p_0(
#line 1031 "modules.m"
  MR_Word parse_tree__modules__V_214_214,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__Imports_18,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_30,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34);

#line 771 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_52_95_95_91_54_44_32_55_93_95_48_14_p_0(
#line 771 "modules.m"
  MR_Word parse_tree__modules__V_161_161,
#line 771 "modules.m"
  MR_Word parse_tree__modules__V_162_162,
#line 771 "modules.m"
  MR_Word parse_tree__modules__Globals_15,
#line 771 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_16,
#line 771 "modules.m"
  MR_Word parse_tree__modules__Ancestor_17,
#line 771 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_48,
#line 771 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_49,
#line 771 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_50,
#line 771 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_51,
#line 771 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52,
#line 771 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53);

#line 753 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_49_95_95_91_54_44_32_55_93_95_48_14_p_0_1(
#line 753 "modules.m"
  MR_Box parse_tree__modules__closure_arg);

#line 740 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_49_95_95_91_54_44_32_55_93_95_48_14_p_0(
#line 740 "modules.m"
  MR_Word parse_tree__modules__V_105_105,
#line 740 "modules.m"
  MR_Word parse_tree__modules__V_106_106,
#line 740 "modules.m"
  MR_Word parse_tree__modules__Globals_15,
#line 740 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_16,
#line 740 "modules.m"
  MR_Word parse_tree__modules__Ancestors_17,
#line 740 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_29,
#line 740 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_30,
#line 740 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_31,
#line 740 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_32,
#line 740 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 740 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34);

#line 443 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_93_95_48_16_p_0_2(
#line 446 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 448 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 450 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 452 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 455 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_93_95_48_16_p_0_1(
#line 458 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 460 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 462 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 848 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_93_95_48_16_p_0(
#line 848 "modules.m"
  MR_Word parse_tree__modules__Globals_17,
#line 848 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_18,
#line 848 "modules.m"
  MR_Word parse_tree__modules__NeedQual_19,
#line 848 "modules.m"
  MR_Word parse_tree__modules__Imports_20,
#line 848 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_21,
#line 848 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_22,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_33,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37);

#line 493 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_93_95_48_16_p_0_2(
#line 496 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 498 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 500 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 502 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 505 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_93_95_48_16_p_0_1(
#line 508 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 510 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 512 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 848 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_93_95_48_16_p_0(
#line 848 "modules.m"
  MR_Word parse_tree__modules__Globals_17,
#line 848 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_18,
#line 848 "modules.m"
  MR_Word parse_tree__modules__NeedQual_19,
#line 848 "modules.m"
  MR_Word parse_tree__modules__Imports_20,
#line 848 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_21,
#line 848 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_22,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_33,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37);

#line 994 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_56_95_95_91_54_93_95_48_13_p_0(
#line 994 "modules.m"
  MR_Word parse_tree__modules__V_40_40,
#line 994 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 994 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 994 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 994 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 994 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 994 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 994 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 994 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28);

#line 1282 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_3_p_0(
#line 1282 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1282 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_2_p_0(
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 720 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_97_112_112_101_110_100_101_114_95_49_95_95_91_49_93_95_48_3_p_0(
#line 720 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 720 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_97_112_112_101_110_100_101_114_95_49_95_95_91_49_93_95_48_2_p_0(
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 717 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_105_110_116_95_115_101_99_116_105_111_110_95_109_97_107_101_114_95_49_95_95_91_49_93_95_48_3_p_0(
#line 717 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 717 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_105_110_116_95_115_101_99_116_105_111_110_95_109_97_107_101_114_95_49_95_95_91_49_93_95_48_2_p_0(
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1716 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_111_112_116_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0(
#line 1716 "modules.m"
  MR_Word parse_tree__modules__FileType_11,
#line 1716 "modules.m"
  MR_String parse_tree__modules__FileName_12,
#line 1716 "modules.m"
  MR_Word parse_tree__modules__ModuleSpecs_13,
#line 1716 "modules.m"
  MR_Word parse_tree__modules__ModuleErrors_14,
#line 1716 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_22,
#line 1716 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_23,
#line 1716 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Error_0_24,
#line 1716 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Error_25);

#line 1543 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_111_110_108_121_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(
#line 1543 "modules.m"
  MR_Word parse_tree__modules__UnusedArgs_1,
#line 1543 "modules.m"
  MR_Word parse_tree__modules__StructureReuse_2,
#line 1543 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3,
#line 1543 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__4_4);

#line 1164 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(
#line 1164 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1164 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2);

#line 689 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1(
#line 689 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 689 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 674 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(
#line 674 "modules.m"
  MR_Word parse_tree__modules__Context_10,
#line 674 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportedModules_0_20,
#line 674 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportedModules_21,
#line 674 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_UsedModules_0_22,
#line 674 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_UsedModules_23,
#line 674 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_24,
#line 674 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_25);

#line 646 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_12_p_0(
#line 646 "modules.m"
  MR_Word parse_tree__modules__Context_14,
#line 646 "modules.m"
  MR_Word parse_tree__modules__IntImportedModules0_15,
#line 646 "modules.m"
  MR_Word * parse_tree__modules__IntImportedModules_16,
#line 646 "modules.m"
  MR_Word parse_tree__modules__IntUsedModules0_17,
#line 646 "modules.m"
  MR_Word * parse_tree__modules__IntUsedModules_18,
#line 646 "modules.m"
  MR_Word parse_tree__modules__ImpImportedModules0_19,
#line 646 "modules.m"
  MR_Word * parse_tree__modules__ImpImportedModules_20,
#line 646 "modules.m"
  MR_Word parse_tree__modules__ImpUsedModules0_21,
#line 646 "modules.m"
  MR_Word * parse_tree__modules__ImpUsedModules_22,
#line 646 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 646 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27);

#line 1069 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interface__ho22_15_p_0(
#line 1069 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__Import_18,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_52,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56);

#line 1069 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interface__ho21_15_p_0(
#line 1069 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__Import_18,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_52,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56);

#line 1031 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces__ho20_15_p_0(
#line 1031 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__Imports_18,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_30,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34);

#line 1031 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces__ho18_15_p_0(
#line 1031 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__Imports_18,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_30,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34);

#line 994 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho17_13_p_0(
#line 994 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 994 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 994 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 994 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 994 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 994 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 994 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 994 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28);

#line 771 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_private_interface__ho16_14_p_0(
#line 771 "modules.m"
  MR_Word parse_tree__modules__Globals_15,
#line 771 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_16,
#line 771 "modules.m"
  MR_Word parse_tree__modules__Ancestor_17,
#line 771 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_48,
#line 771 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_49,
#line 771 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_50,
#line 771 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_51,
#line 771 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52,
#line 771 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53);

#line 994 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho13_13_p_0(
#line 994 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 994 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 994 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 994 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 994 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 994 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 994 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 994 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28);

#line 959 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho12_11_p_0(
#line 959 "modules.m"
  MR_Word parse_tree__modules__Globals_12,
#line 959 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_13,
#line 959 "modules.m"
  MR_Word parse_tree__modules__Imports_14,
#line 959 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_15,
#line 959 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22,
#line 959 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23);

#line 753 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__process_module_private_interfaces__ho7_14_p_0_1(
#line 753 "modules.m"
  MR_Box parse_tree__modules__closure_arg);

#line 740 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_private_interfaces__ho7_14_p_0(
#line 740 "modules.m"
  MR_Word parse_tree__modules__Globals_15,
#line 740 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_16,
#line 740 "modules.m"
  MR_Word parse_tree__modules__Ancestors_17,
#line 740 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_29,
#line 740 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_30,
#line 740 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_31,
#line 740 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_32,
#line 740 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 740 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34);

#line 913 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules__process_module_long_interfaces__ho6_16_p_0_3(
#line 916 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 918 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 920 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 922 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 925 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__process_module_long_interfaces__ho6_16_p_0_2(
#line 928 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 930 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 932 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 935 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__process_module_long_interfaces__ho6_16_p_0_1(
#line 938 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 940 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 942 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 848 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_long_interfaces__ho6_16_p_0(
#line 848 "modules.m"
  MR_Word parse_tree__modules__Globals_17,
#line 848 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_18,
#line 848 "modules.m"
  MR_Word parse_tree__modules__NeedQual_19,
#line 848 "modules.m"
  MR_Word parse_tree__modules__Imports_20,
#line 848 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_21,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_33,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37);

#line 959 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho5_11_p_0(
#line 959 "modules.m"
  MR_Word parse_tree__modules__Globals_12,
#line 959 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_13,
#line 959 "modules.m"
  MR_Word parse_tree__modules__Imports_14,
#line 959 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_15,
#line 959 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22,
#line 959 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23);

#line 1301 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho4_6_p_0(
#line 1301 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6);

#line 1301 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho3_6_p_0(
#line 1301 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6);

#line 1301 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho2_6_p_0(
#line 1301 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6);

#line 1301 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho1_6_p_0(
#line 1301 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6);

#line 753 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__753__1_2_p_0(
#line 753 "modules.m"
  MR_Word parse_tree__modules__FirstAncestor_25,
#line 753 "modules.m"
  MR_Word parse_tree__modules__ModuleName_27);

#line 1282 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0(
#line 1282 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_6,
#line 1282 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1282 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0(
#line 1282 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_5,
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 720 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____section_appender_1_0(
#line 720 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_6,
#line 720 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 720 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_appender_1_0(
#line 720 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_5,
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1698 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____opt_file_type_0_0(
#line 1698 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1698 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1698 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1698 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____opt_file_type_0_0(
#line 1698 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_1,
#line 1698 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1240 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0(
#line 1240 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1240 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1240 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1240 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0(
#line 1240 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1240 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1248 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0(
#line 1248 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1248 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1248 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1248 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0(
#line 1248 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1248 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 717 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____int_section_maker_1_0(
#line 717 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_6,
#line 717 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 717 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____int_section_maker_1_0(
#line 717 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_5,
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1242 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0(
#line 1242 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1242 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1242 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3);

#line 1242 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0(
#line 1242 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1242 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2);

#line 1689 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__read_trans_opt_files_10_p_0_1(
#line 1689 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1689 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 1658 "modules.m"
static void MR_CALL 
parse_tree__modules__read_trans_opt_files_10_p_0(
#line 1658 "modules.m"
  MR_Word parse_tree__modules__Globals_1,
#line 1658 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1658 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_OptItemBlocks_0_3,
#line 1658 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_OptItemBlocks_4,
#line 1658 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_5,
#line 1658 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_6,
#line 1658 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Error_0_7,
#line 1658 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Error_8);

#line 1623 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__read_optimization_interfaces_12_p_0_2(
#line 1623 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1623 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 1611 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__read_optimization_interfaces_12_p_0_1(
#line 1611 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1611 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 1583 "modules.m"
static void MR_CALL 
parse_tree__modules__read_optimization_interfaces_12_p_0(
#line 1583 "modules.m"
  MR_Word parse_tree__modules__Globals_1,
#line 1583 "modules.m"
  MR_Word parse_tree__modules__Transitive_2,
#line 1583 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3,
#line 1583 "modules.m"
  MR_Word parse_tree__modules__ModulesProcessed0_4,
#line 1583 "modules.m"
  MR_Word parse_tree__modules__HeadVar__5_5,
#line 1583 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__6_6,
#line 1583 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_7,
#line 1583 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_8,
#line 1583 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Error_0_9,
#line 1583 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Error_10);

#line 1559 "modules.m"
static void MR_CALL 
parse_tree__modules__keep_only_unused_and_reuse_pragmas_acc_5_p_0(
#line 1559 "modules.m"
  MR_Word parse_tree__modules__UnusedArgs_1,
#line 1559 "modules.m"
  MR_Word parse_tree__modules__StructureReuse_2,
#line 1559 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3,
#line 1559 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ItemCord_0_4,
#line 1559 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ItemCord_5);

#line 1400 "modules.m"
static void MR_CALL 
parse_tree__modules__report_inaccessible_module_error_6_p_0(
#line 1400 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1400 "modules.m"
  MR_Word parse_tree__modules__ParentModule_8,
#line 1400 "modules.m"
  MR_String parse_tree__modules__SubModule_9,
#line 1400 "modules.m"
  MR_Word parse_tree__modules__ImportOrUseContext_10,
#line 1400 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1400 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20);

#line 1391 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0_1(
#line 1391 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1391 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1391 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1391 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1375 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0(
#line 1375 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1375 "modules.m"
  MR_Word parse_tree__modules__InclMap_8,
#line 1375 "modules.m"
  MR_Word parse_tree__modules__ImportUseMap_9,
#line 1375 "modules.m"
  MR_Word parse_tree__modules__ImportedModule_10,
#line 1375 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1375 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20);

#line 1339 "modules.m"
static void MR_CALL 
parse_tree__modules__record_avails_acc_3_p_0(
#line 1339 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1339 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_2,
#line 1339 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_3);

#line 1323 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_acc_3_p_0(
#line 1323 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1323 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_2,
#line 1323 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_3);

#line 1230 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_4_p_0_1(
#line 1230 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1230 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1230 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1230 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 1214 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_4_p_0(
#line 1214 "modules.m"
  MR_Word parse_tree__modules__AugCompUnit_5,
#line 1214 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_6,
#line 1214 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1214 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20);

#line 1170 "modules.m"
static void MR_CALL 
parse_tree__modules__maybe_record_timestamp_6_p_0(
#line 1170 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1170 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_8,
#line 1170 "modules.m"
  MR_Word parse_tree__modules__NeedQual_9,
#line 1170 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamp_10,
#line 1170 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17,
#line 1170 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18);

#line 1126 "modules.m"
static void MR_CALL 
parse_tree__modules__make_module_and_imports_12_p_0(
#line 1126 "modules.m"
  MR_String parse_tree__modules__SourceFileName_13,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_14,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__ModuleName_15,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__ModuleNameContext_16,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__SrcItemBlocks0_17,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__Specs_18,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__PublicChildren_19,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__NestedChildren_20,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__FactDeps_21,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__ForeignIncludeFiles_22,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestampMap_23,
#line 1126 "modules.m"
  MR_Word * parse_tree__modules__Module_24);

#line 885 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_long_interface_16_p_0(
#line 885 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_168,
#line 885 "modules.m"
  MR_Word parse_tree__modules__Globals_17,
#line 885 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_18,
#line 885 "modules.m"
  MR_Word parse_tree__modules__NeedQual_19,
#line 885 "modules.m"
  MR_Word parse_tree__modules__Import_20,
#line 885 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_21,
#line 885 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_22,
#line 885 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_23,
#line 885 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_24,
#line 885 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_54,
#line 885 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_55,
#line 885 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_56,
#line 885 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_57,
#line 885 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58,
#line 885 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_59);

#line 705 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__wrap_symname_1_f_0(
#line 705 "modules.m"
  MR_Word parse_tree__modules__ModuleName_3);

#line 620 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_import_for_ancestor_5_p_0(
#line 620 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 620 "modules.m"
  MR_Word parse_tree__modules__AncestorName_7,
#line 620 "modules.m"
  MR_Word parse_tree__modules__Context_8,
#line 620 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_15,
#line 620 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_16);

#line 607 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_import_for_self_4_p_0(
#line 607 "modules.m"
  MR_Word parse_tree__modules__ModuleName_5,
#line 607 "modules.m"
  MR_Word parse_tree__modules__Context_6,
#line 607 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_12,
#line 607 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_13);

#line 584 "modules.m"
static void MR_CALL 
parse_tree__modules__find_avail_contexts_for_module_in_avails_4_p_0(
#line 584 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 584 "modules.m"
  MR_Word parse_tree__modules__ModuleName_2,
#line 584 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_AvailContexts_0_3,
#line 584 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_AvailContexts_4);

#line 571 "modules.m"
static void MR_CALL 
parse_tree__modules__find_avail_contexts_for_module_in_item_blocks_4_p_0(
#line 571 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 571 "modules.m"
  MR_Word parse_tree__modules__ModuleName_2,
#line 571 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_AvailContexts_0_3,
#line 571 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_AvailContexts_4);

#line 559 "modules.m"
static void MR_CALL 
parse_tree__modules__find_and_warn_import_for_ancestor_5_p_0_1(
#line 559 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 559 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 559 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 559 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 551 "modules.m"
static void MR_CALL 
parse_tree__modules__find_and_warn_import_for_ancestor_5_p_0(
#line 551 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 551 "modules.m"
  MR_Word parse_tree__modules__RawItemBlocks_7,
#line 551 "modules.m"
  MR_Word parse_tree__modules__AncestorModuleName_8,
#line 551 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_11,
#line 551 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_12);

#line 549 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_for_self_or_ancestor_7_p_0_2(
#line 549 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 549 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 549 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 549 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 532 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_for_self_or_ancestor_7_p_0_1(
#line 532 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 532 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 532 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 532 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3);

#line 522 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_for_self_or_ancestor_7_p_0(
#line 522 "modules.m"
  MR_Word parse_tree__modules__ModuleName_8,
#line 522 "modules.m"
  MR_Word parse_tree__modules__RawItemBlocks_9,
#line 522 "modules.m"
  MR_Word parse_tree__modules__AncestorModules_10,
#line 522 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_11,
#line 522 "modules.m"
  MR_Word parse_tree__modules__UsedModules_12,
#line 522 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_16,
#line 522 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_17);

#line 477 "modules.m"
static void MR_CALL 
parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(
#line 477 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 477 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_0_2,
#line 477 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevClauses_3,
#line 477 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4,
#line 477 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevImpDecls_5);

#line 438 "modules.m"
static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(
#line 438 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 438 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2);

#line 419 "modules.m"
static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_src_2_p_0(
#line 419 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 419 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2);

#line 400 "modules.m"
static void MR_CALL 
parse_tree__modules__get_src_item_blocks_public_children_3_p_0(
#line 400 "modules.m"
  MR_Word parse_tree__modules__RawCompUnit_4,
#line 400 "modules.m"
  MR_Word * parse_tree__modules__SrcItemBlocks_5,
#line 400 "modules.m"
  MR_Word * parse_tree__modules__PublicChildren_6);

#line 1497 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_opt_files_6_p_0_1(
#line 1497 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1497 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1);

#line 372 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_5(
#line 372 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 372 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 372 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 366 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_4(
#line 366 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 366 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 366 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 350 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_3(
#line 350 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 350 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 350 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 338 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_2(
#line 338 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 338 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 338 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 329 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_1(
#line 329 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 329 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 329 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 253 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_4(
#line 253 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 253 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 253 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 245 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_3(
#line 245 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 245 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 245 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 235 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_2(
#line 235 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 235 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 235 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);

#line 212 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_1(
#line 212 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 212 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 212 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__modules_scalar_common_1[61][2];

static /* final */ const MR_Box parse_tree__modules_scalar_common_2[14][3];

static /* final */ const MR_Box parse_tree__modules_scalar_common_3[10][4];

static /* final */ const MR_Box parse_tree__modules_scalar_common_4[2][7];

static /* final */ const MR_Box parse_tree__modules_scalar_common_5[5][5];

static /* final */ const MR_Box parse_tree__modules_scalar_common_6[2][8];

static /* final */ const MR_Box parse_tree__modules_scalar_common_7[2][9];

static /* final */ const MR_Box parse_tree__modules_scalar_common_8[4][6];




static /* final */ const MR_Box parse_tree__modules_scalar_common_1[61][2] = {
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "imports itself!"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There is no need to explicitly import them."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "implicitly imports its ancestors."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Every submodule"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[14])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "imported using both"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is inaccessible."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[14])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[14])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: module"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Module"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "imports its own ancestor, module"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[22])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__modules_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error in"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Either there was no prior"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "use_module"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration to import module"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or the interface for module"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not contain an"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for module"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: cannot open"))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_2[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules_scalar_common_1[13]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules_scalar_common_1[12]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[0])),
    ((MR_Box) (parse_tree__modules__grab_opt_files_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__read_optimization_interfaces_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[2])),
    ((MR_Box) (parse_tree__modules__read_optimization_interfaces_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[1])),
    ((MR_Box) (parse_tree__modules__read_trans_opt_files_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__modules__process_module_long_interfaces__ho6_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[0])),
    ((MR_Box) (parse_tree__modules__process_module_long_interfaces__ho6_16_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[1])),
    ((MR_Box) (parse_tree__modules__process_module_long_interfaces__ho6_16_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_5[4])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[2])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_93_95_48_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[3])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_93_95_48_16_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[2])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_93_95_48_16_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__modules_scalar_common_8[3])),
    ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_93_95_48_16_p_0_2)),
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

static /* final */ const MR_Box parse_tree__modules_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_5[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box parse_tree__modules_scalar_common_6[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
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

static /* final */ const MR_Box parse_tree__modules_scalar_common_8[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2354 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2362 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0
  }
};

#line 2370 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_module_section_0
  }
};

#line 2378 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2386 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2394 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

#line 2403 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0
  }
};

#line 2411 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__modules__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0
  }
};

#line 2420 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0
  }
};

#line 2428 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0
  }
};

#line 2436 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0
  }
};

#line 2444 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__parse_tree__prog_item__ti_item_block_1parse_tree__prog_item__type_ctor_info_int_module_section_0
  }
};

#line 2452 "parse_tree.modules.c"
static const MR_PseudoTypeInfo parse_tree__modules__parse_tree__modules__field_types_import_or_use_context_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2458 "parse_tree.modules.c"
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

#line 2473 "parse_tree.modules.c"
static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0
};

#line 2478 "parse_tree.modules.c"
static const MR_DuPtagLayout parse_tree__modules__parse_tree__modules__du_ptag_ordered_import_or_use_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__modules__parse_tree__modules__du_stag_ordered_import_or_use_context_0_0
  }
};

#line 2487 "parse_tree.modules.c"
static const MR_DuFunctorDescPtr parse_tree__modules__parse_tree__modules__du_name_ordered_import_or_use_context_0[1] = {
  &parse_tree__modules__parse_tree__modules__du_functor_desc_import_or_use_context_0_0
};

#line 2492 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_import_or_use_context_0[1] = {
  (MR_Integer) 0
};

#line 2497 "parse_tree.modules.c"
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

#line 2514 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_func_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_kind__type_ctor_info_int_file_kind_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2525 "parse_tree.modules.c"
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

#line 2542 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__modules__list__ti_one_or_more_1parse_tree__modules__type_ctor_info_import_or_use_context_0
  }
};

#line 2551 "parse_tree.modules.c"
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

#line 2568 "parse_tree.modules.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__modules__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

#line 2577 "parse_tree.modules.c"
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

#line 2594 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_0 = {
  (MR_String) "opt_file",
  (MR_Integer) 0
};

#line 2600 "parse_tree.modules.c"
static const MR_EnumFunctorDesc parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_1 = {
  (MR_String) "trans_opt_file",
  (MR_Integer) 1
};

#line 2606 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_value_ordered_opt_file_type_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_1
};

#line 2612 "parse_tree.modules.c"
static const MR_EnumFunctorDescPtr parse_tree__modules__parse_tree__modules__enum_name_ordered_opt_file_type_0[2] = {
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_0,
  &parse_tree__modules__parse_tree__modules__enum_functor_desc_opt_file_type_0_1
};

#line 2618 "parse_tree.modules.c"
static const MR_Integer parse_tree__modules__parse_tree__modules__functor_number_map_opt_file_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2624 "parse_tree.modules.c"
const MR_TypeCtorInfo_Struct parse_tree__modules__parse_tree__modules__type_ctor_info_opt_file_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__modules____Unify____opt_file_type_0_0_10001)),
  ((MR_Box) (parse_tree__modules____Compare____opt_file_type_0_0_10001)),
  (MR_String) "parse_tree.modules",
  (MR_String) "opt_file_type",
  {     parse_tree__modules__parse_tree__modules__enum_name_ordered_opt_file_type_0 },
  {     parse_tree__modules__parse_tree__modules__enum_value_ordered_opt_file_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__modules__parse_tree__modules__functor_number_map_opt_file_type_0
};

#line 2641 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2649 "parse_tree.modules.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__modules__list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__parse_tree__prog_item__pti_item_block_1__pseudo_1
  }
};

#line 2657 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__modules____vpti_pred_3__pseudo_list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &parse_tree__modules__list__pti_list_1__pseudo_parse_tree__prog_item__pti_item_block_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0,
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 2668 "parse_tree.modules.c"
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

#line 2685 "parse_tree.modules.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__modules____vpti_func_2__pseudo_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 2695 "parse_tree.modules.c"
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

#line 2712 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0_10001(
#line 2715 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2717 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2719 "parse_tree.modules.c"
{
#line 2721 "parse_tree.modules.c"
  {
#line 2723 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2726 "parse_tree.modules.c"
    {
#line 2728 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____import_or_use_context_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2731 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2733 "parse_tree.modules.c"
  }
#line 2735 "parse_tree.modules.c"
}

#line 2738 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0_10001(
#line 2741 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2743 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2745 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2747 "parse_tree.modules.c"
{
#line 2749 "parse_tree.modules.c"
  {
#line 2751 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2754 "parse_tree.modules.c"
    {
#line 2756 "parse_tree.modules.c"
      parse_tree__modules____Compare____import_or_use_context_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2759 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2761 "parse_tree.modules.c"
  }
#line 2763 "parse_tree.modules.c"
}

#line 2766 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____int_section_maker_1_0_10001(
#line 2769 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2771 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2773 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2775 "parse_tree.modules.c"
{
#line 2777 "parse_tree.modules.c"
  {
#line 2779 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2782 "parse_tree.modules.c"
    {
#line 2784 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____int_section_maker_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2787 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2789 "parse_tree.modules.c"
  }
#line 2791 "parse_tree.modules.c"
}

#line 2794 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____int_section_maker_1_0_10001(
#line 2797 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2799 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 2801 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 2803 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4)
#line 2805 "parse_tree.modules.c"
{
#line 2807 "parse_tree.modules.c"
  {
#line 2809 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2812 "parse_tree.modules.c"
    {
#line 2814 "parse_tree.modules.c"
      parse_tree__modules____Compare____int_section_maker_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_3), ((MR_Word) parse_tree__modules__wrapper_arg_4));
    }
#line 2817 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2819 "parse_tree.modules.c"
  }
#line 2821 "parse_tree.modules.c"
}

#line 2824 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0_10001(
#line 2827 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2829 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2831 "parse_tree.modules.c"
{
#line 2833 "parse_tree.modules.c"
  {
#line 2835 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2838 "parse_tree.modules.c"
    {
#line 2840 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____module_import_or_use_map_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2843 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2845 "parse_tree.modules.c"
  }
#line 2847 "parse_tree.modules.c"
}

#line 2850 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0_10001(
#line 2853 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2855 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2857 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2859 "parse_tree.modules.c"
{
#line 2861 "parse_tree.modules.c"
  {
#line 2863 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2866 "parse_tree.modules.c"
    {
#line 2868 "parse_tree.modules.c"
      parse_tree__modules____Compare____module_import_or_use_map_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2871 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2873 "parse_tree.modules.c"
  }
#line 2875 "parse_tree.modules.c"
}

#line 2878 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0_10001(
#line 2881 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2883 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2885 "parse_tree.modules.c"
{
#line 2887 "parse_tree.modules.c"
  {
#line 2889 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2892 "parse_tree.modules.c"
    {
#line 2894 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____module_inclusion_map_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2897 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2899 "parse_tree.modules.c"
  }
#line 2901 "parse_tree.modules.c"
}

#line 2904 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0_10001(
#line 2907 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2909 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2911 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2913 "parse_tree.modules.c"
{
#line 2915 "parse_tree.modules.c"
  {
#line 2917 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2920 "parse_tree.modules.c"
    {
#line 2922 "parse_tree.modules.c"
      parse_tree__modules____Compare____module_inclusion_map_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2925 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2927 "parse_tree.modules.c"
  }
#line 2929 "parse_tree.modules.c"
}

#line 2932 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____opt_file_type_0_0_10001(
#line 2935 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2937 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 2939 "parse_tree.modules.c"
{
#line 2941 "parse_tree.modules.c"
  {
#line 2943 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 2946 "parse_tree.modules.c"
    {
#line 2948 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____opt_file_type_0_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 2951 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 2953 "parse_tree.modules.c"
  }
#line 2955 "parse_tree.modules.c"
}

#line 2958 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____opt_file_type_0_0_10001(
#line 2961 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_1,
#line 2963 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2965 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2967 "parse_tree.modules.c"
{
#line 2969 "parse_tree.modules.c"
  {
#line 2971 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 2974 "parse_tree.modules.c"
    {
#line 2976 "parse_tree.modules.c"
      parse_tree__modules____Compare____opt_file_type_0_0(&parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 2979 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_1 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 2981 "parse_tree.modules.c"
  }
#line 2983 "parse_tree.modules.c"
}

#line 2986 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_appender_1_0_10001(
#line 2989 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 2991 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 2993 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 2995 "parse_tree.modules.c"
{
#line 2997 "parse_tree.modules.c"
  {
#line 2999 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 3002 "parse_tree.modules.c"
    {
#line 3004 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____section_appender_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 3007 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 3009 "parse_tree.modules.c"
  }
#line 3011 "parse_tree.modules.c"
}

#line 3014 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____section_appender_1_0_10001(
#line 3017 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 3019 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 3021 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 3023 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4)
#line 3025 "parse_tree.modules.c"
{
#line 3027 "parse_tree.modules.c"
  {
#line 3029 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 3032 "parse_tree.modules.c"
    {
#line 3034 "parse_tree.modules.c"
      parse_tree__modules____Compare____section_appender_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_3), ((MR_Word) parse_tree__modules__wrapper_arg_4));
    }
#line 3037 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 3039 "parse_tree.modules.c"
  }
#line 3041 "parse_tree.modules.c"
}

#line 3044 "parse_tree.modules.c"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0_10001(
#line 3047 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 3049 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 3051 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3)
#line 3053 "parse_tree.modules.c"
{
#line 3055 "parse_tree.modules.c"
  {
#line 3057 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded;

#line 3060 "parse_tree.modules.c"
    {
#line 3062 "parse_tree.modules.c"
      parse_tree__modules__succeeded = parse_tree__modules____Unify____section_visibility_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), ((MR_Word) parse_tree__modules__wrapper_arg_3));
    }
#line 3065 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 3067 "parse_tree.modules.c"
  }
#line 3069 "parse_tree.modules.c"
}

#line 3072 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0_10001(
#line 3075 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 3077 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_2,
#line 3079 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_3,
#line 3081 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_4)
#line 3083 "parse_tree.modules.c"
{
#line 3085 "parse_tree.modules.c"
  {
#line 3087 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__1_1;

#line 3090 "parse_tree.modules.c"
    {
#line 3092 "parse_tree.modules.c"
      parse_tree__modules____Compare____section_visibility_1_0(((MR_Word) parse_tree__modules__wrapper_arg_1), &parse_tree__modules__conv0_HeadVar__1_1, ((MR_Word) parse_tree__modules__wrapper_arg_3), ((MR_Word) parse_tree__modules__wrapper_arg_4));
    }
#line 3095 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__1_1));
#line 3097 "parse_tree.modules.c"
  }
#line 3099 "parse_tree.modules.c"
}

#line 1069 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_57_95_95_91_54_93_95_48_15_p_0(
#line 1069 "modules.m"
  MR_Word parse_tree__modules__V_168_168,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__Import_18,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_52,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56)
#line 1069 "modules.m"
{
#line 1080 "modules.m"
  {
#line 1080 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_167_167;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ReturnTimestamp_27;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestamp_29;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntParseTree_30;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntSpecs_31;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntError_32;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntModuleName_33;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntKind_34;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntContext_35;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__MaybeVersionNumbers_36;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntIncls_37;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpIncls_38;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntAvails_39;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpAvails_40;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntItems_41;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpItems_42;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__IntImports1_43;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__IntUses1_44;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ImpImports1_45;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ImpUses1_46;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntItemBlocks_47;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__Statistics_48;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ModIndirectImports0_49;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ModIndirectImports_50;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 24)));
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_60_60;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_67_67;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_68_68;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_70_70;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_71_71;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_72_72;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_75_75;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_76_76;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_77_77;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80;
#line 1081 "modules.m"
    MR_String parse_tree__modules__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 0)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 1)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 2)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 3)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 4)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 5)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 6)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 7)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 8)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 9)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 10)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 11)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 12)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 13)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 14)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 15)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 16)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 17)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 18)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 19)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 20)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 21)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 22)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 23)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 25)));
#line 1081 "modules.m"
    MR_String parse_tree__modules__V_109_109 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 26)));
#line 1083 "modules.m"
    MR_Word parse_tree__modules__V_110_110;
#line 1083 "modules.m"
    MR_Word parse_tree__modules__V_111_111;
#line 1083 "modules.m"
    MR_String parse_tree__modules___ImportFileName_28;
#line 1120 "modules.m"
    MR_String parse_tree__modules__V_112_112;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_113_113;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_114_114;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_115_115;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_116_116;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_117_117;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_118_118;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_119_119;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_120_120;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_121_121;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_122_122;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_123_123;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_124_124;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_125_125;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_126_126;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_127_127;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_128_128;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_129_129;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_130_130;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_131_131;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_132_132;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_133_133;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_134_134;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_135_135;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_136_136;
#line 1120 "modules.m"
    MR_String parse_tree__modules__V_137_137;
#line 1122 "modules.m"
    MR_String parse_tree__modules__V_138_138;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_139_139;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_140_140;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_141_141;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_142_142;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_143_143;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_144_144;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_146_146;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_147_147;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_148_148;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_149_149;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_150_150;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_151_151;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_152_152;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_153_153;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_154_154;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_155_155;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_156_156;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_157_157;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_158_158;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_159_159;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_160_160;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_161_161;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_162_162;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_163_163;
#line 1122 "modules.m"
    MR_String parse_tree__modules__V_164_164;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_145_145;

#line 1081 "modules.m"
    {
#line 1081 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_59_59, &parse_tree__modules__ReturnTimestamp_27);
    }
#line 1083 "modules.m"
    parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 0)));
#line 1083 "modules.m"
    parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 1)));
#line 1083 "modules.m"
    parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 2)));
#line 1083 "modules.m"
    {
#line 1083 "modules.m"
      parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_16, parse_tree__modules__V_60_60, (MR_String) "Reading short interface for module", (MR_Integer) 0, parse_tree__modules__Import_18, parse_tree__modules__IntFileKind_19, &parse_tree__modules___ImportFileName_28, parse_tree__modules__ReturnTimestamp_27, &parse_tree__modules__MaybeTimestamp_29, &parse_tree__modules__ShortIntParseTree_30, &parse_tree__modules__ShortIntSpecs_31, &parse_tree__modules__ShortIntError_32);
    }
#line 1088 "modules.m"
    {
#line 1088 "modules.m"
      parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Import_18, parse_tree__modules__IntFileKind_19, (MR_Integer) 0, parse_tree__modules__MaybeTimestamp_29, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65);
    }
#line 1091 "modules.m"
    parse_tree__modules__ShortIntModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 0)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntKind_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 1)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 2)));
#line 1091 "modules.m"
    parse_tree__modules__MaybeVersionNumbers_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 3)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntIntIncls_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 4)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntImpIncls_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 5)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntIntAvails_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 6)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntImpAvails_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 7)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntIntItems_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 8)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntImpItems_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 9)));
#line 1096 "modules.m"
    {
#line 1096 "modules.m"
      parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(parse_tree__modules__ShortIntModuleName_33, parse_tree__modules__MaybeVersionNumbers_36, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66);
    }
#line 1098 "modules.m"
    {
#line 1098 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__ShortIntIntAvails_39, &parse_tree__modules__IntImports1_43, &parse_tree__modules__IntUses1_44);
    }
#line 1099 "modules.m"
    {
#line 1099 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__ShortIntImpAvails_40, &parse_tree__modules__ImpImports1_45, &parse_tree__modules__ImpUses1_46);
    }
#line 1101 "modules.m"
    {
#line 1101 "modules.m"
      parse_tree__modules__V_67_67 = parse_tree__prog_item__make_ims_used_3_f_0(parse_tree__modules__V_168_168, parse_tree__modules__Import_18, parse_tree__modules__ShortIntKind_34);
    }
#line 1102 "modules.m"
    {
#line 1102 "modules.m"
      parse_tree__modules__V_68_68 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(parse_tree__modules__Import_18, parse_tree__modules__ShortIntKind_34);
    }
#line 1100 "modules.m"
    {
#line 1100 "modules.m"
      parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, parse_tree__modules__ShortIntContext_35, ((MR_Box) (parse_tree__modules__V_67_67)), ((MR_Box) (parse_tree__modules__V_68_68)), parse_tree__modules__ShortIntIntIncls_37, parse_tree__modules__ShortIntImpIncls_38, parse_tree__modules__ShortIntIntAvails_39, parse_tree__modules__ShortIntImpAvails_40, parse_tree__modules__ShortIntIntItems_41, parse_tree__modules__ShortIntImpItems_42, &parse_tree__modules__ShortIntItemBlocks_47);
    }
#line 3445 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_167_167 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1109 "modules.m"
    {
#line 1109 "modules.m"
      parse_tree__modules__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 0) = ((MR_Box) (parse_tree__modules__IntUses1_44));
#line 1109 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1109 "modules.m"
    }
#line 1109 "modules.m"
    {
#line 1109 "modules.m"
      parse_tree__modules__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 0) = ((MR_Box) (parse_tree__modules__IntImports1_43));
#line 1109 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 1) = ((MR_Box) (parse_tree__modules__V_72_72));
#line 1109 "modules.m"
    }
#line 1108 "modules.m"
    {
#line 1108 "modules.m"
      parse_tree__modules__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_70_70, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51));
#line 1108 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_70_70, 1) = ((MR_Box) (parse_tree__modules__V_71_71));
#line 1108 "modules.m"
    }
#line 1108 "modules.m"
    {
#line 1108 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_IndirectImports_52 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_167_167, parse_tree__modules__V_70_70);
    }
#line 1111 "modules.m"
    {
#line 1111 "modules.m"
      parse_tree__modules__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 0) = ((MR_Box) (parse_tree__modules__ImpUses1_46));
#line 1111 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1111 "modules.m"
    }
#line 1111 "modules.m"
    {
#line 1111 "modules.m"
      parse_tree__modules__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 0) = ((MR_Box) (parse_tree__modules__ImpImports1_45));
#line 1111 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 1) = ((MR_Box) (parse_tree__modules__V_77_77));
#line 1111 "modules.m"
    }
#line 1110 "modules.m"
    {
#line 1110 "modules.m"
      parse_tree__modules__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53));
#line 1110 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 1) = ((MR_Box) (parse_tree__modules__V_76_76));
#line 1110 "modules.m"
    }
#line 1110 "modules.m"
    {
#line 1110 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_167_167, parse_tree__modules__V_75_75);
    }
#line 1113 "modules.m"
    {
#line 1113 "modules.m"
      parse_tree__module_imports__module_and_imports_add_indirect_int_item_blocks_3_p_0(parse_tree__modules__ShortIntItemBlocks_47, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79);
    }
#line 1114 "modules.m"
    {
#line 1114 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(parse_tree__modules__ShortIntSpecs_31, parse_tree__modules__ShortIntError_32, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80);
    }
#line 1117 "modules.m"
    {
#line 1117 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_16, (MR_Integer) 56, &parse_tree__modules__Statistics_48);
    }
#line 1118 "modules.m"
    {
#line 1118 "modules.m"
      libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_48);
    }
#line 1120 "modules.m"
    parse_tree__modules__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 0)));
#line 1120 "modules.m"
    parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 1)));
#line 1120 "modules.m"
    parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 2)));
#line 1120 "modules.m"
    parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 3)));
#line 1120 "modules.m"
    parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 4)));
#line 1120 "modules.m"
    parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 5)));
#line 1120 "modules.m"
    parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 6)));
#line 1120 "modules.m"
    parse_tree__modules__ModIndirectImports0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 7)));
#line 1120 "modules.m"
    parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 8)));
#line 1120 "modules.m"
    parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 9)));
#line 1120 "modules.m"
    parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 10)));
#line 1120 "modules.m"
    parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 11)));
#line 1120 "modules.m"
    parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 12)));
#line 1120 "modules.m"
    parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 13)));
#line 1120 "modules.m"
    parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 14)));
#line 1120 "modules.m"
    parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 15)));
#line 1120 "modules.m"
    parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 16)));
#line 1120 "modules.m"
    parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 17)));
#line 1120 "modules.m"
    parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 18)));
#line 1120 "modules.m"
    parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 19)));
#line 1120 "modules.m"
    parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 20)));
#line 1120 "modules.m"
    parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 21)));
#line 1120 "modules.m"
    parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 22)));
#line 1120 "modules.m"
    parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 23)));
#line 1120 "modules.m"
    parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 24)));
#line 1120 "modules.m"
    parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 25)));
#line 1120 "modules.m"
    parse_tree__modules__V_137_137 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 26)));
#line 1121 "modules.m"
    {
#line 1121 "modules.m"
      mercury__set__insert_3_p_0(parse_tree__modules__TypeCtorInfo_167_167, ((MR_Box) (parse_tree__modules__Import_18)), parse_tree__modules__ModIndirectImports0_49, &parse_tree__modules__ModIndirectImports_50);
    }
#line 1122 "modules.m"
    parse_tree__modules__V_138_138 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 0)));
#line 1122 "modules.m"
    parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 1)));
#line 1122 "modules.m"
    parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 2)));
#line 1122 "modules.m"
    parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 3)));
#line 1122 "modules.m"
    parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 4)));
#line 1122 "modules.m"
    parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 5)));
#line 1122 "modules.m"
    parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 6)));
#line 1122 "modules.m"
    parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 7)));
#line 1122 "modules.m"
    parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 8)));
#line 1122 "modules.m"
    parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 9)));
#line 1122 "modules.m"
    parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 10)));
#line 1122 "modules.m"
    parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 11)));
#line 1122 "modules.m"
    parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 12)));
#line 1122 "modules.m"
    parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 13)));
#line 1122 "modules.m"
    parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 14)));
#line 1122 "modules.m"
    parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 15)));
#line 1122 "modules.m"
    parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 16)));
#line 1122 "modules.m"
    parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 17)));
#line 1122 "modules.m"
    parse_tree__modules__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 18)));
#line 1122 "modules.m"
    parse_tree__modules__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 19)));
#line 1122 "modules.m"
    parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 20)));
#line 1122 "modules.m"
    parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 21)));
#line 1122 "modules.m"
    parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 22)));
#line 1122 "modules.m"
    parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 23)));
#line 1122 "modules.m"
    parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 24)));
#line 1122 "modules.m"
    parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 25)));
#line 1122 "modules.m"
    parse_tree__modules__V_164_164 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 26)));
#line 1122 "modules.m"
    {
#line 1122 "modules.m"
      MR_Word base;
#line 1122 "modules.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56 = base;
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_138_138));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_139_139));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_140_140));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_141_141));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__V_142_142));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_143_143));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__V_144_144));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__ModIndirectImports_50));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_146_146));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_147_147));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_148_148));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_149_149));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_150_150));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_151_151));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_152_152));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_153_153));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_154_154));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_155_155));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_156_156));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_157_157));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_158_158));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_159_159));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__V_160_160));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__V_161_161));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__V_162_162));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__modules__V_163_163));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_164_164));
#line 1122 "modules.m"
    }
#line 1080 "modules.m"
  }
#line 1069 "modules.m"
}

#line 1031 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_53_95_95_91_54_93_95_48_15_p_0(
#line 1031 "modules.m"
  MR_Word parse_tree__modules__V_214_214,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__Imports_18,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_30,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34)
#line 1031 "modules.m"
{
#line 1065 "modules.m"
  while (MR_TRUE)
#line 1065 "modules.m"
    {
#line 1065 "modules.m"
      /* tailcall optimized into a loop */
#line 1065 "modules.m"
      {
#line 1065 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 1065 "modules.m"
        MR_Word parse_tree__modules__FirstImport_27;
#line 1065 "modules.m"
        MR_Word parse_tree__modules__LaterImports_28;
#line 1043 "modules.m"
        MR_Box parse_tree__modules__conv0_FirstImport_27;

#line 1043 "modules.m"
        {
#line 1043 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv0_FirstImport_27, parse_tree__modules__Imports_18, &parse_tree__modules__LaterImports_28);
        }
#line 1043 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1043 "modules.m"
          {
#line 1043 "modules.m"
            parse_tree__modules__FirstImport_27 = ((MR_Word) parse_tree__modules__conv0_FirstImport_27);
#line 1043 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 1043 "modules.m"
          }
#line 1065 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1060 "modules.m"
          {
#line 1060 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41;
#line 1060 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42;
#line 1060 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;
#line 1048 "modules.m"
            MR_Word parse_tree__modules__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 7)));
#line 1048 "modules.m"
            MR_Word parse_tree__modules__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 6)));
#line 1048 "modules.m"
            MR_Word parse_tree__modules__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 5)));
#line 1048 "modules.m"
            MR_Word parse_tree__modules__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 4)));
#line 1048 "modules.m"
            MR_Word parse_tree__modules__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 2)));
#line 1047 "modules.m"
            MR_String parse_tree__modules__V_186_186 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 26)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 25)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 24)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 23)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 22)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 21)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 20)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 19)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 18)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 17)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 16)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 15)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 14)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 13)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 12)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 11)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 10)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 9)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 8)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 3)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 1)));
#line 1047 "modules.m"
            MR_String parse_tree__modules__V_212_212 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 0)));

#line 1047 "modules.m"
            {
#line 1047 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__FirstImport_27, parse_tree__modules__V_210_210);
            }
#line 1048 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 1048 "modules.m"
              {
#line 1048 "modules.m"
                {
#line 1048 "modules.m"
                  parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_208_208);
                }
#line 1048 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 1048 "modules.m"
                  {
#line 1049 "modules.m"
                    {
#line 1049 "modules.m"
                      parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_207_207);
                    }
#line 1048 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 1048 "modules.m"
                      {
#line 1050 "modules.m"
                        {
#line 1050 "modules.m"
                          parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_206_206);
                        }
#line 1048 "modules.m"
                        if (!(parse_tree__modules__succeeded))
#line 1051 "modules.m"
                          {
#line 1051 "modules.m"
                            {
#line 1051 "modules.m"
                              parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_205_205);
                            }
#line 1051 "modules.m"
                          }
#line 1048 "modules.m"
                      }
#line 1048 "modules.m"
                  }
#line 1048 "modules.m"
              }
#line 1055 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1054 "modules.m"
              {
#line 1054 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 1054 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31;
#line 1054 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29;
#line 1054 "modules.m"
              }
#line 1055 "modules.m"
            else
#line 1056 "modules.m"
              {
#line 1056 "modules.m"
                parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_57_95_95_91_54_93_95_48_15_p_0(parse_tree__modules__V_214_214, parse_tree__modules__Globals_16, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__FirstImport_27, parse_tree__modules__IntFileKind_19, parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29, &parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43);
              }
#line 1061 "modules.m"
            /* direct tailcall eliminated */
#line 1061 "modules.m"
            {
#line 1061 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_18 = parse_tree__modules__LaterImports_28;
#line 1061 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_29 = parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41;
#line 1061 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_31 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42;
#line 1061 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;

#line 1061 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33;
#line 1061 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_31;
#line 1061 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_29;
#line 1061 "modules.m"
              parse_tree__modules__Imports_18 = parse_tree__modules__Imports__tmp_copy_18;
#line 1061 "modules.m"
            }
#line 1061 "modules.m"
            continue;
#line 1060 "modules.m"
          }
#line 1065 "modules.m"
        else
#line 1066 "modules.m"
          {
#line 1066 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 1066 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31;
#line 1066 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_30 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29;
#line 1066 "modules.m"
          }
#line 1065 "modules.m"
      }
#line 1065 "modules.m"
      break;
#line 1065 "modules.m"
    }
#line 1031 "modules.m"
}

#line 771 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_52_95_95_91_54_44_32_55_93_95_48_14_p_0(
#line 771 "modules.m"
  MR_Word parse_tree__modules__V_161_161,
#line 771 "modules.m"
  MR_Word parse_tree__modules__V_162_162,
#line 771 "modules.m"
  MR_Word parse_tree__modules__Globals_15,
#line 771 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_16,
#line 771 "modules.m"
  MR_Word parse_tree__modules__Ancestor_17,
#line 771 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_48,
#line 771 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_49,
#line 771 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_50,
#line 771 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_51,
#line 771 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52,
#line 771 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53)
#line 771 "modules.m"
{
#line 781 "modules.m"
  {
#line 781 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 781 "modules.m"
    MR_Word parse_tree__modules__TypeInfo_for_MS_157 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0;
#line 781 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_159_159;
#line 781 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_160_160;
#line 781 "modules.m"
    MR_Word parse_tree__modules__ReturnTimestamp_25;
#line 781 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestamp_27;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntParseTree_28;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntSpecs_29;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntErrors_30;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntModuleName_31;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntKind_32;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntContext_33;
#line 781 "modules.m"
    MR_Word parse_tree__modules__MaybeVersionNumbers_34;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntIntIncls_35;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntImpIncls_36;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntIntAvails_37;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntImpAvails_38;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntIntItems_39;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntImpItems_40;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntItemBlocks_41;
#line 781 "modules.m"
    MR_Word parse_tree__modules__AncDirectImports_42;
#line 781 "modules.m"
    MR_Word parse_tree__modules__AncDirectUses_43;
#line 781 "modules.m"
    MR_Word parse_tree__modules__Statistics_44;
#line 781 "modules.m"
    MR_Word parse_tree__modules__FatalPrivateIntErrors_45;
#line 781 "modules.m"
    MR_Word parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 24)));
#line 781 "modules.m"
    MR_Word parse_tree__modules__V_57_57;
#line 781 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_64_64;
#line 781 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65;
#line 781 "modules.m"
    MR_Word parse_tree__modules__V_66_66;
#line 781 "modules.m"
    MR_Word parse_tree__modules__V_67_67;
#line 781 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_70_70;
#line 781 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71;
#line 781 "modules.m"
    MR_Word parse_tree__modules__V_74_74;
#line 782 "modules.m"
    MR_String parse_tree__modules__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 0)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 1)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 2)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 3)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 4)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 5)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 6)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 7)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 8)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 9)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 10)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 11)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 12)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 13)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 14)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 15)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 16)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 17)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 18)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 19)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 20)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 21)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 22)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 23)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 25)));
#line 782 "modules.m"
    MR_String parse_tree__modules__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 26)));
#line 784 "modules.m"
    MR_Word parse_tree__modules__V_102_102;
#line 784 "modules.m"
    MR_Word parse_tree__modules__V_103_103;
#line 784 "modules.m"
    MR_String parse_tree__modules___AncestorFileName_26;

#line 782 "modules.m"
    {
#line 782 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_56_56, &parse_tree__modules__ReturnTimestamp_25);
    }
#line 784 "modules.m"
    parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_16, (MR_Integer) 0)));
#line 784 "modules.m"
    parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_16, (MR_Integer) 1)));
#line 784 "modules.m"
    parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_16, (MR_Integer) 2)));
#line 784 "modules.m"
    {
#line 784 "modules.m"
      parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_15, parse_tree__modules__V_57_57, (MR_String) "Reading private interface for module", (MR_Integer) 0, parse_tree__modules__Ancestor_17, (MR_Integer) 0, &parse_tree__modules___AncestorFileName_26, parse_tree__modules__ReturnTimestamp_25, &parse_tree__modules__MaybeTimestamp_27, &parse_tree__modules__PrivateIntParseTree_28, &parse_tree__modules__PrivateIntSpecs_29, &parse_tree__modules__PrivateIntErrors_30);
    }
#line 790 "modules.m"
    {
#line 790 "modules.m"
      parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Ancestor_17, (MR_Integer) 0, (MR_Integer) 1, parse_tree__modules__MaybeTimestamp_27, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_64_64);
    }
#line 793 "modules.m"
    parse_tree__modules__PrivateIntModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 0)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntKind_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 1)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 2)));
#line 793 "modules.m"
    parse_tree__modules__MaybeVersionNumbers_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 3)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntIntIncls_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 4)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntImpIncls_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 5)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntIntAvails_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 6)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntImpAvails_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 7)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntIntItems_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 8)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntImpItems_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 9)));
#line 798 "modules.m"
    {
#line 798 "modules.m"
      parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(parse_tree__modules__PrivateIntModuleName_31, parse_tree__modules__MaybeVersionNumbers_34, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_64_64, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65);
    }
#line 801 "modules.m"
    {
#line 801 "modules.m"
      parse_tree__modules__V_66_66 = parse_tree__prog_item__make_ims_imported_3_f_0(parse_tree__modules__V_161_161, parse_tree__modules__Ancestor_17, parse_tree__modules__PrivateIntKind_32);
    }
#line 802 "modules.m"
    {
#line 802 "modules.m"
      parse_tree__modules__V_67_67 = parse_tree__prog_item__make_ims_imported_3_f_0(parse_tree__modules__V_162_162, parse_tree__modules__Ancestor_17, parse_tree__modules__PrivateIntKind_32);
    }
#line 800 "modules.m"
    {
#line 800 "modules.m"
      parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0(parse_tree__modules__TypeInfo_for_MS_157, parse_tree__modules__PrivateIntContext_33, ((MR_Box) (parse_tree__modules__V_66_66)), ((MR_Box) (parse_tree__modules__V_67_67)), parse_tree__modules__PrivateIntIntIncls_35, parse_tree__modules__PrivateIntImpIncls_36, parse_tree__modules__PrivateIntIntAvails_37, parse_tree__modules__PrivateIntImpAvails_38, parse_tree__modules__PrivateIntIntItems_39, parse_tree__modules__PrivateIntImpItems_40, &parse_tree__modules__PrivateIntItemBlocks_41);
    }
#line 808 "modules.m"
    {
#line 808 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(parse_tree__modules__TypeInfo_for_MS_157, parse_tree__modules__PrivateIntItemBlocks_41, &parse_tree__modules__AncDirectImports_42, &parse_tree__modules__AncDirectUses_43);
    }
#line 4179 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_159_159 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 810 "modules.m"
    {
#line 810 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_159_159, parse_tree__modules__AncDirectImports_42, parse_tree__modules__STATE_VARIABLE_DirectImports_0_48, parse_tree__modules__STATE_VARIABLE_DirectImports_49);
    }
#line 811 "modules.m"
    {
#line 811 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_159_159, parse_tree__modules__AncDirectUses_43, parse_tree__modules__STATE_VARIABLE_DirectUses_0_50, parse_tree__modules__STATE_VARIABLE_DirectUses_51);
    }
#line 813 "modules.m"
    {
#line 813 "modules.m"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(parse_tree__modules__PrivateIntItemBlocks_41, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_70_70);
    }
#line 814 "modules.m"
    {
#line 814 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(parse_tree__modules__PrivateIntSpecs_29, parse_tree__modules__PrivateIntErrors_30, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_70_70, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71);
    }
#line 817 "modules.m"
    {
#line 817 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_15, (MR_Integer) 56, &parse_tree__modules__Statistics_44);
    }
#line 818 "modules.m"
    {
#line 818 "modules.m"
      libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_44);
    }
#line 820 "modules.m"
    {
#line 820 "modules.m"
      parse_tree__modules__V_74_74 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
    }
#line 4216 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_160_160 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 820 "modules.m"
    {
#line 820 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_160_160, parse_tree__modules__PrivateIntErrors_30, parse_tree__modules__V_74_74, &parse_tree__modules__FatalPrivateIntErrors_45);
    }
#line 822 "modules.m"
    {
#line 822 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_160_160, parse_tree__modules__FatalPrivateIntErrors_45);
    }
#line 826 "modules.m"
    if (parse_tree__modules__succeeded)
#line 823 "modules.m"
      {
#line 823 "modules.m"
        MR_Word parse_tree__modules__ModAncestors0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 4)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__ModAncestors_47;
#line 823 "modules.m"
        MR_String parse_tree__modules__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 0)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 1)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 2)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 3)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 5)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 6)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 7)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 8)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 9)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 10)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 11)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 12)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 13)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 14)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 15)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 16)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 17)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 18)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 19)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 20)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 21)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 22)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 23)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 24)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 25)));
#line 823 "modules.m"
        MR_String parse_tree__modules__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 26)));
#line 825 "modules.m"
        MR_String parse_tree__modules__V_130_130;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_131_131;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_132_132;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_133_133;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_135_135;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_136_136;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_137_137;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_138_138;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_139_139;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_140_140;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_141_141;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_142_142;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_143_143;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_144_144;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_145_145;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_146_146;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_147_147;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_148_148;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_149_149;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_150_150;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_151_151;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_152_152;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_153_153;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_154_154;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_155_155;
#line 825 "modules.m"
        MR_String parse_tree__modules__V_156_156;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_134_134;

#line 824 "modules.m"
        {
#line 824 "modules.m"
          mercury__set__insert_3_p_0(parse_tree__modules__TypeCtorInfo_159_159, ((MR_Box) (parse_tree__modules__Ancestor_17)), parse_tree__modules__ModAncestors0_46, &parse_tree__modules__ModAncestors_47);
        }
#line 825 "modules.m"
        parse_tree__modules__V_130_130 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 0)));
#line 825 "modules.m"
        parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 1)));
#line 825 "modules.m"
        parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 2)));
#line 825 "modules.m"
        parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 3)));
#line 825 "modules.m"
        parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 4)));
#line 825 "modules.m"
        parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 5)));
#line 825 "modules.m"
        parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 6)));
#line 825 "modules.m"
        parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 7)));
#line 825 "modules.m"
        parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 8)));
#line 825 "modules.m"
        parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 9)));
#line 825 "modules.m"
        parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 10)));
#line 825 "modules.m"
        parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 11)));
#line 825 "modules.m"
        parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 12)));
#line 825 "modules.m"
        parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 13)));
#line 825 "modules.m"
        parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 14)));
#line 825 "modules.m"
        parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 15)));
#line 825 "modules.m"
        parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 16)));
#line 825 "modules.m"
        parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 17)));
#line 825 "modules.m"
        parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 18)));
#line 825 "modules.m"
        parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 19)));
#line 825 "modules.m"
        parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 20)));
#line 825 "modules.m"
        parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 21)));
#line 825 "modules.m"
        parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 22)));
#line 825 "modules.m"
        parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 23)));
#line 825 "modules.m"
        parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 24)));
#line 825 "modules.m"
        parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 25)));
#line 825 "modules.m"
        parse_tree__modules__V_156_156 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 26)));
#line 825 "modules.m"
        {
#line 825 "modules.m"
          MR_Word base;
#line 825 "modules.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 825 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53 = base;
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_130_130));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_131_131));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_132_132));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_133_133));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__ModAncestors_47));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_135_135));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__V_136_136));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__V_137_137));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_138_138));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_139_139));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_140_140));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_141_141));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_142_142));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_143_143));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_144_144));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_145_145));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_146_146));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_147_147));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_148_148));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_149_149));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_150_150));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_151_151));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__V_152_152));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__V_153_153));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__V_154_154));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__modules__V_155_155));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_156_156));
#line 825 "modules.m"
        }
#line 823 "modules.m"
      }
#line 826 "modules.m"
    else
#line 826 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71;
#line 781 "modules.m"
  }
#line 771 "modules.m"
}

#line 753 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_49_95_95_91_54_44_32_55_93_95_48_14_p_0_1(
#line 753 "modules.m"
  MR_Box parse_tree__modules__closure_arg)
#line 753 "modules.m"
{
#line 753 "modules.m"
  {
#line 753 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 753 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;

#line 753 "modules.m"
    {
#line 753 "modules.m"
      return parse_tree__modules__succeeded = parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__753__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))));
    }
#line 753 "modules.m"
    return parse_tree__modules__succeeded;
#line 753 "modules.m"
  }
#line 753 "modules.m"
}

#line 740 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_49_95_95_91_54_44_32_55_93_95_48_14_p_0(
#line 740 "modules.m"
  MR_Word parse_tree__modules__V_105_105,
#line 740 "modules.m"
  MR_Word parse_tree__modules__V_106_106,
#line 740 "modules.m"
  MR_Word parse_tree__modules__Globals_15,
#line 740 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_16,
#line 740 "modules.m"
  MR_Word parse_tree__modules__Ancestors_17,
#line 740 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_29,
#line 740 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_30,
#line 740 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_31,
#line 740 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_32,
#line 740 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 740 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34)
#line 740 "modules.m"
{
#line 767 "modules.m"
  while (MR_TRUE)
#line 767 "modules.m"
    {
#line 767 "modules.m"
      /* tailcall optimized into a loop */
#line 767 "modules.m"
      {
#line 767 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 767 "modules.m"
        MR_Word parse_tree__modules__FirstAncestor_25;
#line 767 "modules.m"
        MR_Word parse_tree__modules__LaterAncestors_26;
#line 751 "modules.m"
        MR_Box parse_tree__modules__conv0_FirstAncestor_25;

#line 751 "modules.m"
        {
#line 751 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv0_FirstAncestor_25, parse_tree__modules__Ancestors_17, &parse_tree__modules__LaterAncestors_26);
        }
#line 751 "modules.m"
        if (parse_tree__modules__succeeded)
#line 751 "modules.m"
          {
#line 751 "modules.m"
            parse_tree__modules__FirstAncestor_25 = ((MR_Word) parse_tree__modules__conv0_FirstAncestor_25);
#line 751 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 751 "modules.m"
          }
#line 767 "modules.m"
        if (parse_tree__modules__succeeded)
#line 752 "modules.m"
          {
#line 752 "modules.m"
            MR_Word parse_tree__modules__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 2)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__ModAncestors0_28;
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_37_37;
#line 752 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_41_41;
#line 752 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_42_42;
#line 752 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;
#line 752 "modules.m"
            MR_String parse_tree__modules__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 0)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 1)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 3)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 4)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 5)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 6)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 7)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 8)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 9)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 10)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 11)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 12)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 13)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 14)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 15)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 16)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 17)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 18)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 19)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 20)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 21)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 22)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 23)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 24)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 25)));
#line 752 "modules.m"
            MR_String parse_tree__modules__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 26)));
#line 755 "modules.m"
            MR_String parse_tree__modules__V_75_75;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_76_76;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_77_77;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_78_78;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_79_79;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_80_80;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_81_81;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_82_82;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_83_83;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_84_84;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_85_85;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_86_86;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_87_87;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_88_88;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_89_89;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_90_90;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_91_91;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_92_92;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_93_93;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_94_94;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_95_95;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_96_96;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_97_97;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_98_98;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_99_99;
#line 755 "modules.m"
            MR_String parse_tree__modules__V_100_100;

#line 753 "modules.m"
            {
#line 753 "modules.m"
              parse_tree__modules__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 753 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[3]));
#line 753 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 1) = ((MR_Box) (parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_49_95_95_91_54_44_32_55_93_95_48_14_p_0_1));
#line 753 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 753 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 3) = ((MR_Box) (parse_tree__modules__FirstAncestor_25));
#line 753 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 4) = ((MR_Box) (parse_tree__modules__ModuleName_27));
#line 753 "modules.m"
            }
#line 753 "modules.m"
            {
#line 753 "modules.m"
              mercury__require__expect_not_4_p_0(parse_tree__modules__V_37_37, (MR_String) "parse_tree.modules", (MR_String) "predicate \140parse_tree.modules.process_module_private_interfaces\'/14", (MR_String) "module is its own ancestor\?");
            }
#line 755 "modules.m"
            parse_tree__modules__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 0)));
#line 755 "modules.m"
            parse_tree__modules__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 1)));
#line 755 "modules.m"
            parse_tree__modules__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 2)));
#line 755 "modules.m"
            parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 3)));
#line 755 "modules.m"
            parse_tree__modules__ModAncestors0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 4)));
#line 755 "modules.m"
            parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 5)));
#line 755 "modules.m"
            parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 6)));
#line 755 "modules.m"
            parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 7)));
#line 755 "modules.m"
            parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 8)));
#line 755 "modules.m"
            parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 9)));
#line 755 "modules.m"
            parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 10)));
#line 755 "modules.m"
            parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 11)));
#line 755 "modules.m"
            parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 12)));
#line 755 "modules.m"
            parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 13)));
#line 755 "modules.m"
            parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 14)));
#line 755 "modules.m"
            parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 15)));
#line 755 "modules.m"
            parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 16)));
#line 755 "modules.m"
            parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 17)));
#line 755 "modules.m"
            parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 18)));
#line 755 "modules.m"
            parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 19)));
#line 755 "modules.m"
            parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 20)));
#line 755 "modules.m"
            parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 21)));
#line 755 "modules.m"
            parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 22)));
#line 755 "modules.m"
            parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 23)));
#line 755 "modules.m"
            parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 24)));
#line 755 "modules.m"
            parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 25)));
#line 755 "modules.m"
            parse_tree__modules__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 26)));
#line 756 "modules.m"
            {
#line 756 "modules.m"
              parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstAncestor_25)), parse_tree__modules__ModAncestors0_28);
            }
#line 759 "modules.m"
            if (parse_tree__modules__succeeded)
#line 758 "modules.m"
              {
#line 758 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 758 "modules.m"
                parse_tree__modules__STATE_VARIABLE_DirectUses_42_42 = parse_tree__modules__STATE_VARIABLE_DirectUses_0_31;
#line 758 "modules.m"
                parse_tree__modules__STATE_VARIABLE_DirectImports_41_41 = parse_tree__modules__STATE_VARIABLE_DirectImports_0_29;
#line 758 "modules.m"
              }
#line 759 "modules.m"
            else
#line 760 "modules.m"
              {
#line 760 "modules.m"
                parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_95_95_104_111_49_52_95_95_91_54_44_32_55_93_95_48_14_p_0(parse_tree__modules__V_105_105, parse_tree__modules__V_106_106, parse_tree__modules__Globals_15, parse_tree__modules__HaveReadModuleMaps_16, parse_tree__modules__FirstAncestor_25, parse_tree__modules__STATE_VARIABLE_DirectImports_0_29, &parse_tree__modules__STATE_VARIABLE_DirectImports_41_41, parse_tree__modules__STATE_VARIABLE_DirectUses_0_31, &parse_tree__modules__STATE_VARIABLE_DirectUses_42_42, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43);
              }
#line 764 "modules.m"
            /* direct tailcall eliminated */
#line 764 "modules.m"
            {
#line 764 "modules.m"
              MR_Word parse_tree__modules__Ancestors__tmp_copy_17 = parse_tree__modules__LaterAncestors_26;
#line 764 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0__tmp_copy_29 = parse_tree__modules__STATE_VARIABLE_DirectImports_41_41;
#line 764 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0__tmp_copy_31 = parse_tree__modules__STATE_VARIABLE_DirectUses_42_42;
#line 764 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;

#line 764 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33;
#line 764 "modules.m"
              parse_tree__modules__STATE_VARIABLE_DirectUses_0_31 = parse_tree__modules__STATE_VARIABLE_DirectUses_0__tmp_copy_31;
#line 764 "modules.m"
              parse_tree__modules__STATE_VARIABLE_DirectImports_0_29 = parse_tree__modules__STATE_VARIABLE_DirectImports_0__tmp_copy_29;
#line 764 "modules.m"
              parse_tree__modules__Ancestors_17 = parse_tree__modules__Ancestors__tmp_copy_17;
#line 764 "modules.m"
            }
#line 764 "modules.m"
            continue;
#line 752 "modules.m"
          }
#line 767 "modules.m"
        else
#line 768 "modules.m"
          {
#line 768 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 768 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_DirectUses_32 = parse_tree__modules__STATE_VARIABLE_DirectUses_0_31;
#line 768 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_DirectImports_30 = parse_tree__modules__STATE_VARIABLE_DirectImports_0_29;
#line 768 "modules.m"
          }
#line 767 "modules.m"
      }
#line 767 "modules.m"
      break;
#line 767 "modules.m"
    }
#line 740 "modules.m"
}

#line 4830 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_93_95_48_16_p_0_2(
#line 4833 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 4835 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 4837 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 4839 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 4841 "parse_tree.modules.c"
{
#line 4843 "parse_tree.modules.c"
  {
#line 4845 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 4847 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv1_HeadVar__3_3;

#line 4850 "parse_tree.modules.c"
    {
#line 4852 "parse_tree.modules.c"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv1_HeadVar__3_3);
    }
#line 4855 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__3_3));
#line 4857 "parse_tree.modules.c"
  }
#line 4859 "parse_tree.modules.c"
}

#line 4862 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_93_95_48_16_p_0_1(
#line 4865 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 4867 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 4869 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 4871 "parse_tree.modules.c"
{
#line 4873 "parse_tree.modules.c"
  {
#line 4875 "parse_tree.modules.c"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 4877 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 4879 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__3_3;

#line 4882 "parse_tree.modules.c"
    {
#line 4884 "parse_tree.modules.c"
      parse_tree__modules__conv0_HeadVar__3_3 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 4887 "parse_tree.modules.c"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__3_3));
#line 4889 "parse_tree.modules.c"
    return parse_tree__modules__wrapper_arg_3;
#line 4891 "parse_tree.modules.c"
  }
#line 4893 "parse_tree.modules.c"
}

#line 848 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_93_95_48_16_p_0(
#line 848 "modules.m"
  MR_Word parse_tree__modules__Globals_17,
#line 848 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_18,
#line 848 "modules.m"
  MR_Word parse_tree__modules__NeedQual_19,
#line 848 "modules.m"
  MR_Word parse_tree__modules__Imports_20,
#line 848 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_21,
#line 848 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_22,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_33,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37)
#line 848 "modules.m"
{
#line 881 "modules.m"
  while (MR_TRUE)
#line 881 "modules.m"
    {
#line 881 "modules.m"
      /* tailcall optimized into a loop */
#line 881 "modules.m"
      {
#line 881 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 881 "modules.m"
        MR_Word parse_tree__modules__FirstImport_29;
#line 881 "modules.m"
        MR_Word parse_tree__modules__LaterImports_30;
#line 860 "modules.m"
        MR_Box parse_tree__modules__conv2_FirstImport_29;

#line 860 "modules.m"
        {
#line 860 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv2_FirstImport_29, parse_tree__modules__Imports_20, &parse_tree__modules__LaterImports_30);
        }
#line 860 "modules.m"
        if (parse_tree__modules__succeeded)
#line 860 "modules.m"
          {
#line 860 "modules.m"
            parse_tree__modules__FirstImport_29 = ((MR_Word) parse_tree__modules__conv2_FirstImport_29);
#line 860 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 860 "modules.m"
          }
#line 881 "modules.m"
        if (parse_tree__modules__succeeded)
#line 861 "modules.m"
          {
#line 861 "modules.m"
            MR_Word parse_tree__modules__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43;
#line 861 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44;
#line 861 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45;
#line 861 "modules.m"
            MR_String parse_tree__modules__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 861 "modules.m"
            MR_String parse_tree__modules__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 864 "modules.m"
            {
#line 864 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__FirstImport_29, parse_tree__modules__ModuleName_31);
            }
#line 865 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 865 "modules.m"
              {
#line 865 "modules.m"
                {
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 865 "modules.m"
                  MR_String parse_tree__modules__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 865 "modules.m"
                  MR_String parse_tree__modules__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 865 "modules.m"
                  {
#line 865 "modules.m"
                    parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_42_42);
                  }
#line 865 "modules.m"
                }
#line 865 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 865 "modules.m"
                  {
#line 866 "modules.m"
                    {
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 866 "modules.m"
                      MR_String parse_tree__modules__V_103_103 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 866 "modules.m"
                      MR_String parse_tree__modules__V_128_128 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 866 "modules.m"
                      {
#line 866 "modules.m"
                        parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_41_41);
                      }
#line 866 "modules.m"
                    }
#line 865 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 867 "modules.m"
                      {
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 867 "modules.m"
                        MR_String parse_tree__modules__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 867 "modules.m"
                        MR_String parse_tree__modules__V_154_154 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 867 "modules.m"
                        {
#line 867 "modules.m"
                          parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_40_40);
                        }
#line 867 "modules.m"
                      }
#line 865 "modules.m"
                  }
#line 865 "modules.m"
              }
#line 871 "modules.m"
            if (parse_tree__modules__succeeded)
#line 870 "modules.m"
              {
#line 870 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36;
#line 870 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34;
#line 870 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32;
#line 870 "modules.m"
              }
#line 871 "modules.m"
            else
#line 872 "modules.m"
              {
#line 872 "modules.m"
                parse_tree__modules__process_module_long_interface_16_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, parse_tree__modules__Globals_17, parse_tree__modules__HaveReadModuleMaps_18, parse_tree__modules__NeedQual_19, parse_tree__modules__FirstImport_29, parse_tree__modules__IntFileKind_21, parse_tree__modules__NewIntSection_22, (MR_Word) &parse_tree__modules_scalar_common_2[12], (MR_Word) &parse_tree__modules_scalar_common_2[13], parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32, &parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45);
              }
#line 877 "modules.m"
            /* direct tailcall eliminated */
#line 877 "modules.m"
            {
#line 877 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_20 = parse_tree__modules__LaterImports_30;
#line 877 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_32 = parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43;
#line 877 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_34 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44;
#line 877 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_36 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45;

#line 877 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_36;
#line 877 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_34;
#line 877 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_32;
#line 877 "modules.m"
              parse_tree__modules__Imports_20 = parse_tree__modules__Imports__tmp_copy_20;
#line 877 "modules.m"
            }
#line 877 "modules.m"
            continue;
#line 861 "modules.m"
          }
#line 881 "modules.m"
        else
#line 882 "modules.m"
          {
#line 882 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36;
#line 882 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34;
#line 882 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_33 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32;
#line 882 "modules.m"
          }
#line 881 "modules.m"
      }
#line 881 "modules.m"
      break;
#line 881 "modules.m"
    }
#line 848 "modules.m"
}

#line 5300 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_93_95_48_16_p_0_2(
#line 5303 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 5305 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 5307 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 5309 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 5311 "parse_tree.modules.c"
{
#line 5313 "parse_tree.modules.c"
  {
#line 5315 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 5317 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv1_HeadVar__3_3;

#line 5320 "parse_tree.modules.c"
    {
#line 5322 "parse_tree.modules.c"
      parse_tree__module_imports__module_and_imports_add_direct_int_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv1_HeadVar__3_3);
    }
#line 5325 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__3_3));
#line 5327 "parse_tree.modules.c"
  }
#line 5329 "parse_tree.modules.c"
}

#line 5332 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_93_95_48_16_p_0_1(
#line 5335 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 5337 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 5339 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 5341 "parse_tree.modules.c"
{
#line 5343 "parse_tree.modules.c"
  {
#line 5345 "parse_tree.modules.c"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 5347 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 5349 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__3_3;

#line 5352 "parse_tree.modules.c"
    {
#line 5354 "parse_tree.modules.c"
      parse_tree__modules__conv0_HeadVar__3_3 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 5357 "parse_tree.modules.c"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__3_3));
#line 5359 "parse_tree.modules.c"
    return parse_tree__modules__wrapper_arg_3;
#line 5361 "parse_tree.modules.c"
  }
#line 5363 "parse_tree.modules.c"
}

#line 848 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_93_95_48_16_p_0(
#line 848 "modules.m"
  MR_Word parse_tree__modules__Globals_17,
#line 848 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_18,
#line 848 "modules.m"
  MR_Word parse_tree__modules__NeedQual_19,
#line 848 "modules.m"
  MR_Word parse_tree__modules__Imports_20,
#line 848 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_21,
#line 848 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_22,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_33,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37)
#line 848 "modules.m"
{
#line 881 "modules.m"
  while (MR_TRUE)
#line 881 "modules.m"
    {
#line 881 "modules.m"
      /* tailcall optimized into a loop */
#line 881 "modules.m"
      {
#line 881 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 881 "modules.m"
        MR_Word parse_tree__modules__FirstImport_29;
#line 881 "modules.m"
        MR_Word parse_tree__modules__LaterImports_30;
#line 860 "modules.m"
        MR_Box parse_tree__modules__conv2_FirstImport_29;

#line 860 "modules.m"
        {
#line 860 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv2_FirstImport_29, parse_tree__modules__Imports_20, &parse_tree__modules__LaterImports_30);
        }
#line 860 "modules.m"
        if (parse_tree__modules__succeeded)
#line 860 "modules.m"
          {
#line 860 "modules.m"
            parse_tree__modules__FirstImport_29 = ((MR_Word) parse_tree__modules__conv2_FirstImport_29);
#line 860 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 860 "modules.m"
          }
#line 881 "modules.m"
        if (parse_tree__modules__succeeded)
#line 861 "modules.m"
          {
#line 861 "modules.m"
            MR_Word parse_tree__modules__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43;
#line 861 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44;
#line 861 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45;
#line 861 "modules.m"
            MR_String parse_tree__modules__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 861 "modules.m"
            MR_String parse_tree__modules__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 864 "modules.m"
            {
#line 864 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__FirstImport_29, parse_tree__modules__ModuleName_31);
            }
#line 865 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 865 "modules.m"
              {
#line 865 "modules.m"
                {
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 865 "modules.m"
                  MR_String parse_tree__modules__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 865 "modules.m"
                  MR_String parse_tree__modules__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 865 "modules.m"
                  {
#line 865 "modules.m"
                    parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_42_42);
                  }
#line 865 "modules.m"
                }
#line 865 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 865 "modules.m"
                  {
#line 866 "modules.m"
                    {
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 866 "modules.m"
                      MR_String parse_tree__modules__V_103_103 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 866 "modules.m"
                      MR_String parse_tree__modules__V_128_128 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 866 "modules.m"
                      {
#line 866 "modules.m"
                        parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_41_41);
                      }
#line 866 "modules.m"
                    }
#line 865 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 867 "modules.m"
                      {
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 867 "modules.m"
                        MR_String parse_tree__modules__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 867 "modules.m"
                        MR_String parse_tree__modules__V_154_154 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 867 "modules.m"
                        {
#line 867 "modules.m"
                          parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_40_40);
                        }
#line 867 "modules.m"
                      }
#line 865 "modules.m"
                  }
#line 865 "modules.m"
              }
#line 871 "modules.m"
            if (parse_tree__modules__succeeded)
#line 870 "modules.m"
              {
#line 870 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36;
#line 870 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34;
#line 870 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32;
#line 870 "modules.m"
              }
#line 871 "modules.m"
            else
#line 872 "modules.m"
              {
#line 872 "modules.m"
                parse_tree__modules__process_module_long_interface_16_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, parse_tree__modules__Globals_17, parse_tree__modules__HaveReadModuleMaps_18, parse_tree__modules__NeedQual_19, parse_tree__modules__FirstImport_29, parse_tree__modules__IntFileKind_21, parse_tree__modules__NewIntSection_22, (MR_Word) &parse_tree__modules_scalar_common_2[10], (MR_Word) &parse_tree__modules_scalar_common_2[11], parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32, &parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45);
              }
#line 877 "modules.m"
            /* direct tailcall eliminated */
#line 877 "modules.m"
            {
#line 877 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_20 = parse_tree__modules__LaterImports_30;
#line 877 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_32 = parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43;
#line 877 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_34 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44;
#line 877 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_36 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45;

#line 877 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_36;
#line 877 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_34;
#line 877 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_32;
#line 877 "modules.m"
              parse_tree__modules__Imports_20 = parse_tree__modules__Imports__tmp_copy_20;
#line 877 "modules.m"
            }
#line 877 "modules.m"
            continue;
#line 861 "modules.m"
          }
#line 881 "modules.m"
        else
#line 882 "modules.m"
          {
#line 882 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36;
#line 882 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34;
#line 882 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_33 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32;
#line 882 "modules.m"
          }
#line 881 "modules.m"
      }
#line 881 "modules.m"
      break;
#line 881 "modules.m"
    }
#line 848 "modules.m"
}

#line 994 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_56_95_95_91_54_93_95_48_13_p_0(
#line 994 "modules.m"
  MR_Word parse_tree__modules__V_40_40,
#line 994 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 994 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 994 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 994 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 994 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 994 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 994 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 994 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28)
#line 994 "modules.m"
{
#line 1003 "modules.m"
  while (MR_TRUE)
#line 1003 "modules.m"
    {
#line 1003 "modules.m"
      /* tailcall optimized into a loop */
#line 1003 "modules.m"
      {
#line 1003 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 1003 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1003 "modules.m"
        MR_Word parse_tree__modules__IndirectImports_24;
#line 1003 "modules.m"
        MR_Word parse_tree__modules__V_31_31;
#line 1003 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1003 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 1006 "modules.m"
        {
#line 1006 "modules.m"
          parse_tree__modules__V_31_31 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_39_39);
        }
#line 1004 "modules.m"
        {
#line 1004 "modules.m"
          parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_53_95_95_91_54_93_95_48_15_p_0(parse_tree__modules__V_40_40, parse_tree__modules__Globals_14, parse_tree__modules__HaveReadModuleMaps_15, parse_tree__modules__Imports_16, parse_tree__modules__IntFileKind_17, parse_tree__modules__V_31_31, &parse_tree__modules__IndirectImports_24, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33);
        }
#line 1008 "modules.m"
        {
#line 1008 "modules.m"
          parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_39_39, parse_tree__modules__IndirectImports_24);
        }
#line 1010 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1009 "modules.m"
          {
#line 1009 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;
#line 1009 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1009 "modules.m"
          }
#line 1010 "modules.m"
        else
#line 1011 "modules.m"
          {
#line 1011 "modules.m"
            /* direct tailcall eliminated */
#line 1011 "modules.m"
            {
#line 1011 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_16 = parse_tree__modules__IndirectImports_24;
#line 1011 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1011 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 1011 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27;
#line 1011 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25;
#line 1011 "modules.m"
              parse_tree__modules__Imports_16 = parse_tree__modules__Imports__tmp_copy_16;
#line 1011 "modules.m"
            }
#line 1011 "modules.m"
            continue;
#line 1011 "modules.m"
          }
#line 1003 "modules.m"
      }
#line 1003 "modules.m"
      break;
#line 1003 "modules.m"
    }
#line 994 "modules.m"
}

#line 1282 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_3_p_0(
#line 1282 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1282 "modules.m"
{
#line 1282 "modules.m"
  {
#line 1282 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1282 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 1282 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 1282 "modules.m"
    {
#line 1282 "modules.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__modules__HeadVar__1_1, (MR_Word) parse_tree__modules__Cast_HeadVar1_4, (MR_Word) parse_tree__modules__Cast_HeadVar2_5);
#line 1282 "modules.m"
      return;
    }
#line 1282 "modules.m"
  }
#line 1282 "modules.m"
}

#line 1282 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_2_p_0(
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1282 "modules.m"
{
#line 1282 "modules.m"
  {
#line 1282 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1282 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 1282 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 1282 "modules.m"
    {
#line 1282 "modules.m"
      return parse_tree__modules__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__modules__Cast_HeadVar1_3, (MR_Word) parse_tree__modules__Cast_HeadVar2_4);
    }
#line 1282 "modules.m"
    return parse_tree__modules__succeeded;
#line 1282 "modules.m"
  }
#line 1282 "modules.m"
}

#line 720 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_97_112_112_101_110_100_101_114_95_49_95_95_91_49_93_95_48_3_p_0(
#line 720 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 720 "modules.m"
{
#line 720 "modules.m"
  {
#line 720 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 720 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 720 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 720 "modules.m"
    {
#line 720 "modules.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__modules__HeadVar__1_1, (MR_Word) parse_tree__modules__Cast_HeadVar1_4, (MR_Word) parse_tree__modules__Cast_HeadVar2_5);
#line 720 "modules.m"
      return;
    }
#line 720 "modules.m"
  }
#line 720 "modules.m"
}

#line 720 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_97_112_112_101_110_100_101_114_95_49_95_95_91_49_93_95_48_2_p_0(
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 720 "modules.m"
{
#line 720 "modules.m"
  {
#line 720 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 720 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 720 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 720 "modules.m"
    {
#line 720 "modules.m"
      return parse_tree__modules__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__modules__Cast_HeadVar1_3, (MR_Word) parse_tree__modules__Cast_HeadVar2_4);
    }
#line 720 "modules.m"
    return parse_tree__modules__succeeded;
#line 720 "modules.m"
  }
#line 720 "modules.m"
}

#line 717 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_105_110_116_95_115_101_99_116_105_111_110_95_109_97_107_101_114_95_49_95_95_91_49_93_95_48_3_p_0(
#line 717 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 717 "modules.m"
{
#line 717 "modules.m"
  {
#line 717 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 717 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 717 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 717 "modules.m"
    {
#line 717 "modules.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__modules__HeadVar__1_1, (MR_Word) parse_tree__modules__Cast_HeadVar1_4, (MR_Word) parse_tree__modules__Cast_HeadVar2_5);
#line 717 "modules.m"
      return;
    }
#line 717 "modules.m"
  }
#line 717 "modules.m"
}

#line 717 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_105_110_116_95_115_101_99_116_105_111_110_95_109_97_107_101_114_95_49_95_95_91_49_93_95_48_2_p_0(
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 717 "modules.m"
{
#line 717 "modules.m"
  {
#line 717 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 717 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 717 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 717 "modules.m"
    {
#line 717 "modules.m"
      return parse_tree__modules__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__modules__Cast_HeadVar1_3, (MR_Word) parse_tree__modules__Cast_HeadVar2_4);
    }
#line 717 "modules.m"
    return parse_tree__modules__succeeded;
#line 717 "modules.m"
  }
#line 717 "modules.m"
}

#line 1716 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_111_112_116_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0(
#line 1716 "modules.m"
  MR_Word parse_tree__modules__FileType_11,
#line 1716 "modules.m"
  MR_String parse_tree__modules__FileName_12,
#line 1716 "modules.m"
  MR_Word parse_tree__modules__ModuleSpecs_13,
#line 1716 "modules.m"
  MR_Word parse_tree__modules__ModuleErrors_14,
#line 1716 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_22,
#line 1716 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_23,
#line 1716 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Error_0_24,
#line 1716 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Error_25)
#line 1716 "modules.m"
{
#line 1728 "modules.m"
  {
#line 1728 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1722 "modules.m"
    {
#line 1722 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__modules__ModuleErrors_14);
    }
#line 1728 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1727 "modules.m"
      {
#line 1727 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_Error_25 = parse_tree__modules__STATE_VARIABLE_Error_0_24;
#line 1727 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_Specs_23 = parse_tree__modules__STATE_VARIABLE_Specs_0_22;
#line 1727 "modules.m"
      }
#line 1728 "modules.m"
    else
#line 1756 "modules.m"
      {
#line 1728 "modules.m"
        {
#line 1728 "modules.m"
          parse_tree__modules__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__modules__ModuleErrors_14, ((MR_Box) ((MR_Integer) 0)));
        }
#line 1756 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1745 "modules.m"
          {
#line 1745 "modules.m"
            MR_Word parse_tree__modules__WarningOption_17;
#line 1745 "modules.m"
            MR_Word parse_tree__modules__Severity_18;
#line 1745 "modules.m"
            MR_Word parse_tree__modules__Pieces_19;
#line 1745 "modules.m"
            MR_Word parse_tree__modules__Msg_20;
#line 1745 "modules.m"
            MR_Word parse_tree__modules__Spec_21;
#line 1745 "modules.m"
            MR_Word parse_tree__modules__V_30_30;
#line 1745 "modules.m"
            MR_Word parse_tree__modules__V_32_32;
#line 1745 "modules.m"
            MR_Word parse_tree__modules__V_33_33;
#line 1745 "modules.m"
            MR_Word parse_tree__modules__V_34_34;
#line 1745 "modules.m"
            MR_Word parse_tree__modules__V_37_37;
#line 1745 "modules.m"
            MR_Word parse_tree__modules__V_38_38;
#line 1745 "modules.m"
            MR_Word parse_tree__modules__V_51_51;

#line 1742 "modules.m"
#line 1742 "modules.m"
            switch (parse_tree__modules__FileType_11) {
#line 1742 "modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1742 "modules.m"
              case (MR_Integer) 0:
#line 1741 "modules.m"
                parse_tree__modules__WarningOption_17 = (MR_Integer) 12;
#line 1742 "modules.m"
                break;
#line 1742 "modules.m"
              case (MR_Integer) 1:
#line 1744 "modules.m"
                parse_tree__modules__WarningOption_17 = (MR_Integer) 13;
#line 1742 "modules.m"
                break;
#line 1742 "modules.m"
            }
#line 1747 "modules.m"
            {
#line 1747 "modules.m"
              parse_tree__modules__Severity_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1747 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__Severity_18, 0) = ((MR_Box) (parse_tree__modules__WarningOption_17));
#line 1747 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__Severity_18, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1747 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__Severity_18, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1747 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__Severity_18, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1747 "modules.m"
            }
#line 1749 "modules.m"
            {
#line 1749 "modules.m"
              parse_tree__modules__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1749 "modules.m"
              MR_hl_field(MR_mktag(3), parse_tree__modules__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1749 "modules.m"
              MR_hl_field(MR_mktag(3), parse_tree__modules__V_38_38, 1) = ((MR_Box) (parse_tree__modules__FileName_12));
#line 1749 "modules.m"
            }
#line 1749 "modules.m"
            {
#line 1749 "modules.m"
              parse_tree__modules__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1749 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_37_37, 0) = ((MR_Box) (parse_tree__modules__V_38_38));
#line 1749 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[36])));
#line 1749 "modules.m"
            }
#line 1749 "modules.m"
            {
#line 1749 "modules.m"
              parse_tree__modules__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1749 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[60])));
#line 1749 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_34_34, 1) = ((MR_Box) (parse_tree__modules__V_37_37));
#line 1749 "modules.m"
            }
#line 1749 "modules.m"
            {
#line 1749 "modules.m"
              parse_tree__modules__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1749 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_33_33, 0) = ((MR_Box) (parse_tree__modules__V_34_34));
#line 1749 "modules.m"
            }
#line 1750 "modules.m"
            {
#line 1750 "modules.m"
              parse_tree__modules__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1750 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_32_32, 0) = ((MR_Box) (parse_tree__modules__V_33_33));
#line 1750 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1750 "modules.m"
            }
#line 1748 "modules.m"
            {
#line 1748 "modules.m"
              parse_tree__modules__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1748 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_30_30, 0) = ((MR_Box) ((parse_tree__modules__WarningOption_17 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 1748 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_30_30, 1) = ((MR_Box) (parse_tree__modules__V_32_32));
#line 1748 "modules.m"
            }
#line 1750 "modules.m"
            {
#line 1750 "modules.m"
              parse_tree__modules__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1750 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__Pieces_19, 0) = ((MR_Box) (parse_tree__modules__V_30_30));
#line 1750 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__Pieces_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1750 "modules.m"
            }
#line 1751 "modules.m"
            {
#line 1751 "modules.m"
              parse_tree__modules__Msg_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1751 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__Msg_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1751 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__Msg_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1751 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__Msg_20, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1751 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__Msg_20, 3) = ((MR_Box) (parse_tree__modules__Pieces_19));
#line 1751 "modules.m"
            }
#line 1752 "modules.m"
            {
#line 1752 "modules.m"
              parse_tree__modules__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1752 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_51_51, 0) = ((MR_Box) (parse_tree__modules__Msg_20));
#line 1752 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1752 "modules.m"
            }
#line 1752 "modules.m"
            {
#line 1752 "modules.m"
              parse_tree__modules__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1752 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_21, 0) = ((MR_Box) (parse_tree__modules__Severity_18));
#line 1752 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1752 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_21, 2) = ((MR_Box) (parse_tree__modules__V_51_51));
#line 1752 "modules.m"
            }
#line 1753 "modules.m"
            {
#line 1753 "modules.m"
              MR_Word base;
#line 1753 "modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1753 "modules.m"
              *parse_tree__modules__STATE_VARIABLE_Specs_23 = base;
#line 1753 "modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_21));
#line 1753 "modules.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_22));
#line 1753 "modules.m"
            }
#line 1745 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_Error_25 = parse_tree__modules__STATE_VARIABLE_Error_0_24;
#line 1745 "modules.m"
          }
#line 1756 "modules.m"
        else
#line 1759 "modules.m"
          {
#line 1759 "modules.m"
            {
#line 1759 "modules.m"
              *parse_tree__modules__STATE_VARIABLE_Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__modules__ModuleSpecs_13, parse_tree__modules__STATE_VARIABLE_Specs_0_22);
            }
#line 1760 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_Error_25 = (MR_Integer) 1;
#line 1759 "modules.m"
          }
#line 1756 "modules.m"
      }
#line 1728 "modules.m"
  }
#line 1716 "modules.m"
}

#line 1543 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_111_110_108_121_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(
#line 1543 "modules.m"
  MR_Word parse_tree__modules__UnusedArgs_1,
#line 1543 "modules.m"
  MR_Word parse_tree__modules__StructureReuse_2,
#line 1543 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3,
#line 1543 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__4_4)
#line 1543 "modules.m"
{
#line 1546 "modules.m"
  {
#line 1546 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1546 "modules.m"
    if ((parse_tree__modules__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1546 "modules.m"
      *parse_tree__modules__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1546 "modules.m"
    else
#line 1548 "modules.m"
      {
#line 1548 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1548 "modules.m"
        MR_Word parse_tree__modules__ItemBlock0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 0)));
#line 1548 "modules.m"
        MR_Word parse_tree__modules__ItemBlocks0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 1)));
#line 1548 "modules.m"
        MR_Word parse_tree__modules__ItemBlock_11;
#line 1548 "modules.m"
        MR_Word parse_tree__modules__ItemBlocks_12;
#line 1548 "modules.m"
        MR_Box parse_tree__modules__Section_13 = (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock0_9, (MR_Integer) 0));
#line 1548 "modules.m"
        MR_Word parse_tree__modules__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock0_9, (MR_Integer) 1)));
#line 1548 "modules.m"
        MR_Word parse_tree__modules__Items0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock0_9, (MR_Integer) 4)));
#line 1548 "modules.m"
        MR_Word parse_tree__modules__ItemCord_20;
#line 1548 "modules.m"
        MR_Word parse_tree__modules__Items_21;
#line 1548 "modules.m"
        MR_Word parse_tree__modules__V_22_22;
#line 1549 "modules.m"
        MR_Word parse_tree__modules___Incls0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock0_9, (MR_Integer) 2)));
#line 1549 "modules.m"
        MR_Word parse_tree__modules___Imports0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock0_9, (MR_Integer) 3)));

#line 1553 "modules.m"
        {
#line 1553 "modules.m"
          parse_tree__modules__V_22_22 = mercury__cord__init_0_f_0(parse_tree__modules__TypeCtorInfo_24_24);
        }
#line 1552 "modules.m"
        {
#line 1552 "modules.m"
          parse_tree__modules__keep_only_unused_and_reuse_pragmas_acc_5_p_0(parse_tree__modules__UnusedArgs_1, parse_tree__modules__StructureReuse_2, parse_tree__modules__Items0_17, parse_tree__modules__V_22_22, &parse_tree__modules__ItemCord_20);
        }
#line 1554 "modules.m"
        {
#line 1554 "modules.m"
          parse_tree__modules__Items_21 = mercury__cord__list_1_f_0(parse_tree__modules__TypeCtorInfo_24_24, parse_tree__modules__ItemCord_20);
        }
#line 1555 "modules.m"
        {
#line 1555 "modules.m"
          parse_tree__modules__ItemBlock_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1555 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_11, 0) = parse_tree__modules__Section_13;
#line 1555 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_11, 1) = ((MR_Box) (parse_tree__modules__Context_14));
#line 1555 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1555 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_11, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1555 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_11, 4) = ((MR_Box) (parse_tree__modules__Items_21));
#line 1555 "modules.m"
        }
#line 1556 "modules.m"
        {
#line 1556 "modules.m"
          parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_111_110_108_121_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(parse_tree__modules__UnusedArgs_1, parse_tree__modules__StructureReuse_2, parse_tree__modules__ItemBlocks0_10, &parse_tree__modules__ItemBlocks_12);
        }
#line 1548 "modules.m"
        {
#line 1548 "modules.m"
          MR_Word base;
#line 1548 "modules.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "modules.m"
          *parse_tree__modules__HeadVar__4_4 = base;
#line 1548 "modules.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__ItemBlock_11));
#line 1548 "modules.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__ItemBlocks_12));
#line 1548 "modules.m"
        }
#line 1548 "modules.m"
      }
#line 1546 "modules.m"
  }
#line 1543 "modules.m"
}

#line 1164 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(
#line 1164 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1164 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2)
#line 1164 "modules.m"
{
#line 1167 "modules.m"
  {
#line 1167 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1167 "modules.m"
    if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1168 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Integer) 1;
#line 1167 "modules.m"
    else
#line 1167 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Integer) 0;
#line 1167 "modules.m"
  }
#line 1164 "modules.m"
}

#line 689 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0_1(
#line 689 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 689 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 689 "modules.m"
{
#line 689 "modules.m"
  {
#line 689 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 689 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 689 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__2_2;

#line 689 "modules.m"
    {
#line 689 "modules.m"
      parse_tree__modules__conv1_HeadVar__2_2 = parse_tree__modules__wrap_symname_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 689 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__2_2));
#line 689 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 689 "modules.m"
  }
#line 689 "modules.m"
}

#line 674 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(
#line 674 "modules.m"
  MR_Word parse_tree__modules__Context_10,
#line 674 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportedModules_0_20,
#line 674 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportedModules_21,
#line 674 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_UsedModules_0_22,
#line 674 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_UsedModules_23,
#line 674 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_24,
#line 674 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_25)
#line 674 "modules.m"
{
#line 681 "modules.m"
  {
#line 681 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 681 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_79_79 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 681 "modules.m"
    MR_Word parse_tree__modules__BothSet_14;

#line 682 "modules.m"
    {
#line 682 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_79_79, parse_tree__modules__STATE_VARIABLE_ImportedModules_0_20, parse_tree__modules__STATE_VARIABLE_UsedModules_0_22, &parse_tree__modules__BothSet_14);
    }
#line 683 "modules.m"
    {
#line 683 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_79_79, parse_tree__modules__BothSet_14);
    }
#line 685 "modules.m"
    if (parse_tree__modules__succeeded)
#line 684 "modules.m"
      {
#line 684 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_Specs_25 = parse_tree__modules__STATE_VARIABLE_Specs_0_24;
#line 684 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_UsedModules_23 = parse_tree__modules__STATE_VARIABLE_UsedModules_0_22;
#line 684 "modules.m"
      }
#line 685 "modules.m"
    else
#line 686 "modules.m"
      {
#line 686 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_80_80;
#line 686 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_81_81;
#line 686 "modules.m"
        MR_Word parse_tree__modules__BothList_15;
#line 686 "modules.m"
        MR_Word parse_tree__modules__Pieces_16;
#line 686 "modules.m"
        MR_Word parse_tree__modules__Msg_17;
#line 686 "modules.m"
        MR_Word parse_tree__modules__Spec_19;
#line 686 "modules.m"
        MR_Word parse_tree__modules__V_26_26;
#line 686 "modules.m"
        MR_Word parse_tree__modules__V_29_29;
#line 686 "modules.m"
        MR_Word parse_tree__modules__V_30_30;
#line 686 "modules.m"
        MR_String parse_tree__modules__V_31_31;
#line 686 "modules.m"
        MR_Word parse_tree__modules__V_35_35;
#line 686 "modules.m"
        MR_Word parse_tree__modules__V_36_36;
#line 686 "modules.m"
        MR_Word parse_tree__modules__V_37_37;
#line 686 "modules.m"
        MR_Word parse_tree__modules__V_39_39;
#line 686 "modules.m"
        MR_Word parse_tree__modules__V_40_40;
#line 686 "modules.m"
        MR_String parse_tree__modules__V_41_41;
#line 686 "modules.m"
        MR_Word parse_tree__modules__V_62_62;
#line 686 "modules.m"
        MR_Word parse_tree__modules__V_63_63;
#line 686 "modules.m"
        MR_Word parse_tree__modules__V_66_66;
#line 686 "modules.m"
        MR_Word parse_tree__modules__V_67_67;
#line 686 "modules.m"
        MR_Word parse_tree__modules__V_75_75;
#line 688 "modules.m"
        MR_Box parse_tree__modules__conv0_V_31_31;
#line 690 "modules.m"
        MR_Box parse_tree__modules__conv2_V_41_41;

#line 686 "modules.m"
        {
#line 686 "modules.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__modules__TypeCtorInfo_79_79, parse_tree__modules__BothSet_14, &parse_tree__modules__BothList_15);
        }
#line 6588 "parse_tree.modules.c"
        parse_tree__modules__TypeCtorInfo_80_80 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 6590 "parse_tree.modules.c"
        parse_tree__modules__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 688 "modules.m"
        {
#line 688 "modules.m"
          parse_tree__modules__conv0_V_31_31 = parse_tree__error_util__choose_number_3_f_0(parse_tree__modules__TypeCtorInfo_79_79, parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__BothList_15, ((MR_Box) ((MR_String) "module")), ((MR_Box) ((MR_String) "modules")));
        }
#line 688 "modules.m"
        parse_tree__modules__V_31_31 = ((MR_String) parse_tree__modules__conv0_V_31_31);
#line 688 "modules.m"
        {
#line 688 "modules.m"
          parse_tree__modules__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 688 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_30_30, 1) = ((MR_Box) (parse_tree__modules__V_31_31));
#line 688 "modules.m"
        }
#line 688 "modules.m"
        {
#line 688 "modules.m"
          parse_tree__modules__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_29_29, 0) = ((MR_Box) (parse_tree__modules__V_30_30));
#line 688 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 688 "modules.m"
        }
#line 687 "modules.m"
        {
#line 687 "modules.m"
          parse_tree__modules__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[59])));
#line 687 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_26_26, 1) = ((MR_Box) (parse_tree__modules__V_29_29));
#line 687 "modules.m"
        }
#line 689 "modules.m"
        {
#line 689 "modules.m"
          parse_tree__modules__V_37_37 = mercury__list__map_2_f_0(parse_tree__modules__TypeCtorInfo_79_79, parse_tree__modules__TypeCtorInfo_80_80, (MR_Word) &parse_tree__modules_scalar_common_2[9], parse_tree__modules__BothList_15);
        }
#line 689 "modules.m"
        {
#line 689 "modules.m"
          parse_tree__modules__V_36_36 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__modules__V_37_37);
        }
#line 690 "modules.m"
        {
#line 690 "modules.m"
          parse_tree__modules__conv2_V_41_41 = parse_tree__error_util__choose_number_3_f_0(parse_tree__modules__TypeCtorInfo_79_79, parse_tree__modules__TypeCtorInfo_81_81, parse_tree__modules__BothList_15, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
        }
#line 690 "modules.m"
        parse_tree__modules__V_41_41 = ((MR_String) parse_tree__modules__conv2_V_41_41);
#line 690 "modules.m"
        {
#line 690 "modules.m"
          parse_tree__modules__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 690 "modules.m"
          MR_hl_field(MR_mktag(3), parse_tree__modules__V_40_40, 1) = ((MR_Box) (parse_tree__modules__V_41_41));
#line 690 "modules.m"
        }
#line 690 "modules.m"
        {
#line 690 "modules.m"
          parse_tree__modules__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_39_39, 0) = ((MR_Box) (parse_tree__modules__V_40_40));
#line 690 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[32])));
#line 690 "modules.m"
        }
#line 689 "modules.m"
        {
#line 689 "modules.m"
          parse_tree__modules__V_35_35 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_80_80, parse_tree__modules__V_36_36, parse_tree__modules__V_39_39);
        }
#line 688 "modules.m"
        {
#line 688 "modules.m"
          parse_tree__modules__Pieces_16 = mercury__list__f_43_43_2_f_0(parse_tree__modules__TypeCtorInfo_80_80, parse_tree__modules__V_26_26, parse_tree__modules__V_35_35);
        }
#line 694 "modules.m"
        {
#line 694 "modules.m"
          parse_tree__modules__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 694 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_67_67, 0) = ((MR_Box) (parse_tree__modules__Pieces_16));
#line 694 "modules.m"
        }
#line 694 "modules.m"
        {
#line 694 "modules.m"
          parse_tree__modules__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 0) = ((MR_Box) (parse_tree__modules__V_67_67));
#line 694 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 694 "modules.m"
        }
#line 694 "modules.m"
        {
#line 694 "modules.m"
          parse_tree__modules__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_63_63, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 694 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_63_63, 1) = ((MR_Box) (parse_tree__modules__V_66_66));
#line 694 "modules.m"
        }
#line 694 "modules.m"
        {
#line 694 "modules.m"
          parse_tree__modules__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_62_62, 0) = ((MR_Box) (parse_tree__modules__V_63_63));
#line 694 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 694 "modules.m"
        }
#line 693 "modules.m"
        {
#line 693 "modules.m"
          parse_tree__modules__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 693 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_17, 0) = ((MR_Box) (parse_tree__modules__Context_10));
#line 693 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_17, 1) = ((MR_Box) (parse_tree__modules__V_62_62));
#line 693 "modules.m"
        }
#line 697 "modules.m"
        {
#line 697 "modules.m"
          parse_tree__modules__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 0) = ((MR_Box) (parse_tree__modules__Msg_17));
#line 697 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "modules.m"
        }
#line 697 "modules.m"
        {
#line 697 "modules.m"
          parse_tree__modules__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 697 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[0])));
#line 697 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 697 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_19, 2) = ((MR_Box) (parse_tree__modules__V_75_75));
#line 697 "modules.m"
        }
#line 698 "modules.m"
        {
#line 698 "modules.m"
          MR_Word base;
#line 698 "modules.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Specs_25 = base;
#line 698 "modules.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_19));
#line 698 "modules.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_24));
#line 698 "modules.m"
        }
#line 702 "modules.m"
        {
#line 702 "modules.m"
          mercury__set__difference_3_p_0(parse_tree__modules__TypeCtorInfo_79_79, parse_tree__modules__STATE_VARIABLE_UsedModules_0_22, parse_tree__modules__BothSet_14, parse_tree__modules__STATE_VARIABLE_UsedModules_23);
        }
#line 686 "modules.m"
      }
#line 681 "modules.m"
    *parse_tree__modules__STATE_VARIABLE_ImportedModules_21 = parse_tree__modules__STATE_VARIABLE_ImportedModules_0_20;
#line 681 "modules.m"
  }
#line 674 "modules.m"
}

#line 646 "modules.m"
static void MR_CALL 
parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_12_p_0(
#line 646 "modules.m"
  MR_Word parse_tree__modules__Context_14,
#line 646 "modules.m"
  MR_Word parse_tree__modules__IntImportedModules0_15,
#line 646 "modules.m"
  MR_Word * parse_tree__modules__IntImportedModules_16,
#line 646 "modules.m"
  MR_Word parse_tree__modules__IntUsedModules0_17,
#line 646 "modules.m"
  MR_Word * parse_tree__modules__IntUsedModules_18,
#line 646 "modules.m"
  MR_Word parse_tree__modules__ImpImportedModules0_19,
#line 646 "modules.m"
  MR_Word * parse_tree__modules__ImpImportedModules_20,
#line 646 "modules.m"
  MR_Word parse_tree__modules__ImpUsedModules0_21,
#line 646 "modules.m"
  MR_Word * parse_tree__modules__ImpUsedModules_22,
#line 646 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_26,
#line 646 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_27)
#line 646 "modules.m"
{
#line 657 "modules.m"
  {
#line 657 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 657 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules1_24;
#line 657 "modules.m"
    MR_Word parse_tree__modules__ImpUsedModules1_25;
#line 657 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_28_28;
#line 657 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_29_29;

#line 659 "modules.m"
    {
#line 659 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__Context_14, parse_tree__modules__IntImportedModules0_15, &parse_tree__modules__IntImportedModules1_24, parse_tree__modules__IntUsedModules0_17, parse_tree__modules__IntUsedModules_18, parse_tree__modules__STATE_VARIABLE_Specs_0_26, &parse_tree__modules__STATE_VARIABLE_Specs_28_28);
    }
#line 662 "modules.m"
    {
#line 662 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__Context_14, parse_tree__modules__IntImportedModules1_24, parse_tree__modules__IntImportedModules_16, parse_tree__modules__ImpUsedModules0_21, &parse_tree__modules__ImpUsedModules1_25, parse_tree__modules__STATE_VARIABLE_Specs_28_28, &parse_tree__modules__STATE_VARIABLE_Specs_29_29);
    }
#line 666 "modules.m"
    {
#line 666 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_8_p_0(parse_tree__modules__Context_14, parse_tree__modules__ImpImportedModules0_19, parse_tree__modules__ImpImportedModules_20, parse_tree__modules__ImpUsedModules1_25, parse_tree__modules__ImpUsedModules_22, parse_tree__modules__STATE_VARIABLE_Specs_29_29, parse_tree__modules__STATE_VARIABLE_Specs_27);
#line 666 "modules.m"
      return;
    }
#line 657 "modules.m"
  }
#line 646 "modules.m"
}

#line 1069 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interface__ho22_15_p_0(
#line 1069 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__Import_18,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_52,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56)
#line 1069 "modules.m"
{
#line 1080 "modules.m"
  {
#line 1080 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_167_167;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ReturnTimestamp_27;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestamp_29;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntParseTree_30;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntSpecs_31;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntError_32;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntModuleName_33;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntKind_34;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntContext_35;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__MaybeVersionNumbers_36;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntIncls_37;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpIncls_38;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntAvails_39;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpAvails_40;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntItems_41;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpItems_42;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__IntImports1_43;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__IntUses1_44;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ImpImports1_45;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ImpUses1_46;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntItemBlocks_47;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__Statistics_48;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ModIndirectImports0_49;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ModIndirectImports_50;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 24)));
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_60_60;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_67_67;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_68_68;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_70_70;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_71_71;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_72_72;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_75_75;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_76_76;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_77_77;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80;
#line 1081 "modules.m"
    MR_String parse_tree__modules__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 0)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 1)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 2)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 3)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 4)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 5)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 6)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 7)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 8)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 9)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 10)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 11)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 12)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 13)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 14)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 15)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 16)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 17)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 18)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 19)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 20)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 21)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 22)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 23)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 25)));
#line 1081 "modules.m"
    MR_String parse_tree__modules__V_109_109 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 26)));
#line 1083 "modules.m"
    MR_Word parse_tree__modules__V_110_110;
#line 1083 "modules.m"
    MR_Word parse_tree__modules__V_111_111;
#line 1083 "modules.m"
    MR_String parse_tree__modules___ImportFileName_28;
#line 1120 "modules.m"
    MR_String parse_tree__modules__V_112_112;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_113_113;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_114_114;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_115_115;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_116_116;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_117_117;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_118_118;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_119_119;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_120_120;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_121_121;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_122_122;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_123_123;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_124_124;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_125_125;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_126_126;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_127_127;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_128_128;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_129_129;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_130_130;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_131_131;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_132_132;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_133_133;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_134_134;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_135_135;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_136_136;
#line 1120 "modules.m"
    MR_String parse_tree__modules__V_137_137;
#line 1122 "modules.m"
    MR_String parse_tree__modules__V_138_138;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_139_139;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_140_140;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_141_141;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_142_142;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_143_143;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_144_144;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_146_146;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_147_147;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_148_148;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_149_149;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_150_150;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_151_151;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_152_152;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_153_153;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_154_154;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_155_155;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_156_156;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_157_157;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_158_158;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_159_159;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_160_160;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_161_161;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_162_162;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_163_163;
#line 1122 "modules.m"
    MR_String parse_tree__modules__V_164_164;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_145_145;

#line 1081 "modules.m"
    {
#line 1081 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_59_59, &parse_tree__modules__ReturnTimestamp_27);
    }
#line 1083 "modules.m"
    parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 0)));
#line 1083 "modules.m"
    parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 1)));
#line 1083 "modules.m"
    parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 2)));
#line 1083 "modules.m"
    {
#line 1083 "modules.m"
      parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_16, parse_tree__modules__V_60_60, (MR_String) "Reading short interface for module", (MR_Integer) 0, parse_tree__modules__Import_18, parse_tree__modules__IntFileKind_19, &parse_tree__modules___ImportFileName_28, parse_tree__modules__ReturnTimestamp_27, &parse_tree__modules__MaybeTimestamp_29, &parse_tree__modules__ShortIntParseTree_30, &parse_tree__modules__ShortIntSpecs_31, &parse_tree__modules__ShortIntError_32);
    }
#line 1088 "modules.m"
    {
#line 1088 "modules.m"
      parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Import_18, parse_tree__modules__IntFileKind_19, (MR_Integer) 0, parse_tree__modules__MaybeTimestamp_29, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65);
    }
#line 1091 "modules.m"
    parse_tree__modules__ShortIntModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 0)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntKind_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 1)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 2)));
#line 1091 "modules.m"
    parse_tree__modules__MaybeVersionNumbers_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 3)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntIntIncls_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 4)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntImpIncls_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 5)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntIntAvails_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 6)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntImpAvails_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 7)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntIntItems_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 8)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntImpItems_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 9)));
#line 1096 "modules.m"
    {
#line 1096 "modules.m"
      parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(parse_tree__modules__ShortIntModuleName_33, parse_tree__modules__MaybeVersionNumbers_36, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66);
    }
#line 1098 "modules.m"
    {
#line 1098 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__ShortIntIntAvails_39, &parse_tree__modules__IntImports1_43, &parse_tree__modules__IntUses1_44);
    }
#line 1099 "modules.m"
    {
#line 1099 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__ShortIntImpAvails_40, &parse_tree__modules__ImpImports1_45, &parse_tree__modules__ImpUses1_46);
    }
#line 1101 "modules.m"
    {
#line 1101 "modules.m"
      parse_tree__modules__V_67_67 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(parse_tree__modules__Import_18, parse_tree__modules__ShortIntKind_34);
    }
#line 1102 "modules.m"
    {
#line 1102 "modules.m"
      parse_tree__modules__V_68_68 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(parse_tree__modules__Import_18, parse_tree__modules__ShortIntKind_34);
    }
#line 1100 "modules.m"
    {
#line 1100 "modules.m"
      parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0, parse_tree__modules__ShortIntContext_35, ((MR_Box) (parse_tree__modules__V_67_67)), ((MR_Box) (parse_tree__modules__V_68_68)), parse_tree__modules__ShortIntIntIncls_37, parse_tree__modules__ShortIntImpIncls_38, parse_tree__modules__ShortIntIntAvails_39, parse_tree__modules__ShortIntImpAvails_40, parse_tree__modules__ShortIntIntItems_41, parse_tree__modules__ShortIntImpItems_42, &parse_tree__modules__ShortIntItemBlocks_47);
    }
#line 7177 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_167_167 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1109 "modules.m"
    {
#line 1109 "modules.m"
      parse_tree__modules__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 0) = ((MR_Box) (parse_tree__modules__IntUses1_44));
#line 1109 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1109 "modules.m"
    }
#line 1109 "modules.m"
    {
#line 1109 "modules.m"
      parse_tree__modules__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 0) = ((MR_Box) (parse_tree__modules__IntImports1_43));
#line 1109 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 1) = ((MR_Box) (parse_tree__modules__V_72_72));
#line 1109 "modules.m"
    }
#line 1108 "modules.m"
    {
#line 1108 "modules.m"
      parse_tree__modules__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_70_70, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51));
#line 1108 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_70_70, 1) = ((MR_Box) (parse_tree__modules__V_71_71));
#line 1108 "modules.m"
    }
#line 1108 "modules.m"
    {
#line 1108 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_IndirectImports_52 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_167_167, parse_tree__modules__V_70_70);
    }
#line 1111 "modules.m"
    {
#line 1111 "modules.m"
      parse_tree__modules__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 0) = ((MR_Box) (parse_tree__modules__ImpUses1_46));
#line 1111 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1111 "modules.m"
    }
#line 1111 "modules.m"
    {
#line 1111 "modules.m"
      parse_tree__modules__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 0) = ((MR_Box) (parse_tree__modules__ImpImports1_45));
#line 1111 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 1) = ((MR_Box) (parse_tree__modules__V_77_77));
#line 1111 "modules.m"
    }
#line 1110 "modules.m"
    {
#line 1110 "modules.m"
      parse_tree__modules__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53));
#line 1110 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 1) = ((MR_Box) (parse_tree__modules__V_76_76));
#line 1110 "modules.m"
    }
#line 1110 "modules.m"
    {
#line 1110 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_167_167, parse_tree__modules__V_75_75);
    }
#line 1113 "modules.m"
    {
#line 1113 "modules.m"
      parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(parse_tree__modules__ShortIntItemBlocks_47, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79);
    }
#line 1114 "modules.m"
    {
#line 1114 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(parse_tree__modules__ShortIntSpecs_31, parse_tree__modules__ShortIntError_32, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80);
    }
#line 1117 "modules.m"
    {
#line 1117 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_16, (MR_Integer) 56, &parse_tree__modules__Statistics_48);
    }
#line 1118 "modules.m"
    {
#line 1118 "modules.m"
      libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_48);
    }
#line 1120 "modules.m"
    parse_tree__modules__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 0)));
#line 1120 "modules.m"
    parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 1)));
#line 1120 "modules.m"
    parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 2)));
#line 1120 "modules.m"
    parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 3)));
#line 1120 "modules.m"
    parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 4)));
#line 1120 "modules.m"
    parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 5)));
#line 1120 "modules.m"
    parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 6)));
#line 1120 "modules.m"
    parse_tree__modules__ModIndirectImports0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 7)));
#line 1120 "modules.m"
    parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 8)));
#line 1120 "modules.m"
    parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 9)));
#line 1120 "modules.m"
    parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 10)));
#line 1120 "modules.m"
    parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 11)));
#line 1120 "modules.m"
    parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 12)));
#line 1120 "modules.m"
    parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 13)));
#line 1120 "modules.m"
    parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 14)));
#line 1120 "modules.m"
    parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 15)));
#line 1120 "modules.m"
    parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 16)));
#line 1120 "modules.m"
    parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 17)));
#line 1120 "modules.m"
    parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 18)));
#line 1120 "modules.m"
    parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 19)));
#line 1120 "modules.m"
    parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 20)));
#line 1120 "modules.m"
    parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 21)));
#line 1120 "modules.m"
    parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 22)));
#line 1120 "modules.m"
    parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 23)));
#line 1120 "modules.m"
    parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 24)));
#line 1120 "modules.m"
    parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 25)));
#line 1120 "modules.m"
    parse_tree__modules__V_137_137 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 26)));
#line 1121 "modules.m"
    {
#line 1121 "modules.m"
      mercury__set__insert_3_p_0(parse_tree__modules__TypeCtorInfo_167_167, ((MR_Box) (parse_tree__modules__Import_18)), parse_tree__modules__ModIndirectImports0_49, &parse_tree__modules__ModIndirectImports_50);
    }
#line 1122 "modules.m"
    parse_tree__modules__V_138_138 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 0)));
#line 1122 "modules.m"
    parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 1)));
#line 1122 "modules.m"
    parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 2)));
#line 1122 "modules.m"
    parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 3)));
#line 1122 "modules.m"
    parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 4)));
#line 1122 "modules.m"
    parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 5)));
#line 1122 "modules.m"
    parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 6)));
#line 1122 "modules.m"
    parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 7)));
#line 1122 "modules.m"
    parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 8)));
#line 1122 "modules.m"
    parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 9)));
#line 1122 "modules.m"
    parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 10)));
#line 1122 "modules.m"
    parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 11)));
#line 1122 "modules.m"
    parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 12)));
#line 1122 "modules.m"
    parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 13)));
#line 1122 "modules.m"
    parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 14)));
#line 1122 "modules.m"
    parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 15)));
#line 1122 "modules.m"
    parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 16)));
#line 1122 "modules.m"
    parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 17)));
#line 1122 "modules.m"
    parse_tree__modules__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 18)));
#line 1122 "modules.m"
    parse_tree__modules__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 19)));
#line 1122 "modules.m"
    parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 20)));
#line 1122 "modules.m"
    parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 21)));
#line 1122 "modules.m"
    parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 22)));
#line 1122 "modules.m"
    parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 23)));
#line 1122 "modules.m"
    parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 24)));
#line 1122 "modules.m"
    parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 25)));
#line 1122 "modules.m"
    parse_tree__modules__V_164_164 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 26)));
#line 1122 "modules.m"
    {
#line 1122 "modules.m"
      MR_Word base;
#line 1122 "modules.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56 = base;
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_138_138));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_139_139));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_140_140));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_141_141));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__V_142_142));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_143_143));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__V_144_144));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__ModIndirectImports_50));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_146_146));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_147_147));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_148_148));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_149_149));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_150_150));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_151_151));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_152_152));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_153_153));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_154_154));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_155_155));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_156_156));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_157_157));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_158_158));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_159_159));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__V_160_160));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__V_161_161));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__V_162_162));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__modules__V_163_163));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_164_164));
#line 1122 "modules.m"
    }
#line 1080 "modules.m"
  }
#line 1069 "modules.m"
}

#line 1069 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interface__ho21_15_p_0(
#line 1069 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__Import_18,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_52,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54,
#line 1069 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55,
#line 1069 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56)
#line 1069 "modules.m"
{
#line 1080 "modules.m"
  {
#line 1080 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_167_167;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ReturnTimestamp_27;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestamp_29;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntParseTree_30;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntSpecs_31;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntError_32;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntModuleName_33;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntKind_34;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntContext_35;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__MaybeVersionNumbers_36;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntIncls_37;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpIncls_38;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntAvails_39;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpAvails_40;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntIntItems_41;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntImpItems_42;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__IntImports1_43;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__IntUses1_44;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ImpImports1_45;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ImpUses1_46;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ShortIntItemBlocks_47;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__Statistics_48;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ModIndirectImports0_49;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__ModIndirectImports_50;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 24)));
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_60_60;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_67_67;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_68_68;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_70_70;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_71_71;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_72_72;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_75_75;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_76_76;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__V_77_77;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79;
#line 1080 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80;
#line 1081 "modules.m"
    MR_String parse_tree__modules__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 0)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 1)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 2)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 3)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 4)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 5)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 6)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 7)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 8)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 9)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 10)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 11)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 12)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 13)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 14)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 15)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 16)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 17)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 18)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 19)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 20)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 21)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 22)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 23)));
#line 1081 "modules.m"
    MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 25)));
#line 1081 "modules.m"
    MR_String parse_tree__modules__V_109_109 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, (MR_Integer) 26)));
#line 1083 "modules.m"
    MR_Word parse_tree__modules__V_110_110;
#line 1083 "modules.m"
    MR_Word parse_tree__modules__V_111_111;
#line 1083 "modules.m"
    MR_String parse_tree__modules___ImportFileName_28;
#line 1120 "modules.m"
    MR_String parse_tree__modules__V_112_112;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_113_113;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_114_114;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_115_115;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_116_116;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_117_117;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_118_118;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_119_119;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_120_120;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_121_121;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_122_122;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_123_123;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_124_124;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_125_125;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_126_126;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_127_127;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_128_128;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_129_129;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_130_130;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_131_131;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_132_132;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_133_133;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_134_134;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_135_135;
#line 1120 "modules.m"
    MR_Word parse_tree__modules__V_136_136;
#line 1120 "modules.m"
    MR_String parse_tree__modules__V_137_137;
#line 1122 "modules.m"
    MR_String parse_tree__modules__V_138_138;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_139_139;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_140_140;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_141_141;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_142_142;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_143_143;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_144_144;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_146_146;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_147_147;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_148_148;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_149_149;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_150_150;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_151_151;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_152_152;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_153_153;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_154_154;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_155_155;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_156_156;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_157_157;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_158_158;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_159_159;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_160_160;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_161_161;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_162_162;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_163_163;
#line 1122 "modules.m"
    MR_String parse_tree__modules__V_164_164;
#line 1122 "modules.m"
    MR_Word parse_tree__modules__V_145_145;

#line 1081 "modules.m"
    {
#line 1081 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_59_59, &parse_tree__modules__ReturnTimestamp_27);
    }
#line 1083 "modules.m"
    parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 0)));
#line 1083 "modules.m"
    parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 1)));
#line 1083 "modules.m"
    parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 2)));
#line 1083 "modules.m"
    {
#line 1083 "modules.m"
      parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_16, parse_tree__modules__V_60_60, (MR_String) "Reading short interface for module", (MR_Integer) 0, parse_tree__modules__Import_18, parse_tree__modules__IntFileKind_19, &parse_tree__modules___ImportFileName_28, parse_tree__modules__ReturnTimestamp_27, &parse_tree__modules__MaybeTimestamp_29, &parse_tree__modules__ShortIntParseTree_30, &parse_tree__modules__ShortIntSpecs_31, &parse_tree__modules__ShortIntError_32);
    }
#line 1088 "modules.m"
    {
#line 1088 "modules.m"
      parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Import_18, parse_tree__modules__IntFileKind_19, (MR_Integer) 0, parse_tree__modules__MaybeTimestamp_29, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_55, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65);
    }
#line 1091 "modules.m"
    parse_tree__modules__ShortIntModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 0)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntKind_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 1)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 2)));
#line 1091 "modules.m"
    parse_tree__modules__MaybeVersionNumbers_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 3)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntIntIncls_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 4)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntImpIncls_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 5)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntIntAvails_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 6)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntImpAvails_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 7)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntIntItems_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 8)));
#line 1091 "modules.m"
    parse_tree__modules__ShortIntImpItems_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ShortIntParseTree_30, (MR_Integer) 9)));
#line 1096 "modules.m"
    {
#line 1096 "modules.m"
      parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(parse_tree__modules__ShortIntModuleName_33, parse_tree__modules__MaybeVersionNumbers_36, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66);
    }
#line 1098 "modules.m"
    {
#line 1098 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__ShortIntIntAvails_39, &parse_tree__modules__IntImports1_43, &parse_tree__modules__IntUses1_44);
    }
#line 1099 "modules.m"
    {
#line 1099 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__ShortIntImpAvails_40, &parse_tree__modules__ImpImports1_45, &parse_tree__modules__ImpUses1_46);
    }
#line 1101 "modules.m"
    {
#line 1101 "modules.m"
      parse_tree__modules__V_67_67 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(parse_tree__modules__Import_18, parse_tree__modules__ShortIntKind_34);
    }
#line 1102 "modules.m"
    {
#line 1102 "modules.m"
      parse_tree__modules__V_68_68 = parse_tree__prog_item__make_ims_abstract_imported_2_f_0(parse_tree__modules__Import_18, parse_tree__modules__ShortIntKind_34);
    }
#line 1100 "modules.m"
    {
#line 1100 "modules.m"
      parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, parse_tree__modules__ShortIntContext_35, ((MR_Box) (parse_tree__modules__V_67_67)), ((MR_Box) (parse_tree__modules__V_68_68)), parse_tree__modules__ShortIntIntIncls_37, parse_tree__modules__ShortIntImpIncls_38, parse_tree__modules__ShortIntIntAvails_39, parse_tree__modules__ShortIntImpAvails_40, parse_tree__modules__ShortIntIntItems_41, parse_tree__modules__ShortIntImpItems_42, &parse_tree__modules__ShortIntItemBlocks_47);
    }
#line 7792 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_167_167 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1109 "modules.m"
    {
#line 1109 "modules.m"
      parse_tree__modules__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 0) = ((MR_Box) (parse_tree__modules__IntUses1_44));
#line 1109 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1109 "modules.m"
    }
#line 1109 "modules.m"
    {
#line 1109 "modules.m"
      parse_tree__modules__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 0) = ((MR_Box) (parse_tree__modules__IntImports1_43));
#line 1109 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 1) = ((MR_Box) (parse_tree__modules__V_72_72));
#line 1109 "modules.m"
    }
#line 1108 "modules.m"
    {
#line 1108 "modules.m"
      parse_tree__modules__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_70_70, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_IndirectImports_0_51));
#line 1108 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_70_70, 1) = ((MR_Box) (parse_tree__modules__V_71_71));
#line 1108 "modules.m"
    }
#line 1108 "modules.m"
    {
#line 1108 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_IndirectImports_52 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_167_167, parse_tree__modules__V_70_70);
    }
#line 1111 "modules.m"
    {
#line 1111 "modules.m"
      parse_tree__modules__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 0) = ((MR_Box) (parse_tree__modules__ImpUses1_46));
#line 1111 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1111 "modules.m"
    }
#line 1111 "modules.m"
    {
#line 1111 "modules.m"
      parse_tree__modules__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 0) = ((MR_Box) (parse_tree__modules__ImpImports1_45));
#line 1111 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 1) = ((MR_Box) (parse_tree__modules__V_77_77));
#line 1111 "modules.m"
    }
#line 1110 "modules.m"
    {
#line 1110 "modules.m"
      parse_tree__modules__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_53));
#line 1110 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_75_75, 1) = ((MR_Box) (parse_tree__modules__V_76_76));
#line 1110 "modules.m"
    }
#line 1110 "modules.m"
    {
#line 1110 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_54 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_167_167, parse_tree__modules__V_75_75);
    }
#line 1113 "modules.m"
    {
#line 1113 "modules.m"
      parse_tree__module_imports__module_and_imports_add_indirect_int_item_blocks_3_p_0(parse_tree__modules__ShortIntItemBlocks_47, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_66_66, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79);
    }
#line 1114 "modules.m"
    {
#line 1114 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(parse_tree__modules__ShortIntSpecs_31, parse_tree__modules__ShortIntError_32, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_79_79, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80);
    }
#line 1117 "modules.m"
    {
#line 1117 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_16, (MR_Integer) 56, &parse_tree__modules__Statistics_48);
    }
#line 1118 "modules.m"
    {
#line 1118 "modules.m"
      libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_48);
    }
#line 1120 "modules.m"
    parse_tree__modules__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 0)));
#line 1120 "modules.m"
    parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 1)));
#line 1120 "modules.m"
    parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 2)));
#line 1120 "modules.m"
    parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 3)));
#line 1120 "modules.m"
    parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 4)));
#line 1120 "modules.m"
    parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 5)));
#line 1120 "modules.m"
    parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 6)));
#line 1120 "modules.m"
    parse_tree__modules__ModIndirectImports0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 7)));
#line 1120 "modules.m"
    parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 8)));
#line 1120 "modules.m"
    parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 9)));
#line 1120 "modules.m"
    parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 10)));
#line 1120 "modules.m"
    parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 11)));
#line 1120 "modules.m"
    parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 12)));
#line 1120 "modules.m"
    parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 13)));
#line 1120 "modules.m"
    parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 14)));
#line 1120 "modules.m"
    parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 15)));
#line 1120 "modules.m"
    parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 16)));
#line 1120 "modules.m"
    parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 17)));
#line 1120 "modules.m"
    parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 18)));
#line 1120 "modules.m"
    parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 19)));
#line 1120 "modules.m"
    parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 20)));
#line 1120 "modules.m"
    parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 21)));
#line 1120 "modules.m"
    parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 22)));
#line 1120 "modules.m"
    parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 23)));
#line 1120 "modules.m"
    parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 24)));
#line 1120 "modules.m"
    parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 25)));
#line 1120 "modules.m"
    parse_tree__modules__V_137_137 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 26)));
#line 1121 "modules.m"
    {
#line 1121 "modules.m"
      mercury__set__insert_3_p_0(parse_tree__modules__TypeCtorInfo_167_167, ((MR_Box) (parse_tree__modules__Import_18)), parse_tree__modules__ModIndirectImports0_49, &parse_tree__modules__ModIndirectImports_50);
    }
#line 1122 "modules.m"
    parse_tree__modules__V_138_138 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 0)));
#line 1122 "modules.m"
    parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 1)));
#line 1122 "modules.m"
    parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 2)));
#line 1122 "modules.m"
    parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 3)));
#line 1122 "modules.m"
    parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 4)));
#line 1122 "modules.m"
    parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 5)));
#line 1122 "modules.m"
    parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 6)));
#line 1122 "modules.m"
    parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 7)));
#line 1122 "modules.m"
    parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 8)));
#line 1122 "modules.m"
    parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 9)));
#line 1122 "modules.m"
    parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 10)));
#line 1122 "modules.m"
    parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 11)));
#line 1122 "modules.m"
    parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 12)));
#line 1122 "modules.m"
    parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 13)));
#line 1122 "modules.m"
    parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 14)));
#line 1122 "modules.m"
    parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 15)));
#line 1122 "modules.m"
    parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 16)));
#line 1122 "modules.m"
    parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 17)));
#line 1122 "modules.m"
    parse_tree__modules__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 18)));
#line 1122 "modules.m"
    parse_tree__modules__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 19)));
#line 1122 "modules.m"
    parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 20)));
#line 1122 "modules.m"
    parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 21)));
#line 1122 "modules.m"
    parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 22)));
#line 1122 "modules.m"
    parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 23)));
#line 1122 "modules.m"
    parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 24)));
#line 1122 "modules.m"
    parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 25)));
#line 1122 "modules.m"
    parse_tree__modules__V_164_164 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, (MR_Integer) 26)));
#line 1122 "modules.m"
    {
#line 1122 "modules.m"
      MR_Word base;
#line 1122 "modules.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56 = base;
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_138_138));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_139_139));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_140_140));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_141_141));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__V_142_142));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_143_143));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__V_144_144));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__ModIndirectImports_50));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_146_146));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_147_147));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_148_148));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_149_149));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_150_150));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_151_151));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_152_152));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_153_153));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_154_154));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_155_155));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_156_156));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_157_157));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_158_158));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_159_159));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__V_160_160));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__V_161_161));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__V_162_162));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__modules__V_163_163));
#line 1122 "modules.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_164_164));
#line 1122 "modules.m"
    }
#line 1080 "modules.m"
  }
#line 1069 "modules.m"
}

#line 1031 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces__ho20_15_p_0(
#line 1031 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__Imports_18,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_30,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34)
#line 1031 "modules.m"
{
#line 1065 "modules.m"
  while (MR_TRUE)
#line 1065 "modules.m"
    {
#line 1065 "modules.m"
      /* tailcall optimized into a loop */
#line 1065 "modules.m"
      {
#line 1065 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 1065 "modules.m"
        MR_Word parse_tree__modules__FirstImport_27;
#line 1065 "modules.m"
        MR_Word parse_tree__modules__LaterImports_28;
#line 1043 "modules.m"
        MR_Box parse_tree__modules__conv0_FirstImport_27;

#line 1043 "modules.m"
        {
#line 1043 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv0_FirstImport_27, parse_tree__modules__Imports_18, &parse_tree__modules__LaterImports_28);
        }
#line 1043 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1043 "modules.m"
          {
#line 1043 "modules.m"
            parse_tree__modules__FirstImport_27 = ((MR_Word) parse_tree__modules__conv0_FirstImport_27);
#line 1043 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 1043 "modules.m"
          }
#line 1065 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1060 "modules.m"
          {
#line 1060 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41;
#line 1060 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42;
#line 1060 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;
#line 1048 "modules.m"
            MR_Word parse_tree__modules__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 7)));
#line 1048 "modules.m"
            MR_Word parse_tree__modules__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 6)));
#line 1048 "modules.m"
            MR_Word parse_tree__modules__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 5)));
#line 1048 "modules.m"
            MR_Word parse_tree__modules__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 4)));
#line 1048 "modules.m"
            MR_Word parse_tree__modules__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 2)));
#line 1047 "modules.m"
            MR_String parse_tree__modules__V_186_186 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 26)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 25)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 24)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 23)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 22)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 21)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 20)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 19)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 18)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 17)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 16)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 15)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 14)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 13)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 12)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 11)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 10)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 9)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 8)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 3)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 1)));
#line 1047 "modules.m"
            MR_String parse_tree__modules__V_212_212 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 0)));

#line 1047 "modules.m"
            {
#line 1047 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__FirstImport_27, parse_tree__modules__V_210_210);
            }
#line 1048 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 1048 "modules.m"
              {
#line 1048 "modules.m"
                {
#line 1048 "modules.m"
                  parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_208_208);
                }
#line 1048 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 1048 "modules.m"
                  {
#line 1049 "modules.m"
                    {
#line 1049 "modules.m"
                      parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_207_207);
                    }
#line 1048 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 1048 "modules.m"
                      {
#line 1050 "modules.m"
                        {
#line 1050 "modules.m"
                          parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_206_206);
                        }
#line 1048 "modules.m"
                        if (!(parse_tree__modules__succeeded))
#line 1051 "modules.m"
                          {
#line 1051 "modules.m"
                            {
#line 1051 "modules.m"
                              parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_205_205);
                            }
#line 1051 "modules.m"
                          }
#line 1048 "modules.m"
                      }
#line 1048 "modules.m"
                  }
#line 1048 "modules.m"
              }
#line 1055 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1054 "modules.m"
              {
#line 1054 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 1054 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31;
#line 1054 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29;
#line 1054 "modules.m"
              }
#line 1055 "modules.m"
            else
#line 1056 "modules.m"
              {
#line 1056 "modules.m"
                parse_tree__modules__process_module_short_interface__ho21_15_p_0(parse_tree__modules__Globals_16, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__FirstImport_27, parse_tree__modules__IntFileKind_19, parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29, &parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43);
              }
#line 1061 "modules.m"
            /* direct tailcall eliminated */
#line 1061 "modules.m"
            {
#line 1061 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_18 = parse_tree__modules__LaterImports_28;
#line 1061 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_29 = parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41;
#line 1061 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_31 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42;
#line 1061 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;

#line 1061 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33;
#line 1061 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_31;
#line 1061 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_29;
#line 1061 "modules.m"
              parse_tree__modules__Imports_18 = parse_tree__modules__Imports__tmp_copy_18;
#line 1061 "modules.m"
            }
#line 1061 "modules.m"
            continue;
#line 1060 "modules.m"
          }
#line 1065 "modules.m"
        else
#line 1066 "modules.m"
          {
#line 1066 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 1066 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31;
#line 1066 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_30 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29;
#line 1066 "modules.m"
          }
#line 1065 "modules.m"
      }
#line 1065 "modules.m"
      break;
#line 1065 "modules.m"
    }
#line 1031 "modules.m"
}

#line 1031 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces__ho18_15_p_0(
#line 1031 "modules.m"
  MR_Word parse_tree__modules__Globals_16,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__Imports_18,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_19,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_30,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32,
#line 1031 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 1031 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34)
#line 1031 "modules.m"
{
#line 1065 "modules.m"
  while (MR_TRUE)
#line 1065 "modules.m"
    {
#line 1065 "modules.m"
      /* tailcall optimized into a loop */
#line 1065 "modules.m"
      {
#line 1065 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 1065 "modules.m"
        MR_Word parse_tree__modules__FirstImport_27;
#line 1065 "modules.m"
        MR_Word parse_tree__modules__LaterImports_28;
#line 1043 "modules.m"
        MR_Box parse_tree__modules__conv0_FirstImport_27;

#line 1043 "modules.m"
        {
#line 1043 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv0_FirstImport_27, parse_tree__modules__Imports_18, &parse_tree__modules__LaterImports_28);
        }
#line 1043 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1043 "modules.m"
          {
#line 1043 "modules.m"
            parse_tree__modules__FirstImport_27 = ((MR_Word) parse_tree__modules__conv0_FirstImport_27);
#line 1043 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 1043 "modules.m"
          }
#line 1065 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1060 "modules.m"
          {
#line 1060 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41;
#line 1060 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42;
#line 1060 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;
#line 1048 "modules.m"
            MR_Word parse_tree__modules__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 7)));
#line 1048 "modules.m"
            MR_Word parse_tree__modules__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 6)));
#line 1048 "modules.m"
            MR_Word parse_tree__modules__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 5)));
#line 1048 "modules.m"
            MR_Word parse_tree__modules__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 4)));
#line 1048 "modules.m"
            MR_Word parse_tree__modules__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 2)));
#line 1047 "modules.m"
            MR_String parse_tree__modules__V_186_186 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 26)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 25)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 24)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 23)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 22)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 21)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 20)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 19)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 18)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 17)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 16)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 15)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 14)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 13)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 12)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 11)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 10)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 9)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 8)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 3)));
#line 1047 "modules.m"
            MR_Word parse_tree__modules__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 1)));
#line 1047 "modules.m"
            MR_String parse_tree__modules__V_212_212 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 0)));

#line 1047 "modules.m"
            {
#line 1047 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__FirstImport_27, parse_tree__modules__V_210_210);
            }
#line 1048 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 1048 "modules.m"
              {
#line 1048 "modules.m"
                {
#line 1048 "modules.m"
                  parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_208_208);
                }
#line 1048 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 1048 "modules.m"
                  {
#line 1049 "modules.m"
                    {
#line 1049 "modules.m"
                      parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_207_207);
                    }
#line 1048 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 1048 "modules.m"
                      {
#line 1050 "modules.m"
                        {
#line 1050 "modules.m"
                          parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_206_206);
                        }
#line 1048 "modules.m"
                        if (!(parse_tree__modules__succeeded))
#line 1051 "modules.m"
                          {
#line 1051 "modules.m"
                            {
#line 1051 "modules.m"
                              parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_27)), parse_tree__modules__V_205_205);
                            }
#line 1051 "modules.m"
                          }
#line 1048 "modules.m"
                      }
#line 1048 "modules.m"
                  }
#line 1048 "modules.m"
              }
#line 1055 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1054 "modules.m"
              {
#line 1054 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 1054 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31;
#line 1054 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29;
#line 1054 "modules.m"
              }
#line 1055 "modules.m"
            else
#line 1056 "modules.m"
              {
#line 1056 "modules.m"
                parse_tree__modules__process_module_short_interface__ho22_15_p_0(parse_tree__modules__Globals_16, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__FirstImport_27, parse_tree__modules__IntFileKind_19, parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29, &parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43);
              }
#line 1061 "modules.m"
            /* direct tailcall eliminated */
#line 1061 "modules.m"
            {
#line 1061 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_18 = parse_tree__modules__LaterImports_28;
#line 1061 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_29 = parse_tree__modules__STATE_VARIABLE_IndirectImports_41_41;
#line 1061 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_31 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_42_42;
#line 1061 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;

#line 1061 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33;
#line 1061 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_31;
#line 1061 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_29;
#line 1061 "modules.m"
              parse_tree__modules__Imports_18 = parse_tree__modules__Imports__tmp_copy_18;
#line 1061 "modules.m"
            }
#line 1061 "modules.m"
            continue;
#line 1060 "modules.m"
          }
#line 1065 "modules.m"
        else
#line 1066 "modules.m"
          {
#line 1066 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 1066 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_31;
#line 1066 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_30 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_29;
#line 1066 "modules.m"
          }
#line 1065 "modules.m"
      }
#line 1065 "modules.m"
      break;
#line 1065 "modules.m"
    }
#line 1031 "modules.m"
}

#line 994 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho17_13_p_0(
#line 994 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 994 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 994 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 994 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 994 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 994 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 994 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 994 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28)
#line 994 "modules.m"
{
#line 1003 "modules.m"
  while (MR_TRUE)
#line 1003 "modules.m"
    {
#line 1003 "modules.m"
      /* tailcall optimized into a loop */
#line 1003 "modules.m"
      {
#line 1003 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 1003 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1003 "modules.m"
        MR_Word parse_tree__modules__IndirectImports_24;
#line 1003 "modules.m"
        MR_Word parse_tree__modules__V_31_31;
#line 1003 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1003 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 1006 "modules.m"
        {
#line 1006 "modules.m"
          parse_tree__modules__V_31_31 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_39_39);
        }
#line 1004 "modules.m"
        {
#line 1004 "modules.m"
          parse_tree__modules__process_module_short_interfaces__ho18_15_p_0(parse_tree__modules__Globals_14, parse_tree__modules__HaveReadModuleMaps_15, parse_tree__modules__Imports_16, parse_tree__modules__IntFileKind_17, parse_tree__modules__V_31_31, &parse_tree__modules__IndirectImports_24, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33);
        }
#line 1008 "modules.m"
        {
#line 1008 "modules.m"
          parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_39_39, parse_tree__modules__IndirectImports_24);
        }
#line 1010 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1009 "modules.m"
          {
#line 1009 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;
#line 1009 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1009 "modules.m"
          }
#line 1010 "modules.m"
        else
#line 1011 "modules.m"
          {
#line 1011 "modules.m"
            /* direct tailcall eliminated */
#line 1011 "modules.m"
            {
#line 1011 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_16 = parse_tree__modules__IndirectImports_24;
#line 1011 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1011 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 1011 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27;
#line 1011 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25;
#line 1011 "modules.m"
              parse_tree__modules__Imports_16 = parse_tree__modules__Imports__tmp_copy_16;
#line 1011 "modules.m"
            }
#line 1011 "modules.m"
            continue;
#line 1011 "modules.m"
          }
#line 1003 "modules.m"
      }
#line 1003 "modules.m"
      break;
#line 1003 "modules.m"
    }
#line 994 "modules.m"
}

#line 771 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_private_interface__ho16_14_p_0(
#line 771 "modules.m"
  MR_Word parse_tree__modules__Globals_15,
#line 771 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_16,
#line 771 "modules.m"
  MR_Word parse_tree__modules__Ancestor_17,
#line 771 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_48,
#line 771 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_49,
#line 771 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_50,
#line 771 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_51,
#line 771 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52,
#line 771 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53)
#line 771 "modules.m"
{
#line 781 "modules.m"
  {
#line 781 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 781 "modules.m"
    MR_Word parse_tree__modules__TypeInfo_for_MS_157 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0;
#line 781 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_159_159;
#line 781 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_160_160;
#line 781 "modules.m"
    MR_Word parse_tree__modules__ReturnTimestamp_25;
#line 781 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestamp_27;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntParseTree_28;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntSpecs_29;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntErrors_30;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntModuleName_31;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntKind_32;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntContext_33;
#line 781 "modules.m"
    MR_Word parse_tree__modules__MaybeVersionNumbers_34;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntIntIncls_35;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntImpIncls_36;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntIntAvails_37;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntImpAvails_38;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntIntItems_39;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntImpItems_40;
#line 781 "modules.m"
    MR_Word parse_tree__modules__PrivateIntItemBlocks_41;
#line 781 "modules.m"
    MR_Word parse_tree__modules__AncDirectImports_42;
#line 781 "modules.m"
    MR_Word parse_tree__modules__AncDirectUses_43;
#line 781 "modules.m"
    MR_Word parse_tree__modules__Statistics_44;
#line 781 "modules.m"
    MR_Word parse_tree__modules__FatalPrivateIntErrors_45;
#line 781 "modules.m"
    MR_Word parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 24)));
#line 781 "modules.m"
    MR_Word parse_tree__modules__V_57_57;
#line 781 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_64_64;
#line 781 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65;
#line 781 "modules.m"
    MR_Word parse_tree__modules__V_66_66;
#line 781 "modules.m"
    MR_Word parse_tree__modules__V_67_67;
#line 781 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_70_70;
#line 781 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71;
#line 781 "modules.m"
    MR_Word parse_tree__modules__V_74_74;
#line 782 "modules.m"
    MR_String parse_tree__modules__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 0)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 1)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 2)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 3)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 4)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 5)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 6)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 7)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 8)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 9)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 10)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 11)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 12)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 13)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 14)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 15)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 16)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 17)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 18)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 19)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 20)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 21)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 22)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 23)));
#line 782 "modules.m"
    MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 25)));
#line 782 "modules.m"
    MR_String parse_tree__modules__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, (MR_Integer) 26)));
#line 784 "modules.m"
    MR_Word parse_tree__modules__V_102_102;
#line 784 "modules.m"
    MR_Word parse_tree__modules__V_103_103;
#line 784 "modules.m"
    MR_String parse_tree__modules___AncestorFileName_26;

#line 782 "modules.m"
    {
#line 782 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_56_56, &parse_tree__modules__ReturnTimestamp_25);
    }
#line 784 "modules.m"
    parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_16, (MR_Integer) 0)));
#line 784 "modules.m"
    parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_16, (MR_Integer) 1)));
#line 784 "modules.m"
    parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_16, (MR_Integer) 2)));
#line 784 "modules.m"
    {
#line 784 "modules.m"
      parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_15, parse_tree__modules__V_57_57, (MR_String) "Reading private interface for module", (MR_Integer) 0, parse_tree__modules__Ancestor_17, (MR_Integer) 0, &parse_tree__modules___AncestorFileName_26, parse_tree__modules__ReturnTimestamp_25, &parse_tree__modules__MaybeTimestamp_27, &parse_tree__modules__PrivateIntParseTree_28, &parse_tree__modules__PrivateIntSpecs_29, &parse_tree__modules__PrivateIntErrors_30);
    }
#line 790 "modules.m"
    {
#line 790 "modules.m"
      parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Ancestor_17, (MR_Integer) 0, (MR_Integer) 1, parse_tree__modules__MaybeTimestamp_27, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_52, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_64_64);
    }
#line 793 "modules.m"
    parse_tree__modules__PrivateIntModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 0)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntKind_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 1)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 2)));
#line 793 "modules.m"
    parse_tree__modules__MaybeVersionNumbers_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 3)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntIntIncls_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 4)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntImpIncls_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 5)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntIntAvails_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 6)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntImpAvails_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 7)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntIntItems_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 8)));
#line 793 "modules.m"
    parse_tree__modules__PrivateIntImpItems_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__PrivateIntParseTree_28, (MR_Integer) 9)));
#line 798 "modules.m"
    {
#line 798 "modules.m"
      parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(parse_tree__modules__PrivateIntModuleName_31, parse_tree__modules__MaybeVersionNumbers_34, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_64_64, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65);
    }
#line 801 "modules.m"
    {
#line 801 "modules.m"
      parse_tree__modules__V_66_66 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(parse_tree__modules__Ancestor_17, parse_tree__modules__PrivateIntKind_32);
    }
#line 802 "modules.m"
    {
#line 802 "modules.m"
      parse_tree__modules__V_67_67 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(parse_tree__modules__Ancestor_17, parse_tree__modules__PrivateIntKind_32);
    }
#line 800 "modules.m"
    {
#line 800 "modules.m"
      parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0(parse_tree__modules__TypeInfo_for_MS_157, parse_tree__modules__PrivateIntContext_33, ((MR_Box) (parse_tree__modules__V_66_66)), ((MR_Box) (parse_tree__modules__V_67_67)), parse_tree__modules__PrivateIntIntIncls_35, parse_tree__modules__PrivateIntImpIncls_36, parse_tree__modules__PrivateIntIntAvails_37, parse_tree__modules__PrivateIntImpAvails_38, parse_tree__modules__PrivateIntIntItems_39, parse_tree__modules__PrivateIntImpItems_40, &parse_tree__modules__PrivateIntItemBlocks_41);
    }
#line 808 "modules.m"
    {
#line 808 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(parse_tree__modules__TypeInfo_for_MS_157, parse_tree__modules__PrivateIntItemBlocks_41, &parse_tree__modules__AncDirectImports_42, &parse_tree__modules__AncDirectUses_43);
    }
#line 8861 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_159_159 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 810 "modules.m"
    {
#line 810 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_159_159, parse_tree__modules__AncDirectImports_42, parse_tree__modules__STATE_VARIABLE_DirectImports_0_48, parse_tree__modules__STATE_VARIABLE_DirectImports_49);
    }
#line 811 "modules.m"
    {
#line 811 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_159_159, parse_tree__modules__AncDirectUses_43, parse_tree__modules__STATE_VARIABLE_DirectUses_0_50, parse_tree__modules__STATE_VARIABLE_DirectUses_51);
    }
#line 813 "modules.m"
    {
#line 813 "modules.m"
      parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(parse_tree__modules__PrivateIntItemBlocks_41, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_65_65, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_70_70);
    }
#line 814 "modules.m"
    {
#line 814 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(parse_tree__modules__PrivateIntSpecs_29, parse_tree__modules__PrivateIntErrors_30, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_70_70, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71);
    }
#line 817 "modules.m"
    {
#line 817 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_15, (MR_Integer) 56, &parse_tree__modules__Statistics_44);
    }
#line 818 "modules.m"
    {
#line 818 "modules.m"
      libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_44);
    }
#line 820 "modules.m"
    {
#line 820 "modules.m"
      parse_tree__modules__V_74_74 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
    }
#line 8898 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_160_160 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 820 "modules.m"
    {
#line 820 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_160_160, parse_tree__modules__PrivateIntErrors_30, parse_tree__modules__V_74_74, &parse_tree__modules__FatalPrivateIntErrors_45);
    }
#line 822 "modules.m"
    {
#line 822 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_160_160, parse_tree__modules__FatalPrivateIntErrors_45);
    }
#line 826 "modules.m"
    if (parse_tree__modules__succeeded)
#line 823 "modules.m"
      {
#line 823 "modules.m"
        MR_Word parse_tree__modules__ModAncestors0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 4)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__ModAncestors_47;
#line 823 "modules.m"
        MR_String parse_tree__modules__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 0)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 1)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 2)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 3)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 5)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 6)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 7)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 8)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 9)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 10)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 11)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 12)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 13)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 14)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 15)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 16)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 17)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 18)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 19)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 20)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 21)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 22)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 23)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 24)));
#line 823 "modules.m"
        MR_Word parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 25)));
#line 823 "modules.m"
        MR_String parse_tree__modules__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 26)));
#line 825 "modules.m"
        MR_String parse_tree__modules__V_130_130;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_131_131;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_132_132;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_133_133;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_135_135;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_136_136;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_137_137;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_138_138;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_139_139;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_140_140;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_141_141;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_142_142;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_143_143;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_144_144;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_145_145;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_146_146;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_147_147;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_148_148;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_149_149;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_150_150;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_151_151;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_152_152;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_153_153;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_154_154;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_155_155;
#line 825 "modules.m"
        MR_String parse_tree__modules__V_156_156;
#line 825 "modules.m"
        MR_Word parse_tree__modules__V_134_134;

#line 824 "modules.m"
        {
#line 824 "modules.m"
          mercury__set__insert_3_p_0(parse_tree__modules__TypeCtorInfo_159_159, ((MR_Box) (parse_tree__modules__Ancestor_17)), parse_tree__modules__ModAncestors0_46, &parse_tree__modules__ModAncestors_47);
        }
#line 825 "modules.m"
        parse_tree__modules__V_130_130 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 0)));
#line 825 "modules.m"
        parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 1)));
#line 825 "modules.m"
        parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 2)));
#line 825 "modules.m"
        parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 3)));
#line 825 "modules.m"
        parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 4)));
#line 825 "modules.m"
        parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 5)));
#line 825 "modules.m"
        parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 6)));
#line 825 "modules.m"
        parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 7)));
#line 825 "modules.m"
        parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 8)));
#line 825 "modules.m"
        parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 9)));
#line 825 "modules.m"
        parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 10)));
#line 825 "modules.m"
        parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 11)));
#line 825 "modules.m"
        parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 12)));
#line 825 "modules.m"
        parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 13)));
#line 825 "modules.m"
        parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 14)));
#line 825 "modules.m"
        parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 15)));
#line 825 "modules.m"
        parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 16)));
#line 825 "modules.m"
        parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 17)));
#line 825 "modules.m"
        parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 18)));
#line 825 "modules.m"
        parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 19)));
#line 825 "modules.m"
        parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 20)));
#line 825 "modules.m"
        parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 21)));
#line 825 "modules.m"
        parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 22)));
#line 825 "modules.m"
        parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 23)));
#line 825 "modules.m"
        parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 24)));
#line 825 "modules.m"
        parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 25)));
#line 825 "modules.m"
        parse_tree__modules__V_156_156 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71, (MR_Integer) 26)));
#line 825 "modules.m"
        {
#line 825 "modules.m"
          MR_Word base;
#line 825 "modules.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 825 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53 = base;
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_130_130));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_131_131));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_132_132));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_133_133));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__ModAncestors_47));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_135_135));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__V_136_136));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__V_137_137));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_138_138));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_139_139));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_140_140));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_141_141));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_142_142));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_143_143));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_144_144));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_145_145));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_146_146));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_147_147));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_148_148));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_149_149));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_150_150));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_151_151));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__V_152_152));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__V_153_153));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__V_154_154));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__modules__V_155_155));
#line 825 "modules.m"
          MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_156_156));
#line 825 "modules.m"
        }
#line 823 "modules.m"
      }
#line 826 "modules.m"
    else
#line 826 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_53 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_71_71;
#line 781 "modules.m"
  }
#line 771 "modules.m"
}

#line 994 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_transitively__ho13_13_p_0(
#line 994 "modules.m"
  MR_Word parse_tree__modules__Globals_14,
#line 994 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_15,
#line 994 "modules.m"
  MR_Word parse_tree__modules__Imports_16,
#line 994 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_17,
#line 994 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25,
#line 994 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26,
#line 994 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27,
#line 994 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28)
#line 994 "modules.m"
{
#line 1003 "modules.m"
  while (MR_TRUE)
#line 1003 "modules.m"
    {
#line 1003 "modules.m"
      /* tailcall optimized into a loop */
#line 1003 "modules.m"
      {
#line 1003 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 1003 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1003 "modules.m"
        MR_Word parse_tree__modules__IndirectImports_24;
#line 1003 "modules.m"
        MR_Word parse_tree__modules__V_31_31;
#line 1003 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1003 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 1006 "modules.m"
        {
#line 1006 "modules.m"
          parse_tree__modules__V_31_31 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_39_39);
        }
#line 1004 "modules.m"
        {
#line 1004 "modules.m"
          parse_tree__modules__process_module_short_interfaces__ho20_15_p_0(parse_tree__modules__Globals_14, parse_tree__modules__HaveReadModuleMaps_15, parse_tree__modules__Imports_16, parse_tree__modules__IntFileKind_17, parse_tree__modules__V_31_31, &parse_tree__modules__IndirectImports_24, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33);
        }
#line 1008 "modules.m"
        {
#line 1008 "modules.m"
          parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_39_39, parse_tree__modules__IndirectImports_24);
        }
#line 1010 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1009 "modules.m"
          {
#line 1009 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_28 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;
#line 1009 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_26 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1009 "modules.m"
          }
#line 1010 "modules.m"
        else
#line 1011 "modules.m"
          {
#line 1011 "modules.m"
            /* direct tailcall eliminated */
#line 1011 "modules.m"
            {
#line 1011 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_16 = parse_tree__modules__IndirectImports_24;
#line 1011 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_32_32;
#line 1011 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_33_33;

#line 1011 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_27 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_27;
#line 1011 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_25 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_25;
#line 1011 "modules.m"
              parse_tree__modules__Imports_16 = parse_tree__modules__Imports__tmp_copy_16;
#line 1011 "modules.m"
            }
#line 1011 "modules.m"
            continue;
#line 1011 "modules.m"
          }
#line 1003 "modules.m"
      }
#line 1003 "modules.m"
      break;
#line 1003 "modules.m"
    }
#line 994 "modules.m"
}

#line 959 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho12_11_p_0(
#line 959 "modules.m"
  MR_Word parse_tree__modules__Globals_12,
#line 959 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_13,
#line 959 "modules.m"
  MR_Word parse_tree__modules__Imports_14,
#line 959 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_15,
#line 959 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22,
#line 959 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23)
#line 959 "modules.m"
{
#line 967 "modules.m"
  while (MR_TRUE)
#line 967 "modules.m"
    {
#line 967 "modules.m"
      /* tailcall optimized into a loop */
#line 967 "modules.m"
      {
#line 967 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 967 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_32_32 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 967 "modules.m"
        MR_Word parse_tree__modules__ImpIndirectImports_21;
#line 967 "modules.m"
        MR_Word parse_tree__modules__V_26_26;
#line 967 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;

#line 970 "modules.m"
        {
#line 970 "modules.m"
          parse_tree__modules__V_26_26 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_32_32);
        }
#line 968 "modules.m"
        {
#line 968 "modules.m"
          parse_tree__modules__process_module_short_interfaces_transitively__ho13_13_p_0(parse_tree__modules__Globals_12, parse_tree__modules__HaveReadModuleMaps_13, parse_tree__modules__Imports_14, parse_tree__modules__IntFileKind_15, parse_tree__modules__V_26_26, &parse_tree__modules__ImpIndirectImports_21, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27);
        }
#line 971 "modules.m"
        {
#line 971 "modules.m"
          parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_32_32, parse_tree__modules__ImpIndirectImports_21);
        }
#line 973 "modules.m"
        if (parse_tree__modules__succeeded)
#line 972 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;
#line 973 "modules.m"
        else
#line 974 "modules.m"
          {
#line 974 "modules.m"
            /* direct tailcall eliminated */
#line 974 "modules.m"
            {
#line 974 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_14 = parse_tree__modules__ImpIndirectImports_21;
#line 974 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_22 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;

#line 974 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_22;
#line 974 "modules.m"
              parse_tree__modules__Imports_14 = parse_tree__modules__Imports__tmp_copy_14;
#line 974 "modules.m"
            }
#line 974 "modules.m"
            continue;
#line 974 "modules.m"
          }
#line 967 "modules.m"
      }
#line 967 "modules.m"
      break;
#line 967 "modules.m"
    }
#line 959 "modules.m"
}

#line 753 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__process_module_private_interfaces__ho7_14_p_0_1(
#line 753 "modules.m"
  MR_Box parse_tree__modules__closure_arg)
#line 753 "modules.m"
{
#line 753 "modules.m"
  {
#line 753 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 753 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;

#line 753 "modules.m"
    {
#line 753 "modules.m"
      return parse_tree__modules__succeeded = parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__753__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))));
    }
#line 753 "modules.m"
    return parse_tree__modules__succeeded;
#line 753 "modules.m"
  }
#line 753 "modules.m"
}

#line 740 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_private_interfaces__ho7_14_p_0(
#line 740 "modules.m"
  MR_Word parse_tree__modules__Globals_15,
#line 740 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_16,
#line 740 "modules.m"
  MR_Word parse_tree__modules__Ancestors_17,
#line 740 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0_29,
#line 740 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectImports_30,
#line 740 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0_31,
#line 740 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_DirectUses_32,
#line 740 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33,
#line 740 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34)
#line 740 "modules.m"
{
#line 767 "modules.m"
  while (MR_TRUE)
#line 767 "modules.m"
    {
#line 767 "modules.m"
      /* tailcall optimized into a loop */
#line 767 "modules.m"
      {
#line 767 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 767 "modules.m"
        MR_Word parse_tree__modules__FirstAncestor_25;
#line 767 "modules.m"
        MR_Word parse_tree__modules__LaterAncestors_26;
#line 751 "modules.m"
        MR_Box parse_tree__modules__conv0_FirstAncestor_25;

#line 751 "modules.m"
        {
#line 751 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv0_FirstAncestor_25, parse_tree__modules__Ancestors_17, &parse_tree__modules__LaterAncestors_26);
        }
#line 751 "modules.m"
        if (parse_tree__modules__succeeded)
#line 751 "modules.m"
          {
#line 751 "modules.m"
            parse_tree__modules__FirstAncestor_25 = ((MR_Word) parse_tree__modules__conv0_FirstAncestor_25);
#line 751 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 751 "modules.m"
          }
#line 767 "modules.m"
        if (parse_tree__modules__succeeded)
#line 752 "modules.m"
          {
#line 752 "modules.m"
            MR_Word parse_tree__modules__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 2)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__ModAncestors0_28;
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_37_37;
#line 752 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_41_41;
#line 752 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_42_42;
#line 752 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;
#line 752 "modules.m"
            MR_String parse_tree__modules__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 0)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 1)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 3)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 4)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 5)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 6)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 7)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 8)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 9)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 10)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 11)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 12)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 13)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 14)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 15)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 16)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 17)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 18)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 19)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 20)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 21)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 22)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 23)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 24)));
#line 752 "modules.m"
            MR_Word parse_tree__modules__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 25)));
#line 752 "modules.m"
            MR_String parse_tree__modules__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 26)));
#line 755 "modules.m"
            MR_String parse_tree__modules__V_75_75;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_76_76;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_77_77;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_78_78;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_79_79;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_80_80;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_81_81;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_82_82;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_83_83;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_84_84;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_85_85;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_86_86;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_87_87;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_88_88;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_89_89;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_90_90;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_91_91;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_92_92;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_93_93;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_94_94;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_95_95;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_96_96;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_97_97;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_98_98;
#line 755 "modules.m"
            MR_Word parse_tree__modules__V_99_99;
#line 755 "modules.m"
            MR_String parse_tree__modules__V_100_100;

#line 753 "modules.m"
            {
#line 753 "modules.m"
              parse_tree__modules__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 753 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_5[3]));
#line 753 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 1) = ((MR_Box) (parse_tree__modules__process_module_private_interfaces__ho7_14_p_0_1));
#line 753 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 753 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 3) = ((MR_Box) (parse_tree__modules__FirstAncestor_25));
#line 753 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_37_37, 4) = ((MR_Box) (parse_tree__modules__ModuleName_27));
#line 753 "modules.m"
            }
#line 753 "modules.m"
            {
#line 753 "modules.m"
              mercury__require__expect_not_4_p_0(parse_tree__modules__V_37_37, (MR_String) "parse_tree.modules", (MR_String) "predicate \140parse_tree.modules.process_module_private_interfaces\'/14", (MR_String) "module is its own ancestor\?");
            }
#line 755 "modules.m"
            parse_tree__modules__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 0)));
#line 755 "modules.m"
            parse_tree__modules__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 1)));
#line 755 "modules.m"
            parse_tree__modules__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 2)));
#line 755 "modules.m"
            parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 3)));
#line 755 "modules.m"
            parse_tree__modules__ModAncestors0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 4)));
#line 755 "modules.m"
            parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 5)));
#line 755 "modules.m"
            parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 6)));
#line 755 "modules.m"
            parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 7)));
#line 755 "modules.m"
            parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 8)));
#line 755 "modules.m"
            parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 9)));
#line 755 "modules.m"
            parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 10)));
#line 755 "modules.m"
            parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 11)));
#line 755 "modules.m"
            parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 12)));
#line 755 "modules.m"
            parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 13)));
#line 755 "modules.m"
            parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 14)));
#line 755 "modules.m"
            parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 15)));
#line 755 "modules.m"
            parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 16)));
#line 755 "modules.m"
            parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 17)));
#line 755 "modules.m"
            parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 18)));
#line 755 "modules.m"
            parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 19)));
#line 755 "modules.m"
            parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 20)));
#line 755 "modules.m"
            parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 21)));
#line 755 "modules.m"
            parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 22)));
#line 755 "modules.m"
            parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 23)));
#line 755 "modules.m"
            parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 24)));
#line 755 "modules.m"
            parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 25)));
#line 755 "modules.m"
            parse_tree__modules__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, (MR_Integer) 26)));
#line 756 "modules.m"
            {
#line 756 "modules.m"
              parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstAncestor_25)), parse_tree__modules__ModAncestors0_28);
            }
#line 759 "modules.m"
            if (parse_tree__modules__succeeded)
#line 758 "modules.m"
              {
#line 758 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 758 "modules.m"
                parse_tree__modules__STATE_VARIABLE_DirectUses_42_42 = parse_tree__modules__STATE_VARIABLE_DirectUses_0_31;
#line 758 "modules.m"
                parse_tree__modules__STATE_VARIABLE_DirectImports_41_41 = parse_tree__modules__STATE_VARIABLE_DirectImports_0_29;
#line 758 "modules.m"
              }
#line 759 "modules.m"
            else
#line 760 "modules.m"
              {
#line 760 "modules.m"
                parse_tree__modules__process_module_private_interface__ho16_14_p_0(parse_tree__modules__Globals_15, parse_tree__modules__HaveReadModuleMaps_16, parse_tree__modules__FirstAncestor_25, parse_tree__modules__STATE_VARIABLE_DirectImports_0_29, &parse_tree__modules__STATE_VARIABLE_DirectImports_41_41, parse_tree__modules__STATE_VARIABLE_DirectUses_0_31, &parse_tree__modules__STATE_VARIABLE_DirectUses_42_42, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43);
              }
#line 764 "modules.m"
            /* direct tailcall eliminated */
#line 764 "modules.m"
            {
#line 764 "modules.m"
              MR_Word parse_tree__modules__Ancestors__tmp_copy_17 = parse_tree__modules__LaterAncestors_26;
#line 764 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_DirectImports_0__tmp_copy_29 = parse_tree__modules__STATE_VARIABLE_DirectImports_41_41;
#line 764 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_DirectUses_0__tmp_copy_31 = parse_tree__modules__STATE_VARIABLE_DirectUses_42_42;
#line 764 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43_43;

#line 764 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_33;
#line 764 "modules.m"
              parse_tree__modules__STATE_VARIABLE_DirectUses_0_31 = parse_tree__modules__STATE_VARIABLE_DirectUses_0__tmp_copy_31;
#line 764 "modules.m"
              parse_tree__modules__STATE_VARIABLE_DirectImports_0_29 = parse_tree__modules__STATE_VARIABLE_DirectImports_0__tmp_copy_29;
#line 764 "modules.m"
              parse_tree__modules__Ancestors_17 = parse_tree__modules__Ancestors__tmp_copy_17;
#line 764 "modules.m"
            }
#line 764 "modules.m"
            continue;
#line 752 "modules.m"
          }
#line 767 "modules.m"
        else
#line 768 "modules.m"
          {
#line 768 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_34 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_33;
#line 768 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_DirectUses_32 = parse_tree__modules__STATE_VARIABLE_DirectUses_0_31;
#line 768 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_DirectImports_30 = parse_tree__modules__STATE_VARIABLE_DirectImports_0_29;
#line 768 "modules.m"
          }
#line 767 "modules.m"
      }
#line 767 "modules.m"
      break;
#line 767 "modules.m"
    }
#line 740 "modules.m"
}

#line 9698 "parse_tree.modules.c"
static void MR_CALL 
parse_tree__modules__process_module_long_interfaces__ho6_16_p_0_3(
#line 9701 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 9703 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 9705 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 9707 "parse_tree.modules.c"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 9709 "parse_tree.modules.c"
{
#line 9711 "parse_tree.modules.c"
  {
#line 9713 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 9715 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv2_HeadVar__3_3;

#line 9718 "parse_tree.modules.c"
    {
#line 9720 "parse_tree.modules.c"
      parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv2_HeadVar__3_3);
    }
#line 9723 "parse_tree.modules.c"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_HeadVar__3_3));
#line 9725 "parse_tree.modules.c"
  }
#line 9727 "parse_tree.modules.c"
}

#line 9730 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__process_module_long_interfaces__ho6_16_p_0_2(
#line 9733 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 9735 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 9737 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 9739 "parse_tree.modules.c"
{
#line 9741 "parse_tree.modules.c"
  {
#line 9743 "parse_tree.modules.c"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 9745 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 9747 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv1_HeadVar__3_3;

#line 9750 "parse_tree.modules.c"
    {
#line 9752 "parse_tree.modules.c"
      parse_tree__modules__conv1_HeadVar__3_3 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 9755 "parse_tree.modules.c"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__3_3));
#line 9757 "parse_tree.modules.c"
    return parse_tree__modules__wrapper_arg_3;
#line 9759 "parse_tree.modules.c"
  }
#line 9761 "parse_tree.modules.c"
}

#line 9764 "parse_tree.modules.c"
static MR_Box MR_CALL 
parse_tree__modules__process_module_long_interfaces__ho6_16_p_0_1(
#line 9767 "parse_tree.modules.c"
  MR_Box parse_tree__modules__closure_arg,
#line 9769 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 9771 "parse_tree.modules.c"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 9773 "parse_tree.modules.c"
{
#line 9775 "parse_tree.modules.c"
  {
#line 9777 "parse_tree.modules.c"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 9779 "parse_tree.modules.c"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 9781 "parse_tree.modules.c"
    MR_Word parse_tree__modules__conv0_HeadVar__3_3;

#line 9784 "parse_tree.modules.c"
    {
#line 9786 "parse_tree.modules.c"
      parse_tree__modules__conv0_HeadVar__3_3 = parse_tree__prog_item__make_ioms_opt_imported_2_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 9789 "parse_tree.modules.c"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__3_3));
#line 9791 "parse_tree.modules.c"
    return parse_tree__modules__wrapper_arg_3;
#line 9793 "parse_tree.modules.c"
  }
#line 9795 "parse_tree.modules.c"
}

#line 848 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_long_interfaces__ho6_16_p_0(
#line 848 "modules.m"
  MR_Word parse_tree__modules__Globals_17,
#line 848 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_18,
#line 848 "modules.m"
  MR_Word parse_tree__modules__NeedQual_19,
#line 848 "modules.m"
  MR_Word parse_tree__modules__Imports_20,
#line 848 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_21,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_33,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35,
#line 848 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36,
#line 848 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37)
#line 848 "modules.m"
{
#line 881 "modules.m"
  while (MR_TRUE)
#line 881 "modules.m"
    {
#line 881 "modules.m"
      /* tailcall optimized into a loop */
#line 881 "modules.m"
      {
#line 881 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 881 "modules.m"
        MR_Word parse_tree__modules__FirstImport_29;
#line 881 "modules.m"
        MR_Word parse_tree__modules__LaterImports_30;
#line 860 "modules.m"
        MR_Box parse_tree__modules__conv3_FirstImport_29;

#line 860 "modules.m"
        {
#line 860 "modules.m"
          parse_tree__modules__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &parse_tree__modules__conv3_FirstImport_29, parse_tree__modules__Imports_20, &parse_tree__modules__LaterImports_30);
        }
#line 860 "modules.m"
        if (parse_tree__modules__succeeded)
#line 860 "modules.m"
          {
#line 860 "modules.m"
            parse_tree__modules__FirstImport_29 = ((MR_Word) parse_tree__modules__conv3_FirstImport_29);
#line 860 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 860 "modules.m"
          }
#line 881 "modules.m"
        if (parse_tree__modules__succeeded)
#line 861 "modules.m"
          {
#line 861 "modules.m"
            MR_Word parse_tree__modules__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43;
#line 861 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44;
#line 861 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45;
#line 861 "modules.m"
            MR_String parse_tree__modules__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 861 "modules.m"
            MR_Word parse_tree__modules__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 861 "modules.m"
            MR_String parse_tree__modules__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 864 "modules.m"
            {
#line 864 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__FirstImport_29, parse_tree__modules__ModuleName_31);
            }
#line 865 "modules.m"
            if (!(parse_tree__modules__succeeded))
#line 865 "modules.m"
              {
#line 865 "modules.m"
                {
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 865 "modules.m"
                  MR_String parse_tree__modules__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 865 "modules.m"
                  MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 865 "modules.m"
                  MR_String parse_tree__modules__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 865 "modules.m"
                  {
#line 865 "modules.m"
                    parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_42_42);
                  }
#line 865 "modules.m"
                }
#line 865 "modules.m"
                if (!(parse_tree__modules__succeeded))
#line 865 "modules.m"
                  {
#line 866 "modules.m"
                    {
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 866 "modules.m"
                      MR_String parse_tree__modules__V_103_103 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 866 "modules.m"
                      MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 866 "modules.m"
                      MR_String parse_tree__modules__V_128_128 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 866 "modules.m"
                      {
#line 866 "modules.m"
                        parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_41_41);
                      }
#line 866 "modules.m"
                    }
#line 865 "modules.m"
                    if (!(parse_tree__modules__succeeded))
#line 867 "modules.m"
                      {
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 6)));
#line 867 "modules.m"
                        MR_String parse_tree__modules__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 0)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 1)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 2)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 3)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 4)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 5)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 7)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 8)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 9)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 10)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 11)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 12)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 13)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 14)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 15)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 16)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 17)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 18)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 19)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 20)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 21)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 22)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 23)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 24)));
#line 867 "modules.m"
                        MR_Word parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 25)));
#line 867 "modules.m"
                        MR_String parse_tree__modules__V_154_154 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, (MR_Integer) 26)));

#line 867 "modules.m"
                        {
#line 867 "modules.m"
                          parse_tree__modules__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__modules__FirstImport_29)), parse_tree__modules__V_40_40);
                        }
#line 867 "modules.m"
                      }
#line 865 "modules.m"
                  }
#line 865 "modules.m"
              }
#line 871 "modules.m"
            if (parse_tree__modules__succeeded)
#line 870 "modules.m"
              {
#line 870 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36;
#line 870 "modules.m"
                parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34;
#line 870 "modules.m"
                parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32;
#line 870 "modules.m"
              }
#line 871 "modules.m"
            else
#line 872 "modules.m"
              {
#line 872 "modules.m"
                parse_tree__modules__process_module_long_interface_16_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0, parse_tree__modules__Globals_17, parse_tree__modules__HaveReadModuleMaps_18, parse_tree__modules__NeedQual_19, parse_tree__modules__FirstImport_29, parse_tree__modules__IntFileKind_21, (MR_Word) &parse_tree__modules_scalar_common_2[6], (MR_Word) &parse_tree__modules_scalar_common_2[7], (MR_Word) &parse_tree__modules_scalar_common_2[8], parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32, &parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43, parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34, &parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45);
              }
#line 877 "modules.m"
            /* direct tailcall eliminated */
#line 877 "modules.m"
            {
#line 877 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_20 = parse_tree__modules__LaterImports_30;
#line 877 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_32 = parse_tree__modules__STATE_VARIABLE_IndirectImports_43_43;
#line 877 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_34 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_44_44;
#line 877 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_36 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_45_45;

#line 877 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_36;
#line 877 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0__tmp_copy_34;
#line 877 "modules.m"
              parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0__tmp_copy_32;
#line 877 "modules.m"
              parse_tree__modules__Imports_20 = parse_tree__modules__Imports__tmp_copy_20;
#line 877 "modules.m"
            }
#line 877 "modules.m"
            continue;
#line 861 "modules.m"
          }
#line 881 "modules.m"
        else
#line 882 "modules.m"
          {
#line 882 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_37 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_36;
#line 882 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_35 = parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_34;
#line 882 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_IndirectImports_33 = parse_tree__modules__STATE_VARIABLE_IndirectImports_0_32;
#line 882 "modules.m"
          }
#line 881 "modules.m"
      }
#line 881 "modules.m"
      break;
#line 881 "modules.m"
    }
#line 848 "modules.m"
}

#line 959 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho5_11_p_0(
#line 959 "modules.m"
  MR_Word parse_tree__modules__Globals_12,
#line 959 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_13,
#line 959 "modules.m"
  MR_Word parse_tree__modules__Imports_14,
#line 959 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_15,
#line 959 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22,
#line 959 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23)
#line 959 "modules.m"
{
#line 967 "modules.m"
  while (MR_TRUE)
#line 967 "modules.m"
    {
#line 967 "modules.m"
      /* tailcall optimized into a loop */
#line 967 "modules.m"
      {
#line 967 "modules.m"
        MR_bool parse_tree__modules__succeeded;
#line 967 "modules.m"
        MR_Word parse_tree__modules__TypeCtorInfo_32_32 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 967 "modules.m"
        MR_Word parse_tree__modules__ImpIndirectImports_21;
#line 967 "modules.m"
        MR_Word parse_tree__modules__V_26_26;
#line 967 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;

#line 970 "modules.m"
        {
#line 970 "modules.m"
          parse_tree__modules__V_26_26 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_32_32);
        }
#line 968 "modules.m"
        {
#line 968 "modules.m"
          parse_tree__modules__process_module_short_interfaces_transitively__ho17_13_p_0(parse_tree__modules__Globals_12, parse_tree__modules__HaveReadModuleMaps_13, parse_tree__modules__Imports_14, parse_tree__modules__IntFileKind_15, parse_tree__modules__V_26_26, &parse_tree__modules__ImpIndirectImports_21, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27);
        }
#line 971 "modules.m"
        {
#line 971 "modules.m"
          parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_32_32, parse_tree__modules__ImpIndirectImports_21);
        }
#line 973 "modules.m"
        if (parse_tree__modules__succeeded)
#line 972 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_23 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;
#line 973 "modules.m"
        else
#line 974 "modules.m"
          {
#line 974 "modules.m"
            /* direct tailcall eliminated */
#line 974 "modules.m"
            {
#line 974 "modules.m"
              MR_Word parse_tree__modules__Imports__tmp_copy_14 = parse_tree__modules__ImpIndirectImports_21;
#line 974 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_22 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_27_27;

#line 974 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_22 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0__tmp_copy_22;
#line 974 "modules.m"
              parse_tree__modules__Imports_14 = parse_tree__modules__Imports__tmp_copy_14;
#line 974 "modules.m"
            }
#line 974 "modules.m"
            continue;
#line 974 "modules.m"
          }
#line 967 "modules.m"
      }
#line 967 "modules.m"
      break;
#line 967 "modules.m"
    }
#line 959 "modules.m"
}

#line 1301 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho4_6_p_0(
#line 1301 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6)
#line 1301 "modules.m"
{
#line 1306 "modules.m"
  while (MR_TRUE)
#line 1306 "modules.m"
    {
#line 1306 "modules.m"
      /* tailcall optimized into a loop */
#line 1306 "modules.m"
      {
#line 1306 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1306 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1306 "modules.m"
          {
#line 1307 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImportUseMap_6 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1307 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_InclMap_4 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1306 "modules.m"
          }
#line 1306 "modules.m"
        else
#line 1309 "modules.m"
          {
#line 1309 "modules.m"
            MR_Word parse_tree__modules__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1309 "modules.m"
            MR_Word parse_tree__modules__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1309 "modules.m"
            MR_Word parse_tree__modules__Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 2)));
#line 1309 "modules.m"
            MR_Word parse_tree__modules__Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 3)));
#line 1309 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_29_29;
#line 1309 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;
#line 1310 "modules.m"
            MR_Word parse_tree__modules__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 0)));
#line 1310 "modules.m"
            MR_Word parse_tree__modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 1)));
#line 1310 "modules.m"
            MR_Word parse_tree__modules___Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 4)));

#line 1314 "modules.m"
            {
#line 1314 "modules.m"
              parse_tree__modules__record_includes_acc_3_p_0(parse_tree__modules__Incls_21, parse_tree__modules__STATE_VARIABLE_InclMap_0_3, &parse_tree__modules__STATE_VARIABLE_InclMap_29_29);
            }
#line 1319 "modules.m"
            {
#line 1319 "modules.m"
              parse_tree__modules__record_avails_acc_3_p_0(parse_tree__modules__Avails_22, parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30);
            }
#line 1320 "modules.m"
            /* direct tailcall eliminated */
#line 1320 "modules.m"
            {
#line 1320 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__ItemBlocks_15;
#line 1320 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3 = parse_tree__modules__STATE_VARIABLE_InclMap_29_29;
#line 1320 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;

#line 1320 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5;
#line 1320 "modules.m"
              parse_tree__modules__STATE_VARIABLE_InclMap_0_3 = parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3;
#line 1320 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1320 "modules.m"
            }
#line 1320 "modules.m"
            continue;
#line 1309 "modules.m"
          }
#line 1306 "modules.m"
      }
#line 1306 "modules.m"
      break;
#line 1306 "modules.m"
    }
#line 1301 "modules.m"
}

#line 1301 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho3_6_p_0(
#line 1301 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6)
#line 1301 "modules.m"
{
#line 1306 "modules.m"
  while (MR_TRUE)
#line 1306 "modules.m"
    {
#line 1306 "modules.m"
      /* tailcall optimized into a loop */
#line 1306 "modules.m"
      {
#line 1306 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1306 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1306 "modules.m"
          {
#line 1307 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImportUseMap_6 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1307 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_InclMap_4 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1306 "modules.m"
          }
#line 1306 "modules.m"
        else
#line 1309 "modules.m"
          {
#line 1309 "modules.m"
            MR_Word parse_tree__modules__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1309 "modules.m"
            MR_Word parse_tree__modules__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1309 "modules.m"
            MR_Word parse_tree__modules__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 0)));
#line 1309 "modules.m"
            MR_Word parse_tree__modules__Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 2)));
#line 1309 "modules.m"
            MR_Word parse_tree__modules__Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 3)));
#line 1309 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_29_29;
#line 1309 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;
#line 1310 "modules.m"
            MR_Word parse_tree__modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 1)));
#line 1310 "modules.m"
            MR_Word parse_tree__modules___Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 4)));

#line 10447 "parse_tree.modules.c"
#line 10448 "parse_tree.modules.c"
            switch (MR_tag((MR_Word) parse_tree__modules__Section_19)) {
#line 10450 "parse_tree.modules.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 10452 "parse_tree.modules.c"
              case (MR_Integer) 0:
#line 1314 "modules.m"
                {
#line 1314 "modules.m"
                  parse_tree__modules__record_includes_acc_3_p_0(parse_tree__modules__Incls_21, parse_tree__modules__STATE_VARIABLE_InclMap_0_3, &parse_tree__modules__STATE_VARIABLE_InclMap_29_29);
                }
#line 10459 "parse_tree.modules.c"
                break;
#line 10461 "parse_tree.modules.c"
              case (MR_Integer) 1:
#line 1314 "modules.m"
                {
#line 1314 "modules.m"
                  parse_tree__modules__record_includes_acc_3_p_0(parse_tree__modules__Incls_21, parse_tree__modules__STATE_VARIABLE_InclMap_0_3, &parse_tree__modules__STATE_VARIABLE_InclMap_29_29);
                }
#line 10468 "parse_tree.modules.c"
                break;
#line 10470 "parse_tree.modules.c"
              case (MR_Integer) 2:
#line 1316 "modules.m"
                parse_tree__modules__STATE_VARIABLE_InclMap_29_29 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 10474 "parse_tree.modules.c"
                break;
#line 10476 "parse_tree.modules.c"
            }
#line 1319 "modules.m"
            {
#line 1319 "modules.m"
              parse_tree__modules__record_avails_acc_3_p_0(parse_tree__modules__Avails_22, parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30);
            }
#line 1320 "modules.m"
            /* direct tailcall eliminated */
#line 1320 "modules.m"
            {
#line 1320 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__ItemBlocks_15;
#line 1320 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3 = parse_tree__modules__STATE_VARIABLE_InclMap_29_29;
#line 1320 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;

#line 1320 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5;
#line 1320 "modules.m"
              parse_tree__modules__STATE_VARIABLE_InclMap_0_3 = parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_3;
#line 1320 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1320 "modules.m"
            }
#line 1320 "modules.m"
            continue;
#line 1309 "modules.m"
          }
#line 1306 "modules.m"
      }
#line 1306 "modules.m"
      break;
#line 1306 "modules.m"
    }
#line 1301 "modules.m"
}

#line 1301 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho2_6_p_0(
#line 1301 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6)
#line 1301 "modules.m"
{
#line 1306 "modules.m"
  while (MR_TRUE)
#line 1306 "modules.m"
    {
#line 1306 "modules.m"
      /* tailcall optimized into a loop */
#line 1306 "modules.m"
      {
#line 1306 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1306 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1306 "modules.m"
          {
#line 1307 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImportUseMap_6 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1307 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_InclMap_4 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1306 "modules.m"
          }
#line 1306 "modules.m"
        else
#line 1309 "modules.m"
          {
#line 1309 "modules.m"
            MR_Word parse_tree__modules__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1309 "modules.m"
            MR_Word parse_tree__modules__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1309 "modules.m"
            MR_Word parse_tree__modules__Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 3)));
#line 1309 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;
#line 1310 "modules.m"
            MR_Word parse_tree__modules__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 0)));
#line 1310 "modules.m"
            MR_Word parse_tree__modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 1)));
#line 1310 "modules.m"
            MR_Word parse_tree__modules__Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 2)));
#line 1310 "modules.m"
            MR_Word parse_tree__modules___Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 4)));

#line 1319 "modules.m"
            {
#line 1319 "modules.m"
              parse_tree__modules__record_avails_acc_3_p_0(parse_tree__modules__Avails_22, parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30);
            }
#line 1320 "modules.m"
            /* direct tailcall eliminated */
#line 1320 "modules.m"
            {
#line 1320 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__ItemBlocks_15;
#line 1320 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;

#line 1320 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5;
#line 1320 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1320 "modules.m"
            }
#line 1320 "modules.m"
            continue;
#line 1309 "modules.m"
          }
#line 1306 "modules.m"
      }
#line 1306 "modules.m"
      break;
#line 1306 "modules.m"
    }
#line 1301 "modules.m"
}

#line 1301 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho1_6_p_0(
#line 1301 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_3,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_4,
#line 1301 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5,
#line 1301 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_6)
#line 1301 "modules.m"
{
#line 1306 "modules.m"
  while (MR_TRUE)
#line 1306 "modules.m"
    {
#line 1306 "modules.m"
      /* tailcall optimized into a loop */
#line 1306 "modules.m"
      {
#line 1306 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1306 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1306 "modules.m"
          {
#line 1307 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_ImportUseMap_6 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5;
#line 1307 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_InclMap_4 = parse_tree__modules__STATE_VARIABLE_InclMap_0_3;
#line 1306 "modules.m"
          }
#line 1306 "modules.m"
        else
#line 1309 "modules.m"
          {
#line 1309 "modules.m"
            MR_Word parse_tree__modules__ItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1309 "modules.m"
            MR_Word parse_tree__modules__ItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1309 "modules.m"
            MR_Word parse_tree__modules__Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 3)));
#line 1309 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;
#line 1310 "modules.m"
            MR_Word parse_tree__modules__Section_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 0)));
#line 1310 "modules.m"
            MR_Word parse_tree__modules__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 1)));
#line 1310 "modules.m"
            MR_Word parse_tree__modules__Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 2)));
#line 1310 "modules.m"
            MR_Word parse_tree__modules___Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_14, (MR_Integer) 4)));

#line 1319 "modules.m"
            {
#line 1319 "modules.m"
              parse_tree__modules__record_avails_acc_3_p_0(parse_tree__modules__Avails_22, parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30);
            }
#line 1320 "modules.m"
            /* direct tailcall eliminated */
#line 1320 "modules.m"
            {
#line 1320 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__ItemBlocks_15;
#line 1320 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_30_30;

#line 1320 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_5 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_5;
#line 1320 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1320 "modules.m"
            }
#line 1320 "modules.m"
            continue;
#line 1309 "modules.m"
          }
#line 1306 "modules.m"
      }
#line 1306 "modules.m"
      break;
#line 1306 "modules.m"
    }
#line 1301 "modules.m"
}

#line 753 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules__IntroducedFrom__pred__process_module_private_interfaces__753__1_2_p_0(
#line 753 "modules.m"
  MR_Word parse_tree__modules__FirstAncestor_25,
#line 753 "modules.m"
  MR_Word parse_tree__modules__ModuleName_27)
#line 753 "modules.m"
{
#line 753 "modules.m"
  {
#line 753 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 753 "modules.m"
    {
#line 753 "modules.m"
      return parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__FirstAncestor_25, parse_tree__modules__ModuleName_27);
    }
#line 753 "modules.m"
    return parse_tree__modules__succeeded;
#line 753 "modules.m"
  }
#line 753 "modules.m"
}

#line 1282 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____section_visibility_1_0(
#line 1282 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_6,
#line 1282 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1282 "modules.m"
{
#line 1282 "modules.m"
  {
#line 1282 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1282 "modules.m"
    {
#line 1282 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__HeadVar__2_2, parse_tree__modules__HeadVar__3_3);
#line 1282 "modules.m"
      return;
    }
#line 1282 "modules.m"
  }
#line 1282 "modules.m"
}

#line 1282 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_visibility_1_0(
#line 1282 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_5,
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1282 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1282 "modules.m"
{
#line 1282 "modules.m"
  {
#line 1282 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1282 "modules.m"
    {
#line 1282 "modules.m"
      return parse_tree__modules__succeeded = parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_118_105_115_105_98_105_108_105_116_121_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__HeadVar__2_2);
    }
#line 1282 "modules.m"
    return parse_tree__modules__succeeded;
#line 1282 "modules.m"
  }
#line 1282 "modules.m"
}

#line 720 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____section_appender_1_0(
#line 720 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_6,
#line 720 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 720 "modules.m"
{
#line 720 "modules.m"
  {
#line 720 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 720 "modules.m"
    {
#line 720 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_97_112_112_101_110_100_101_114_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__HeadVar__2_2, parse_tree__modules__HeadVar__3_3);
#line 720 "modules.m"
      return;
    }
#line 720 "modules.m"
  }
#line 720 "modules.m"
}

#line 720 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____section_appender_1_0(
#line 720 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_5,
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 720 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 720 "modules.m"
{
#line 720 "modules.m"
  {
#line 720 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 720 "modules.m"
    {
#line 720 "modules.m"
      return parse_tree__modules__succeeded = parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_115_101_99_116_105_111_110_95_97_112_112_101_110_100_101_114_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__HeadVar__2_2);
    }
#line 720 "modules.m"
    return parse_tree__modules__succeeded;
#line 720 "modules.m"
  }
#line 720 "modules.m"
}

#line 1698 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____opt_file_type_0_0(
#line 1698 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1698 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1698 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1698 "modules.m"
{
#line 1698 "modules.m"
  {
#line 1698 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1698 "modules.m"
    MR_Integer parse_tree__modules__Cast_HeadVar1_4 = (MR_Integer) parse_tree__modules__HeadVar__2_2;
#line 1698 "modules.m"
    MR_Integer parse_tree__modules__Cast_HeadVar2_5 = (MR_Integer) parse_tree__modules__HeadVar__3_3;

#line 1698 "modules.m"
    {
#line 1698 "modules.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__Cast_HeadVar1_4, parse_tree__modules__Cast_HeadVar2_5);
#line 1698 "modules.m"
      return;
    }
#line 1698 "modules.m"
  }
#line 1698 "modules.m"
}

#line 1698 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____opt_file_type_0_0(
#line 1698 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_1,
#line 1698 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1698 "modules.m"
{
#line 10878 "parse_tree.modules.c"
  {
#line 10880 "parse_tree.modules.c"
    MR_bool parse_tree__modules__succeeded = (parse_tree__modules__HeadVar__2_1 == parse_tree__modules__HeadVar__2_2);

#line 10883 "parse_tree.modules.c"
    return parse_tree__modules__succeeded;
#line 10885 "parse_tree.modules.c"
  }
#line 1698 "modules.m"
}

#line 1240 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_inclusion_map_0_0(
#line 1240 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1240 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1240 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1240 "modules.m"
{
#line 1240 "modules.m"
  {
#line 1240 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1240 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 1240 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 1240 "modules.m"
    {
#line 1240 "modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__modules_scalar_common_2[1], parse_tree__modules__HeadVar__1_1, ((MR_Box) (parse_tree__modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_5)));
#line 1240 "modules.m"
      return;
    }
#line 1240 "modules.m"
  }
#line 1240 "modules.m"
}

#line 1240 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_inclusion_map_0_0(
#line 1240 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1240 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1240 "modules.m"
{
#line 1240 "modules.m"
  {
#line 1240 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1240 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 1240 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 1240 "modules.m"
    {
#line 1240 "modules.m"
      return parse_tree__modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__modules_scalar_common_2[1], ((MR_Box) (parse_tree__modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_4)));
    }
#line 1240 "modules.m"
    return parse_tree__modules__succeeded;
#line 1240 "modules.m"
  }
#line 1240 "modules.m"
}

#line 1248 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____module_import_or_use_map_0_0(
#line 1248 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1248 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1248 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1248 "modules.m"
{
#line 1248 "modules.m"
  {
#line 1248 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1248 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_4 = parse_tree__modules__HeadVar__2_2;
#line 1248 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_5 = parse_tree__modules__HeadVar__3_3;

#line 1248 "modules.m"
    {
#line 1248 "modules.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__modules_scalar_common_2[0], parse_tree__modules__HeadVar__1_1, ((MR_Box) (parse_tree__modules__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_5)));
#line 1248 "modules.m"
      return;
    }
#line 1248 "modules.m"
  }
#line 1248 "modules.m"
}

#line 1248 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____module_import_or_use_map_0_0(
#line 1248 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1248 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1248 "modules.m"
{
#line 1248 "modules.m"
  {
#line 1248 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1248 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar1_3 = parse_tree__modules__HeadVar__1_1;
#line 1248 "modules.m"
    MR_Word parse_tree__modules__Cast_HeadVar2_4 = parse_tree__modules__HeadVar__2_2;

#line 1248 "modules.m"
    {
#line 1248 "modules.m"
      return parse_tree__modules__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__modules_scalar_common_2[0], ((MR_Box) (parse_tree__modules__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__modules__Cast_HeadVar2_4)));
    }
#line 1248 "modules.m"
    return parse_tree__modules__succeeded;
#line 1248 "modules.m"
  }
#line 1248 "modules.m"
}

#line 717 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____int_section_maker_1_0(
#line 717 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_6,
#line 717 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 717 "modules.m"
{
#line 717 "modules.m"
  {
#line 717 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 717 "modules.m"
    {
#line 717 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_105_110_116_95_115_101_99_116_105_111_110_95_109_97_107_101_114_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__HeadVar__2_2, parse_tree__modules__HeadVar__3_3);
#line 717 "modules.m"
      return;
    }
#line 717 "modules.m"
  }
#line 717 "modules.m"
}

#line 717 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____int_section_maker_1_0(
#line 717 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_5,
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 717 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 717 "modules.m"
{
#line 717 "modules.m"
  {
#line 717 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 717 "modules.m"
    {
#line 717 "modules.m"
      return parse_tree__modules__succeeded = parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_109_111_100_117_108_101_115_95_95_105_110_116_95_115_101_99_116_105_111_110_95_109_97_107_101_114_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__HeadVar__2_2);
    }
#line 717 "modules.m"
    return parse_tree__modules__succeeded;
#line 717 "modules.m"
  }
#line 717 "modules.m"
}

#line 1242 "modules.m"
static void MR_CALL 
parse_tree__modules____Compare____import_or_use_context_0_0(
#line 1242 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__1_1,
#line 1242 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1242 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3)
#line 1242 "modules.m"
{
#line 1242 "modules.m"
  {
#line 1242 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1242 "modules.m"
    MR_Integer parse_tree__modules__CastX_9 = (MR_Integer) parse_tree__modules__HeadVar__2_2;
#line 1242 "modules.m"
    MR_Integer parse_tree__modules__CastY_10 = (MR_Integer) parse_tree__modules__HeadVar__3_3;

#line 1242 "modules.m"
    parse_tree__modules__succeeded = (parse_tree__modules__CastX_9 == parse_tree__modules__CastY_10);
#line 1242 "modules.m"
    if (parse_tree__modules__succeeded)
#line 11096 "parse_tree.modules.c"
      *parse_tree__modules__HeadVar__1_1 = (MR_Integer) 0;
#line 1242 "modules.m"
    else
#line 1242 "modules.m"
      {
#line 1242 "modules.m"
        MR_Word parse_tree__modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 0)));
#line 1242 "modules.m"
        MR_Word parse_tree__modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 1)));
#line 1242 "modules.m"
        MR_Word parse_tree__modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__3_3, (MR_Integer) 0)));
#line 1242 "modules.m"
        MR_Word parse_tree__modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__3_3, (MR_Integer) 1)));
#line 1242 "modules.m"
        MR_Word parse_tree__modules__V_8_8;
#line 1242 "modules.m"
        MR_Integer parse_tree__modules__V_13_13 = (MR_Integer) parse_tree__modules__V_4_4;
#line 1242 "modules.m"
        MR_Integer parse_tree__modules__V_14_14 = (MR_Integer) parse_tree__modules__V_6_6;

#line 1242 "modules.m"
        {
#line 1242 "modules.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__modules__V_8_8, parse_tree__modules__V_13_13, parse_tree__modules__V_14_14);
        }
#line 11122 "parse_tree.modules.c"
        parse_tree__modules__succeeded = (parse_tree__modules__V_8_8 == (MR_Integer) 0);
#line 1242 "modules.m"
        parse_tree__modules__succeeded = !(parse_tree__modules__succeeded);
#line 1242 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1242 "modules.m"
          *parse_tree__modules__HeadVar__1_1 = parse_tree__modules__V_8_8;
#line 1242 "modules.m"
        else
#line 1242 "modules.m"
          {
#line 1242 "modules.m"
            mercury__term____Compare____context_0_0(parse_tree__modules__HeadVar__1_1, parse_tree__modules__V_5_5, parse_tree__modules__V_7_7);
#line 1242 "modules.m"
            return;
          }
#line 1242 "modules.m"
      }
#line 1242 "modules.m"
  }
#line 1242 "modules.m"
}

#line 1242 "modules.m"
static MR_bool MR_CALL 
parse_tree__modules____Unify____import_or_use_context_0_0(
#line 1242 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1242 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2)
#line 1242 "modules.m"
{
#line 1242 "modules.m"
  {
#line 1242 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1242 "modules.m"
    MR_Integer parse_tree__modules__CastX_7 = (MR_Integer) parse_tree__modules__HeadVar__1_1;
#line 1242 "modules.m"
    MR_Integer parse_tree__modules__CastY_8 = (MR_Integer) parse_tree__modules__HeadVar__2_2;

#line 1242 "modules.m"
    parse_tree__modules__succeeded = (parse_tree__modules__CastX_7 == parse_tree__modules__CastY_8);
#line 1242 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1242 "modules.m"
      parse_tree__modules__succeeded = MR_TRUE;
#line 1242 "modules.m"
    else
#line 1242 "modules.m"
      {
#line 1242 "modules.m"
        MR_Word parse_tree__modules__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1242 "modules.m"
        MR_Word parse_tree__modules__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1242 "modules.m"
        MR_Word parse_tree__modules__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 0)));
#line 1242 "modules.m"
        MR_Word parse_tree__modules__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HeadVar__2_2, (MR_Integer) 1)));

#line 11183 "parse_tree.modules.c"
        parse_tree__modules__succeeded = (parse_tree__modules__V_3_3 == parse_tree__modules__V_5_5);
#line 1242 "modules.m"
        if (parse_tree__modules__succeeded)
#line 11187 "parse_tree.modules.c"
          {
#line 11189 "parse_tree.modules.c"
            return parse_tree__modules__succeeded = mercury__term____Unify____context_0_0(parse_tree__modules__V_4_4, parse_tree__modules__V_6_6);
          }
#line 1242 "modules.m"
      }
#line 1242 "modules.m"
    return parse_tree__modules__succeeded;
#line 1242 "modules.m"
  }
#line 1242 "modules.m"
}

#line 1689 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__read_trans_opt_files_10_p_0_1(
#line 1689 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1689 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 1689 "modules.m"
{
#line 1689 "modules.m"
  {
#line 1689 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 1689 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1689 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__2_2;

#line 1689 "modules.m"
    {
#line 1689 "modules.m"
      parse_tree__modules__conv0_HeadVar__2_2 = parse_tree__prog_item__wrap_avail_use_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 1689 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__2_2));
#line 1689 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 1689 "modules.m"
  }
#line 1689 "modules.m"
}

#line 1658 "modules.m"
static void MR_CALL 
parse_tree__modules__read_trans_opt_files_10_p_0(
#line 1658 "modules.m"
  MR_Word parse_tree__modules__Globals_1,
#line 1658 "modules.m"
  MR_Word parse_tree__modules__HeadVar__2_2,
#line 1658 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_OptItemBlocks_0_3,
#line 1658 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_OptItemBlocks_4,
#line 1658 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_5,
#line 1658 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_6,
#line 1658 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Error_0_7,
#line 1658 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Error_8)
#line 1658 "modules.m"
{
#line 1663 "modules.m"
  while (MR_TRUE)
#line 1663 "modules.m"
    {
#line 1663 "modules.m"
      /* tailcall optimized into a loop */
#line 1663 "modules.m"
      {
#line 1663 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1663 "modules.m"
        if ((parse_tree__modules__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1663 "modules.m"
          {
#line 1663 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_Error_8 = parse_tree__modules__STATE_VARIABLE_Error_0_7;
#line 1663 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_Specs_6 = parse_tree__modules__STATE_VARIABLE_Specs_0_5;
#line 1663 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_OptItemBlocks_4 = parse_tree__modules__STATE_VARIABLE_OptItemBlocks_0_3;
#line 1663 "modules.m"
          }
#line 1663 "modules.m"
        else
#line 1665 "modules.m"
          {
#line 1665 "modules.m"
            MR_Word parse_tree__modules__Import_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__2_2, (MR_Integer) 0)));
#line 1665 "modules.m"
            MR_Word parse_tree__modules__Imports_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__2_2, (MR_Integer) 1)));
#line 1665 "modules.m"
            MR_Word parse_tree__modules__VeryVerbose_31;
#line 1665 "modules.m"
            MR_String parse_tree__modules__ImportString_32;
#line 1665 "modules.m"
            MR_String parse_tree__modules__FileName_33;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__ParseTreeOpt_34;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__OptSpecs_35;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__OptError_36;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__OptModuleName_37;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__OptContext_39;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__OptUses_40;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__OptItems_41;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__OptSection_42;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__OptAvails_43;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__OptItemBlock_44;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_Specs_54_54;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_Specs_70_70;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_Specs_72_72;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_Error_73_73;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_Specs_74_74;
#line 1665 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_OptItemBlocks_79_79;
#line 1686 "modules.m"
            MR_Word parse_tree__modules___OptFileKind_38;

#line 1666 "modules.m"
            {
#line 1666 "modules.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_1, (MR_Integer) 46, &parse_tree__modules__VeryVerbose_31);
            }
#line 1667 "modules.m"
            {
#line 1667 "modules.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__modules__VeryVerbose_31, parse_tree__modules__Globals_1, parse_tree__modules__STATE_VARIABLE_Specs_0_5, &parse_tree__modules__STATE_VARIABLE_Specs_54_54);
            }
#line 1668 "modules.m"
            {
#line 1668 "modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__modules__VeryVerbose_31, (MR_String) "% Reading transitive optimization interface for module");
            }
#line 1670 "modules.m"
            {
#line 1670 "modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__modules__VeryVerbose_31, (MR_String) " \140");
            }
#line 1671 "modules.m"
            {
#line 1671 "modules.m"
              parse_tree__modules__ImportString_32 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__modules__Import_25);
            }
#line 1672 "modules.m"
            {
#line 1672 "modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__modules__VeryVerbose_31, parse_tree__modules__ImportString_32);
            }
#line 1673 "modules.m"
            {
#line 1673 "modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__modules__VeryVerbose_31, (MR_String) "\'... ");
            }
#line 1674 "modules.m"
            {
#line 1674 "modules.m"
              libs__file_util__maybe_flush_output_3_p_0(parse_tree__modules__VeryVerbose_31);
            }
#line 1676 "modules.m"
            {
#line 1676 "modules.m"
              parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__modules__Globals_1, parse_tree__modules__Import_25, (MR_String) ".trans_opt", &parse_tree__modules__FileName_33);
            }
#line 1678 "modules.m"
            {
#line 1678 "modules.m"
              parse_tree__prog_io__actually_read_module_opt_9_p_0((MR_Integer) 1, parse_tree__modules__Globals_1, parse_tree__modules__FileName_33, parse_tree__modules__Import_25, &parse_tree__modules__ParseTreeOpt_34, &parse_tree__modules__OptSpecs_35, &parse_tree__modules__OptError_36);
            }
#line 1680 "modules.m"
            {
#line 1680 "modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__modules__VeryVerbose_31, (MR_String) " done.\n");
            }
#line 1681 "modules.m"
            {
#line 1681 "modules.m"
              parse_tree__modules__STATE_VARIABLE_Specs_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__modules__OptSpecs_35, parse_tree__modules__STATE_VARIABLE_Specs_54_54);
            }
#line 1682 "modules.m"
            {
#line 1682 "modules.m"
              parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_111_112_116_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0((MR_Integer) 1, parse_tree__modules__FileName_33, parse_tree__modules__OptSpecs_35, parse_tree__modules__OptError_36, parse_tree__modules__STATE_VARIABLE_Specs_70_70, &parse_tree__modules__STATE_VARIABLE_Specs_72_72, parse_tree__modules__STATE_VARIABLE_Error_0_7, &parse_tree__modules__STATE_VARIABLE_Error_73_73);
            }
#line 1684 "modules.m"
            {
#line 1684 "modules.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__modules__VeryVerbose_31, parse_tree__modules__Globals_1, parse_tree__modules__STATE_VARIABLE_Specs_72_72, &parse_tree__modules__STATE_VARIABLE_Specs_74_74);
            }
#line 1686 "modules.m"
            parse_tree__modules__OptModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeOpt_34, (MR_Integer) 0)));
#line 1686 "modules.m"
            parse_tree__modules___OptFileKind_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeOpt_34, (MR_Integer) 1)));
#line 1686 "modules.m"
            parse_tree__modules__OptContext_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeOpt_34, (MR_Integer) 2)));
#line 1686 "modules.m"
            parse_tree__modules__OptUses_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeOpt_34, (MR_Integer) 3)));
#line 1686 "modules.m"
            parse_tree__modules__OptItems_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeOpt_34, (MR_Integer) 4)));
#line 1688 "modules.m"
            {
#line 1688 "modules.m"
              parse_tree__modules__OptSection_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1688 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__OptSection_42, 0) = ((MR_Box) (parse_tree__modules__OptModuleName_37));
#line 1688 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__OptSection_42, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1688 "modules.m"
            }
#line 1689 "modules.m"
            {
#line 1689 "modules.m"
              parse_tree__modules__OptAvails_43 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &parse_tree__modules_scalar_common_2[5], parse_tree__modules__OptUses_40);
            }
#line 1690 "modules.m"
            {
#line 1690 "modules.m"
              parse_tree__modules__OptItemBlock_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1690 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__OptItemBlock_44, 0) = ((MR_Box) (parse_tree__modules__OptSection_42));
#line 1690 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__OptItemBlock_44, 1) = ((MR_Box) (parse_tree__modules__OptContext_39));
#line 1690 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__OptItemBlock_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1690 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__OptItemBlock_44, 3) = ((MR_Box) (parse_tree__modules__OptAvails_43));
#line 1690 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__OptItemBlock_44, 4) = ((MR_Box) (parse_tree__modules__OptItems_41));
#line 1690 "modules.m"
            }
#line 1692 "modules.m"
            {
#line 1692 "modules.m"
              parse_tree__modules__STATE_VARIABLE_OptItemBlocks_79_79 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__modules_scalar_common_1[6], parse_tree__modules__STATE_VARIABLE_OptItemBlocks_0_3, ((MR_Box) (parse_tree__modules__OptItemBlock_44)));
            }
#line 1693 "modules.m"
            /* direct tailcall eliminated */
#line 1693 "modules.m"
            {
#line 1693 "modules.m"
              MR_Word parse_tree__modules__HeadVar__2__tmp_copy_2 = parse_tree__modules__Imports_26;
#line 1693 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_OptItemBlocks_0__tmp_copy_3 = parse_tree__modules__STATE_VARIABLE_OptItemBlocks_79_79;
#line 1693 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_Specs_74_74;
#line 1693 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_Error_0__tmp_copy_7 = parse_tree__modules__STATE_VARIABLE_Error_73_73;

#line 1693 "modules.m"
              parse_tree__modules__STATE_VARIABLE_Error_0_7 = parse_tree__modules__STATE_VARIABLE_Error_0__tmp_copy_7;
#line 1693 "modules.m"
              parse_tree__modules__STATE_VARIABLE_Specs_0_5 = parse_tree__modules__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 1693 "modules.m"
              parse_tree__modules__STATE_VARIABLE_OptItemBlocks_0_3 = parse_tree__modules__STATE_VARIABLE_OptItemBlocks_0__tmp_copy_3;
#line 1693 "modules.m"
              parse_tree__modules__HeadVar__2_2 = parse_tree__modules__HeadVar__2__tmp_copy_2;
#line 1693 "modules.m"
            }
#line 1693 "modules.m"
            continue;
#line 1665 "modules.m"
          }
#line 1663 "modules.m"
      }
#line 1663 "modules.m"
      break;
#line 1663 "modules.m"
    }
#line 1658 "modules.m"
}

#line 1623 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__read_optimization_interfaces_12_p_0_2(
#line 1623 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1623 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 1623 "modules.m"
{
#line 1623 "modules.m"
  {
#line 1623 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 1623 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1623 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__2_2;

#line 1623 "modules.m"
    {
#line 1623 "modules.m"
      parse_tree__modules__conv1_HeadVar__2_2 = parse_tree__prog_item__avail_use_info_module_name_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 1623 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__2_2));
#line 1623 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 1623 "modules.m"
  }
#line 1623 "modules.m"
}

#line 1611 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__read_optimization_interfaces_12_p_0_1(
#line 1611 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1611 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 1611 "modules.m"
{
#line 1611 "modules.m"
  {
#line 1611 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 1611 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1611 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__2_2;

#line 1611 "modules.m"
    {
#line 1611 "modules.m"
      parse_tree__modules__conv0_HeadVar__2_2 = parse_tree__prog_item__wrap_avail_use_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 1611 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__2_2));
#line 1611 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 1611 "modules.m"
  }
#line 1611 "modules.m"
}

#line 1583 "modules.m"
static void MR_CALL 
parse_tree__modules__read_optimization_interfaces_12_p_0(
#line 1583 "modules.m"
  MR_Word parse_tree__modules__Globals_1,
#line 1583 "modules.m"
  MR_Word parse_tree__modules__Transitive_2,
#line 1583 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3,
#line 1583 "modules.m"
  MR_Word parse_tree__modules__ModulesProcessed0_4,
#line 1583 "modules.m"
  MR_Word parse_tree__modules__HeadVar__5_5,
#line 1583 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__6_6,
#line 1583 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_7,
#line 1583 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_8,
#line 1583 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Error_0_9,
#line 1583 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Error_10)
#line 1583 "modules.m"
{
#line 1589 "modules.m"
  while (MR_TRUE)
#line 1589 "modules.m"
    {
#line 1589 "modules.m"
      /* tailcall optimized into a loop */
#line 1589 "modules.m"
      {
#line 1589 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1589 "modules.m"
        if ((parse_tree__modules__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1589 "modules.m"
          {
#line 1590 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_Error_10 = parse_tree__modules__STATE_VARIABLE_Error_0_9;
#line 1590 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_Specs_8 = parse_tree__modules__STATE_VARIABLE_Specs_0_7;
#line 1589 "modules.m"
            *parse_tree__modules__HeadVar__6_6 = parse_tree__modules__HeadVar__5_5;
#line 1589 "modules.m"
          }
#line 1589 "modules.m"
        else
#line 1593 "modules.m"
          {
#line 1593 "modules.m"
            MR_Word parse_tree__modules__TypeCtorInfo_102_102;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__ModuleToRead_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 0)));
#line 1593 "modules.m"
            MR_Word parse_tree__modules__ModulesToRead_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 1)));
#line 1593 "modules.m"
            MR_Word parse_tree__modules__VeryVerbose_37;
#line 1593 "modules.m"
            MR_String parse_tree__modules__ModuleToReadString_38;
#line 1593 "modules.m"
            MR_String parse_tree__modules__FileName_39;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__ParseTreeOpt_40;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__OptSpecs_41;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__OptError_42;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__OptModuleName_43;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__OptFileKind_44;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__OptModuleContext_45;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__OptUses_46;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__OptItems_47;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__OptSection_48;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__OptAvails_49;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__OptItemBlock_50;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__ModulesProcessed_56;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__NewDeps_57;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_Specs_67_67;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_OptItemBlocksCord_83_83;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_Specs_85_85;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_Error_86_86;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_Specs_87_87;
#line 1593 "modules.m"
            MR_Word parse_tree__modules__V_97_97;

#line 1594 "modules.m"
            {
#line 1594 "modules.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_1, (MR_Integer) 46, &parse_tree__modules__VeryVerbose_37);
            }
#line 1595 "modules.m"
            {
#line 1595 "modules.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__modules__VeryVerbose_37, parse_tree__modules__Globals_1, parse_tree__modules__STATE_VARIABLE_Specs_0_7, &parse_tree__modules__STATE_VARIABLE_Specs_67_67);
            }
#line 1596 "modules.m"
            {
#line 1596 "modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__modules__VeryVerbose_37, (MR_String) "% Reading optimization interface for module");
            }
#line 1598 "modules.m"
            {
#line 1598 "modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__modules__VeryVerbose_37, (MR_String) " \140");
            }
#line 1599 "modules.m"
            {
#line 1599 "modules.m"
              parse_tree__modules__ModuleToReadString_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__modules__ModuleToRead_30);
            }
#line 1600 "modules.m"
            {
#line 1600 "modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__modules__VeryVerbose_37, parse_tree__modules__ModuleToReadString_38);
            }
#line 1601 "modules.m"
            {
#line 1601 "modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__modules__VeryVerbose_37, (MR_String) "\'...\n");
            }
#line 1602 "modules.m"
            {
#line 1602 "modules.m"
              libs__file_util__maybe_flush_output_3_p_0(parse_tree__modules__VeryVerbose_37);
            }
#line 1604 "modules.m"
            {
#line 1604 "modules.m"
              parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__modules__Globals_1, parse_tree__modules__ModuleToRead_30, (MR_String) ".opt", &parse_tree__modules__FileName_39);
            }
#line 1606 "modules.m"
            {
#line 1606 "modules.m"
              parse_tree__prog_io__actually_read_module_opt_9_p_0((MR_Integer) 0, parse_tree__modules__Globals_1, parse_tree__modules__FileName_39, parse_tree__modules__ModuleToRead_30, &parse_tree__modules__ParseTreeOpt_40, &parse_tree__modules__OptSpecs_41, &parse_tree__modules__OptError_42);
            }
#line 1608 "modules.m"
            parse_tree__modules__OptModuleName_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeOpt_40, (MR_Integer) 0)));
#line 1608 "modules.m"
            parse_tree__modules__OptFileKind_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeOpt_40, (MR_Integer) 1)));
#line 1608 "modules.m"
            parse_tree__modules__OptModuleContext_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeOpt_40, (MR_Integer) 2)));
#line 1608 "modules.m"
            parse_tree__modules__OptUses_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeOpt_40, (MR_Integer) 3)));
#line 1608 "modules.m"
            parse_tree__modules__OptItems_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ParseTreeOpt_40, (MR_Integer) 4)));
#line 1610 "modules.m"
            {
#line 1610 "modules.m"
              parse_tree__modules__OptSection_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1610 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__OptSection_48, 0) = ((MR_Box) (parse_tree__modules__OptModuleName_43));
#line 1610 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__OptSection_48, 1) = ((MR_Box) (parse_tree__modules__OptFileKind_44));
#line 1610 "modules.m"
            }
#line 11715 "parse_tree.modules.c"
            parse_tree__modules__TypeCtorInfo_102_102 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0;
#line 1611 "modules.m"
            {
#line 1611 "modules.m"
              parse_tree__modules__OptAvails_49 = mercury__list__map_2_f_0(parse_tree__modules__TypeCtorInfo_102_102, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &parse_tree__modules_scalar_common_2[3], parse_tree__modules__OptUses_46);
            }
#line 1612 "modules.m"
            {
#line 1612 "modules.m"
              parse_tree__modules__OptItemBlock_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1612 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__OptItemBlock_50, 0) = ((MR_Box) (parse_tree__modules__OptSection_48));
#line 1612 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__OptItemBlock_50, 1) = ((MR_Box) (parse_tree__modules__OptModuleContext_45));
#line 1612 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__OptItemBlock_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1612 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__OptItemBlock_50, 3) = ((MR_Box) (parse_tree__modules__OptAvails_49));
#line 1612 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__OptItemBlock_50, 4) = ((MR_Box) (parse_tree__modules__OptItems_47));
#line 1612 "modules.m"
            }
#line 1614 "modules.m"
            {
#line 1614 "modules.m"
              parse_tree__modules__STATE_VARIABLE_OptItemBlocksCord_83_83 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__modules_scalar_common_1[6], parse_tree__modules__HeadVar__5_5, ((MR_Box) (parse_tree__modules__OptItemBlock_50)));
            }
#line 1615 "modules.m"
            {
#line 1615 "modules.m"
              parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_111_112_116_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0((MR_Integer) 0, parse_tree__modules__FileName_39, parse_tree__modules__OptSpecs_41, parse_tree__modules__OptError_42, parse_tree__modules__STATE_VARIABLE_Specs_67_67, &parse_tree__modules__STATE_VARIABLE_Specs_85_85, parse_tree__modules__STATE_VARIABLE_Error_0_9, &parse_tree__modules__STATE_VARIABLE_Error_86_86);
            }
#line 1617 "modules.m"
            {
#line 1617 "modules.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(parse_tree__modules__VeryVerbose_37, parse_tree__modules__Globals_1, parse_tree__modules__STATE_VARIABLE_Specs_85_85, &parse_tree__modules__STATE_VARIABLE_Specs_87_87);
            }
#line 1618 "modules.m"
            {
#line 1618 "modules.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__modules__VeryVerbose_37, (MR_String) "% done.\n");
            }
#line 1631 "modules.m"
#line 1631 "modules.m"
            switch (parse_tree__modules__Transitive_2) {
#line 1631 "modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1631 "modules.m"
              case (MR_Integer) 0:
#line 1632 "modules.m"
                {
#line 1633 "modules.m"
                  parse_tree__modules__ModulesProcessed_56 = parse_tree__modules__ModulesProcessed0_4;
#line 1634 "modules.m"
                  parse_tree__modules__NewDeps_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1632 "modules.m"
                }
#line 1631 "modules.m"
                break;
#line 1631 "modules.m"
              case (MR_Integer) 1:
#line 1621 "modules.m"
                {
#line 1621 "modules.m"
                  MR_Word parse_tree__modules__TypeCtorInfo_107_107 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1621 "modules.m"
                  MR_Word parse_tree__modules__NewUseDeps0_51;
#line 1621 "modules.m"
                  MR_Word parse_tree__modules__NewImplicitImportDeps0_52;
#line 1621 "modules.m"
                  MR_Word parse_tree__modules__NewImplicitUseDeps0_53;
#line 1621 "modules.m"
                  MR_Word parse_tree__modules__NewDepsSet0_54;
#line 1621 "modules.m"
                  MR_Word parse_tree__modules__NewDepsSet_55;
#line 1621 "modules.m"
                  MR_Word parse_tree__modules__V_91_91;
#line 1621 "modules.m"
                  MR_Word parse_tree__modules__V_93_93;
#line 1621 "modules.m"
                  MR_Word parse_tree__modules__V_94_94;
#line 1621 "modules.m"
                  MR_Word parse_tree__modules__V_95_95;

#line 1623 "modules.m"
                  {
#line 1623 "modules.m"
                    parse_tree__modules__V_91_91 = mercury__list__map_2_f_0(parse_tree__modules__TypeCtorInfo_102_102, parse_tree__modules__TypeCtorInfo_107_107, (MR_Word) &parse_tree__modules_scalar_common_2[4], parse_tree__modules__OptUses_46);
                  }
#line 1622 "modules.m"
                  {
#line 1622 "modules.m"
                    parse_tree__modules__NewUseDeps0_51 = mercury__set__list_to_set_1_f_0(parse_tree__modules__TypeCtorInfo_107_107, parse_tree__modules__V_91_91);
                  }
#line 1624 "modules.m"
                  {
#line 1624 "modules.m"
                    parse_tree__get_dependencies__get_implicit_dependencies_in_items_4_p_0(parse_tree__modules__Globals_1, parse_tree__modules__OptItems_47, &parse_tree__modules__NewImplicitImportDeps0_52, &parse_tree__modules__NewImplicitUseDeps0_53);
                  }
#line 1627 "modules.m"
                  {
#line 1627 "modules.m"
                    parse_tree__modules__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1627 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__V_95_95, 0) = ((MR_Box) (parse_tree__modules__NewImplicitUseDeps0_53));
#line 1627 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1627 "modules.m"
                  }
#line 1627 "modules.m"
                  {
#line 1627 "modules.m"
                    parse_tree__modules__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1627 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__V_94_94, 0) = ((MR_Box) (parse_tree__modules__NewImplicitImportDeps0_52));
#line 1627 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__V_94_94, 1) = ((MR_Box) (parse_tree__modules__V_95_95));
#line 1627 "modules.m"
                  }
#line 1626 "modules.m"
                  {
#line 1626 "modules.m"
                    parse_tree__modules__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1626 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__V_93_93, 0) = ((MR_Box) (parse_tree__modules__NewUseDeps0_51));
#line 1626 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__V_93_93, 1) = ((MR_Box) (parse_tree__modules__V_94_94));
#line 1626 "modules.m"
                  }
#line 1626 "modules.m"
                  {
#line 1626 "modules.m"
                    parse_tree__modules__NewDepsSet0_54 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_107_107, parse_tree__modules__V_93_93);
                  }
#line 1628 "modules.m"
                  {
#line 1628 "modules.m"
                    mercury__set__difference_3_p_0(parse_tree__modules__TypeCtorInfo_107_107, parse_tree__modules__NewDepsSet0_54, parse_tree__modules__ModulesProcessed0_4, &parse_tree__modules__NewDepsSet_55);
                  }
#line 1629 "modules.m"
                  {
#line 1629 "modules.m"
                    mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_107_107, parse_tree__modules__ModulesProcessed0_4, parse_tree__modules__NewDepsSet_55, &parse_tree__modules__ModulesProcessed_56);
                  }
#line 1630 "modules.m"
                  {
#line 1630 "modules.m"
                    mercury__set__to_sorted_list_2_p_0(parse_tree__modules__TypeCtorInfo_107_107, parse_tree__modules__NewDepsSet_55, &parse_tree__modules__NewDeps_57);
                  }
#line 1621 "modules.m"
                }
#line 1631 "modules.m"
                break;
#line 1631 "modules.m"
            }
#line 1637 "modules.m"
            {
#line 1637 "modules.m"
              parse_tree__modules__V_97_97 = mercury__list__f_43_43_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__modules__NewDeps_57, parse_tree__modules__ModulesToRead_31);
            }
#line 1636 "modules.m"
            /* direct tailcall eliminated */
#line 1636 "modules.m"
            {
#line 1636 "modules.m"
              MR_Word parse_tree__modules__HeadVar__3__tmp_copy_3 = parse_tree__modules__V_97_97;
#line 1636 "modules.m"
              MR_Word parse_tree__modules__ModulesProcessed0__tmp_copy_4 = parse_tree__modules__ModulesProcessed_56;
#line 1636 "modules.m"
              MR_Word parse_tree__modules__HeadVar__5__tmp_copy_5 = parse_tree__modules__STATE_VARIABLE_OptItemBlocksCord_83_83;
#line 1636 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0__tmp_copy_7 = parse_tree__modules__STATE_VARIABLE_Specs_87_87;
#line 1636 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_Error_0__tmp_copy_9 = parse_tree__modules__STATE_VARIABLE_Error_86_86;

#line 1636 "modules.m"
              parse_tree__modules__STATE_VARIABLE_Error_0_9 = parse_tree__modules__STATE_VARIABLE_Error_0__tmp_copy_9;
#line 1636 "modules.m"
              parse_tree__modules__STATE_VARIABLE_Specs_0_7 = parse_tree__modules__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 1636 "modules.m"
              parse_tree__modules__HeadVar__5_5 = parse_tree__modules__HeadVar__5__tmp_copy_5;
#line 1636 "modules.m"
              parse_tree__modules__ModulesProcessed0_4 = parse_tree__modules__ModulesProcessed0__tmp_copy_4;
#line 1636 "modules.m"
              parse_tree__modules__HeadVar__3_3 = parse_tree__modules__HeadVar__3__tmp_copy_3;
#line 1636 "modules.m"
            }
#line 1636 "modules.m"
            continue;
#line 1593 "modules.m"
          }
#line 1589 "modules.m"
      }
#line 1589 "modules.m"
      break;
#line 1589 "modules.m"
    }
#line 1583 "modules.m"
}

#line 1559 "modules.m"
static void MR_CALL 
parse_tree__modules__keep_only_unused_and_reuse_pragmas_acc_5_p_0(
#line 1559 "modules.m"
  MR_Word parse_tree__modules__UnusedArgs_1,
#line 1559 "modules.m"
  MR_Word parse_tree__modules__StructureReuse_2,
#line 1559 "modules.m"
  MR_Word parse_tree__modules__HeadVar__3_3,
#line 1559 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ItemCord_0_4,
#line 1559 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ItemCord_5)
#line 1559 "modules.m"
{
#line 1562 "modules.m"
  while (MR_TRUE)
#line 1562 "modules.m"
    {
#line 1562 "modules.m"
      /* tailcall optimized into a loop */
#line 1562 "modules.m"
      {
#line 1562 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1562 "modules.m"
        if ((parse_tree__modules__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1562 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ItemCord_5 = parse_tree__modules__STATE_VARIABLE_ItemCord_0_4;
#line 1562 "modules.m"
        else
#line 1564 "modules.m"
          {
#line 1564 "modules.m"
            MR_Word parse_tree__modules__Item0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 0)));
#line 1564 "modules.m"
            MR_Word parse_tree__modules__Items0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__3_3, (MR_Integer) 1)));
#line 1564 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ItemCord_25_25;
#line 1566 "modules.m"
            MR_Word parse_tree__modules__ItemPragma0_16;
#line 1566 "modules.m"
            MR_Word parse_tree__modules__Pragma0_17;
#line 1567 "modules.m"
            MR_Word parse_tree__modules__V_18_18;
#line 1567 "modules.m"
            MR_Word parse_tree__modules__V_19_19;
#line 1567 "modules.m"
            MR_Integer parse_tree__modules__V_20_20;

#line 1566 "modules.m"
            parse_tree__modules__succeeded = ((((MR_tag((MR_Word) parse_tree__modules__Item0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item0_13, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1566 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1566 "modules.m"
              {
#line 1566 "modules.m"
                parse_tree__modules__ItemPragma0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item0_13, (MR_Integer) 1)));
#line 1567 "modules.m"
                parse_tree__modules__Pragma0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma0_16, (MR_Integer) 0)));
#line 1567 "modules.m"
                parse_tree__modules__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma0_16, (MR_Integer) 1)));
#line 1567 "modules.m"
                parse_tree__modules__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma0_16, (MR_Integer) 2)));
#line 1567 "modules.m"
                parse_tree__modules__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma0_16, (MR_Integer) 3)));
#line 1571 "modules.m"
                if (((((MR_tag((MR_Word) parse_tree__modules__Pragma0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Pragma0_17, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 1572 "modules.m"
                  parse_tree__modules__succeeded = (parse_tree__modules__StructureReuse_2 == (MR_Integer) 1);
#line 1571 "modules.m"
                else
#line 1571 "modules.m"
                if (((((MR_tag((MR_Word) parse_tree__modules__Pragma0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Pragma0_17, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1569 "modules.m"
                  parse_tree__modules__succeeded = (parse_tree__modules__UnusedArgs_1 == (MR_Integer) 1);
#line 1571 "modules.m"
                else
#line 1571 "modules.m"
                  parse_tree__modules__succeeded = MR_FALSE;
#line 1566 "modules.m"
              }
#line 1577 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1576 "modules.m"
              {
#line 1576 "modules.m"
                {
#line 1576 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_ItemCord_25_25 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__modules__STATE_VARIABLE_ItemCord_0_4, ((MR_Box) (parse_tree__modules__Item0_13)));
                }
#line 1576 "modules.m"
              }
#line 1577 "modules.m"
            else
#line 1577 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ItemCord_25_25 = parse_tree__modules__STATE_VARIABLE_ItemCord_0_4;
#line 1580 "modules.m"
            /* direct tailcall eliminated */
#line 1580 "modules.m"
            {
#line 1580 "modules.m"
              MR_Word parse_tree__modules__HeadVar__3__tmp_copy_3 = parse_tree__modules__Items0_14;
#line 1580 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ItemCord_0__tmp_copy_4 = parse_tree__modules__STATE_VARIABLE_ItemCord_25_25;

#line 1580 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ItemCord_0_4 = parse_tree__modules__STATE_VARIABLE_ItemCord_0__tmp_copy_4;
#line 1580 "modules.m"
              parse_tree__modules__HeadVar__3_3 = parse_tree__modules__HeadVar__3__tmp_copy_3;
#line 1580 "modules.m"
            }
#line 1580 "modules.m"
            continue;
#line 1564 "modules.m"
          }
#line 1562 "modules.m"
      }
#line 1562 "modules.m"
      break;
#line 1562 "modules.m"
    }
#line 1559 "modules.m"
}

#line 1400 "modules.m"
static void MR_CALL 
parse_tree__modules__report_inaccessible_module_error_6_p_0(
#line 1400 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1400 "modules.m"
  MR_Word parse_tree__modules__ParentModule_8,
#line 1400 "modules.m"
  MR_String parse_tree__modules__SubModule_9,
#line 1400 "modules.m"
  MR_Word parse_tree__modules__ImportOrUseContext_10,
#line 1400 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1400 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20)
#line 1400 "modules.m"
{
#line 1416 "modules.m"
  {
#line 1416 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__ImportOrUse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportOrUseContext_10, (MR_Integer) 0)));
#line 1416 "modules.m"
    MR_Word parse_tree__modules__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportOrUseContext_10, (MR_Integer) 1)));
#line 1416 "modules.m"
    MR_String parse_tree__modules__DeclName_14;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__MainPieces_15;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__VerbosePieces_16;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__Msg_17;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__Spec_18;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_23_23;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_24_24;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_25_25;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_28_28;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_30_30;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_33_33;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_34_34;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_35_35;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_38_38;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_40_40;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_43_43;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_44_44;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_45_45;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_54_54;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_57_57;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_60_60;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_63_63;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_66_66;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_67_67;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_68_68;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_71_71;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_74_74;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_76_76;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_79_79;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_82_82;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_85_85;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_86_86;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_93_93;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_94_94;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_95_95;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_96_96;
#line 1416 "modules.m"
    MR_Word parse_tree__modules__V_101_101;

#line 1419 "modules.m"
#line 1419 "modules.m"
    switch (parse_tree__modules__ImportOrUse_12) {
#line 1419 "modules.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1419 "modules.m"
      case (MR_Integer) 0:
#line 1418 "modules.m"
        parse_tree__modules__DeclName_14 = (MR_String) "import_module";
#line 1419 "modules.m"
        break;
#line 1419 "modules.m"
      case (MR_Integer) 1:
#line 1419 "modules.m"
        parse_tree__modules__DeclName_14 = (MR_String) "use_module";
#line 1419 "modules.m"
        break;
#line 1419 "modules.m"
    }
#line 1421 "modules.m"
    {
#line 1421 "modules.m"
      parse_tree__modules__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1421 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_24_24, 1) = ((MR_Box) (parse_tree__modules__ModuleName_7));
#line 1421 "modules.m"
    }
#line 1422 "modules.m"
    {
#line 1422 "modules.m"
      parse_tree__modules__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1422 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_34_34, 1) = ((MR_Box) (parse_tree__modules__DeclName_14));
#line 1422 "modules.m"
    }
#line 1423 "modules.m"
    {
#line 1423 "modules.m"
      parse_tree__modules__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_45_45, 0) = ((MR_Box) (parse_tree__modules__ParentModule_8));
#line 1423 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_45_45, 1) = ((MR_Box) (parse_tree__modules__SubModule_9));
#line 1423 "modules.m"
    }
#line 1423 "modules.m"
    {
#line 1423 "modules.m"
      parse_tree__modules__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1423 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_44_44, 1) = ((MR_Box) (parse_tree__modules__V_45_45));
#line 1423 "modules.m"
    }
#line 1423 "modules.m"
    {
#line 1423 "modules.m"
      parse_tree__modules__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 0) = ((MR_Box) (parse_tree__modules__V_44_44));
#line 1423 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[34])));
#line 1423 "modules.m"
    }
#line 1423 "modules.m"
    {
#line 1423 "modules.m"
      parse_tree__modules__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[48])));
#line 1423 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 1) = ((MR_Box) (parse_tree__modules__V_43_43));
#line 1423 "modules.m"
    }
#line 1422 "modules.m"
    {
#line 1422 "modules.m"
      parse_tree__modules__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1422 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_38_38, 1) = ((MR_Box) (parse_tree__modules__V_40_40));
#line 1422 "modules.m"
    }
#line 1422 "modules.m"
    {
#line 1422 "modules.m"
      parse_tree__modules__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[47])));
#line 1422 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_35_35, 1) = ((MR_Box) (parse_tree__modules__V_38_38));
#line 1422 "modules.m"
    }
#line 1422 "modules.m"
    {
#line 1422 "modules.m"
      parse_tree__modules__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 0) = ((MR_Box) (parse_tree__modules__V_34_34));
#line 1422 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_33_33, 1) = ((MR_Box) (parse_tree__modules__V_35_35));
#line 1422 "modules.m"
    }
#line 1422 "modules.m"
    {
#line 1422 "modules.m"
      parse_tree__modules__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[46])));
#line 1422 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_30_30, 1) = ((MR_Box) (parse_tree__modules__V_33_33));
#line 1422 "modules.m"
    }
#line 1421 "modules.m"
    {
#line 1421 "modules.m"
      parse_tree__modules__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1421 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 1) = ((MR_Box) (parse_tree__modules__V_30_30));
#line 1421 "modules.m"
    }
#line 1421 "modules.m"
    {
#line 1421 "modules.m"
      parse_tree__modules__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[45])));
#line 1421 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_25_25, 1) = ((MR_Box) (parse_tree__modules__V_28_28));
#line 1421 "modules.m"
    }
#line 1421 "modules.m"
    {
#line 1421 "modules.m"
      parse_tree__modules__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 0) = ((MR_Box) (parse_tree__modules__V_24_24));
#line 1421 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 1) = ((MR_Box) (parse_tree__modules__V_25_25));
#line 1421 "modules.m"
    }
#line 1421 "modules.m"
    {
#line 1421 "modules.m"
      parse_tree__modules__MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[44])));
#line 1421 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_15, 1) = ((MR_Box) (parse_tree__modules__V_23_23));
#line 1421 "modules.m"
    }
#line 1428 "modules.m"
    {
#line 1428 "modules.m"
      parse_tree__modules__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1428 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_67_67, 1) = ((MR_Box) (parse_tree__modules__ParentModule_8));
#line 1428 "modules.m"
    }
#line 1432 "modules.m"
    {
#line 1432 "modules.m"
      parse_tree__modules__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1432 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_86_86, 1) = ((MR_Box) (parse_tree__modules__SubModule_9));
#line 1432 "modules.m"
    }
#line 1432 "modules.m"
    {
#line 1432 "modules.m"
      parse_tree__modules__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_85_85, 0) = ((MR_Box) (parse_tree__modules__V_86_86));
#line 1432 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[36])));
#line 1432 "modules.m"
    }
#line 1431 "modules.m"
    {
#line 1431 "modules.m"
      parse_tree__modules__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_82_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[58])));
#line 1431 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_82_82, 1) = ((MR_Box) (parse_tree__modules__V_85_85));
#line 1431 "modules.m"
    }
#line 1431 "modules.m"
    {
#line 1431 "modules.m"
      parse_tree__modules__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[57])));
#line 1431 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_79_79, 1) = ((MR_Box) (parse_tree__modules__V_82_82));
#line 1431 "modules.m"
    }
#line 1430 "modules.m"
    {
#line 1430 "modules.m"
      parse_tree__modules__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1430 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[56])));
#line 1430 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 1) = ((MR_Box) (parse_tree__modules__V_79_79));
#line 1430 "modules.m"
    }
#line 1430 "modules.m"
    {
#line 1430 "modules.m"
      parse_tree__modules__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1430 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_74_74, 0) = ((MR_Box) (parse_tree__modules__V_67_67));
#line 1430 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_74_74, 1) = ((MR_Box) (parse_tree__modules__V_76_76));
#line 1430 "modules.m"
    }
#line 1429 "modules.m"
    {
#line 1429 "modules.m"
      parse_tree__modules__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1429 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[55])));
#line 1429 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 1) = ((MR_Box) (parse_tree__modules__V_74_74));
#line 1429 "modules.m"
    }
#line 1429 "modules.m"
    {
#line 1429 "modules.m"
      parse_tree__modules__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1429 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[54])));
#line 1429 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_68_68, 1) = ((MR_Box) (parse_tree__modules__V_71_71));
#line 1429 "modules.m"
    }
#line 1428 "modules.m"
    {
#line 1428 "modules.m"
      parse_tree__modules__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 0) = ((MR_Box) (parse_tree__modules__V_67_67));
#line 1428 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_66_66, 1) = ((MR_Box) (parse_tree__modules__V_68_68));
#line 1428 "modules.m"
    }
#line 1428 "modules.m"
    {
#line 1428 "modules.m"
      parse_tree__modules__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[53])));
#line 1428 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_63_63, 1) = ((MR_Box) (parse_tree__modules__V_66_66));
#line 1428 "modules.m"
    }
#line 1427 "modules.m"
    {
#line 1427 "modules.m"
      parse_tree__modules__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[52])));
#line 1427 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_60_60, 1) = ((MR_Box) (parse_tree__modules__V_63_63));
#line 1427 "modules.m"
    }
#line 1427 "modules.m"
    {
#line 1427 "modules.m"
      parse_tree__modules__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[51])));
#line 1427 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_57_57, 1) = ((MR_Box) (parse_tree__modules__V_60_60));
#line 1427 "modules.m"
    }
#line 1426 "modules.m"
    {
#line 1426 "modules.m"
      parse_tree__modules__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1426 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[50])));
#line 1426 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_54_54, 1) = ((MR_Box) (parse_tree__modules__V_57_57));
#line 1426 "modules.m"
    }
#line 1425 "modules.m"
    {
#line 1425 "modules.m"
      parse_tree__modules__VerbosePieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__VerbosePieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[49])));
#line 1425 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__VerbosePieces_16, 1) = ((MR_Box) (parse_tree__modules__V_54_54));
#line 1425 "modules.m"
    }
#line 1434 "modules.m"
    {
#line 1434 "modules.m"
      parse_tree__modules__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1434 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_94_94, 0) = ((MR_Box) (parse_tree__modules__MainPieces_15));
#line 1434 "modules.m"
    }
#line 1434 "modules.m"
    {
#line 1434 "modules.m"
      parse_tree__modules__V_96_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1434 "modules.m"
      MR_hl_field(MR_mktag(2), parse_tree__modules__V_96_96, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1434 "modules.m"
      MR_hl_field(MR_mktag(2), parse_tree__modules__V_96_96, 1) = ((MR_Box) (parse_tree__modules__VerbosePieces_16));
#line 1434 "modules.m"
    }
#line 1434 "modules.m"
    {
#line 1434 "modules.m"
      parse_tree__modules__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1434 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_95_95, 0) = ((MR_Box) (parse_tree__modules__V_96_96));
#line 1434 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1434 "modules.m"
    }
#line 1434 "modules.m"
    {
#line 1434 "modules.m"
      parse_tree__modules__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1434 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_93_93, 0) = ((MR_Box) (parse_tree__modules__V_94_94));
#line 1434 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_93_93, 1) = ((MR_Box) (parse_tree__modules__V_95_95));
#line 1434 "modules.m"
    }
#line 1433 "modules.m"
    {
#line 1433 "modules.m"
      parse_tree__modules__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1433 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_17, 0) = ((MR_Box) (parse_tree__modules__Context_13));
#line 1433 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_17, 1) = ((MR_Box) (parse_tree__modules__V_93_93));
#line 1433 "modules.m"
    }
#line 1435 "modules.m"
    {
#line 1435 "modules.m"
      parse_tree__modules__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1435 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_101_101, 0) = ((MR_Box) (parse_tree__modules__Msg_17));
#line 1435 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1435 "modules.m"
    }
#line 1435 "modules.m"
    {
#line 1435 "modules.m"
      parse_tree__modules__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1435 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1435 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1435 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_18, 2) = ((MR_Box) (parse_tree__modules__V_101_101));
#line 1435 "modules.m"
    }
#line 1436 "modules.m"
    {
#line 1436 "modules.m"
      MR_Word base;
#line 1436 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_20 = base;
#line 1436 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_18));
#line 1436 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_19));
#line 1436 "modules.m"
    }
#line 1416 "modules.m"
  }
#line 1400 "modules.m"
}

#line 1391 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0_1(
#line 1391 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1391 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1391 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1391 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 1391 "modules.m"
{
#line 1391 "modules.m"
  {
#line 1391 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1391 "modules.m"
    MR_Word parse_tree__modules__conv2_STATE_VARIABLE_Specs_20;

#line 1391 "modules.m"
    {
#line 1391 "modules.m"
      parse_tree__modules__report_inaccessible_module_error_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv2_STATE_VARIABLE_Specs_20);
    }
#line 1391 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_STATE_VARIABLE_Specs_20));
#line 1391 "modules.m"
  }
#line 1391 "modules.m"
}

#line 1375 "modules.m"
static void MR_CALL 
parse_tree__modules__check_module_accessibility_6_p_0(
#line 1375 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1375 "modules.m"
  MR_Word parse_tree__modules__InclMap_8,
#line 1375 "modules.m"
  MR_Word parse_tree__modules__ImportUseMap_9,
#line 1375 "modules.m"
  MR_Word parse_tree__modules__ImportedModule_10,
#line 1375 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1375 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20)
#line 1375 "modules.m"
{
#line 1382 "modules.m"
  {
#line 1382 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 1382 "modules.m"
    if (((MR_tag((MR_Word) parse_tree__modules__ImportedModule_10)) == (MR_mktag((MR_Integer) 1))))
#line 1382 "modules.m"
      {
#line 1382 "modules.m"
        MR_Word parse_tree__modules__ParentModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__ImportedModule_10, (MR_Integer) 0)));
#line 1382 "modules.m"
        MR_String parse_tree__modules__SubModule_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__modules__ImportedModule_10, (MR_Integer) 1)));
#line 1383 "modules.m"
        MR_Word parse_tree__modules___ImportedInclContexts_14;
#line 1383 "modules.m"
        MR_Box parse_tree__modules__conv0__ImportedInclContexts_14;

#line 1383 "modules.m"
        {
#line 1383 "modules.m"
          parse_tree__modules__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[12], parse_tree__modules__InclMap_8, ((MR_Box) (parse_tree__modules__ImportedModule_10)), &parse_tree__modules__conv0__ImportedInclContexts_14);
        }
#line 1383 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1383 "modules.m"
          {
#line 1383 "modules.m"
            parse_tree__modules___ImportedInclContexts_14 = ((MR_Word) parse_tree__modules__conv0__ImportedInclContexts_14);
#line 1383 "modules.m"
            parse_tree__modules__succeeded = MR_TRUE;
#line 1383 "modules.m"
          }
#line 1385 "modules.m"
        if (parse_tree__modules__succeeded)
#line 1385 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_Specs_20 = parse_tree__modules__STATE_VARIABLE_Specs_0_19;
#line 1385 "modules.m"
        else
#line 1386 "modules.m"
          {
#line 1386 "modules.m"
            MR_Word parse_tree__modules__ImportsUses_15;
#line 1386 "modules.m"
            MR_Word parse_tree__modules__HeadIU_16;
#line 1386 "modules.m"
            MR_Word parse_tree__modules__TailIUs_17;
#line 1386 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_Specs_21_21;
#line 1386 "modules.m"
            MR_Word parse_tree__modules__V_22_22;
#line 1386 "modules.m"
            MR_Box parse_tree__modules__conv1_ImportsUses_15;
#line 1390 "modules.m"
            MR_Box parse_tree__modules__conv3_STATE_VARIABLE_Specs_20;

#line 1386 "modules.m"
            {
#line 1386 "modules.m"
              mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[13], parse_tree__modules__ImportUseMap_9, ((MR_Box) (parse_tree__modules__ImportedModule_10)), &parse_tree__modules__conv1_ImportsUses_15);
            }
#line 1386 "modules.m"
            parse_tree__modules__ImportsUses_15 = ((MR_Word) parse_tree__modules__conv1_ImportsUses_15);
#line 1387 "modules.m"
            parse_tree__modules__HeadIU_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportsUses_15, (MR_Integer) 0)));
#line 1387 "modules.m"
            parse_tree__modules__TailIUs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ImportsUses_15, (MR_Integer) 1)));
#line 1388 "modules.m"
            {
#line 1388 "modules.m"
              parse_tree__modules__report_inaccessible_module_error_6_p_0(parse_tree__modules__ModuleName_7, parse_tree__modules__ParentModule_12, parse_tree__modules__SubModule_13, parse_tree__modules__HeadIU_16, parse_tree__modules__STATE_VARIABLE_Specs_0_19, &parse_tree__modules__STATE_VARIABLE_Specs_21_21);
            }
#line 1391 "modules.m"
            {
#line 1391 "modules.m"
              parse_tree__modules__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1391 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_7[1]));
#line 1391 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 1) = ((MR_Box) (parse_tree__modules__check_module_accessibility_6_p_0_1));
#line 1391 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1391 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 3) = ((MR_Box) (parse_tree__modules__ModuleName_7));
#line 1391 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 4) = ((MR_Box) (parse_tree__modules__ParentModule_12));
#line 1391 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, 5) = ((MR_Box) (parse_tree__modules__SubModule_13));
#line 1391 "modules.m"
            }
#line 1390 "modules.m"
            {
#line 1390 "modules.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__modules__parse_tree__modules__type_ctor_info_import_or_use_context_0, (MR_Word) &parse_tree__modules_scalar_common_1[9], parse_tree__modules__V_22_22, parse_tree__modules__TailIUs_17, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_21_21)), &parse_tree__modules__conv3_STATE_VARIABLE_Specs_20);
            }
#line 1390 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_Specs_20 = ((MR_Word) parse_tree__modules__conv3_STATE_VARIABLE_Specs_20);
#line 1386 "modules.m"
          }
#line 1382 "modules.m"
      }
#line 1382 "modules.m"
    else
#line 1396 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_20 = parse_tree__modules__STATE_VARIABLE_Specs_0_19;
#line 1382 "modules.m"
  }
#line 1375 "modules.m"
}

#line 1339 "modules.m"
static void MR_CALL 
parse_tree__modules__record_avails_acc_3_p_0(
#line 1339 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1339 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_2,
#line 1339 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImportUseMap_3)
#line 1339 "modules.m"
{
#line 1342 "modules.m"
  while (MR_TRUE)
#line 1342 "modules.m"
    {
#line 1342 "modules.m"
      /* tailcall optimized into a loop */
#line 1342 "modules.m"
      {
#line 1342 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1342 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1342 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ImportUseMap_3 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_2;
#line 1342 "modules.m"
        else
#line 1343 "modules.m"
          {
#line 1343 "modules.m"
            MR_Word parse_tree__modules__Avail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1343 "modules.m"
            MR_Word parse_tree__modules__Avails_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1343 "modules.m"
            MR_Word parse_tree__modules__ModuleName_10;
#line 1343 "modules.m"
            MR_Word parse_tree__modules__Context_11;
#line 1343 "modules.m"
            MR_Word parse_tree__modules__ImportOrUse_13;
#line 1343 "modules.m"
            MR_Word parse_tree__modules__IoUC_14;
#line 1343 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_24_24;
#line 1356 "modules.m"
            MR_Word parse_tree__modules__OneOrMore0_15;
#line 1352 "modules.m"
            MR_Box parse_tree__modules__conv0_OneOrMore0_15;

#line 1347 "modules.m"
            if (((MR_tag((MR_Word) parse_tree__modules__Avail_7)) == (MR_mktag((MR_Integer) 0))))
#line 1345 "modules.m"
              {
#line 1345 "modules.m"
                MR_Word parse_tree__modules__V_22_22 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Avail_7), (MR_Integer) 0);
#line 1345 "modules.m"
                MR_Integer parse_tree__modules___SeqNum_12;

#line 1345 "modules.m"
                parse_tree__modules__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, (MR_Integer) 0)));
#line 1345 "modules.m"
                parse_tree__modules__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, (MR_Integer) 1)));
#line 1345 "modules.m"
                parse_tree__modules___SeqNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__V_22_22, (MR_Integer) 2)));
#line 1346 "modules.m"
                parse_tree__modules__ImportOrUse_13 = (MR_Integer) 0;
#line 1345 "modules.m"
              }
#line 1347 "modules.m"
            else
#line 1348 "modules.m"
              {
#line 1348 "modules.m"
                MR_Word parse_tree__modules__V_21_21 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Avail_7), (MR_Integer) 1);
#line 1348 "modules.m"
                MR_Integer parse_tree__modules___SeqNum_28;

#line 1348 "modules.m"
                parse_tree__modules__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, (MR_Integer) 0)));
#line 1348 "modules.m"
                parse_tree__modules__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, (MR_Integer) 1)));
#line 1348 "modules.m"
                parse_tree__modules___SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, (MR_Integer) 2)));
#line 1349 "modules.m"
                parse_tree__modules__ImportOrUse_13 = (MR_Integer) 1;
#line 1348 "modules.m"
              }
#line 1351 "modules.m"
            {
#line 1351 "modules.m"
              parse_tree__modules__IoUC_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1351 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__IoUC_14, 0) = ((MR_Box) (parse_tree__modules__ImportOrUse_13));
#line 1351 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__IoUC_14, 1) = ((MR_Box) (parse_tree__modules__Context_11));
#line 1351 "modules.m"
            }
#line 1352 "modules.m"
            {
#line 1352 "modules.m"
              parse_tree__modules__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[13], parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_2, ((MR_Box) (parse_tree__modules__ModuleName_10)), &parse_tree__modules__conv0_OneOrMore0_15);
            }
#line 1352 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1352 "modules.m"
              {
#line 1352 "modules.m"
                parse_tree__modules__OneOrMore0_15 = ((MR_Word) parse_tree__modules__conv0_OneOrMore0_15);
#line 1352 "modules.m"
                parse_tree__modules__succeeded = MR_TRUE;
#line 1352 "modules.m"
              }
#line 1356 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1353 "modules.m"
              {
#line 1353 "modules.m"
                MR_Word parse_tree__modules__HeadIoUC_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_15, (MR_Integer) 0)));
#line 1353 "modules.m"
                MR_Word parse_tree__modules__TailIoUCs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_15, (MR_Integer) 1)));
#line 1353 "modules.m"
                MR_Word parse_tree__modules__OneOrMore_18;
#line 1353 "modules.m"
                MR_Word parse_tree__modules__V_23_23;

#line 1354 "modules.m"
                {
#line 1354 "modules.m"
                  parse_tree__modules__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1354 "modules.m"
                  MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 0) = ((MR_Box) (parse_tree__modules__HeadIoUC_16));
#line 1354 "modules.m"
                  MR_hl_field(MR_mktag(1), parse_tree__modules__V_23_23, 1) = ((MR_Box) (parse_tree__modules__TailIoUCs_17));
#line 1354 "modules.m"
                }
#line 1354 "modules.m"
                {
#line 1354 "modules.m"
                  parse_tree__modules__OneOrMore_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1354 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_18, 0) = ((MR_Box) (parse_tree__modules__IoUC_14));
#line 1354 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_18, 1) = ((MR_Box) (parse_tree__modules__V_23_23));
#line 1354 "modules.m"
                }
#line 1355 "modules.m"
                {
#line 1355 "modules.m"
                  mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[13], ((MR_Box) (parse_tree__modules__ModuleName_10)), ((MR_Box) (parse_tree__modules__OneOrMore_18)), parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_2, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_24_24);
                }
#line 1353 "modules.m"
              }
#line 1356 "modules.m"
            else
#line 1357 "modules.m"
              {
#line 1357 "modules.m"
                MR_Word parse_tree__modules__OneOrMore_30;

#line 1357 "modules.m"
                {
#line 1357 "modules.m"
                  parse_tree__modules__OneOrMore_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1357 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_30, 0) = ((MR_Box) (parse_tree__modules__IoUC_14));
#line 1357 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1357 "modules.m"
                }
#line 1358 "modules.m"
                {
#line 1358 "modules.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[13], ((MR_Box) (parse_tree__modules__ModuleName_10)), ((MR_Box) (parse_tree__modules__OneOrMore_30)), parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_2, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_24_24);
                }
#line 1357 "modules.m"
              }
#line 1360 "modules.m"
            /* direct tailcall eliminated */
#line 1360 "modules.m"
            {
#line 1360 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__Avails_8;
#line 1360 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_2 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_24_24;

#line 1360 "modules.m"
              parse_tree__modules__STATE_VARIABLE_ImportUseMap_0_2 = parse_tree__modules__STATE_VARIABLE_ImportUseMap_0__tmp_copy_2;
#line 1360 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1360 "modules.m"
            }
#line 1360 "modules.m"
            continue;
#line 1343 "modules.m"
          }
#line 1342 "modules.m"
      }
#line 1342 "modules.m"
      break;
#line 1342 "modules.m"
    }
#line 1339 "modules.m"
}

#line 1323 "modules.m"
static void MR_CALL 
parse_tree__modules__record_includes_acc_3_p_0(
#line 1323 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 1323 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0_2,
#line 1323 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_InclMap_3)
#line 1323 "modules.m"
{
#line 1326 "modules.m"
  while (MR_TRUE)
#line 1326 "modules.m"
    {
#line 1326 "modules.m"
      /* tailcall optimized into a loop */
#line 1326 "modules.m"
      {
#line 1326 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 1326 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1326 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_InclMap_3 = parse_tree__modules__STATE_VARIABLE_InclMap_0_2;
#line 1326 "modules.m"
        else
#line 1327 "modules.m"
          {
#line 1327 "modules.m"
            MR_Word parse_tree__modules__Include_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 1327 "modules.m"
            MR_Word parse_tree__modules__Includes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 1327 "modules.m"
            MR_Word parse_tree__modules__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__Include_7, (MR_Integer) 0)));
#line 1327 "modules.m"
            MR_Word parse_tree__modules__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__Include_7, (MR_Integer) 1)));
#line 1327 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_20_20;
#line 1328 "modules.m"
            MR_Integer parse_tree__modules___SeqNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__Include_7, (MR_Integer) 2)));
#line 1333 "modules.m"
            MR_Word parse_tree__modules__OneOrMore0_13;
#line 1329 "modules.m"
            MR_Box parse_tree__modules__conv0_OneOrMore0_13;

#line 1329 "modules.m"
            {
#line 1329 "modules.m"
              parse_tree__modules__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[12], parse_tree__modules__STATE_VARIABLE_InclMap_0_2, ((MR_Box) (parse_tree__modules__ModuleName_10)), &parse_tree__modules__conv0_OneOrMore0_13);
            }
#line 1329 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1329 "modules.m"
              {
#line 1329 "modules.m"
                parse_tree__modules__OneOrMore0_13 = ((MR_Word) parse_tree__modules__conv0_OneOrMore0_13);
#line 1329 "modules.m"
                parse_tree__modules__succeeded = MR_TRUE;
#line 1329 "modules.m"
              }
#line 1333 "modules.m"
            if (parse_tree__modules__succeeded)
#line 1330 "modules.m"
              {
#line 1330 "modules.m"
                MR_Word parse_tree__modules__HeadContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_13, (MR_Integer) 0)));
#line 1330 "modules.m"
                MR_Word parse_tree__modules__TailContexts_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore0_13, (MR_Integer) 1)));
#line 1330 "modules.m"
                MR_Word parse_tree__modules__OneOrMore_16;
#line 1330 "modules.m"
                MR_Word parse_tree__modules__V_19_19;

#line 1331 "modules.m"
                {
#line 1331 "modules.m"
                  parse_tree__modules__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "modules.m"
                  MR_hl_field(MR_mktag(1), parse_tree__modules__V_19_19, 0) = ((MR_Box) (parse_tree__modules__HeadContext_14));
#line 1331 "modules.m"
                  MR_hl_field(MR_mktag(1), parse_tree__modules__V_19_19, 1) = ((MR_Box) (parse_tree__modules__TailContexts_15));
#line 1331 "modules.m"
                }
#line 1331 "modules.m"
                {
#line 1331 "modules.m"
                  parse_tree__modules__OneOrMore_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1331 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_16, 0) = ((MR_Box) (parse_tree__modules__Context_11));
#line 1331 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_16, 1) = ((MR_Box) (parse_tree__modules__V_19_19));
#line 1331 "modules.m"
                }
#line 1332 "modules.m"
                {
#line 1332 "modules.m"
                  mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[12], ((MR_Box) (parse_tree__modules__ModuleName_10)), ((MR_Box) (parse_tree__modules__OneOrMore_16)), parse_tree__modules__STATE_VARIABLE_InclMap_0_2, &parse_tree__modules__STATE_VARIABLE_InclMap_20_20);
                }
#line 1330 "modules.m"
              }
#line 1333 "modules.m"
            else
#line 1334 "modules.m"
              {
#line 1334 "modules.m"
                MR_Word parse_tree__modules__OneOrMore_24;

#line 1334 "modules.m"
                {
#line 1334 "modules.m"
                  parse_tree__modules__OneOrMore_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1334 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_24, 0) = ((MR_Box) (parse_tree__modules__Context_11));
#line 1334 "modules.m"
                  MR_hl_field(MR_mktag(0), parse_tree__modules__OneOrMore_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1334 "modules.m"
                }
#line 1335 "modules.m"
                {
#line 1335 "modules.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[12], ((MR_Box) (parse_tree__modules__ModuleName_10)), ((MR_Box) (parse_tree__modules__OneOrMore_24)), parse_tree__modules__STATE_VARIABLE_InclMap_0_2, &parse_tree__modules__STATE_VARIABLE_InclMap_20_20);
                }
#line 1334 "modules.m"
              }
#line 1337 "modules.m"
            /* direct tailcall eliminated */
#line 1337 "modules.m"
            {
#line 1337 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__Includes_8;
#line 1337 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_2 = parse_tree__modules__STATE_VARIABLE_InclMap_20_20;

#line 1337 "modules.m"
              parse_tree__modules__STATE_VARIABLE_InclMap_0_2 = parse_tree__modules__STATE_VARIABLE_InclMap_0__tmp_copy_2;
#line 1337 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 1337 "modules.m"
            }
#line 1337 "modules.m"
            continue;
#line 1327 "modules.m"
          }
#line 1326 "modules.m"
      }
#line 1326 "modules.m"
      break;
#line 1326 "modules.m"
    }
#line 1323 "modules.m"
}

#line 1230 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_4_p_0_1(
#line 1230 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1230 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 1230 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 1230 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 1230 "modules.m"
{
#line 1230 "modules.m"
  {
#line 1230 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1230 "modules.m"
    MR_Word parse_tree__modules__conv0_STATE_VARIABLE_Specs_20;

#line 1230 "modules.m"
    {
#line 1230 "modules.m"
      parse_tree__modules__check_module_accessibility_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv0_STATE_VARIABLE_Specs_20);
    }
#line 1230 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_STATE_VARIABLE_Specs_20));
#line 1230 "modules.m"
  }
#line 1230 "modules.m"
}

#line 1214 "modules.m"
static void MR_CALL 
parse_tree__modules__check_imports_accessibility_4_p_0(
#line 1214 "modules.m"
  MR_Word parse_tree__modules__AugCompUnit_5,
#line 1214 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_6,
#line 1214 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_19,
#line 1214 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_20)
#line 1214 "modules.m"
{
#line 1218 "modules.m"
  {
#line 1218 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1218 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_29_51;
#line 1218 "modules.m"
    MR_Word parse_tree__modules__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 0)));
#line 1218 "modules.m"
    MR_Word parse_tree__modules__SrcItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 3)));
#line 1218 "modules.m"
    MR_Word parse_tree__modules__DirectIntItemBlocks_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 4)));
#line 1218 "modules.m"
    MR_Word parse_tree__modules__IndirectIntItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 5)));
#line 1218 "modules.m"
    MR_Word parse_tree__modules__OptItemBlocks_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 6)));
#line 1218 "modules.m"
    MR_Word parse_tree__modules__IntForOptItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 7)));
#line 1218 "modules.m"
    MR_Word parse_tree__modules__IntItemBlocks_16;
#line 1218 "modules.m"
    MR_Word parse_tree__modules__InclMap_17;
#line 1218 "modules.m"
    MR_Word parse_tree__modules__ImportUseMap_18;
#line 1218 "modules.m"
    MR_Word parse_tree__modules__V_21_21;
#line 1218 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_15_37;
#line 1218 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_16_38;
#line 1218 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_18_40;
#line 1218 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_19_41;
#line 1218 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_21_43;
#line 1218 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_22_44;
#line 1218 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_InclMap_24_46;
#line 1218 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ImportUseMap_25_47;
#line 1219 "modules.m"
    MR_Word parse_tree__modules___ModuleNameContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 1)));
#line 1219 "modules.m"
    MR_Word parse_tree__modules___ModuleVersionNumbers_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__AugCompUnit_5, (MR_Integer) 2)));
#line 1230 "modules.m"
    MR_Box parse_tree__modules__conv1_STATE_VARIABLE_Specs_20;

#line 1223 "modules.m"
    {
#line 1223 "modules.m"
      parse_tree__modules__IntItemBlocks_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__modules_scalar_common_1[10], parse_tree__modules__DirectIntItemBlocks_12, parse_tree__modules__IndirectIntItemBlocks_13);
    }
#line 13156 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_29_51 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1271 "modules.m"
    {
#line 1271 "modules.m"
      mercury__map__init_1_p_0(parse_tree__modules__TypeCtorInfo_29_51, (MR_Word) &parse_tree__modules_scalar_common_1[12], &parse_tree__modules__STATE_VARIABLE_InclMap_15_37);
    }
#line 1272 "modules.m"
    {
#line 1272 "modules.m"
      mercury__map__init_1_p_0(parse_tree__modules__TypeCtorInfo_29_51, (MR_Word) &parse_tree__modules_scalar_common_1[13], &parse_tree__modules__STATE_VARIABLE_ImportUseMap_16_38);
    }
#line 1273 "modules.m"
    {
#line 1273 "modules.m"
      parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho4_6_p_0(parse_tree__modules__SrcItemBlocks_11, parse_tree__modules__STATE_VARIABLE_InclMap_15_37, &parse_tree__modules__STATE_VARIABLE_InclMap_18_40, parse_tree__modules__STATE_VARIABLE_ImportUseMap_16_38, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_19_41);
    }
#line 1275 "modules.m"
    {
#line 1275 "modules.m"
      parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho3_6_p_0(parse_tree__modules__IntItemBlocks_16, parse_tree__modules__STATE_VARIABLE_InclMap_18_40, &parse_tree__modules__STATE_VARIABLE_InclMap_21_43, parse_tree__modules__STATE_VARIABLE_ImportUseMap_19_41, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_22_44);
    }
#line 1277 "modules.m"
    {
#line 1277 "modules.m"
      parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho2_6_p_0(parse_tree__modules__OptItemBlocks_14, parse_tree__modules__STATE_VARIABLE_InclMap_21_43, &parse_tree__modules__STATE_VARIABLE_InclMap_24_46, parse_tree__modules__STATE_VARIABLE_ImportUseMap_22_44, &parse_tree__modules__STATE_VARIABLE_ImportUseMap_25_47);
    }
#line 1279 "modules.m"
    {
#line 1279 "modules.m"
      parse_tree__modules__record_includes_imports_uses_in_item_blocks_acc__ho1_6_p_0(parse_tree__modules__IntForOptItemBlocks_15, parse_tree__modules__STATE_VARIABLE_InclMap_24_46, &parse_tree__modules__InclMap_17, parse_tree__modules__STATE_VARIABLE_ImportUseMap_25_47, &parse_tree__modules__ImportUseMap_18);
    }
#line 1230 "modules.m"
    {
#line 1230 "modules.m"
      parse_tree__modules__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1230 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_7[0]));
#line 1230 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 1) = ((MR_Box) (parse_tree__modules__check_imports_accessibility_4_p_0_1));
#line 1230 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1230 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 3) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 1230 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 4) = ((MR_Box) (parse_tree__modules__InclMap_17));
#line 1230 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_21_21, 5) = ((MR_Box) (parse_tree__modules__ImportUseMap_18));
#line 1230 "modules.m"
    }
#line 1230 "modules.m"
    {
#line 1230 "modules.m"
      mercury__set__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__modules_scalar_common_1[9], parse_tree__modules__V_21_21, parse_tree__modules__ImportedModules_6, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_19)), &parse_tree__modules__conv1_STATE_VARIABLE_Specs_20);
    }
#line 1230 "modules.m"
    *parse_tree__modules__STATE_VARIABLE_Specs_20 = ((MR_Word) parse_tree__modules__conv1_STATE_VARIABLE_Specs_20);
#line 1218 "modules.m"
  }
#line 1214 "modules.m"
}

#line 1170 "modules.m"
static void MR_CALL 
parse_tree__modules__maybe_record_timestamp_6_p_0(
#line 1170 "modules.m"
  MR_Word parse_tree__modules__ModuleName_7,
#line 1170 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_8,
#line 1170 "modules.m"
  MR_Word parse_tree__modules__NeedQual_9,
#line 1170 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamp_10,
#line 1170 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17,
#line 1170 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18)
#line 1170 "modules.m"
{
#line 1177 "modules.m"
  {
#line 1177 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 24)));
#line 1177 "modules.m"
    MR_String parse_tree__modules__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 26)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 25)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 23)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 22)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 21)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 20)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 19)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 18)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 17)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 16)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 15)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 14)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 13)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 12)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 11)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 10)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 9)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 8)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 7)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 6)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 5)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 4)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 3)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 2)));
#line 1177 "modules.m"
    MR_Word parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 1)));
#line 1177 "modules.m"
    MR_String parse_tree__modules__V_130_130 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 0)));

#line 1177 "modules.m"
    if ((parse_tree__modules__V_106_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1189 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17;
#line 1177 "modules.m"
    else
#line 1177 "modules.m"
      {
#line 1177 "modules.m"
        MR_Word parse_tree__modules__TimestampMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__V_106_106, (MR_Integer) 0)));

#line 1185 "modules.m"
        if ((parse_tree__modules__MaybeTimestamp_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1186 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17;
#line 1185 "modules.m"
        else
#line 1179 "modules.m"
          {
#line 1179 "modules.m"
            MR_Word parse_tree__modules__Timestamp_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__MaybeTimestamp_10, (MR_Integer) 0)));
#line 1179 "modules.m"
            MR_Word parse_tree__modules__FileKind_14;
#line 1179 "modules.m"
            MR_Word parse_tree__modules__TimestampInfo_15;
#line 1179 "modules.m"
            MR_Word parse_tree__modules__TimestampMap_16;
#line 1179 "modules.m"
            MR_Word parse_tree__modules__V_22_22;
#line 1184 "modules.m"
            MR_String parse_tree__modules__V_49_49;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_50_50;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_51_51;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_52_52;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_53_53;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_54_54;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_55_55;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_56_56;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_57_57;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_58_58;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_59_59;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_60_60;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_61_61;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_62_62;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_63_63;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_64_64;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_65_65;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_66_66;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_67_67;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_68_68;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_69_69;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_70_70;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_71_71;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_72_72;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_74_74;
#line 1184 "modules.m"
            MR_String parse_tree__modules__V_75_75;
#line 1184 "modules.m"
            MR_Word parse_tree__modules__V_73_73;

#line 1180 "modules.m"
            {
#line 1180 "modules.m"
              parse_tree__modules__FileKind_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__FileKind_14, 0) = ((MR_Box) (parse_tree__modules__IntFileKind_8));
#line 1180 "modules.m"
            }
#line 1181 "modules.m"
            {
#line 1181 "modules.m"
              parse_tree__modules__TimestampInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__TimestampInfo_15, 0) = ((MR_Box) (parse_tree__modules__FileKind_14));
#line 1181 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__TimestampInfo_15, 1) = ((MR_Box) (parse_tree__modules__Timestamp_13));
#line 1181 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__TimestampInfo_15, 2) = ((MR_Box) (parse_tree__modules__NeedQual_9));
#line 1181 "modules.m"
            }
#line 1183 "modules.m"
            {
#line 1183 "modules.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, ((MR_Box) (parse_tree__modules__ModuleName_7)), ((MR_Box) (parse_tree__modules__TimestampInfo_15)), parse_tree__modules__TimestampMap0_12, &parse_tree__modules__TimestampMap_16);
            }
#line 1184 "modules.m"
            {
#line 1184 "modules.m"
              parse_tree__modules__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__V_22_22, 0) = ((MR_Box) (parse_tree__modules__TimestampMap_16));
#line 1184 "modules.m"
            }
#line 1184 "modules.m"
            parse_tree__modules__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 0)));
#line 1184 "modules.m"
            parse_tree__modules__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 1)));
#line 1184 "modules.m"
            parse_tree__modules__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 2)));
#line 1184 "modules.m"
            parse_tree__modules__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 3)));
#line 1184 "modules.m"
            parse_tree__modules__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 4)));
#line 1184 "modules.m"
            parse_tree__modules__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 5)));
#line 1184 "modules.m"
            parse_tree__modules__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 6)));
#line 1184 "modules.m"
            parse_tree__modules__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 7)));
#line 1184 "modules.m"
            parse_tree__modules__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 8)));
#line 1184 "modules.m"
            parse_tree__modules__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 9)));
#line 1184 "modules.m"
            parse_tree__modules__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 10)));
#line 1184 "modules.m"
            parse_tree__modules__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 11)));
#line 1184 "modules.m"
            parse_tree__modules__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 12)));
#line 1184 "modules.m"
            parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 13)));
#line 1184 "modules.m"
            parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 14)));
#line 1184 "modules.m"
            parse_tree__modules__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 15)));
#line 1184 "modules.m"
            parse_tree__modules__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 16)));
#line 1184 "modules.m"
            parse_tree__modules__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 17)));
#line 1184 "modules.m"
            parse_tree__modules__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 18)));
#line 1184 "modules.m"
            parse_tree__modules__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 19)));
#line 1184 "modules.m"
            parse_tree__modules__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 20)));
#line 1184 "modules.m"
            parse_tree__modules__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 21)));
#line 1184 "modules.m"
            parse_tree__modules__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 22)));
#line 1184 "modules.m"
            parse_tree__modules__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 23)));
#line 1184 "modules.m"
            parse_tree__modules__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 24)));
#line 1184 "modules.m"
            parse_tree__modules__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 25)));
#line 1184 "modules.m"
            parse_tree__modules__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_17, (MR_Integer) 26)));
#line 1184 "modules.m"
            {
#line 1184 "modules.m"
              MR_Word base;
#line 1184 "modules.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 1184 "modules.m"
              *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_18 = base;
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_49_49));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_50_50));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_51_51));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_52_52));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__V_53_53));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_54_54));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__V_55_55));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__V_56_56));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_57_57));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_58_58));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_59_59));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_60_60));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_61_61));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_62_62));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_63_63));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_64_64));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_65_65));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_66_66));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_67_67));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_68_68));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_69_69));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_70_70));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__V_71_71));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__V_72_72));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__V_22_22));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__modules__V_74_74));
#line 1184 "modules.m"
              MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_75_75));
#line 1184 "modules.m"
            }
#line 1179 "modules.m"
          }
#line 1177 "modules.m"
      }
#line 1177 "modules.m"
  }
#line 1170 "modules.m"
}

#line 1126 "modules.m"
static void MR_CALL 
parse_tree__modules__make_module_and_imports_12_p_0(
#line 1126 "modules.m"
  MR_String parse_tree__modules__SourceFileName_13,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_14,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__ModuleName_15,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__ModuleNameContext_16,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__SrcItemBlocks0_17,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__Specs_18,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__PublicChildren_19,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__NestedChildren_20,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__FactDeps_21,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__ForeignIncludeFiles_22,
#line 1126 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestampMap_23,
#line 1126 "modules.m"
  MR_Word * parse_tree__modules__Module_24)
#line 1126 "modules.m"
{
#line 1135 "modules.m"
  {
#line 1135 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1135 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_44_44;
#line 1135 "modules.m"
    MR_Word parse_tree__modules__TypeInfo_46_46;
#line 1135 "modules.m"
    MR_Word parse_tree__modules__SrcItemBlocks_25;
#line 1135 "modules.m"
    MR_Word parse_tree__modules__ParentDeps_26;
#line 1135 "modules.m"
    MR_Word parse_tree__modules__IntDeps_27;
#line 1135 "modules.m"
    MR_Word parse_tree__modules__ImpDeps_28;
#line 1135 "modules.m"
    MR_Word parse_tree__modules__IndirectDeps_29;
#line 1135 "modules.m"
    MR_Word parse_tree__modules__IncludeDeps_30;
#line 1135 "modules.m"
    MR_Word parse_tree__modules__ForeignImports_31;
#line 1135 "modules.m"
    MR_Word parse_tree__modules__Errors_32;
#line 1135 "modules.m"
    MR_Word parse_tree__modules__V_36_36;
#line 1135 "modules.m"
    MR_Word parse_tree__modules__V_37_37;
#line 1135 "modules.m"
    MR_Word parse_tree__modules__V_38_38;
#line 1135 "modules.m"
    MR_Word parse_tree__modules__V_39_39;
#line 1135 "modules.m"
    MR_Word parse_tree__modules__V_40_40;
#line 1135 "modules.m"
    MR_String parse_tree__modules__V_42_42;

#line 1144 "modules.m"
    {
#line 1144 "modules.m"
      parse_tree__comp_unit_interface__add_needed_foreign_import_module_items_to_item_blocks_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0, parse_tree__modules__ModuleName_15, ((MR_Box) ((MR_Integer) 0)), parse_tree__modules__SrcItemBlocks0_17, &parse_tree__modules__SrcItemBlocks_25);
    }
#line 13609 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_44_44 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1146 "modules.m"
    {
#line 1146 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_44_44, &parse_tree__modules__ParentDeps_26);
    }
#line 1147 "modules.m"
    {
#line 1147 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_44_44, &parse_tree__modules__IntDeps_27);
    }
#line 1148 "modules.m"
    {
#line 1148 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_44_44, &parse_tree__modules__ImpDeps_28);
    }
#line 1149 "modules.m"
    {
#line 1149 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_44_44, &parse_tree__modules__IndirectDeps_29);
    }
#line 1150 "modules.m"
    {
#line 1150 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_44_44, &parse_tree__modules__IncludeDeps_30);
    }
#line 1151 "modules.m"
    {
#line 1151 "modules.m"
      parse_tree__modules__ForeignImports_31 = parse_tree__prog_data__init_foreign_import_modules_0_f_0();
    }
#line 1152 "modules.m"
    {
#line 1152 "modules.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &parse_tree__modules__Errors_32);
    }
#line 13646 "parse_tree.modules.c"
    parse_tree__modules__TypeInfo_46_46 = (MR_Word) &parse_tree__modules_scalar_common_1[10];
#line 1159 "modules.m"
    {
#line 1159 "modules.m"
      parse_tree__modules__V_36_36 = mercury__cord__init_0_f_0(parse_tree__modules__TypeInfo_46_46);
    }
#line 1159 "modules.m"
    {
#line 1159 "modules.m"
      parse_tree__modules__V_37_37 = mercury__cord__init_0_f_0(parse_tree__modules__TypeInfo_46_46);
    }
#line 1159 "modules.m"
    {
#line 1159 "modules.m"
      parse_tree__modules__V_38_38 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[6]);
    }
#line 1159 "modules.m"
    {
#line 1159 "modules.m"
      parse_tree__modules__V_39_39 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[11]);
    }
#line 1159 "modules.m"
    {
#line 1159 "modules.m"
      parse_tree__modules__V_40_40 = mercury__map__init_0_f_0(parse_tree__modules__TypeCtorInfo_44_44, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0);
    }
#line 1160 "modules.m"
    {
#line 1160 "modules.m"
      parse_tree__modules__V_42_42 = mercury__dir__this_directory_0_f_0();
    }
#line 1153 "modules.m"
    {
#line 1153 "modules.m"
      MR_Word base;
#line 1153 "modules.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 1153 "modules.m"
      *parse_tree__modules__Module_24 = base;
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__SourceFileName_13));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__SourceFileModuleName_14));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__ModuleName_15));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__ModuleNameContext_16));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__ParentDeps_26));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__IntDeps_27));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__ImpDeps_28));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__IndirectDeps_29));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__IncludeDeps_30));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__PublicChildren_19));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__NestedChildren_20));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__FactDeps_21));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__ForeignImports_31));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__ForeignIncludeFiles_22));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) ((MR_Integer) 1));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__SrcItemBlocks_25));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_36_36));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_37_37));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_38_38));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_39_39));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_40_40));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__Specs_18));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__Errors_32));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__MaybeTimestampMap_23));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) ((MR_Integer) 1));
#line 1153 "modules.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_42_42));
#line 1153 "modules.m"
    }
#line 1135 "modules.m"
  }
#line 1126 "modules.m"
}

#line 885 "modules.m"
static void MR_CALL 
parse_tree__modules__process_module_long_interface_16_p_0(
#line 885 "modules.m"
  MR_Word parse_tree__modules__TypeInfo_for_MS_168,
#line 885 "modules.m"
  MR_Word parse_tree__modules__Globals_17,
#line 885 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_18,
#line 885 "modules.m"
  MR_Word parse_tree__modules__NeedQual_19,
#line 885 "modules.m"
  MR_Word parse_tree__modules__Import_20,
#line 885 "modules.m"
  MR_Word parse_tree__modules__IntFileKind_21,
#line 885 "modules.m"
  MR_Word parse_tree__modules__NewIntSection_22,
#line 885 "modules.m"
  MR_Word parse_tree__modules__NewImpSection_23,
#line 885 "modules.m"
  MR_Word parse_tree__modules__SectionAppend_24,
#line 885 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_IndirectImports_0_54,
#line 885 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_IndirectImports_55,
#line 885 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_56,
#line 885 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_57,
#line 885 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58,
#line 885 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_59)
#line 885 "modules.m"
{
#line 896 "modules.m"
  {
#line 896 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 896 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_170_170;
#line 896 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_171_171;
#line 896 "modules.m"
    MR_Word parse_tree__modules__ReturnTimestamp_29;
#line 896 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestamp_31;
#line 896 "modules.m"
    MR_Word parse_tree__modules__LongIntParseTree_32;
#line 896 "modules.m"
    MR_Word parse_tree__modules__LongIntSpecs_33;
#line 896 "modules.m"
    MR_Word parse_tree__modules__LongIntErrors_34;
#line 896 "modules.m"
    MR_Word parse_tree__modules__LongIntModuleName_35;
#line 896 "modules.m"
    MR_Word parse_tree__modules__LongIntKind_36;
#line 896 "modules.m"
    MR_Word parse_tree__modules__LongIntContext_37;
#line 896 "modules.m"
    MR_Word parse_tree__modules__MaybeVersionNumbers_38;
#line 896 "modules.m"
    MR_Word parse_tree__modules__LongIntIntIncls_39;
#line 896 "modules.m"
    MR_Word parse_tree__modules__LongIntImpIncls_40;
#line 896 "modules.m"
    MR_Word parse_tree__modules__LongIntIntAvails_41;
#line 896 "modules.m"
    MR_Word parse_tree__modules__LongIntImpAvails_42;
#line 896 "modules.m"
    MR_Word parse_tree__modules__LongIntIntItems_43;
#line 896 "modules.m"
    MR_Word parse_tree__modules__LongIntImpItems_44;
#line 896 "modules.m"
    MR_Word parse_tree__modules__IndirectImports1_45;
#line 896 "modules.m"
    MR_Word parse_tree__modules__IndirectUses1_46;
#line 896 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImports1_47;
#line 896 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectUses1_48;
#line 896 "modules.m"
    MR_Word parse_tree__modules__LongIntItemBlocks_49;
#line 896 "modules.m"
    MR_Word parse_tree__modules__Statistics_50;
#line 896 "modules.m"
    MR_Word parse_tree__modules__FatalLongIntErrors_51;
#line 896 "modules.m"
    MR_Word parse_tree__modules__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 24)));
#line 896 "modules.m"
    MR_Word parse_tree__modules__V_63_63;
#line 896 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67_67;
#line 896 "modules.m"
    MR_Box parse_tree__modules__V_68_68;
#line 896 "modules.m"
    MR_Box parse_tree__modules__V_69_69;
#line 896 "modules.m"
    MR_Word parse_tree__modules__V_71_71;
#line 896 "modules.m"
    MR_Word parse_tree__modules__V_72_72;
#line 896 "modules.m"
    MR_Word parse_tree__modules__V_73_73;
#line 896 "modules.m"
    MR_Word parse_tree__modules__V_76_76;
#line 896 "modules.m"
    MR_Word parse_tree__modules__V_77_77;
#line 896 "modules.m"
    MR_Word parse_tree__modules__V_78_78;
#line 896 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80;
#line 896 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_81_81;
#line 896 "modules.m"
    MR_Word parse_tree__modules__V_84_84;
#line 897 "modules.m"
    MR_String parse_tree__modules__V_87_87 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 0)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 1)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 2)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 3)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 4)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 5)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 6)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 7)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 8)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 9)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 10)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 11)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 12)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 13)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 14)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 15)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 16)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 17)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 18)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 19)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 20)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 21)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 22)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 23)));
#line 897 "modules.m"
    MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 25)));
#line 897 "modules.m"
    MR_String parse_tree__modules__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, (MR_Integer) 26)));
#line 899 "modules.m"
    MR_Word parse_tree__modules__V_113_113;
#line 899 "modules.m"
    MR_Word parse_tree__modules__V_114_114;
#line 899 "modules.m"
    MR_String parse_tree__modules___LongIntFileName_30;
#line 917 "modules.m"
    MR_Box MR_CALL (* parse_tree__modules__func_0)(MR_Box, MR_Box, MR_Box);
#line 917 "modules.m"
    MR_Box MR_CALL (* parse_tree__modules__func_1)(MR_Box, MR_Box, MR_Box);
#line 926 "modules.m"
    void MR_CALL (* parse_tree__modules__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 926 "modules.m"
    MR_Box parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_80_80;

#line 897 "modules.m"
    {
#line 897 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_101_116_117_114_110_95_116_105_109_101_115_116_97_109_112_95_95_91_49_93_95_48_2_p_0(parse_tree__modules__V_62_62, &parse_tree__modules__ReturnTimestamp_29);
    }
#line 899 "modules.m"
    parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_18, (MR_Integer) 0)));
#line 899 "modules.m"
    parse_tree__modules__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_18, (MR_Integer) 1)));
#line 899 "modules.m"
    parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_18, (MR_Integer) 2)));
#line 899 "modules.m"
    {
#line 899 "modules.m"
      parse_tree__read_modules__maybe_read_module_int_14_p_0(parse_tree__modules__Globals_17, parse_tree__modules__V_63_63, (MR_String) "Reading interface for module", (MR_Integer) 0, parse_tree__modules__Import_20, parse_tree__modules__IntFileKind_21, &parse_tree__modules___LongIntFileName_30, parse_tree__modules__ReturnTimestamp_29, &parse_tree__modules__MaybeTimestamp_31, &parse_tree__modules__LongIntParseTree_32, &parse_tree__modules__LongIntSpecs_33, &parse_tree__modules__LongIntErrors_34);
    }
#line 905 "modules.m"
    parse_tree__modules__LongIntModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 0)));
#line 905 "modules.m"
    parse_tree__modules__LongIntKind_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 1)));
#line 905 "modules.m"
    parse_tree__modules__LongIntContext_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 2)));
#line 905 "modules.m"
    parse_tree__modules__MaybeVersionNumbers_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 3)));
#line 905 "modules.m"
    parse_tree__modules__LongIntIntIncls_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 4)));
#line 905 "modules.m"
    parse_tree__modules__LongIntImpIncls_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 5)));
#line 905 "modules.m"
    parse_tree__modules__LongIntIntAvails_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 6)));
#line 905 "modules.m"
    parse_tree__modules__LongIntImpAvails_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 7)));
#line 905 "modules.m"
    parse_tree__modules__LongIntIntItems_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 8)));
#line 905 "modules.m"
    parse_tree__modules__LongIntImpItems_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__LongIntParseTree_32, (MR_Integer) 9)));
#line 910 "modules.m"
    {
#line 910 "modules.m"
      parse_tree__module_imports__module_and_imports_maybe_add_module_version_numbers_4_p_0(parse_tree__modules__LongIntModuleName_35, parse_tree__modules__MaybeVersionNumbers_38, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_58, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67_67);
    }
#line 912 "modules.m"
    {
#line 912 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__LongIntIntAvails_41, &parse_tree__modules__IndirectImports1_45, &parse_tree__modules__IndirectUses1_46);
    }
#line 914 "modules.m"
    {
#line 914 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(parse_tree__modules__LongIntImpAvails_42, &parse_tree__modules__ImpIndirectImports1_47, &parse_tree__modules__ImpIndirectUses1_48);
    }
#line 917 "modules.m"
    parse_tree__modules__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewIntSection_22, (MR_Integer) 1)));
#line 917 "modules.m"
    {
#line 917 "modules.m"
      parse_tree__modules__V_68_68 = parse_tree__modules__func_0(((MR_Box) parse_tree__modules__NewIntSection_22), ((MR_Box) (parse_tree__modules__Import_20)), ((MR_Box) (parse_tree__modules__LongIntKind_36)));
    }
#line 917 "modules.m"
    parse_tree__modules__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__modules__NewImpSection_23, (MR_Integer) 1)));
#line 917 "modules.m"
    {
#line 917 "modules.m"
      parse_tree__modules__V_69_69 = parse_tree__modules__func_1(((MR_Box) parse_tree__modules__NewImpSection_23), ((MR_Box) (parse_tree__modules__Import_20)), ((MR_Box) (parse_tree__modules__LongIntKind_36)));
    }
#line 916 "modules.m"
    {
#line 916 "modules.m"
      parse_tree__prog_item__int_imp_items_to_item_blocks_10_p_0(parse_tree__modules__TypeInfo_for_MS_168, parse_tree__modules__LongIntContext_37, parse_tree__modules__V_68_68, parse_tree__modules__V_69_69, parse_tree__modules__LongIntIntIncls_39, parse_tree__modules__LongIntImpIncls_40, parse_tree__modules__LongIntIntAvails_41, parse_tree__modules__LongIntImpAvails_42, parse_tree__modules__LongIntIntItems_43, parse_tree__modules__LongIntImpItems_44, &parse_tree__modules__LongIntItemBlocks_49);
    }
#line 13999 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_170_170 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 922 "modules.m"
    {
#line 922 "modules.m"
      parse_tree__modules__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 922 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_73_73, 0) = ((MR_Box) (parse_tree__modules__IndirectUses1_46));
#line 922 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 922 "modules.m"
    }
#line 922 "modules.m"
    {
#line 922 "modules.m"
      parse_tree__modules__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 922 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 0) = ((MR_Box) (parse_tree__modules__IndirectImports1_45));
#line 922 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_72_72, 1) = ((MR_Box) (parse_tree__modules__V_73_73));
#line 922 "modules.m"
    }
#line 921 "modules.m"
    {
#line 921 "modules.m"
      parse_tree__modules__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_IndirectImports_0_54));
#line 921 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_71_71, 1) = ((MR_Box) (parse_tree__modules__V_72_72));
#line 921 "modules.m"
    }
#line 921 "modules.m"
    {
#line 921 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_IndirectImports_55 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_170_170, parse_tree__modules__V_71_71);
    }
#line 924 "modules.m"
    {
#line 924 "modules.m"
      parse_tree__modules__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_78_78, 0) = ((MR_Box) (parse_tree__modules__ImpIndirectUses1_48));
#line 924 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "modules.m"
    }
#line 924 "modules.m"
    {
#line 924 "modules.m"
      parse_tree__modules__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 0) = ((MR_Box) (parse_tree__modules__ImpIndirectImports1_47));
#line 924 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_77_77, 1) = ((MR_Box) (parse_tree__modules__V_78_78));
#line 924 "modules.m"
    }
#line 923 "modules.m"
    {
#line 923 "modules.m"
      parse_tree__modules__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 923 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 0) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_0_56));
#line 923 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_76_76, 1) = ((MR_Box) (parse_tree__modules__V_77_77));
#line 923 "modules.m"
    }
#line 923 "modules.m"
    {
#line 923 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ImpIndirectImports_57 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_170_170, parse_tree__modules__V_76_76);
    }
#line 926 "modules.m"
    parse_tree__modules__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__modules__SectionAppend_24, (MR_Integer) 1)));
#line 926 "modules.m"
    {
#line 926 "modules.m"
      parse_tree__modules__func_2(((MR_Box) parse_tree__modules__SectionAppend_24), ((MR_Box) (parse_tree__modules__LongIntItemBlocks_49)), ((MR_Box) (parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67_67)), &parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_80_80);
    }
#line 926 "modules.m"
    parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80 = ((MR_Word) parse_tree__modules__conv3_STATE_VARIABLE_ModuleAndImports_80_80);
#line 927 "modules.m"
    {
#line 927 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_errors_4_p_0(parse_tree__modules__LongIntSpecs_33, parse_tree__modules__LongIntErrors_34, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_81_81);
    }
#line 930 "modules.m"
    {
#line 930 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_17, (MR_Integer) 56, &parse_tree__modules__Statistics_50);
    }
#line 931 "modules.m"
    {
#line 931 "modules.m"
      libs__file_util__maybe_report_stats_3_p_0(parse_tree__modules__Statistics_50);
    }
#line 933 "modules.m"
    {
#line 933 "modules.m"
      parse_tree__modules__V_84_84 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
    }
#line 14100 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_171_171 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 933 "modules.m"
    {
#line 933 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_171_171, parse_tree__modules__LongIntErrors_34, parse_tree__modules__V_84_84, &parse_tree__modules__FatalLongIntErrors_51);
    }
#line 934 "modules.m"
    {
#line 934 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0(parse_tree__modules__TypeCtorInfo_171_171, parse_tree__modules__FatalLongIntErrors_51);
    }
#line 940 "modules.m"
    if (parse_tree__modules__succeeded)
#line 936 "modules.m"
      {
#line 936 "modules.m"
        MR_Word parse_tree__modules__ModImpImports0_52;
#line 936 "modules.m"
        MR_Word parse_tree__modules__ModImpImports_53;
#line 936 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85;
#line 937 "modules.m"
        MR_String parse_tree__modules__V_115_115;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_116_116;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_117_117;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_118_118;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_119_119;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_120_120;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_121_121;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_122_122;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_123_123;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_124_124;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_125_125;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_126_126;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_127_127;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_128_128;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_129_129;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_130_130;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_131_131;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_132_132;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_133_133;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_134_134;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_135_135;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_136_136;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_137_137;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_138_138;
#line 937 "modules.m"
        MR_Word parse_tree__modules__V_139_139;
#line 937 "modules.m"
        MR_String parse_tree__modules__V_140_140;
#line 939 "modules.m"
        MR_String parse_tree__modules__V_141_141;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_142_142;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_143_143;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_144_144;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_145_145;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_146_146;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_148_148;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_149_149;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_150_150;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_151_151;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_152_152;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_153_153;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_154_154;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_155_155;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_156_156;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_157_157;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_158_158;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_159_159;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_160_160;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_161_161;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_162_162;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_163_163;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_164_164;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_165_165;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_166_166;
#line 939 "modules.m"
        MR_String parse_tree__modules__V_167_167;
#line 939 "modules.m"
        MR_Word parse_tree__modules__V_147_147;

#line 935 "modules.m"
        {
#line 935 "modules.m"
          parse_tree__modules__maybe_record_timestamp_6_p_0(parse_tree__modules__Import_20, parse_tree__modules__IntFileKind_21, parse_tree__modules__NeedQual_19, parse_tree__modules__MaybeTimestamp_31, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_81_81, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85);
        }
#line 937 "modules.m"
        parse_tree__modules__V_115_115 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 0)));
#line 937 "modules.m"
        parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 1)));
#line 937 "modules.m"
        parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 2)));
#line 937 "modules.m"
        parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 3)));
#line 937 "modules.m"
        parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 4)));
#line 937 "modules.m"
        parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 5)));
#line 937 "modules.m"
        parse_tree__modules__ModImpImports0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 6)));
#line 937 "modules.m"
        parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 7)));
#line 937 "modules.m"
        parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 8)));
#line 937 "modules.m"
        parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 9)));
#line 937 "modules.m"
        parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 10)));
#line 937 "modules.m"
        parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 11)));
#line 937 "modules.m"
        parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 12)));
#line 937 "modules.m"
        parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 13)));
#line 937 "modules.m"
        parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 14)));
#line 937 "modules.m"
        parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 15)));
#line 937 "modules.m"
        parse_tree__modules__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 16)));
#line 937 "modules.m"
        parse_tree__modules__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 17)));
#line 937 "modules.m"
        parse_tree__modules__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 18)));
#line 937 "modules.m"
        parse_tree__modules__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 19)));
#line 937 "modules.m"
        parse_tree__modules__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 20)));
#line 937 "modules.m"
        parse_tree__modules__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 21)));
#line 937 "modules.m"
        parse_tree__modules__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 22)));
#line 937 "modules.m"
        parse_tree__modules__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 23)));
#line 937 "modules.m"
        parse_tree__modules__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 24)));
#line 937 "modules.m"
        parse_tree__modules__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 25)));
#line 937 "modules.m"
        parse_tree__modules__V_140_140 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 26)));
#line 938 "modules.m"
        {
#line 938 "modules.m"
          mercury__set__insert_3_p_0(parse_tree__modules__TypeCtorInfo_170_170, ((MR_Box) (parse_tree__modules__Import_20)), parse_tree__modules__ModImpImports0_52, &parse_tree__modules__ModImpImports_53);
        }
#line 939 "modules.m"
        parse_tree__modules__V_141_141 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 0)));
#line 939 "modules.m"
        parse_tree__modules__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 1)));
#line 939 "modules.m"
        parse_tree__modules__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 2)));
#line 939 "modules.m"
        parse_tree__modules__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 3)));
#line 939 "modules.m"
        parse_tree__modules__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 4)));
#line 939 "modules.m"
        parse_tree__modules__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 5)));
#line 939 "modules.m"
        parse_tree__modules__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 6)));
#line 939 "modules.m"
        parse_tree__modules__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 7)));
#line 939 "modules.m"
        parse_tree__modules__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 8)));
#line 939 "modules.m"
        parse_tree__modules__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 9)));
#line 939 "modules.m"
        parse_tree__modules__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 10)));
#line 939 "modules.m"
        parse_tree__modules__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 11)));
#line 939 "modules.m"
        parse_tree__modules__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 12)));
#line 939 "modules.m"
        parse_tree__modules__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 13)));
#line 939 "modules.m"
        parse_tree__modules__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 14)));
#line 939 "modules.m"
        parse_tree__modules__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 15)));
#line 939 "modules.m"
        parse_tree__modules__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 16)));
#line 939 "modules.m"
        parse_tree__modules__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 17)));
#line 939 "modules.m"
        parse_tree__modules__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 18)));
#line 939 "modules.m"
        parse_tree__modules__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 19)));
#line 939 "modules.m"
        parse_tree__modules__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 20)));
#line 939 "modules.m"
        parse_tree__modules__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 21)));
#line 939 "modules.m"
        parse_tree__modules__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 22)));
#line 939 "modules.m"
        parse_tree__modules__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 23)));
#line 939 "modules.m"
        parse_tree__modules__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 24)));
#line 939 "modules.m"
        parse_tree__modules__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 25)));
#line 939 "modules.m"
        parse_tree__modules__V_167_167 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_85_85, (MR_Integer) 26)));
#line 939 "modules.m"
        {
#line 939 "modules.m"
          MR_Word base;
#line 939 "modules.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 939 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_59 = base;
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__modules__V_141_141));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__modules__V_142_142));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__modules__V_143_143));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__modules__V_144_144));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__modules__V_145_145));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__modules__V_146_146));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__modules__ModImpImports_53));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__modules__V_148_148));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__modules__V_149_149));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__modules__V_150_150));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__modules__V_151_151));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__modules__V_152_152));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__modules__V_153_153));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__modules__V_154_154));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__modules__V_155_155));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__modules__V_156_156));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__modules__V_157_157));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__modules__V_158_158));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__modules__V_159_159));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__modules__V_160_160));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__modules__V_161_161));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__modules__V_162_162));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__modules__V_163_163));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__modules__V_164_164));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__modules__V_165_165));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__modules__V_166_166));
#line 939 "modules.m"
          MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__modules__V_167_167));
#line 939 "modules.m"
        }
#line 936 "modules.m"
      }
#line 940 "modules.m"
    else
#line 940 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_ModuleAndImports_59 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_81_81;
#line 896 "modules.m"
  }
#line 885 "modules.m"
}

#line 705 "modules.m"
static MR_Word MR_CALL 
parse_tree__modules__wrap_symname_1_f_0(
#line 705 "modules.m"
  MR_Word parse_tree__modules__ModuleName_3)
#line 705 "modules.m"
{
#line 707 "modules.m"
  {
#line 707 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 707 "modules.m"
    MR_Word parse_tree__modules__HeadVar__2_2;

#line 707 "modules.m"
    {
#line 707 "modules.m"
      parse_tree__modules__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 707 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__modules__ModuleName_3));
#line 707 "modules.m"
    }
#line 707 "modules.m"
    return parse_tree__modules__HeadVar__2_2;
#line 707 "modules.m"
  }
#line 705 "modules.m"
}

#line 620 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_import_for_ancestor_5_p_0(
#line 620 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 620 "modules.m"
  MR_Word parse_tree__modules__AncestorName_7,
#line 620 "modules.m"
  MR_Word parse_tree__modules__Context_8,
#line 620 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_15,
#line 620 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_16)
#line 620 "modules.m"
{
#line 623 "modules.m"
  {
#line 623 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 623 "modules.m"
    MR_Word parse_tree__modules__MainPieces_10;
#line 623 "modules.m"
    MR_Word parse_tree__modules__Msg_12;
#line 623 "modules.m"
    MR_Word parse_tree__modules__Spec_14;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_19_19;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_20_20;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_21_21;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_24_24;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_25_25;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_39_39;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_40_40;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_43_43;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_44_44;
#line 623 "modules.m"
    MR_Word parse_tree__modules__V_55_55;

#line 624 "modules.m"
    {
#line 624 "modules.m"
      parse_tree__modules__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 624 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_20_20, 1) = ((MR_Box) (parse_tree__modules__ModuleName_6));
#line 624 "modules.m"
    }
#line 626 "modules.m"
    {
#line 626 "modules.m"
      parse_tree__modules__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 626 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_25_25, 1) = ((MR_Box) (parse_tree__modules__AncestorName_7));
#line 626 "modules.m"
    }
#line 626 "modules.m"
    {
#line 626 "modules.m"
      parse_tree__modules__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_24_24, 0) = ((MR_Box) (parse_tree__modules__V_25_25));
#line 626 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[41])));
#line 626 "modules.m"
    }
#line 625 "modules.m"
    {
#line 625 "modules.m"
      parse_tree__modules__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[39])));
#line 625 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_21_21, 1) = ((MR_Box) (parse_tree__modules__V_24_24));
#line 625 "modules.m"
    }
#line 624 "modules.m"
    {
#line 624 "modules.m"
      parse_tree__modules__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_19_19, 0) = ((MR_Box) (parse_tree__modules__V_20_20));
#line 624 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_19_19, 1) = ((MR_Box) (parse_tree__modules__V_21_21));
#line 624 "modules.m"
    }
#line 624 "modules.m"
    {
#line 624 "modules.m"
      parse_tree__modules__MainPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[38])));
#line 624 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__MainPieces_10, 1) = ((MR_Box) (parse_tree__modules__V_19_19));
#line 624 "modules.m"
    }
#line 632 "modules.m"
    {
#line 632 "modules.m"
      parse_tree__modules__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 632 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_44_44, 0) = ((MR_Box) (parse_tree__modules__MainPieces_10));
#line 632 "modules.m"
    }
#line 632 "modules.m"
    {
#line 632 "modules.m"
      parse_tree__modules__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 0) = ((MR_Box) (parse_tree__modules__V_44_44));
#line 632 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[43])));
#line 632 "modules.m"
    }
#line 631 "modules.m"
    {
#line 631 "modules.m"
      parse_tree__modules__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 631 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_40_40, 1) = ((MR_Box) (parse_tree__modules__V_43_43));
#line 631 "modules.m"
    }
#line 633 "modules.m"
    {
#line 633 "modules.m"
      parse_tree__modules__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_39_39, 0) = ((MR_Box) (parse_tree__modules__V_40_40));
#line 633 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 633 "modules.m"
    }
#line 630 "modules.m"
    {
#line 630 "modules.m"
      parse_tree__modules__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 630 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_12, 0) = ((MR_Box) (parse_tree__modules__Context_8));
#line 630 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_12, 1) = ((MR_Box) (parse_tree__modules__V_39_39));
#line 630 "modules.m"
    }
#line 636 "modules.m"
    {
#line 636 "modules.m"
      parse_tree__modules__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_55_55, 0) = ((MR_Box) (parse_tree__modules__Msg_12));
#line 636 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 636 "modules.m"
    }
#line 636 "modules.m"
    {
#line 636 "modules.m"
      parse_tree__modules__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 636 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[0])));
#line 636 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 636 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_14, 2) = ((MR_Box) (parse_tree__modules__V_55_55));
#line 636 "modules.m"
    }
#line 637 "modules.m"
    {
#line 637 "modules.m"
      MR_Word base;
#line 637 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_16 = base;
#line 637 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_14));
#line 637 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_15));
#line 637 "modules.m"
    }
#line 623 "modules.m"
  }
#line 620 "modules.m"
}

#line 607 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_import_for_self_4_p_0(
#line 607 "modules.m"
  MR_Word parse_tree__modules__ModuleName_5,
#line 607 "modules.m"
  MR_Word parse_tree__modules__Context_6,
#line 607 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_12,
#line 607 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_13)
#line 607 "modules.m"
{
#line 610 "modules.m"
  {
#line 610 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 610 "modules.m"
    MR_Word parse_tree__modules__Pieces_8;
#line 610 "modules.m"
    MR_Word parse_tree__modules__Msg_9;
#line 610 "modules.m"
    MR_Word parse_tree__modules__Spec_11;
#line 610 "modules.m"
    MR_Word parse_tree__modules__V_16_16;
#line 610 "modules.m"
    MR_Word parse_tree__modules__V_17_17;
#line 610 "modules.m"
    MR_Word parse_tree__modules__V_24_24;
#line 610 "modules.m"
    MR_Word parse_tree__modules__V_25_25;
#line 610 "modules.m"
    MR_Word parse_tree__modules__V_28_28;
#line 610 "modules.m"
    MR_Word parse_tree__modules__V_29_29;
#line 610 "modules.m"
    MR_Word parse_tree__modules__V_37_37;

#line 611 "modules.m"
    {
#line 611 "modules.m"
      parse_tree__modules__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 611 "modules.m"
      MR_hl_field(MR_mktag(3), parse_tree__modules__V_17_17, 1) = ((MR_Box) (parse_tree__modules__ModuleName_5));
#line 611 "modules.m"
    }
#line 611 "modules.m"
    {
#line 611 "modules.m"
      parse_tree__modules__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_16_16, 0) = ((MR_Box) (parse_tree__modules__V_17_17));
#line 611 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_1[16])));
#line 611 "modules.m"
    }
#line 611 "modules.m"
    {
#line 611 "modules.m"
      parse_tree__modules__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__modules_scalar_common_1[37])));
#line 611 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__Pieces_8, 1) = ((MR_Box) (parse_tree__modules__V_16_16));
#line 611 "modules.m"
    }
#line 614 "modules.m"
    {
#line 614 "modules.m"
      parse_tree__modules__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 614 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_29_29, 0) = ((MR_Box) (parse_tree__modules__Pieces_8));
#line 614 "modules.m"
    }
#line 614 "modules.m"
    {
#line 614 "modules.m"
      parse_tree__modules__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 0) = ((MR_Box) (parse_tree__modules__V_29_29));
#line 614 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "modules.m"
    }
#line 614 "modules.m"
    {
#line 614 "modules.m"
      parse_tree__modules__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_25_25, 0) = ((MR_Box) (((MR_Integer) 19 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 614 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_25_25, 1) = ((MR_Box) (parse_tree__modules__V_28_28));
#line 614 "modules.m"
    }
#line 614 "modules.m"
    {
#line 614 "modules.m"
      parse_tree__modules__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_24_24, 0) = ((MR_Box) (parse_tree__modules__V_25_25));
#line 614 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "modules.m"
    }
#line 613 "modules.m"
    {
#line 613 "modules.m"
      parse_tree__modules__Msg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 613 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_9, 0) = ((MR_Box) (parse_tree__modules__Context_6));
#line 613 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Msg_9, 1) = ((MR_Box) (parse_tree__modules__V_24_24));
#line 613 "modules.m"
    }
#line 617 "modules.m"
    {
#line 617 "modules.m"
      parse_tree__modules__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_37_37, 0) = ((MR_Box) (parse_tree__modules__Msg_9));
#line 617 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "modules.m"
    }
#line 617 "modules.m"
    {
#line 617 "modules.m"
      parse_tree__modules__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 617 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__modules_scalar_common_3[0])));
#line 617 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 617 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__Spec_11, 2) = ((MR_Box) (parse_tree__modules__V_37_37));
#line 617 "modules.m"
    }
#line 618 "modules.m"
    {
#line 618 "modules.m"
      MR_Word base;
#line 618 "modules.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_13 = base;
#line 618 "modules.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__Spec_11));
#line 618 "modules.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_12));
#line 618 "modules.m"
    }
#line 610 "modules.m"
  }
#line 607 "modules.m"
}

#line 584 "modules.m"
static void MR_CALL 
parse_tree__modules__find_avail_contexts_for_module_in_avails_4_p_0(
#line 584 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 584 "modules.m"
  MR_Word parse_tree__modules__ModuleName_2,
#line 584 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_AvailContexts_0_3,
#line 584 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_AvailContexts_4)
#line 584 "modules.m"
{
#line 587 "modules.m"
  while (MR_TRUE)
#line 587 "modules.m"
    {
#line 587 "modules.m"
      /* tailcall optimized into a loop */
#line 587 "modules.m"
      {
#line 587 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 587 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_AvailContexts_4 = parse_tree__modules__STATE_VARIABLE_AvailContexts_0_3;
#line 587 "modules.m"
        else
#line 589 "modules.m"
          {
#line 589 "modules.m"
            MR_Word parse_tree__modules__Avail_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 589 "modules.m"
            MR_Word parse_tree__modules__Avails_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 589 "modules.m"
            MR_Word parse_tree__modules__AvailModuleName_14;
#line 589 "modules.m"
            MR_Word parse_tree__modules__Context_15;
#line 589 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_AvailContexts_20_20;

#line 593 "modules.m"
            if (((MR_tag((MR_Word) parse_tree__modules__Avail_9)) == (MR_mktag((MR_Integer) 0))))
#line 591 "modules.m"
              {
#line 591 "modules.m"
                MR_Word parse_tree__modules__Import_13 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Avail_9), (MR_Integer) 0);
#line 592 "modules.m"
                MR_Integer parse_tree__modules___SeqNum_16;

#line 592 "modules.m"
                parse_tree__modules__AvailModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__Import_13, (MR_Integer) 0)));
#line 592 "modules.m"
                parse_tree__modules__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__Import_13, (MR_Integer) 1)));
#line 592 "modules.m"
                parse_tree__modules___SeqNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__Import_13, (MR_Integer) 2)));
#line 591 "modules.m"
              }
#line 593 "modules.m"
            else
#line 594 "modules.m"
              {
#line 594 "modules.m"
                MR_Word parse_tree__modules__Use_17 = (MR_Word) MR_body(((MR_Word) parse_tree__modules__Avail_9), (MR_Integer) 1);
#line 595 "modules.m"
                MR_Integer parse_tree__modules___SeqNum_22;

#line 595 "modules.m"
                parse_tree__modules__AvailModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__Use_17, (MR_Integer) 0)));
#line 595 "modules.m"
                parse_tree__modules__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__Use_17, (MR_Integer) 1)));
#line 595 "modules.m"
                parse_tree__modules___SeqNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__Use_17, (MR_Integer) 2)));
#line 594 "modules.m"
              }
#line 597 "modules.m"
            {
#line 597 "modules.m"
              parse_tree__modules__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__modules__ModuleName_2, parse_tree__modules__AvailModuleName_14);
            }
#line 599 "modules.m"
            if (parse_tree__modules__succeeded)
#line 598 "modules.m"
              {
#line 598 "modules.m"
                parse_tree__modules__STATE_VARIABLE_AvailContexts_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "modules.m"
                MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_AvailContexts_20_20, 0) = ((MR_Box) (parse_tree__modules__Context_15));
#line 598 "modules.m"
                MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_AvailContexts_20_20, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_AvailContexts_0_3));
#line 598 "modules.m"
              }
#line 599 "modules.m"
            else
#line 599 "modules.m"
              parse_tree__modules__STATE_VARIABLE_AvailContexts_20_20 = parse_tree__modules__STATE_VARIABLE_AvailContexts_0_3;
#line 602 "modules.m"
            /* direct tailcall eliminated */
#line 602 "modules.m"
            {
#line 602 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__Avails_10;
#line 602 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_AvailContexts_0__tmp_copy_3 = parse_tree__modules__STATE_VARIABLE_AvailContexts_20_20;

#line 602 "modules.m"
              parse_tree__modules__STATE_VARIABLE_AvailContexts_0_3 = parse_tree__modules__STATE_VARIABLE_AvailContexts_0__tmp_copy_3;
#line 602 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 602 "modules.m"
            }
#line 602 "modules.m"
            continue;
#line 589 "modules.m"
          }
#line 587 "modules.m"
      }
#line 587 "modules.m"
      break;
#line 587 "modules.m"
    }
#line 584 "modules.m"
}

#line 571 "modules.m"
static void MR_CALL 
parse_tree__modules__find_avail_contexts_for_module_in_item_blocks_4_p_0(
#line 571 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 571 "modules.m"
  MR_Word parse_tree__modules__ModuleName_2,
#line 571 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_AvailContexts_0_3,
#line 571 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_AvailContexts_4)
#line 571 "modules.m"
{
#line 574 "modules.m"
  while (MR_TRUE)
#line 574 "modules.m"
    {
#line 574 "modules.m"
      /* tailcall optimized into a loop */
#line 574 "modules.m"
      {
#line 574 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 574 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "modules.m"
          *parse_tree__modules__STATE_VARIABLE_AvailContexts_4 = parse_tree__modules__STATE_VARIABLE_AvailContexts_0_3;
#line 574 "modules.m"
        else
#line 576 "modules.m"
          {
#line 576 "modules.m"
            MR_Word parse_tree__modules__ItemBlock_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 576 "modules.m"
            MR_Word parse_tree__modules__ItemBlocks_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 576 "modules.m"
            MR_Word parse_tree__modules__Avails_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_9, (MR_Integer) 3)));
#line 576 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_AvailContexts_20_20;
#line 577 "modules.m"
            MR_Word parse_tree__modules___SectionKind_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_9, (MR_Integer) 0)));
#line 577 "modules.m"
            MR_Word parse_tree__modules___SectionContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_9, (MR_Integer) 1)));
#line 577 "modules.m"
            MR_Word parse_tree__modules___Includes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_9, (MR_Integer) 2)));
#line 577 "modules.m"
            MR_Word parse_tree__modules___Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemBlock_9, (MR_Integer) 4)));

#line 579 "modules.m"
            {
#line 579 "modules.m"
              parse_tree__modules__find_avail_contexts_for_module_in_avails_4_p_0(parse_tree__modules__Avails_16, parse_tree__modules__ModuleName_2, parse_tree__modules__STATE_VARIABLE_AvailContexts_0_3, &parse_tree__modules__STATE_VARIABLE_AvailContexts_20_20);
            }
#line 581 "modules.m"
            /* direct tailcall eliminated */
#line 581 "modules.m"
            {
#line 581 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__ItemBlocks_10;
#line 581 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_AvailContexts_0__tmp_copy_3 = parse_tree__modules__STATE_VARIABLE_AvailContexts_20_20;

#line 581 "modules.m"
              parse_tree__modules__STATE_VARIABLE_AvailContexts_0_3 = parse_tree__modules__STATE_VARIABLE_AvailContexts_0__tmp_copy_3;
#line 581 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 581 "modules.m"
            }
#line 581 "modules.m"
            continue;
#line 576 "modules.m"
          }
#line 574 "modules.m"
      }
#line 574 "modules.m"
      break;
#line 574 "modules.m"
    }
#line 571 "modules.m"
}

#line 559 "modules.m"
static void MR_CALL 
parse_tree__modules__find_and_warn_import_for_ancestor_5_p_0_1(
#line 559 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 559 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 559 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 559 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 559 "modules.m"
{
#line 559 "modules.m"
  {
#line 559 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 559 "modules.m"
    MR_Word parse_tree__modules__conv0_STATE_VARIABLE_Specs_16;

#line 559 "modules.m"
    {
#line 559 "modules.m"
      parse_tree__modules__warn_import_for_ancestor_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv0_STATE_VARIABLE_Specs_16);
    }
#line 559 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_STATE_VARIABLE_Specs_16));
#line 559 "modules.m"
  }
#line 559 "modules.m"
}

#line 551 "modules.m"
static void MR_CALL 
parse_tree__modules__find_and_warn_import_for_ancestor_5_p_0(
#line 551 "modules.m"
  MR_Word parse_tree__modules__ModuleName_6,
#line 551 "modules.m"
  MR_Word parse_tree__modules__RawItemBlocks_7,
#line 551 "modules.m"
  MR_Word parse_tree__modules__AncestorModuleName_8,
#line 551 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_11,
#line 551 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_12)
#line 551 "modules.m"
{
#line 556 "modules.m"
  {
#line 556 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 556 "modules.m"
    MR_Word parse_tree__modules__AvailContexts_10;
#line 556 "modules.m"
    MR_Word parse_tree__modules__V_14_14;
#line 559 "modules.m"
    MR_Box parse_tree__modules__conv1_STATE_VARIABLE_Specs_12;

#line 557 "modules.m"
    {
#line 557 "modules.m"
      parse_tree__modules__find_avail_contexts_for_module_in_item_blocks_4_p_0(parse_tree__modules__RawItemBlocks_7, parse_tree__modules__AncestorModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__AvailContexts_10);
    }
#line 559 "modules.m"
    {
#line 559 "modules.m"
      parse_tree__modules__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 559 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_14_14, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_6[1]));
#line 559 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_14_14, 1) = ((MR_Box) (parse_tree__modules__find_and_warn_import_for_ancestor_5_p_0_1));
#line 559 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 559 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_14_14, 3) = ((MR_Box) (parse_tree__modules__ModuleName_6));
#line 559 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_14_14, 4) = ((MR_Box) (parse_tree__modules__AncestorModuleName_8));
#line 559 "modules.m"
    }
#line 559 "modules.m"
    {
#line 559 "modules.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_context_0, (MR_Word) &parse_tree__modules_scalar_common_1[9], parse_tree__modules__V_14_14, parse_tree__modules__AvailContexts_10, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_11)), &parse_tree__modules__conv1_STATE_VARIABLE_Specs_12);
    }
#line 559 "modules.m"
    *parse_tree__modules__STATE_VARIABLE_Specs_12 = ((MR_Word) parse_tree__modules__conv1_STATE_VARIABLE_Specs_12);
#line 556 "modules.m"
  }
#line 551 "modules.m"
}

#line 549 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_for_self_or_ancestor_7_p_0_2(
#line 549 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 549 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 549 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 549 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 549 "modules.m"
{
#line 549 "modules.m"
  {
#line 549 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 549 "modules.m"
    MR_Word parse_tree__modules__conv2_STATE_VARIABLE_Specs_13;

#line 549 "modules.m"
    {
#line 549 "modules.m"
      parse_tree__modules__warn_import_for_self_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv2_STATE_VARIABLE_Specs_13);
    }
#line 549 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_STATE_VARIABLE_Specs_13));
#line 549 "modules.m"
  }
#line 549 "modules.m"
}

#line 532 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_for_self_or_ancestor_7_p_0_1(
#line 532 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 532 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 532 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2,
#line 532 "modules.m"
  MR_Box * parse_tree__modules__wrapper_arg_3)
#line 532 "modules.m"
{
#line 532 "modules.m"
  {
#line 532 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 532 "modules.m"
    MR_Word parse_tree__modules__conv0_STATE_VARIABLE_Specs_12;

#line 532 "modules.m"
    {
#line 532 "modules.m"
      parse_tree__modules__find_and_warn_import_for_ancestor_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2), &parse_tree__modules__conv0_STATE_VARIABLE_Specs_12);
    }
#line 532 "modules.m"
    *parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_STATE_VARIABLE_Specs_12));
#line 532 "modules.m"
  }
#line 532 "modules.m"
}

#line 522 "modules.m"
static void MR_CALL 
parse_tree__modules__warn_if_import_for_self_or_ancestor_7_p_0(
#line 522 "modules.m"
  MR_Word parse_tree__modules__ModuleName_8,
#line 522 "modules.m"
  MR_Word parse_tree__modules__RawItemBlocks_9,
#line 522 "modules.m"
  MR_Word parse_tree__modules__AncestorModules_10,
#line 522 "modules.m"
  MR_Word parse_tree__modules__ImportedModules_11,
#line 522 "modules.m"
  MR_Word parse_tree__modules__UsedModules_12,
#line 522 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Specs_0_16,
#line 522 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Specs_17)
#line 522 "modules.m"
{
#line 528 "modules.m"
  {
#line 528 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 528 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_21_21 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 528 "modules.m"
    MR_Word parse_tree__modules__ImportedOrUsedModules_14;
#line 528 "modules.m"
    MR_Word parse_tree__modules__ImportedOrUsedAncestorModules_15;
#line 528 "modules.m"
    MR_Word parse_tree__modules__V_18_18;
#line 528 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_19_19;
#line 532 "modules.m"
    MR_Box parse_tree__modules__conv1_STATE_VARIABLE_Specs_19_19;

#line 529 "modules.m"
    {
#line 529 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_21_21, parse_tree__modules__ImportedModules_11, parse_tree__modules__UsedModules_12, &parse_tree__modules__ImportedOrUsedModules_14);
    }
#line 530 "modules.m"
    {
#line 530 "modules.m"
      mercury__set__intersect_3_p_0(parse_tree__modules__TypeCtorInfo_21_21, parse_tree__modules__AncestorModules_10, parse_tree__modules__ImportedOrUsedModules_14, &parse_tree__modules__ImportedOrUsedAncestorModules_15);
    }
#line 532 "modules.m"
    {
#line 532 "modules.m"
      parse_tree__modules__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 532 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_18_18, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_6[0]));
#line 532 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_18_18, 1) = ((MR_Box) (parse_tree__modules__warn_if_import_for_self_or_ancestor_7_p_0_1));
#line 532 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 532 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_18_18, 3) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 532 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__V_18_18, 4) = ((MR_Box) (parse_tree__modules__RawItemBlocks_9));
#line 532 "modules.m"
    }
#line 532 "modules.m"
    {
#line 532 "modules.m"
      mercury__set__fold_4_p_0(parse_tree__modules__TypeCtorInfo_21_21, (MR_Word) &parse_tree__modules_scalar_common_1[9], parse_tree__modules__V_18_18, parse_tree__modules__ImportedOrUsedAncestorModules_15, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_0_16)), &parse_tree__modules__conv1_STATE_VARIABLE_Specs_19_19);
    }
#line 532 "modules.m"
    parse_tree__modules__STATE_VARIABLE_Specs_19_19 = ((MR_Word) parse_tree__modules__conv1_STATE_VARIABLE_Specs_19_19);
#line 534 "modules.m"
    {
#line 534 "modules.m"
      parse_tree__modules__succeeded = mercury__set__member_2_p_0(parse_tree__modules__TypeCtorInfo_21_21, ((MR_Box) (parse_tree__modules__ModuleName_8)), parse_tree__modules__ImportedOrUsedModules_14);
    }
#line 536 "modules.m"
    if (parse_tree__modules__succeeded)
#line 546 "modules.m"
      {
#line 546 "modules.m"
        MR_Word parse_tree__modules__AvailContexts_31;
#line 546 "modules.m"
        MR_Word parse_tree__modules__V_33_33;
#line 549 "modules.m"
        MR_Box parse_tree__modules__conv3_STATE_VARIABLE_Specs_17;

#line 547 "modules.m"
        {
#line 547 "modules.m"
          parse_tree__modules__find_avail_contexts_for_module_in_item_blocks_4_p_0(parse_tree__modules__RawItemBlocks_9, parse_tree__modules__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__AvailContexts_31);
        }
#line 549 "modules.m"
        {
#line 549 "modules.m"
          parse_tree__modules__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 549 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_33_33, 0) = ((MR_Box) (&parse_tree__modules_scalar_common_4[1]));
#line 549 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_33_33, 1) = ((MR_Box) (parse_tree__modules__warn_if_import_for_self_or_ancestor_7_p_0_2));
#line 549 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 549 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_33_33, 3) = ((MR_Box) (parse_tree__modules__ModuleName_8));
#line 549 "modules.m"
        }
#line 549 "modules.m"
        {
#line 549 "modules.m"
          mercury__list__foldl_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_context_0, (MR_Word) &parse_tree__modules_scalar_common_1[9], parse_tree__modules__V_33_33, parse_tree__modules__AvailContexts_31, ((MR_Box) (parse_tree__modules__STATE_VARIABLE_Specs_19_19)), &parse_tree__modules__conv3_STATE_VARIABLE_Specs_17);
        }
#line 549 "modules.m"
        *parse_tree__modules__STATE_VARIABLE_Specs_17 = ((MR_Word) parse_tree__modules__conv3_STATE_VARIABLE_Specs_17);
#line 546 "modules.m"
      }
#line 536 "modules.m"
    else
#line 536 "modules.m"
      *parse_tree__modules__STATE_VARIABLE_Specs_17 = parse_tree__modules__STATE_VARIABLE_Specs_19_19;
#line 528 "modules.m"
  }
#line 522 "modules.m"
}

#line 477 "modules.m"
static void MR_CALL 
parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(
#line 477 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 477 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_0_2,
#line 477 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevClauses_3,
#line 477 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4,
#line 477 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_RevImpDecls_5)
#line 477 "modules.m"
{
#line 480 "modules.m"
  while (MR_TRUE)
#line 480 "modules.m"
    {
#line 480 "modules.m"
      /* tailcall optimized into a loop */
#line 480 "modules.m"
      {
#line 480 "modules.m"
        MR_bool parse_tree__modules__succeeded;

#line 480 "modules.m"
        if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "modules.m"
          {
#line 480 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_RevImpDecls_5 = parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4;
#line 480 "modules.m"
            *parse_tree__modules__STATE_VARIABLE_RevClauses_3 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 480 "modules.m"
          }
#line 480 "modules.m"
        else
#line 482 "modules.m"
          {
#line 482 "modules.m"
            MR_Word parse_tree__modules__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 482 "modules.m"
            MR_Word parse_tree__modules__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 482 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40;
#line 482 "modules.m"
            MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_42_42;

#line 489 "modules.m"
#line 489 "modules.m"
            switch (MR_tag((MR_Word) parse_tree__modules__Item_12)) {
#line 489 "modules.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 489 "modules.m"
              case (MR_Integer) 0:
#line 487 "modules.m"
                {
#line 488 "modules.m"
                  {
#line 488 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_RevClauses_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_42_42, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 488 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_42_42, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevClauses_0_2));
#line 488 "modules.m"
                  }
#line 487 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40 = parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4;
#line 487 "modules.m"
                }
#line 489 "modules.m"
                break;
#line 489 "modules.m"
              case (MR_Integer) 1:
#line 489 "modules.m"
              case (MR_Integer) 2:
#line 513 "modules.m"
                {
#line 514 "modules.m"
                  {
#line 514 "modules.m"
                    parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 514 "modules.m"
                    MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4));
#line 514 "modules.m"
                  }
#line 513 "modules.m"
                  parse_tree__modules__STATE_VARIABLE_RevClauses_42_42 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 513 "modules.m"
                }
#line 489 "modules.m"
                break;
#line 489 "modules.m"
              case (MR_Integer) 3:
#line 489 "modules.m"
#line 489 "modules.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_12, (MR_Integer) 0)))) {
#line 489 "modules.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 489 "modules.m"
                  case (MR_Integer) 0:
#line 489 "modules.m"
                  case (MR_Integer) 1:
#line 489 "modules.m"
                  case (MR_Integer) 2:
#line 489 "modules.m"
                  case (MR_Integer) 4:
#line 489 "modules.m"
                  case (MR_Integer) 5:
#line 489 "modules.m"
                  case (MR_Integer) 6:
#line 489 "modules.m"
                  case (MR_Integer) 9:
#line 489 "modules.m"
                  case (MR_Integer) 10:
#line 513 "modules.m"
                    {
#line 514 "modules.m"
                      {
#line 514 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 514 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4));
#line 514 "modules.m"
                      }
#line 513 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_RevClauses_42_42 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 513 "modules.m"
                    }
#line 489 "modules.m"
                    break;
#line 489 "modules.m"
                  case (MR_Integer) 3:
#line 490 "modules.m"
                    {
#line 490 "modules.m"
                      MR_Word parse_tree__modules__ItemPragma_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__modules__Item_12, (MR_Integer) 1)));
#line 490 "modules.m"
                      MR_Word parse_tree__modules__Pragma_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 0)));
#line 490 "modules.m"
                      MR_Word parse_tree__modules__AllowedInInterface_24;
#line 491 "modules.m"
                      MR_Word parse_tree__modules__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 1)));
#line 491 "modules.m"
                      MR_Word parse_tree__modules__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 2)));
#line 491 "modules.m"
                      MR_Integer parse_tree__modules__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__modules__ItemPragma_19, (MR_Integer) 3)));

#line 492 "modules.m"
                      {
#line 492 "modules.m"
                        parse_tree__modules__AllowedInInterface_24 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(parse_tree__modules__Pragma_20);
                      }
#line 496 "modules.m"
#line 496 "modules.m"
                      switch (parse_tree__modules__AllowedInInterface_24) {
#line 496 "modules.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 496 "modules.m"
                        case (MR_Integer) 0:
#line 494 "modules.m"
                          {
#line 495 "modules.m"
                            {
#line 495 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_RevClauses_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_42_42, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 495 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_42_42, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevClauses_0_2));
#line 495 "modules.m"
                            }
#line 494 "modules.m"
                            parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40 = parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4;
#line 494 "modules.m"
                          }
#line 496 "modules.m"
                          break;
#line 496 "modules.m"
                        case (MR_Integer) 1:
#line 497 "modules.m"
                          {
#line 498 "modules.m"
                            {
#line 498 "modules.m"
                              parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 498 "modules.m"
                              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4));
#line 498 "modules.m"
                            }
#line 497 "modules.m"
                            parse_tree__modules__STATE_VARIABLE_RevClauses_42_42 = parse_tree__modules__STATE_VARIABLE_RevClauses_0_2;
#line 497 "modules.m"
                          }
#line 496 "modules.m"
                          break;
#line 496 "modules.m"
                      }
#line 490 "modules.m"
                    }
#line 489 "modules.m"
                    break;
#line 489 "modules.m"
                  case (MR_Integer) 7:
#line 489 "modules.m"
                  case (MR_Integer) 8:
#line 487 "modules.m"
                    {
#line 488 "modules.m"
                      {
#line 488 "modules.m"
                        parse_tree__modules__STATE_VARIABLE_RevClauses_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_42_42, 0) = ((MR_Box) (parse_tree__modules__Item_12));
#line 488 "modules.m"
                        MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_RevClauses_42_42, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_RevClauses_0_2));
#line 488 "modules.m"
                      }
#line 487 "modules.m"
                      parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40 = parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4;
#line 487 "modules.m"
                    }
#line 489 "modules.m"
                    break;
#line 489 "modules.m"
                }
#line 489 "modules.m"
                break;
#line 489 "modules.m"
            }
#line 516 "modules.m"
            /* direct tailcall eliminated */
#line 516 "modules.m"
            {
#line 516 "modules.m"
              MR_Word parse_tree__modules__HeadVar__1__tmp_copy_1 = parse_tree__modules__Items_13;
#line 516 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_RevClauses_0__tmp_copy_2 = parse_tree__modules__STATE_VARIABLE_RevClauses_42_42;
#line 516 "modules.m"
              MR_Word parse_tree__modules__STATE_VARIABLE_RevImpDecls_0__tmp_copy_4 = parse_tree__modules__STATE_VARIABLE_RevImpDecls_40_40;

#line 516 "modules.m"
              parse_tree__modules__STATE_VARIABLE_RevImpDecls_0_4 = parse_tree__modules__STATE_VARIABLE_RevImpDecls_0__tmp_copy_4;
#line 516 "modules.m"
              parse_tree__modules__STATE_VARIABLE_RevClauses_0_2 = parse_tree__modules__STATE_VARIABLE_RevClauses_0__tmp_copy_2;
#line 516 "modules.m"
              parse_tree__modules__HeadVar__1_1 = parse_tree__modules__HeadVar__1__tmp_copy_1;
#line 516 "modules.m"
            }
#line 516 "modules.m"
            continue;
#line 482 "modules.m"
          }
#line 480 "modules.m"
      }
#line 480 "modules.m"
      break;
#line 480 "modules.m"
    }
#line 477 "modules.m"
}

#line 438 "modules.m"
static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(
#line 438 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 438 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2)
#line 438 "modules.m"
{
#line 441 "modules.m"
  {
#line 441 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 441 "modules.m"
    if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 441 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 441 "modules.m"
    else
#line 443 "modules.m"
      {
#line 443 "modules.m"
        MR_Word parse_tree__modules__RawItemBlock_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 443 "modules.m"
        MR_Word parse_tree__modules__RawItemBlocks_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 443 "modules.m"
        MR_Word parse_tree__modules__SectionContext_7;
#line 443 "modules.m"
        MR_Word parse_tree__modules__Incls_8;
#line 443 "modules.m"
        MR_Word parse_tree__modules__Avails_9;
#line 443 "modules.m"
        MR_Word parse_tree__modules__Items_10;
#line 443 "modules.m"
        MR_Word parse_tree__modules__RevClauses_11;
#line 443 "modules.m"
        MR_Word parse_tree__modules__RevImpDecls_12;
#line 443 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_18_18;
#line 443 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24;
#line 445 "modules.m"
        MR_Word parse_tree__modules___Section_6;

#line 444 "modules.m"
        {
#line 444 "modules.m"
          parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(parse_tree__modules__RawItemBlocks_4, &parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_18_18);
        }
#line 445 "modules.m"
        parse_tree__modules___Section_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 0)));
#line 445 "modules.m"
        parse_tree__modules__SectionContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 1)));
#line 445 "modules.m"
        parse_tree__modules__Incls_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 2)));
#line 445 "modules.m"
        parse_tree__modules__Avails_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 3)));
#line 445 "modules.m"
        parse_tree__modules__Items_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 4)));
#line 452 "modules.m"
        {
#line 452 "modules.m"
          parse_tree__modules__split_items_into_clauses_and_decls_5_p_0(parse_tree__modules__Items_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__RevClauses_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__RevImpDecls_12);
        }
#line 455 "modules.m"
        parse_tree__modules__succeeded = (parse_tree__modules__RevClauses_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 458 "modules.m"
        if (parse_tree__modules__succeeded)
#line 458 "modules.m"
          parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24 = parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_18_18;
#line 458 "modules.m"
        else
#line 459 "modules.m"
          {
#line 459 "modules.m"
            MR_Word parse_tree__modules__Clauses_13;
#line 459 "modules.m"
            MR_Word parse_tree__modules__ClauseItemBlock_14;

#line 459 "modules.m"
            {
#line 459 "modules.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__modules__RevClauses_11, &parse_tree__modules__Clauses_13);
            }
#line 460 "modules.m"
            {
#line 460 "modules.m"
              parse_tree__modules__ClauseItemBlock_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 460 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ClauseItemBlock_14, 0) = ((MR_Box) ((MR_Integer) 1));
#line 460 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ClauseItemBlock_14, 1) = ((MR_Box) (parse_tree__modules__SectionContext_7));
#line 460 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ClauseItemBlock_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 460 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ClauseItemBlock_14, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 460 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ClauseItemBlock_14, 4) = ((MR_Box) (parse_tree__modules__Clauses_13));
#line 460 "modules.m"
            }
#line 462 "modules.m"
            {
#line 462 "modules.m"
              parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24, 0) = ((MR_Box) (parse_tree__modules__ClauseItemBlock_14));
#line 462 "modules.m"
              MR_hl_field(MR_mktag(1), parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_18_18));
#line 462 "modules.m"
            }
#line 459 "modules.m"
          }
#line 465 "modules.m"
        parse_tree__modules__succeeded = (parse_tree__modules__Incls_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "modules.m"
        if (parse_tree__modules__succeeded)
#line 465 "modules.m"
          {
#line 466 "modules.m"
            parse_tree__modules__succeeded = (parse_tree__modules__Avails_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "modules.m"
            if (parse_tree__modules__succeeded)
#line 467 "modules.m"
              parse_tree__modules__succeeded = (parse_tree__modules__RevImpDecls_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "modules.m"
          }
#line 470 "modules.m"
        if (parse_tree__modules__succeeded)
#line 470 "modules.m"
          *parse_tree__modules__HeadVar__2_2 = parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24;
#line 470 "modules.m"
        else
#line 471 "modules.m"
          {
#line 471 "modules.m"
            MR_Word parse_tree__modules__ImpDecls_15;
#line 471 "modules.m"
            MR_Word parse_tree__modules__ImpDeclItemBlock_16;

#line 471 "modules.m"
            {
#line 471 "modules.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__modules__RevImpDecls_12, &parse_tree__modules__ImpDecls_15);
            }
#line 472 "modules.m"
            {
#line 472 "modules.m"
              parse_tree__modules__ImpDeclItemBlock_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 472 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ImpDeclItemBlock_16, 0) = ((MR_Box) ((MR_Integer) 2));
#line 472 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ImpDeclItemBlock_16, 1) = ((MR_Box) (parse_tree__modules__SectionContext_7));
#line 472 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ImpDeclItemBlock_16, 2) = ((MR_Box) (parse_tree__modules__Incls_8));
#line 472 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ImpDeclItemBlock_16, 3) = ((MR_Box) (parse_tree__modules__Avails_9));
#line 472 "modules.m"
              MR_hl_field(MR_mktag(0), parse_tree__modules__ImpDeclItemBlock_16, 4) = ((MR_Box) (parse_tree__modules__ImpDecls_15));
#line 472 "modules.m"
            }
#line 474 "modules.m"
            {
#line 474 "modules.m"
              MR_Word base;
#line 474 "modules.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "modules.m"
              *parse_tree__modules__HeadVar__2_2 = base;
#line 474 "modules.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__ImpDeclItemBlock_16));
#line 474 "modules.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__STATE_VARIABLE_SrcItemBlocks_24_24));
#line 474 "modules.m"
            }
#line 471 "modules.m"
          }
#line 443 "modules.m"
      }
#line 441 "modules.m"
  }
#line 438 "modules.m"
}

#line 419 "modules.m"
static void MR_CALL 
parse_tree__modules__raw_item_blocks_to_src_2_p_0(
#line 419 "modules.m"
  MR_Word parse_tree__modules__HeadVar__1_1,
#line 419 "modules.m"
  MR_Word * parse_tree__modules__HeadVar__2_2)
#line 419 "modules.m"
{
#line 422 "modules.m"
  {
#line 422 "modules.m"
    MR_bool parse_tree__modules__succeeded;

#line 422 "modules.m"
    if ((parse_tree__modules__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 422 "modules.m"
      *parse_tree__modules__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 422 "modules.m"
    else
#line 424 "modules.m"
      {
#line 424 "modules.m"
        MR_Word parse_tree__modules__RawItemBlock_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 0)));
#line 424 "modules.m"
        MR_Word parse_tree__modules__RawItemBlocks_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__HeadVar__1_1, (MR_Integer) 1)));
#line 424 "modules.m"
        MR_Word parse_tree__modules__SrcItemBlock_5;
#line 424 "modules.m"
        MR_Word parse_tree__modules__SrcItemBlocks_6;
#line 424 "modules.m"
        MR_Word parse_tree__modules__Section_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 0)));
#line 424 "modules.m"
        MR_Word parse_tree__modules__SectionContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 1)));
#line 424 "modules.m"
        MR_Word parse_tree__modules__Incls_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 2)));
#line 424 "modules.m"
        MR_Word parse_tree__modules__Avails_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 3)));
#line 424 "modules.m"
        MR_Word parse_tree__modules__Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawItemBlock_3, (MR_Integer) 4)));
#line 424 "modules.m"
        MR_Word parse_tree__modules__SrcSection_12;

#line 430 "modules.m"
#line 430 "modules.m"
        switch (parse_tree__modules__Section_7) {
#line 430 "modules.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 430 "modules.m"
          case (MR_Integer) 1:
#line 432 "modules.m"
            parse_tree__modules__SrcSection_12 = (MR_Integer) 1;
#line 430 "modules.m"
            break;
#line 430 "modules.m"
          case (MR_Integer) 0:
#line 429 "modules.m"
            parse_tree__modules__SrcSection_12 = (MR_Integer) 0;
#line 430 "modules.m"
            break;
#line 430 "modules.m"
        }
#line 434 "modules.m"
        {
#line 434 "modules.m"
          parse_tree__modules__SrcItemBlock_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 434 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SrcItemBlock_5, 0) = ((MR_Box) (parse_tree__modules__SrcSection_12));
#line 434 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SrcItemBlock_5, 1) = ((MR_Box) (parse_tree__modules__SectionContext_8));
#line 434 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SrcItemBlock_5, 2) = ((MR_Box) (parse_tree__modules__Incls_9));
#line 434 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SrcItemBlock_5, 3) = ((MR_Box) (parse_tree__modules__Avails_10));
#line 434 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__SrcItemBlock_5, 4) = ((MR_Box) (parse_tree__modules__Items_11));
#line 434 "modules.m"
        }
#line 436 "modules.m"
        {
#line 436 "modules.m"
          parse_tree__modules__raw_item_blocks_to_src_2_p_0(parse_tree__modules__RawItemBlocks_4, &parse_tree__modules__SrcItemBlocks_6);
        }
#line 424 "modules.m"
        {
#line 424 "modules.m"
          MR_Word base;
#line 424 "modules.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "modules.m"
          *parse_tree__modules__HeadVar__2_2 = base;
#line 424 "modules.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__modules__SrcItemBlock_5));
#line 424 "modules.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__modules__SrcItemBlocks_6));
#line 424 "modules.m"
        }
#line 424 "modules.m"
      }
#line 422 "modules.m"
  }
#line 419 "modules.m"
}

#line 400 "modules.m"
static void MR_CALL 
parse_tree__modules__get_src_item_blocks_public_children_3_p_0(
#line 400 "modules.m"
  MR_Word parse_tree__modules__RawCompUnit_4,
#line 400 "modules.m"
  MR_Word * parse_tree__modules__SrcItemBlocks_5,
#line 400 "modules.m"
  MR_Word * parse_tree__modules__PublicChildren_6)
#line 400 "modules.m"
{
#line 404 "modules.m"
  {
#line 404 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 404 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0;
#line 404 "modules.m"
    MR_Word parse_tree__modules__RawItemBlocks_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit_4, (MR_Integer) 2)));
#line 404 "modules.m"
    MR_Word parse_tree__modules__Children_10;
#line 405 "modules.m"
    MR_Word parse_tree__modules__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit_4, (MR_Integer) 0)));
#line 405 "modules.m"
    MR_Word parse_tree__modules__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit_4, (MR_Integer) 1)));

#line 406 "modules.m"
    {
#line 406 "modules.m"
      parse_tree__prog_item__get_included_modules_in_item_blocks_2_p_0(parse_tree__modules__TypeCtorInfo_16_16, parse_tree__modules__RawItemBlocks_9, &parse_tree__modules__Children_10);
    }
#line 407 "modules.m"
    {
#line 407 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__modules__Children_10);
    }
#line 410 "modules.m"
    if (parse_tree__modules__succeeded)
#line 408 "modules.m"
      {
#line 408 "modules.m"
        {
#line 408 "modules.m"
          parse_tree__modules__raw_item_blocks_to_src_2_p_0(parse_tree__modules__RawItemBlocks_9, parse_tree__modules__SrcItemBlocks_5);
        }
#line 409 "modules.m"
        {
#line 409 "modules.m"
          mercury__set__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__modules__PublicChildren_6);
#line 409 "modules.m"
          return;
        }
#line 408 "modules.m"
      }
#line 410 "modules.m"
    else
#line 412 "modules.m"
      {
#line 412 "modules.m"
        MR_Word parse_tree__modules__IFileItemBlocks_11;
#line 412 "modules.m"
        MR_Word parse_tree__modules__NoIFileItemBlocks_12;
#line 412 "modules.m"
        MR_Word parse_tree__modules__IFileSrcItemBlocks_13;
#line 412 "modules.m"
        MR_Word parse_tree__modules__NoIFileSrcItemBlocks_14;

#line 411 "modules.m"
        {
#line 411 "modules.m"
          parse_tree__comp_unit_interface__get_int_and_impl_4_p_0((MR_Integer) 0, parse_tree__modules__RawCompUnit_4, &parse_tree__modules__IFileItemBlocks_11, &parse_tree__modules__NoIFileItemBlocks_12);
        }
#line 413 "modules.m"
        {
#line 413 "modules.m"
          parse_tree__modules__raw_item_blocks_to_src_2_p_0(parse_tree__modules__IFileItemBlocks_11, &parse_tree__modules__IFileSrcItemBlocks_13);
        }
#line 414 "modules.m"
        {
#line 414 "modules.m"
          parse_tree__modules__raw_item_blocks_to_split_src_2_p_0(parse_tree__modules__NoIFileItemBlocks_12, &parse_tree__modules__NoIFileSrcItemBlocks_14);
        }
#line 415 "modules.m"
        {
#line 415 "modules.m"
          *parse_tree__modules__SrcItemBlocks_5 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__modules_scalar_common_1[8], parse_tree__modules__IFileSrcItemBlocks_13, parse_tree__modules__NoIFileSrcItemBlocks_14);
        }
#line 416 "modules.m"
        {
#line 416 "modules.m"
          parse_tree__prog_item__get_included_modules_in_item_blocks_2_p_0(parse_tree__modules__TypeCtorInfo_16_16, parse_tree__modules__IFileItemBlocks_11, parse_tree__modules__PublicChildren_6);
#line 416 "modules.m"
          return;
        }
#line 412 "modules.m"
      }
#line 404 "modules.m"
  }
#line 400 "modules.m"
}

#line 103 "modules.m"
void MR_CALL 
parse_tree__modules__grab_trans_opt_files_7_p_0(
#line 103 "modules.m"
  MR_Word parse_tree__modules__Globals_8,
#line 103 "modules.m"
  MR_Word parse_tree__modules__TransOptDeps_9,
#line 103 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_Module_0_17,
#line 103 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_Module_18,
#line 103 "modules.m"
  MR_Word * parse_tree__modules__FoundError_11)
#line 103 "modules.m"
{
#line 1642 "modules.m"
  {
#line 1642 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1642 "modules.m"
    MR_Word parse_tree__modules__TypeInfo_35_35;
#line 1642 "modules.m"
    MR_Word parse_tree__modules__Verbose_13;
#line 1642 "modules.m"
    MR_Word parse_tree__modules__OptItemBlocksCord_14;
#line 1642 "modules.m"
    MR_Word parse_tree__modules__OptSpecs_15;
#line 1642 "modules.m"
    MR_Word parse_tree__modules__OptItemBlocks_16;
#line 1642 "modules.m"
    MR_Word parse_tree__modules__V_25_25;
#line 1642 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_29_29;
#line 1642 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Module_30_30;
#line 1642 "modules.m"
    MR_Word parse_tree__modules__V_31_31;

#line 1643 "modules.m"
    {
#line 1643 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_8, (MR_Integer) 45, &parse_tree__modules__Verbose_13);
    }
#line 1644 "modules.m"
    {
#line 1644 "modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__modules__Verbose_13, (MR_String) "% Reading .trans_opt files..\n");
    }
#line 1645 "modules.m"
    {
#line 1645 "modules.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__modules__Verbose_13);
    }
#line 16002 "parse_tree.modules.c"
    parse_tree__modules__TypeInfo_35_35 = (MR_Word) &parse_tree__modules_scalar_common_1[6];
#line 1648 "modules.m"
    {
#line 1648 "modules.m"
      parse_tree__modules__V_25_25 = mercury__cord__empty_0_f_0(parse_tree__modules__TypeInfo_35_35);
    }
#line 1647 "modules.m"
    {
#line 1647 "modules.m"
      parse_tree__modules__read_trans_opt_files_10_p_0(parse_tree__modules__Globals_8, parse_tree__modules__TransOptDeps_9, parse_tree__modules__V_25_25, &parse_tree__modules__OptItemBlocksCord_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__OptSpecs_15, (MR_Integer) 0, parse_tree__modules__FoundError_11);
    }
#line 1650 "modules.m"
    {
#line 1650 "modules.m"
      parse_tree__modules__OptItemBlocks_16 = mercury__cord__list_1_f_0(parse_tree__modules__TypeInfo_35_35, parse_tree__modules__OptItemBlocksCord_14);
    }
#line 1651 "modules.m"
    {
#line 1651 "modules.m"
      parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(parse_tree__modules__OptItemBlocks_16, parse_tree__modules__STATE_VARIABLE_Module_0_17, &parse_tree__modules__STATE_VARIABLE_Module_29_29);
    }
#line 1652 "modules.m"
    {
#line 1652 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__OptSpecs_15, parse_tree__modules__STATE_VARIABLE_Module_29_29, &parse_tree__modules__STATE_VARIABLE_Module_30_30);
    }
#line 1654 "modules.m"
    {
#line 1654 "modules.m"
      parse_tree__modules__V_31_31 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0);
    }
#line 1654 "modules.m"
    {
#line 1654 "modules.m"
      parse_tree__module_imports__module_and_imports_set_errors_3_p_0(parse_tree__modules__V_31_31, parse_tree__modules__STATE_VARIABLE_Module_30_30, parse_tree__modules__STATE_VARIABLE_Module_18);
    }
#line 1656 "modules.m"
    {
#line 1656 "modules.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__modules__Verbose_13, (MR_String) "% Done.\n");
#line 1656 "modules.m"
      return;
    }
#line 1642 "modules.m"
  }
#line 103 "modules.m"
}

#line 1497 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_opt_files_6_p_0_1(
#line 1497 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 1497 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1)
#line 1497 "modules.m"
{
#line 1497 "modules.m"
  {
#line 1497 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_2;
#line 1497 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 1497 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__2_2;

#line 1497 "modules.m"
    {
#line 1497 "modules.m"
      parse_tree__modules__conv0_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) parse_tree__modules__wrapper_arg_1));
    }
#line 1497 "modules.m"
    parse_tree__modules__wrapper_arg_2 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__2_2));
#line 1497 "modules.m"
    return parse_tree__modules__wrapper_arg_2;
#line 1497 "modules.m"
  }
#line 1497 "modules.m"
}

#line 94 "modules.m"
void MR_CALL 
parse_tree__modules__grab_opt_files_6_p_0(
#line 94 "modules.m"
  MR_Word parse_tree__modules__Globals_7,
#line 94 "modules.m"
  MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42,
#line 94 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43,
#line 94 "modules.m"
  MR_Word * parse_tree__modules__FoundError_9)
#line 94 "modules.m"
{
#line 1440 "modules.m"
  {
#line 1440 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_209_209 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__TypeInfo_210_210;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_231_231;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 2)));
#line 1440 "modules.m"
    MR_Word parse_tree__modules__Ancestors0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 4)));
#line 1440 "modules.m"
    MR_Word parse_tree__modules__IntDeps0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 5)));
#line 1440 "modules.m"
    MR_Word parse_tree__modules__ImpDeps0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 6)));
#line 1440 "modules.m"
    MR_Word parse_tree__modules__OptFiles_15;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__Transitive_16;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__ModulesProcessed_17;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__OptItemBlocksCord_18;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__OptSpecs_19;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__OptError_20;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__OptItemBlocks_21;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__UnusedArgs_22;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__StructureReuse_23;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__UA_SR_Error_26;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__HaveReadModuleMaps_29;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__OptFileAncestors_30;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__Int0Files_31;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__AncestorImports1_32;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__AncestorImports2_33;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__NewImportDeps0_34;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__NewUseDeps0_35;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__NewImplicitImportDeps0_36;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__NewImplicitUseDeps0_37;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__NewDeps_38;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__NewIndirectDeps_39;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__NewImplIndirectDeps_40;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__ModuleErrors_41;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_46_46;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_47_47;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_48_48;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_51_51;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_52_52;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56_56;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_57_57;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_69_69;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_70_70;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_71_71;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_72_72;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_73_73;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_78_78;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_79_79;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_82_82;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_83_83;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_84_84;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_85_85;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_86_86;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_87_87;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_94_94;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_95_95;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_96_96;
#line 1440 "modules.m"
    MR_Word parse_tree__modules__V_98_98;
#line 1442 "modules.m"
    MR_String parse_tree__modules__V_105_105 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 0)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 1)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 3)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 7)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 8)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 9)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 10)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 11)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 12)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 13)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 14)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 15)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 16)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 17)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 18)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 19)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 20)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 21)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 22)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 23)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 24)));
#line 1442 "modules.m"
    MR_Word parse_tree__modules__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 25)));
#line 1442 "modules.m"
    MR_String parse_tree__modules__V_130_130 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, (MR_Integer) 26)));

#line 1446 "modules.m"
    {
#line 1446 "modules.m"
      parse_tree__modules__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_48_48, 0) = ((MR_Box) (parse_tree__modules__ImpDeps0_14));
#line 1446 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1446 "modules.m"
    }
#line 1446 "modules.m"
    {
#line 1446 "modules.m"
      parse_tree__modules__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_47_47, 0) = ((MR_Box) (parse_tree__modules__IntDeps0_13));
#line 1446 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_47_47, 1) = ((MR_Box) (parse_tree__modules__V_48_48));
#line 1446 "modules.m"
    }
#line 1446 "modules.m"
    {
#line 1446 "modules.m"
      parse_tree__modules__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_46_46, 0) = ((MR_Box) (parse_tree__modules__Ancestors0_12));
#line 1446 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_46_46, 1) = ((MR_Box) (parse_tree__modules__V_47_47));
#line 1446 "modules.m"
    }
#line 1446 "modules.m"
    {
#line 1446 "modules.m"
      parse_tree__modules__OptFiles_15 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_209_209, parse_tree__modules__V_46_46);
    }
#line 1447 "modules.m"
    {
#line 1447 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_7, (MR_Integer) 331, &parse_tree__modules__Transitive_16);
    }
#line 1449 "modules.m"
    {
#line 1449 "modules.m"
      mercury__set__insert_3_p_0(parse_tree__modules__TypeCtorInfo_209_209, ((MR_Box) (parse_tree__modules__ModuleName_11)), parse_tree__modules__OptFiles_15, &parse_tree__modules__ModulesProcessed_17);
    }
#line 1451 "modules.m"
    {
#line 1451 "modules.m"
      parse_tree__modules__V_51_51 = mercury__set__to_sorted_list_1_f_0(parse_tree__modules__TypeCtorInfo_209_209, parse_tree__modules__OptFiles_15);
    }
#line 16307 "parse_tree.modules.c"
    parse_tree__modules__TypeInfo_210_210 = (MR_Word) &parse_tree__modules_scalar_common_1[6];
#line 1452 "modules.m"
    {
#line 1452 "modules.m"
      parse_tree__modules__V_52_52 = mercury__cord__empty_0_f_0(parse_tree__modules__TypeInfo_210_210);
    }
#line 1450 "modules.m"
    {
#line 1450 "modules.m"
      parse_tree__modules__read_optimization_interfaces_12_p_0(parse_tree__modules__Globals_7, parse_tree__modules__Transitive_16, parse_tree__modules__V_51_51, parse_tree__modules__ModulesProcessed_17, parse_tree__modules__V_52_52, &parse_tree__modules__OptItemBlocksCord_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__OptSpecs_19, (MR_Integer) 0, &parse_tree__modules__OptError_20);
    }
#line 1453 "modules.m"
    {
#line 1453 "modules.m"
      parse_tree__modules__OptItemBlocks_21 = mercury__cord__list_1_f_0(parse_tree__modules__TypeInfo_210_210, parse_tree__modules__OptItemBlocksCord_18);
    }
#line 1460 "modules.m"
    {
#line 1460 "modules.m"
      parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(parse_tree__modules__OptItemBlocks_21, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_0_42, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56_56);
    }
#line 1461 "modules.m"
    {
#line 1461 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__OptSpecs_19, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_56_56, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_57_57);
    }
#line 1474 "modules.m"
    {
#line 1474 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_7, (MR_Integer) 355, &parse_tree__modules__UnusedArgs_22);
    }
#line 1475 "modules.m"
    {
#line 1475 "modules.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__modules__Globals_7, (MR_Integer) 412, &parse_tree__modules__StructureReuse_23);
    }
#line 1478 "modules.m"
    parse_tree__modules__succeeded = (parse_tree__modules__UnusedArgs_22 == (MR_Integer) 1);
#line 1479 "modules.m"
    if (!(parse_tree__modules__succeeded))
#line 1479 "modules.m"
      parse_tree__modules__succeeded = (parse_tree__modules__StructureReuse_23 == (MR_Integer) 1);
#line 1491 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1484 "modules.m"
      {
#line 1484 "modules.m"
        MR_Word parse_tree__modules__LocalItemBlocksCord_24;
#line 1484 "modules.m"
        MR_Word parse_tree__modules__LocalSpecs_25;
#line 1484 "modules.m"
        MR_Word parse_tree__modules__LocalItemBlocks_27;
#line 1484 "modules.m"
        MR_Word parse_tree__modules__FilteredItemBlocks_28;
#line 1484 "modules.m"
        MR_Word parse_tree__modules__V_61_61;
#line 1484 "modules.m"
        MR_Word parse_tree__modules__V_62_62;
#line 1484 "modules.m"
        MR_Word parse_tree__modules__V_63_63;
#line 1484 "modules.m"
        MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_68_68;

#line 1482 "modules.m"
        {
#line 1482 "modules.m"
          parse_tree__modules__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_61_61, 0) = ((MR_Box) (parse_tree__modules__ModuleName_11));
#line 1482 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1482 "modules.m"
        }
#line 1482 "modules.m"
        {
#line 1482 "modules.m"
          parse_tree__modules__V_62_62 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_209_209);
        }
#line 1483 "modules.m"
        {
#line 1483 "modules.m"
          parse_tree__modules__V_63_63 = mercury__cord__empty_0_f_0(parse_tree__modules__TypeInfo_210_210);
        }
#line 1482 "modules.m"
        {
#line 1482 "modules.m"
          parse_tree__modules__read_optimization_interfaces_12_p_0(parse_tree__modules__Globals_7, (MR_Integer) 0, parse_tree__modules__V_61_61, parse_tree__modules__V_62_62, parse_tree__modules__V_63_63, &parse_tree__modules__LocalItemBlocksCord_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__LocalSpecs_25, (MR_Integer) 0, &parse_tree__modules__UA_SR_Error_26);
        }
#line 1485 "modules.m"
        {
#line 1485 "modules.m"
          parse_tree__modules__LocalItemBlocks_27 = mercury__cord__list_1_f_0(parse_tree__modules__TypeInfo_210_210, parse_tree__modules__LocalItemBlocksCord_24);
        }
#line 1486 "modules.m"
        {
#line 1486 "modules.m"
          parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_111_110_108_121_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(parse_tree__modules__UnusedArgs_22, parse_tree__modules__StructureReuse_23, parse_tree__modules__LocalItemBlocks_27, &parse_tree__modules__FilteredItemBlocks_28);
        }
#line 1488 "modules.m"
        {
#line 1488 "modules.m"
          parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(parse_tree__modules__FilteredItemBlocks_28, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_57_57, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_68_68);
        }
#line 1490 "modules.m"
        {
#line 1490 "modules.m"
          parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__LocalSpecs_25, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_68_68, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_69_69);
        }
#line 1484 "modules.m"
      }
#line 1491 "modules.m"
    else
#line 1492 "modules.m"
      {
#line 1492 "modules.m"
        parse_tree__modules__UA_SR_Error_26 = (MR_Integer) 0;
#line 1492 "modules.m"
        parse_tree__modules__STATE_VARIABLE_ModuleAndImports_69_69 = parse_tree__modules__STATE_VARIABLE_ModuleAndImports_57_57;
#line 1492 "modules.m"
      }
#line 1496 "modules.m"
    {
#line 1496 "modules.m"
      parse_tree__modules__V_70_70 = mercury__map__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[0], (MR_Word) &parse_tree__modules_scalar_common_1[1]);
    }
#line 1496 "modules.m"
    {
#line 1496 "modules.m"
      parse_tree__modules__V_71_71 = mercury__map__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[2], (MR_Word) &parse_tree__modules_scalar_common_1[3]);
    }
#line 1496 "modules.m"
    {
#line 1496 "modules.m"
      parse_tree__modules__V_72_72 = mercury__map__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[4], (MR_Word) &parse_tree__modules_scalar_common_1[5]);
    }
#line 1496 "modules.m"
    {
#line 1496 "modules.m"
      parse_tree__modules__HaveReadModuleMaps_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1496 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_29, 0) = ((MR_Box) (parse_tree__modules__V_70_70));
#line 1496 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_29, 1) = ((MR_Box) (parse_tree__modules__V_71_71));
#line 1496 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_29, 2) = ((MR_Box) (parse_tree__modules__V_72_72));
#line 1496 "modules.m"
    }
#line 1497 "modules.m"
    {
#line 1497 "modules.m"
      parse_tree__modules__V_73_73 = mercury__set__map_2_f_0(parse_tree__modules__TypeCtorInfo_209_209, (MR_Word) &parse_tree__modules_scalar_common_1[7], (MR_Word) &parse_tree__modules_scalar_common_2[2], parse_tree__modules__OptFiles_15);
    }
#line 1497 "modules.m"
    {
#line 1497 "modules.m"
      parse_tree__modules__OptFileAncestors_30 = mercury__set__power_union_1_f_0(parse_tree__modules__TypeCtorInfo_209_209, parse_tree__modules__V_73_73);
    }
#line 1498 "modules.m"
    {
#line 1498 "modules.m"
      parse_tree__modules__Int0Files_31 = mercury__set__delete_2_f_0(parse_tree__modules__TypeCtorInfo_209_209, parse_tree__modules__OptFileAncestors_30, ((MR_Box) (parse_tree__modules__ModuleName_11)));
    }
#line 1502 "modules.m"
    {
#line 1502 "modules.m"
      parse_tree__modules__V_78_78 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_209_209);
    }
#line 1502 "modules.m"
    {
#line 1502 "modules.m"
      parse_tree__modules__V_79_79 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_209_209);
    }
#line 1499 "modules.m"
    {
#line 1499 "modules.m"
      parse_tree__modules__process_module_private_interfaces__ho7_14_p_0(parse_tree__modules__Globals_7, parse_tree__modules__HaveReadModuleMaps_29, parse_tree__modules__Int0Files_31, parse_tree__modules__V_78_78, &parse_tree__modules__AncestorImports1_32, parse_tree__modules__V_79_79, &parse_tree__modules__AncestorImports2_33, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_69_69, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80);
    }
#line 16485 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_231_231 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0;
#line 1506 "modules.m"
    {
#line 1506 "modules.m"
      parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(parse_tree__modules__TypeCtorInfo_231_231, parse_tree__modules__OptItemBlocks_21, &parse_tree__modules__NewImportDeps0_34, &parse_tree__modules__NewUseDeps0_35);
    }
#line 1508 "modules.m"
    {
#line 1508 "modules.m"
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(parse_tree__modules__TypeCtorInfo_231_231, parse_tree__modules__Globals_7, parse_tree__modules__OptItemBlocks_21, &parse_tree__modules__NewImplicitImportDeps0_36, &parse_tree__modules__NewImplicitUseDeps0_37);
    }
#line 1513 "modules.m"
    {
#line 1513 "modules.m"
      parse_tree__modules__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1513 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_87_87, 0) = ((MR_Box) (parse_tree__modules__AncestorImports2_33));
#line 1513 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1513 "modules.m"
    }
#line 1513 "modules.m"
    {
#line 1513 "modules.m"
      parse_tree__modules__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1513 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_86_86, 0) = ((MR_Box) (parse_tree__modules__AncestorImports1_32));
#line 1513 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_86_86, 1) = ((MR_Box) (parse_tree__modules__V_87_87));
#line 1513 "modules.m"
    }
#line 1512 "modules.m"
    {
#line 1512 "modules.m"
      parse_tree__modules__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1512 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_85_85, 0) = ((MR_Box) (parse_tree__modules__NewImplicitUseDeps0_37));
#line 1512 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_85_85, 1) = ((MR_Box) (parse_tree__modules__V_86_86));
#line 1512 "modules.m"
    }
#line 1512 "modules.m"
    {
#line 1512 "modules.m"
      parse_tree__modules__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1512 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_84_84, 0) = ((MR_Box) (parse_tree__modules__NewImplicitImportDeps0_36));
#line 1512 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_84_84, 1) = ((MR_Box) (parse_tree__modules__V_85_85));
#line 1512 "modules.m"
    }
#line 1511 "modules.m"
    {
#line 1511 "modules.m"
      parse_tree__modules__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_83_83, 0) = ((MR_Box) (parse_tree__modules__NewUseDeps0_35));
#line 1511 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_83_83, 1) = ((MR_Box) (parse_tree__modules__V_84_84));
#line 1511 "modules.m"
    }
#line 1511 "modules.m"
    {
#line 1511 "modules.m"
      parse_tree__modules__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_82_82, 0) = ((MR_Box) (parse_tree__modules__NewImportDeps0_34));
#line 1511 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_82_82, 1) = ((MR_Box) (parse_tree__modules__V_83_83));
#line 1511 "modules.m"
    }
#line 1510 "modules.m"
    {
#line 1510 "modules.m"
      parse_tree__modules__NewDeps_38 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_209_209, parse_tree__modules__V_82_82);
    }
#line 1520 "modules.m"
    {
#line 1520 "modules.m"
      parse_tree__modules__V_94_94 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_209_209);
    }
#line 1520 "modules.m"
    {
#line 1520 "modules.m"
      parse_tree__modules__V_95_95 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_209_209);
    }
#line 1516 "modules.m"
    {
#line 1516 "modules.m"
      parse_tree__modules__process_module_long_interfaces__ho6_16_p_0(parse_tree__modules__Globals_7, parse_tree__modules__HaveReadModuleMaps_29, (MR_Integer) 0, parse_tree__modules__NewDeps_38, (MR_Integer) 3, parse_tree__modules__V_94_94, &parse_tree__modules__NewIndirectDeps_39, parse_tree__modules__V_95_95, &parse_tree__modules__NewImplIndirectDeps_40, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_80_80, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_96_96);
    }
#line 1523 "modules.m"
    {
#line 1523 "modules.m"
      parse_tree__modules__V_98_98 = mercury__set__union_2_f_0(parse_tree__modules__TypeCtorInfo_209_209, parse_tree__modules__NewIndirectDeps_39, parse_tree__modules__NewImplIndirectDeps_40);
    }
#line 1522 "modules.m"
    {
#line 1522 "modules.m"
      parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho5_11_p_0(parse_tree__modules__Globals_7, parse_tree__modules__HaveReadModuleMaps_29, parse_tree__modules__V_98_98, (MR_Integer) 2, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_96_96, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43);
    }
#line 1531 "modules.m"
    {
#line 1531 "modules.m"
      parse_tree__module_imports__module_and_imports_get_errors_2_p_0(*parse_tree__modules__STATE_VARIABLE_ModuleAndImports_43, &parse_tree__modules__ModuleErrors_41);
    }
#line 1533 "modules.m"
    {
#line 1533 "modules.m"
      parse_tree__modules__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__modules__ModuleErrors_41);
    }
#line 1534 "modules.m"
    if (!(parse_tree__modules__succeeded))
#line 1534 "modules.m"
      {
#line 1534 "modules.m"
        parse_tree__modules__succeeded = (parse_tree__modules__OptError_20 == (MR_Integer) 1);
#line 1534 "modules.m"
        if (!(parse_tree__modules__succeeded))
#line 1535 "modules.m"
          parse_tree__modules__succeeded = (parse_tree__modules__UA_SR_Error_26 == (MR_Integer) 1);
#line 1534 "modules.m"
      }
#line 1539 "modules.m"
    if (parse_tree__modules__succeeded)
#line 1538 "modules.m"
      *parse_tree__modules__FoundError_9 = (MR_Integer) 1;
#line 1539 "modules.m"
    else
#line 1540 "modules.m"
      *parse_tree__modules__FoundError_9 = (MR_Integer) 0;
#line 1440 "modules.m"
  }
#line 94 "modules.m"
}

#line 372 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_5(
#line 372 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 372 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 372 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 372 "modules.m"
{
#line 372 "modules.m"
  {
#line 372 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 372 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 372 "modules.m"
    MR_Word parse_tree__modules__conv4_HeadVar__4_4;

#line 372 "modules.m"
    {
#line 372 "modules.m"
      parse_tree__modules__conv4_HeadVar__4_4 = parse_tree__prog_item__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 372 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv4_HeadVar__4_4));
#line 372 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 372 "modules.m"
  }
#line 372 "modules.m"
}

#line 366 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_4(
#line 366 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 366 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 366 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 366 "modules.m"
{
#line 366 "modules.m"
  {
#line 366 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 366 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 366 "modules.m"
    MR_Word parse_tree__modules__conv3_HeadVar__4_4;

#line 366 "modules.m"
    {
#line 366 "modules.m"
      parse_tree__modules__conv3_HeadVar__4_4 = parse_tree__prog_item__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 366 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv3_HeadVar__4_4));
#line 366 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 366 "modules.m"
  }
#line 366 "modules.m"
}

#line 350 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_3(
#line 350 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 350 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 350 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 350 "modules.m"
{
#line 350 "modules.m"
  {
#line 350 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 350 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 350 "modules.m"
    MR_Word parse_tree__modules__conv2_HeadVar__4_4;

#line 350 "modules.m"
    {
#line 350 "modules.m"
      parse_tree__modules__conv2_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 350 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_HeadVar__4_4));
#line 350 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 350 "modules.m"
  }
#line 350 "modules.m"
}

#line 338 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_2(
#line 338 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 338 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 338 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 338 "modules.m"
{
#line 338 "modules.m"
  {
#line 338 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 338 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 338 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__4_4;

#line 338 "modules.m"
    {
#line 338 "modules.m"
      parse_tree__modules__conv1_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 338 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__4_4));
#line 338 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 338 "modules.m"
  }
#line 338 "modules.m"
}

#line 329 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0_1(
#line 329 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 329 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 329 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 329 "modules.m"
{
#line 329 "modules.m"
  {
#line 329 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 329 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 329 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__4_4;

#line 329 "modules.m"
    {
#line 329 "modules.m"
      parse_tree__modules__conv0_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 329 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__4_4));
#line 329 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 329 "modules.m"
  }
#line 329 "modules.m"
}

#line 87 "modules.m"
void MR_CALL 
parse_tree__modules__grab_unqual_imported_modules_7_p_0(
#line 87 "modules.m"
  MR_Word parse_tree__modules__Globals_8,
#line 87 "modules.m"
  MR_String parse_tree__modules__SourceFileName_9,
#line 87 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_10,
#line 87 "modules.m"
  MR_Word parse_tree__modules__RawCompUnit0_11,
#line 87 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_48)
#line 87 "modules.m"
{
#line 300 "modules.m"
  {
#line 300 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 300 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_151_151;
#line 300 "modules.m"
    MR_Word parse_tree__modules__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_11, (MR_Integer) 0)));
#line 300 "modules.m"
    MR_Word parse_tree__modules__ModuleNameContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_11, (MR_Integer) 1)));
#line 300 "modules.m"
    MR_Word parse_tree__modules__RawItemBlocks0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_11, (MR_Integer) 2)));
#line 300 "modules.m"
    MR_Word parse_tree__modules__ParentDeps_17;
#line 300 "modules.m"
    MR_Word parse_tree__modules__IntImportDeps0_18;
#line 300 "modules.m"
    MR_Word parse_tree__modules__IntUseDeps0_19;
#line 300 "modules.m"
    MR_Word parse_tree__modules__ImpImportDeps_20;
#line 300 "modules.m"
    MR_Word parse_tree__modules__ImpUseDeps_21;
#line 300 "modules.m"
    MR_Word parse_tree__modules__SrcItemBlocks_22;
#line 300 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntImportDeps_23;
#line 300 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntUseDeps_24;
#line 300 "modules.m"
    MR_Word parse_tree__modules__IntImportDeps_25;
#line 300 "modules.m"
    MR_Word parse_tree__modules__IntUseDeps_26;
#line 300 "modules.m"
    MR_Word parse_tree__modules__HaveReadModuleMaps_27;
#line 300 "modules.m"
    MR_Word parse_tree__modules__ParentImportDeps_28;
#line 300 "modules.m"
    MR_Word parse_tree__modules__ParentUseDeps_29;
#line 300 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps0_30;
#line 300 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps1_32;
#line 300 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImportDeps0_34;
#line 300 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps2_36;
#line 300 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImportDeps_38;
#line 300 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImportDeps_40;
#line 300 "modules.m"
    MR_Word parse_tree__modules__AugCompUnit_44;
#line 300 "modules.m"
    MR_Word parse_tree__modules__AccessSpecs_47;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_52_52;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_53_53;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_55_55;
#line 300 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_57_57;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_58_58;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_59_59;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_60_60;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_61_61;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_65_65;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_66_66;
#line 300 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67_67;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_73_73;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_76_76;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_77_77;
#line 300 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_78_78;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_86_86;
#line 300 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_87_87;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_95_95;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_96_96;
#line 300 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_97_97;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_105_105;
#line 300 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_106_106;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_114_114;
#line 300 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_115_115;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_123_123;
#line 300 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_124_124;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_131_131;
#line 300 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_132_132;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_139_139;
#line 300 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_140_140;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_143_143;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_145_145;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_146_146;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_147_147;
#line 300 "modules.m"
    MR_Word parse_tree__modules__V_148_148;
#line 336 "modules.m"
    MR_Word parse_tree__modules__V_31_31;
#line 341 "modules.m"
    MR_Word parse_tree__modules__V_33_33;
#line 348 "modules.m"
    MR_Word parse_tree__modules__V_35_35;
#line 358 "modules.m"
    MR_Word parse_tree__modules__V_37_37;
#line 364 "modules.m"
    MR_Word parse_tree__modules__V_39_39;
#line 370 "modules.m"
    MR_Word parse_tree__modules__V_41_41;
#line 379 "modules.m"
    MR_Word parse_tree__modules__V_42_42;
#line 385 "modules.m"
    MR_Word parse_tree__modules__V_43_43;
#line 391 "modules.m"
    MR_Word parse_tree__modules__V_45_45;
#line 391 "modules.m"
    MR_Word parse_tree__modules__V_46_46;

#line 304 "modules.m"
    {
#line 304 "modules.m"
      parse_tree__modules__ParentDeps_17 = mdbcomp__sym_name__get_ancestors_1_f_0(parse_tree__modules__ModuleName_14);
    }
#line 305 "modules.m"
    {
#line 305 "modules.m"
      parse_tree__get_dependencies__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(parse_tree__modules__RawItemBlocks0_16, &parse_tree__modules__IntImportDeps0_18, &parse_tree__modules__IntUseDeps0_19, &parse_tree__modules__ImpImportDeps_20, &parse_tree__modules__ImpUseDeps_21);
    }
#line 309 "modules.m"
    {
#line 309 "modules.m"
      parse_tree__modules__raw_item_blocks_to_src_2_p_0(parse_tree__modules__RawItemBlocks0_16, &parse_tree__modules__SrcItemBlocks_22);
    }
#line 16967 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_151_151 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 311 "modules.m"
    {
#line 311 "modules.m"
      parse_tree__modules__V_52_52 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 311 "modules.m"
    {
#line 311 "modules.m"
      parse_tree__modules__V_53_53 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 312 "modules.m"
    {
#line 312 "modules.m"
      parse_tree__modules__V_55_55 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0);
    }
#line 310 "modules.m"
    {
#line 310 "modules.m"
      parse_tree__modules__make_module_and_imports_12_p_0(parse_tree__modules__SourceFileName_9, parse_tree__modules__SourceFileModuleName_10, parse_tree__modules__ModuleName_14, parse_tree__modules__ModuleNameContext_15, parse_tree__modules__SrcItemBlocks_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__modules__V_52_52, parse_tree__modules__V_53_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__modules__V_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_57_57);
    }
#line 318 "modules.m"
    {
#line 318 "modules.m"
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0, parse_tree__modules__Globals_8, parse_tree__modules__RawItemBlocks0_16, &parse_tree__modules__ImplicitIntImportDeps_23, &parse_tree__modules__ImplicitIntUseDeps_24);
    }
#line 320 "modules.m"
    {
#line 320 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_151_151, parse_tree__modules__ImplicitIntImportDeps_23, parse_tree__modules__IntImportDeps0_18, &parse_tree__modules__IntImportDeps_25);
    }
#line 321 "modules.m"
    {
#line 321 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_151_151, parse_tree__modules__ImplicitIntUseDeps_24, parse_tree__modules__IntUseDeps0_19, &parse_tree__modules__IntUseDeps_26);
    }
#line 324 "modules.m"
    {
#line 324 "modules.m"
      parse_tree__modules__V_58_58 = mercury__map__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[0], (MR_Word) &parse_tree__modules_scalar_common_1[1]);
    }
#line 324 "modules.m"
    {
#line 324 "modules.m"
      parse_tree__modules__V_59_59 = mercury__map__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[2], (MR_Word) &parse_tree__modules_scalar_common_1[3]);
    }
#line 324 "modules.m"
    {
#line 324 "modules.m"
      parse_tree__modules__V_60_60 = mercury__map__init_0_f_0((MR_Word) &parse_tree__modules_scalar_common_1[4], (MR_Word) &parse_tree__modules_scalar_common_1[5]);
    }
#line 324 "modules.m"
    {
#line 324 "modules.m"
      parse_tree__modules__HaveReadModuleMaps_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 324 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_27, 0) = ((MR_Box) (parse_tree__modules__V_58_58));
#line 324 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_27, 1) = ((MR_Box) (parse_tree__modules__V_59_59));
#line 324 "modules.m"
      MR_hl_field(MR_mktag(0), parse_tree__modules__HaveReadModuleMaps_27, 2) = ((MR_Box) (parse_tree__modules__V_60_60));
#line 324 "modules.m"
    }
#line 328 "modules.m"
    {
#line 328 "modules.m"
      parse_tree__modules__V_61_61 = mercury__set__list_to_set_1_f_0(parse_tree__modules__TypeCtorInfo_151_151, parse_tree__modules__ParentDeps_17);
    }
#line 332 "modules.m"
    {
#line 332 "modules.m"
      parse_tree__modules__V_65_65 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 332 "modules.m"
    {
#line 332 "modules.m"
      parse_tree__modules__V_66_66 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 327 "modules.m"
    {
#line 327 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_49_95_95_91_54_44_32_55_93_95_48_14_p_0((MR_Integer) 1, (MR_Integer) 3, parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, parse_tree__modules__V_61_61, parse_tree__modules__V_65_65, &parse_tree__modules__ParentImportDeps_28, parse_tree__modules__V_66_66, &parse_tree__modules__ParentUseDeps_29, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_57_57, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67_67);
    }
#line 338 "modules.m"
    parse_tree__modules__V_73_73 = (MR_Word) &parse_tree__modules_scalar_common_3[6];
#line 340 "modules.m"
    {
#line 340 "modules.m"
      parse_tree__modules__V_76_76 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 340 "modules.m"
    {
#line 340 "modules.m"
      parse_tree__modules__V_77_77 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 336 "modules.m"
    {
#line 336 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__ParentImportDeps_28, (MR_Integer) 1, parse_tree__modules__V_73_73, parse_tree__modules__V_76_76, &parse_tree__modules__IntIndirectImportDeps0_30, parse_tree__modules__V_77_77, &parse_tree__modules__V_31_31, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67_67, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_78_78);
    }
#line 347 "modules.m"
    {
#line 347 "modules.m"
      parse_tree__modules__V_86_86 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 341 "modules.m"
    {
#line 341 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__IntImportDeps_25, (MR_Integer) 1, (MR_Word) &parse_tree__modules_scalar_common_3[5], parse_tree__modules__IntIndirectImportDeps0_30, &parse_tree__modules__IntIndirectImportDeps1_32, parse_tree__modules__V_86_86, &parse_tree__modules__V_33_33, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_78_78, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_87_87);
    }
#line 353 "modules.m"
    {
#line 353 "modules.m"
      parse_tree__modules__V_95_95 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 353 "modules.m"
    {
#line 353 "modules.m"
      parse_tree__modules__V_96_96 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 348 "modules.m"
    {
#line 348 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__ImpImportDeps_20, (MR_Integer) 1, (MR_Word) &parse_tree__modules_scalar_common_3[7], parse_tree__modules__V_95_95, &parse_tree__modules__ImpIndirectImportDeps0_34, parse_tree__modules__V_96_96, &parse_tree__modules__V_35_35, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_87_87, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_97_97);
    }
#line 363 "modules.m"
    {
#line 363 "modules.m"
      parse_tree__modules__V_105_105 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 358 "modules.m"
    {
#line 358 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 1, parse_tree__modules__ParentUseDeps_29, (MR_Integer) 1, parse_tree__modules__V_73_73, parse_tree__modules__IntIndirectImportDeps1_32, &parse_tree__modules__IntIndirectImportDeps2_36, parse_tree__modules__V_105_105, &parse_tree__modules__V_37_37, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_97_97, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_106_106);
    }
#line 369 "modules.m"
    {
#line 369 "modules.m"
      parse_tree__modules__V_114_114 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 364 "modules.m"
    {
#line 364 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 0, parse_tree__modules__IntUseDeps_26, (MR_Integer) 1, (MR_Word) &parse_tree__modules_scalar_common_3[8], parse_tree__modules__IntIndirectImportDeps2_36, &parse_tree__modules__IntIndirectImportDeps_38, parse_tree__modules__V_114_114, &parse_tree__modules__V_39_39, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_106_106, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_115_115);
    }
#line 375 "modules.m"
    {
#line 375 "modules.m"
      parse_tree__modules__V_123_123 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 370 "modules.m"
    {
#line 370 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, (MR_Integer) 0, parse_tree__modules__ImpUseDeps_21, (MR_Integer) 1, (MR_Word) &parse_tree__modules_scalar_common_3[9], parse_tree__modules__ImpIndirectImportDeps0_34, &parse_tree__modules__ImpIndirectImportDeps_40, parse_tree__modules__V_123_123, &parse_tree__modules__V_41_41, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_115_115, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_124_124);
    }
#line 383 "modules.m"
    {
#line 383 "modules.m"
      parse_tree__modules__V_131_131 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 379 "modules.m"
    {
#line 379 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_56_95_95_91_54_93_95_48_13_p_0((MR_Integer) 1, parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, parse_tree__modules__IntIndirectImportDeps_38, (MR_Integer) 1, parse_tree__modules__V_131_131, &parse_tree__modules__V_42_42, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_124_124, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_132_132);
    }
#line 389 "modules.m"
    {
#line 389 "modules.m"
      parse_tree__modules__V_139_139 = mercury__set__init_0_f_0(parse_tree__modules__TypeCtorInfo_151_151);
    }
#line 385 "modules.m"
    {
#line 385 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_56_95_95_91_54_93_95_48_13_p_0((MR_Integer) 0, parse_tree__modules__Globals_8, parse_tree__modules__HaveReadModuleMaps_27, parse_tree__modules__ImpIndirectImportDeps_40, (MR_Integer) 1, parse_tree__modules__V_139_139, &parse_tree__modules__V_43_43, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_132_132, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_140_140);
    }
#line 391 "modules.m"
    {
#line 391 "modules.m"
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(parse_tree__modules__STATE_VARIABLE_ModuleAndImports_140_140, &parse_tree__modules__AugCompUnit_44, &parse_tree__modules__V_45_45, &parse_tree__modules__V_46_46);
    }
#line 394 "modules.m"
    {
#line 394 "modules.m"
      parse_tree__modules__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_148_148, 0) = ((MR_Box) (parse_tree__modules__ImpUseDeps_21));
#line 394 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "modules.m"
    }
#line 394 "modules.m"
    {
#line 394 "modules.m"
      parse_tree__modules__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_147_147, 0) = ((MR_Box) (parse_tree__modules__ImpImportDeps_20));
#line 394 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_147_147, 1) = ((MR_Box) (parse_tree__modules__V_148_148));
#line 394 "modules.m"
    }
#line 394 "modules.m"
    {
#line 394 "modules.m"
      parse_tree__modules__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_146_146, 0) = ((MR_Box) (parse_tree__modules__IntUseDeps_26));
#line 394 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_146_146, 1) = ((MR_Box) (parse_tree__modules__V_147_147));
#line 394 "modules.m"
    }
#line 394 "modules.m"
    {
#line 394 "modules.m"
      parse_tree__modules__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_145_145, 0) = ((MR_Box) (parse_tree__modules__IntImportDeps_25));
#line 394 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_145_145, 1) = ((MR_Box) (parse_tree__modules__V_146_146));
#line 394 "modules.m"
    }
#line 394 "modules.m"
    {
#line 394 "modules.m"
      parse_tree__modules__V_143_143 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_151_151, parse_tree__modules__V_145_145);
    }
#line 393 "modules.m"
    {
#line 393 "modules.m"
      parse_tree__modules__check_imports_accessibility_4_p_0(parse_tree__modules__AugCompUnit_44, parse_tree__modules__V_143_143, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__AccessSpecs_47);
    }
#line 396 "modules.m"
    {
#line 396 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__AccessSpecs_47, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_140_140, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_48);
#line 396 "modules.m"
      return;
    }
#line 300 "modules.m"
  }
#line 87 "modules.m"
}

#line 253 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_4(
#line 253 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 253 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 253 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 253 "modules.m"
{
#line 253 "modules.m"
  {
#line 253 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 253 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 253 "modules.m"
    MR_Word parse_tree__modules__conv3_HeadVar__4_4;

#line 253 "modules.m"
    {
#line 253 "modules.m"
      parse_tree__modules__conv3_HeadVar__4_4 = parse_tree__prog_item__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 253 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv3_HeadVar__4_4));
#line 253 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 253 "modules.m"
  }
#line 253 "modules.m"
}

#line 245 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_3(
#line 245 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 245 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 245 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 245 "modules.m"
{
#line 245 "modules.m"
  {
#line 245 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 245 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 245 "modules.m"
    MR_Word parse_tree__modules__conv2_HeadVar__4_4;

#line 245 "modules.m"
    {
#line 245 "modules.m"
      parse_tree__modules__conv2_HeadVar__4_4 = parse_tree__prog_item__make_ims_used_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 245 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv2_HeadVar__4_4));
#line 245 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 245 "modules.m"
  }
#line 245 "modules.m"
}

#line 235 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_2(
#line 235 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 235 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 235 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 235 "modules.m"
{
#line 235 "modules.m"
  {
#line 235 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 235 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 235 "modules.m"
    MR_Word parse_tree__modules__conv1_HeadVar__4_4;

#line 235 "modules.m"
    {
#line 235 "modules.m"
      parse_tree__modules__conv1_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 235 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv1_HeadVar__4_4));
#line 235 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 235 "modules.m"
  }
#line 235 "modules.m"
}

#line 212 "modules.m"
static MR_Box MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0_1(
#line 212 "modules.m"
  MR_Box parse_tree__modules__closure_arg,
#line 212 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_1,
#line 212 "modules.m"
  MR_Box parse_tree__modules__wrapper_arg_2)
#line 212 "modules.m"
{
#line 212 "modules.m"
  {
#line 212 "modules.m"
    MR_Box parse_tree__modules__wrapper_arg_3;
#line 212 "modules.m"
    MR_Box parse_tree__modules__closure = parse_tree__modules__closure_arg;
#line 212 "modules.m"
    MR_Word parse_tree__modules__conv0_HeadVar__4_4;

#line 212 "modules.m"
    {
#line 212 "modules.m"
      parse_tree__modules__conv0_HeadVar__4_4 = parse_tree__prog_item__make_ims_imported_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__modules__wrapper_arg_1), ((MR_Word) parse_tree__modules__wrapper_arg_2));
    }
#line 212 "modules.m"
    parse_tree__modules__wrapper_arg_3 = ((MR_Box) (parse_tree__modules__conv0_HeadVar__4_4));
#line 212 "modules.m"
    return parse_tree__modules__wrapper_arg_3;
#line 212 "modules.m"
  }
#line 212 "modules.m"
}

#line 73 "modules.m"
void MR_CALL 
parse_tree__modules__grab_imported_modules_10_p_0(
#line 73 "modules.m"
  MR_Word parse_tree__modules__Globals_11,
#line 73 "modules.m"
  MR_String parse_tree__modules__SourceFileName_12,
#line 73 "modules.m"
  MR_Word parse_tree__modules__SourceFileModuleName_13,
#line 73 "modules.m"
  MR_Word parse_tree__modules__MaybeTimestamp_14,
#line 73 "modules.m"
  MR_Word parse_tree__modules__NestedChildren_15,
#line 73 "modules.m"
  MR_Word parse_tree__modules__RawCompUnit0_16,
#line 73 "modules.m"
  MR_Word parse_tree__modules__HaveReadModuleMaps_17,
#line 73 "modules.m"
  MR_Word * parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67)
#line 73 "modules.m"
{
#line 133 "modules.m"
  {
#line 133 "modules.m"
    MR_bool parse_tree__modules__succeeded;
#line 133 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_156_156;
#line 133 "modules.m"
    MR_Word parse_tree__modules__TypeCtorInfo_157_157;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ModuleName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_16, (MR_Integer) 0)));
#line 133 "modules.m"
    MR_Word parse_tree__modules__ModuleNameContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_16, (MR_Integer) 1)));
#line 133 "modules.m"
    MR_Word parse_tree__modules__RawItemBlocks0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__modules__RawCompUnit0_16, (MR_Integer) 2)));
#line 133 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules0_23;
#line 133 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules0_24;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ImpImportedModules0_25;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ImpUsedModules0_26;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ImportedModules0_27;
#line 133 "modules.m"
    MR_Word parse_tree__modules__UsedModules0_28;
#line 133 "modules.m"
    MR_Word parse_tree__modules__Context_31;
#line 133 "modules.m"
    MR_Word parse_tree__modules__AncestorModules_32;
#line 133 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules1_33;
#line 133 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules1_34;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ImpImportedModules_35;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ImpUsedModules_36;
#line 133 "modules.m"
    MR_Word parse_tree__modules__SrcItemBlocks1_37;
#line 133 "modules.m"
    MR_Word parse_tree__modules__PublicChildren_38;
#line 133 "modules.m"
    MR_Word parse_tree__modules__FactDeps_39;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ForeignIncludeFiles_40;
#line 133 "modules.m"
    MR_Word parse_tree__modules__MaybeTimestampMap_42;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntImportedModules_43;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ImplicitIntUsedModules_44;
#line 133 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules2_45;
#line 133 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules2_46;
#line 133 "modules.m"
    MR_Word parse_tree__modules__IntImportedModules_47;
#line 133 "modules.m"
    MR_Word parse_tree__modules__IntUsedModules_48;
#line 133 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImports0_49;
#line 133 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports0_50;
#line 133 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImports1_51;
#line 133 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports1_52;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImports0_53;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports0_54;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImports1_55;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports1_56;
#line 133 "modules.m"
    MR_Word parse_tree__modules__IntIndirectImports_57;
#line 133 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports2_58;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ImpIndirectImports_59;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports2_60;
#line 133 "modules.m"
    MR_Word parse_tree__modules__IntImpIndirectImports_61;
#line 133 "modules.m"
    MR_Word parse_tree__modules__ImpImpIndirectImports_62;
#line 133 "modules.m"
    MR_Word parse_tree__modules__AugCompUnit_63;
#line 133 "modules.m"
    MR_Word parse_tree__modules__AccessSpecs_66;
#line 133 "modules.m"
    MR_Word parse_tree__modules__V_75_75;
#line 133 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_76_76;
#line 133 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_Specs_77_77;
#line 133 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82;
#line 133 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_86_86;
#line 133 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95;
#line 133 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_103_103;
#line 133 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_111_111;
#line 133 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_119_119;
#line 133 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_126_126;
#line 133 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_133_133;
#line 133 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_140_140;
#line 133 "modules.m"
    MR_Word parse_tree__modules__STATE_VARIABLE_ModuleAndImports_146_146;
#line 133 "modules.m"
    MR_Word parse_tree__modules__V_148_148;
#line 133 "modules.m"
    MR_Word parse_tree__modules__V_150_150;
#line 133 "modules.m"
    MR_Word parse_tree__modules__V_151_151;
#line 133 "modules.m"
    MR_Word parse_tree__modules__V_152_152;
#line 133 "modules.m"
    MR_Word parse_tree__modules__V_153_153;
#line 149 "modules.m"
    MR_Word parse_tree__modules__V_242_242;
#line 290 "modules.m"
    MR_Word parse_tree__modules__V_64_64;
#line 290 "modules.m"
    MR_Word parse_tree__modules__V_65_65;

#line 139 "modules.m"
    {
#line 139 "modules.m"
      parse_tree__get_dependencies__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(parse_tree__modules__RawItemBlocks0_22, &parse_tree__modules__IntImportedModules0_23, &parse_tree__modules__IntUsedModules0_24, &parse_tree__modules__ImpImportedModules0_25, &parse_tree__modules__ImpUsedModules0_26);
    }
#line 17507 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_156_156 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 143 "modules.m"
    {
#line 143 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_156_156, parse_tree__modules__IntImportedModules0_23, parse_tree__modules__ImpImportedModules0_25, &parse_tree__modules__ImportedModules0_27);
    }
#line 144 "modules.m"
    {
#line 144 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_156_156, parse_tree__modules__IntUsedModules0_24, parse_tree__modules__ImpUsedModules0_26, &parse_tree__modules__UsedModules0_28);
    }
#line 149 "modules.m"
    {
#line 149 "modules.m"
      parse_tree__modules__V_242_242 = mercury__term__context_init_0_f_0();
    }
#line 149 "modules.m"
    {
#line 149 "modules.m"
      parse_tree__modules__succeeded = mercury__term____Unify____context_0_0(parse_tree__modules__ModuleNameContext_21, parse_tree__modules__V_242_242);
    }
#line 153 "modules.m"
    if (parse_tree__modules__succeeded)
#line 151 "modules.m"
      {
#line 151 "modules.m"
        MR_String parse_tree__modules__FileName_30;

#line 150 "modules.m"
        {
#line 150 "modules.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__modules__Globals_11, parse_tree__modules__ModuleName_20, (MR_String) ".m", (MR_Integer) 1, &parse_tree__modules__FileName_30);
        }
#line 152 "modules.m"
        {
#line 152 "modules.m"
          parse_tree__modules__Context_31 = mercury__term__context_init_2_f_0(parse_tree__modules__FileName_30, (MR_Integer) 1);
        }
#line 151 "modules.m"
      }
#line 153 "modules.m"
    else
#line 154 "modules.m"
      parse_tree__modules__Context_31 = parse_tree__modules__ModuleNameContext_21;
#line 157 "modules.m"
    {
#line 157 "modules.m"
      parse_tree__modules__V_75_75 = mdbcomp__sym_name__get_ancestors_1_f_0(parse_tree__modules__ModuleName_20);
    }
#line 157 "modules.m"
    {
#line 157 "modules.m"
      parse_tree__modules__AncestorModules_32 = mercury__set__list_to_set_1_f_0(parse_tree__modules__TypeCtorInfo_156_156, parse_tree__modules__V_75_75);
    }
#line 158 "modules.m"
    {
#line 158 "modules.m"
      parse_tree__modules__warn_if_import_for_self_or_ancestor_7_p_0(parse_tree__modules__ModuleName_20, parse_tree__modules__RawItemBlocks0_22, parse_tree__modules__AncestorModules_32, parse_tree__modules__ImportedModules0_27, parse_tree__modules__UsedModules0_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__STATE_VARIABLE_Specs_76_76);
    }
#line 161 "modules.m"
    {
#line 161 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_105_102_95_100_117_112_108_105_99_97_116_101_95_117_115_101_95_105_109_112_111_114_116_95_100_101_99_108_115_95_95_91_49_93_95_48_12_p_0(parse_tree__modules__Context_31, parse_tree__modules__IntImportedModules0_23, &parse_tree__modules__IntImportedModules1_33, parse_tree__modules__IntUsedModules0_24, &parse_tree__modules__IntUsedModules1_34, parse_tree__modules__ImpImportedModules0_25, &parse_tree__modules__ImpImportedModules_35, parse_tree__modules__ImpUsedModules0_26, &parse_tree__modules__ImpUsedModules_36, parse_tree__modules__STATE_VARIABLE_Specs_76_76, &parse_tree__modules__STATE_VARIABLE_Specs_77_77);
    }
#line 167 "modules.m"
    {
#line 167 "modules.m"
      parse_tree__modules__get_src_item_blocks_public_children_3_p_0(parse_tree__modules__RawCompUnit0_16, &parse_tree__modules__SrcItemBlocks1_37, &parse_tree__modules__PublicChildren_38);
    }
#line 17577 "parse_tree.modules.c"
    parse_tree__modules__TypeCtorInfo_157_157 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0;
#line 172 "modules.m"
    {
#line 172 "modules.m"
      parse_tree__get_dependencies__get_fact_table_dependencies_in_item_blocks_2_p_0(parse_tree__modules__TypeCtorInfo_157_157, parse_tree__modules__RawItemBlocks0_22, &parse_tree__modules__FactDeps_39);
    }
#line 173 "modules.m"
    {
#line 173 "modules.m"
      parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0(parse_tree__modules__TypeCtorInfo_157_157, parse_tree__modules__RawItemBlocks0_22, &parse_tree__modules__ForeignIncludeFiles_40);
    }
#line 179 "modules.m"
    if ((parse_tree__modules__MaybeTimestamp_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "modules.m"
      parse_tree__modules__MaybeTimestampMap_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 179 "modules.m"
    else
#line 176 "modules.m"
      {
#line 176 "modules.m"
        MR_Word parse_tree__modules__Timestamp_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__modules__MaybeTimestamp_14, (MR_Integer) 0)));
#line 176 "modules.m"
        MR_Word parse_tree__modules__V_78_78;
#line 176 "modules.m"
        MR_Word parse_tree__modules__V_79_79;

#line 178 "modules.m"
        {
#line 178 "modules.m"
          parse_tree__modules__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 178 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 178 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_79_79, 1) = ((MR_Box) (parse_tree__modules__Timestamp_41));
#line 178 "modules.m"
          MR_hl_field(MR_mktag(0), parse_tree__modules__V_79_79, 2) = ((MR_Box) ((MR_Integer) 1));
#line 178 "modules.m"
        }
#line 177 "modules.m"
        {
#line 177 "modules.m"
          parse_tree__modules__V_78_78 = mercury__map__singleton_2_f_0(parse_tree__modules__TypeCtorInfo_156_156, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, ((MR_Box) (parse_tree__modules__ModuleName_20)), ((MR_Box) (parse_tree__modules__V_79_79)));
        }
#line 177 "modules.m"
        {
#line 177 "modules.m"
          parse_tree__modules__MaybeTimestampMap_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 177 "modules.m"
          MR_hl_field(MR_mktag(1), parse_tree__modules__MaybeTimestampMap_42, 0) = ((MR_Box) (parse_tree__modules__V_78_78));
#line 177 "modules.m"
        }
#line 176 "modules.m"
      }
#line 190 "modules.m"
    {
#line 190 "modules.m"
      parse_tree__modules__make_module_and_imports_12_p_0(parse_tree__modules__SourceFileName_12, parse_tree__modules__SourceFileModuleName_13, parse_tree__modules__ModuleName_20, parse_tree__modules__ModuleNameContext_21, parse_tree__modules__SrcItemBlocks1_37, parse_tree__modules__STATE_VARIABLE_Specs_77_77, parse_tree__modules__PublicChildren_38, parse_tree__modules__NestedChildren_15, parse_tree__modules__FactDeps_39, parse_tree__modules__ForeignIncludeFiles_40, parse_tree__modules__MaybeTimestampMap_42, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82);
    }
#line 199 "modules.m"
    {
#line 199 "modules.m"
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0, parse_tree__modules__Globals_11, parse_tree__modules__SrcItemBlocks1_37, &parse_tree__modules__ImplicitIntImportedModules_43, &parse_tree__modules__ImplicitIntUsedModules_44);
    }
#line 201 "modules.m"
    {
#line 201 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_156_156, parse_tree__modules__ImplicitIntImportedModules_43, parse_tree__modules__IntImportedModules1_33, &parse_tree__modules__IntImportedModules2_45);
    }
#line 203 "modules.m"
    {
#line 203 "modules.m"
      mercury__set__union_3_p_0(parse_tree__modules__TypeCtorInfo_156_156, parse_tree__modules__ImplicitIntUsedModules_44, parse_tree__modules__IntUsedModules1_34, &parse_tree__modules__IntUsedModules2_46);
    }
#line 210 "modules.m"
    {
#line 210 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_112_114_105_118_97_116_101_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_49_95_95_91_54_44_32_55_93_95_48_14_p_0((MR_Integer) 1, (MR_Integer) 3, parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__AncestorModules_32, parse_tree__modules__IntImportedModules2_45, &parse_tree__modules__IntImportedModules_47, parse_tree__modules__IntUsedModules2_46, &parse_tree__modules__IntUsedModules_48, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_82_82, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_86_86);
    }
#line 220 "modules.m"
    {
#line 220 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_156_156, &parse_tree__modules__IntIndirectImports0_49);
    }
#line 221 "modules.m"
    {
#line 221 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_156_156, &parse_tree__modules__IntImpIndirectImports0_50);
    }
#line 222 "modules.m"
    {
#line 222 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 1, parse_tree__modules__IntImportedModules_47, (MR_Integer) 3, (MR_Word) &parse_tree__modules_scalar_common_3[1], parse_tree__modules__IntIndirectImports0_49, &parse_tree__modules__IntIndirectImports1_51, parse_tree__modules__IntImpIndirectImports0_50, &parse_tree__modules__IntImpIndirectImports1_52, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_86_86, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95);
    }
#line 231 "modules.m"
    {
#line 231 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_156_156, &parse_tree__modules__ImpIndirectImports0_53);
    }
#line 232 "modules.m"
    {
#line 232 "modules.m"
      mercury__set__init_1_p_0(parse_tree__modules__TypeCtorInfo_156_156, &parse_tree__modules__ImpImpIndirectImports0_54);
    }
#line 233 "modules.m"
    {
#line 233 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_49_48_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 1, parse_tree__modules__ImpImportedModules_35, (MR_Integer) 3, (MR_Word) &parse_tree__modules_scalar_common_3[2], parse_tree__modules__ImpIndirectImports0_53, &parse_tree__modules__ImpIndirectImports1_55, parse_tree__modules__ImpImpIndirectImports0_54, &parse_tree__modules__ImpImpIndirectImports1_56, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_95_95, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_103_103);
    }
#line 243 "modules.m"
    {
#line 243 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 0, parse_tree__modules__IntUsedModules_48, (MR_Integer) 3, (MR_Word) &parse_tree__modules_scalar_common_3[3], parse_tree__modules__IntIndirectImports1_51, &parse_tree__modules__IntIndirectImports_57, parse_tree__modules__IntImpIndirectImports1_52, &parse_tree__modules__IntImpIndirectImports2_58, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_103_103, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_111_111);
    }
#line 251 "modules.m"
    {
#line 251 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_108_111_110_103_95_105_110_116_101_114_102_97_99_101_115_95_95_104_111_57_95_95_91_49_93_95_48_16_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, (MR_Integer) 0, parse_tree__modules__ImpUsedModules_36, (MR_Integer) 3, (MR_Word) &parse_tree__modules_scalar_common_3[4], parse_tree__modules__ImpIndirectImports1_55, &parse_tree__modules__ImpIndirectImports_59, parse_tree__modules__ImpImpIndirectImports1_56, &parse_tree__modules__ImpImpIndirectImports2_60, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_111_111, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_119_119);
    }
#line 260 "modules.m"
    {
#line 260 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_56_95_95_91_54_93_95_48_13_p_0((MR_Integer) 1, parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__IntIndirectImports_57, (MR_Integer) 2, parse_tree__modules__IntImpIndirectImports2_58, &parse_tree__modules__IntImpIndirectImports_61, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_119_119, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_126_126);
    }
#line 267 "modules.m"
    {
#line 267 "modules.m"
      parse_tree__modules__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_111_100_117_108_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_116_114_97_110_115_105_116_105_118_101_108_121_95_95_104_111_56_95_95_91_54_93_95_48_13_p_0((MR_Integer) 0, parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__ImpIndirectImports_59, (MR_Integer) 2, parse_tree__modules__ImpImpIndirectImports2_60, &parse_tree__modules__ImpImpIndirectImports_62, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_126_126, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_133_133);
    }
#line 279 "modules.m"
    {
#line 279 "modules.m"
      parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho12_11_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__IntImpIndirectImports_61, (MR_Integer) 2, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_133_133, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_140_140);
    }
#line 284 "modules.m"
    {
#line 284 "modules.m"
      parse_tree__modules__process_module_short_interfaces_and_impls_transitively__ho12_11_p_0(parse_tree__modules__Globals_11, parse_tree__modules__HaveReadModuleMaps_17, parse_tree__modules__ImpImpIndirectImports_62, (MR_Integer) 2, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_140_140, &parse_tree__modules__STATE_VARIABLE_ModuleAndImports_146_146);
    }
#line 290 "modules.m"
    {
#line 290 "modules.m"
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(parse_tree__modules__STATE_VARIABLE_ModuleAndImports_146_146, &parse_tree__modules__AugCompUnit_63, &parse_tree__modules__V_64_64, &parse_tree__modules__V_65_65);
    }
#line 294 "modules.m"
    {
#line 294 "modules.m"
      parse_tree__modules__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_153_153, 0) = ((MR_Box) (parse_tree__modules__ImpUsedModules_36));
#line 294 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "modules.m"
    }
#line 294 "modules.m"
    {
#line 294 "modules.m"
      parse_tree__modules__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_152_152, 0) = ((MR_Box) (parse_tree__modules__ImpImportedModules_35));
#line 294 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_152_152, 1) = ((MR_Box) (parse_tree__modules__V_153_153));
#line 294 "modules.m"
    }
#line 293 "modules.m"
    {
#line 293 "modules.m"
      parse_tree__modules__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_151_151, 0) = ((MR_Box) (parse_tree__modules__IntUsedModules_48));
#line 293 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_151_151, 1) = ((MR_Box) (parse_tree__modules__V_152_152));
#line 293 "modules.m"
    }
#line 293 "modules.m"
    {
#line 293 "modules.m"
      parse_tree__modules__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_150_150, 0) = ((MR_Box) (parse_tree__modules__IntImportedModules_47));
#line 293 "modules.m"
      MR_hl_field(MR_mktag(1), parse_tree__modules__V_150_150, 1) = ((MR_Box) (parse_tree__modules__V_151_151));
#line 293 "modules.m"
    }
#line 293 "modules.m"
    {
#line 293 "modules.m"
      parse_tree__modules__V_148_148 = mercury__set__union_list_1_f_0(parse_tree__modules__TypeCtorInfo_156_156, parse_tree__modules__V_150_150);
    }
#line 292 "modules.m"
    {
#line 292 "modules.m"
      parse_tree__modules__check_imports_accessibility_4_p_0(parse_tree__modules__AugCompUnit_63, parse_tree__modules__V_148_148, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__modules__AccessSpecs_66);
    }
#line 296 "modules.m"
    {
#line 296 "modules.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(parse_tree__modules__AccessSpecs_66, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_146_146, parse_tree__modules__STATE_VARIABLE_ModuleAndImports_67);
#line 296 "modules.m"
      return;
    }
#line 133 "modules.m"
  }
#line 73 "modules.m"
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
	MR_register_type_ctor_info(&parse_tree__modules__parse_tree__modules__type_ctor_info_opt_file_type_0);
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
