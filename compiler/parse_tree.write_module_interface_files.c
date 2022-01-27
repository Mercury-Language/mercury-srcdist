/*
** Automatically generated from `write_module_interface_files.m'
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


/* :- module parse_tree.write_module_interface_files. */
/* :- implementation. */

/*
INIT mercury__parse_tree__write_module_interface_files__init
ENDINIT
*/

#include "parse_tree.write_module_interface_files.mih"


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
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mutable.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "recompilation.version.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 887 "write_module_interface_files.m"
struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s {
#line 887 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5;
#line 887 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6;
#line 887 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7;
#line 891 "write_module_interface_files.m"
  MR_bool parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded;
#line 896 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13;
#line 906 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__commit_0;
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15;
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17;
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeEqCmp_18;
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeDirectArgCtors_19;
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes_20;
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36;
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43;
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__ExistQTVars_44;
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Constraints_45;
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47;
#line 906 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_54_54;
#line 907 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__conv0_V_36_36;
#line 887 "write_module_interface_files.m"
};

#line 693 "write_module_interface_files.m"
struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s {
#line 693 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpTypeDefnPairs_8;
#line 709 "write_module_interface_files.m"
  MR_bool parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded;
#line 700 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__commit_0;
#line 700 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__Defn_10;
#line 700 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__V_16_16;
#line 701 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__conv0_V_16_16;
#line 693 "write_module_interface_files.m"
};


#line 171 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 174 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 177 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 180 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 183 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 186 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 189 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0;

#line 192 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0;

#line 195 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 198 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 201 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_0;

#line 204 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_1;

#line 207 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_foreign_imports_0[2];

#line 210 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_foreign_imports_0[2];

#line 213 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_foreign_imports_0[2];

#line 216 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_0;

#line 219 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_1;

#line 222 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_imports_0[2];

#line 225 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_imports_0[2];

#line 228 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_imports_0[2];

#line 231 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_0;

#line 234 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_1;

#line 237 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_strip_assertions_0[2];

#line 240 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_strip_assertions_0[2];

#line 243 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_strip_assertions_0[2];

#line 246 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 249 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 252 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0_10001(
#line 255 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 257 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 260 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0_10001(
#line 263 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 265 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 267 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 270 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0_10001(
#line 273 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 275 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 278 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0_10001(
#line 281 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 283 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 285 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 288 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_strip_assertions_0_0_10001(
#line 291 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 293 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 296 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_strip_assertions_0_0_10001(
#line 299 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 301 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 303 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 306 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0_10001(
#line 309 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 311 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 314 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0_10001(
#line 317 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 319 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 321 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 324 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0_10001(
#line 327 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 329 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 332 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0_10001(
#line 335 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 337 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 339 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1423 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(
#line 1423 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_7,
#line 1423 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ParseTreeInt0_9,
#line 1423 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeTimestamp_10);

#line 1350 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_97_110_100_95_115_116_114_105_112_95_99_108_97_117_115_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(
#line 1350 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1350 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1350 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_3,
#line 1350 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_4);

#line 713 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_105_116_101_109_115_95_102_114_111_109_95_109_97_112_95_95_91_49_93_95_48_4_p_0(
#line 713 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnPairs_6,
#line 713 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_8,
#line 713 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_9);

#line 592 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_112_95_97_115_115_101_114_116_105_111_110_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_2_p_0(
#line 592 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 592 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2);

#line 673 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__673__1_3_p_0(
#line 673 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_55,
#line 673 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_56,
#line 673 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_57);

#line 1184 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0(
#line 1184 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1184 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1184 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1184 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0(
#line 1184 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1184 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1182 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0(
#line 1182 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1182 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1182 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1182 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0(
#line 1182 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1182 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 530 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_strip_assertions_0_0(
#line 530 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 530 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 530 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 530 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_strip_assertions_0_0(
#line 530 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 530 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1597 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0(
#line 1597 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1597 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1597 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1597 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0(
#line 1597 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 1597 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1601 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0(
#line 1601 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1601 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1601 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1601 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0(
#line 1601 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 1601 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 2001 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__compare_by_symname_3_p_0(
#line 2001 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemA_4,
#line 2001 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemB_5,
#line 2001 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Result_6);

#line 1996 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__symname_orderable_1_p_0(
#line 1996 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1890 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__chunkable_item_1_f_0(
#line 1890 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_3);

#line 1877 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_chunkable_1_p_0(
#line 1877 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1770 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_reorderable_1_p_0(
#line 1770 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1761 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__import_or_use_item_1_p_0(
#line 1761 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1745 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_5(
#line 1745 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1745 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1745 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1745 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1741 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_4(
#line 1741 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1741 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1739 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_3(
#line 1739 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1739 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1737 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_2(
#line 1737 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1737 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1736 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_1(
#line 1736 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1736 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1729 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0(
#line 1729 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1729 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1638 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__filter_items_for_import_needs_5_p_0(
#line 1638 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1638 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NeedImports_2,
#line 1638 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NeedForeignImports_3,
#line 1638 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4,
#line 1638 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_5);

#line 1615 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_need_imports_5_p_0(
#line 1615 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1615 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_0_2,
#line 1615 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_3,
#line 1615 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_0_4,
#line 1615 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_5);

#line 1605 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0(
#line 1605 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 1605 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4);

#line 1537 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_from_items_acc_4_p_0(
#line 1537 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1537 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1537 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3,
#line 1537 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_4);

#line 1506 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_from_raw_item_blocks_4_p_0(
#line 1506 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1506 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1506 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3,
#line 1506 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__4_4);

#line 1413 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__clause_in_interface_warning_2_f_0(
#line 1413 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__ClauseOrPragma_4,
#line 1413 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Context_5);

#line 1369 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_loop_5_p_0(
#line 1369 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1369 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 1369 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3,
#line 1369 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4,
#line 1369 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_5);

#line 1362 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_4_p_0(
#line 1362 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_5,
#line 1362 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_6,
#line 1362 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_9,
#line 1362 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_10);

#line 1328 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__foreign_enum_is_local_2_p_0(
#line 1328 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_3,
#line 1328 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4);

#line 1326 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0_1(
#line 1326 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1326 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1322 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0(
#line 1322 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntTypeMap_4,
#line 1322 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_6,
#line 1322 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_7);

#line 1281 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_5(
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1281 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1281 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_4(
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1281 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1281 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_3(
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1281 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1281 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_2(
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1281 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1281 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_1(
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1281 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1284 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(
#line 1284 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ArgType_4,
#line 1284 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23,
#line 1284 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24);

#line 1281 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0_1(
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1281 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0(
#line 1262 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Constraint_4,
#line 1262 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1262 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12);

#line 1242 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0_1(
#line 1242 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1242 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1242 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1242 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1235 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0(
#line 1235 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4,
#line 1235 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22,
#line 1235 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23);

#line 1196 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_in_section_loop_6_p_0(
#line 1196 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Section_1,
#line 1196 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1196 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3,
#line 1196 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_4,
#line 1196 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0_5,
#line 1196 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_6);

#line 1171 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__cons_args_to_type_ctor_set_3_p_0(
#line 1171 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1171 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1171 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3);

#line 1162 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctors_to_type_ctor_set_3_p_0(
#line 1162 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1162 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1162 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3);

#line 1157 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0_1(
#line 1157 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1157 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1157 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1157 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1127 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(
#line 1127 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_4,
#line 1127 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13,
#line 1127 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14);

#line 1110 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_3_p_0(
#line 1110 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_4,
#line 1110 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1110 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12);

#line 1105 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_3(
#line 1105 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1105 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1105 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1105 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1098 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2(
#line 1098 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1098 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1098 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1098 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1098 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1098 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1098 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1098 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7);

#line 1096 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_1(
#line 1096 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1096 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1096 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1096 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1085 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(
#line 1085 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1085 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1085 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_22,
#line 1085 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_23,
#line 1085 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_24,
#line 1085 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_25,
#line 1085 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_26,
#line 1085 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27);

#line 1079 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1(
#line 1079 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1079 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1079 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1079 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1079 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1079 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1079 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1079 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7);

#line 1071 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(
#line 1071 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1071 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_10,
#line 1071 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15,
#line 1071 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16,
#line 1071 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17,
#line 1071 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18,
#line 1071 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19,
#line 1071 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20);

#line 1028 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_10,
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypesMap_11,
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29,
#line 1028 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30,
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31,
#line 1028 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32,
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33,
#line 1028 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34);

#line 1020 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_2(
#line 1020 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1020 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1020 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1020 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1020 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1020 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1020 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1020 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7);

#line 1017 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_1(
#line 1017 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1017 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1017 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1017 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1017 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1017 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1017 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1017 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7);

#line 1009 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0(
#line 1009 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_7,
#line 1009 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_8,
#line 1009 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypeMap_9,
#line 1009 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__DummyTypeCtors_10,
#line 1009 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__NecessaryTypeCtors_11,
#line 1009 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Modules_12);

#line 974 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_type_2_p_0(
#line 974 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_3,
#line 974 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4);

#line 972 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0_1(
#line 972 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 972 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 968 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0(
#line 968 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_4,
#line 968 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 968 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);

#line 944 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_import_2_p_0(
#line 944 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_3,
#line 944 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4);

#line 942 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0_1(
#line 942 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 942 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 938 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(
#line 938 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_4,
#line 938 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 938 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);

#line 906 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_1(
#line 906 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 907 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_3(
#line 907 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 906 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_2(
#line 906 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 906 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_4(
#line 906 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 887 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(
#line 887 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_5,
#line 887 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_6,
#line 887 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__CoveredTypes0_7);

#line 821 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__make_impl_type_abstract_3_p_0(
#line 821 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_4,
#line 821 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15,
#line 821 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16);

#line 796 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__insert_type_defn_3_p_0(
#line 796 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__New_1,
#line 796 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 796 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3);

#line 763 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_standardize_impl_items_9_p_0(
#line 763 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 763 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2,
#line 763 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_3,
#line 763 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4,
#line 763 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_5,
#line 763 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6,
#line 763 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_7,
#line 763 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_8,
#line 763 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_9);

#line 759 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_type_defn_item_1_f_0(
#line 759 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_3);

#line 752 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_use_module_item_1_f_0(
#line 752 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1);

#line 745 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_import_module_item_1_f_0(
#line 745 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1);

#line 741 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_3(
#line 741 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 741 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 740 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_2(
#line 740 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 740 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 739 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_1(
#line 739 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 739 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 731 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0(
#line 731 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 731 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4);

#line 720 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__add_type_defn_items_3_p_0(
#line 720 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 720 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_2,
#line 720 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_3);

#line 713 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__add_type_defn_items_from_map_4_p_0(
#line 713 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files___TypeCtor_5,
#line 713 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnPairs_6,
#line 713 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_8,
#line 713 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_9);

#line 700 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_1(
#line 700 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 701 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_3(
#line 701 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 700 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_2(
#line 700 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 700 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_4(
#line 700 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 693 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0(
#line 693 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntTypesMap_6,
#line 693 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImpTypeCtor_7,
#line 693 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImpTypeDefnPairs_8,
#line 693 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_0_14,
#line 693 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_15);

#line 676 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_5(
#line 676 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 676 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 676 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 676 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3,
#line 676 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_4);

#line 673 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_4(
#line 673 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 673 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 673 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 673 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 671 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_3(
#line 671 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 671 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 671 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 671 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3,
#line 671 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_4);

#line 662 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_2(
#line 662 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 662 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 662 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_2);

#line 1232 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_1(
#line 1232 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1232 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1232 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1232 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 628 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0(
#line 628 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_0_19,
#line 628 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_20,
#line 628 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_21,
#line 628 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_22);

#line 609 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_assertions_in_items_acc_3_p_0(
#line 609 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 609 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 609 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3);

#line 544 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__aug_item_blocks_to_int_imp_items_loop_6_p_0(
#line 544 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 544 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeStripAssertions_2,
#line 544 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3,
#line 544 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_4,
#line 544 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5,
#line 544 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_6);

#line 534 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__aug_item_blocks_to_int_imp_items_4_p_0(
#line 534 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__AugItemBlocks_5,
#line 534 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeStripAssertions_6,
#line 534 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__IntItems_7,
#line 534 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__ImpItems_8);

#line 262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_item_for_private_interface_7_p_0(
#line 262 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_8,
#line 262 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Section_9,
#line 262 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_10,
#line 262 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65,
#line 262 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66,
#line 262 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67,
#line 262 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68);

#line 249 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_items_for_private_interface_7_p_0(
#line 249 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 249 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 249 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 249 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_4,
#line 249 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_5,
#line 249 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_6,
#line 249 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_7);

#line 216 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_item_blocks_for_private_interface_6_p_0(
#line 216 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 216 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 216 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3,
#line 216 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_4,
#line 216 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5,
#line 216 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_6);


static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[25][3];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[15][2];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_4[8][6];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_5[1][8];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_6[1][7];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_7[5][5];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_8[1][12];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_9[2][11];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_11[1][4];


#line 1147 "write_module_interface_files.m"
/* sealed */ struct parse_tree__write_module_interface_files__vector_common_type_10_0_s {
#line 1147 "write_module_interface_files.m"
  const MR_String parse_tree__write_module_interface_files__vector_common_type_10_0__vct_10_f_0;
#line 1147 "write_module_interface_files.m"
};

static /* final */ const struct parse_tree__write_module_interface_files__vector_common_type_10_0_s parse_tree__write_module_interface_files_vector_common_10[4];



static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[25][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[2])),
    ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[1])),
    ((MR_Box) (parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[3])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[3])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[4])),
    ((MR_Box) (parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[5])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[6])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[6])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[6])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[6])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[6])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[6])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_11[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__order_items_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_11[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__order_items_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_11[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__order_items_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_11[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__order_items_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[7])),
    ((MR_Box) (parse_tree__write_module_interface_files__order_items_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[15][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "not written.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\' ")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\' not written.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[13])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_4[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_7[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_8[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_9[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_11[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
};


static /* final */ const struct parse_tree__write_module_interface_files__vector_common_type_10_0_s parse_tree__write_module_interface_files_vector_common_10[4] = {
  /* row 0 */   {     (MR_String) "character" },
  /* row 1 */   {     (MR_String) "float" },
  /* row 2 */   {     (MR_String) "int" },
  /* row 3 */   {     (MR_String) "string" },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1961 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1969 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0,
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 1978 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 1986 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 1995 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2003 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 2011 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2019 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2028 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2037 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2046 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_0 = {
  (MR_String) "dont_need_foreign_imports",
  (MR_Integer) 0
};

#line 2052 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_1 = {
  (MR_String) "need_foreign_imports",
  (MR_Integer) 1
};

#line 2058 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_foreign_imports_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_1
};

#line 2064 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_foreign_imports_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_foreign_imports_0_1
};

#line 2070 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_foreign_imports_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2076 "parse_tree.write_module_interface_files.c"
const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_need_foreign_imports_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "maybe_need_foreign_imports",
  {     parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_foreign_imports_0 },
  {     parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_foreign_imports_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_foreign_imports_0
};

#line 2093 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_0 = {
  (MR_String) "dont_need_imports",
  (MR_Integer) 0
};

#line 2099 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_1 = {
  (MR_String) "need_imports",
  (MR_Integer) 1
};

#line 2105 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_imports_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_1
};

#line 2111 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_imports_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_need_imports_0_1
};

#line 2117 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_imports_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2123 "parse_tree.write_module_interface_files.c"
const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_need_imports_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "maybe_need_imports",
  {     parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_need_imports_0 },
  {     parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_need_imports_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_need_imports_0
};

#line 2140 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_0 = {
  (MR_String) "dont_strip_assertions",
  (MR_Integer) 0
};

#line 2146 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_1 = {
  (MR_String) "do_strip_assertions",
  (MR_Integer) 1
};

#line 2152 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_strip_assertions_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_1
};

#line 2158 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_strip_assertions_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_1,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_strip_assertions_0_0
};

#line 2164 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_strip_assertions_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2170 "parse_tree.write_module_interface_files.c"
const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_strip_assertions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____maybe_strip_assertions_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____maybe_strip_assertions_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "maybe_strip_assertions",
  {     parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_strip_assertions_0 },
  {     parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_maybe_strip_assertions_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_strip_assertions_0
};

#line 2187 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2196 "parse_tree.write_module_interface_files.c"
const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_type_defn_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____type_defn_map_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____type_defn_map_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "type_defn_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2213 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2222 "parse_tree.write_module_interface_files.c"
const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_type_defn_pair_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "type_defn_pair",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2239 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0_10001(
#line 2242 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2244 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2246 "parse_tree.write_module_interface_files.c"
{
#line 2248 "parse_tree.write_module_interface_files.c"
  {
#line 2250 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2253 "parse_tree.write_module_interface_files.c"
    {
#line 2255 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2258 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2260 "parse_tree.write_module_interface_files.c"
  }
#line 2262 "parse_tree.write_module_interface_files.c"
}

#line 2265 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0_10001(
#line 2268 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2270 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2272 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2274 "parse_tree.write_module_interface_files.c"
{
#line 2276 "parse_tree.write_module_interface_files.c"
  {
#line 2278 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2281 "parse_tree.write_module_interface_files.c"
    {
#line 2283 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2286 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2288 "parse_tree.write_module_interface_files.c"
  }
#line 2290 "parse_tree.write_module_interface_files.c"
}

#line 2293 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0_10001(
#line 2296 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2298 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2300 "parse_tree.write_module_interface_files.c"
{
#line 2302 "parse_tree.write_module_interface_files.c"
  {
#line 2304 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2307 "parse_tree.write_module_interface_files.c"
    {
#line 2309 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2312 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2314 "parse_tree.write_module_interface_files.c"
  }
#line 2316 "parse_tree.write_module_interface_files.c"
}

#line 2319 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0_10001(
#line 2322 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2324 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2326 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2328 "parse_tree.write_module_interface_files.c"
{
#line 2330 "parse_tree.write_module_interface_files.c"
  {
#line 2332 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2335 "parse_tree.write_module_interface_files.c"
    {
#line 2337 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2340 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2342 "parse_tree.write_module_interface_files.c"
  }
#line 2344 "parse_tree.write_module_interface_files.c"
}

#line 2347 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_strip_assertions_0_0_10001(
#line 2350 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2352 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2354 "parse_tree.write_module_interface_files.c"
{
#line 2356 "parse_tree.write_module_interface_files.c"
  {
#line 2358 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2361 "parse_tree.write_module_interface_files.c"
    {
#line 2363 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____maybe_strip_assertions_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2366 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2368 "parse_tree.write_module_interface_files.c"
  }
#line 2370 "parse_tree.write_module_interface_files.c"
}

#line 2373 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_strip_assertions_0_0_10001(
#line 2376 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2378 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2380 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2382 "parse_tree.write_module_interface_files.c"
{
#line 2384 "parse_tree.write_module_interface_files.c"
  {
#line 2386 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2389 "parse_tree.write_module_interface_files.c"
    {
#line 2391 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____maybe_strip_assertions_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2394 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2396 "parse_tree.write_module_interface_files.c"
  }
#line 2398 "parse_tree.write_module_interface_files.c"
}

#line 2401 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0_10001(
#line 2404 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2406 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2408 "parse_tree.write_module_interface_files.c"
{
#line 2410 "parse_tree.write_module_interface_files.c"
  {
#line 2412 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2415 "parse_tree.write_module_interface_files.c"
    {
#line 2417 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____type_defn_map_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2420 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2422 "parse_tree.write_module_interface_files.c"
  }
#line 2424 "parse_tree.write_module_interface_files.c"
}

#line 2427 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0_10001(
#line 2430 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2432 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2434 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2436 "parse_tree.write_module_interface_files.c"
{
#line 2438 "parse_tree.write_module_interface_files.c"
  {
#line 2440 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2443 "parse_tree.write_module_interface_files.c"
    {
#line 2445 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____type_defn_map_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2448 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2450 "parse_tree.write_module_interface_files.c"
  }
#line 2452 "parse_tree.write_module_interface_files.c"
}

#line 2455 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0_10001(
#line 2458 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2460 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2462 "parse_tree.write_module_interface_files.c"
{
#line 2464 "parse_tree.write_module_interface_files.c"
  {
#line 2466 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2469 "parse_tree.write_module_interface_files.c"
    {
#line 2471 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2474 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2476 "parse_tree.write_module_interface_files.c"
  }
#line 2478 "parse_tree.write_module_interface_files.c"
}

#line 2481 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0_10001(
#line 2484 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2486 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2488 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2490 "parse_tree.write_module_interface_files.c"
{
#line 2492 "parse_tree.write_module_interface_files.c"
  {
#line 2494 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2497 "parse_tree.write_module_interface_files.c"
    {
#line 2499 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2502 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2504 "parse_tree.write_module_interface_files.c"
  }
#line 2506 "parse_tree.write_module_interface_files.c"
}

#line 1423 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(
#line 1423 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_7,
#line 1423 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ParseTreeInt0_9,
#line 1423 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeTimestamp_10)
#line 1423 "write_module_interface_files.m"
{
#line 1427 "write_module_interface_files.m"
  {
#line 1427 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1427 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_9, (MR_Integer) 0)));
#line 1427 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntFileKind_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_9, (MR_Integer) 1)));
#line 1427 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleNameContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_9, (MR_Integer) 2)));
#line 1427 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntItems0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_9, (MR_Integer) 3)));
#line 1427 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImpItems0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_9, (MR_Integer) 4)));
#line 1427 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntItems1_17;
#line 1427 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImpItems_18;
#line 1427 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ParseTreeInt_19;
#line 1427 "write_module_interface_files.m"
    MR_String parse_tree__write_module_interface_files__Suffix_20;
#line 1427 "write_module_interface_files.m"
    MR_String parse_tree__write_module_interface_files__TmpSuffix_21;
#line 1427 "write_module_interface_files.m"
    MR_String parse_tree__write_module_interface_files__OutputFileName_22;
#line 1427 "write_module_interface_files.m"
    MR_String parse_tree__write_module_interface_files__TmpOutputFileName_23;
#line 1427 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NoLineNumGlobals_24;
#line 1427 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__GenerateVersionNumbers_25;
#line 1427 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__DisableVersionNumbers_26;
#line 1427 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntItems_37;
#line 1427 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ParseTree_38;
#line 1427 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_63_63;

#line 1430 "write_module_interface_files.m"
    {
#line 1430 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__order_items_2_p_0(parse_tree__write_module_interface_files__IntItems0_15, &parse_tree__write_module_interface_files__IntItems1_17);
    }
#line 1431 "write_module_interface_files.m"
    {
#line 1431 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__order_items_2_p_0(parse_tree__write_module_interface_files__ImpItems0_16, &parse_tree__write_module_interface_files__ImpItems_18);
    }
#line 1432 "write_module_interface_files.m"
    {
#line 1432 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ParseTreeInt_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1432 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt_19, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_12));
#line 1432 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt_19, 1) = ((MR_Box) (parse_tree__write_module_interface_files__IntFileKind_13));
#line 1432 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt_19, 2) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_14));
#line 1432 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt_19, 3) = ((MR_Box) (parse_tree__write_module_interface_files__IntItems1_17));
#line 1432 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt_19, 4) = ((MR_Box) (parse_tree__write_module_interface_files__ImpItems_18));
#line 1432 "write_module_interface_files.m"
    }
#line 1436 "write_module_interface_files.m"
    {
#line 1436 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__Suffix_20 = parse_tree__prog_item__int_file_kind_to_extension_1_f_0(parse_tree__write_module_interface_files__IntFileKind_13);
    }
#line 1437 "write_module_interface_files.m"
    {
#line 1437 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__TmpSuffix_21 = mercury__string__f_43_43_2_f_0(parse_tree__write_module_interface_files__Suffix_20, (MR_String) ".tmp");
    }
#line 1438 "write_module_interface_files.m"
    {
#line 1438 "write_module_interface_files.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_7, parse_tree__write_module_interface_files__ModuleName_12, parse_tree__write_module_interface_files__Suffix_20, (MR_Integer) 0, &parse_tree__write_module_interface_files__OutputFileName_22);
    }
#line 1440 "write_module_interface_files.m"
    {
#line 1440 "write_module_interface_files.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_7, parse_tree__write_module_interface_files__ModuleName_12, parse_tree__write_module_interface_files__TmpSuffix_21, (MR_Integer) 1, &parse_tree__write_module_interface_files__TmpOutputFileName_23);
    }
#line 1443 "write_module_interface_files.m"
    {
#line 1443 "write_module_interface_files.m"
      libs__globals__set_option_4_p_0((MR_Integer) 138, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_3[0]), parse_tree__write_module_interface_files__Globals_7, &parse_tree__write_module_interface_files__NoLineNumGlobals_24);
    }
#line 1444 "write_module_interface_files.m"
    {
#line 1444 "write_module_interface_files.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_module_interface_files__NoLineNumGlobals_24, (MR_Integer) 117, &parse_tree__write_module_interface_files__GenerateVersionNumbers_25);
    }
#line 1446 "write_module_interface_files.m"
    {
#line 1446 "write_module_interface_files.m"
      libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&parse_tree__write_module_interface_files__DisableVersionNumbers_26);
    }
#line 1448 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__GenerateVersionNumbers_25 == (MR_Integer) 1);
#line 1448 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1449 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__DisableVersionNumbers_26 == (MR_Integer) 0);
#line 1482 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1460 "write_module_interface_files.m"
      {
#line 1460 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Timestamp_27;
#line 1460 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__OldParseTreeInt_30;
#line 1460 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__OldErrors_32;
#line 1460 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__MaybeOldParseTreeInt_33;
#line 1460 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__VersionNumbers_34;
#line 1460 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_35;
#line 1460 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__VersionNumberItem_36;
#line 1460 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_60_60;
#line 1460 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_61_61;
#line 1463 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files___OldIntFileName_28;
#line 1463 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___OldTimestamp_29;
#line 1463 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___OldSpecs_31;

#line 1458 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__MaybeTimestamp_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1455 "write_module_interface_files.m"
          {
#line 1456 "write_module_interface_files.m"
            {
#line 1456 "write_module_interface_files.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.actually_write_interface_file\'/6", (MR_String) "with \140--smart-recompilation\', timestamp not read");
#line 1456 "write_module_interface_files.m"
              return;
            }
#line 1455 "write_module_interface_files.m"
          }
#line 1458 "write_module_interface_files.m"
        else
#line 1459 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Timestamp_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__MaybeTimestamp_10, (MR_Integer) 0)));
#line 1463 "write_module_interface_files.m"
        {
#line 1463 "write_module_interface_files.m"
          parse_tree__read_modules__read_module_int_14_p_0(parse_tree__write_module_interface_files__NoLineNumGlobals_24, (MR_String) "Reading old interface for module", (MR_Integer) 0, (MR_Integer) 0, parse_tree__write_module_interface_files__ModuleName_12, parse_tree__write_module_interface_files__IntFileKind_13, &parse_tree__write_module_interface_files___OldIntFileName_28, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_3[2], &parse_tree__write_module_interface_files___OldTimestamp_29, &parse_tree__write_module_interface_files__OldParseTreeInt_30, &parse_tree__write_module_interface_files___OldSpecs_31, &parse_tree__write_module_interface_files__OldErrors_32);
        }
#line 1468 "write_module_interface_files.m"
        {
#line 1468 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__write_module_interface_files__OldErrors_32);
        }
#line 1470 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1469 "write_module_interface_files.m"
          {
#line 1469 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__MaybeOldParseTreeInt_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1469 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__MaybeOldParseTreeInt_33, 0) = ((MR_Box) (parse_tree__write_module_interface_files__OldParseTreeInt_30));
#line 1469 "write_module_interface_files.m"
          }
#line 1470 "write_module_interface_files.m"
        else
#line 1473 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__MaybeOldParseTreeInt_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1475 "write_module_interface_files.m"
        {
#line 1475 "write_module_interface_files.m"
          recompilation__version__compute_version_numbers_4_p_0(parse_tree__write_module_interface_files__Timestamp_27, parse_tree__write_module_interface_files__ParseTreeInt_19, parse_tree__write_module_interface_files__MaybeOldParseTreeInt_33, &parse_tree__write_module_interface_files__VersionNumbers_34);
        }
#line 1478 "write_module_interface_files.m"
        {
#line 1478 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_60_60, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_12));
#line 1478 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_60_60, 1) = ((MR_Box) (parse_tree__write_module_interface_files__VersionNumbers_34));
#line 1478 "write_module_interface_files.m"
        }
#line 1479 "write_module_interface_files.m"
        {
#line 1479 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_61_61 = mercury__term__context_init_0_f_0();
        }
#line 1477 "write_module_interface_files.m"
        {
#line 1477 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1477 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_35, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_60_60));
#line 1477 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_35, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_61_61));
#line 1477 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_35, 2) = ((MR_Box) ((MR_Integer) -1));
#line 1477 "write_module_interface_files.m"
        }
#line 1480 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__VersionNumberItem_36 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_35);
#line 1481 "write_module_interface_files.m"
        {
#line 1481 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__IntItems_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1481 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__IntItems_37, 0) = ((MR_Box) (parse_tree__write_module_interface_files__VersionNumberItem_36));
#line 1481 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__IntItems_37, 1) = ((MR_Box) (parse_tree__write_module_interface_files__IntItems1_17));
#line 1481 "write_module_interface_files.m"
        }
#line 1460 "write_module_interface_files.m"
      }
#line 1482 "write_module_interface_files.m"
    else
#line 1483 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntItems_37 = parse_tree__write_module_interface_files__IntItems1_17;
#line 1485 "write_module_interface_files.m"
    {
#line 1485 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_63_63 = mercury__term__context_init_0_f_0();
    }
#line 1485 "write_module_interface_files.m"
    {
#line 1485 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ParseTree_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1485 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTree_38, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_12));
#line 1485 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTree_38, 1) = ((MR_Box) (parse_tree__write_module_interface_files__IntFileKind_13));
#line 1485 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTree_38, 2) = ((MR_Box) (parse_tree__write_module_interface_files__V_63_63));
#line 1485 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTree_38, 3) = ((MR_Box) (parse_tree__write_module_interface_files__IntItems_37));
#line 1485 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTree_38, 4) = ((MR_Box) (parse_tree__write_module_interface_files__ImpItems_18));
#line 1485 "write_module_interface_files.m"
    }
#line 1487 "write_module_interface_files.m"
    {
#line 1487 "write_module_interface_files.m"
      parse_tree__mercury_to_mercury__convert_to_mercury_int_5_p_0(parse_tree__write_module_interface_files__NoLineNumGlobals_24, parse_tree__write_module_interface_files__TmpOutputFileName_23, parse_tree__write_module_interface_files__ParseTree_38);
    }
#line 1490 "write_module_interface_files.m"
    {
#line 1490 "write_module_interface_files.m"
      parse_tree__module_cmds__update_interface_4_p_0(parse_tree__write_module_interface_files__Globals_7, parse_tree__write_module_interface_files__OutputFileName_22);
#line 1490 "write_module_interface_files.m"
      return;
    }
#line 1427 "write_module_interface_files.m"
  }
#line 1423 "write_module_interface_files.m"
}

#line 1350 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_97_110_100_95_115_116_114_105_112_95_99_108_97_117_115_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(
#line 1350 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1350 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1350 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_3,
#line 1350 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_4)
#line 1350 "write_module_interface_files.m"
{
#line 1354 "write_module_interface_files.m"
  {
#line 1354 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1354 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1354 "write_module_interface_files.m"
      {
#line 1354 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1354 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_3;
#line 1354 "write_module_interface_files.m"
      }
#line 1354 "write_module_interface_files.m"
    else
#line 1356 "write_module_interface_files.m"
      {
#line 1356 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlock0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1356 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlocks0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1356 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlock_10;
#line 1356 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlocks_11;
#line 1356 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__Section_13 = (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock0_8, (MR_Integer) 0));
#line 1356 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock0_8, (MR_Integer) 1)));
#line 1356 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock0_8, (MR_Integer) 2)));
#line 1356 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items_16;
#line 1356 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_19_19;
#line 1356 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__RevItems_27;

#line 1366 "write_module_interface_files.m"
        {
#line 1366 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_loop_5_p_0(parse_tree__write_module_interface_files__Items0_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_27, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_3, &parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_19_19);
        }
#line 1367 "write_module_interface_files.m"
        {
#line 1367 "write_module_interface_files.m"
          mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_27, &parse_tree__write_module_interface_files__Items_16);
        }
#line 1359 "write_module_interface_files.m"
        {
#line 1359 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__ItemBlock_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1359 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_10, 0) = parse_tree__write_module_interface_files__Section_13;
#line 1359 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_10, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Context_14));
#line 1359 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_10, 2) = ((MR_Box) (parse_tree__write_module_interface_files__Items_16));
#line 1359 "write_module_interface_files.m"
        }
#line 1360 "write_module_interface_files.m"
        {
#line 1360 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_97_110_100_95_115_116_114_105_112_95_99_108_97_117_115_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(parse_tree__write_module_interface_files__ItemBlocks0_9, &parse_tree__write_module_interface_files__ItemBlocks_11, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_19_19, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_4);
        }
#line 1356 "write_module_interface_files.m"
        {
#line 1356 "write_module_interface_files.m"
          MR_Word base;
#line 1356 "write_module_interface_files.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__HeadVar__2_2 = base;
#line 1356 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ItemBlock_10));
#line 1356 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemBlocks_11));
#line 1356 "write_module_interface_files.m"
        }
#line 1356 "write_module_interface_files.m"
      }
#line 1354 "write_module_interface_files.m"
  }
#line 1350 "write_module_interface_files.m"
}

#line 713 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_105_116_101_109_115_95_102_114_111_109_95_109_97_112_95_95_91_49_93_95_48_4_p_0(
#line 713 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnPairs_6,
#line 713 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_8,
#line 713 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_9)
#line 713 "write_module_interface_files.m"
{
#line 718 "write_module_interface_files.m"
  {
#line 718 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 718 "write_module_interface_files.m"
    {
#line 718 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__add_type_defn_items_3_p_0(parse_tree__write_module_interface_files__TypeDefnPairs_6, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_8, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_9);
#line 718 "write_module_interface_files.m"
      return;
    }
#line 718 "write_module_interface_files.m"
  }
#line 713 "write_module_interface_files.m"
}

#line 592 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_112_95_97_115_115_101_114_116_105_111_110_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_2_p_0(
#line 592 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 592 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2)
#line 592 "write_module_interface_files.m"
{
#line 595 "write_module_interface_files.m"
  {
#line 595 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 595 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 595 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "write_module_interface_files.m"
    else
#line 597 "write_module_interface_files.m"
      {
#line 597 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlock0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 597 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlocks0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 597 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlock_5;
#line 597 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemBlocks_6;
#line 597 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__Section_7 = (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock0_3, (MR_Integer) 0));
#line 597 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock0_3, (MR_Integer) 1)));
#line 597 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock0_3, (MR_Integer) 2)));
#line 597 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items_10;
#line 597 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__RevItems_14;

#line 606 "write_module_interface_files.m"
        {
#line 606 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__strip_assertions_in_items_acc_3_p_0(parse_tree__write_module_interface_files__Items0_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_14);
        }
#line 607 "write_module_interface_files.m"
        {
#line 607 "write_module_interface_files.m"
          mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_14, &parse_tree__write_module_interface_files__Items_10);
        }
#line 600 "write_module_interface_files.m"
        {
#line 600 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__ItemBlock_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 600 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_5, 0) = parse_tree__write_module_interface_files__Section_7;
#line 600 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_5, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Context_8));
#line 600 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_5, 2) = ((MR_Box) (parse_tree__write_module_interface_files__Items_10));
#line 600 "write_module_interface_files.m"
        }
#line 601 "write_module_interface_files.m"
        {
#line 601 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_112_95_97_115_115_101_114_116_105_111_110_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_2_p_0(parse_tree__write_module_interface_files__ItemBlocks0_4, &parse_tree__write_module_interface_files__ItemBlocks_6);
        }
#line 597 "write_module_interface_files.m"
        {
#line 597 "write_module_interface_files.m"
          MR_Word base;
#line 597 "write_module_interface_files.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__HeadVar__2_2 = base;
#line 597 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ItemBlock_5));
#line 597 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemBlocks_6));
#line 597 "write_module_interface_files.m"
        }
#line 597 "write_module_interface_files.m"
      }
#line 595 "write_module_interface_files.m"
  }
#line 592 "write_module_interface_files.m"
}

#line 90 "write_module_interface_files.m"
void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_5_p_0(
#line 90 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_6,
#line 90 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__RawCompUnit_8)
#line 90 "write_module_interface_files.m"
{
#line 496 "write_module_interface_files.m"
  {
#line 496 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_57_57;
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_58_58;
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit_8, (MR_Integer) 0)));
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleNameContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit_8, (MR_Integer) 1)));
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IFileRawItemBlocks0_14;
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IFileRawItemBlocks1_15;
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IFileRawItemBlocks_16;
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntItems0_17;
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImpItems0_18;
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntItems_19;
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImpItems_24;
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ParseTreeInt3_31;
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_36_36;
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_39_39;
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_42_42;
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_44_44;
#line 496 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_47_47;
#line 500 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit_8, (MR_Integer) 2)));
#line 513 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 513 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 513 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 513 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 515 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 515 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 515 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 515 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_28_28;
#line 518 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files___NumWarnings_29;
#line 518 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files___NumErrors_30;

#line 503 "write_module_interface_files.m"
    {
#line 503 "write_module_interface_files.m"
      parse_tree__comp_unit_interface__get_interface_3_p_0((MR_Integer) 0, parse_tree__write_module_interface_files__RawCompUnit_8, &parse_tree__write_module_interface_files__IFileRawItemBlocks0_14);
    }
#line 507 "write_module_interface_files.m"
    {
#line 507 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_112_95_97_115_115_101_114_116_105_111_110_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_2_p_0(parse_tree__write_module_interface_files__IFileRawItemBlocks0_14, &parse_tree__write_module_interface_files__IFileRawItemBlocks1_15);
    }
#line 509 "write_module_interface_files.m"
    {
#line 509 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_97_110_100_95_115_116_114_105_112_95_99_108_97_117_115_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(parse_tree__write_module_interface_files__IFileRawItemBlocks1_15, &parse_tree__write_module_interface_files__IFileRawItemBlocks_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_36_36);
    }
#line 511 "write_module_interface_files.m"
    {
#line 511 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_short_interface_from_raw_item_blocks_4_p_0((MR_Integer) 1, parse_tree__write_module_interface_files__IFileRawItemBlocks_16, &parse_tree__write_module_interface_files__IntItems0_17, &parse_tree__write_module_interface_files__ImpItems0_18);
    }
#line 3094 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_57_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3096 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0;
#line 514 "write_module_interface_files.m"
    {
#line 514 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_39_39 = mercury__map__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_57_57, parse_tree__write_module_interface_files__TypeCtorInfo_58_58);
    }
#line 513 "write_module_interface_files.m"
    {
#line 513 "write_module_interface_files.m"
      parse_tree__module_qual__module_qualify_items_14_p_0(parse_tree__write_module_interface_files__Globals_6, parse_tree__write_module_interface_files__ModuleName_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__write_module_interface_files__IntItems0_17, &parse_tree__write_module_interface_files__IntItems_19, parse_tree__write_module_interface_files__V_39_39, &parse_tree__write_module_interface_files__V_20_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "", &parse_tree__write_module_interface_files__V_21_21, &parse_tree__write_module_interface_files__V_22_22, &parse_tree__write_module_interface_files__V_23_23, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_36_36, &parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_42_42);
    }
#line 516 "write_module_interface_files.m"
    {
#line 516 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_44_44 = mercury__map__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_57_57, parse_tree__write_module_interface_files__TypeCtorInfo_58_58);
    }
#line 515 "write_module_interface_files.m"
    {
#line 515 "write_module_interface_files.m"
      parse_tree__module_qual__module_qualify_items_14_p_0(parse_tree__write_module_interface_files__Globals_6, parse_tree__write_module_interface_files__ModuleName_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), parse_tree__write_module_interface_files__ImpItems0_18, &parse_tree__write_module_interface_files__ImpItems_24, parse_tree__write_module_interface_files__V_44_44, &parse_tree__write_module_interface_files__V_25_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "", &parse_tree__write_module_interface_files__V_26_26, &parse_tree__write_module_interface_files__V_27_27, &parse_tree__write_module_interface_files__V_28_28, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_42_42, &parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_47_47);
    }
#line 518 "write_module_interface_files.m"
    {
#line 518 "write_module_interface_files.m"
      parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_47_47, parse_tree__write_module_interface_files__Globals_6, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_29, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors_30);
    }
#line 521 "write_module_interface_files.m"
    {
#line 521 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ParseTreeInt3_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 521 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt3_31, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_10));
#line 521 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt3_31, 1) = ((MR_Box) ((MR_Integer) 1));
#line 521 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt3_31, 2) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_11));
#line 521 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt3_31, 3) = ((MR_Box) (parse_tree__write_module_interface_files__IntItems_19));
#line 521 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt3_31, 4) = ((MR_Box) (parse_tree__write_module_interface_files__ImpItems_24));
#line 521 "write_module_interface_files.m"
    }
#line 523 "write_module_interface_files.m"
    {
#line 523 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(parse_tree__write_module_interface_files__Globals_6, parse_tree__write_module_interface_files__ParseTreeInt3_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 525 "write_module_interface_files.m"
    {
#line 525 "write_module_interface_files.m"
      parse_tree__module_cmds__touch_interface_datestamp_5_p_0(parse_tree__write_module_interface_files__Globals_6, parse_tree__write_module_interface_files__ModuleName_10, (MR_String) ".date3");
#line 525 "write_module_interface_files.m"
      return;
    }
#line 496 "write_module_interface_files.m"
  }
#line 90 "write_module_interface_files.m"
}

#line 673 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__673__1_3_p_0(
#line 673 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_55,
#line 673 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_56,
#line 673 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_57)
#line 673 "write_module_interface_files.m"
{
#line 673 "write_module_interface_files.m"
  {
#line 673 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 673 "write_module_interface_files.m"
    {
#line 673 "write_module_interface_files.m"
      mercury__multi_map__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], ((MR_Box) (parse_tree__write_module_interface_files__HeadVar__1_55)), parse_tree__write_module_interface_files__HeadVar__2_56, parse_tree__write_module_interface_files__HeadVar__3_57);
#line 673 "write_module_interface_files.m"
      return;
    }
#line 673 "write_module_interface_files.m"
  }
#line 673 "write_module_interface_files.m"
}

#line 1184 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0(
#line 1184 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1184 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1184 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1184 "write_module_interface_files.m"
{
#line 1184 "write_module_interface_files.m"
  {
#line 1184 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1184 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_4 = parse_tree__write_module_interface_files__HeadVar__2_2;
#line 1184 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_5 = parse_tree__write_module_interface_files__HeadVar__3_3;

#line 1184 "write_module_interface_files.m"
    {
#line 1184 "write_module_interface_files.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[3], parse_tree__write_module_interface_files__HeadVar__1_1, ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_5)));
#line 1184 "write_module_interface_files.m"
      return;
    }
#line 1184 "write_module_interface_files.m"
  }
#line 1184 "write_module_interface_files.m"
}

#line 1184 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0(
#line 1184 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1184 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1184 "write_module_interface_files.m"
{
#line 1184 "write_module_interface_files.m"
  {
#line 1184 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1184 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_3 = parse_tree__write_module_interface_files__HeadVar__1_1;
#line 1184 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_4 = parse_tree__write_module_interface_files__HeadVar__2_2;

#line 1184 "write_module_interface_files.m"
    {
#line 1184 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[3], ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_4)));
    }
#line 1184 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1184 "write_module_interface_files.m"
  }
#line 1184 "write_module_interface_files.m"
}

#line 1182 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0(
#line 1182 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1182 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1182 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1182 "write_module_interface_files.m"
{
#line 1182 "write_module_interface_files.m"
  {
#line 1182 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1182 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_4 = parse_tree__write_module_interface_files__HeadVar__2_2;
#line 1182 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_5 = parse_tree__write_module_interface_files__HeadVar__3_3;

#line 1182 "write_module_interface_files.m"
    {
#line 1182 "write_module_interface_files.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[1], parse_tree__write_module_interface_files__HeadVar__1_1, ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_5)));
#line 1182 "write_module_interface_files.m"
      return;
    }
#line 1182 "write_module_interface_files.m"
  }
#line 1182 "write_module_interface_files.m"
}

#line 1182 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0(
#line 1182 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1182 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1182 "write_module_interface_files.m"
{
#line 1182 "write_module_interface_files.m"
  {
#line 1182 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1182 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_3 = parse_tree__write_module_interface_files__HeadVar__1_1;
#line 1182 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_4 = parse_tree__write_module_interface_files__HeadVar__2_2;

#line 1182 "write_module_interface_files.m"
    {
#line 1182 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[1], ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_4)));
    }
#line 1182 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1182 "write_module_interface_files.m"
  }
#line 1182 "write_module_interface_files.m"
}

#line 530 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_strip_assertions_0_0(
#line 530 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 530 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 530 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 530 "write_module_interface_files.m"
{
#line 530 "write_module_interface_files.m"
  {
#line 530 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 530 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar1_4 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__2_2;
#line 530 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar2_5 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__3_3;

#line 530 "write_module_interface_files.m"
    {
#line 530 "write_module_interface_files.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__Cast_HeadVar1_4, parse_tree__write_module_interface_files__Cast_HeadVar2_5);
#line 530 "write_module_interface_files.m"
      return;
    }
#line 530 "write_module_interface_files.m"
  }
#line 530 "write_module_interface_files.m"
}

#line 530 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_strip_assertions_0_0(
#line 530 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 530 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 530 "write_module_interface_files.m"
{
#line 3349 "parse_tree.write_module_interface_files.c"
  {
#line 3351 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__HeadVar__2_1 == parse_tree__write_module_interface_files__HeadVar__2_2);

#line 3354 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 3356 "parse_tree.write_module_interface_files.c"
  }
#line 530 "write_module_interface_files.m"
}

#line 1597 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_imports_0_0(
#line 1597 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1597 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1597 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1597 "write_module_interface_files.m"
{
#line 1597 "write_module_interface_files.m"
  {
#line 1597 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1597 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar1_4 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__2_2;
#line 1597 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar2_5 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__3_3;

#line 1597 "write_module_interface_files.m"
    {
#line 1597 "write_module_interface_files.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__Cast_HeadVar1_4, parse_tree__write_module_interface_files__Cast_HeadVar2_5);
#line 1597 "write_module_interface_files.m"
      return;
    }
#line 1597 "write_module_interface_files.m"
  }
#line 1597 "write_module_interface_files.m"
}

#line 1597 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_imports_0_0(
#line 1597 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 1597 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1597 "write_module_interface_files.m"
{
#line 3402 "parse_tree.write_module_interface_files.c"
  {
#line 3404 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__HeadVar__2_1 == parse_tree__write_module_interface_files__HeadVar__2_2);

#line 3407 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 3409 "parse_tree.write_module_interface_files.c"
  }
#line 1597 "write_module_interface_files.m"
}

#line 1601 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_need_foreign_imports_0_0(
#line 1601 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1601 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1601 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1601 "write_module_interface_files.m"
{
#line 1601 "write_module_interface_files.m"
  {
#line 1601 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1601 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar1_4 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__2_2;
#line 1601 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar2_5 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__3_3;

#line 1601 "write_module_interface_files.m"
    {
#line 1601 "write_module_interface_files.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__Cast_HeadVar1_4, parse_tree__write_module_interface_files__Cast_HeadVar2_5);
#line 1601 "write_module_interface_files.m"
      return;
    }
#line 1601 "write_module_interface_files.m"
  }
#line 1601 "write_module_interface_files.m"
}

#line 1601 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_need_foreign_imports_0_0(
#line 1601 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 1601 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1601 "write_module_interface_files.m"
{
#line 3455 "parse_tree.write_module_interface_files.c"
  {
#line 3457 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__HeadVar__2_1 == parse_tree__write_module_interface_files__HeadVar__2_2);

#line 3460 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 3462 "parse_tree.write_module_interface_files.c"
  }
#line 1601 "write_module_interface_files.m"
}

#line 2001 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__compare_by_symname_3_p_0(
#line 2001 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemA_4,
#line 2001 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemB_5,
#line 2001 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Result_6)
#line 2001 "write_module_interface_files.m"
{
#line 2009 "write_module_interface_files.m"
  {
#line 2009 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 2009 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__SymNameA_7;
#line 2009 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__SymNameB_8;

#line 1989 "write_module_interface_files.m"
    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1992 "write_module_interface_files.m"
      {
#line 1992 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemModeDecl_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 1)));
#line 1993 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_30_30;
#line 1993 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_31_31;
#line 1993 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_32_32;
#line 1993 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_33_33;
#line 1993 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_34_34;
#line 1993 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_35_35;
#line 1993 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_36_36;

#line 1993 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__SymNameA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 0)));
#line 1993 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 1)));
#line 1993 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 2)));
#line 1993 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 3)));
#line 1993 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 4)));
#line 1993 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 5)));
#line 1993 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 6)));
#line 1993 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 7)));
#line 1992 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1992 "write_module_interface_files.m"
      }
#line 1989 "write_module_interface_files.m"
    else
#line 1989 "write_module_interface_files.m"
    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1989 "write_module_interface_files.m"
      {
#line 1989 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemPredDecl_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 1)));
#line 1990 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_17_17;
#line 1990 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1990 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1990 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1990 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 1990 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 1990 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 1990 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 1990 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 1990 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 1990 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 1990 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_28_28;
#line 1990 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_29_29;

#line 1990 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__SymNameA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 0)));
#line 1990 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 1)));
#line 1990 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 2)));
#line 1990 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 3)));
#line 1990 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 4)));
#line 1990 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 5)));
#line 1990 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 6)));
#line 1990 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 7)));
#line 1990 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 8)));
#line 1990 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 9)));
#line 1990 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 10)));
#line 1990 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 11)));
#line 1990 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 12)));
#line 1990 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 13)));
#line 1989 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1989 "write_module_interface_files.m"
      }
#line 1989 "write_module_interface_files.m"
    else
#line 1989 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 2005 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1989 "write_module_interface_files.m"
      {
#line 1989 "write_module_interface_files.m"
        if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1992 "write_module_interface_files.m"
          {
#line 1992 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemModeDecl_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 1)));
#line 1993 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_54_54;
#line 1993 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_55_55;
#line 1993 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_56_56;
#line 1993 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_57_57;
#line 1993 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_58_58;
#line 1993 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_59_59;
#line 1993 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_60_60;

#line 1993 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__SymNameB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 0)));
#line 1993 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 1)));
#line 1993 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 2)));
#line 1993 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 3)));
#line 1993 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 4)));
#line 1993 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 5)));
#line 1993 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 6)));
#line 1993 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 7)));
#line 1992 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1992 "write_module_interface_files.m"
          }
#line 1989 "write_module_interface_files.m"
        else
#line 1989 "write_module_interface_files.m"
        if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1989 "write_module_interface_files.m"
          {
#line 1989 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemPredDecl_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 1)));
#line 1990 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_41_41;
#line 1990 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_42_42;
#line 1990 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_43_43;
#line 1990 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_44_44;
#line 1990 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_45_45;
#line 1990 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_46_46;
#line 1990 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_47_47;
#line 1990 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_48_48;
#line 1990 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_49_49;
#line 1990 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_50_50;
#line 1990 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_51_51;
#line 1990 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_52_52;
#line 1990 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_53_53;

#line 1990 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__SymNameB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 0)));
#line 1990 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 1)));
#line 1990 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 2)));
#line 1990 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 3)));
#line 1990 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 4)));
#line 1990 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 5)));
#line 1990 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 6)));
#line 1990 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 7)));
#line 1990 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 8)));
#line 1990 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 9)));
#line 1990 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 10)));
#line 1990 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 11)));
#line 1990 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 12)));
#line 1990 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 13)));
#line 1989 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1989 "write_module_interface_files.m"
          }
#line 1989 "write_module_interface_files.m"
        else
#line 1989 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1989 "write_module_interface_files.m"
      }
#line 2009 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 2008 "write_module_interface_files.m"
      {
#line 2008 "write_module_interface_files.m"
        mdbcomp__sym_name____Compare____sym_name_0_0(parse_tree__write_module_interface_files__Result_6, parse_tree__write_module_interface_files__SymNameA_7, parse_tree__write_module_interface_files__SymNameB_8);
#line 2008 "write_module_interface_files.m"
        return;
      }
#line 2009 "write_module_interface_files.m"
    else
#line 2010 "write_module_interface_files.m"
      {
#line 2010 "write_module_interface_files.m"
        {
#line 2010 "write_module_interface_files.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.compare_by_symname\'/3", (MR_String) "symname not found");
#line 2010 "write_module_interface_files.m"
          return;
        }
#line 2010 "write_module_interface_files.m"
      }
#line 2009 "write_module_interface_files.m"
  }
#line 2001 "write_module_interface_files.m"
}

#line 1996 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__symname_orderable_1_p_0(
#line 1996 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1996 "write_module_interface_files.m"
{
#line 1989 "write_module_interface_files.m"
  {
#line 1989 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1989 "write_module_interface_files.m"
    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1992 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1989 "write_module_interface_files.m"
    else
#line 1989 "write_module_interface_files.m"
    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1989 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1989 "write_module_interface_files.m"
    else
#line 1989 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1989 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1989 "write_module_interface_files.m"
  }
#line 1996 "write_module_interface_files.m"
}

#line 1890 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__chunkable_item_1_f_0(
#line 1890 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_3)
#line 1890 "write_module_interface_files.m"
{
#line 1894 "write_module_interface_files.m"
  {
#line 1894 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1894 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Chunkable_4;

#line 1894 "write_module_interface_files.m"
#line 1894 "write_module_interface_files.m"
    switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_3)) {
#line 1894 "write_module_interface_files.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1894 "write_module_interface_files.m"
      case (MR_Integer) 0:
#line 1894 "write_module_interface_files.m"
        {
#line 1894 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_5 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_3), (MR_Integer) 0);
#line 1894 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 0)));
#line 1895 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 1)));
#line 1895 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 2)));

#line 1927 "write_module_interface_files.m"
#line 1927 "write_module_interface_files.m"
          switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) {
#line 1927 "write_module_interface_files.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1927 "write_module_interface_files.m"
            case (MR_Integer) 0:
#line 1927 "write_module_interface_files.m"
            case (MR_Integer) 1:
#line 1933 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1927 "write_module_interface_files.m"
              break;
#line 1927 "write_module_interface_files.m"
            case (MR_Integer) 2:
#line 1927 "write_module_interface_files.m"
            case (MR_Integer) 3:
#line 1928 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 1;
#line 1927 "write_module_interface_files.m"
              break;
#line 1927 "write_module_interface_files.m"
          }
#line 1894 "write_module_interface_files.m"
        }
#line 1894 "write_module_interface_files.m"
        break;
#line 1894 "write_module_interface_files.m"
      case (MR_Integer) 1:
#line 1894 "write_module_interface_files.m"
      case (MR_Integer) 2:
#line 1915 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 1;
#line 1894 "write_module_interface_files.m"
        break;
#line 1894 "write_module_interface_files.m"
      case (MR_Integer) 3:
#line 1894 "write_module_interface_files.m"
#line 1894 "write_module_interface_files.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_3, (MR_Integer) 0)))) {
#line 1894 "write_module_interface_files.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 2:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 3:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 5:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 6:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 7:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 8:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 9:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 11:
#line 1915 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 1;
#line 1894 "write_module_interface_files.m"
            break;
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 4:
#line 1898 "write_module_interface_files.m"
            {
#line 1898 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ItemPragma_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_3, (MR_Integer) 1)));
#line 1898 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Pragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 0)));
#line 1899 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 1)));
#line 1899 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 2)));
#line 1899 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 3)));

#line 1966 "write_module_interface_files.m"
#line 1966 "write_module_interface_files.m"
              switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_10)) {
#line 1966 "write_module_interface_files.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1966 "write_module_interface_files.m"
                case (MR_Integer) 0:
#line 1966 "write_module_interface_files.m"
                case (MR_Integer) 1:
#line 1977 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1966 "write_module_interface_files.m"
                  break;
#line 1966 "write_module_interface_files.m"
                case (MR_Integer) 2:
#line 1977 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1966 "write_module_interface_files.m"
                  break;
#line 1966 "write_module_interface_files.m"
                case (MR_Integer) 3:
#line 1966 "write_module_interface_files.m"
#line 1966 "write_module_interface_files.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_10, (MR_Integer) 0)))) {
#line 1966 "write_module_interface_files.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 0:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 9:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 15:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 21:
#line 1977 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1966 "write_module_interface_files.m"
                      break;
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 1:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 2:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 3:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 4:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 5:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 6:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 7:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 8:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 10:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 11:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 12:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 13:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 14:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 16:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 17:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 18:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 19:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 20:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 22:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 23:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 24:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 25:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 26:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 27:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 28:
#line 1966 "write_module_interface_files.m"
                    case (MR_Integer) 29:
#line 1967 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 1;
#line 1966 "write_module_interface_files.m"
                      break;
#line 1966 "write_module_interface_files.m"
                  }
#line 1966 "write_module_interface_files.m"
                  break;
#line 1966 "write_module_interface_files.m"
              }
#line 1898 "write_module_interface_files.m"
            }
#line 1894 "write_module_interface_files.m"
            break;
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 10:
#line 1918 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1894 "write_module_interface_files.m"
            break;
#line 1894 "write_module_interface_files.m"
        }
#line 1894 "write_module_interface_files.m"
        break;
#line 1894 "write_module_interface_files.m"
    }
#line 1894 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Chunkable_4;
#line 1894 "write_module_interface_files.m"
  }
#line 1890 "write_module_interface_files.m"
}

#line 1877 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_chunkable_1_p_0(
#line 1877 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1877 "write_module_interface_files.m"
{
#line 1894 "write_module_interface_files.m"
  {
#line 1894 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1894 "write_module_interface_files.m"
#line 1894 "write_module_interface_files.m"
    switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) {
#line 1894 "write_module_interface_files.m"
      default:
#line 1894 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1894 "write_module_interface_files.m"
        break;
#line 1894 "write_module_interface_files.m"
      case (MR_Integer) 0:
#line 1894 "write_module_interface_files.m"
        {
#line 1894 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_6 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_2), (MR_Integer) 0);
#line 1894 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 0)));
#line 1895 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 1)));
#line 1895 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 2)));

#line 1927 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 2)))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3))))))
#line 1928 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1927 "write_module_interface_files.m"
          else
#line 1927 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1894 "write_module_interface_files.m"
        }
#line 1894 "write_module_interface_files.m"
        break;
#line 1894 "write_module_interface_files.m"
      case (MR_Integer) 1:
#line 1894 "write_module_interface_files.m"
      case (MR_Integer) 2:
#line 1915 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1894 "write_module_interface_files.m"
        break;
#line 1894 "write_module_interface_files.m"
      case (MR_Integer) 3:
#line 1894 "write_module_interface_files.m"
#line 1894 "write_module_interface_files.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) {
#line 1894 "write_module_interface_files.m"
          default:
#line 1894 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1894 "write_module_interface_files.m"
            break;
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 2:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 3:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 5:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 6:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 7:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 8:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 9:
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 11:
#line 1915 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1894 "write_module_interface_files.m"
            break;
#line 1894 "write_module_interface_files.m"
          case (MR_Integer) 4:
#line 1898 "write_module_interface_files.m"
            {
#line 1898 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 1)));
#line 1898 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 0)));
#line 1899 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 1)));
#line 1899 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 2)));
#line 1899 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 3)));

#line 1966 "write_module_interface_files.m"
              if (((((((((((((((((((((((((((((((((((((((((((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 24)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 23)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 4)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 11)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 25)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 13)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 12)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 16)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 17)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 18)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 19)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 29)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 28)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 27)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 26)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 14)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 22)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 20)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 10)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 8))))))
#line 1967 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1966 "write_module_interface_files.m"
              else
#line 1966 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1898 "write_module_interface_files.m"
            }
#line 1894 "write_module_interface_files.m"
            break;
#line 1894 "write_module_interface_files.m"
        }
#line 1894 "write_module_interface_files.m"
        break;
#line 1894 "write_module_interface_files.m"
    }
#line 1894 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1894 "write_module_interface_files.m"
  }
#line 1877 "write_module_interface_files.m"
}

#line 1770 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_reorderable_1_p_0(
#line 1770 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1770 "write_module_interface_files.m"
{
#line 1790 "write_module_interface_files.m"
  {
#line 1790 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1790 "write_module_interface_files.m"
#line 1790 "write_module_interface_files.m"
    switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) {
#line 1790 "write_module_interface_files.m"
      default:
#line 1790 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1790 "write_module_interface_files.m"
        break;
#line 1790 "write_module_interface_files.m"
      case (MR_Integer) 0:
#line 1790 "write_module_interface_files.m"
        {
#line 1790 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_6 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_2), (MR_Integer) 0);
#line 1790 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 0)));
#line 1791 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 1)));
#line 1791 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 2)));

#line 1824 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 2)))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3))))))
#line 1825 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1824 "write_module_interface_files.m"
          else
#line 1824 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1790 "write_module_interface_files.m"
        }
#line 1790 "write_module_interface_files.m"
        break;
#line 1790 "write_module_interface_files.m"
      case (MR_Integer) 2:
#line 1805 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1790 "write_module_interface_files.m"
        break;
#line 1790 "write_module_interface_files.m"
      case (MR_Integer) 3:
#line 1790 "write_module_interface_files.m"
#line 1790 "write_module_interface_files.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) {
#line 1790 "write_module_interface_files.m"
          default:
#line 1790 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1790 "write_module_interface_files.m"
            break;
#line 1790 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 1790 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 1790 "write_module_interface_files.m"
          case (MR_Integer) 5:
#line 1790 "write_module_interface_files.m"
          case (MR_Integer) 6:
#line 1790 "write_module_interface_files.m"
          case (MR_Integer) 7:
#line 1805 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1790 "write_module_interface_files.m"
            break;
#line 1790 "write_module_interface_files.m"
          case (MR_Integer) 4:
#line 1794 "write_module_interface_files.m"
            {
#line 1794 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 1)));
#line 1794 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 0)));
#line 1795 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 1)));
#line 1795 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 2)));
#line 1795 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 3)));

#line 1864 "write_module_interface_files.m"
              if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 24)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 23)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 4)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 11)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 25)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 13)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 12)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 16)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 17)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 18)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 19)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 29)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 28)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 27)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 26)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 14)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 22)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 20)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 10)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 8))))))
#line 1865 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1864 "write_module_interface_files.m"
              else
#line 1864 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1794 "write_module_interface_files.m"
            }
#line 1790 "write_module_interface_files.m"
            break;
#line 1790 "write_module_interface_files.m"
        }
#line 1790 "write_module_interface_files.m"
        break;
#line 1790 "write_module_interface_files.m"
    }
#line 1790 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1790 "write_module_interface_files.m"
  }
#line 1770 "write_module_interface_files.m"
}

#line 1761 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__import_or_use_item_1_p_0(
#line 1761 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1761 "write_module_interface_files.m"
{
#line 1763 "write_module_interface_files.m"
  {
#line 1763 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 0)));
#line 1763 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_3;
#line 1763 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_4;
#line 1765 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_5_5;
#line 1765 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__V_6_6;

#line 1764 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1764 "write_module_interface_files.m"
      {
#line 1764 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemModuleDefn_3 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_2), (MR_Integer) 0);
#line 1765 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ModuleDefn_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_3, (MR_Integer) 0)));
#line 1765 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_3, (MR_Integer) 1)));
#line 1765 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_3, (MR_Integer) 2)));
#line 1767 "write_module_interface_files.m"
        if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_4)) == (MR_mktag((MR_Integer) 2))))
#line 1766 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1767 "write_module_interface_files.m"
        else
#line 1767 "write_module_interface_files.m"
        if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_4)) == (MR_mktag((MR_Integer) 3))))
#line 1767 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1767 "write_module_interface_files.m"
        else
#line 1767 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1764 "write_module_interface_files.m"
      }
#line 1763 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1763 "write_module_interface_files.m"
  }
#line 1761 "write_module_interface_files.m"
}

#line 1745 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_5(
#line 1745 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1745 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1745 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1745 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1745 "write_module_interface_files.m"
{
#line 1745 "write_module_interface_files.m"
  {
#line 1745 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1745 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_Result_6;

#line 1745 "write_module_interface_files.m"
    {
#line 1745 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__compare_by_symname_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_Result_6);
    }
#line 1745 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_Result_6));
#line 1745 "write_module_interface_files.m"
  }
#line 1745 "write_module_interface_files.m"
}

#line 1741 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_4(
#line 1741 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1741 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1741 "write_module_interface_files.m"
{
#line 1741 "write_module_interface_files.m"
  {
#line 1741 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1741 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1741 "write_module_interface_files.m"
    {
#line 1741 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__symname_orderable_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1741 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1741 "write_module_interface_files.m"
  }
#line 1741 "write_module_interface_files.m"
}

#line 1739 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_3(
#line 1739 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1739 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1739 "write_module_interface_files.m"
{
#line 1739 "write_module_interface_files.m"
  {
#line 1739 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1739 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1739 "write_module_interface_files.m"
    {
#line 1739 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__import_or_use_item_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1739 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1739 "write_module_interface_files.m"
  }
#line 1739 "write_module_interface_files.m"
}

#line 1737 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_2(
#line 1737 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1737 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1737 "write_module_interface_files.m"
{
#line 1737 "write_module_interface_files.m"
  {
#line 1737 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1737 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1737 "write_module_interface_files.m"
    {
#line 1737 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_reorderable_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1737 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1737 "write_module_interface_files.m"
  }
#line 1737 "write_module_interface_files.m"
}

#line 1736 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_1(
#line 1736 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1736 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1736 "write_module_interface_files.m"
{
#line 1736 "write_module_interface_files.m"
  {
#line 1736 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1736 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1736 "write_module_interface_files.m"
    {
#line 1736 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_chunkable_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1736 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1736 "write_module_interface_files.m"
  }
#line 1736 "write_module_interface_files.m"
}

#line 1729 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0(
#line 1729 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1729 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1729 "write_module_interface_files.m"
{
#line 1731 "write_module_interface_files.m"
  {
#line 1731 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1731 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1731 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1731 "write_module_interface_files.m"
    else
#line 1732 "write_module_interface_files.m"
      {
#line 1732 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Item0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1732 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1732 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Chunkable0_6;

#line 1733 "write_module_interface_files.m"
        {
#line 1733 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Chunkable0_6 = parse_tree__write_module_interface_files__chunkable_item_1_f_0(parse_tree__write_module_interface_files__Item0_3);
        }
#line 1750 "write_module_interface_files.m"
#line 1750 "write_module_interface_files.m"
        switch (parse_tree__write_module_interface_files__Chunkable0_6) {
#line 1750 "write_module_interface_files.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1750 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 1751 "write_module_interface_files.m"
            {
#line 1751 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__OrderedItemsTail_17;

#line 1752 "write_module_interface_files.m"
              {
#line 1752 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__order_items_2_p_0(parse_tree__write_module_interface_files__Items0_4, &parse_tree__write_module_interface_files__OrderedItemsTail_17);
              }
#line 1753 "write_module_interface_files.m"
              {
#line 1753 "write_module_interface_files.m"
                MR_Word base;
#line 1753 "write_module_interface_files.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1753 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__HeadVar__2_2 = base;
#line 1753 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_3));
#line 1753 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__OrderedItemsTail_17));
#line 1753 "write_module_interface_files.m"
              }
#line 1751 "write_module_interface_files.m"
            }
#line 1750 "write_module_interface_files.m"
            break;
#line 1750 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 1735 "write_module_interface_files.m"
            {
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__FrontItems_7;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__RemainItems_8;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ReorderableItems_9;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__NonReorderableItems_10;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ImportReorderableItems_11;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__NonImportReorderableItems_12;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__SymNameItems_13;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__NonSymNameItems_14;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__OrderedSymNameItems_15;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__OrderedRemainItems_16;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 1735 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_28_28;

#line 1736 "write_module_interface_files.m"
              {
#line 1736 "write_module_interface_files.m"
                mercury__list__takewhile_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[20], parse_tree__write_module_interface_files__Items0_4, &parse_tree__write_module_interface_files__FrontItems_7, &parse_tree__write_module_interface_files__RemainItems_8);
              }
#line 1737 "write_module_interface_files.m"
              {
#line 1737 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1737 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_3));
#line 1737 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 1) = ((MR_Box) (parse_tree__write_module_interface_files__FrontItems_7));
#line 1737 "write_module_interface_files.m"
              }
#line 1737 "write_module_interface_files.m"
              {
#line 1737 "write_module_interface_files.m"
                mercury__list__filter_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[21], parse_tree__write_module_interface_files__V_20_20, &parse_tree__write_module_interface_files__ReorderableItems_9, &parse_tree__write_module_interface_files__NonReorderableItems_10);
              }
#line 1739 "write_module_interface_files.m"
              {
#line 1739 "write_module_interface_files.m"
                mercury__list__filter_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[22], parse_tree__write_module_interface_files__ReorderableItems_9, &parse_tree__write_module_interface_files__ImportReorderableItems_11, &parse_tree__write_module_interface_files__NonImportReorderableItems_12);
              }
#line 1741 "write_module_interface_files.m"
              {
#line 1741 "write_module_interface_files.m"
                mercury__list__filter_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[23], parse_tree__write_module_interface_files__NonReorderableItems_10, &parse_tree__write_module_interface_files__SymNameItems_13, &parse_tree__write_module_interface_files__NonSymNameItems_14);
              }
#line 1745 "write_module_interface_files.m"
              {
#line 1745 "write_module_interface_files.m"
                mercury__list__sort_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[24], parse_tree__write_module_interface_files__SymNameItems_13, &parse_tree__write_module_interface_files__OrderedSymNameItems_15);
              }
#line 1746 "write_module_interface_files.m"
              {
#line 1746 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__order_items_2_p_0(parse_tree__write_module_interface_files__RemainItems_8, &parse_tree__write_module_interface_files__OrderedRemainItems_16);
              }
#line 1747 "write_module_interface_files.m"
              {
#line 1747 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_24_24 = mercury__list__sort_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__ImportReorderableItems_11);
              }
#line 1748 "write_module_interface_files.m"
              {
#line 1748 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_26_26 = mercury__list__sort_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__NonImportReorderableItems_12);
              }
#line 1749 "write_module_interface_files.m"
              {
#line 1749 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_28_28 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__NonSymNameItems_14, parse_tree__write_module_interface_files__OrderedRemainItems_16);
              }
#line 1749 "write_module_interface_files.m"
              {
#line 1749 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_27_27 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__OrderedSymNameItems_15, parse_tree__write_module_interface_files__V_28_28);
              }
#line 1748 "write_module_interface_files.m"
              {
#line 1748 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_25_25 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__V_26_26, parse_tree__write_module_interface_files__V_27_27);
              }
#line 1747 "write_module_interface_files.m"
              {
#line 1747 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__V_24_24, parse_tree__write_module_interface_files__V_25_25);
              }
#line 1735 "write_module_interface_files.m"
            }
#line 1750 "write_module_interface_files.m"
            break;
#line 1750 "write_module_interface_files.m"
        }
#line 1732 "write_module_interface_files.m"
      }
#line 1731 "write_module_interface_files.m"
  }
#line 1729 "write_module_interface_files.m"
}

#line 1638 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__filter_items_for_import_needs_5_p_0(
#line 1638 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1638 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NeedImports_2,
#line 1638 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NeedForeignImports_3,
#line 1638 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4,
#line 1638 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_5)
#line 1638 "write_module_interface_files.m"
{
#line 1642 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1642 "write_module_interface_files.m"
    {
#line 1642 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1642 "write_module_interface_files.m"
      {
#line 1642 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1642 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1642 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4;
#line 1642 "write_module_interface_files.m"
        else
#line 1644 "write_module_interface_files.m"
          {
#line 1644 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1644 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1644 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_50_50;

#line 1664 "write_module_interface_files.m"
#line 1664 "write_module_interface_files.m"
            switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_11)) {
#line 1664 "write_module_interface_files.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1664 "write_module_interface_files.m"
              case (MR_Integer) 0:
#line 1646 "write_module_interface_files.m"
                {
#line 1646 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_16 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_11), (MR_Integer) 0);
#line 1646 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__ModuleDefn_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_16, (MR_Integer) 0)));
#line 1647 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_16, (MR_Integer) 1)));
#line 1647 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_16, (MR_Integer) 2)));

#line 1658 "write_module_interface_files.m"
#line 1658 "write_module_interface_files.m"
                  switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_17)) {
#line 1658 "write_module_interface_files.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1658 "write_module_interface_files.m"
                    case (MR_Integer) 0:
#line 1658 "write_module_interface_files.m"
                    case (MR_Integer) 1:
#line 1661 "write_module_interface_files.m"
                      {
#line 1662 "write_module_interface_files.m"
                        {
#line 1662 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_50_50 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4, ((MR_Box) (parse_tree__write_module_interface_files__Item_11)));
                        }
#line 1661 "write_module_interface_files.m"
                      }
#line 1658 "write_module_interface_files.m"
                      break;
#line 1658 "write_module_interface_files.m"
                    case (MR_Integer) 2:
#line 1658 "write_module_interface_files.m"
                    case (MR_Integer) 3:
#line 1655 "write_module_interface_files.m"
#line 1655 "write_module_interface_files.m"
                      switch (parse_tree__write_module_interface_files__NeedImports_2) {
#line 1655 "write_module_interface_files.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1655 "write_module_interface_files.m"
                        case (MR_Integer) 0:
#line 1656 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_50_50 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4;
#line 1655 "write_module_interface_files.m"
                          break;
#line 1655 "write_module_interface_files.m"
                        case (MR_Integer) 1:
#line 1653 "write_module_interface_files.m"
                          {
#line 1654 "write_module_interface_files.m"
                            {
#line 1654 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_50_50 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4, ((MR_Box) (parse_tree__write_module_interface_files__Item_11)));
                            }
#line 1653 "write_module_interface_files.m"
                          }
#line 1655 "write_module_interface_files.m"
                          break;
#line 1655 "write_module_interface_files.m"
                      }
#line 1658 "write_module_interface_files.m"
                      break;
#line 1658 "write_module_interface_files.m"
                  }
#line 1646 "write_module_interface_files.m"
                }
#line 1664 "write_module_interface_files.m"
                break;
#line 1664 "write_module_interface_files.m"
              case (MR_Integer) 1:
#line 1664 "write_module_interface_files.m"
              case (MR_Integer) 2:
#line 1691 "write_module_interface_files.m"
                {
#line 1692 "write_module_interface_files.m"
                  {
#line 1692 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_50_50 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4, ((MR_Box) (parse_tree__write_module_interface_files__Item_11)));
                  }
#line 1691 "write_module_interface_files.m"
                }
#line 1664 "write_module_interface_files.m"
                break;
#line 1664 "write_module_interface_files.m"
              case (MR_Integer) 3:
#line 1664 "write_module_interface_files.m"
#line 1664 "write_module_interface_files.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_11, (MR_Integer) 0)))) {
#line 1664 "write_module_interface_files.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1664 "write_module_interface_files.m"
                  case (MR_Integer) 0:
#line 1664 "write_module_interface_files.m"
                  case (MR_Integer) 1:
#line 1664 "write_module_interface_files.m"
                  case (MR_Integer) 2:
#line 1664 "write_module_interface_files.m"
                  case (MR_Integer) 3:
#line 1664 "write_module_interface_files.m"
                  case (MR_Integer) 5:
#line 1664 "write_module_interface_files.m"
                  case (MR_Integer) 6:
#line 1664 "write_module_interface_files.m"
                  case (MR_Integer) 7:
#line 1664 "write_module_interface_files.m"
                  case (MR_Integer) 8:
#line 1664 "write_module_interface_files.m"
                  case (MR_Integer) 9:
#line 1664 "write_module_interface_files.m"
                  case (MR_Integer) 10:
#line 1664 "write_module_interface_files.m"
                  case (MR_Integer) 11:
#line 1691 "write_module_interface_files.m"
                    {
#line 1692 "write_module_interface_files.m"
                      {
#line 1692 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_50_50 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4, ((MR_Box) (parse_tree__write_module_interface_files__Item_11)));
                      }
#line 1691 "write_module_interface_files.m"
                    }
#line 1664 "write_module_interface_files.m"
                    break;
#line 1664 "write_module_interface_files.m"
                  case (MR_Integer) 4:
#line 1665 "write_module_interface_files.m"
                    {
#line 1665 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ItemPragma_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_11, (MR_Integer) 1)));
#line 1665 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Pragma_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_25, (MR_Integer) 0)));
#line 1666 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_25, (MR_Integer) 1)));
#line 1666 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_25, (MR_Integer) 2)));
#line 1666 "write_module_interface_files.m"
                      MR_Integer parse_tree__write_module_interface_files__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_25, (MR_Integer) 3)));
#line 1667 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_30_30;

#line 1667 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_26, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1667 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 1667 "write_module_interface_files.m"
                        {
#line 1667 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_26, (MR_Integer) 1)));
#line 1671 "write_module_interface_files.m"
#line 1671 "write_module_interface_files.m"
                          switch (parse_tree__write_module_interface_files__NeedForeignImports_3) {
#line 1671 "write_module_interface_files.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 1671 "write_module_interface_files.m"
                            case (MR_Integer) 0:
#line 1672 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_50_50 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4;
#line 1671 "write_module_interface_files.m"
                              break;
#line 1671 "write_module_interface_files.m"
                            case (MR_Integer) 1:
#line 1669 "write_module_interface_files.m"
                              {
#line 1670 "write_module_interface_files.m"
                                {
#line 1670 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_50_50 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4, ((MR_Box) (parse_tree__write_module_interface_files__Item_11)));
                                }
#line 1669 "write_module_interface_files.m"
                              }
#line 1671 "write_module_interface_files.m"
                              break;
#line 1671 "write_module_interface_files.m"
                          }
#line 1667 "write_module_interface_files.m"
                        }
#line 1667 "write_module_interface_files.m"
                      else
#line 1675 "write_module_interface_files.m"
                        {
#line 1675 "write_module_interface_files.m"
                          {
#line 1675 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_50_50 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4, ((MR_Box) (parse_tree__write_module_interface_files__Item_11)));
                          }
#line 1675 "write_module_interface_files.m"
                        }
#line 1665 "write_module_interface_files.m"
                    }
#line 1664 "write_module_interface_files.m"
                    break;
#line 1664 "write_module_interface_files.m"
                }
#line 1664 "write_module_interface_files.m"
                break;
#line 1664 "write_module_interface_files.m"
            }
#line 1694 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1694 "write_module_interface_files.m"
            {
#line 1694 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_12;
#line 1694 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0__tmp_copy_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_50_50;

#line 1694 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0__tmp_copy_4;
#line 1694 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1694 "write_module_interface_files.m"
            }
#line 1694 "write_module_interface_files.m"
            continue;
#line 1644 "write_module_interface_files.m"
          }
#line 1642 "write_module_interface_files.m"
      }
#line 1642 "write_module_interface_files.m"
      break;
#line 1642 "write_module_interface_files.m"
    }
#line 1638 "write_module_interface_files.m"
}

#line 1615 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_need_imports_5_p_0(
#line 1615 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1615 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_0_2,
#line 1615 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_3,
#line 1615 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_0_4,
#line 1615 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_5)
#line 1615 "write_module_interface_files.m"
{
#line 1619 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1619 "write_module_interface_files.m"
    {
#line 1619 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1619 "write_module_interface_files.m"
      {
#line 1619 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1619 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1619 "write_module_interface_files.m"
          {
#line 1619 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_0_4;
#line 1619 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_0_2;
#line 1619 "write_module_interface_files.m"
          }
#line 1619 "write_module_interface_files.m"
        else
#line 1620 "write_module_interface_files.m"
          {
#line 1620 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1620 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1620 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemNeedsImports_16;
#line 1620 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemNeedsForeignImports_17;
#line 1620 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_24_24;
#line 1620 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_25_25;

#line 1622 "write_module_interface_files.m"
            {
#line 1622 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ItemNeedsImports_16 = parse_tree__item_util__item_needs_imports_1_f_0(parse_tree__write_module_interface_files__Item_12);
            }
#line 1623 "write_module_interface_files.m"
            {
#line 1623 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ItemNeedsForeignImports_17 = parse_tree__item_util__item_needs_foreign_imports_1_f_0(parse_tree__write_module_interface_files__Item_12);
            }
#line 1627 "write_module_interface_files.m"
#line 1627 "write_module_interface_files.m"
            switch (parse_tree__write_module_interface_files__ItemNeedsImports_16) {
#line 1627 "write_module_interface_files.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1627 "write_module_interface_files.m"
              case (MR_Integer) 0:
#line 1628 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_24_24 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_0_2;
#line 1627 "write_module_interface_files.m"
                break;
#line 1627 "write_module_interface_files.m"
              case (MR_Integer) 1:
#line 1626 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_24_24 = (MR_Integer) 1;
#line 1627 "write_module_interface_files.m"
                break;
#line 1627 "write_module_interface_files.m"
            }
#line 1633 "write_module_interface_files.m"
            if ((parse_tree__write_module_interface_files__ItemNeedsForeignImports_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1634 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_25_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_0_4;
#line 1633 "write_module_interface_files.m"
            else
#line 1632 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_25_25 = (MR_Integer) 1;
#line 1636 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1636 "write_module_interface_files.m"
            {
#line 1636 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_13;
#line 1636 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_24_24;
#line 1636 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_0__tmp_copy_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_25_25;

#line 1636 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_0_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedForeignImports_0__tmp_copy_4;
#line 1636 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_NeedImports_0__tmp_copy_2;
#line 1636 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1636 "write_module_interface_files.m"
            }
#line 1636 "write_module_interface_files.m"
            continue;
#line 1620 "write_module_interface_files.m"
          }
#line 1619 "write_module_interface_files.m"
      }
#line 1619 "write_module_interface_files.m"
      break;
#line 1619 "write_module_interface_files.m"
    }
#line 1615 "write_module_interface_files.m"
}

#line 1605 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0(
#line 1605 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 1605 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4)
#line 1605 "write_module_interface_files.m"
{
#line 1607 "write_module_interface_files.m"
  {
#line 1607 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1607 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_11_11;
#line 1607 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NeedImports_5;
#line 1607 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NeedForeignImports_6;
#line 1607 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemsCord_7;
#line 1607 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_10_10;

#line 1608 "write_module_interface_files.m"
    {
#line 1608 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__find_need_imports_5_p_0(parse_tree__write_module_interface_files__Items0_3, (MR_Integer) 0, &parse_tree__write_module_interface_files__NeedImports_5, (MR_Integer) 0, &parse_tree__write_module_interface_files__NeedForeignImports_6);
    }
#line 5074 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1612 "write_module_interface_files.m"
    {
#line 1612 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_10_10 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_11_11);
    }
#line 1611 "write_module_interface_files.m"
    {
#line 1611 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__filter_items_for_import_needs_5_p_0(parse_tree__write_module_interface_files__Items0_3, parse_tree__write_module_interface_files__NeedImports_5, parse_tree__write_module_interface_files__NeedForeignImports_6, parse_tree__write_module_interface_files__V_10_10, &parse_tree__write_module_interface_files__ItemsCord_7);
    }
#line 1613 "write_module_interface_files.m"
    {
#line 1613 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__Items_4 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_11_11, parse_tree__write_module_interface_files__ItemsCord_7);
    }
#line 1607 "write_module_interface_files.m"
  }
#line 1605 "write_module_interface_files.m"
}

#line 1537 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_from_items_acc_4_p_0(
#line 1537 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1537 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1537 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3,
#line 1537 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_4)
#line 1537 "write_module_interface_files.m"
{
#line 1540 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1540 "write_module_interface_files.m"
    {
#line 1540 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1540 "write_module_interface_files.m"
      {
#line 1540 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1540 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1540 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3;
#line 1540 "write_module_interface_files.m"
        else
#line 1541 "write_module_interface_files.m"
          {
#line 1541 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 1541 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 1541 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17;
#line 1548 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__AbstractItem_13;

#line 1546 "write_module_interface_files.m"
            {
#line 1546 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = parse_tree__item_util__make_abstract_defn_3_p_0(parse_tree__write_module_interface_files__Item_10, parse_tree__write_module_interface_files__HeadVar__1_1, &parse_tree__write_module_interface_files__AbstractItem_13);
            }
#line 1548 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1547 "write_module_interface_files.m"
              {
#line 1547 "write_module_interface_files.m"
                {
#line 1547 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (parse_tree__write_module_interface_files__AbstractItem_13)));
                }
#line 1547 "write_module_interface_files.m"
              }
#line 1548 "write_module_interface_files.m"
            else
#line 1550 "write_module_interface_files.m"
              {
#line 1550 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__AbstractItem_21;

#line 1548 "write_module_interface_files.m"
                {
#line 1548 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__succeeded = parse_tree__item_util__make_abstract_unify_compare_3_p_0(parse_tree__write_module_interface_files__Item_10, parse_tree__write_module_interface_files__HeadVar__1_1, &parse_tree__write_module_interface_files__AbstractItem_21);
                }
#line 1550 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1549 "write_module_interface_files.m"
                  {
#line 1549 "write_module_interface_files.m"
                    {
#line 1549 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (parse_tree__write_module_interface_files__AbstractItem_21)));
                    }
#line 1549 "write_module_interface_files.m"
                  }
#line 1550 "write_module_interface_files.m"
                else
#line 5178 "parse_tree.write_module_interface_files.c"
#line 5179 "parse_tree.write_module_interface_files.c"
                  switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_10)) {
#line 5181 "parse_tree.write_module_interface_files.c"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 5183 "parse_tree.write_module_interface_files.c"
                    case (MR_Integer) 0:
#line 5185 "parse_tree.write_module_interface_files.c"
                    case (MR_Integer) 2:
#line 5187 "parse_tree.write_module_interface_files.c"
                      {
#line 1554 "write_module_interface_files.m"
                        {
#line 1554 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                        }
#line 5194 "parse_tree.write_module_interface_files.c"
                      }
#line 5196 "parse_tree.write_module_interface_files.c"
                      break;
#line 5198 "parse_tree.write_module_interface_files.c"
                    case (MR_Integer) 1:
#line 1556 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3;
#line 5202 "parse_tree.write_module_interface_files.c"
                      break;
#line 5204 "parse_tree.write_module_interface_files.c"
                    case (MR_Integer) 3:
#line 5206 "parse_tree.write_module_interface_files.c"
#line 5207 "parse_tree.write_module_interface_files.c"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 0)))) {
#line 5209 "parse_tree.write_module_interface_files.c"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 5211 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 0:
#line 5213 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 1:
#line 5215 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 7:
#line 5217 "parse_tree.write_module_interface_files.c"
                          {
#line 1554 "write_module_interface_files.m"
                            {
#line 1554 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                            }
#line 5224 "parse_tree.write_module_interface_files.c"
                          }
#line 5226 "parse_tree.write_module_interface_files.c"
                          break;
#line 5228 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 2:
#line 5230 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 3:
#line 5232 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 5:
#line 5234 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 6:
#line 5236 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 8:
#line 5238 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 9:
#line 5240 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 10:
#line 5242 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 11:
#line 1556 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3;
#line 5246 "parse_tree.write_module_interface_files.c"
                          break;
#line 5248 "parse_tree.write_module_interface_files.c"
                        case (MR_Integer) 4:
#line 5250 "parse_tree.write_module_interface_files.c"
                          {
#line 5252 "parse_tree.write_module_interface_files.c"
                            MR_Word parse_tree__write_module_interface_files__ItemPragma_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 1)));
#line 5254 "parse_tree.write_module_interface_files.c"
                            MR_Word parse_tree__write_module_interface_files__Pragma_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_32, (MR_Integer) 0)));
#line 1574 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_32, (MR_Integer) 1)));
#line 1574 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_32, (MR_Integer) 2)));
#line 1574 "write_module_interface_files.m"
                            MR_Integer parse_tree__write_module_interface_files__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_32, (MR_Integer) 3)));
#line 1578 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__V_37_37;

#line 1578 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_33, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1578 "write_module_interface_files.m"
                            if (parse_tree__write_module_interface_files__succeeded)
#line 1578 "write_module_interface_files.m"
                              {
#line 1578 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_33, (MR_Integer) 1)));
#line 1554 "write_module_interface_files.m"
                                {
#line 1554 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                                }
#line 1578 "write_module_interface_files.m"
                              }
#line 1578 "write_module_interface_files.m"
                            else
#line 1556 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3;
#line 5284 "parse_tree.write_module_interface_files.c"
                          }
#line 5286 "parse_tree.write_module_interface_files.c"
                          break;
#line 5288 "parse_tree.write_module_interface_files.c"
                      }
#line 5290 "parse_tree.write_module_interface_files.c"
                      break;
#line 5292 "parse_tree.write_module_interface_files.c"
                  }
#line 1550 "write_module_interface_files.m"
              }
#line 1559 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1559 "write_module_interface_files.m"
            {
#line 1559 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2 = parse_tree__write_module_interface_files__Items_11;
#line 1559 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0__tmp_copy_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_17_17;

#line 1559 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0__tmp_copy_3;
#line 1559 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__2_2 = parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2;
#line 1559 "write_module_interface_files.m"
            }
#line 1559 "write_module_interface_files.m"
            continue;
#line 1541 "write_module_interface_files.m"
          }
#line 1540 "write_module_interface_files.m"
      }
#line 1540 "write_module_interface_files.m"
      break;
#line 1540 "write_module_interface_files.m"
    }
#line 1537 "write_module_interface_files.m"
}

#line 1506 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_from_raw_item_blocks_4_p_0(
#line 1506 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1506 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1506 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3,
#line 1506 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__4_4)
#line 1506 "write_module_interface_files.m"
{
#line 1509 "write_module_interface_files.m"
  {
#line 1509 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1509 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1509 "write_module_interface_files.m"
      {
#line 1509 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1509 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1509 "write_module_interface_files.m"
      }
#line 1509 "write_module_interface_files.m"
    else
#line 1511 "write_module_interface_files.m"
      {
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_22_22;
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_11_31;
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__RawItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__RawItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__IntItemsTail_11;
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ImpItemsTail_12;
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Section_13;
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items0_15;
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemsCord_16;
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items1_17;
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items_18;
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NeedImports_25;
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NeedForeignImports_26;
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemsCord_27;
#line 1511 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_30_30;
#line 1514 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___Context_14;

#line 1512 "write_module_interface_files.m"
        {
#line 1512 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__get_short_interface_from_raw_item_blocks_4_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__RawItemBlocks_8, &parse_tree__write_module_interface_files__IntItemsTail_11, &parse_tree__write_module_interface_files__ImpItemsTail_12);
        }
#line 1514 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__Section_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawItemBlock_7, (MR_Integer) 0)));
#line 1514 "write_module_interface_files.m"
        parse_tree__write_module_interface_files___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawItemBlock_7, (MR_Integer) 1)));
#line 1514 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__Items0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawItemBlock_7, (MR_Integer) 2)));
#line 5402 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1515 "write_module_interface_files.m"
        {
#line 1515 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_21_21 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_22_22);
        }
#line 1515 "write_module_interface_files.m"
        {
#line 1515 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__get_short_interface_from_items_acc_4_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__Items0_15, parse_tree__write_module_interface_files__V_21_21, &parse_tree__write_module_interface_files__ItemsCord_16);
        }
#line 1516 "write_module_interface_files.m"
        {
#line 1516 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Items1_17 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_22_22, parse_tree__write_module_interface_files__ItemsCord_16);
        }
#line 1608 "write_module_interface_files.m"
        {
#line 1608 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__find_need_imports_5_p_0(parse_tree__write_module_interface_files__Items1_17, (MR_Integer) 0, &parse_tree__write_module_interface_files__NeedImports_25, (MR_Integer) 0, &parse_tree__write_module_interface_files__NeedForeignImports_26);
        }
#line 5424 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeCtorInfo_11_31 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1612 "write_module_interface_files.m"
        {
#line 1612 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_30_30 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_11_31);
        }
#line 1611 "write_module_interface_files.m"
        {
#line 1611 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__filter_items_for_import_needs_5_p_0(parse_tree__write_module_interface_files__Items1_17, parse_tree__write_module_interface_files__NeedImports_25, parse_tree__write_module_interface_files__NeedForeignImports_26, parse_tree__write_module_interface_files__V_30_30, &parse_tree__write_module_interface_files__ItemsCord_27);
        }
#line 1613 "write_module_interface_files.m"
        {
#line 1613 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Items_18 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_11_31, parse_tree__write_module_interface_files__ItemsCord_27);
        }
#line 1524 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__Items_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1521 "write_module_interface_files.m"
          {
#line 1522 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__HeadVar__3_3 = parse_tree__write_module_interface_files__IntItemsTail_11;
#line 1523 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__HeadVar__4_4 = parse_tree__write_module_interface_files__ImpItemsTail_12;
#line 1521 "write_module_interface_files.m"
          }
#line 1524 "write_module_interface_files.m"
        else
#line 1530 "write_module_interface_files.m"
#line 1530 "write_module_interface_files.m"
          switch (parse_tree__write_module_interface_files__Section_13) {
#line 1530 "write_module_interface_files.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1530 "write_module_interface_files.m"
            case (MR_Integer) 1:
#line 1531 "write_module_interface_files.m"
              {
#line 1532 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__HeadVar__3_3 = parse_tree__write_module_interface_files__IntItemsTail_11;
#line 1533 "write_module_interface_files.m"
                {
#line 1533 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_22_22, parse_tree__write_module_interface_files__Items_18, parse_tree__write_module_interface_files__ImpItemsTail_12);
                }
#line 1531 "write_module_interface_files.m"
              }
#line 1530 "write_module_interface_files.m"
              break;
#line 1530 "write_module_interface_files.m"
            case (MR_Integer) 0:
#line 1527 "write_module_interface_files.m"
              {
#line 1528 "write_module_interface_files.m"
                {
#line 1528 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_22_22, parse_tree__write_module_interface_files__Items_18, parse_tree__write_module_interface_files__IntItemsTail_11);
                }
#line 1529 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__HeadVar__4_4 = parse_tree__write_module_interface_files__ImpItemsTail_12;
#line 1527 "write_module_interface_files.m"
              }
#line 1530 "write_module_interface_files.m"
              break;
#line 1530 "write_module_interface_files.m"
          }
#line 1511 "write_module_interface_files.m"
      }
#line 1509 "write_module_interface_files.m"
  }
#line 1506 "write_module_interface_files.m"
}

#line 1413 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__clause_in_interface_warning_2_f_0(
#line 1413 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__ClauseOrPragma_4,
#line 1413 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Context_5)
#line 1413 "write_module_interface_files.m"
{
#line 1415 "write_module_interface_files.m"
  {
#line 1415 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1415 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Spec_6;
#line 1415 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Pieces_7;
#line 1415 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_10_10;
#line 1415 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 1415 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1415 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1415 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1415 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_21_21;

#line 1416 "write_module_interface_files.m"
    {
#line 1416 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1416 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1416 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__V_11_11, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ClauseOrPragma_4));
#line 1416 "write_module_interface_files.m"
    }
#line 1416 "write_module_interface_files.m"
    {
#line 1416 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1416 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_10_10, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_11_11));
#line 1416 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[11])));
#line 1416 "write_module_interface_files.m"
    }
#line 1416 "write_module_interface_files.m"
    {
#line 1416 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1416 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_2[8])));
#line 1416 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Pieces_7, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_10_10));
#line 1416 "write_module_interface_files.m"
    }
#line 1419 "write_module_interface_files.m"
    {
#line 1419 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1419 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Pieces_7));
#line 1419 "write_module_interface_files.m"
    }
#line 1419 "write_module_interface_files.m"
    {
#line 1419 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1419 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_21_21));
#line 1419 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1419 "write_module_interface_files.m"
    }
#line 1419 "write_module_interface_files.m"
    {
#line 1419 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1419 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_19_19, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Context_5));
#line 1419 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_19_19, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_20_20));
#line 1419 "write_module_interface_files.m"
    }
#line 1419 "write_module_interface_files.m"
    {
#line 1419 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1419 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_18_18, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_19_19));
#line 1419 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1419 "write_module_interface_files.m"
    }
#line 1418 "write_module_interface_files.m"
    {
#line 1418 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1418 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1418 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1418 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_6, 2) = ((MR_Box) (parse_tree__write_module_interface_files__V_18_18));
#line 1418 "write_module_interface_files.m"
    }
#line 1415 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Spec_6;
#line 1415 "write_module_interface_files.m"
  }
#line 1413 "write_module_interface_files.m"
}

#line 1369 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_loop_5_p_0(
#line 1369 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1369 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 1369 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3,
#line 1369 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4,
#line 1369 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_5)
#line 1369 "write_module_interface_files.m"
{
#line 1373 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1373 "write_module_interface_files.m"
    {
#line 1373 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1373 "write_module_interface_files.m"
      {
#line 1373 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1373 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1373 "write_module_interface_files.m"
          {
#line 1373 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4;
#line 1373 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 1373 "write_module_interface_files.m"
          }
#line 1373 "write_module_interface_files.m"
        else
#line 1375 "write_module_interface_files.m"
          {
#line 1375 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1375 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1375 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42;
#line 1375 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46;

#line 1382 "write_module_interface_files.m"
#line 1382 "write_module_interface_files.m"
            switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item0_12)) {
#line 1382 "write_module_interface_files.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1382 "write_module_interface_files.m"
              case (MR_Integer) 0:
#line 1382 "write_module_interface_files.m"
              case (MR_Integer) 2:
#line 1408 "write_module_interface_files.m"
                {
#line 1409 "write_module_interface_files.m"
                  {
#line 1409 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_12));
#line 1409 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 1409 "write_module_interface_files.m"
                  }
#line 1408 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4;
#line 1408 "write_module_interface_files.m"
                }
#line 1382 "write_module_interface_files.m"
                break;
#line 1382 "write_module_interface_files.m"
              case (MR_Integer) 1:
#line 1378 "write_module_interface_files.m"
                {
#line 1378 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__ItemClause0_16 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item0_12), (MR_Integer) 1);
#line 1378 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 6)));
#line 1378 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Spec_18;
#line 1378 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_74_74;
#line 1378 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_75_75;
#line 1379 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 0)));
#line 1379 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 1)));
#line 1379 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 2)));
#line 1379 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 3)));
#line 1379 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 4)));
#line 1379 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 5)));
#line 1379 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 7)));

#line 1419 "write_module_interface_files.m"
                  {
#line 1419 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1419 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_75_75, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Context_17));
#line 1419 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[14])));
#line 1419 "write_module_interface_files.m"
                  }
#line 1419 "write_module_interface_files.m"
                  {
#line 1419 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1419 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_74_74, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_75_75));
#line 1419 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1419 "write_module_interface_files.m"
                  }
#line 1418 "write_module_interface_files.m"
                  {
#line 1418 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1418 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1418 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1418 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_18, 2) = ((MR_Box) (parse_tree__write_module_interface_files__V_74_74));
#line 1418 "write_module_interface_files.m"
                  }
#line 1381 "write_module_interface_files.m"
                  {
#line 1381 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1381 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Spec_18));
#line 1381 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4));
#line 1381 "write_module_interface_files.m"
                  }
#line 1378 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 1378 "write_module_interface_files.m"
                }
#line 1382 "write_module_interface_files.m"
                break;
#line 1382 "write_module_interface_files.m"
              case (MR_Integer) 3:
#line 1382 "write_module_interface_files.m"
#line 1382 "write_module_interface_files.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item0_12, (MR_Integer) 0)))) {
#line 1382 "write_module_interface_files.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1382 "write_module_interface_files.m"
                  case (MR_Integer) 0:
#line 1382 "write_module_interface_files.m"
                  case (MR_Integer) 1:
#line 1382 "write_module_interface_files.m"
                  case (MR_Integer) 2:
#line 1382 "write_module_interface_files.m"
                  case (MR_Integer) 3:
#line 1382 "write_module_interface_files.m"
                  case (MR_Integer) 5:
#line 1382 "write_module_interface_files.m"
                  case (MR_Integer) 6:
#line 1382 "write_module_interface_files.m"
                  case (MR_Integer) 7:
#line 1382 "write_module_interface_files.m"
                  case (MR_Integer) 8:
#line 1382 "write_module_interface_files.m"
                  case (MR_Integer) 9:
#line 1382 "write_module_interface_files.m"
                  case (MR_Integer) 10:
#line 1382 "write_module_interface_files.m"
                  case (MR_Integer) 11:
#line 1408 "write_module_interface_files.m"
                    {
#line 1409 "write_module_interface_files.m"
                      {
#line 1409 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_12));
#line 1409 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 1409 "write_module_interface_files.m"
                      }
#line 1408 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4;
#line 1408 "write_module_interface_files.m"
                    }
#line 1382 "write_module_interface_files.m"
                    break;
#line 1382 "write_module_interface_files.m"
                  case (MR_Integer) 4:
#line 1383 "write_module_interface_files.m"
                    {
#line 1383 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ItemPragma_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item0_12, (MR_Integer) 1)));
#line 1383 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Pragma_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 0)));
#line 1383 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__AllowedInInterface_23;
#line 1383 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Context_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 2)));
#line 1384 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 1)));
#line 1384 "write_module_interface_files.m"
                      MR_Integer parse_tree__write_module_interface_files__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 3)));

#line 1385 "write_module_interface_files.m"
                      {
#line 1385 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__AllowedInInterface_23 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(parse_tree__write_module_interface_files__Pragma_20);
                      }
#line 1390 "write_module_interface_files.m"
#line 1390 "write_module_interface_files.m"
                      switch (parse_tree__write_module_interface_files__AllowedInInterface_23) {
#line 1390 "write_module_interface_files.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1390 "write_module_interface_files.m"
                        case (MR_Integer) 0:
#line 1387 "write_module_interface_files.m"
                          {
#line 1387 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__Spec_49;

#line 1388 "write_module_interface_files.m"
                            {
#line 1388 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__Spec_49 = parse_tree__write_module_interface_files__clause_in_interface_warning_2_f_0((MR_String) "pragma", parse_tree__write_module_interface_files__Context_51);
                            }
#line 1389 "write_module_interface_files.m"
                            {
#line 1389 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "write_module_interface_files.m"
                              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Spec_49));
#line 1389 "write_module_interface_files.m"
                              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4));
#line 1389 "write_module_interface_files.m"
                            }
#line 1387 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 1387 "write_module_interface_files.m"
                          }
#line 1390 "write_module_interface_files.m"
                          break;
#line 1390 "write_module_interface_files.m"
                        case (MR_Integer) 1:
#line 1391 "write_module_interface_files.m"
                          {
#line 1392 "write_module_interface_files.m"
                            {
#line 1392 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "write_module_interface_files.m"
                              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_12));
#line 1392 "write_module_interface_files.m"
                              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 1392 "write_module_interface_files.m"
                            }
#line 1391 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4;
#line 1391 "write_module_interface_files.m"
                          }
#line 1390 "write_module_interface_files.m"
                          break;
#line 1390 "write_module_interface_files.m"
                      }
#line 1383 "write_module_interface_files.m"
                    }
#line 1382 "write_module_interface_files.m"
                    break;
#line 1382 "write_module_interface_files.m"
                }
#line 1382 "write_module_interface_files.m"
                break;
#line 1382 "write_module_interface_files.m"
            }
#line 1411 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1411 "write_module_interface_files.m"
            {
#line 1411 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items0_13;
#line 1411 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42;
#line 1411 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0__tmp_copy_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_46_46;

#line 1411 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 1411 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2;
#line 1411 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1411 "write_module_interface_files.m"
            }
#line 1411 "write_module_interface_files.m"
            continue;
#line 1375 "write_module_interface_files.m"
          }
#line 1373 "write_module_interface_files.m"
      }
#line 1373 "write_module_interface_files.m"
      break;
#line 1373 "write_module_interface_files.m"
    }
#line 1369 "write_module_interface_files.m"
}

#line 1362 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_4_p_0(
#line 1362 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_5,
#line 1362 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_6,
#line 1362 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_9,
#line 1362 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_10)
#line 1362 "write_module_interface_files.m"
{
#line 1365 "write_module_interface_files.m"
  {
#line 1365 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1365 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems_8;

#line 1366 "write_module_interface_files.m"
    {
#line 1366 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_loop_5_p_0(parse_tree__write_module_interface_files__Items0_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_8, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_9, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_10);
    }
#line 1367 "write_module_interface_files.m"
    {
#line 1367 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_8, parse_tree__write_module_interface_files__Items_6);
#line 1367 "write_module_interface_files.m"
      return;
    }
#line 1365 "write_module_interface_files.m"
  }
#line 1362 "write_module_interface_files.m"
}

#line 1328 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__foreign_enum_is_local_2_p_0(
#line 1328 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_3,
#line 1328 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4)
#line 1328 "write_module_interface_files.m"
{
#line 1342 "write_module_interface_files.m"
  {
#line 1342 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1342 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtor_12;
#line 1332 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemPragma_5;
#line 1332 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Pragma_6;
#line 1332 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__FEInfo_10;
#line 1333 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_7_7;
#line 1333 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;
#line 1333 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__V_9_9;
#line 1335 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___Lang_11;
#line 1335 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___Values_13;

#line 1332 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1332 "write_module_interface_files.m"
      {
#line 1332 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemPragma_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 1)));
#line 1333 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__Pragma_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 0)));
#line 1333 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 1)));
#line 1333 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 2)));
#line 1333 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 3)));
#line 1334 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1334 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1334 "write_module_interface_files.m"
          {
#line 1334 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__FEInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_6, (MR_Integer) 1)));
#line 1335 "write_module_interface_files.m"
            parse_tree__write_module_interface_files___Lang_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FEInfo_10, (MR_Integer) 0)));
#line 1335 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FEInfo_10, (MR_Integer) 1)));
#line 1335 "write_module_interface_files.m"
            parse_tree__write_module_interface_files___Values_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FEInfo_10, (MR_Integer) 2)));
#line 1335 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1334 "write_module_interface_files.m"
          }
#line 1332 "write_module_interface_files.m"
      }
#line 1342 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1340 "write_module_interface_files.m"
      {
#line 1340 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Defns_14;
#line 1340 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv0_Defns_14;
#line 1341 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_17_17;
#line 1341 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1341 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1341 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_16_16;
#line 1341 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_15_15;

#line 1340 "write_module_interface_files.m"
        {
#line 1340 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0], parse_tree__write_module_interface_files__TypeDefnMap_3, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv0_Defns_14);
        }
#line 1340 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1340 "write_module_interface_files.m"
          {
#line 1340 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__Defns_14 = ((MR_Word) parse_tree__write_module_interface_files__conv0_Defns_14);
#line 1340 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1340 "write_module_interface_files.m"
          }
#line 1340 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1340 "write_module_interface_files.m"
          {
#line 1341 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Defns_14)) == (MR_mktag((MR_Integer) 1)));
#line 1341 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1341 "write_module_interface_files.m"
              {
#line 1341 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Defns_14, (MR_Integer) 0)));
#line 1341 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Defns_14, (MR_Integer) 1)));
#line 1341 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 0)));
#line 1341 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 1)));
#line 1341 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__V_18_18)) == (MR_mktag((MR_Integer) 2)));
#line 1341 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1341 "write_module_interface_files.m"
                  {
#line 1341 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__write_module_interface_files__V_18_18, (MR_Integer) 0)));
#line 1341 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1341 "write_module_interface_files.m"
                  }
#line 1341 "write_module_interface_files.m"
              }
#line 1341 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = !(parse_tree__write_module_interface_files__succeeded);
#line 1340 "write_module_interface_files.m"
          }
#line 1340 "write_module_interface_files.m"
      }
#line 1342 "write_module_interface_files.m"
    else
#line 1343 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1342 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1342 "write_module_interface_files.m"
  }
#line 1328 "write_module_interface_files.m"
}

#line 1326 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0_1(
#line 1326 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1326 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1326 "write_module_interface_files.m"
{
#line 1326 "write_module_interface_files.m"
  {
#line 1326 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1326 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1326 "write_module_interface_files.m"
    {
#line 1326 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__foreign_enum_is_local_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1326 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1326 "write_module_interface_files.m"
  }
#line 1326 "write_module_interface_files.m"
}

#line 1322 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0(
#line 1322 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntTypeMap_4,
#line 1322 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_6,
#line 1322 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_7)
#line 1322 "write_module_interface_files.m"
{
#line 1325 "write_module_interface_files.m"
  {
#line 1325 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1325 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 1326 "write_module_interface_files.m"
    {
#line 1326 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1326 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[4]));
#line 1326 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0_1));
#line 1326 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1326 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 3) = ((MR_Box) (parse_tree__write_module_interface_files__IntTypeMap_4));
#line 1326 "write_module_interface_files.m"
    }
#line 1326 "write_module_interface_files.m"
    {
#line 1326 "write_module_interface_files.m"
      mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__V_8_8, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_6, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_7);
#line 1326 "write_module_interface_files.m"
      return;
    }
#line 1325 "write_module_interface_files.m"
  }
#line 1322 "write_module_interface_files.m"
}

#line 1281 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_5(
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1281 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1281 "write_module_interface_files.m"
{
#line 1281 "write_module_interface_files.m"
  {
#line 1281 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1281 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_24;

#line 1281 "write_module_interface_files.m"
    {
#line 1281 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_24);
    }
#line 1281 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_24));
#line 1281 "write_module_interface_files.m"
  }
#line 1281 "write_module_interface_files.m"
}

#line 1281 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_4(
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1281 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1281 "write_module_interface_files.m"
{
#line 1281 "write_module_interface_files.m"
  {
#line 1281 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1281 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_24;

#line 1281 "write_module_interface_files.m"
    {
#line 1281 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_24);
    }
#line 1281 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_24));
#line 1281 "write_module_interface_files.m"
  }
#line 1281 "write_module_interface_files.m"
}

#line 1281 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_3(
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1281 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1281 "write_module_interface_files.m"
{
#line 1281 "write_module_interface_files.m"
  {
#line 1281 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1281 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_24;

#line 1281 "write_module_interface_files.m"
    {
#line 1281 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_24);
    }
#line 1281 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_24));
#line 1281 "write_module_interface_files.m"
  }
#line 1281 "write_module_interface_files.m"
}

#line 1281 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_2(
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1281 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1281 "write_module_interface_files.m"
{
#line 1281 "write_module_interface_files.m"
  {
#line 1281 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1281 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_24;

#line 1281 "write_module_interface_files.m"
    {
#line 1281 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_24);
    }
#line 1281 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_24));
#line 1281 "write_module_interface_files.m"
  }
#line 1281 "write_module_interface_files.m"
}

#line 1281 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0_1(
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1281 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1281 "write_module_interface_files.m"
{
#line 1281 "write_module_interface_files.m"
  {
#line 1281 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1281 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24;

#line 1281 "write_module_interface_files.m"
    {
#line 1281 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24);
    }
#line 1281 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24));
#line 1281 "write_module_interface_files.m"
  }
#line 1281 "write_module_interface_files.m"
}

#line 1284 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(
#line 1284 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ArgType_4,
#line 1284 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23,
#line 1284 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24)
#line 1284 "write_module_interface_files.m"
{
#line 1291 "write_module_interface_files.m"
  {
#line 1291 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1291 "write_module_interface_files.m"
#line 1291 "write_module_interface_files.m"
    switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__ArgType_4)) {
#line 1291 "write_module_interface_files.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1291 "write_module_interface_files.m"
      case (MR_Integer) 0:
#line 1291 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23;
#line 1291 "write_module_interface_files.m"
        break;
#line 1291 "write_module_interface_files.m"
      case (MR_Integer) 1:
#line 1295 "write_module_interface_files.m"
        {
#line 1295 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 0)));
#line 1295 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1295 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleName_12;
#line 1295 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27_27;
#line 1295 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1281 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_Modules_24;

#line 1296 "write_module_interface_files.m"
          {
#line 1296 "write_module_interface_files.m"
            mdbcomp__sym_name__det_sym_name_get_module_name_2_p_0(parse_tree__write_module_interface_files__TypeName_9, &parse_tree__write_module_interface_files__ModuleName_12);
          }
#line 1297 "write_module_interface_files.m"
          {
#line 1297 "write_module_interface_files.m"
            mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23, &parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27_27);
          }
#line 1281 "write_module_interface_files.m"
          {
#line 1281 "write_module_interface_files.m"
            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[16], parse_tree__write_module_interface_files__Args_10, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27_27)), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_Modules_24);
          }
#line 1281 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_Modules_24);
#line 1295 "write_module_interface_files.m"
        }
#line 1291 "write_module_interface_files.m"
        break;
#line 1291 "write_module_interface_files.m"
      case (MR_Integer) 2:
#line 1292 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23;
#line 1291 "write_module_interface_files.m"
        break;
#line 1291 "write_module_interface_files.m"
      case (MR_Integer) 3:
#line 1291 "write_module_interface_files.m"
#line 1291 "write_module_interface_files.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 0)))) {
#line 1291 "write_module_interface_files.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1291 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 1315 "write_module_interface_files.m"
            {
#line 1315 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1301 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1281 "write_module_interface_files.m"
              MR_Box parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_24;

#line 1281 "write_module_interface_files.m"
              {
#line 1281 "write_module_interface_files.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[19], parse_tree__write_module_interface_files__Args_33, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_24);
              }
#line 1281 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_24);
#line 1315 "write_module_interface_files.m"
            }
#line 1291 "write_module_interface_files.m"
            break;
#line 1291 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 1315 "write_module_interface_files.m"
            {
#line 1315 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Args0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1315 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__MaybeRetType_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1315 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Args_31;
#line 1307 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 3)));
#line 1281 "write_module_interface_files.m"
              MR_Box parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_24;

#line 1311 "write_module_interface_files.m"
              if ((parse_tree__write_module_interface_files__MaybeRetType_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1313 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Args_31 = parse_tree__write_module_interface_files__Args0_18;
#line 1311 "write_module_interface_files.m"
              else
#line 1309 "write_module_interface_files.m"
                {
#line 1309 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__RetType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__MaybeRetType_19, (MR_Integer) 0)));

#line 1310 "write_module_interface_files.m"
                  {
#line 1310 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__Args_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_31, 0) = ((MR_Box) (parse_tree__write_module_interface_files__RetType_22));
#line 1310 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_31, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Args0_18));
#line 1310 "write_module_interface_files.m"
                  }
#line 1309 "write_module_interface_files.m"
                }
#line 1281 "write_module_interface_files.m"
              {
#line 1281 "write_module_interface_files.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[17], parse_tree__write_module_interface_files__Args_31, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_24);
              }
#line 1281 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_24);
#line 1315 "write_module_interface_files.m"
            }
#line 1291 "write_module_interface_files.m"
            break;
#line 1291 "write_module_interface_files.m"
          case (MR_Integer) 2:
#line 1315 "write_module_interface_files.m"
            {
#line 1315 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Args_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1303 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1303 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 3)));
#line 1281 "write_module_interface_files.m"
              MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_24;

#line 1281 "write_module_interface_files.m"
              {
#line 1281 "write_module_interface_files.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[15], parse_tree__write_module_interface_files__Args_29, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_24);
              }
#line 1281 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_24);
#line 1315 "write_module_interface_files.m"
            }
#line 1291 "write_module_interface_files.m"
            break;
#line 1291 "write_module_interface_files.m"
          case (MR_Integer) 3:
#line 1315 "write_module_interface_files.m"
            {
#line 1315 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__KindedType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1315 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Args_32;
#line 1305 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1281 "write_module_interface_files.m"
              MR_Box parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_Modules_24;

#line 1305 "write_module_interface_files.m"
              {
#line 1305 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Args_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_32, 0) = ((MR_Box) (parse_tree__write_module_interface_files__KindedType_16));
#line 1305 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1305 "write_module_interface_files.m"
              }
#line 1281 "write_module_interface_files.m"
              {
#line 1281 "write_module_interface_files.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[18], parse_tree__write_module_interface_files__Args_32, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_Modules_24);
              }
#line 1281 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_Modules_24);
#line 1315 "write_module_interface_files.m"
            }
#line 1291 "write_module_interface_files.m"
            break;
#line 1291 "write_module_interface_files.m"
        }
#line 1291 "write_module_interface_files.m"
        break;
#line 1291 "write_module_interface_files.m"
    }
#line 1291 "write_module_interface_files.m"
  }
#line 1284 "write_module_interface_files.m"
}

#line 1281 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0_1(
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1281 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1281 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1281 "write_module_interface_files.m"
{
#line 1281 "write_module_interface_files.m"
  {
#line 1281 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1281 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24;

#line 1281 "write_module_interface_files.m"
    {
#line 1281 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24);
    }
#line 1281 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24));
#line 1281 "write_module_interface_files.m"
  }
#line 1281 "write_module_interface_files.m"
}

#line 1262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0(
#line 1262 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Constraint_4,
#line 1262 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1262 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12)
#line 1262 "write_module_interface_files.m"
{
#line 1265 "write_module_interface_files.m"
  {
#line 1265 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1265 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Constraint_4, (MR_Integer) 0)));
#line 1265 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Constraint_4, (MR_Integer) 1)));
#line 1265 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_16_16;
#line 1281 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_12;

#line 1271 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ClassName_6)) == (MR_mktag((MR_Integer) 1))))
#line 1269 "write_module_interface_files.m"
      {
#line 1269 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ClassName_6, (MR_Integer) 0)));
#line 1269 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ClassName_6, (MR_Integer) 1)));

#line 1270 "write_module_interface_files.m"
        {
#line 1270 "write_module_interface_files.m"
          mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_8)), parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11, &parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_16_16);
        }
#line 1269 "write_module_interface_files.m"
      }
#line 1271 "write_module_interface_files.m"
    else
#line 1272 "write_module_interface_files.m"
      {
#line 1273 "write_module_interface_files.m"
        {
#line 1273 "write_module_interface_files.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.accumulate_requirements_of_impl_from_constraint\'/3", (MR_String) "unknown typeclass in constraint");
#line 1273 "write_module_interface_files.m"
          return;
        }
#line 1272 "write_module_interface_files.m"
      }
#line 1281 "write_module_interface_files.m"
    {
#line 1281 "write_module_interface_files.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[14], parse_tree__write_module_interface_files__ArgTypes_7, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_16_16)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_12);
    }
#line 1281 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_12);
#line 1265 "write_module_interface_files.m"
  }
#line 1262 "write_module_interface_files.m"
}

#line 1242 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0_1(
#line 1242 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1242 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1242 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1242 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1242 "write_module_interface_files.m"
{
#line 1242 "write_module_interface_files.m"
  {
#line 1242 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1242 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12;

#line 1242 "write_module_interface_files.m"
    {
#line 1242 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_requirements_of_impl_from_constraint_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12);
    }
#line 1242 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12));
#line 1242 "write_module_interface_files.m"
  }
#line 1242 "write_module_interface_files.m"
}

#line 1235 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0(
#line 1235 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4,
#line 1235 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22,
#line 1235 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23)
#line 1235 "write_module_interface_files.m"
{
#line 1240 "write_module_interface_files.m"
  {
#line 1240 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1240 "write_module_interface_files.m"
#line 1240 "write_module_interface_files.m"
    switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) {
#line 1240 "write_module_interface_files.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1240 "write_module_interface_files.m"
      case (MR_Integer) 0:
#line 1245 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1240 "write_module_interface_files.m"
        break;
#line 1240 "write_module_interface_files.m"
      case (MR_Integer) 1:
#line 1246 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1240 "write_module_interface_files.m"
        break;
#line 1240 "write_module_interface_files.m"
      case (MR_Integer) 2:
#line 1247 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1240 "write_module_interface_files.m"
        break;
#line 1240 "write_module_interface_files.m"
      case (MR_Integer) 3:
#line 1240 "write_module_interface_files.m"
#line 1240 "write_module_interface_files.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) {
#line 1240 "write_module_interface_files.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1240 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 1248 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1240 "write_module_interface_files.m"
            break;
#line 1240 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 1249 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1240 "write_module_interface_files.m"
            break;
#line 1240 "write_module_interface_files.m"
          case (MR_Integer) 2:
#line 1250 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1240 "write_module_interface_files.m"
            break;
#line 1240 "write_module_interface_files.m"
          case (MR_Integer) 3:
#line 1251 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1240 "write_module_interface_files.m"
            break;
#line 1240 "write_module_interface_files.m"
          case (MR_Integer) 4:
#line 1252 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1240 "write_module_interface_files.m"
            break;
#line 1240 "write_module_interface_files.m"
          case (MR_Integer) 5:
#line 1253 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1240 "write_module_interface_files.m"
            break;
#line 1240 "write_module_interface_files.m"
          case (MR_Integer) 6:
#line 1240 "write_module_interface_files.m"
            {
#line 1240 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ItemTypeClass_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 1)));
#line 1240 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Constraints_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 2)));
#line 1241 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 0)));
#line 1241 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 1)));
#line 1241 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 3)));
#line 1241 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 4)));
#line 1241 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 5)));
#line 1241 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 6)));
#line 1241 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 7)));
#line 1242 "write_module_interface_files.m"
              MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_23;

#line 1242 "write_module_interface_files.m"
              {
#line 1242 "write_module_interface_files.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[13], parse_tree__write_module_interface_files__Constraints_7, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_23);
              }
#line 1242 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_23);
#line 1240 "write_module_interface_files.m"
            }
#line 1240 "write_module_interface_files.m"
            break;
#line 1240 "write_module_interface_files.m"
          case (MR_Integer) 7:
#line 1254 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1240 "write_module_interface_files.m"
            break;
#line 1240 "write_module_interface_files.m"
          case (MR_Integer) 8:
#line 1255 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1240 "write_module_interface_files.m"
            break;
#line 1240 "write_module_interface_files.m"
          case (MR_Integer) 9:
#line 1256 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1240 "write_module_interface_files.m"
            break;
#line 1240 "write_module_interface_files.m"
          case (MR_Integer) 10:
#line 1257 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1240 "write_module_interface_files.m"
            break;
#line 1240 "write_module_interface_files.m"
          case (MR_Integer) 11:
#line 1258 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_22;
#line 1240 "write_module_interface_files.m"
            break;
#line 1240 "write_module_interface_files.m"
        }
#line 1240 "write_module_interface_files.m"
        break;
#line 1240 "write_module_interface_files.m"
    }
#line 1240 "write_module_interface_files.m"
  }
#line 1235 "write_module_interface_files.m"
}

#line 1196 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_in_section_loop_6_p_0(
#line 1196 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Section_1,
#line 1196 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1196 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3,
#line 1196 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_4,
#line 1196 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0_5,
#line 1196 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_6)
#line 1196 "write_module_interface_files.m"
{
#line 1200 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1200 "write_module_interface_files.m"
    {
#line 1200 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1200 "write_module_interface_files.m"
      {
#line 1200 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1200 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1200 "write_module_interface_files.m"
          {
#line 1200 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0_5;
#line 1200 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3;
#line 1200 "write_module_interface_files.m"
          }
#line 1200 "write_module_interface_files.m"
        else
#line 1202 "write_module_interface_files.m"
          {
#line 1202 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 1202 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 1202 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_33_33;
#line 1202 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_34_34;
#line 1215 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_19;

#line 1203 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_15)) == (MR_mktag((MR_Integer) 2)));
#line 1203 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1203 "write_module_interface_files.m"
              {
#line 1203 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ItemTypeDefn_19 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_15), (MR_Integer) 2);
#line 1204 "write_module_interface_files.m"
                {
#line 1204 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_19, (MR_Integer) 0)));
#line 1204 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_19, (MR_Integer) 1)));
#line 1204 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Body_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_19, (MR_Integer) 2)));
#line 1204 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__TypeCtor_26;
#line 1204 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_31_31;
#line 1204 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_19, (MR_Integer) 3)));
#line 1204 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_19, (MR_Integer) 4)));
#line 1204 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_19, (MR_Integer) 5)));

#line 1205 "write_module_interface_files.m"
                  {
#line 1205 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_31_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[3], parse_tree__write_module_interface_files__Args_21);
                  }
#line 1205 "write_module_interface_files.m"
                  {
#line 1205 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__TypeCtor_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1205 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_26, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Name_20));
#line 1205 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_26, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_31_31));
#line 1205 "write_module_interface_files.m"
                  }
#line 1210 "write_module_interface_files.m"
#line 1210 "write_module_interface_files.m"
                  switch (parse_tree__write_module_interface_files__Section_1) {
#line 1210 "write_module_interface_files.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1210 "write_module_interface_files.m"
                    case (MR_Integer) 1:
#line 1211 "write_module_interface_files.m"
                      {
#line 1211 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__V_47_47;

#line 1226 "write_module_interface_files.m"
                        {
#line 1226 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Body_22));
#line 1226 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_19));
#line 1226 "write_module_interface_files.m"
                        }
#line 1226 "write_module_interface_files.m"
                        {
#line 1226 "write_module_interface_files.m"
                          mercury__multi_map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_26)), ((MR_Box) (parse_tree__write_module_interface_files__V_47_47)), parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0_5, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_34_34);
                        }
#line 1211 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_33_33 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3;
#line 1211 "write_module_interface_files.m"
                      }
#line 1210 "write_module_interface_files.m"
                      break;
#line 1210 "write_module_interface_files.m"
                    case (MR_Integer) 0:
#line 1207 "write_module_interface_files.m"
                      {
#line 1207 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__V_57_57;

#line 1208 "write_module_interface_files.m"
                        {
#line 1208 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_33_33 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (parse_tree__write_module_interface_files__Item_15)));
                        }
#line 1226 "write_module_interface_files.m"
                        {
#line 1226 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_57_57, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Body_22));
#line 1226 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_57_57, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_19));
#line 1226 "write_module_interface_files.m"
                        }
#line 1226 "write_module_interface_files.m"
                        {
#line 1226 "write_module_interface_files.m"
                          mercury__multi_map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_26)), ((MR_Box) (parse_tree__write_module_interface_files__V_57_57)), parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0_5, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_34_34);
                        }
#line 1207 "write_module_interface_files.m"
                      }
#line 1210 "write_module_interface_files.m"
                      break;
#line 1210 "write_module_interface_files.m"
                  }
#line 1204 "write_module_interface_files.m"
                }
#line 1203 "write_module_interface_files.m"
              }
#line 1203 "write_module_interface_files.m"
            else
#line 1216 "write_module_interface_files.m"
              {
#line 1216 "write_module_interface_files.m"
                {
#line 1216 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_33_33 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3, ((MR_Box) (parse_tree__write_module_interface_files__Item_15)));
                }
#line 1216 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_34_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0_5;
#line 1216 "write_module_interface_files.m"
              }
#line 1218 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1218 "write_module_interface_files.m"
            {
#line 1218 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2 = parse_tree__write_module_interface_files__Items_16;
#line 1218 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0__tmp_copy_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_33_33;
#line 1218 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0__tmp_copy_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_34_34;

#line 1218 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypesMap_0__tmp_copy_5;
#line 1218 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_ItemsCord_0__tmp_copy_3;
#line 1218 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__2_2 = parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2;
#line 1218 "write_module_interface_files.m"
            }
#line 1218 "write_module_interface_files.m"
            continue;
#line 1202 "write_module_interface_files.m"
          }
#line 1200 "write_module_interface_files.m"
      }
#line 1200 "write_module_interface_files.m"
      break;
#line 1200 "write_module_interface_files.m"
    }
#line 1196 "write_module_interface_files.m"
}

#line 1171 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__cons_args_to_type_ctor_set_3_p_0(
#line 1171 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1171 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1171 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3)
#line 1171 "write_module_interface_files.m"
{
#line 1174 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1174 "write_module_interface_files.m"
    {
#line 1174 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1174 "write_module_interface_files.m"
      {
#line 1174 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1174 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1174 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2;
#line 1174 "write_module_interface_files.m"
        else
#line 1175 "write_module_interface_files.m"
          {
#line 1175 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1175 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1175 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 1)));
#line 1175 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_16_16;
#line 1176 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 0)));
#line 1176 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 2)));
#line 1176 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 3)));

#line 1177 "write_module_interface_files.m"
            {
#line 1177 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__Type_11, parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_16_16);
            }
#line 1178 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1178 "write_module_interface_files.m"
            {
#line 1178 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Args_8;
#line 1178 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_16_16;

#line 1178 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2;
#line 1178 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1178 "write_module_interface_files.m"
            }
#line 1178 "write_module_interface_files.m"
            continue;
#line 1175 "write_module_interface_files.m"
          }
#line 1174 "write_module_interface_files.m"
      }
#line 1174 "write_module_interface_files.m"
      break;
#line 1174 "write_module_interface_files.m"
    }
#line 1171 "write_module_interface_files.m"
}

#line 1162 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctors_to_type_ctor_set_3_p_0(
#line 1162 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1162 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1162 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3)
#line 1162 "write_module_interface_files.m"
{
#line 1165 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1165 "write_module_interface_files.m"
    {
#line 1165 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1165 "write_module_interface_files.m"
      {
#line 1165 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1165 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1165 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2;
#line 1165 "write_module_interface_files.m"
        else
#line 1166 "write_module_interface_files.m"
          {
#line 1166 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Ctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1166 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Ctors_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1166 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ConsArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 3)));
#line 1166 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_18_18;
#line 1167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 0)));
#line 1167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 1)));
#line 1167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 2)));
#line 1167 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 4)));
#line 1167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 5)));

#line 1168 "write_module_interface_files.m"
            {
#line 1168 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__cons_args_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__ConsArgs_13, parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_18_18);
            }
#line 1169 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1169 "write_module_interface_files.m"
            {
#line 1169 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Ctors_8;
#line 1169 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_18_18;

#line 1169 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2;
#line 1169 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1169 "write_module_interface_files.m"
            }
#line 1169 "write_module_interface_files.m"
            continue;
#line 1166 "write_module_interface_files.m"
          }
#line 1165 "write_module_interface_files.m"
      }
#line 1165 "write_module_interface_files.m"
      break;
#line 1165 "write_module_interface_files.m"
    }
#line 1162 "write_module_interface_files.m"
}

#line 1157 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0_1(
#line 1157 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1157 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1157 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1157 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1157 "write_module_interface_files.m"
{
#line 1157 "write_module_interface_files.m"
  {
#line 1157 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1157 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeCtors_14;

#line 1157 "write_module_interface_files.m"
    {
#line 1157 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeCtors_14);
    }
#line 1157 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeCtors_14));
#line 1157 "write_module_interface_files.m"
  }
#line 1157 "write_module_interface_files.m"
}

#line 1127 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(
#line 1127 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_4,
#line 1127 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13,
#line 1127 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14)
#line 1127 "write_module_interface_files.m"
{
#line 1158 "write_module_interface_files.m"
  {
#line 1158 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1158 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtor_6;
#line 1158 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Args_7;

#line 1131 "write_module_interface_files.m"
    {
#line 1131 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__write_module_interface_files__Type_4, &parse_tree__write_module_interface_files__TypeCtor_6, &parse_tree__write_module_interface_files__Args_7);
    }
#line 1158 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1132 "write_module_interface_files.m"
      {
#line 1132 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_26_26;
#line 1132 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeInfo_27_27;
#line 1132 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_6, (MR_Integer) 0)));
#line 1132 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19;
#line 1132 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1132 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_6, (MR_Integer) 1)));
#line 1134 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_10_10;
#line 1134 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 1157 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_TypeCtors_14;

#line 1134 "write_module_interface_files.m"
        {
#line 1134 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(parse_tree__write_module_interface_files__TypeCtor_6, &parse_tree__write_module_interface_files__V_10_10, &parse_tree__write_module_interface_files__V_11_11);
        }
#line 1139 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1139 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1139 "write_module_interface_files.m"
        else
#line 1145 "write_module_interface_files.m"
          {
#line 1140 "write_module_interface_files.m"
            {
#line 1140 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(parse_tree__write_module_interface_files__TypeCtor_6);
            }
#line 1145 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1145 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1145 "write_module_interface_files.m"
            else
#line 1154 "write_module_interface_files.m"
              {
#line 1147 "write_module_interface_files.m"
                MR_String parse_tree__write_module_interface_files__V_28_28;
#line 1147 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__lo_0;
#line 1147 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__hi_1;
#line 1147 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__mid_2;
#line 1147 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__result_3;

#line 1146 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__SymName_8)) == (MR_mktag((MR_Integer) 0)));
#line 1146 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1146 "write_module_interface_files.m"
                  {
#line 1146 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__SymName_8, (MR_Integer) 0)));
#line 1147 "write_module_interface_files.m"
                    /* binary string simple lookup switch */
#line 1147 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__lo_0 = (MR_Integer) 0;
#line 1147 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__hi_1 = (MR_Integer) 3;
#line 1147 "write_module_interface_files.m"
                    do
#line 1147 "write_module_interface_files.m"
                      {
#line 1147 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__mid_2 = (((parse_tree__write_module_interface_files__lo_0 + parse_tree__write_module_interface_files__hi_1)) / (MR_Integer) 2);
#line 1147 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__result_3 = MR_strcmp(parse_tree__write_module_interface_files__V_28_28, ((&parse_tree__write_module_interface_files_vector_common_10[0 + parse_tree__write_module_interface_files__mid_2]))->parse_tree__write_module_interface_files__vector_common_type_10_0__vct_10_f_0);
#line 1147 "write_module_interface_files.m"
                        if ((parse_tree__write_module_interface_files__result_3 == (MR_Integer) 0))
#line 1147 "write_module_interface_files.m"
                          {
#line 1147 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1147 "write_module_interface_files.m"
                            /* jump out of search loop */
#line 1147 "write_module_interface_files.m"
                            goto label_0;
#line 1147 "write_module_interface_files.m"
                          }
#line 1147 "write_module_interface_files.m"
                        else
#line 1147 "write_module_interface_files.m"
                        if ((parse_tree__write_module_interface_files__result_3 < (MR_Integer) 0))
#line 1147 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__hi_1 = (parse_tree__write_module_interface_files__mid_2 - (MR_Integer) 1);
#line 1147 "write_module_interface_files.m"
                        else
#line 1147 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__lo_0 = (parse_tree__write_module_interface_files__mid_2 + (MR_Integer) 1);
#line 1147 "write_module_interface_files.m"
                      }
#line 1147 "write_module_interface_files.m"
                    while ((parse_tree__write_module_interface_files__lo_0 <= parse_tree__write_module_interface_files__hi_1));
#line 1147 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1147 "write_module_interface_files.m"
                  label_0:;
#line 1146 "write_module_interface_files.m"
                  }
#line 1154 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1154 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1154 "write_module_interface_files.m"
                else
#line 1155 "write_module_interface_files.m"
                  {
#line 1155 "write_module_interface_files.m"
                    {
#line 1155 "write_module_interface_files.m"
                      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_6)), parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19);
                    }
#line 1155 "write_module_interface_files.m"
                  }
#line 1154 "write_module_interface_files.m"
              }
#line 1145 "write_module_interface_files.m"
          }
#line 1157 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_20_20 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[12];
#line 7419 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 7421 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeInfo_27_27 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[1];
#line 1157 "write_module_interface_files.m"
        {
#line 1157 "write_module_interface_files.m"
          mercury__list__foldl_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_26_26, parse_tree__write_module_interface_files__TypeInfo_27_27, parse_tree__write_module_interface_files__V_20_20, parse_tree__write_module_interface_files__Args_7, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_TypeCtors_14);
        }
#line 1157 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_TypeCtors_14);
#line 1132 "write_module_interface_files.m"
      }
#line 1158 "write_module_interface_files.m"
    else
#line 1158 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1158 "write_module_interface_files.m"
  }
#line 1127 "write_module_interface_files.m"
}

#line 1110 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_3_p_0(
#line 1110 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_4,
#line 1110 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1110 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12)
#line 1110 "write_module_interface_files.m"
{
#line 1113 "write_module_interface_files.m"
  {
#line 1113 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1113 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__SymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_4, (MR_Integer) 0)));
#line 1115 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files___Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_4, (MR_Integer) 1)));

#line 1119 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__SymName_6)) == (MR_mktag((MR_Integer) 1))))
#line 1117 "write_module_interface_files.m"
      {
#line 1117 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__SymName_6, (MR_Integer) 0)));
#line 1117 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__SymName_6, (MR_Integer) 1)));

#line 1118 "write_module_interface_files.m"
        {
#line 1118 "write_module_interface_files.m"
          mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_8)), parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11, parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12);
#line 1118 "write_module_interface_files.m"
          return;
        }
#line 1117 "write_module_interface_files.m"
      }
#line 1119 "write_module_interface_files.m"
    else
#line 1120 "write_module_interface_files.m"
      {
#line 1121 "write_module_interface_files.m"
        {
#line 1121 "write_module_interface_files.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.accumulate_modules\'/3", (MR_String) "unqualified type encountered");
#line 1121 "write_module_interface_files.m"
          return;
        }
#line 1120 "write_module_interface_files.m"
      }
#line 1113 "write_module_interface_files.m"
  }
#line 1110 "write_module_interface_files.m"
}

#line 1105 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_3(
#line 1105 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1105 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1105 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1105 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1105 "write_module_interface_files.m"
{
#line 1105 "write_module_interface_files.m"
  {
#line 1105 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1105 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_12;

#line 1105 "write_module_interface_files.m"
    {
#line 1105 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_12);
    }
#line 1105 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_12));
#line 1105 "write_module_interface_files.m"
  }
#line 1105 "write_module_interface_files.m"
}

#line 1098 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2(
#line 1098 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1098 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1098 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1098 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1098 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1098 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1098 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1098 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7)
#line 1098 "write_module_interface_files.m"
{
#line 1098 "write_module_interface_files.m"
  {
#line 1098 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1098 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_AbsEqvRhsTypeCtors_16;
#line 1098 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_ForeignDuFieldTypeCtors_18;
#line 1098 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_20;

#line 1098 "write_module_interface_files.m"
    {
#line 1098 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_20);
    }
#line 1098 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_AbsEqvRhsTypeCtors_16));
#line 1098 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_ForeignDuFieldTypeCtors_18));
#line 1098 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_20));
#line 1098 "write_module_interface_files.m"
  }
#line 1098 "write_module_interface_files.m"
}

#line 1096 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_1(
#line 1096 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1096 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1096 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1096 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1096 "write_module_interface_files.m"
{
#line 1096 "write_module_interface_files.m"
  {
#line 1096 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1096 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12;

#line 1096 "write_module_interface_files.m"
    {
#line 1096 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12);
    }
#line 1096 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12));
#line 1096 "write_module_interface_files.m"
  }
#line 1096 "write_module_interface_files.m"
}

#line 1085 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(
#line 1085 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1085 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1085 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_22,
#line 1085 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_23,
#line 1085 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_24,
#line 1085 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_25,
#line 1085 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_26,
#line 1085 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27)
#line 1085 "write_module_interface_files.m"
{
#line 1092 "write_module_interface_files.m"
  {
#line 1092 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1092 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 1091 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 1100 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RhsType_15;

#line 1093 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_10)) == (MR_mktag((MR_Integer) 1)));
#line 1093 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1093 "write_module_interface_files.m"
      {
#line 1093 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__RhsType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 0)));
#line 1094 "write_module_interface_files.m"
        {
#line 1094 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1094 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeInfo_47_47;
#line 1094 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeInfo_55_55;
#line 1094 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__RhsTypeCtors_16;
#line 1094 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__NewRhsTypeCtors_17;
#line 1094 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_28_28;
#line 1094 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_30_30;
#line 1094 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_31_31;
#line 1094 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_32_32;
#line 1094 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_34_34;
#line 1096 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_30_30;
#line 1098 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1098 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_AbsEqvRhsTypeCtors_23;
#line 1098 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv6_V_18_18;
#line 1098 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_27;

#line 1094 "write_module_interface_files.m"
          {
#line 1094 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_28_28 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43);
          }
#line 1094 "write_module_interface_files.m"
          {
#line 1094 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__RhsType_15, parse_tree__write_module_interface_files__V_28_28, &parse_tree__write_module_interface_files__RhsTypeCtors_16);
          }
#line 1095 "write_module_interface_files.m"
          {
#line 1095 "write_module_interface_files.m"
            mercury__set__difference_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__RhsTypeCtors_16, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_22, &parse_tree__write_module_interface_files__NewRhsTypeCtors_17);
          }
#line 7697 "parse_tree.write_module_interface_files.c"
          parse_tree__write_module_interface_files__TypeInfo_47_47 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4];
#line 1096 "write_module_interface_files.m"
          {
#line 1096 "write_module_interface_files.m"
            mercury__set__fold_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__TypeInfo_47_47, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[10], parse_tree__write_module_interface_files__NewRhsTypeCtors_17, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_26)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_30_30);
          }
#line 1096 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_30_30 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_30_30);
#line 1097 "write_module_interface_files.m"
          {
#line 1097 "write_module_interface_files.m"
            mercury__set__union_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__NewRhsTypeCtors_17, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_22, &parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_31_31);
          }
#line 1098 "write_module_interface_files.m"
          {
#line 1098 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1098 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_32_32, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_9[0]));
#line 1098 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_32_32, 1) = ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2));
#line 1098 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1098 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_32_32, 3) = ((MR_Box) (parse_tree__write_module_interface_files__ImplTypeMap_9));
#line 1098 "write_module_interface_files.m"
          }
#line 1099 "write_module_interface_files.m"
          {
#line 1099 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_34_34 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43);
          }
#line 7730 "parse_tree.write_module_interface_files.c"
          parse_tree__write_module_interface_files__TypeInfo_55_55 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[1];
#line 1098 "write_module_interface_files.m"
          {
#line 1098 "write_module_interface_files.m"
            mercury__set__fold3_8_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__TypeInfo_55_55, parse_tree__write_module_interface_files__TypeInfo_55_55, parse_tree__write_module_interface_files__TypeInfo_47_47, parse_tree__write_module_interface_files__V_32_32, parse_tree__write_module_interface_files__NewRhsTypeCtors_17, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_31_31)), &parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_AbsEqvRhsTypeCtors_23, ((MR_Box) (parse_tree__write_module_interface_files__V_34_34)), &parse_tree__write_module_interface_files__conv6_V_18_18, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_30_30)), &parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_27);
          }
#line 1098 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_23 = ((MR_Word) parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_AbsEqvRhsTypeCtors_23);
#line 1098 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) parse_tree__write_module_interface_files__conv6_V_18_18);
#line 1098 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27 = ((MR_Word) parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_27);
#line 1094 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_24;
#line 1094 "write_module_interface_files.m"
        }
#line 1093 "write_module_interface_files.m"
      }
#line 1093 "write_module_interface_files.m"
    else
#line 1106 "write_module_interface_files.m"
      {
#line 1106 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Ctors_19;
#line 1100 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1100 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21;

#line 1100 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_10)) == (MR_mktag((MR_Integer) 0)));
#line 1100 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1100 "write_module_interface_files.m"
          {
#line 1100 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__Ctors_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 0)));
#line 1100 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 1)));
#line 1100 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 2)));
#line 1103 "write_module_interface_files.m"
            {
#line 1103 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1103 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_36_36;
#line 1103 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__RhsTypeCtors_40;
#line 1105 "write_module_interface_files.m"
              MR_Box parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_27;

#line 1103 "write_module_interface_files.m"
              {
#line 1103 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_36_36 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_56_56);
              }
#line 1103 "write_module_interface_files.m"
              {
#line 1103 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ctors_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__Ctors_19, parse_tree__write_module_interface_files__V_36_36, &parse_tree__write_module_interface_files__RhsTypeCtors_40);
              }
#line 1104 "write_module_interface_files.m"
              {
#line 1104 "write_module_interface_files.m"
                mercury__set__union_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_56_56, parse_tree__write_module_interface_files__RhsTypeCtors_40, parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_24, parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_25);
              }
#line 1105 "write_module_interface_files.m"
              {
#line 1105 "write_module_interface_files.m"
                mercury__set__fold_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_56_56, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[11], parse_tree__write_module_interface_files__RhsTypeCtors_40, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_26)), &parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_27);
              }
#line 1105 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27 = ((MR_Word) parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_27);
#line 1103 "write_module_interface_files.m"
            }
#line 1100 "write_module_interface_files.m"
          }
#line 1100 "write_module_interface_files.m"
        else
#line 1107 "write_module_interface_files.m"
          {
#line 1107 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_26;
#line 1107 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_24;
#line 1107 "write_module_interface_files.m"
          }
#line 1106 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_22;
#line 1106 "write_module_interface_files.m"
      }
#line 1092 "write_module_interface_files.m"
  }
#line 1085 "write_module_interface_files.m"
}

#line 1079 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1(
#line 1079 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1079 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1079 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1079 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1079 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1079 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1079 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1079 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7)
#line 1079 "write_module_interface_files.m"
{
#line 1079 "write_module_interface_files.m"
  {
#line 1079 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1079 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbsEqvRhsTypeCtors_23;
#line 1079 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_ForeignDuFieldTypeCtors_25;
#line 1079 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_27;

#line 1079 "write_module_interface_files.m"
    {
#line 1079 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbsEqvRhsTypeCtors_23, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_ForeignDuFieldTypeCtors_25, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_27);
    }
#line 1079 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbsEqvRhsTypeCtors_23));
#line 1079 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_ForeignDuFieldTypeCtors_25));
#line 1079 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_27));
#line 1079 "write_module_interface_files.m"
  }
#line 1079 "write_module_interface_files.m"
}

#line 1071 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(
#line 1071 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1071 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_10,
#line 1071 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15,
#line 1071 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16,
#line 1071 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17,
#line 1071 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18,
#line 1071 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19,
#line 1071 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20)
#line 1071 "write_module_interface_files.m"
{
#line 1081 "write_module_interface_files.m"
  {
#line 1081 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1081 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefns_14;
#line 1078 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv0_TypeDefns_14;

#line 1078 "write_module_interface_files.m"
    {
#line 1078 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0], parse_tree__write_module_interface_files__ImplTypeMap_9, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_10)), &parse_tree__write_module_interface_files__conv0_TypeDefns_14);
    }
#line 1078 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1078 "write_module_interface_files.m"
      {
#line 1078 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__TypeDefns_14 = ((MR_Word) parse_tree__write_module_interface_files__conv0_TypeDefns_14);
#line 1078 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1078 "write_module_interface_files.m"
      }
#line 1081 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1079 "write_module_interface_files.m"
      {
#line 1079 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeInfo_35_35;
#line 1079 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 1079 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16;
#line 1079 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18;
#line 1079 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_20;

#line 1079 "write_module_interface_files.m"
        {
#line 1079 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1079 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_9[1]));
#line 1079 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 1) = ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1));
#line 1079 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1079 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 3) = ((MR_Box) (parse_tree__write_module_interface_files__ImplTypeMap_9));
#line 1079 "write_module_interface_files.m"
        }
#line 7950 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeInfo_35_35 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[1];
#line 1079 "write_module_interface_files.m"
        {
#line 1079 "write_module_interface_files.m"
          mercury__list__foldl3_8_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], parse_tree__write_module_interface_files__TypeInfo_35_35, parse_tree__write_module_interface_files__TypeInfo_35_35, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], parse_tree__write_module_interface_files__V_21_21, parse_tree__write_module_interface_files__TypeDefns_14, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15)), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17)), &parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19)), &parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_20);
        }
#line 1079 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16 = ((MR_Word) parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16);
#line 1079 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18 = ((MR_Word) parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18);
#line 1079 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20 = ((MR_Word) parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_20);
#line 1079 "write_module_interface_files.m"
      }
#line 1081 "write_module_interface_files.m"
    else
#line 1082 "write_module_interface_files.m"
      {
#line 1082 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19;
#line 1082 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18 = parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17;
#line 1082 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15;
#line 1082 "write_module_interface_files.m"
      }
#line 1081 "write_module_interface_files.m"
  }
#line 1071 "write_module_interface_files.m"
}

#line 1028 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_10,
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypesMap_11,
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29,
#line 1028 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30,
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31,
#line 1028 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32,
#line 1028 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33,
#line 1028 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34)
#line 1028 "write_module_interface_files.m"
{
#line 1037 "write_module_interface_files.m"
  {
#line 1037 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1037 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 0)));
#line 1037 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefn_13;
#line 1037 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 1)));
#line 1036 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___Item_14;
#line 1042 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_40_40;
#line 1042 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_41_41;
#line 1042 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___RhsType_18;
#line 1043 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1043 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv0_V_19_19;

#line 1036 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__TypeDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_35_35, (MR_Integer) 0)));
#line 1036 "write_module_interface_files.m"
    parse_tree__write_module_interface_files___Item_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_35_35, (MR_Integer) 1)));
#line 1042 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_13)) == (MR_mktag((MR_Integer) 1)));
#line 1042 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1042 "write_module_interface_files.m"
      {
#line 1042 "write_module_interface_files.m"
        parse_tree__write_module_interface_files___RhsType_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 0)));
#line 8040 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 8042 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeInfo_41_41 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0];
#line 1043 "write_module_interface_files.m"
        {
#line 1043 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_40_40, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__InterfaceTypeMap_10, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv0_V_19_19);
        }
#line 1043 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1043 "write_module_interface_files.m"
          {
#line 1043 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) parse_tree__write_module_interface_files__conv0_V_19_19);
#line 1043 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1043 "write_module_interface_files.m"
          }
#line 1042 "write_module_interface_files.m"
      }
#line 1046 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1045 "write_module_interface_files.m"
      {
#line 1045 "write_module_interface_files.m"
        {
#line 1045 "write_module_interface_files.m"
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30);
        }
#line 1045 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1045 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1045 "write_module_interface_files.m"
      }
#line 1046 "write_module_interface_files.m"
    else
#line 1051 "write_module_interface_files.m"
      {
#line 1047 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_43_43;
#line 1047 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeInfo_44_44;
#line 1047 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1047 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 1047 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 1048 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 1048 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv1_V_23_23;

#line 1047 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1047 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1047 "write_module_interface_files.m"
          {
#line 1047 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 1)));
#line 1047 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 2)));
#line 1047 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 3)));
#line 8107 "parse_tree.write_module_interface_files.c"
            parse_tree__write_module_interface_files__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 8109 "parse_tree.write_module_interface_files.c"
            parse_tree__write_module_interface_files__TypeInfo_44_44 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0];
#line 1048 "write_module_interface_files.m"
            {
#line 1048 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__TypeInfo_44_44, parse_tree__write_module_interface_files__InterfaceTypeMap_10, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv1_V_23_23);
            }
#line 1048 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1048 "write_module_interface_files.m"
              {
#line 1048 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) parse_tree__write_module_interface_files__conv1_V_23_23);
#line 1048 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1048 "write_module_interface_files.m"
              }
#line 1047 "write_module_interface_files.m"
          }
#line 1051 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1050 "write_module_interface_files.m"
          {
#line 1050 "write_module_interface_files.m"
            {
#line 1050 "write_module_interface_files.m"
              mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30);
            }
#line 1050 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1050 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1050 "write_module_interface_files.m"
          }
#line 1051 "write_module_interface_files.m"
        else
#line 1067 "write_module_interface_files.m"
          {
#line 1067 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Ctors_24;
#line 1067 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__MaybeEqCmp_25;
#line 1067 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__MaybeDirectArgCtors_26;

#line 1052 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_13)) == (MR_mktag((MR_Integer) 0)));
#line 1052 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1052 "write_module_interface_files.m"
              {
#line 1052 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Ctors_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 0)));
#line 1052 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeEqCmp_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 1)));
#line 1052 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeDirectArgCtors_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 2)));
#line 1059 "write_module_interface_files.m"
                {
#line 1055 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 1055 "write_module_interface_files.m"
                  MR_Box parse_tree__write_module_interface_files__conv2_V_27_27;
#line 1056 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files___NumBits_28;

#line 1055 "write_module_interface_files.m"
                  {
#line 1055 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0], parse_tree__write_module_interface_files__InterfaceTypeMap_10, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv2_V_27_27);
                  }
#line 1055 "write_module_interface_files.m"
                  if (parse_tree__write_module_interface_files__succeeded)
#line 1055 "write_module_interface_files.m"
                    {
#line 1055 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__V_27_27 = ((MR_Word) parse_tree__write_module_interface_files__conv2_V_27_27);
#line 1055 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1055 "write_module_interface_files.m"
                    }
#line 1055 "write_module_interface_files.m"
                  if (parse_tree__write_module_interface_files__succeeded)
#line 1056 "write_module_interface_files.m"
                    {
#line 1056 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(parse_tree__write_module_interface_files__Ctors_24, &parse_tree__write_module_interface_files___NumBits_28);
                    }
#line 1059 "write_module_interface_files.m"
                  if (parse_tree__write_module_interface_files__succeeded)
#line 1058 "write_module_interface_files.m"
                    {
#line 1058 "write_module_interface_files.m"
                      {
#line 1058 "write_module_interface_files.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32);
                      }
#line 1058 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1058 "write_module_interface_files.m"
                    }
#line 1059 "write_module_interface_files.m"
                  else
#line 1064 "write_module_interface_files.m"
                    {
#line 865 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_54_54;
#line 865 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Ctor_57;
#line 865 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ExistQTVars_58;
#line 865 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Constraints_59;
#line 865 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Args_61;
#line 865 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_68_68;
#line 875 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files___Name_60;
#line 875 "write_module_interface_files.m"
                      MR_Integer parse_tree__write_module_interface_files___Arity_62;
#line 875 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files___Context_63;

#line 873 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeEqCmp_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 865 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 865 "write_module_interface_files.m"
                        {
#line 873 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeDirectArgCtors_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 865 "write_module_interface_files.m"
                          if (parse_tree__write_module_interface_files__succeeded)
#line 865 "write_module_interface_files.m"
                            {
#line 867 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__V_54_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 873 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Ctors_24)) == (MR_mktag((MR_Integer) 1)));
#line 873 "write_module_interface_files.m"
                              if (parse_tree__write_module_interface_files__succeeded)
#line 873 "write_module_interface_files.m"
                                {
#line 873 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__Ctor_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_24, (MR_Integer) 0)));
#line 873 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_24, (MR_Integer) 1)));
#line 873 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 865 "write_module_interface_files.m"
                                  if (parse_tree__write_module_interface_files__succeeded)
#line 865 "write_module_interface_files.m"
                                    {
#line 875 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__ExistQTVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 0)));
#line 875 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__Constraints_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 1)));
#line 875 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files___Name_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 2)));
#line 875 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 3)));
#line 875 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files___Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 4)));
#line 875 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files___Context_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 5)));
#line 876 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__ExistQTVars_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 865 "write_module_interface_files.m"
                                      if (parse_tree__write_module_interface_files__succeeded)
#line 865 "write_module_interface_files.m"
                                        {
#line 877 "write_module_interface_files.m"
                                          parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__Constraints_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 865 "write_module_interface_files.m"
                                          if (parse_tree__write_module_interface_files__succeeded)
#line 881 "write_module_interface_files.m"
                                            {
#line 881 "write_module_interface_files.m"
                                              if ((parse_tree__write_module_interface_files__Args_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 880 "write_module_interface_files.m"
                                                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 881 "write_module_interface_files.m"
                                              else
#line 883 "write_module_interface_files.m"
                                                {
#line 883 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__ArgType_65;
#line 883 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_61, (MR_Integer) 0)));
#line 883 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_61, (MR_Integer) 1)));
#line 883 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_71_71;
#line 883 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_64_64;
#line 883 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_66_66;
#line 883 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_67_67;

#line 883 "write_module_interface_files.m"
                                                  parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "write_module_interface_files.m"
                                                  if (parse_tree__write_module_interface_files__succeeded)
#line 883 "write_module_interface_files.m"
                                                    {
#line 883 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_69_69, (MR_Integer) 0)));
#line 883 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__ArgType_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_69_69, (MR_Integer) 1)));
#line 883 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_69_69, (MR_Integer) 2)));
#line 883 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_69_69, (MR_Integer) 3)));
#line 884 "write_module_interface_files.m"
                                                      {
#line 884 "write_module_interface_files.m"
                                                        parse_tree__write_module_interface_files__V_71_71 = parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(parse_tree__write_module_interface_files__BothTypesMap_11, parse_tree__write_module_interface_files__ArgType_65, parse_tree__write_module_interface_files__V_54_54);
                                                      }
#line 884 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_71_71 == (MR_Integer) 1);
#line 883 "write_module_interface_files.m"
                                                    }
#line 883 "write_module_interface_files.m"
                                                }
#line 881 "write_module_interface_files.m"
                                            }
#line 865 "write_module_interface_files.m"
                                        }
#line 865 "write_module_interface_files.m"
                                    }
#line 873 "write_module_interface_files.m"
                                }
#line 865 "write_module_interface_files.m"
                            }
#line 865 "write_module_interface_files.m"
                        }
#line 1064 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 1063 "write_module_interface_files.m"
                        {
#line 1063 "write_module_interface_files.m"
                          {
#line 1063 "write_module_interface_files.m"
                            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33, parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34);
                          }
#line 1063 "write_module_interface_files.m"
                        }
#line 1064 "write_module_interface_files.m"
                      else
#line 1064 "write_module_interface_files.m"
                        *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1064 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1064 "write_module_interface_files.m"
                    }
#line 1059 "write_module_interface_files.m"
                }
#line 1052 "write_module_interface_files.m"
              }
#line 1052 "write_module_interface_files.m"
            else
#line 1068 "write_module_interface_files.m"
              {
#line 1068 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1068 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1068 "write_module_interface_files.m"
              }
#line 1067 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29;
#line 1067 "write_module_interface_files.m"
          }
#line 1051 "write_module_interface_files.m"
      }
#line 1037 "write_module_interface_files.m"
  }
#line 1028 "write_module_interface_files.m"
}

#line 1020 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_2(
#line 1020 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1020 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1020 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1020 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1020 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1020 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1020 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1020 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7)
#line 1020 "write_module_interface_files.m"
{
#line 1020 "write_module_interface_files.m"
  {
#line 1020 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1020 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_AbsEqvRhsTypeCtors_16;
#line 1020 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ForeignDuFieldTypeCtors_18;
#line 1020 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_20;

#line 1020 "write_module_interface_files.m"
    {
#line 1020 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_20);
    }
#line 1020 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_AbsEqvRhsTypeCtors_16));
#line 1020 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ForeignDuFieldTypeCtors_18));
#line 1020 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_20));
#line 1020 "write_module_interface_files.m"
  }
#line 1020 "write_module_interface_files.m"
}

#line 1017 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_1(
#line 1017 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1017 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1017 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1017 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1017 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1017 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1017 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1017 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7)
#line 1017 "write_module_interface_files.m"
{
#line 1017 "write_module_interface_files.m"
  {
#line 1017 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1017 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_30;
#line 1017 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_AbsImplExpEnumTypeCtors_32;
#line 1017 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_DummyTypeCtors_34;

#line 1017 "write_module_interface_files.m"
    {
#line 1017 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_30, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_AbsImplExpEnumTypeCtors_32, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_DummyTypeCtors_34);
    }
#line 1017 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_30));
#line 1017 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_AbsImplExpEnumTypeCtors_32));
#line 1017 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_DummyTypeCtors_34));
#line 1017 "write_module_interface_files.m"
  }
#line 1017 "write_module_interface_files.m"
}

#line 1009 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0(
#line 1009 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_7,
#line 1009 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_8,
#line 1009 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypeMap_9,
#line 1009 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__DummyTypeCtors_10,
#line 1009 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__NecessaryTypeCtors_11,
#line 1009 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Modules_12)
#line 1009 "write_module_interface_files.m"
{
#line 1014 "write_module_interface_files.m"
  {
#line 1014 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_41_41;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImplTypes_13;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AbsImplExpEnumTypeCtors_15;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AbsEqvRhsTypeCtors_16;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ForeignDuFieldTypeCtors_17;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_28_28;
#line 1014 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_29_29;
#line 1016 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv5_AbsImplExpLhsTypeCtors_14;
#line 1016 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv4_AbsImplExpEnumTypeCtors_15;
#line 1016 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv3_DummyTypeCtors_10;
#line 1020 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv11_AbsEqvRhsTypeCtors_16;
#line 1020 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv10_ForeignDuFieldTypeCtors_17;
#line 1020 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv9_Modules_12;

#line 1015 "write_module_interface_files.m"
    {
#line 1015 "write_module_interface_files.m"
      mercury__multi_map__to_flat_assoc_list_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], parse_tree__write_module_interface_files__ImplTypeMap_8, &parse_tree__write_module_interface_files__ImplTypes_13);
    }
#line 1017 "write_module_interface_files.m"
    {
#line 1017 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[0]));
#line 1017 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 1) = ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_1));
#line 1017 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1017 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 3) = ((MR_Box) (parse_tree__write_module_interface_files__InterfaceTypeMap_7));
#line 1017 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 4) = ((MR_Box) (parse_tree__write_module_interface_files__BothTypeMap_9));
#line 1017 "write_module_interface_files.m"
    }
#line 1018 "write_module_interface_files.m"
    {
#line 1018 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_19_19 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 1019 "write_module_interface_files.m"
    {
#line 1019 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_20_20 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 1019 "write_module_interface_files.m"
    {
#line 1019 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_21_21 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 8595 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeInfo_41_41 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[1];
#line 1016 "write_module_interface_files.m"
    {
#line 1016 "write_module_interface_files.m"
      mercury__list__foldl3_8_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[3], parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__V_18_18, parse_tree__write_module_interface_files__ImplTypes_13, ((MR_Box) (parse_tree__write_module_interface_files__V_19_19)), &parse_tree__write_module_interface_files__conv5_AbsImplExpLhsTypeCtors_14, ((MR_Box) (parse_tree__write_module_interface_files__V_20_20)), &parse_tree__write_module_interface_files__conv4_AbsImplExpEnumTypeCtors_15, ((MR_Box) (parse_tree__write_module_interface_files__V_21_21)), &parse_tree__write_module_interface_files__conv3_DummyTypeCtors_10);
    }
#line 1016 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14 = ((MR_Word) parse_tree__write_module_interface_files__conv5_AbsImplExpLhsTypeCtors_14);
#line 1016 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__AbsImplExpEnumTypeCtors_15 = ((MR_Word) parse_tree__write_module_interface_files__conv4_AbsImplExpEnumTypeCtors_15);
#line 1016 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__DummyTypeCtors_10 = ((MR_Word) parse_tree__write_module_interface_files__conv3_DummyTypeCtors_10);
#line 1020 "write_module_interface_files.m"
    {
#line 1020 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_9[0]));
#line 1020 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 1) = ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_2));
#line 1020 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1020 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 3) = ((MR_Box) (parse_tree__write_module_interface_files__ImplTypeMap_8));
#line 1020 "write_module_interface_files.m"
    }
#line 1022 "write_module_interface_files.m"
    {
#line 1022 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_23_23 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 1022 "write_module_interface_files.m"
    {
#line 1022 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_24_24 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 1023 "write_module_interface_files.m"
    {
#line 1023 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_25_25 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    }
#line 1020 "write_module_interface_files.m"
    {
#line 1020 "write_module_interface_files.m"
      mercury__set__fold3_8_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__TypeInfo_41_41, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], parse_tree__write_module_interface_files__V_22_22, parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14, ((MR_Box) (parse_tree__write_module_interface_files__V_23_23)), &parse_tree__write_module_interface_files__conv11_AbsEqvRhsTypeCtors_16, ((MR_Box) (parse_tree__write_module_interface_files__V_24_24)), &parse_tree__write_module_interface_files__conv10_ForeignDuFieldTypeCtors_17, ((MR_Box) (parse_tree__write_module_interface_files__V_25_25)), &parse_tree__write_module_interface_files__conv9_Modules_12);
    }
#line 1020 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__AbsEqvRhsTypeCtors_16 = ((MR_Word) parse_tree__write_module_interface_files__conv11_AbsEqvRhsTypeCtors_16);
#line 1020 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__ForeignDuFieldTypeCtors_17 = ((MR_Word) parse_tree__write_module_interface_files__conv10_ForeignDuFieldTypeCtors_17);
#line 1020 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__Modules_12 = ((MR_Word) parse_tree__write_module_interface_files__conv9_Modules_12);
#line 1026 "write_module_interface_files.m"
    {
#line 1026 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_29_29, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbsImplExpEnumTypeCtors_15));
#line 1026 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1026 "write_module_interface_files.m"
    }
#line 1025 "write_module_interface_files.m"
    {
#line 1025 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_28_28, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ForeignDuFieldTypeCtors_17));
#line 1025 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_28_28, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_29_29));
#line 1025 "write_module_interface_files.m"
    }
#line 1025 "write_module_interface_files.m"
    {
#line 1025 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_27_27, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbsEqvRhsTypeCtors_16));
#line 1025 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_27_27, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_28_28));
#line 1025 "write_module_interface_files.m"
    }
#line 1024 "write_module_interface_files.m"
    {
#line 1024 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_26_26, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14));
#line 1024 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_26_26, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_27_27));
#line 1024 "write_module_interface_files.m"
    }
#line 1024 "write_module_interface_files.m"
    {
#line 1024 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__NecessaryTypeCtors_11 = mercury__set__union_list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, parse_tree__write_module_interface_files__V_26_26);
    }
#line 1014 "write_module_interface_files.m"
  }
#line 1009 "write_module_interface_files.m"
}

#line 974 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_type_2_p_0(
#line 974 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_3,
#line 974 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4)
#line 974 "write_module_interface_files.m"
{
#line 981 "write_module_interface_files.m"
  {
#line 981 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 2)));
#line 981 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_5;

#line 977 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 977 "write_module_interface_files.m"
      {
#line 977 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemTypeDefn_5 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_4), (MR_Integer) 2);
#line 978 "write_module_interface_files.m"
        {
#line 978 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__SymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 0)));
#line 978 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Params_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 1)));
#line 978 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeCtor_12;
#line 978 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_13_13;
#line 978 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 2)));
#line 978 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 3)));
#line 978 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 4)));
#line 978 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 5)));

#line 979 "write_module_interface_files.m"
          {
#line 979 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_13_13 = mercury__list__length_1_f_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[3], parse_tree__write_module_interface_files__Params_7);
          }
#line 979 "write_module_interface_files.m"
          {
#line 979 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 979 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_12, 0) = ((MR_Box) (parse_tree__write_module_interface_files__SymName_6));
#line 979 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_12, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_13_13));
#line 979 "write_module_interface_files.m"
          }
#line 980 "write_module_interface_files.m"
          {
#line 980 "write_module_interface_files.m"
            return parse_tree__write_module_interface_files__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__NecessaryTypeCtors_3);
          }
#line 978 "write_module_interface_files.m"
        }
#line 977 "write_module_interface_files.m"
      }
#line 977 "write_module_interface_files.m"
    else
#line 982 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 981 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 981 "write_module_interface_files.m"
  }
#line 974 "write_module_interface_files.m"
}

#line 972 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0_1(
#line 972 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 972 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 972 "write_module_interface_files.m"
{
#line 972 "write_module_interface_files.m"
  {
#line 972 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 972 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 972 "write_module_interface_files.m"
    {
#line 972 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_not_unnecessary_impl_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 972 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 972 "write_module_interface_files.m"
  }
#line 972 "write_module_interface_files.m"
}

#line 968 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0(
#line 968 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_4,
#line 968 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 968 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7)
#line 968 "write_module_interface_files.m"
{
#line 971 "write_module_interface_files.m"
  {
#line 971 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 971 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 972 "write_module_interface_files.m"
    {
#line 972 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 972 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[3]));
#line 972 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0_1));
#line 972 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 972 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 3) = ((MR_Box) (parse_tree__write_module_interface_files__NecessaryTypeCtors_4));
#line 972 "write_module_interface_files.m"
    }
#line 972 "write_module_interface_files.m"
    {
#line 972 "write_module_interface_files.m"
      mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__V_8_8, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);
#line 972 "write_module_interface_files.m"
      return;
    }
#line 971 "write_module_interface_files.m"
  }
#line 968 "write_module_interface_files.m"
}

#line 944 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_import_2_p_0(
#line 944 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_3,
#line 944 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4)
#line 944 "write_module_interface_files.m"
{
#line 959 "write_module_interface_files.m"
  {
#line 959 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 0)));
#line 959 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_5;

#line 948 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 948 "write_module_interface_files.m"
      {
#line 948 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemModuleDefn_5 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_4), (MR_Integer) 0);
#line 949 "write_module_interface_files.m"
        {
#line 949 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 0)));
#line 949 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 1)));
#line 949 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 2)));
#line 956 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleName_9;

#line 952 "write_module_interface_files.m"
          if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 2))))
#line 952 "write_module_interface_files.m"
            {
#line 952 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)));
#line 952 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 952 "write_module_interface_files.m"
            }
#line 952 "write_module_interface_files.m"
          else
#line 952 "write_module_interface_files.m"
          if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 3))))
#line 951 "write_module_interface_files.m"
            {
#line 951 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)));
#line 951 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 951 "write_module_interface_files.m"
            }
#line 952 "write_module_interface_files.m"
          else
#line 952 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 956 "write_module_interface_files.m"
          if (parse_tree__write_module_interface_files__succeeded)
#line 955 "write_module_interface_files.m"
            {
#line 955 "write_module_interface_files.m"
              {
#line 955 "write_module_interface_files.m"
                return parse_tree__write_module_interface_files__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_9)), parse_tree__write_module_interface_files__NecessaryImports_3);
              }
#line 955 "write_module_interface_files.m"
            }
#line 956 "write_module_interface_files.m"
          else
#line 957 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 949 "write_module_interface_files.m"
        }
#line 948 "write_module_interface_files.m"
      }
#line 948 "write_module_interface_files.m"
    else
#line 960 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 959 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 959 "write_module_interface_files.m"
  }
#line 944 "write_module_interface_files.m"
}

#line 942 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0_1(
#line 942 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 942 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 942 "write_module_interface_files.m"
{
#line 942 "write_module_interface_files.m"
  {
#line 942 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 942 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 942 "write_module_interface_files.m"
    {
#line 942 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_not_unnecessary_impl_import_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 942 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 942 "write_module_interface_files.m"
  }
#line 942 "write_module_interface_files.m"
}

#line 938 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(
#line 938 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_4,
#line 938 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 938 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7)
#line 938 "write_module_interface_files.m"
{
#line 941 "write_module_interface_files.m"
  {
#line 941 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 941 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 942 "write_module_interface_files.m"
    {
#line 942 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 942 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[2]));
#line 942 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0_1));
#line 942 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 942 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 3) = ((MR_Box) (parse_tree__write_module_interface_files__NecessaryImports_4));
#line 942 "write_module_interface_files.m"
    }
#line 942 "write_module_interface_files.m"
    {
#line 942 "write_module_interface_files.m"
      mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__V_8_8, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);
#line 942 "write_module_interface_files.m"
      return;
    }
#line 941 "write_module_interface_files.m"
  }
#line 938 "write_module_interface_files.m"
}

#line 906 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_1(
#line 906 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 906 "write_module_interface_files.m"
{
#line 906 "write_module_interface_files.m"
  {
#line 906 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 906 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__commit_0, 1);
#line 906 "write_module_interface_files.m"
  }
#line 906 "write_module_interface_files.m"
}

#line 907 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_3(
#line 907 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 907 "write_module_interface_files.m"
{
#line 907 "write_module_interface_files.m"
  {
#line 907 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 907 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__conv0_V_36_36);
#line 907 "write_module_interface_files.m"
    {
#line 907 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_2(parse_tree__write_module_interface_files__env_ptr);
#line 907 "write_module_interface_files.m"
      return;
    }
#line 907 "write_module_interface_files.m"
  }
#line 907 "write_module_interface_files.m"
}

#line 906 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_2(
#line 906 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 906 "write_module_interface_files.m"
{
#line 906 "write_module_interface_files.m"
  {
#line 906 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 906 "write_module_interface_files.m"
    {
#line 907 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_16_16;
#line 875 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files___Name_46;
#line 875 "write_module_interface_files.m"
      MR_Integer parse_tree__write_module_interface_files___Arity_48;
#line 875 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files___Context_49;

#line 907 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36, (MR_Integer) 0)));
#line 907 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36, (MR_Integer) 1)));
#line 908 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15)) == (MR_mktag((MR_Integer) 0)));
#line 908 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 908 "write_module_interface_files.m"
        {
#line 908 "write_module_interface_files.m"
          {
#line 908 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15, (MR_Integer) 0)));
#line 908 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeEqCmp_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15, (MR_Integer) 1)));
#line 908 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeDirectArgCtors_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15, (MR_Integer) 2)));
#line 908 "write_module_interface_files.m"
          }
#line 906 "write_module_interface_files.m"
          {
#line 873 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeEqCmp_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 906 "write_module_interface_files.m"
            if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 906 "write_module_interface_files.m"
              {
#line 873 "write_module_interface_files.m"
                (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeDirectArgCtors_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 906 "write_module_interface_files.m"
                if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 906 "write_module_interface_files.m"
                  {
#line 873 "write_module_interface_files.m"
                    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17)) == (MR_mktag((MR_Integer) 1)));
#line 873 "write_module_interface_files.m"
                    if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 873 "write_module_interface_files.m"
                      {
#line 873 "write_module_interface_files.m"
                        {
#line 873 "write_module_interface_files.m"
                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17, (MR_Integer) 0)));
#line 873 "write_module_interface_files.m"
                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17, (MR_Integer) 1)));
#line 873 "write_module_interface_files.m"
                        }
#line 906 "write_module_interface_files.m"
                        {
#line 873 "write_module_interface_files.m"
                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 906 "write_module_interface_files.m"
                          if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 906 "write_module_interface_files.m"
                            {
#line 875 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__ExistQTVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 0)));
#line 875 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Constraints_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 1)));
#line 875 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files___Name_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 2)));
#line 875 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 3)));
#line 875 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files___Arity_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 4)));
#line 875 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files___Context_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 5)));
#line 876 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__ExistQTVars_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 906 "write_module_interface_files.m"
                              if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 906 "write_module_interface_files.m"
                                {
#line 877 "write_module_interface_files.m"
                                  (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Constraints_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 906 "write_module_interface_files.m"
                                  if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 906 "write_module_interface_files.m"
                                    {
#line 910 "write_module_interface_files.m"
                                      {
#line 910 "write_module_interface_files.m"
                                        MR_Word base;
#line 910 "write_module_interface_files.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "write_module_interface_files.m"
                                        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes_20 = base;
#line 910 "write_module_interface_files.m"
                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6));
#line 910 "write_module_interface_files.m"
                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7));
#line 910 "write_module_interface_files.m"
                                      }
#line 881 "write_module_interface_files.m"
                                      if (((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 880 "write_module_interface_files.m"
                                        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = MR_TRUE;
#line 881 "write_module_interface_files.m"
                                      else
#line 883 "write_module_interface_files.m"
                                        {
#line 883 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__ArgType_51;
#line 883 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47, (MR_Integer) 0)));
#line 883 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47, (MR_Integer) 1)));
#line 883 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_57_57;
#line 883 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_50_50;
#line 883 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_52_52;
#line 883 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_53_53;

#line 883 "write_module_interface_files.m"
                                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = (parse_tree__write_module_interface_files__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "write_module_interface_files.m"
                                          if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 883 "write_module_interface_files.m"
                                            {
#line 883 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_55_55, (MR_Integer) 0)));
#line 883 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__ArgType_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_55_55, (MR_Integer) 1)));
#line 883 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_55_55, (MR_Integer) 2)));
#line 883 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_55_55, (MR_Integer) 3)));
#line 884 "write_module_interface_files.m"
                                              {
#line 884 "write_module_interface_files.m"
                                                parse_tree__write_module_interface_files__V_57_57 = parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5, parse_tree__write_module_interface_files__ArgType_51, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes_20);
                                              }
#line 884 "write_module_interface_files.m"
                                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = (parse_tree__write_module_interface_files__V_57_57 == (MR_Integer) 1);
#line 883 "write_module_interface_files.m"
                                            }
#line 883 "write_module_interface_files.m"
                                        }
#line 881 "write_module_interface_files.m"
                                      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 881 "write_module_interface_files.m"
                                        {
#line 881 "write_module_interface_files.m"
                                          parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_1(parse_tree__write_module_interface_files__env_ptr);
#line 881 "write_module_interface_files.m"
                                          return;
                                        }
#line 906 "write_module_interface_files.m"
                                    }
#line 906 "write_module_interface_files.m"
                                }
#line 906 "write_module_interface_files.m"
                            }
#line 906 "write_module_interface_files.m"
                        }
#line 873 "write_module_interface_files.m"
                      }
#line 906 "write_module_interface_files.m"
                  }
#line 906 "write_module_interface_files.m"
              }
#line 906 "write_module_interface_files.m"
          }
#line 908 "write_module_interface_files.m"
        }
#line 906 "write_module_interface_files.m"
    }
#line 906 "write_module_interface_files.m"
  }
#line 906 "write_module_interface_files.m"
}

#line 906 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_4(
#line 906 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 906 "write_module_interface_files.m"
{
#line 906 "write_module_interface_files.m"
  {
#line 906 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 906 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__commit_0) == 0)
#line 906 "write_module_interface_files.m"
      {
#line 906 "write_module_interface_files.m"
        {
#line 906 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeInfo_40_40 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0];
#line 906 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeDefns_14;

#line 906 "write_module_interface_files.m"
          {
#line 906 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, parse_tree__write_module_interface_files__TypeInfo_40_40, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5, ((MR_Box) ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13)), &parse_tree__write_module_interface_files__TypeDefns_14);
          }
#line 906 "write_module_interface_files.m"
          if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 907 "write_module_interface_files.m"
            {
#line 907 "write_module_interface_files.m"
              mercury__list__member_2_p_1(parse_tree__write_module_interface_files__TypeInfo_40_40, &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__conv0_V_36_36, parse_tree__write_module_interface_files__TypeDefns_14, parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_3, parse_tree__write_module_interface_files__env_ptr);
            }
#line 906 "write_module_interface_files.m"
        }
#line 906 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = MR_FALSE;
#line 906 "write_module_interface_files.m"
      }
#line 906 "write_module_interface_files.m"
    else
#line 906 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = MR_TRUE;
#line 906 "write_module_interface_files.m"
  }
#line 906 "write_module_interface_files.m"
}

#line 887 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(
#line 887 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_5,
#line 887 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_6,
#line 887 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__CoveredTypes0_7)
#line 887 "write_module_interface_files.m"
{
#line 887 "write_module_interface_files.m"
  {
#line 887 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s parse_tree__write_module_interface_files__env;

#line 887 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5 = parse_tree__write_module_interface_files__TypeDefnMap_5;
#line 887 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6 = parse_tree__write_module_interface_files__Type_6;
#line 887 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7 = parse_tree__write_module_interface_files__CoveredTypes0_7;
#line 891 "write_module_interface_files.m"
    {
#line 891 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__IsDummyType_8;

#line 891 "write_module_interface_files.m"
#line 891 "write_module_interface_files.m"
      switch (MR_tag((MR_Word) (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6)) {
#line 891 "write_module_interface_files.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 891 "write_module_interface_files.m"
        case (MR_Integer) 0:
#line 891 "write_module_interface_files.m"
        case (MR_Integer) 2:
#line 927 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 0;
#line 891 "write_module_interface_files.m"
          break;
#line 891 "write_module_interface_files.m"
        case (MR_Integer) 1:
#line 891 "write_module_interface_files.m"
          {
#line 891 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6, (MR_Integer) 0)));
#line 891 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__TypeArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6, (MR_Integer) 1)));
#line 891 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6, (MR_Integer) 2)));

#line 892 "write_module_interface_files.m"
            {
#line 892 "write_module_interface_files.m"
              (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6)), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7);
            }
#line 895 "write_module_interface_files.m"
            if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 894 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 0;
#line 895 "write_module_interface_files.m"
            else
#line 896 "write_module_interface_files.m"
              {
#line 896 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__Arity_12;
#line 900 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_35_35;

#line 896 "write_module_interface_files.m"
                {
#line 896 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__Arity_12 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__write_module_interface_files__TypeArgs_10);
                }
#line 897 "write_module_interface_files.m"
                {
#line 897 "write_module_interface_files.m"
                  MR_Word base;
#line 897 "write_module_interface_files.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 897 "write_module_interface_files.m"
                  (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13 = base;
#line 897 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__SymName_9));
#line 897 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Arity_12));
#line 897 "write_module_interface_files.m"
                }
#line 899 "write_module_interface_files.m"
                {
#line 899 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__V_35_35 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13);
                }
#line 900 "write_module_interface_files.m"
                (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = (parse_tree__write_module_interface_files__V_35_35 == (MR_Integer) 0);
#line 903 "write_module_interface_files.m"
                if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 902 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 1;
#line 903 "write_module_interface_files.m"
                else
#line 915 "write_module_interface_files.m"
                  {
#line 906 "write_module_interface_files.m"
                    {
#line 906 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_4(&parse_tree__write_module_interface_files__env);
                    }
#line 915 "write_module_interface_files.m"
                    if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 914 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 1;
#line 915 "write_module_interface_files.m"
                    else
#line 916 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 0;
#line 915 "write_module_interface_files.m"
                  }
#line 896 "write_module_interface_files.m"
              }
#line 891 "write_module_interface_files.m"
          }
#line 891 "write_module_interface_files.m"
          break;
#line 891 "write_module_interface_files.m"
        case (MR_Integer) 3:
#line 927 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 0;
#line 891 "write_module_interface_files.m"
          break;
#line 891 "write_module_interface_files.m"
      }
#line 891 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__IsDummyType_8;
#line 891 "write_module_interface_files.m"
    }
#line 887 "write_module_interface_files.m"
  }
#line 887 "write_module_interface_files.m"
}

#line 821 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__make_impl_type_abstract_3_p_0(
#line 821 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_4,
#line 821 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15,
#line 821 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16)
#line 821 "write_module_interface_files.m"
{
#line 846 "write_module_interface_files.m"
  {
#line 846 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15)) == (MR_mktag((MR_Integer) 1)));
#line 846 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemTypeDefn0_7;
#line 846 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Ctors_8;
#line 846 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__MaybeEqCmp_9;
#line 846 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__MaybeDirectArgCtors_10;
#line 827 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefn0_6;
#line 827 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_17_17;
#line 827 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_18_18;

#line 827 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 827 "write_module_interface_files.m"
      {
#line 827 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15, (MR_Integer) 0)));
#line 827 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15, (MR_Integer) 1)));
#line 827 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 827 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 827 "write_module_interface_files.m"
          {
#line 827 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__TypeDefn0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 0)));
#line 827 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__ItemTypeDefn0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 1)));
#line 828 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn0_6)) == (MR_mktag((MR_Integer) 0)));
#line 828 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 828 "write_module_interface_files.m"
              {
#line 828 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Ctors_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn0_6, (MR_Integer) 0)));
#line 828 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeEqCmp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn0_6, (MR_Integer) 1)));
#line 828 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeDirectArgCtors_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn0_6, (MR_Integer) 2)));
#line 828 "write_module_interface_files.m"
              }
#line 827 "write_module_interface_files.m"
          }
#line 827 "write_module_interface_files.m"
      }
#line 846 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 836 "write_module_interface_files.m"
      {
#line 865 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_32_32;
#line 865 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Ctor_35;
#line 865 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ExistQTVars_36;
#line 865 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Constraints_37;
#line 865 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Args_39;
#line 865 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_46_46;
#line 875 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___Name_38;
#line 875 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___Arity_40;
#line 875 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___Context_41;

#line 873 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeEqCmp_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 865 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 865 "write_module_interface_files.m"
          {
#line 873 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeDirectArgCtors_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 865 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 865 "write_module_interface_files.m"
              {
#line 867 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 873 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Ctors_8)) == (MR_mktag((MR_Integer) 1)));
#line 873 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 873 "write_module_interface_files.m"
                  {
#line 873 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__Ctor_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_8, (MR_Integer) 0)));
#line 873 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_8, (MR_Integer) 1)));
#line 873 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 865 "write_module_interface_files.m"
                    if (parse_tree__write_module_interface_files__succeeded)
#line 865 "write_module_interface_files.m"
                      {
#line 875 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__ExistQTVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 0)));
#line 875 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__Constraints_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 1)));
#line 875 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files___Name_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 2)));
#line 875 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__Args_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 3)));
#line 875 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files___Arity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 4)));
#line 875 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files___Context_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 5)));
#line 876 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__ExistQTVars_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 865 "write_module_interface_files.m"
                        if (parse_tree__write_module_interface_files__succeeded)
#line 865 "write_module_interface_files.m"
                          {
#line 877 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__Constraints_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 865 "write_module_interface_files.m"
                            if (parse_tree__write_module_interface_files__succeeded)
#line 881 "write_module_interface_files.m"
                              {
#line 881 "write_module_interface_files.m"
                                if ((parse_tree__write_module_interface_files__Args_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 880 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 881 "write_module_interface_files.m"
                                else
#line 883 "write_module_interface_files.m"
                                  {
#line 883 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__ArgType_43;
#line 883 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_39, (MR_Integer) 0)));
#line 883 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_39, (MR_Integer) 1)));
#line 883 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_49_49;
#line 883 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_42_42;
#line 883 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_44_44;
#line 883 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_45_45;

#line 883 "write_module_interface_files.m"
                                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "write_module_interface_files.m"
                                    if (parse_tree__write_module_interface_files__succeeded)
#line 883 "write_module_interface_files.m"
                                      {
#line 883 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, (MR_Integer) 0)));
#line 883 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__ArgType_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, (MR_Integer) 1)));
#line 883 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, (MR_Integer) 2)));
#line 883 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, (MR_Integer) 3)));
#line 884 "write_module_interface_files.m"
                                        {
#line 884 "write_module_interface_files.m"
                                          parse_tree__write_module_interface_files__V_49_49 = parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(parse_tree__write_module_interface_files__TypeDefnMap_4, parse_tree__write_module_interface_files__ArgType_43, parse_tree__write_module_interface_files__V_32_32);
                                        }
#line 884 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_49_49 == (MR_Integer) 1);
#line 883 "write_module_interface_files.m"
                                      }
#line 883 "write_module_interface_files.m"
                                  }
#line 881 "write_module_interface_files.m"
                              }
#line 865 "write_module_interface_files.m"
                          }
#line 865 "write_module_interface_files.m"
                      }
#line 873 "write_module_interface_files.m"
                  }
#line 865 "write_module_interface_files.m"
              }
#line 865 "write_module_interface_files.m"
          }
#line 836 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 836 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15;
#line 836 "write_module_interface_files.m"
        else
#line 841 "write_module_interface_files.m"
          {
#line 841 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Details_12;
#line 841 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Defn_13;
#line 841 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_14;
#line 841 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 839 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__NumBits_11;
#line 843 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 843 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 843 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 843 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 843 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_27_27;
#line 843 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_24_24;

#line 837 "write_module_interface_files.m"
            {
#line 837 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(parse_tree__write_module_interface_files__Ctors_8, &parse_tree__write_module_interface_files__NumBits_11);
            }
#line 839 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 838 "write_module_interface_files.m"
              {
#line 838 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Details_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 838 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Details_12, 0) = ((MR_Box) (parse_tree__write_module_interface_files__NumBits_11));
#line 838 "write_module_interface_files.m"
              }
#line 839 "write_module_interface_files.m"
            else
#line 840 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Details_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 842 "write_module_interface_files.m"
            {
#line 842 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Defn_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 842 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(2), parse_tree__write_module_interface_files__Defn_13, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Details_12));
#line 842 "write_module_interface_files.m"
            }
#line 843 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 0)));
#line 843 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 1)));
#line 843 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 2)));
#line 843 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 3)));
#line 843 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 4)));
#line 843 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 5)));
#line 843 "write_module_interface_files.m"
            {
#line 843 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ItemTypeDefn_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 843 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_22_22));
#line 843 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_23_23));
#line 843 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 2) = ((MR_Box) (parse_tree__write_module_interface_files__Defn_13));
#line 843 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 3) = ((MR_Box) (parse_tree__write_module_interface_files__V_25_25));
#line 843 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 4) = ((MR_Box) (parse_tree__write_module_interface_files__V_26_26));
#line 843 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 5) = ((MR_Box) (parse_tree__write_module_interface_files__V_27_27));
#line 843 "write_module_interface_files.m"
            }
#line 844 "write_module_interface_files.m"
            {
#line 844 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 844 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_20_20, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Defn_13));
#line 844 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_20_20, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_14));
#line 844 "write_module_interface_files.m"
            }
#line 844 "write_module_interface_files.m"
            {
#line 844 "write_module_interface_files.m"
              MR_Word base;
#line 844 "write_module_interface_files.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16 = base;
#line 844 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_20_20));
#line 844 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 844 "write_module_interface_files.m"
            }
#line 841 "write_module_interface_files.m"
          }
#line 836 "write_module_interface_files.m"
      }
#line 846 "write_module_interface_files.m"
    else
#line 846 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15;
#line 846 "write_module_interface_files.m"
  }
#line 821 "write_module_interface_files.m"
}

#line 796 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__insert_type_defn_3_p_0(
#line 796 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__New_1,
#line 796 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 796 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3)
#line 796 "write_module_interface_files.m"
{
#line 799 "write_module_interface_files.m"
  {
#line 799 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 799 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 799 "write_module_interface_files.m"
      {
#line 799 "write_module_interface_files.m"
        {
#line 799 "write_module_interface_files.m"
          MR_Word base;
#line 799 "write_module_interface_files.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 799 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__New_1));
#line 799 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 799 "write_module_interface_files.m"
        }
#line 799 "write_module_interface_files.m"
      }
#line 799 "write_module_interface_files.m"
    else
#line 800 "write_module_interface_files.m"
      {
#line 800 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 800 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 800 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NewSymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 0)));
#line 800 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NewParams_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 1)));
#line 800 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__HeadSymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 0)));
#line 800 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__HeadParams_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 1)));
#line 800 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__CompareSymName_22;
#line 801 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 2)));
#line 801 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 3)));
#line 801 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 4)));
#line 801 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 5)));
#line 802 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 2)));
#line 802 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 3)));
#line 802 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 4)));
#line 802 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 5)));

#line 803 "write_module_interface_files.m"
        {
#line 803 "write_module_interface_files.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__write_module_interface_files__CompareSymName_22, parse_tree__write_module_interface_files__NewSymName_10, parse_tree__write_module_interface_files__HeadSymName_16);
        }
#line 807 "write_module_interface_files.m"
#line 807 "write_module_interface_files.m"
        switch (parse_tree__write_module_interface_files__CompareSymName_22) {
#line 807 "write_module_interface_files.m"
          default:
#line 807 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 807 "write_module_interface_files.m"
            break;
#line 807 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 806 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 807 "write_module_interface_files.m"
            break;
#line 807 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 808 "write_module_interface_files.m"
            {
#line 808 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__TypeInfo_29_29 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[3];
#line 808 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__NewParamsLength_23;
#line 808 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__HeadParamsLength_24;
#line 808 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Compare_25;

#line 809 "write_module_interface_files.m"
              {
#line 809 "write_module_interface_files.m"
                mercury__list__length_2_p_0(parse_tree__write_module_interface_files__TypeInfo_29_29, parse_tree__write_module_interface_files__NewParams_11, &parse_tree__write_module_interface_files__NewParamsLength_23);
              }
#line 810 "write_module_interface_files.m"
              {
#line 810 "write_module_interface_files.m"
                mercury__list__length_2_p_0(parse_tree__write_module_interface_files__TypeInfo_29_29, parse_tree__write_module_interface_files__HeadParams_17, &parse_tree__write_module_interface_files__HeadParamsLength_24);
              }
#line 811 "write_module_interface_files.m"
              {
#line 811 "write_module_interface_files.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__write_module_interface_files__Compare_25, parse_tree__write_module_interface_files__NewParamsLength_23, parse_tree__write_module_interface_files__HeadParamsLength_24);
              }
#line 812 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__Compare_25 == (MR_Integer) 1);
#line 808 "write_module_interface_files.m"
            }
#line 807 "write_module_interface_files.m"
            break;
#line 807 "write_module_interface_files.m"
        }
#line 816 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 815 "write_module_interface_files.m"
          {
#line 815 "write_module_interface_files.m"
            MR_Word base;
#line 815 "write_module_interface_files.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 815 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__New_1));
#line 815 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__HeadVar__2_2));
#line 815 "write_module_interface_files.m"
          }
#line 816 "write_module_interface_files.m"
        else
#line 817 "write_module_interface_files.m"
          {
#line 817 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__NewTail_26;

#line 817 "write_module_interface_files.m"
            {
#line 817 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__insert_type_defn_3_p_0(parse_tree__write_module_interface_files__New_1, parse_tree__write_module_interface_files__Tail_8, &parse_tree__write_module_interface_files__NewTail_26);
            }
#line 818 "write_module_interface_files.m"
            {
#line 818 "write_module_interface_files.m"
              MR_Word base;
#line 818 "write_module_interface_files.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 818 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Head_7));
#line 818 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__NewTail_26));
#line 818 "write_module_interface_files.m"
            }
#line 817 "write_module_interface_files.m"
          }
#line 800 "write_module_interface_files.m"
      }
#line 799 "write_module_interface_files.m"
  }
#line 796 "write_module_interface_files.m"
}

#line 763 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_standardize_impl_items_9_p_0(
#line 763 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 763 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2,
#line 763 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_3,
#line 763 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4,
#line 763 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_5,
#line 763 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6,
#line 763 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_7,
#line 763 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_8,
#line 763 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_9)
#line 763 "write_module_interface_files.m"
{
#line 769 "write_module_interface_files.m"
  while (MR_TRUE)
#line 769 "write_module_interface_files.m"
    {
#line 769 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 769 "write_module_interface_files.m"
      {
#line 769 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 769 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 769 "write_module_interface_files.m"
          {
#line 770 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_9 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_8;
#line 770 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_7 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6;
#line 770 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4;
#line 769 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2;
#line 769 "write_module_interface_files.m"
          }
#line 769 "write_module_interface_files.m"
        else
#line 772 "write_module_interface_files.m"
          {
#line 772 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 772 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 772 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_46_46;
#line 772 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_50_50;
#line 772 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_51_51;
#line 772 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_52_52;
#line 788 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_28;

#line 773 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_22)) == (MR_mktag((MR_Integer) 0)));
#line 773 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 773 "write_module_interface_files.m"
              {
#line 773 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ItemModuleDefn_28 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_22), (MR_Integer) 0);
#line 774 "write_module_interface_files.m"
                {
#line 774 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__ModuleDefn_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_28, (MR_Integer) 0)));
#line 774 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_28, (MR_Integer) 1)));
#line 774 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_28, (MR_Integer) 2)));

#line 778 "write_module_interface_files.m"
#line 778 "write_module_interface_files.m"
                  switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_29)) {
#line 778 "write_module_interface_files.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 778 "write_module_interface_files.m"
                    case (MR_Integer) 0:
#line 785 "write_module_interface_files.m"
                      {
#line 786 "write_module_interface_files.m"
                        {
#line 786 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_46_46, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_22));
#line 786 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_46_46, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2));
#line 786 "write_module_interface_files.m"
                        }
#line 785 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_51_51 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4;
#line 785 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_50_50 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6;
#line 785 "write_module_interface_files.m"
                      }
#line 778 "write_module_interface_files.m"
                      break;
#line 778 "write_module_interface_files.m"
                    case (MR_Integer) 1:
#line 782 "write_module_interface_files.m"
                      {
#line 783 "write_module_interface_files.m"
                        {
#line 783 "write_module_interface_files.m"
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.do_standardize_impl_items\'/9", (MR_String) "unexpected item");
#line 783 "write_module_interface_files.m"
                          return;
                        }
#line 782 "write_module_interface_files.m"
                      }
#line 778 "write_module_interface_files.m"
                      break;
#line 778 "write_module_interface_files.m"
                    case (MR_Integer) 2:
#line 776 "write_module_interface_files.m"
                      {
#line 776 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__ImportedModuleName_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__write_module_interface_files__ModuleDefn_29, (MR_Integer) 0)));

#line 777 "write_module_interface_files.m"
                        {
#line 777 "write_module_interface_files.m"
                          mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__term__term__type_ctor_info_context_0, ((MR_Box) (parse_tree__write_module_interface_files__ImportedModuleName_32)), ((MR_Box) (parse_tree__write_module_interface_files__Context_30)), parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_51_51);
                        }
#line 776 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_46_46 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2;
#line 776 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_50_50 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6;
#line 776 "write_module_interface_files.m"
                      }
#line 778 "write_module_interface_files.m"
                      break;
#line 778 "write_module_interface_files.m"
                    case (MR_Integer) 3:
#line 779 "write_module_interface_files.m"
                      {
#line 779 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__UsedModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_29, (MR_Integer) 0)));

#line 780 "write_module_interface_files.m"
                        {
#line 780 "write_module_interface_files.m"
                          mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__term__term__type_ctor_info_context_0, ((MR_Box) (parse_tree__write_module_interface_files__UsedModuleName_33)), ((MR_Box) (parse_tree__write_module_interface_files__Context_30)), parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6, &parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_50_50);
                        }
#line 779 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_46_46 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2;
#line 779 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_51_51 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4;
#line 779 "write_module_interface_files.m"
                      }
#line 778 "write_module_interface_files.m"
                      break;
#line 778 "write_module_interface_files.m"
                  }
#line 774 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_52_52 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_8;
#line 774 "write_module_interface_files.m"
                }
#line 773 "write_module_interface_files.m"
              }
#line 773 "write_module_interface_files.m"
            else
#line 790 "write_module_interface_files.m"
              {
#line 790 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_37;

#line 788 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_22)) == (MR_mktag((MR_Integer) 2)));
#line 788 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 788 "write_module_interface_files.m"
                  {
#line 788 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__ItemTypeDefn_37 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_22), (MR_Integer) 2);
#line 789 "write_module_interface_files.m"
                    {
#line 789 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__insert_type_defn_3_p_0(parse_tree__write_module_interface_files__ItemTypeDefn_37, parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_8, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_52_52);
                    }
#line 789 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_46_46 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2;
#line 788 "write_module_interface_files.m"
                  }
#line 788 "write_module_interface_files.m"
                else
#line 791 "write_module_interface_files.m"
                  {
#line 791 "write_module_interface_files.m"
                    {
#line 791 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_46_46, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_22));
#line 791 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_46_46, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2));
#line 791 "write_module_interface_files.m"
                    }
#line 791 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_52_52 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_8;
#line 791 "write_module_interface_files.m"
                  }
#line 790 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_50_50 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6;
#line 790 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_51_51 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4;
#line 790 "write_module_interface_files.m"
              }
#line 793 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 793 "write_module_interface_files.m"
            {
#line 793 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_23;
#line 793 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_46_46;
#line 793 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0__tmp_copy_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_51_51;
#line 793 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0__tmp_copy_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_50_50;
#line 793 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0__tmp_copy_8 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_52_52;

#line 793 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_8 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0__tmp_copy_8;
#line 793 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseModuleMap_0__tmp_copy_6;
#line 793 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportModuleMap_0__tmp_copy_4;
#line 793 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0__tmp_copy_2;
#line 793 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 793 "write_module_interface_files.m"
            }
#line 793 "write_module_interface_files.m"
            continue;
#line 772 "write_module_interface_files.m"
          }
#line 769 "write_module_interface_files.m"
      }
#line 769 "write_module_interface_files.m"
      break;
#line 769 "write_module_interface_files.m"
    }
#line 763 "write_module_interface_files.m"
}

#line 759 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_type_defn_item_1_f_0(
#line 759 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_3)
#line 759 "write_module_interface_files.m"
{
#line 761 "write_module_interface_files.m"
  {
#line 761 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 761 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__write_module_interface_files__ItemTypeDefn_3);

#line 761 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__HeadVar__2_2;
#line 761 "write_module_interface_files.m"
  }
#line 759 "write_module_interface_files.m"
}

#line 752 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_use_module_item_1_f_0(
#line 752 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1)
#line 752 "write_module_interface_files.m"
{
#line 754 "write_module_interface_files.m"
  {
#line 754 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 754 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Item_5;
#line 754 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 754 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 754 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_6;
#line 754 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_7;

#line 755 "write_module_interface_files.m"
    {
#line 755 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ModuleDefn_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 755 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_3));
#line 755 "write_module_interface_files.m"
    }
#line 756 "write_module_interface_files.m"
    {
#line 756 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ItemModuleDefn_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 756 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_7, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleDefn_6));
#line 756 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_7, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Context_4));
#line 756 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_7, 2) = ((MR_Box) ((MR_Integer) -1));
#line 756 "write_module_interface_files.m"
    }
#line 757 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__Item_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__write_module_interface_files__ItemModuleDefn_7);
#line 754 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Item_5;
#line 754 "write_module_interface_files.m"
  }
#line 752 "write_module_interface_files.m"
}

#line 745 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_import_module_item_1_f_0(
#line 745 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1)
#line 745 "write_module_interface_files.m"
{
#line 747 "write_module_interface_files.m"
  {
#line 747 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 747 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Item_5;
#line 747 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 747 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 747 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_6;
#line 747 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_7;

#line 748 "write_module_interface_files.m"
    {
#line 748 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ModuleDefn_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 748 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(2), parse_tree__write_module_interface_files__ModuleDefn_6, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_3));
#line 748 "write_module_interface_files.m"
    }
#line 749 "write_module_interface_files.m"
    {
#line 749 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ItemModuleDefn_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 749 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_7, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleDefn_6));
#line 749 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_7, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Context_4));
#line 749 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_7, 2) = ((MR_Box) ((MR_Integer) -1));
#line 749 "write_module_interface_files.m"
    }
#line 750 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__Item_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__write_module_interface_files__ItemModuleDefn_7);
#line 747 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Item_5;
#line 747 "write_module_interface_files.m"
  }
#line 745 "write_module_interface_files.m"
}

#line 741 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_3(
#line 741 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 741 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 741 "write_module_interface_files.m"
{
#line 741 "write_module_interface_files.m"
  {
#line 741 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__wrapper_arg_2;
#line 741 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 741 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_HeadVar__2_2;

#line 741 "write_module_interface_files.m"
    {
#line 741 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__conv2_HeadVar__2_2 = parse_tree__write_module_interface_files__wrap_type_defn_item_1_f_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 741 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_HeadVar__2_2));
#line 741 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__wrapper_arg_2;
#line 741 "write_module_interface_files.m"
  }
#line 741 "write_module_interface_files.m"
}

#line 740 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_2(
#line 740 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 740 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 740 "write_module_interface_files.m"
{
#line 740 "write_module_interface_files.m"
  {
#line 740 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__wrapper_arg_2;
#line 740 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 740 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv1_Item_5;

#line 740 "write_module_interface_files.m"
    {
#line 740 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__conv1_Item_5 = parse_tree__write_module_interface_files__wrap_use_module_item_1_f_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 740 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv1_Item_5));
#line 740 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__wrapper_arg_2;
#line 740 "write_module_interface_files.m"
  }
#line 740 "write_module_interface_files.m"
}

#line 739 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_1(
#line 739 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 739 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 739 "write_module_interface_files.m"
{
#line 739 "write_module_interface_files.m"
  {
#line 739 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__wrapper_arg_2;
#line 739 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 739 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_Item_5;

#line 739 "write_module_interface_files.m"
    {
#line 739 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__conv0_Item_5 = parse_tree__write_module_interface_files__wrap_import_module_item_1_f_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 739 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_Item_5));
#line 739 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__wrapper_arg_2;
#line 739 "write_module_interface_files.m"
  }
#line 739 "write_module_interface_files.m"
}

#line 731 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0(
#line 731 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 731 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4)
#line 731 "write_module_interface_files.m"
{
#line 733 "write_module_interface_files.m"
  {
#line 733 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_27_27 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_context_0;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_29_29;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_30_30;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevRemainderItems_5;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImportModuleMap_6;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__UseModuleMap_7;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefnInfos_8;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RemainderItems_9;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImportModuleAssocList_10;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__UseModuleAssocList_11;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImportItems_12;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__UseItems_13;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefnItems_14;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_16_16;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_17_17;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 733 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_25_25;

#line 735 "write_module_interface_files.m"
    {
#line 735 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_16_16 = mercury__map__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_27_27, parse_tree__write_module_interface_files__TypeCtorInfo_28_28);
    }
#line 735 "write_module_interface_files.m"
    {
#line 735 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_17_17 = mercury__map__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_27_27, parse_tree__write_module_interface_files__TypeCtorInfo_28_28);
    }
#line 734 "write_module_interface_files.m"
    {
#line 734 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__do_standardize_impl_items_9_p_0(parse_tree__write_module_interface_files__Items0_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevRemainderItems_5, parse_tree__write_module_interface_files__V_16_16, &parse_tree__write_module_interface_files__ImportModuleMap_6, parse_tree__write_module_interface_files__V_17_17, &parse_tree__write_module_interface_files__UseModuleMap_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__TypeDefnInfos_8);
    }
#line 10498 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 736 "write_module_interface_files.m"
    {
#line 736 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_29_29, parse_tree__write_module_interface_files__RevRemainderItems_5, &parse_tree__write_module_interface_files__RemainderItems_9);
    }
#line 737 "write_module_interface_files.m"
    {
#line 737 "write_module_interface_files.m"
      mercury__map__to_assoc_list_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_27_27, parse_tree__write_module_interface_files__TypeCtorInfo_28_28, parse_tree__write_module_interface_files__ImportModuleMap_6, &parse_tree__write_module_interface_files__ImportModuleAssocList_10);
    }
#line 738 "write_module_interface_files.m"
    {
#line 738 "write_module_interface_files.m"
      mercury__map__to_assoc_list_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_27_27, parse_tree__write_module_interface_files__TypeCtorInfo_28_28, parse_tree__write_module_interface_files__UseModuleMap_7, &parse_tree__write_module_interface_files__UseModuleAssocList_11);
    }
#line 10515 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeInfo_30_30 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[2];
#line 739 "write_module_interface_files.m"
    {
#line 739 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ImportItems_12 = mercury__list__map_2_f_0(parse_tree__write_module_interface_files__TypeInfo_30_30, parse_tree__write_module_interface_files__TypeCtorInfo_29_29, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[7], parse_tree__write_module_interface_files__ImportModuleAssocList_10);
    }
#line 740 "write_module_interface_files.m"
    {
#line 740 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__UseItems_13 = mercury__list__map_2_f_0(parse_tree__write_module_interface_files__TypeInfo_30_30, parse_tree__write_module_interface_files__TypeCtorInfo_29_29, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[8], parse_tree__write_module_interface_files__UseModuleAssocList_11);
    }
#line 741 "write_module_interface_files.m"
    {
#line 741 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__TypeDefnItems_14 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0, parse_tree__write_module_interface_files__TypeCtorInfo_29_29, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[9], parse_tree__write_module_interface_files__TypeDefnInfos_8);
    }
#line 742 "write_module_interface_files.m"
    {
#line 742 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_25_25, 0) = ((MR_Box) (parse_tree__write_module_interface_files__RemainderItems_9));
#line 742 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "write_module_interface_files.m"
    }
#line 742 "write_module_interface_files.m"
    {
#line 742 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_24_24, 0) = ((MR_Box) (parse_tree__write_module_interface_files__TypeDefnItems_14));
#line 742 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_24_24, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_25_25));
#line 742 "write_module_interface_files.m"
    }
#line 742 "write_module_interface_files.m"
    {
#line 742 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_23_23, 0) = ((MR_Box) (parse_tree__write_module_interface_files__UseItems_13));
#line 742 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_23_23, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_24_24));
#line 742 "write_module_interface_files.m"
    }
#line 742 "write_module_interface_files.m"
    {
#line 742 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_22_22, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ImportItems_12));
#line 742 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_22_22, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_23_23));
#line 742 "write_module_interface_files.m"
    }
#line 742 "write_module_interface_files.m"
    {
#line 742 "write_module_interface_files.m"
      mercury__list__condense_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_29_29, parse_tree__write_module_interface_files__V_22_22, parse_tree__write_module_interface_files__Items_4);
#line 742 "write_module_interface_files.m"
      return;
    }
#line 733 "write_module_interface_files.m"
  }
#line 731 "write_module_interface_files.m"
}

#line 720 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__add_type_defn_items_3_p_0(
#line 720 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 720 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_2,
#line 720 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_3)
#line 720 "write_module_interface_files.m"
{
#line 723 "write_module_interface_files.m"
  while (MR_TRUE)
#line 723 "write_module_interface_files.m"
    {
#line 723 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 723 "write_module_interface_files.m"
      {
#line 723 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 723 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 723 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_2;
#line 723 "write_module_interface_files.m"
        else
#line 724 "write_module_interface_files.m"
          {
#line 724 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__TypeDefnPair_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 724 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__TypeDefnPairs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 724 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefnPair_7, (MR_Integer) 1)));
#line 724 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_14_14;
#line 724 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__write_module_interface_files__ItemTypeDefn_11);
#line 725 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___TypeDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefnPair_7, (MR_Integer) 0)));

#line 726 "write_module_interface_files.m"
            {
#line 726 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_14_14, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_15_15));
#line 726 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_14_14, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_2));
#line 726 "write_module_interface_files.m"
            }
#line 727 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 727 "write_module_interface_files.m"
            {
#line 727 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__TypeDefnPairs_8;
#line 727 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_14_14;

#line 727 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0__tmp_copy_2;
#line 727 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 727 "write_module_interface_files.m"
            }
#line 727 "write_module_interface_files.m"
            continue;
#line 724 "write_module_interface_files.m"
          }
#line 723 "write_module_interface_files.m"
      }
#line 723 "write_module_interface_files.m"
      break;
#line 723 "write_module_interface_files.m"
    }
#line 720 "write_module_interface_files.m"
}

#line 713 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__add_type_defn_items_from_map_4_p_0(
#line 713 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files___TypeCtor_5,
#line 713 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnPairs_6,
#line 713 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_8,
#line 713 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_9)
#line 713 "write_module_interface_files.m"
{
#line 718 "write_module_interface_files.m"
  {
#line 718 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 718 "write_module_interface_files.m"
    {
#line 718 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_116_121_112_101_95_100_101_102_110_95_105_116_101_109_115_95_102_114_111_109_95_109_97_112_95_95_91_49_93_95_48_4_p_0(parse_tree__write_module_interface_files__TypeDefnPairs_6, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_8, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_9);
#line 718 "write_module_interface_files.m"
      return;
    }
#line 718 "write_module_interface_files.m"
  }
#line 713 "write_module_interface_files.m"
}

#line 700 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_1(
#line 700 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 700 "write_module_interface_files.m"
{
#line 700 "write_module_interface_files.m"
  {
#line 700 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 700 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__commit_0, 1);
#line 700 "write_module_interface_files.m"
  }
#line 700 "write_module_interface_files.m"
}

#line 701 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_3(
#line 701 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 701 "write_module_interface_files.m"
{
#line 701 "write_module_interface_files.m"
  {
#line 701 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 701 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__V_16_16 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__conv0_V_16_16);
#line 701 "write_module_interface_files.m"
    {
#line 701 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_2(parse_tree__write_module_interface_files__env_ptr);
#line 701 "write_module_interface_files.m"
      return;
    }
#line 701 "write_module_interface_files.m"
  }
#line 701 "write_module_interface_files.m"
}

#line 700 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_2(
#line 700 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 700 "write_module_interface_files.m"
{
#line 700 "write_module_interface_files.m"
  {
#line 700 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 700 "write_module_interface_files.m"
    {
#line 701 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 703 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__Details_12;
#line 704 "write_module_interface_files.m"
      MR_Integer parse_tree__write_module_interface_files__V_13_13;

#line 701 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__Defn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__V_16_16, (MR_Integer) 0)));
#line 701 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__V_16_16, (MR_Integer) 1)));
#line 703 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__Defn_10)) == (MR_mktag((MR_Integer) 2)));
#line 703 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded)
#line 703 "write_module_interface_files.m"
        {
#line 703 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Details_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__Defn_10, (MR_Integer) 0)));
#line 703 "write_module_interface_files.m"
          {
#line 704 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Details_12)) == (MR_mktag((MR_Integer) 1)));
#line 704 "write_module_interface_files.m"
            if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded)
#line 704 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Details_12, (MR_Integer) 0)));
#line 704 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = !((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded);
#line 703 "write_module_interface_files.m"
          }
#line 703 "write_module_interface_files.m"
        }
#line 702 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = !((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded);
#line 702 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded)
#line 702 "write_module_interface_files.m"
        {
#line 702 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_1(parse_tree__write_module_interface_files__env_ptr);
#line 702 "write_module_interface_files.m"
          return;
        }
#line 700 "write_module_interface_files.m"
    }
#line 700 "write_module_interface_files.m"
  }
#line 700 "write_module_interface_files.m"
}

#line 700 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_4(
#line 700 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 700 "write_module_interface_files.m"
{
#line 700 "write_module_interface_files.m"
  {
#line 700 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 700 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__commit_0) == 0)
#line 700 "write_module_interface_files.m"
      {
#line 700 "write_module_interface_files.m"
        {
#line 701 "write_module_interface_files.m"
          {
#line 701 "write_module_interface_files.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__conv0_V_16_16, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpTypeDefnPairs_8, parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_3, parse_tree__write_module_interface_files__env_ptr);
          }
#line 700 "write_module_interface_files.m"
        }
#line 700 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = MR_FALSE;
#line 700 "write_module_interface_files.m"
      }
#line 700 "write_module_interface_files.m"
    else
#line 700 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = MR_TRUE;
#line 700 "write_module_interface_files.m"
  }
#line 700 "write_module_interface_files.m"
}

#line 693 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0(
#line 693 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntTypesMap_6,
#line 693 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImpTypeCtor_7,
#line 693 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImpTypeDefnPairs_8,
#line 693 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_0_14,
#line 693 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_15)
#line 693 "write_module_interface_files.m"
{
#line 693 "write_module_interface_files.m"
  {
#line 693 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0_s parse_tree__write_module_interface_files__env;

#line 693 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__ImpTypeDefnPairs_8 = parse_tree__write_module_interface_files__ImpTypeDefnPairs_8;
#line 709 "write_module_interface_files.m"
    {
#line 705 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_19_19;
#line 705 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__TypeInfo_20_20;

#line 700 "write_module_interface_files.m"
      {
#line 700 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_4(&parse_tree__write_module_interface_files__env);
      }
#line 700 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = !((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded);
#line 705 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded)
#line 705 "write_module_interface_files.m"
        {
#line 10883 "parse_tree.write_module_interface_files.c"
          parse_tree__write_module_interface_files__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 10885 "parse_tree.write_module_interface_files.c"
          parse_tree__write_module_interface_files__TypeInfo_20_20 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0];
#line 706 "write_module_interface_files.m"
          {
#line 706 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded = mercury__multi_map__contains_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_19_19, parse_tree__write_module_interface_files__TypeInfo_20_20, parse_tree__write_module_interface_files__IntTypesMap_6, ((MR_Box) (parse_tree__write_module_interface_files__ImpTypeCtor_7)));
          }
#line 705 "write_module_interface_files.m"
        }
#line 709 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0_env_0__succeeded)
#line 708 "write_module_interface_files.m"
        {
#line 708 "write_module_interface_files.m"
          {
#line 708 "write_module_interface_files.m"
            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__ImpTypeCtor_7)), parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_0_14, parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_15);
#line 708 "write_module_interface_files.m"
            return;
          }
#line 708 "write_module_interface_files.m"
        }
#line 709 "write_module_interface_files.m"
      else
#line 709 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_15 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbstractExportedTypes_0_14;
#line 709 "write_module_interface_files.m"
    }
#line 693 "write_module_interface_files.m"
  }
#line 693 "write_module_interface_files.m"
}

#line 676 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_5(
#line 676 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 676 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 676 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 676 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3,
#line 676 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_4)
#line 676 "write_module_interface_files.m"
{
#line 676 "write_module_interface_files.m"
  {
#line 676 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 676 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ImpItems_9;

#line 676 "write_module_interface_files.m"
    {
#line 676 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__add_type_defn_items_from_map_4_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3), &parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ImpItems_9);
    }
#line 676 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_4 = ((MR_Box) (parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ImpItems_9));
#line 676 "write_module_interface_files.m"
  }
#line 676 "write_module_interface_files.m"
}

#line 673 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_4(
#line 673 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 673 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 673 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 673 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 673 "write_module_interface_files.m"
{
#line 673 "write_module_interface_files.m"
  {
#line 673 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 673 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv5_HeadVar__3_57;

#line 673 "write_module_interface_files.m"
    {
#line 673 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__673__1_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv5_HeadVar__3_57);
    }
#line 673 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv5_HeadVar__3_57));
#line 673 "write_module_interface_files.m"
  }
#line 673 "write_module_interface_files.m"
}

#line 671 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_3(
#line 671 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 671 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 671 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 671 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3,
#line 671 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_4)
#line 671 "write_module_interface_files.m"
{
#line 671 "write_module_interface_files.m"
  {
#line 671 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 671 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbstractExportedTypes_15;

#line 671 "write_module_interface_files.m"
    {
#line 671 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__find_removable_abstract_exported_types_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbstractExportedTypes_15);
    }
#line 671 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_4 = ((MR_Box) (parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbstractExportedTypes_15));
#line 671 "write_module_interface_files.m"
  }
#line 671 "write_module_interface_files.m"
}

#line 662 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_2(
#line 662 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 662 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 662 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_2)
#line 662 "write_module_interface_files.m"
{
#line 662 "write_module_interface_files.m"
  {
#line 662 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 662 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_TypeDefnPairs_16;

#line 662 "write_module_interface_files.m"
    {
#line 662 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__make_impl_type_abstract_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_TypeDefnPairs_16);
    }
#line 662 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_TypeDefnPairs_16));
#line 662 "write_module_interface_files.m"
  }
#line 662 "write_module_interface_files.m"
}

#line 1232 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_1(
#line 1232 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1232 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1232 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1232 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1232 "write_module_interface_files.m"
{
#line 1232 "write_module_interface_files.m"
  {
#line 1232 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1232 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_23;

#line 1232 "write_module_interface_files.m"
    {
#line 1232 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_requirements_of_impl_typeclass_in_item_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_23);
    }
#line 1232 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_23));
#line 1232 "write_module_interface_files.m"
  }
#line 1232 "write_module_interface_files.m"
}

#line 628 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0(
#line 628 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_0_19,
#line 628 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_20,
#line 628 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_21,
#line 628 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_22)
#line 628 "write_module_interface_files.m"
{
#line 633 "write_module_interface_files.m"
  {
#line 633 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_45_45 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0];
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_15_75;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_15_85;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__BothTypesMap_9;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryDummyTypeCtors_10;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryAbsImpExpTypeCtors_11;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryTypeImpImports_12;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AllNecessaryTypeCtors_13;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryTypeclassImpImports_14;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryImpImports_15;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RemovableAbstractExportedTypes_16;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_23_23;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_24_24;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_27_27;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_29_29;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_30_30;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_31_31;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_32_32;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_33_33;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_34_34;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_36_36;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_38_38;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_39_39;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_40_40;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_41_41;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_42_42;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemsCord_72;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_73_73;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemsCord_82;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_83_83;
#line 633 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_89_89;
#line 1232 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv1_NecessaryTypeclassImpImports_14;
#line 671 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv4_RemovableAbstractExportedTypes_16;
#line 673 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_ImpTypesMap_36_36;
#line 676 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_ImpItems_38_38;

#line 633 "write_module_interface_files.m"
    {
#line 633 "write_module_interface_files.m"
      mercury__map__init_1_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44, parse_tree__write_module_interface_files__TypeInfo_45_45, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_23_23);
    }
#line 634 "write_module_interface_files.m"
    {
#line 634 "write_module_interface_files.m"
      mercury__map__init_1_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44, parse_tree__write_module_interface_files__TypeInfo_45_45, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_24_24);
    }
#line 11180 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_15_75 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1192 "write_module_interface_files.m"
    {
#line 1192 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_73_73 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_15_75);
    }
#line 1192 "write_module_interface_files.m"
    {
#line 1192 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__gather_type_defns_in_section_loop_6_p_0((MR_Integer) 0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_0_19, parse_tree__write_module_interface_files__V_73_73, &parse_tree__write_module_interface_files__ItemsCord_72, parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_23_23, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_27_27);
    }
#line 1194 "write_module_interface_files.m"
    {
#line 1194 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_20 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_15_75, parse_tree__write_module_interface_files__ItemsCord_72);
    }
#line 11197 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_15_85 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1192 "write_module_interface_files.m"
    {
#line 1192 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_83_83 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_15_85);
    }
#line 1192 "write_module_interface_files.m"
    {
#line 1192 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__gather_type_defns_in_section_loop_6_p_0((MR_Integer) 1, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_0_21, parse_tree__write_module_interface_files__V_83_83, &parse_tree__write_module_interface_files__ItemsCord_82, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_24_24, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_30_30);
    }
#line 1194 "write_module_interface_files.m"
    {
#line 1194 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_29_29 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_15_85, parse_tree__write_module_interface_files__ItemsCord_82);
    }
#line 639 "write_module_interface_files.m"
    {
#line 639 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__BothTypesMap_9 = mercury__multi_map__merge_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_27_27, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_30_30);
    }
#line 644 "write_module_interface_files.m"
    {
#line 644 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_27_27, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_30_30, parse_tree__write_module_interface_files__BothTypesMap_9, &parse_tree__write_module_interface_files__NecessaryDummyTypeCtors_10, &parse_tree__write_module_interface_files__NecessaryAbsImpExpTypeCtors_11, &parse_tree__write_module_interface_files__NecessaryTypeImpImports_12);
    }
#line 647 "write_module_interface_files.m"
    {
#line 647 "write_module_interface_files.m"
      mercury__set__union_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44, parse_tree__write_module_interface_files__NecessaryDummyTypeCtors_10, parse_tree__write_module_interface_files__NecessaryAbsImpExpTypeCtors_11, &parse_tree__write_module_interface_files__AllNecessaryTypeCtors_13);
    }
#line 1233 "write_module_interface_files.m"
    {
#line 1233 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_89_89 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    }
#line 1232 "write_module_interface_files.m"
    {
#line 1232 "write_module_interface_files.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[4], parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_29_29, ((MR_Box) (parse_tree__write_module_interface_files__V_89_89)), &parse_tree__write_module_interface_files__conv1_NecessaryTypeclassImpImports_14);
    }
#line 1232 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__NecessaryTypeclassImpImports_14 = ((MR_Word) parse_tree__write_module_interface_files__conv1_NecessaryTypeclassImpImports_14);
#line 657 "write_module_interface_files.m"
    {
#line 657 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__NecessaryImpImports_15 = mercury__set__union_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_module_interface_files__NecessaryTypeImpImports_12, parse_tree__write_module_interface_files__NecessaryTypeclassImpImports_14);
    }
#line 662 "write_module_interface_files.m"
    {
#line 662 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 662 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_31_31, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[1]));
#line 662 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_31_31, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_2));
#line 662 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 662 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_31_31, 3) = ((MR_Box) (parse_tree__write_module_interface_files__BothTypesMap_9));
#line 662 "write_module_interface_files.m"
    }
#line 662 "write_module_interface_files.m"
    {
#line 662 "write_module_interface_files.m"
      mercury__map__map_values_only_3_p_0(parse_tree__write_module_interface_files__TypeInfo_45_45, parse_tree__write_module_interface_files__TypeInfo_45_45, parse_tree__write_module_interface_files__TypeCtorInfo_44_44, parse_tree__write_module_interface_files__V_31_31, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_30_30, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_32_32);
    }
#line 671 "write_module_interface_files.m"
    {
#line 671 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 671 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_33_33, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[0]));
#line 671 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_33_33, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0_3));
#line 671 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 671 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_33_33, 3) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_27_27));
#line 671 "write_module_interface_files.m"
    }
#line 672 "write_module_interface_files.m"
    {
#line 672 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_34_34 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44);
    }
#line 671 "write_module_interface_files.m"
    {
#line 671 "write_module_interface_files.m"
      mercury__map__foldl_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44, parse_tree__write_module_interface_files__TypeInfo_45_45, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[1], parse_tree__write_module_interface_files__V_33_33, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_32_32, ((MR_Box) (parse_tree__write_module_interface_files__V_34_34)), &parse_tree__write_module_interface_files__conv4_RemovableAbstractExportedTypes_16);
    }
#line 671 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__RemovableAbstractExportedTypes_16 = ((MR_Word) parse_tree__write_module_interface_files__conv4_RemovableAbstractExportedTypes_16);
#line 673 "write_module_interface_files.m"
    {
#line 673 "write_module_interface_files.m"
      mercury__set__foldl_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[1], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[5], parse_tree__write_module_interface_files__RemovableAbstractExportedTypes_16, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_32_32)), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_ImpTypesMap_36_36);
    }
#line 673 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_36_36 = ((MR_Word) parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_ImpTypesMap_36_36);
#line 676 "write_module_interface_files.m"
    {
#line 676 "write_module_interface_files.m"
      mercury__map__foldl_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_44_44, parse_tree__write_module_interface_files__TypeInfo_45_45, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[2], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[6], parse_tree__write_module_interface_files__STATE_VARIABLE_ImpTypesMap_36_36, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_29_29)), &parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_ImpItems_38_38);
    }
#line 676 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_38_38 = ((MR_Word) parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_ImpItems_38_38);
#line 679 "write_module_interface_files.m"
    {
#line 679 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_38_38, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_39_39);
    }
#line 680 "write_module_interface_files.m"
    {
#line 680 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(parse_tree__write_module_interface_files__NecessaryImpImports_15, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_39_39, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_40_40);
    }
#line 681 "write_module_interface_files.m"
    {
#line 681 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0(parse_tree__write_module_interface_files__AllNecessaryTypeCtors_13, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_40_40, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_41_41);
    }
#line 682 "write_module_interface_files.m"
    {
#line 682 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_27_27, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_41_41, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_42_42);
    }
#line 685 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 684 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_22 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_42_42;
#line 685 "write_module_interface_files.m"
    else
#line 687 "write_module_interface_files.m"
      {
#line 687 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__standardize_impl_items_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_42_42, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_22);
#line 687 "write_module_interface_files.m"
        return;
      }
#line 633 "write_module_interface_files.m"
  }
#line 628 "write_module_interface_files.m"
}

#line 609 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_assertions_in_items_acc_3_p_0(
#line 609 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 609 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 609 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3)
#line 609 "write_module_interface_files.m"
{
#line 612 "write_module_interface_files.m"
  while (MR_TRUE)
#line 612 "write_module_interface_files.m"
    {
#line 612 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 612 "write_module_interface_files.m"
      {
#line 612 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 612 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 612 "write_module_interface_files.m"
        else
#line 613 "write_module_interface_files.m"
          {
#line 613 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 613 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 613 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19;
#line 617 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemPromise_10;
#line 617 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 618 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 618 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_12_12;
#line 618 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_13_13;
#line 618 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_14_14;
#line 618 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_15_15;

#line 617 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 617 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 617 "write_module_interface_files.m"
              {
#line 617 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ItemPromise_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_7, (MR_Integer) 1)));
#line 618 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 0)));
#line 618 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 1)));
#line 618 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 2)));
#line 618 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 3)));
#line 618 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 4)));
#line 618 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 5)));
#line 618 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_18_18 == (MR_Integer) 3);
#line 617 "write_module_interface_files.m"
              }
#line 621 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 621 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 621 "write_module_interface_files.m"
            else
#line 622 "write_module_interface_files.m"
              {
#line 622 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 622 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_7));
#line 622 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 622 "write_module_interface_files.m"
              }
#line 624 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 624 "write_module_interface_files.m"
            {
#line 624 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_8;
#line 624 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19;

#line 624 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2;
#line 624 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 624 "write_module_interface_files.m"
            }
#line 624 "write_module_interface_files.m"
            continue;
#line 613 "write_module_interface_files.m"
          }
#line 612 "write_module_interface_files.m"
      }
#line 612 "write_module_interface_files.m"
      break;
#line 612 "write_module_interface_files.m"
    }
#line 609 "write_module_interface_files.m"
}

#line 544 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__aug_item_blocks_to_int_imp_items_loop_6_p_0(
#line 544 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 544 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeStripAssertions_2,
#line 544 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3,
#line 544 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_4,
#line 544 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5,
#line 544 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_6)
#line 544 "write_module_interface_files.m"
{
#line 548 "write_module_interface_files.m"
  while (MR_TRUE)
#line 548 "write_module_interface_files.m"
    {
#line 548 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 548 "write_module_interface_files.m"
      {
#line 548 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 548 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 548 "write_module_interface_files.m"
          {
#line 548 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5;
#line 548 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3;
#line 548 "write_module_interface_files.m"
          }
#line 548 "write_module_interface_files.m"
        else
#line 550 "write_module_interface_files.m"
          {
#line 550 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__AugItemBlock_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 550 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__AugItemBlocks_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 550 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__AugSection_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugItemBlock_14, (MR_Integer) 0)));
#line 550 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugItemBlock_14, (MR_Integer) 2)));
#line 550 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_41_41;
#line 550 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_45_45;
#line 551 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files___Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__AugItemBlock_14, (MR_Integer) 1)));

#line 562 "write_module_interface_files.m"
#line 562 "write_module_interface_files.m"
            switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__AugSection_19)) {
#line 562 "write_module_interface_files.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 562 "write_module_interface_files.m"
              case (MR_Integer) 0:
#line 562 "write_module_interface_files.m"
#line 562 "write_module_interface_files.m"
                switch (MR_unmkbody(parse_tree__write_module_interface_files__AugSection_19)) {
#line 562 "write_module_interface_files.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 562 "write_module_interface_files.m"
                  case (MR_Integer) 0:
#line 553 "write_module_interface_files.m"
                    {
#line 557 "write_module_interface_files.m"
#line 557 "write_module_interface_files.m"
                      switch (parse_tree__write_module_interface_files__MaybeStripAssertions_2) {
#line 557 "write_module_interface_files.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 557 "write_module_interface_files.m"
                        case (MR_Integer) 1:
#line 558 "write_module_interface_files.m"
                          {
#line 558 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_53_53;
#line 558 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__StrippedItems_22;
#line 558 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__V_44_44;
#line 558 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__RevItems_63;

#line 606 "write_module_interface_files.m"
                            {
#line 606 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__strip_assertions_in_items_acc_3_p_0(parse_tree__write_module_interface_files__Items_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_63);
                            }
#line 607 "write_module_interface_files.m"
                            {
#line 607 "write_module_interface_files.m"
                              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_63, &parse_tree__write_module_interface_files__StrippedItems_22);
                            }
#line 11563 "parse_tree.write_module_interface_files.c"
                            parse_tree__write_module_interface_files__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 560 "write_module_interface_files.m"
                            {
#line 560 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__V_44_44 = mercury__cord__from_list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_53_53, parse_tree__write_module_interface_files__StrippedItems_22);
                            }
#line 560 "write_module_interface_files.m"
                            {
#line 560 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_45_45 = mercury__cord__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_53_53, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3, parse_tree__write_module_interface_files__V_44_44);
                            }
#line 558 "write_module_interface_files.m"
                          }
#line 557 "write_module_interface_files.m"
                          break;
#line 557 "write_module_interface_files.m"
                        case (MR_Integer) 0:
#line 555 "write_module_interface_files.m"
                          {
#line 555 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 555 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__V_46_46;

#line 556 "write_module_interface_files.m"
                            {
#line 556 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__V_46_46 = mercury__cord__from_list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_52_52, parse_tree__write_module_interface_files__Items_21);
                            }
#line 556 "write_module_interface_files.m"
                            {
#line 556 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_45_45 = mercury__cord__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_52_52, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3, parse_tree__write_module_interface_files__V_46_46);
                            }
#line 555 "write_module_interface_files.m"
                          }
#line 557 "write_module_interface_files.m"
                          break;
#line 557 "write_module_interface_files.m"
                      }
#line 553 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_41_41 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5;
#line 553 "write_module_interface_files.m"
                    }
#line 562 "write_module_interface_files.m"
                    break;
#line 562 "write_module_interface_files.m"
                  case (MR_Integer) 1:
#line 562 "write_module_interface_files.m"
                  case (MR_Integer) 2:
#line 565 "write_module_interface_files.m"
                    {
#line 569 "write_module_interface_files.m"
#line 569 "write_module_interface_files.m"
                      switch (parse_tree__write_module_interface_files__MaybeStripAssertions_2) {
#line 569 "write_module_interface_files.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 569 "write_module_interface_files.m"
                        case (MR_Integer) 1:
#line 570 "write_module_interface_files.m"
                          {
#line 570 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_55_55;
#line 570 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__V_40_40;
#line 570 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__StrippedItems_49;
#line 570 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__RevItems_58;

#line 606 "write_module_interface_files.m"
                            {
#line 606 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__strip_assertions_in_items_acc_3_p_0(parse_tree__write_module_interface_files__Items_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_58);
                            }
#line 607 "write_module_interface_files.m"
                            {
#line 607 "write_module_interface_files.m"
                              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_58, &parse_tree__write_module_interface_files__StrippedItems_49);
                            }
#line 11644 "parse_tree.write_module_interface_files.c"
                            parse_tree__write_module_interface_files__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 572 "write_module_interface_files.m"
                            {
#line 572 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__V_40_40 = mercury__cord__from_list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_55_55, parse_tree__write_module_interface_files__StrippedItems_49);
                            }
#line 572 "write_module_interface_files.m"
                            {
#line 572 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_41_41 = mercury__cord__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_55_55, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5, parse_tree__write_module_interface_files__V_40_40);
                            }
#line 570 "write_module_interface_files.m"
                          }
#line 569 "write_module_interface_files.m"
                          break;
#line 569 "write_module_interface_files.m"
                        case (MR_Integer) 0:
#line 567 "write_module_interface_files.m"
                          {
#line 567 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 567 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__V_42_42;

#line 568 "write_module_interface_files.m"
                            {
#line 568 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__V_42_42 = mercury__cord__from_list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_54_54, parse_tree__write_module_interface_files__Items_21);
                            }
#line 568 "write_module_interface_files.m"
                            {
#line 568 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_41_41 = mercury__cord__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_54_54, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5, parse_tree__write_module_interface_files__V_42_42);
                            }
#line 567 "write_module_interface_files.m"
                          }
#line 569 "write_module_interface_files.m"
                          break;
#line 569 "write_module_interface_files.m"
                      }
#line 565 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_45_45 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3;
#line 565 "write_module_interface_files.m"
                    }
#line 562 "write_module_interface_files.m"
                    break;
#line 562 "write_module_interface_files.m"
                  case (MR_Integer) 3:
#line 584 "write_module_interface_files.m"
                    {
#line 585 "write_module_interface_files.m"
                      {
#line 585 "write_module_interface_files.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.aug_item_blocks_to_int_imp_items_loop\'/6", (MR_String) "ams_transitively_imported");
#line 585 "write_module_interface_files.m"
                        return;
                      }
#line 584 "write_module_interface_files.m"
                    }
#line 562 "write_module_interface_files.m"
                    break;
#line 562 "write_module_interface_files.m"
                }
#line 562 "write_module_interface_files.m"
                break;
#line 562 "write_module_interface_files.m"
              case (MR_Integer) 1:
#line 575 "write_module_interface_files.m"
                {
#line 575 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_45_45 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3;
#line 575 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_41_41 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5;
#line 575 "write_module_interface_files.m"
                }
#line 562 "write_module_interface_files.m"
                break;
#line 562 "write_module_interface_files.m"
              case (MR_Integer) 2:
#line 576 "write_module_interface_files.m"
                {
#line 576 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_45_45 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3;
#line 576 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_41_41 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5;
#line 576 "write_module_interface_files.m"
                }
#line 562 "write_module_interface_files.m"
                break;
#line 562 "write_module_interface_files.m"
              case (MR_Integer) 3:
#line 562 "write_module_interface_files.m"
#line 562 "write_module_interface_files.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__AugSection_19, (MR_Integer) 0)))) {
#line 562 "write_module_interface_files.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 562 "write_module_interface_files.m"
                  case (MR_Integer) 0:
#line 577 "write_module_interface_files.m"
                    {
#line 577 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_45_45 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3;
#line 577 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_41_41 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5;
#line 577 "write_module_interface_files.m"
                    }
#line 562 "write_module_interface_files.m"
                    break;
#line 562 "write_module_interface_files.m"
                  case (MR_Integer) 1:
#line 581 "write_module_interface_files.m"
                    {
#line 582 "write_module_interface_files.m"
                      {
#line 582 "write_module_interface_files.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.aug_item_blocks_to_int_imp_items_loop\'/6", (MR_String) "ams_opt_imported");
#line 582 "write_module_interface_files.m"
                        return;
                      }
#line 581 "write_module_interface_files.m"
                    }
#line 562 "write_module_interface_files.m"
                    break;
#line 562 "write_module_interface_files.m"
                }
#line 562 "write_module_interface_files.m"
                break;
#line 562 "write_module_interface_files.m"
            }
#line 587 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 587 "write_module_interface_files.m"
            {
#line 587 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__AugItemBlocks_15;
#line 587 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0__tmp_copy_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_45_45;
#line 587 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0__tmp_copy_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_41_41;

#line 587 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0__tmp_copy_5;
#line 587 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0__tmp_copy_3;
#line 587 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 587 "write_module_interface_files.m"
            }
#line 587 "write_module_interface_files.m"
            continue;
#line 550 "write_module_interface_files.m"
          }
#line 548 "write_module_interface_files.m"
      }
#line 548 "write_module_interface_files.m"
      break;
#line 548 "write_module_interface_files.m"
    }
#line 544 "write_module_interface_files.m"
}

#line 534 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__aug_item_blocks_to_int_imp_items_4_p_0(
#line 534 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__AugItemBlocks_5,
#line 534 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeStripAssertions_6,
#line 534 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__IntItems_7,
#line 534 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__ImpItems_8)
#line 534 "write_module_interface_files.m"
{
#line 538 "write_module_interface_files.m"
  {
#line 538 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 538 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 538 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntItemsCord_9;
#line 538 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImpItemsCord_10;
#line 538 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 538 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_12_12;

#line 540 "write_module_interface_files.m"
    {
#line 540 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_11_11 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_13_13);
    }
#line 540 "write_module_interface_files.m"
    {
#line 540 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_12_12 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_13_13);
    }
#line 539 "write_module_interface_files.m"
    {
#line 539 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__aug_item_blocks_to_int_imp_items_loop_6_p_0(parse_tree__write_module_interface_files__AugItemBlocks_5, parse_tree__write_module_interface_files__MaybeStripAssertions_6, parse_tree__write_module_interface_files__V_11_11, &parse_tree__write_module_interface_files__IntItemsCord_9, parse_tree__write_module_interface_files__V_12_12, &parse_tree__write_module_interface_files__ImpItemsCord_10);
    }
#line 541 "write_module_interface_files.m"
    {
#line 541 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__IntItems_7 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_13_13, parse_tree__write_module_interface_files__IntItemsCord_9);
    }
#line 542 "write_module_interface_files.m"
    {
#line 542 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__ImpItems_8 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_13_13, parse_tree__write_module_interface_files__ImpItemsCord_10);
    }
#line 538 "write_module_interface_files.m"
  }
#line 534 "write_module_interface_files.m"
}

#line 262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_item_for_private_interface_7_p_0(
#line 262 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_8,
#line 262 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Section_9,
#line 262 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_10,
#line 262 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65,
#line 262 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66,
#line 262 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67,
#line 262 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68)
#line 262 "write_module_interface_files.m"
{
#line 269 "write_module_interface_files.m"
  {
#line 269 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 269 "write_module_interface_files.m"
#line 269 "write_module_interface_files.m"
    switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_10)) {
#line 269 "write_module_interface_files.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 269 "write_module_interface_files.m"
      case (MR_Integer) 0:
#line 269 "write_module_interface_files.m"
        {
#line 269 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_13 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_10), (MR_Integer) 0);
#line 269 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_13, (MR_Integer) 0)));
#line 270 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_13, (MR_Integer) 1)));
#line 270 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_13, (MR_Integer) 2)));

#line 285 "write_module_interface_files.m"
#line 285 "write_module_interface_files.m"
          switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_14)) {
#line 285 "write_module_interface_files.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 285 "write_module_interface_files.m"
            case (MR_Integer) 0:
#line 285 "write_module_interface_files.m"
            case (MR_Integer) 1:
#line 395 "write_module_interface_files.m"
#line 395 "write_module_interface_files.m"
              switch (parse_tree__write_module_interface_files__Section_9) {
#line 395 "write_module_interface_files.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 395 "write_module_interface_files.m"
                case (MR_Integer) 1:
#line 398 "write_module_interface_files.m"
                  {
#line 399 "write_module_interface_files.m"
                    {
#line 399 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                    }
#line 398 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65;
#line 398 "write_module_interface_files.m"
                  }
#line 395 "write_module_interface_files.m"
                  break;
#line 395 "write_module_interface_files.m"
                case (MR_Integer) 0:
#line 395 "write_module_interface_files.m"
                  {
#line 396 "write_module_interface_files.m"
                    {
#line 396 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                    }
#line 395 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67;
#line 395 "write_module_interface_files.m"
                  }
#line 395 "write_module_interface_files.m"
                  break;
#line 395 "write_module_interface_files.m"
              }
#line 285 "write_module_interface_files.m"
              break;
#line 285 "write_module_interface_files.m"
            case (MR_Integer) 2:
#line 281 "write_module_interface_files.m"
#line 281 "write_module_interface_files.m"
              switch (parse_tree__write_module_interface_files__Section_9) {
#line 281 "write_module_interface_files.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 281 "write_module_interface_files.m"
                case (MR_Integer) 1:
#line 282 "write_module_interface_files.m"
                  {
#line 283 "write_module_interface_files.m"
                    {
#line 283 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                    }
#line 282 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65;
#line 282 "write_module_interface_files.m"
                  }
#line 281 "write_module_interface_files.m"
                  break;
#line 281 "write_module_interface_files.m"
                case (MR_Integer) 0:
#line 278 "write_module_interface_files.m"
                  {
#line 278 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_94_94 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;

#line 279 "write_module_interface_files.m"
                    {
#line 279 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = mercury__cord__snoc_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_94_94, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                    }
#line 280 "write_module_interface_files.m"
                    {
#line 280 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = mercury__cord__snoc_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_94_94, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                    }
#line 278 "write_module_interface_files.m"
                  }
#line 281 "write_module_interface_files.m"
                  break;
#line 281 "write_module_interface_files.m"
              }
#line 285 "write_module_interface_files.m"
              break;
#line 285 "write_module_interface_files.m"
            case (MR_Integer) 3:
#line 395 "write_module_interface_files.m"
#line 395 "write_module_interface_files.m"
              switch (parse_tree__write_module_interface_files__Section_9) {
#line 395 "write_module_interface_files.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 395 "write_module_interface_files.m"
                case (MR_Integer) 1:
#line 398 "write_module_interface_files.m"
                  {
#line 399 "write_module_interface_files.m"
                    {
#line 399 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                    }
#line 398 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65;
#line 398 "write_module_interface_files.m"
                  }
#line 395 "write_module_interface_files.m"
                  break;
#line 395 "write_module_interface_files.m"
                case (MR_Integer) 0:
#line 395 "write_module_interface_files.m"
                  {
#line 396 "write_module_interface_files.m"
                    {
#line 396 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                    }
#line 395 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67;
#line 395 "write_module_interface_files.m"
                  }
#line 395 "write_module_interface_files.m"
                  break;
#line 395 "write_module_interface_files.m"
              }
#line 285 "write_module_interface_files.m"
              break;
#line 285 "write_module_interface_files.m"
          }
#line 269 "write_module_interface_files.m"
        }
#line 269 "write_module_interface_files.m"
        break;
#line 269 "write_module_interface_files.m"
      case (MR_Integer) 1:
#line 302 "write_module_interface_files.m"
        {
#line 302 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65;
#line 302 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67;
#line 302 "write_module_interface_files.m"
        }
#line 269 "write_module_interface_files.m"
        break;
#line 269 "write_module_interface_files.m"
      case (MR_Integer) 2:
#line 395 "write_module_interface_files.m"
#line 395 "write_module_interface_files.m"
        switch (parse_tree__write_module_interface_files__Section_9) {
#line 395 "write_module_interface_files.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 395 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 398 "write_module_interface_files.m"
            {
#line 399 "write_module_interface_files.m"
              {
#line 399 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
              }
#line 398 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65;
#line 398 "write_module_interface_files.m"
            }
#line 395 "write_module_interface_files.m"
            break;
#line 395 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 395 "write_module_interface_files.m"
            {
#line 396 "write_module_interface_files.m"
              {
#line 396 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
              }
#line 395 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67;
#line 395 "write_module_interface_files.m"
            }
#line 395 "write_module_interface_files.m"
            break;
#line 395 "write_module_interface_files.m"
        }
#line 269 "write_module_interface_files.m"
        break;
#line 269 "write_module_interface_files.m"
      case (MR_Integer) 3:
#line 269 "write_module_interface_files.m"
#line 269 "write_module_interface_files.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 0)))) {
#line 269 "write_module_interface_files.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 269 "write_module_interface_files.m"
          case (MR_Integer) 0:
#line 269 "write_module_interface_files.m"
          case (MR_Integer) 1:
#line 269 "write_module_interface_files.m"
          case (MR_Integer) 2:
#line 269 "write_module_interface_files.m"
          case (MR_Integer) 3:
#line 269 "write_module_interface_files.m"
          case (MR_Integer) 5:
#line 269 "write_module_interface_files.m"
          case (MR_Integer) 6:
#line 269 "write_module_interface_files.m"
          case (MR_Integer) 11:
#line 395 "write_module_interface_files.m"
#line 395 "write_module_interface_files.m"
            switch (parse_tree__write_module_interface_files__Section_9) {
#line 395 "write_module_interface_files.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 395 "write_module_interface_files.m"
              case (MR_Integer) 1:
#line 398 "write_module_interface_files.m"
                {
#line 399 "write_module_interface_files.m"
                  {
#line 399 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                  }
#line 398 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65;
#line 398 "write_module_interface_files.m"
                }
#line 395 "write_module_interface_files.m"
                break;
#line 395 "write_module_interface_files.m"
              case (MR_Integer) 0:
#line 395 "write_module_interface_files.m"
                {
#line 396 "write_module_interface_files.m"
                  {
#line 396 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                  }
#line 395 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67;
#line 395 "write_module_interface_files.m"
                }
#line 395 "write_module_interface_files.m"
                break;
#line 395 "write_module_interface_files.m"
            }
#line 269 "write_module_interface_files.m"
            break;
#line 269 "write_module_interface_files.m"
          case (MR_Integer) 4:
#line 308 "write_module_interface_files.m"
            {
#line 308 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ItemPragma_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 1)));
#line 308 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Pragma_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_25, (MR_Integer) 0)));
#line 308 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__AllowedInInterface_30;
#line 309 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_25, (MR_Integer) 1)));
#line 309 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_25, (MR_Integer) 2)));
#line 309 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_25, (MR_Integer) 3)));

#line 310 "write_module_interface_files.m"
              {
#line 310 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__AllowedInInterface_30 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(parse_tree__write_module_interface_files__Pragma_26);
              }
#line 313 "write_module_interface_files.m"
#line 313 "write_module_interface_files.m"
              switch (parse_tree__write_module_interface_files__AllowedInInterface_30) {
#line 313 "write_module_interface_files.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 313 "write_module_interface_files.m"
                case (MR_Integer) 0:
#line 312 "write_module_interface_files.m"
                  {
#line 312 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65;
#line 312 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67;
#line 312 "write_module_interface_files.m"
                  }
#line 313 "write_module_interface_files.m"
                  break;
#line 313 "write_module_interface_files.m"
                case (MR_Integer) 1:
#line 395 "write_module_interface_files.m"
#line 395 "write_module_interface_files.m"
                  switch (parse_tree__write_module_interface_files__Section_9) {
#line 395 "write_module_interface_files.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 395 "write_module_interface_files.m"
                    case (MR_Integer) 1:
#line 398 "write_module_interface_files.m"
                      {
#line 399 "write_module_interface_files.m"
                        {
#line 399 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                        }
#line 398 "write_module_interface_files.m"
                        *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65;
#line 398 "write_module_interface_files.m"
                      }
#line 395 "write_module_interface_files.m"
                      break;
#line 395 "write_module_interface_files.m"
                    case (MR_Integer) 0:
#line 395 "write_module_interface_files.m"
                      {
#line 396 "write_module_interface_files.m"
                        {
#line 396 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__Item_10)));
                        }
#line 395 "write_module_interface_files.m"
                        *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67;
#line 395 "write_module_interface_files.m"
                      }
#line 395 "write_module_interface_files.m"
                      break;
#line 395 "write_module_interface_files.m"
                  }
#line 313 "write_module_interface_files.m"
                  break;
#line 313 "write_module_interface_files.m"
              }
#line 308 "write_module_interface_files.m"
            }
#line 269 "write_module_interface_files.m"
            break;
#line 269 "write_module_interface_files.m"
          case (MR_Integer) 7:
#line 335 "write_module_interface_files.m"
            {
#line 335 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__InstanceInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 1)));
#line 335 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__AbstractInstanceInfo_40;
#line 335 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__AbstractItem_41;

#line 336 "write_module_interface_files.m"
              {
#line 336 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__AbstractInstanceInfo_40 = parse_tree__item_util__make_instance_abstract_1_f_0(parse_tree__write_module_interface_files__InstanceInfo_39);
              }
#line 337 "write_module_interface_files.m"
              {
#line 337 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__AbstractItem_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__AbstractItem_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 337 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__AbstractItem_41, 1) = ((MR_Box) (parse_tree__write_module_interface_files__AbstractInstanceInfo_40));
#line 337 "write_module_interface_files.m"
              }
#line 395 "write_module_interface_files.m"
#line 395 "write_module_interface_files.m"
              switch (parse_tree__write_module_interface_files__Section_9) {
#line 395 "write_module_interface_files.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 395 "write_module_interface_files.m"
                case (MR_Integer) 1:
#line 398 "write_module_interface_files.m"
                  {
#line 399 "write_module_interface_files.m"
                    {
#line 399 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67, ((MR_Box) (parse_tree__write_module_interface_files__AbstractItem_41)));
                    }
#line 398 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65;
#line 398 "write_module_interface_files.m"
                  }
#line 395 "write_module_interface_files.m"
                  break;
#line 395 "write_module_interface_files.m"
                case (MR_Integer) 0:
#line 395 "write_module_interface_files.m"
                  {
#line 396 "write_module_interface_files.m"
                    {
#line 396 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__AbstractItem_41)));
                    }
#line 395 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67;
#line 395 "write_module_interface_files.m"
                  }
#line 395 "write_module_interface_files.m"
                  break;
#line 395 "write_module_interface_files.m"
              }
#line 335 "write_module_interface_files.m"
            }
#line 269 "write_module_interface_files.m"
            break;
#line 269 "write_module_interface_files.m"
          case (MR_Integer) 8:
#line 303 "write_module_interface_files.m"
            {
#line 303 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65;
#line 303 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67;
#line 303 "write_module_interface_files.m"
            }
#line 269 "write_module_interface_files.m"
            break;
#line 269 "write_module_interface_files.m"
          case (MR_Integer) 9:
#line 304 "write_module_interface_files.m"
            {
#line 304 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65;
#line 304 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67;
#line 304 "write_module_interface_files.m"
            }
#line 269 "write_module_interface_files.m"
            break;
#line 269 "write_module_interface_files.m"
          case (MR_Integer) 10:
#line 341 "write_module_interface_files.m"
            {
#line 341 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ItemMutable_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 1)));
#line 341 "write_module_interface_files.m"
              MR_String parse_tree__write_module_interface_files__MutableName_43 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_42, (MR_Integer) 0)));
#line 341 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Type_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_42, (MR_Integer) 1)));
#line 341 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Inst_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_42, (MR_Integer) 3)));
#line 341 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Attrs_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_42, (MR_Integer) 4)));
#line 341 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Context_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_42, (MR_Integer) 6)));
#line 341 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ConstantInterface_51;
#line 342 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files___Value_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_42, (MR_Integer) 2)));
#line 342 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files___Varset_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_42, (MR_Integer) 5)));
#line 342 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files___SeqNum_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_42, (MR_Integer) 7)));

#line 344 "write_module_interface_files.m"
              {
#line 344 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ConstantInterface_51 = parse_tree__prog_item__mutable_var_constant_1_f_0(parse_tree__write_module_interface_files__Attrs_47);
              }
#line 357 "write_module_interface_files.m"
#line 357 "write_module_interface_files.m"
              switch (parse_tree__write_module_interface_files__ConstantInterface_51) {
#line 357 "write_module_interface_files.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 357 "write_module_interface_files.m"
                case (MR_Integer) 1:
#line 346 "write_module_interface_files.m"
                  {
#line 346 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__ConstantGetPredDecl_52;
#line 346 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__ConstantSetPredDecl_53;
#line 346 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__ConstantGetPredDeclItem_54;
#line 346 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__ConstantSetPredDeclItem_55;

#line 347 "write_module_interface_files.m"
                    {
#line 347 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__ConstantGetPredDecl_52 = parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_8, parse_tree__write_module_interface_files__MutableName_43, parse_tree__write_module_interface_files__Type_44, parse_tree__write_module_interface_files__Inst_46, parse_tree__write_module_interface_files__Context_49);
                    }
#line 349 "write_module_interface_files.m"
                    {
#line 349 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__ConstantSetPredDecl_53 = parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_8, parse_tree__write_module_interface_files__MutableName_43, parse_tree__write_module_interface_files__Type_44, parse_tree__write_module_interface_files__Inst_46, parse_tree__write_module_interface_files__Context_49);
                    }
#line 351 "write_module_interface_files.m"
                    {
#line 351 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__ConstantGetPredDeclItem_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ConstantGetPredDeclItem_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 351 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ConstantGetPredDeclItem_54, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ConstantGetPredDecl_52));
#line 351 "write_module_interface_files.m"
                    }
#line 352 "write_module_interface_files.m"
                    {
#line 352 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__ConstantSetPredDeclItem_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ConstantSetPredDeclItem_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 352 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ConstantSetPredDeclItem_55, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ConstantSetPredDecl_53));
#line 352 "write_module_interface_files.m"
                    }
#line 12416 "parse_tree.write_module_interface_files.c"
#line 12417 "parse_tree.write_module_interface_files.c"
                    switch (parse_tree__write_module_interface_files__Section_9) {
#line 12419 "parse_tree.write_module_interface_files.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 12421 "parse_tree.write_module_interface_files.c"
                      case (MR_Integer) 1:
#line 12423 "parse_tree.write_module_interface_files.c"
                        {
#line 12425 "parse_tree.write_module_interface_files.c"
                          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_78_78;

#line 399 "write_module_interface_files.m"
                          {
#line 399 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_78_78 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67, ((MR_Box) (parse_tree__write_module_interface_files__ConstantGetPredDeclItem_54)));
                          }
#line 399 "write_module_interface_files.m"
                          {
#line 399 "write_module_interface_files.m"
                            *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_78_78, ((MR_Box) (parse_tree__write_module_interface_files__ConstantSetPredDeclItem_55)));
                          }
#line 398 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65;
#line 12440 "parse_tree.write_module_interface_files.c"
                        }
#line 12442 "parse_tree.write_module_interface_files.c"
                        break;
#line 12444 "parse_tree.write_module_interface_files.c"
                      case (MR_Integer) 0:
#line 12446 "parse_tree.write_module_interface_files.c"
                        {
#line 12448 "parse_tree.write_module_interface_files.c"
                          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_77_228;

#line 396 "write_module_interface_files.m"
                          {
#line 396 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_77_228 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__ConstantGetPredDeclItem_54)));
                          }
#line 396 "write_module_interface_files.m"
                          {
#line 396 "write_module_interface_files.m"
                            *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_77_228, ((MR_Box) (parse_tree__write_module_interface_files__ConstantSetPredDeclItem_55)));
                          }
#line 395 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67;
#line 12463 "parse_tree.write_module_interface_files.c"
                        }
#line 12465 "parse_tree.write_module_interface_files.c"
                        break;
#line 12467 "parse_tree.write_module_interface_files.c"
                    }
#line 346 "write_module_interface_files.m"
                  }
#line 357 "write_module_interface_files.m"
                  break;
#line 357 "write_module_interface_files.m"
                case (MR_Integer) 0:
#line 358 "write_module_interface_files.m"
                  {
#line 358 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__StdGetPredDecl_56;
#line 358 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__StdSetPredDecl_57;
#line 358 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__StdGetPredDeclItem_58;
#line 358 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__StdSetPredDeclItem_59;
#line 358 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__IOStateInterface_60;
#line 358 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_71_71;
#line 358 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_72_72;

#line 359 "write_module_interface_files.m"
                    {
#line 359 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__StdGetPredDecl_56 = parse_tree__prog_mutable__std_get_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_8, parse_tree__write_module_interface_files__MutableName_43, parse_tree__write_module_interface_files__Type_44, parse_tree__write_module_interface_files__Inst_46, parse_tree__write_module_interface_files__Context_49);
                    }
#line 361 "write_module_interface_files.m"
                    {
#line 361 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__StdSetPredDecl_57 = parse_tree__prog_mutable__std_set_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_8, parse_tree__write_module_interface_files__MutableName_43, parse_tree__write_module_interface_files__Type_44, parse_tree__write_module_interface_files__Inst_46, parse_tree__write_module_interface_files__Context_49);
                    }
#line 363 "write_module_interface_files.m"
                    {
#line 363 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__StdGetPredDeclItem_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__StdGetPredDeclItem_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 363 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__StdGetPredDeclItem_58, 1) = ((MR_Box) (parse_tree__write_module_interface_files__StdGetPredDecl_56));
#line 363 "write_module_interface_files.m"
                    }
#line 364 "write_module_interface_files.m"
                    {
#line 364 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__StdSetPredDeclItem_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__StdSetPredDeclItem_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 364 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__StdSetPredDeclItem_59, 1) = ((MR_Box) (parse_tree__write_module_interface_files__StdSetPredDecl_57));
#line 364 "write_module_interface_files.m"
                    }
#line 12522 "parse_tree.write_module_interface_files.c"
#line 12523 "parse_tree.write_module_interface_files.c"
                    switch (parse_tree__write_module_interface_files__Section_9) {
#line 12525 "parse_tree.write_module_interface_files.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 12527 "parse_tree.write_module_interface_files.c"
                      case (MR_Integer) 1:
#line 12529 "parse_tree.write_module_interface_files.c"
                        {
#line 12531 "parse_tree.write_module_interface_files.c"
                          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_70_70;

#line 399 "write_module_interface_files.m"
                          {
#line 399 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_70_70 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67, ((MR_Box) (parse_tree__write_module_interface_files__StdGetPredDeclItem_58)));
                          }
#line 399 "write_module_interface_files.m"
                          {
#line 399 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_72_72 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_70_70, ((MR_Box) (parse_tree__write_module_interface_files__StdSetPredDeclItem_59)));
                          }
#line 398 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_71_71 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65;
#line 12546 "parse_tree.write_module_interface_files.c"
                        }
#line 12548 "parse_tree.write_module_interface_files.c"
                        break;
#line 12550 "parse_tree.write_module_interface_files.c"
                      case (MR_Integer) 0:
#line 12552 "parse_tree.write_module_interface_files.c"
                        {
#line 12554 "parse_tree.write_module_interface_files.c"
                          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_69_232;

#line 396 "write_module_interface_files.m"
                          {
#line 396 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_69_232 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_65, ((MR_Box) (parse_tree__write_module_interface_files__StdGetPredDeclItem_58)));
                          }
#line 396 "write_module_interface_files.m"
                          {
#line 396 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_71_71 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_69_232, ((MR_Box) (parse_tree__write_module_interface_files__StdSetPredDeclItem_59)));
                          }
#line 395 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_72_72 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_67;
#line 12569 "parse_tree.write_module_interface_files.c"
                        }
#line 12571 "parse_tree.write_module_interface_files.c"
                        break;
#line 12573 "parse_tree.write_module_interface_files.c"
                    }
#line 370 "write_module_interface_files.m"
                    {
#line 370 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__IOStateInterface_60 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(parse_tree__write_module_interface_files__Attrs_47);
                    }
#line 383 "write_module_interface_files.m"
#line 383 "write_module_interface_files.m"
                    switch (parse_tree__write_module_interface_files__IOStateInterface_60) {
#line 383 "write_module_interface_files.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 383 "write_module_interface_files.m"
                      case (MR_Integer) 1:
#line 372 "write_module_interface_files.m"
                        {
#line 372 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__IOGetPredDecl_61;
#line 372 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__IOSetPredDecl_62;
#line 372 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__IOGetPredDeclItem_63;
#line 372 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__IOSetPredDeclItem_64;

#line 373 "write_module_interface_files.m"
                          {
#line 373 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__IOGetPredDecl_61 = parse_tree__prog_mutable__io_get_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_8, parse_tree__write_module_interface_files__MutableName_43, parse_tree__write_module_interface_files__Type_44, parse_tree__write_module_interface_files__Inst_46, parse_tree__write_module_interface_files__Context_49);
                          }
#line 375 "write_module_interface_files.m"
                          {
#line 375 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__IOSetPredDecl_62 = parse_tree__prog_mutable__io_set_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_8, parse_tree__write_module_interface_files__MutableName_43, parse_tree__write_module_interface_files__Type_44, parse_tree__write_module_interface_files__Inst_46, parse_tree__write_module_interface_files__Context_49);
                          }
#line 377 "write_module_interface_files.m"
                          {
#line 377 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__IOGetPredDeclItem_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__IOGetPredDeclItem_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 377 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__IOGetPredDeclItem_63, 1) = ((MR_Box) (parse_tree__write_module_interface_files__IOGetPredDecl_61));
#line 377 "write_module_interface_files.m"
                          }
#line 378 "write_module_interface_files.m"
                          {
#line 378 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__IOSetPredDeclItem_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__IOSetPredDeclItem_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 378 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__IOSetPredDeclItem_64, 1) = ((MR_Box) (parse_tree__write_module_interface_files__IOSetPredDecl_62));
#line 378 "write_module_interface_files.m"
                          }
#line 12628 "parse_tree.write_module_interface_files.c"
#line 12629 "parse_tree.write_module_interface_files.c"
                          switch (parse_tree__write_module_interface_files__Section_9) {
#line 12631 "parse_tree.write_module_interface_files.c"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 12633 "parse_tree.write_module_interface_files.c"
                            case (MR_Integer) 1:
#line 12635 "parse_tree.write_module_interface_files.c"
                              {
#line 12637 "parse_tree.write_module_interface_files.c"
                                MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_74_74;

#line 399 "write_module_interface_files.m"
                                {
#line 399 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_74_74 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_72_72, ((MR_Box) (parse_tree__write_module_interface_files__IOGetPredDeclItem_63)));
                                }
#line 399 "write_module_interface_files.m"
                                {
#line 399 "write_module_interface_files.m"
                                  *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_74_74, ((MR_Box) (parse_tree__write_module_interface_files__IOSetPredDeclItem_64)));
                                }
#line 398 "write_module_interface_files.m"
                                *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_71_71;
#line 12652 "parse_tree.write_module_interface_files.c"
                              }
#line 12654 "parse_tree.write_module_interface_files.c"
                              break;
#line 12656 "parse_tree.write_module_interface_files.c"
                            case (MR_Integer) 0:
#line 12658 "parse_tree.write_module_interface_files.c"
                              {
#line 12660 "parse_tree.write_module_interface_files.c"
                                MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_73_230;

#line 396 "write_module_interface_files.m"
                                {
#line 396 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_73_230 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_71_71, ((MR_Box) (parse_tree__write_module_interface_files__IOGetPredDeclItem_63)));
                                }
#line 396 "write_module_interface_files.m"
                                {
#line 396 "write_module_interface_files.m"
                                  *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_73_230, ((MR_Box) (parse_tree__write_module_interface_files__IOSetPredDeclItem_64)));
                                }
#line 395 "write_module_interface_files.m"
                                *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_72_72;
#line 12675 "parse_tree.write_module_interface_files.c"
                              }
#line 12677 "parse_tree.write_module_interface_files.c"
                              break;
#line 12679 "parse_tree.write_module_interface_files.c"
                          }
#line 372 "write_module_interface_files.m"
                        }
#line 383 "write_module_interface_files.m"
                        break;
#line 383 "write_module_interface_files.m"
                      case (MR_Integer) 0:
#line 384 "write_module_interface_files.m"
                        {
#line 384 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_66 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_71_71;
#line 384 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_72_72;
#line 384 "write_module_interface_files.m"
                        }
#line 383 "write_module_interface_files.m"
                        break;
#line 383 "write_module_interface_files.m"
                    }
#line 358 "write_module_interface_files.m"
                  }
#line 357 "write_module_interface_files.m"
                  break;
#line 357 "write_module_interface_files.m"
              }
#line 341 "write_module_interface_files.m"
            }
#line 269 "write_module_interface_files.m"
            break;
#line 269 "write_module_interface_files.m"
        }
#line 269 "write_module_interface_files.m"
        break;
#line 269 "write_module_interface_files.m"
    }
#line 269 "write_module_interface_files.m"
  }
#line 262 "write_module_interface_files.m"
}

#line 249 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_items_for_private_interface_7_p_0(
#line 249 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 249 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 249 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 249 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_4,
#line 249 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_5,
#line 249 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_6,
#line 249 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_7)
#line 249 "write_module_interface_files.m"
{
#line 253 "write_module_interface_files.m"
  while (MR_TRUE)
#line 253 "write_module_interface_files.m"
    {
#line 253 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 253 "write_module_interface_files.m"
      {
#line 253 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 253 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 253 "write_module_interface_files.m"
          {
#line 254 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_7 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_6;
#line 254 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_4;
#line 253 "write_module_interface_files.m"
          }
#line 253 "write_module_interface_files.m"
        else
#line 256 "write_module_interface_files.m"
          {
#line 256 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 0)));
#line 256 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 1)));
#line 256 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_26_26;
#line 256 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_27_27;

#line 257 "write_module_interface_files.m"
            {
#line 257 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__process_item_for_private_interface_7_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__HeadVar__2_2, parse_tree__write_module_interface_files__Item_18, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_4, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_26_26, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_6, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_27_27);
            }
#line 259 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 259 "write_module_interface_files.m"
            {
#line 259 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__3__tmp_copy_3 = parse_tree__write_module_interface_files__Items_19;
#line 259 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0__tmp_copy_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_26_26;
#line 259 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0__tmp_copy_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_27_27;

#line 259 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0__tmp_copy_6;
#line 259 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0__tmp_copy_4;
#line 259 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__3_3 = parse_tree__write_module_interface_files__HeadVar__3__tmp_copy_3;
#line 259 "write_module_interface_files.m"
            }
#line 259 "write_module_interface_files.m"
            continue;
#line 256 "write_module_interface_files.m"
          }
#line 253 "write_module_interface_files.m"
      }
#line 253 "write_module_interface_files.m"
      break;
#line 253 "write_module_interface_files.m"
    }
#line 249 "write_module_interface_files.m"
}

#line 216 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_item_blocks_for_private_interface_6_p_0(
#line 216 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 216 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 216 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3,
#line 216 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_4,
#line 216 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5,
#line 216 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_6)
#line 216 "write_module_interface_files.m"
{
#line 220 "write_module_interface_files.m"
  while (MR_TRUE)
#line 220 "write_module_interface_files.m"
    {
#line 220 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 220 "write_module_interface_files.m"
      {
#line 220 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 220 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 220 "write_module_interface_files.m"
          {
#line 221 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5;
#line 221 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3;
#line 220 "write_module_interface_files.m"
          }
#line 220 "write_module_interface_files.m"
        else
#line 223 "write_module_interface_files.m"
          {
#line 223 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemBlock_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 223 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemBlocks_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 223 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__AugSection_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_15, (MR_Integer) 0)));
#line 223 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_15, (MR_Integer) 2)));
#line 223 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_39_39;
#line 223 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_40_40;
#line 224 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemBlock_15, (MR_Integer) 1)));

#line 231 "write_module_interface_files.m"
#line 231 "write_module_interface_files.m"
            switch (MR_tag((MR_Word) parse_tree__write_module_interface_files__AugSection_19)) {
#line 231 "write_module_interface_files.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 231 "write_module_interface_files.m"
              case (MR_Integer) 0:
#line 231 "write_module_interface_files.m"
#line 231 "write_module_interface_files.m"
                switch (MR_unmkbody(parse_tree__write_module_interface_files__AugSection_19)) {
#line 231 "write_module_interface_files.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 231 "write_module_interface_files.m"
                  case (MR_Integer) 0:
#line 228 "write_module_interface_files.m"
                    {
#line 229 "write_module_interface_files.m"
                      {
#line 229 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__process_items_for_private_interface_7_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0, parse_tree__write_module_interface_files__Items_21, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_39_39, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_40_40);
                      }
#line 228 "write_module_interface_files.m"
                    }
#line 231 "write_module_interface_files.m"
                    break;
#line 231 "write_module_interface_files.m"
                  case (MR_Integer) 1:
#line 228 "write_module_interface_files.m"
                    {
#line 229 "write_module_interface_files.m"
                      {
#line 229 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__process_items_for_private_interface_7_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1, parse_tree__write_module_interface_files__Items_21, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_39_39, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_40_40);
                      }
#line 228 "write_module_interface_files.m"
                    }
#line 231 "write_module_interface_files.m"
                    break;
#line 231 "write_module_interface_files.m"
                  case (MR_Integer) 2:
#line 233 "write_module_interface_files.m"
                    {
#line 233 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_39_39 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3;
#line 233 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_40_40 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5;
#line 233 "write_module_interface_files.m"
                    }
#line 231 "write_module_interface_files.m"
                    break;
#line 231 "write_module_interface_files.m"
                  case (MR_Integer) 3:
#line 243 "write_module_interface_files.m"
                    {
#line 244 "write_module_interface_files.m"
                      {
#line 244 "write_module_interface_files.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.process_item_blocks_for_private_interface\'/6", (MR_String) "ams_transitively_imported");
#line 244 "write_module_interface_files.m"
                        return;
                      }
#line 243 "write_module_interface_files.m"
                    }
#line 231 "write_module_interface_files.m"
                    break;
#line 231 "write_module_interface_files.m"
                }
#line 231 "write_module_interface_files.m"
                break;
#line 231 "write_module_interface_files.m"
              case (MR_Integer) 1:
#line 235 "write_module_interface_files.m"
                {
#line 235 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_39_39 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3;
#line 235 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_40_40 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5;
#line 235 "write_module_interface_files.m"
                }
#line 231 "write_module_interface_files.m"
                break;
#line 231 "write_module_interface_files.m"
              case (MR_Integer) 2:
#line 236 "write_module_interface_files.m"
                {
#line 236 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_39_39 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3;
#line 236 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_40_40 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5;
#line 236 "write_module_interface_files.m"
                }
#line 231 "write_module_interface_files.m"
                break;
#line 231 "write_module_interface_files.m"
              case (MR_Integer) 3:
#line 231 "write_module_interface_files.m"
#line 231 "write_module_interface_files.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__AugSection_19, (MR_Integer) 0)))) {
#line 231 "write_module_interface_files.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 231 "write_module_interface_files.m"
                  case (MR_Integer) 0:
#line 234 "write_module_interface_files.m"
                    {
#line 234 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_39_39 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3;
#line 234 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_40_40 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5;
#line 234 "write_module_interface_files.m"
                    }
#line 231 "write_module_interface_files.m"
                    break;
#line 231 "write_module_interface_files.m"
                  case (MR_Integer) 1:
#line 240 "write_module_interface_files.m"
                    {
#line 241 "write_module_interface_files.m"
                      {
#line 241 "write_module_interface_files.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.process_item_blocks_for_private_interface\'/6", (MR_String) "ams_opt_imported");
#line 241 "write_module_interface_files.m"
                        return;
                      }
#line 240 "write_module_interface_files.m"
                    }
#line 231 "write_module_interface_files.m"
                    break;
#line 231 "write_module_interface_files.m"
                }
#line 231 "write_module_interface_files.m"
                break;
#line 231 "write_module_interface_files.m"
            }
#line 246 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 246 "write_module_interface_files.m"
            {
#line 246 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2 = parse_tree__write_module_interface_files__ItemBlocks_16;
#line 246 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0__tmp_copy_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_39_39;
#line 246 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0__tmp_copy_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_40_40;

#line 246 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItemsCord_0__tmp_copy_5;
#line 246 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntItemsCord_0__tmp_copy_3;
#line 246 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__2_2 = parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2;
#line 246 "write_module_interface_files.m"
            }
#line 246 "write_module_interface_files.m"
            continue;
#line 223 "write_module_interface_files.m"
          }
#line 220 "write_module_interface_files.m"
      }
#line 220 "write_module_interface_files.m"
      break;
#line 220 "write_module_interface_files.m"
    }
#line 216 "write_module_interface_files.m"
}

#line 90 "write_module_interface_files.m"
void MR_CALL 
parse_tree__write_module_interface_files__write_short_interface_file_5_p_0(
#line 90 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_6,
#line 90 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__SourceFileName_7,
#line 90 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__RawCompUnit_8)
#line 90 "write_module_interface_files.m"
{
#line 496 "write_module_interface_files.m"
  {
#line 496 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 496 "write_module_interface_files.m"
    {
#line 496 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_5_p_0(parse_tree__write_module_interface_files__Globals_6, parse_tree__write_module_interface_files__RawCompUnit_8);
#line 496 "write_module_interface_files.m"
      return;
    }
#line 496 "write_module_interface_files.m"
  }
#line 90 "write_module_interface_files.m"
}

#line 84 "write_module_interface_files.m"
void MR_CALL 
parse_tree__write_module_interface_files__write_interface_file_7_p_0(
#line 84 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_8,
#line 84 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__SourceFileName_9,
#line 84 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__SourceFileModuleName_10,
#line 84 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__RawCompUnit0_11,
#line 84 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeTimestamp_12)
#line 84 "write_module_interface_files.m"
{
#line 408 "write_module_interface_files.m"
  {
#line 408 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 408 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit0_11, (MR_Integer) 0)));
#line 408 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleNameContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit0_11, (MR_Integer) 1)));
#line 408 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntRawItemBlocks_17;
#line 408 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RawCompUnit1_18;
#line 408 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleAndImports2_19;
#line 408 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Errors_24;
#line 408 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AugItemBlocks_51_51;
#line 408 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_52_52;
#line 409 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___RawItemBlocks0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit0_11, (MR_Integer) 2)));

#line 411 "write_module_interface_files.m"
    {
#line 411 "write_module_interface_files.m"
      parse_tree__comp_unit_interface__get_interface_3_p_0((MR_Integer) 1, parse_tree__write_module_interface_files__RawCompUnit0_11, &parse_tree__write_module_interface_files__IntRawItemBlocks_17);
    }
#line 412 "write_module_interface_files.m"
    {
#line 412 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__RawCompUnit1_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 412 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit1_18, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_14));
#line 412 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit1_18, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_15));
#line 412 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit1_18, 2) = ((MR_Box) (parse_tree__write_module_interface_files__IntRawItemBlocks_17));
#line 412 "write_module_interface_files.m"
    }
#line 416 "write_module_interface_files.m"
    {
#line 416 "write_module_interface_files.m"
      parse_tree__modules__grab_unqual_imported_modules_7_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__SourceFileName_9, parse_tree__write_module_interface_files__SourceFileModuleName_10, parse_tree__write_module_interface_files__RawCompUnit1_18, &parse_tree__write_module_interface_files__ModuleAndImports2_19);
    }
#line 421 "write_module_interface_files.m"
    {
#line 421 "write_module_interface_files.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(parse_tree__write_module_interface_files__ModuleAndImports2_19, &parse_tree__write_module_interface_files__STATE_VARIABLE_AugItemBlocks_51_51, &parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_52_52, &parse_tree__write_module_interface_files__Errors_24);
    }
#line 423 "write_module_interface_files.m"
    {
#line 423 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__write_module_interface_files__Errors_24);
    }
#line 434 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 426 "write_module_interface_files.m"
      {
#line 426 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__IntFileName_27;
#line 426 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__Int2FileName_28;
#line 426 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_62_62;
#line 426 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_65_65;
#line 426 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_67_67;
#line 426 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_68_68;
#line 426 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_70_70;
#line 426 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_72_72;
#line 425 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumWarnings_25;
#line 425 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumErrors_26;

#line 425 "write_module_interface_files.m"
        {
#line 425 "write_module_interface_files.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_52_52, parse_tree__write_module_interface_files__Globals_8, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_25, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors_26);
        }
#line 427 "write_module_interface_files.m"
        {
#line 427 "write_module_interface_files.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_module_interface_files__IntFileName_27);
        }
#line 429 "write_module_interface_files.m"
        {
#line 429 "write_module_interface_files.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, (MR_String) ".int2", (MR_Integer) 1, &parse_tree__write_module_interface_files__Int2FileName_28);
        }
#line 433 "write_module_interface_files.m"
        {
#line 433 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_72_72, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Int2FileName_28));
#line 433 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[7])));
#line 433 "write_module_interface_files.m"
        }
#line 433 "write_module_interface_files.m"
        {
#line 433 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_70_70, 0) = ((MR_Box) ((MR_String) "\140"));
#line 433 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_70_70, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_72_72));
#line 433 "write_module_interface_files.m"
        }
#line 432 "write_module_interface_files.m"
        {
#line 432 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_68_68, 0) = ((MR_Box) ((MR_String) "\' and "));
#line 432 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_68_68, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_70_70));
#line 432 "write_module_interface_files.m"
        }
#line 432 "write_module_interface_files.m"
        {
#line 432 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_67_67, 0) = ((MR_Box) (parse_tree__write_module_interface_files__IntFileName_27));
#line 432 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_67_67, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_68_68));
#line 432 "write_module_interface_files.m"
        }
#line 432 "write_module_interface_files.m"
        {
#line 432 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_65_65, 0) = ((MR_Box) ((MR_String) "\140"));
#line 432 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_65_65, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_67_67));
#line 432 "write_module_interface_files.m"
        }
#line 431 "write_module_interface_files.m"
        {
#line 431 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_62_62, 0) = ((MR_Box) ((MR_String) "Error reading short interface files.\n"));
#line 431 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_62_62, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_65_65));
#line 431 "write_module_interface_files.m"
        }
#line 431 "write_module_interface_files.m"
        {
#line 431 "write_module_interface_files.m"
          mercury__io__write_strings_3_p_0(parse_tree__write_module_interface_files__V_62_62);
#line 431 "write_module_interface_files.m"
          return;
        }
#line 426 "write_module_interface_files.m"
      }
#line 434 "write_module_interface_files.m"
    else
#line 437 "write_module_interface_files.m"
      {
#line 437 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NoHaltAtWarnGlobals_33;
#line 437 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__NumErrors_34;
#line 437 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_77_77;
#line 437 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_78_78;
#line 437 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AugItemBlocks_76_127;
#line 437 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_80_128;
#line 436 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_29_29;
#line 436 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_30_30;
#line 436 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_31_31;
#line 436 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_32_32;
#line 443 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumWarnings_122;

#line 437 "write_module_interface_files.m"
        {
#line 437 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_77_77 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
        }
#line 437 "write_module_interface_files.m"
        {
#line 437 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 437 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_78_78, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_15));
#line 437 "write_module_interface_files.m"
        }
#line 436 "write_module_interface_files.m"
        {
#line 436 "write_module_interface_files.m"
          parse_tree__module_qual__module_qualify_aug_item_blocks_13_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, parse_tree__write_module_interface_files__STATE_VARIABLE_AugItemBlocks_51_51, &parse_tree__write_module_interface_files__STATE_VARIABLE_AugItemBlocks_76_127, parse_tree__write_module_interface_files__V_77_77, &parse_tree__write_module_interface_files__V_29_29, parse_tree__write_module_interface_files__V_78_78, (MR_String) "", &parse_tree__write_module_interface_files__V_30_30, &parse_tree__write_module_interface_files__V_31_31, &parse_tree__write_module_interface_files__V_32_32, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_52_52, &parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_80_128);
        }
#line 441 "write_module_interface_files.m"
        {
#line 441 "write_module_interface_files.m"
          libs__globals__set_option_4_p_0((MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_3[0]), parse_tree__write_module_interface_files__Globals_8, &parse_tree__write_module_interface_files__NoHaltAtWarnGlobals_33);
        }
#line 443 "write_module_interface_files.m"
        {
#line 443 "write_module_interface_files.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_80_128, parse_tree__write_module_interface_files__NoHaltAtWarnGlobals_33, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_122, (MR_Integer) 0, &parse_tree__write_module_interface_files__NumErrors_34);
        }
#line 445 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__NumErrors_34 > (MR_Integer) 0);
#line 450 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 447 "write_module_interface_files.m"
          {
#line 447 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_91_91;
#line 447 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_94_94;
#line 447 "write_module_interface_files.m"
            MR_String parse_tree__write_module_interface_files__IntFileName_123;

#line 446 "write_module_interface_files.m"
            {
#line 446 "write_module_interface_files.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_module_interface_files__IntFileName_123);
            }
#line 448 "write_module_interface_files.m"
            {
#line 448 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_94_94, 0) = ((MR_Box) (parse_tree__write_module_interface_files__IntFileName_123));
#line 448 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[6])));
#line 448 "write_module_interface_files.m"
            }
#line 448 "write_module_interface_files.m"
            {
#line 448 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_91_91, 0) = ((MR_Box) ((MR_String) "\140"));
#line 448 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_91_91, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_94_94));
#line 448 "write_module_interface_files.m"
            }
#line 448 "write_module_interface_files.m"
            {
#line 448 "write_module_interface_files.m"
              mercury__io__write_strings_3_p_0(parse_tree__write_module_interface_files__V_91_91);
#line 448 "write_module_interface_files.m"
              return;
            }
#line 447 "write_module_interface_files.m"
          }
#line 450 "write_module_interface_files.m"
        else
#line 457 "write_module_interface_files.m"
          {
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__InterfaceSpecs0_35;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__InterfaceSpecs1_36;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ToCheckIntItemBlock_37;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ToCheckIntCompUnit_38;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__InterfaceSpecs_39;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ParseTreeInt1_42;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__BothRawItemBlocks_43;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ShortIntItems_44;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ShortImpItems_45;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ParseTreeInt2_46;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_101_101;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_102_102;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_103_103;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_104_104;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_105_105;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_107_107;
#line 457 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_109_109;
#line 469 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files___NumWarnings2_40;
#line 469 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files___NumErrors2_41;

#line 456 "write_module_interface_files.m"
            {
#line 456 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__aug_item_blocks_to_int_imp_items_4_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_AugItemBlocks_76_127, (MR_Integer) 1, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_101_101, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_102_102);
            }
#line 458 "write_module_interface_files.m"
            {
#line 458 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_4_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_101_101, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_103_103, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_102_102, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_104_104);
            }
#line 459 "write_module_interface_files.m"
            {
#line 459 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_4_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_103_103, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_105_105, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__InterfaceSpecs0_35);
            }
#line 461 "write_module_interface_files.m"
            {
#line 461 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__report_and_strip_clauses_in_items_4_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_104_104, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_107_107, parse_tree__write_module_interface_files__InterfaceSpecs0_35, &parse_tree__write_module_interface_files__InterfaceSpecs1_36);
            }
#line 463 "write_module_interface_files.m"
            {
#line 463 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ToCheckIntItemBlock_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 463 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ToCheckIntItemBlock_37, 0) = ((MR_Box) ((MR_Integer) 0));
#line 463 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ToCheckIntItemBlock_37, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_15));
#line 463 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ToCheckIntItemBlock_37, 2) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_105_105));
#line 463 "write_module_interface_files.m"
            }
#line 466 "write_module_interface_files.m"
            {
#line 466 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_109_109, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ToCheckIntItemBlock_37));
#line 466 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "write_module_interface_files.m"
            }
#line 465 "write_module_interface_files.m"
            {
#line 465 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ToCheckIntCompUnit_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 465 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ToCheckIntCompUnit_38, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_14));
#line 465 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ToCheckIntCompUnit_38, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_15));
#line 465 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ToCheckIntCompUnit_38, 2) = ((MR_Box) (parse_tree__write_module_interface_files__V_109_109));
#line 465 "write_module_interface_files.m"
            }
#line 467 "write_module_interface_files.m"
            {
#line 467 "write_module_interface_files.m"
              parse_tree__modules__check_int_for_no_exports_6_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ToCheckIntCompUnit_38, parse_tree__write_module_interface_files__InterfaceSpecs1_36, &parse_tree__write_module_interface_files__InterfaceSpecs_39);
            }
#line 469 "write_module_interface_files.m"
            {
#line 469 "write_module_interface_files.m"
              parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__InterfaceSpecs_39, parse_tree__write_module_interface_files__Globals_8, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings2_40, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors2_41);
            }
#line 472 "write_module_interface_files.m"
            {
#line 472 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ParseTreeInt1_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 472 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_42, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_14));
#line 472 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_42, 1) = ((MR_Box) ((MR_Integer) 3));
#line 472 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_42, 2) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_15));
#line 472 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_42, 3) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_105_105));
#line 472 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt1_42, 4) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_107_107));
#line 472 "write_module_interface_files.m"
            }
#line 474 "write_module_interface_files.m"
            {
#line 474 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ParseTreeInt1_42, parse_tree__write_module_interface_files__MaybeTimestamp_12);
            }
#line 478 "write_module_interface_files.m"
            {
#line 478 "write_module_interface_files.m"
              parse_tree__prog_item__int_impl_items_to_raw_item_blocks_4_p_0(parse_tree__write_module_interface_files__ModuleNameContext_15, parse_tree__write_module_interface_files__STATE_VARIABLE_IntItems_105_105, parse_tree__write_module_interface_files__STATE_VARIABLE_ImpItems_107_107, &parse_tree__write_module_interface_files__BothRawItemBlocks_43);
            }
#line 480 "write_module_interface_files.m"
            {
#line 480 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__get_short_interface_from_raw_item_blocks_4_p_0((MR_Integer) 0, parse_tree__write_module_interface_files__BothRawItemBlocks_43, &parse_tree__write_module_interface_files__ShortIntItems_44, &parse_tree__write_module_interface_files__ShortImpItems_45);
            }
#line 482 "write_module_interface_files.m"
            {
#line 482 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ParseTreeInt2_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 482 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt2_46, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_14));
#line 482 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt2_46, 1) = ((MR_Box) ((MR_Integer) 2));
#line 482 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt2_46, 2) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_15));
#line 482 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt2_46, 3) = ((MR_Box) (parse_tree__write_module_interface_files__ShortIntItems_44));
#line 482 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt2_46, 4) = ((MR_Box) (parse_tree__write_module_interface_files__ShortImpItems_45));
#line 482 "write_module_interface_files.m"
            }
#line 484 "write_module_interface_files.m"
            {
#line 484 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ParseTreeInt2_46, parse_tree__write_module_interface_files__MaybeTimestamp_12);
            }
#line 486 "write_module_interface_files.m"
            {
#line 486 "write_module_interface_files.m"
              parse_tree__module_cmds__touch_interface_datestamp_5_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, (MR_String) ".date");
#line 486 "write_module_interface_files.m"
              return;
            }
#line 457 "write_module_interface_files.m"
          }
#line 437 "write_module_interface_files.m"
      }
#line 408 "write_module_interface_files.m"
  }
#line 84 "write_module_interface_files.m"
}

#line 68 "write_module_interface_files.m"
void MR_CALL 
parse_tree__write_module_interface_files__write_private_interface_file_7_p_0(
#line 68 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_8,
#line 68 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__SourceFileName_9,
#line 68 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__SourceFileModuleName_10,
#line 68 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__RawCompUnit0_11,
#line 68 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeTimestamp_12)
#line 68 "write_module_interface_files.m"
{
#line 137 "write_module_interface_files.m"
  {
#line 137 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 137 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit0_11, (MR_Integer) 0)));
#line 137 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleNameContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit0_11, (MR_Integer) 1)));
#line 137 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleAndImports_17;
#line 137 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AugItemBlocks1_18;
#line 137 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Specs0_19;
#line 137 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Errors_20;
#line 138 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__RawCompUnit0_11, (MR_Integer) 2)));

#line 139 "write_module_interface_files.m"
    {
#line 139 "write_module_interface_files.m"
      parse_tree__modules__grab_unqual_imported_modules_7_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__SourceFileName_9, parse_tree__write_module_interface_files__SourceFileModuleName_10, parse_tree__write_module_interface_files__RawCompUnit0_11, &parse_tree__write_module_interface_files__ModuleAndImports_17);
    }
#line 143 "write_module_interface_files.m"
    {
#line 143 "write_module_interface_files.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(parse_tree__write_module_interface_files__ModuleAndImports_17, &parse_tree__write_module_interface_files__AugItemBlocks1_18, &parse_tree__write_module_interface_files__Specs0_19, &parse_tree__write_module_interface_files__Errors_20);
    }
#line 145 "write_module_interface_files.m"
    {
#line 145 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__write_module_interface_files__Errors_20);
    }
#line 153 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 147 "write_module_interface_files.m"
      {
#line 147 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__FileName_21;
#line 147 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_46_46;
#line 147 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_49_49;
#line 147 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_51_51;
#line 149 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumWarnings_22;
#line 149 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumErrors_23;

#line 146 "write_module_interface_files.m"
        {
#line 146 "write_module_interface_files.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, (MR_String) ".int0", (MR_Integer) 1, &parse_tree__write_module_interface_files__FileName_21);
        }
#line 149 "write_module_interface_files.m"
        {
#line 149 "write_module_interface_files.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__Specs0_19, parse_tree__write_module_interface_files__Globals_8, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_22, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors_23);
        }
#line 152 "write_module_interface_files.m"
        {
#line 152 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_51_51, 0) = ((MR_Box) (parse_tree__write_module_interface_files__FileName_21));
#line 152 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[7])));
#line 152 "write_module_interface_files.m"
        }
#line 152 "write_module_interface_files.m"
        {
#line 152 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_49_49, 0) = ((MR_Box) ((MR_String) "\140"));
#line 152 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_49_49, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_51_51));
#line 152 "write_module_interface_files.m"
        }
#line 151 "write_module_interface_files.m"
        {
#line 151 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_46_46, 0) = ((MR_Box) ((MR_String) "Error reading interface files.\n"));
#line 151 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_46_46, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_49_49));
#line 151 "write_module_interface_files.m"
        }
#line 151 "write_module_interface_files.m"
        {
#line 151 "write_module_interface_files.m"
          mercury__io__write_strings_3_p_0(parse_tree__write_module_interface_files__V_46_46);
#line 151 "write_module_interface_files.m"
          return;
        }
#line 147 "write_module_interface_files.m"
      }
#line 153 "write_module_interface_files.m"
    else
#line 157 "write_module_interface_files.m"
      {
#line 157 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__AugItemBlocks2_24;
#line 157 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Specs_29;
#line 157 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_55_55;
#line 157 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_56_56;
#line 155 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___EventSpecMap_25;
#line 155 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 155 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 155 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_28_28;

#line 156 "write_module_interface_files.m"
        {
#line 156 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_55_55 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
        }
#line 157 "write_module_interface_files.m"
        {
#line 157 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 157 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_56_56, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_15));
#line 157 "write_module_interface_files.m"
        }
#line 155 "write_module_interface_files.m"
        {
#line 155 "write_module_interface_files.m"
          parse_tree__module_qual__module_qualify_aug_item_blocks_13_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, parse_tree__write_module_interface_files__AugItemBlocks1_18, &parse_tree__write_module_interface_files__AugItemBlocks2_24, parse_tree__write_module_interface_files__V_55_55, &parse_tree__write_module_interface_files___EventSpecMap_25, parse_tree__write_module_interface_files__V_56_56, (MR_String) "", &parse_tree__write_module_interface_files__V_26_26, &parse_tree__write_module_interface_files__V_27_27, &parse_tree__write_module_interface_files__V_28_28, parse_tree__write_module_interface_files__Specs0_19, &parse_tree__write_module_interface_files__Specs_29);
        }
#line 166 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__Specs_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "write_module_interface_files.m"
          {
#line 167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_91_91 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__IntItemsCord_32;
#line 167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ImpItemsCord_33;
#line 167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__IntItems_34;
#line 167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ImpItems_35;
#line 167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ParseTreeInt0_36;
#line 167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_58_58;
#line 167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_59_59;

#line 173 "write_module_interface_files.m"
            {
#line 173 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_58_58 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_91_91);
            }
#line 173 "write_module_interface_files.m"
            {
#line 173 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_59_59 = mercury__cord__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_91_91);
            }
#line 171 "write_module_interface_files.m"
            {
#line 171 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__process_item_blocks_for_private_interface_6_p_0(parse_tree__write_module_interface_files__ModuleName_14, parse_tree__write_module_interface_files__AugItemBlocks2_24, parse_tree__write_module_interface_files__V_58_58, &parse_tree__write_module_interface_files__IntItemsCord_32, parse_tree__write_module_interface_files__V_59_59, &parse_tree__write_module_interface_files__ImpItemsCord_33);
            }
#line 174 "write_module_interface_files.m"
            {
#line 174 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__IntItems_34 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_91_91, parse_tree__write_module_interface_files__IntItemsCord_32);
            }
#line 175 "write_module_interface_files.m"
            {
#line 175 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ImpItems_35 = mercury__cord__list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_91_91, parse_tree__write_module_interface_files__ImpItemsCord_33);
            }
#line 176 "write_module_interface_files.m"
            {
#line 176 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ParseTreeInt0_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 176 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_36, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_14));
#line 176 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_36, 1) = ((MR_Box) ((MR_Integer) 0));
#line 176 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_36, 2) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleNameContext_15));
#line 176 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_36, 3) = ((MR_Box) (parse_tree__write_module_interface_files__IntItems_34));
#line 176 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ParseTreeInt0_36, 4) = ((MR_Box) (parse_tree__write_module_interface_files__ImpItems_35));
#line 176 "write_module_interface_files.m"
            }
#line 178 "write_module_interface_files.m"
            {
#line 178 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ParseTreeInt0_36, parse_tree__write_module_interface_files__MaybeTimestamp_12);
            }
#line 180 "write_module_interface_files.m"
            {
#line 180 "write_module_interface_files.m"
              parse_tree__module_cmds__touch_interface_datestamp_5_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, (MR_String) ".date0");
#line 180 "write_module_interface_files.m"
              return;
            }
#line 167 "write_module_interface_files.m"
          }
#line 166 "write_module_interface_files.m"
        else
#line 159 "write_module_interface_files.m"
          {
#line 159 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_70_70;
#line 159 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_73_73;
#line 159 "write_module_interface_files.m"
            MR_String parse_tree__write_module_interface_files__FileName_79;
#line 163 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files___NumWarnings_77;
#line 163 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files___NumErrors_78;

#line 160 "write_module_interface_files.m"
            {
#line 160 "write_module_interface_files.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_8, parse_tree__write_module_interface_files__ModuleName_14, (MR_String) ".m", (MR_Integer) 1, &parse_tree__write_module_interface_files__FileName_79);
            }
#line 163 "write_module_interface_files.m"
            {
#line 163 "write_module_interface_files.m"
              parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__Specs_29, parse_tree__write_module_interface_files__Globals_8, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_77, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors_78);
            }
#line 165 "write_module_interface_files.m"
            {
#line 165 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_73_73, 0) = ((MR_Box) (parse_tree__write_module_interface_files__FileName_79));
#line 165 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[7])));
#line 165 "write_module_interface_files.m"
            }
#line 165 "write_module_interface_files.m"
            {
#line 165 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_70_70, 0) = ((MR_Box) ((MR_String) "\140"));
#line 165 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_70_70, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_73_73));
#line 165 "write_module_interface_files.m"
            }
#line 165 "write_module_interface_files.m"
            {
#line 165 "write_module_interface_files.m"
              mercury__io__write_strings_3_p_0(parse_tree__write_module_interface_files__V_70_70);
#line 165 "write_module_interface_files.m"
              return;
            }
#line 159 "write_module_interface_files.m"
          }
#line 157 "write_module_interface_files.m"
      }
#line 137 "write_module_interface_files.m"
  }
#line 68 "write_module_interface_files.m"
}

void mercury__parse_tree__write_module_interface_files__init(void)
{
}

void mercury__parse_tree__write_module_interface_files__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_need_foreign_imports_0);
	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_need_imports_0);
	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_strip_assertions_0);
	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_type_defn_map_0);
	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_type_defn_pair_0);
}

void mercury__parse_tree__write_module_interface_files__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.write_module_interface_files. */
